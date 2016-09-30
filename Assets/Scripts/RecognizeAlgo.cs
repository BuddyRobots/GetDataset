using OpenCVForUnity;
using System.Collections.Generic;

public class RecognizeAlgo
{
    // Size of input image 1*28*28
    private const int imageSize = 28;


    public RecognizeAlgo()
    {}

    public List<Mat> createDataSet(Mat frameImg/*, string path*/)
    {
        Mat grayImg = new Mat();
        Mat binaryImg = new Mat();
        Mat cardTransImg = new Mat();
        Mat cardImg = new Mat();
        List<Mat> result = new List<Mat>();

        /// Detect Cards =============================================================
        MatOfPoint2f point = new MatOfPoint2f(new Point[4]
            { new Point(0, 0), new Point(imageSize, 0), new Point(imageSize, imageSize), new Point(0, imageSize) });

        // Thresholding
        Imgproc.cvtColor(frameImg, grayImg, Imgproc.COLOR_BGR2GRAY);
        Imgproc.adaptiveThreshold(grayImg, binaryImg, 255, Imgproc.ADAPTIVE_THRESH_GAUSSIAN_C, Imgproc.THRESH_BINARY, 15, 1);

        // Get all the squares
        List<List<Point>> squares = new List<List<Point>>();
        squares = CardDetector.findSquares(binaryImg);

        for (int i = 0; i < squares.Count; i++)
        {
            // Perspective transform
            Mat homography = Calib3d.findHomography(new MatOfPoint2f(squares[i].ToArray()), point);
            Imgproc.warpPerspective(frameImg, cardTransImg, homography, new Size());

            cardImg = cardTransImg.submat(0, imageSize, 0, imageSize);

            result.Add(cardImg);
            //path = path + "/" + System.DateTime.Now.Ticks + ".jpg";

            //Imgcodecs.imwrite(path, cardImg);
        }
        return result;
    }
}
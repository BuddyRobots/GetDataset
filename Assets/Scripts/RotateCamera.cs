﻿using OpenCVForUnity;
using System.Collections.Generic;

namespace MagicCircuit
{
    public class RotateCamera
    {
        List<Point> ptsBoard;
        List<Point> ptsWindow;

        Mat homo;

        public RotateCamera()
        {
            ptsBoard = new List<Point>();
            ptsWindow = new List<Point>();

            ptsBoard.Add(new Point(60, 123));
            ptsBoard.Add(new Point(398, 125));
            ptsBoard.Add(new Point(119, 411));
            ptsBoard.Add(new Point(337, 411));

            ptsWindow.Add(new Point(7, 28));
            ptsWindow.Add(new Point(478, 28));
            ptsWindow.Add(new Point(7, 570));
            ptsWindow.Add(new Point(478, 570));

            Mat rectBrd = Converters.vector_Point2f_to_Mat(ptsBoard);
            Mat rectWin = Converters.vector_Point2f_to_Mat(ptsWindow);

            homo = Imgproc.getPerspectiveTransform(rectBrd, rectWin);
        }

        public void rotate(ref Mat img)
        {
            Core.transpose(img, img);

            Mat tmp = transform(img);

            img = new Mat(tmp, new Rect(ptsWindow[0], ptsWindow[3]));
        }

        public Mat transform(Mat img)
        {
            Mat rst = new Mat();

            Imgproc.warpPerspective(img, rst, homo, img.size());

            return rst;
        }
    }
}

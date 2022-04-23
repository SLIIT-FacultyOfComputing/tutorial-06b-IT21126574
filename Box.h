class Box {
    private:
       int Length;
       int Width;
       int Height;
    public:
       //setter 
      void setLength(double l);
      void setWidth(double w);
      void setHeight(double h);

      int getLength();
      int getWidth();
      int getHeight();
 
      int calcVolume();
};

#ifndef __MAXSEGMENT_HPP
#define __MAXSEGMENT_HPP


class MaxSegment{
	private:
		int start;
		int final;
		int soma;
		
	public:
		MaxSegment();
		MaxSegment(int start, int final, int soma);
		int getStart();
		void setStart(int start);
		int getFinal();
		void setFinal(int final);
		int getSoma();
		void setSoma(int soma);
};
#endif

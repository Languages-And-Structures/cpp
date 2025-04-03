# include <iostream>

int main(){
    for (int i = 0; i < 5; i++)
    {
        for(int j = 0; j <= i; j++)
        {
            for (int k = 0; k <= j; k++)
            {
                std::cout << i << "." << j <<"."<<k<< '\n';
            }         
        }
        
    }
    
}
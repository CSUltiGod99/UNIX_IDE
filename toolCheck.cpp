// CPlusPlus Check for Tool - CheckBox:
// source code:

#include <iostream>
#include <string>

class CheckBoxTool {
    private:
       std::string name;
       int modelBoxCheckQuantity = 1;

    public:
// please add a constructor declaration
      CheckBoxTool(string chbx, int quant)
      {
          name = chbx;
          int = quant;

      }

      void display()
      {
          std::cout << "Name" << name << "Check Box Quantity" << modelBoxCheckQuantity << std::endl;
      }

      int main( )
{
        // Create an instance of a Check Box Model for the IDE
        CheckBoxTool chbxtool1(CheckBxModel,1);

        // Display the information of the CheckBox tool
        chxtool1.display();

        return 0;
}

}


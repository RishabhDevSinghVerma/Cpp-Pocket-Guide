                                                 𝑨𝒓𝒓𝒂𝒚𝒔 𝒊𝒏 𝑪++
#include <iostream>

using namespace std;

int main()
{

   /*|---𝐃𝐞𝐜𝐥𝐚𝐫𝐚𝐭𝐢𝐨𝐧 𝐨𝐟 𝐀𝐫𝐫𝐚𝐲
      |-𝐝𝐚𝐭𝐚𝐭𝐲𝐩𝐞 𝐚𝐫𝐫𝐚𝐲𝐍𝐚𝐦𝐞[𝐒𝐢𝐳𝐞];
      |---𝐈𝐧𝐭𝐢𝐥𝐢𝐬𝐚𝐭𝐢𝐨𝐧 𝐨𝐟 𝐀𝐫𝐫𝐚𝐲
      |-𝐚𝐫𝐫𝐚𝐲𝐍𝐚𝐦𝐞[𝐒𝐢𝐳𝐞]={𝐄𝐥𝐞𝐦𝐞𝐧𝐭𝐬 𝐖𝐡𝐢𝐜𝐡 𝐖𝐞 𝐰𝐚𝐧𝐭 𝐭𝐨 𝐬𝐭𝐨𝐫𝐞}
      */
    int arr[5] = {1, 2, 3, 4, 5};

/*𝐀𝐜𝐜𝐞𝐬𝐬 𝐨𝐟 𝐀𝐫𝐫𝐚𝐲
    𝟏)𝐖𝐞 𝐜𝐚𝐧 𝐀𝐜𝐜𝐞𝐬𝐬 𝐭𝐡𝐞 𝐚𝐫𝐫𝐚𝐲 𝐰𝐢𝐭𝐡 𝐭𝐡𝐞 𝐡𝐞𝐥𝐩 𝐨𝐟 𝐈𝐧𝐝𝐞𝐱𝐢𝐧𝐠
    𝟐)𝐈𝐧𝐝𝐞𝐱𝐢𝐧𝐠 𝐒𝐭𝐚𝐫𝐭 𝐟𝐫𝐨𝐦 𝟎 (𝐙𝐞𝐫𝐨) 𝐭𝐨 𝐧-𝟏 (𝐬𝐢𝐳𝐞 𝐨𝐟 𝐀𝐫𝐫𝐚𝐲-𝟏)
    */
    cout << arr[3] << endl;

    /*𝐈𝐟 𝐖𝐞 𝐖𝐚𝐧𝐭 𝐭𝐨 𝐬𝐞𝐭 𝐚 𝐛𝐲 𝐃𝐞𝐟𝐚𝐮𝐥𝐭 𝐕𝐚𝐥𝐮𝐞 𝐙𝐞𝐫𝐨 𝐭𝐨 𝐚𝐫𝐫𝐚𝐲  //𝐝𝐚𝐭𝐚𝐭𝐲𝐩𝐞 𝐚𝐫𝐫𝐚𝐲𝐍𝐚𝐦𝐞[𝐒𝐢𝐳𝐞]={𝟎};
      𝐈𝐟 𝐰𝐞 𝐝𝐨𝐞𝐬 𝐧𝐨𝐭 𝐢𝐧𝐭𝐢𝐥𝐢𝐬𝐞 𝐚𝐧𝐲 𝐞𝐥𝐞𝐦𝐞𝐧𝐭 𝐭𝐨 𝐨𝐮𝐫 𝐚𝐫𝐫𝐚𝐲 𝐢𝐭 𝐩𝐫𝐢𝐧𝐭𝐬 𝐠𝐚𝐫𝐛𝐚𝐠𝐞 𝐯𝐚𝐥𝐮𝐞
      𝐈𝐟 𝐎𝐮𝐫 𝐂𝐮𝐫𝐥𝐲 𝐈𝐧𝐭𝐢𝐥𝐢𝐬𝐞 𝐛𝐫𝐚𝐜𝐞 𝐚𝐫𝐞 𝐞𝐦𝐩𝐭𝐲 𝐢𝐭𝐬 𝐩𝐫𝐢𝐧𝐭𝐬 𝐳𝐞𝐫𝐨
      */
    int array[4] = {};
    cout << array[0] << endl;
    cout << array[1] << endl;
    cout << array[2] << endl;
    cout << array[3] << endl;


    //𝐈𝐧𝐭𝐢𝐥𝐢𝐬𝐢𝐧𝐠 𝐀𝐧𝐝 𝐏𝐫𝐢𝐧𝐭𝐢𝐧𝐠  𝐀𝐫𝐫𝐚𝐲 𝐔𝐬𝐢𝐧𝐠 𝐋𝐨𝐨𝐩𝐬

    int new_arr[6];

    cout<<"Enter the Elements:";
    for(int i=0;i<6;i++)   //𝐓𝐚𝐤𝐞 𝐈𝐧𝐩𝐮𝐭𝐬 𝐔𝐬𝐢𝐧𝐠 𝐅𝐨𝐫 𝐋𝐨𝐨𝐩
    {
       cin>>new_arr[i];
    }

    for(int i=0;i<6;i++)   //𝐏𝐫𝐢𝐧𝐭𝐢𝐧𝐠 𝐈𝐧𝐩𝐮𝐭𝐬 𝐔𝐬𝐢𝐧𝐠 𝐅𝐨𝐫 𝐋𝐨𝐨𝐩
    {
       cout<<new_arr[i]<<" ";
    }

    /*𝐈𝐟 𝐖𝐞 𝐖𝐚𝐧𝐭 𝐭𝐨 𝐒𝐞𝐭 𝐚 𝐒𝐢𝐦𝐢𝐥𝐚𝐫 𝐭𝐲𝐩𝐞 𝐨𝐟 𝐂𝐨𝐧𝐬𝐭𝐚𝐧𝐭 𝐄𝐥𝐞𝐦𝐞𝐧𝐭 𝐭𝐨 𝐎𝐮𝐫 𝐀𝐫𝐫𝐚𝐲
    𝐂++ 𝐀𝐥𝐠𝐨𝐫𝐢𝐭𝐡𝐦 𝐟𝐢𝐥𝐥_𝐧() 𝐟𝐮𝐧𝐜𝐭𝐢𝐨𝐧 𝐢𝐬 𝐮𝐬𝐞𝐝 𝐭𝐨 𝐚𝐬𝐬𝐢𝐠𝐧 𝐚 𝐧𝐞𝐰 𝐯𝐚𝐥𝐮𝐞 𝐭𝐨 𝐚 𝐬𝐩𝐞𝐜𝐢𝐟𝐢𝐞𝐝 𝐧𝐮𝐦𝐛𝐞𝐫 𝐨𝐟 𝐞𝐥𝐞𝐦𝐞𝐧𝐭𝐬 𝐢𝐧 𝐚 𝐫𝐚𝐧𝐠𝐞 𝐛𝐞𝐠𝐢𝐧𝐧𝐢𝐧𝐠 
    𝐰𝐢𝐭𝐡 𝐚 𝐩𝐚𝐫𝐭𝐢𝐜𝐮𝐥𝐚𝐫 𝐞𝐥𝐞𝐦𝐞𝐧𝐭.

    𝐒𝐲𝐧𝐭𝐚𝐱: 𝐅𝐢𝐥𝐥_𝐧 (𝐍𝐚𝐦𝐞 𝐨𝐟 𝐀𝐫𝐫𝐚𝐲, 𝐒𝐢𝐳𝐞 𝐧, 𝐕𝐚𝐥𝐮𝐞);
*/


    int arr_Const[5];
    fill_n(arr_Const,5,6);

    
    for(int i=0;i<5;i++)   //𝐏𝐫𝐢𝐧𝐭𝐢𝐧𝐠 𝐈𝐧𝐩𝐮𝐭𝐬 𝐔𝐬𝐢𝐧𝐠 𝐅𝐨𝐫 𝐋𝐨𝐨𝐩
    {
       cout<<arr_Const[i]<<" ";
    }


    return 0;
}
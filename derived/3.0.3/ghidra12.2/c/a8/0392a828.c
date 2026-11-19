
void FUN_0392a828(long param_1,int param_2)

{
  undefined4 uVar1;
  
  *(undefined4 *)(param_1 + 0x930) = 0;
  *(undefined4 *)(param_1 + 0x428) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x4a0) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x518) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x590) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x608) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x680) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x6f8) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x770) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x7e8) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x860) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x8d8) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x950) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x408) = 0;
  *(undefined4 *)(param_1 + 0x480) = 6;
  *(undefined4 *)(param_1 + 0x4f8) = 1;
  *(undefined4 *)(param_1 + 0x570) = 2;
  *(undefined4 *)(param_1 + 0x660) = 3;
  *(undefined4 *)(param_1 + 0x5e8) = 1;
  *(undefined4 *)(param_1 + 0x6d8) = 2;
  *(undefined4 *)(param_1 + 0x7c8) = 3;
  *(undefined4 *)(param_1 + 0x750) = 1;
  *(undefined4 *)(param_1 + 0x840) = 4;
  *(undefined4 *)(param_1 + 0x8b8) = 5;
  *(undefined4 *)(param_1 + 600) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x278) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x298) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x2b8) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x2d8) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x2f8) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x318) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x338) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x358) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x378) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x398) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x3b8) = 0xffffffff;
  if (param_2 == 2) {
    *(undefined4 *)(param_1 + 0x318) = 6;
    *(undefined4 *)(param_1 + 600) = 0;
    *(undefined4 *)(param_1 + 0x338) = 7;
    *(undefined4 *)(param_1 + 0x278) = 1;
    *(undefined4 *)(param_1 + 0x358) = 8;
    *(undefined4 *)(param_1 + 0x298) = 2;
    *(undefined4 *)(param_1 + 0x2b8) = 3;
    *(undefined4 *)(param_1 + 0x2d8) = 4;
    *(undefined4 *)(param_1 + 0x2f8) = 5;
    *(undefined4 *)(param_1 + 0x378) = 9;
    uVar1 = 10;
  }
  else {
    if (param_2 != 1) {
      if (param_2 == 0) {
        *(undefined4 *)(param_1 + 600) = 0;
        *(undefined4 *)(param_1 + 0x278) = 1;
        *(undefined4 *)(param_1 + 0x298) = 2;
      }
      goto LAB_0392a99c;
    }
    *(undefined4 *)(param_1 + 0x298) = 5;
    *(undefined4 *)(param_1 + 0x358) = 0;
    *(undefined4 *)(param_1 + 600) = 3;
    *(undefined4 *)(param_1 + 0x278) = 4;
    *(undefined4 *)(param_1 + 0x2b8) = 6;
    *(undefined4 *)(param_1 + 0x2d8) = 7;
    *(undefined4 *)(param_1 + 0x2f8) = 8;
    *(undefined4 *)(param_1 + 0x318) = 9;
    *(undefined4 *)(param_1 + 0x338) = 10;
    *(undefined4 *)(param_1 + 0x378) = 1;
    uVar1 = 2;
  }
  *(undefined4 *)(param_1 + 0x398) = uVar1;
LAB_0392a99c:
  FUN_0392aa50(param_1,param_1 + 0x3c0);
  FUN_0392aa50(param_1,param_1 + 0x438);
  FUN_0392aa50(param_1,param_1 + 0x4b0);
  FUN_0392aa50(param_1,param_1 + 0x528);
  FUN_0392aa50(param_1,param_1 + 0x5a0);
  FUN_0392aa50(param_1,param_1 + 0x618);
  FUN_0392aa50(param_1,param_1 + 0x690);
  FUN_0392aa50(param_1,param_1 + 0x708);
  FUN_0392aa50(param_1,param_1 + 0x780);
  FUN_0392aa50(param_1,param_1 + 0x7f8);
  FUN_0392aa50(param_1,param_1 + 0x870);
  FUN_0392aa50(param_1,param_1 + 0x8e8);
  *(uint *)(param_1 + 0x2338) = *(uint *)(param_1 + 0x2338) | 0x12;
  return;
}


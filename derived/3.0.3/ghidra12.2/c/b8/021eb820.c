
void FUN_021eb820(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  
  *param_1 = 0;
  uVar1 = (uint)DAT_053fee41;
  uVar2 = (uint)DAT_053fee41;
  *param_1 = uVar2;
  if (DAT_053ff9e1 != '\0') {
    uVar1 = uVar2 | 2;
    *param_1 = uVar1;
  }
  if (DAT_05400581 != '\0') {
    uVar1 = uVar1 | 4;
    *param_1 = uVar1;
  }
  if (DAT_05401121 != '\0') {
    uVar1 = uVar1 | 8;
    *param_1 = uVar1;
  }
  if (DAT_05401cc1 != '\0') {
    uVar1 = uVar1 | 0x10;
    *param_1 = uVar1;
  }
  if (DAT_05402861 != '\0') {
    uVar1 = uVar1 | 0x20;
    *param_1 = uVar1;
  }
  if (DAT_05403401 != '\0') {
    uVar1 = uVar1 | 0x40;
    *param_1 = uVar1;
  }
  if (DAT_05403fa1 != '\0') {
    uVar1 = uVar1 | 0x80;
    *param_1 = uVar1;
  }
  if (DAT_05404b41 != '\0') {
    uVar1 = uVar1 | 0x100;
    *param_1 = uVar1;
  }
  if (DAT_054056e1 != '\0') {
    *param_1 = uVar1 | 0x200;
  }
  return;
}


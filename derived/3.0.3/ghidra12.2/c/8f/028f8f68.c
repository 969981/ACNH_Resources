
void FUN_028f8f68(undefined4 param_1,undefined1 *param_2,undefined1 param_3,undefined1 param_4,
                 undefined2 param_5,undefined2 param_6,undefined1 param_7,int param_8,int param_9,
                 int param_10)

{
  short sVar1;
  int iVar2;
  
  *param_2 = param_3;
  *(undefined2 *)(param_2 + 4) = param_5;
  *(undefined2 *)(param_2 + 6) = param_6;
  param_2[2] = param_7;
  *(undefined4 *)(param_2 + 8) = param_1;
  iVar2 = param_8;
  if (0xfffd < param_8) {
    iVar2 = 0xfffe;
  }
  sVar1 = 0;
  if (-2 < param_8) {
    sVar1 = (short)iVar2 + 1;
  }
  iVar2 = param_10;
  if (0xfffd < param_10) {
    iVar2 = 0xfffe;
  }
  *(short *)(param_2 + 0xc) = sVar1;
  sVar1 = 0;
  if (-2 < param_10) {
    sVar1 = (short)iVar2 + 1;
  }
  param_2[1] = param_4;
  *(short *)(param_2 + 0xe) = sVar1;
  iVar2 = param_9;
  if (0xfffd < param_9) {
    iVar2 = 0xfffe;
  }
  sVar1 = 0;
  if (-2 < param_9) {
    sVar1 = (short)iVar2 + 1;
  }
  *(short *)(param_2 + 0x10) = sVar1;
  return;
}


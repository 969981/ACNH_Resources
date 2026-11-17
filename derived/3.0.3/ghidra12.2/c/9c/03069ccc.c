
void FUN_03069ccc(long param_1,int param_2)

{
  int *piVar1;
  long lVar2;
  
  lVar2 = DAT_05292338;
  if (((*(int *)(param_1 + 0x1c334) == param_2) && (DAT_05292338 != 0)) &&
     (piVar1 = (int *)(DAT_05292338 + 0xf90), *piVar1 != -1)) {
    if (*(char *)(DAT_05292338 + 0xee4) != '\0') {
      *(byte *)(DAT_05292338 + 0xedc) = *(byte *)(DAT_05292338 + 0xedc) ^ 0x10;
    }
    FUN_017ff790(lVar2 + 0xda0,*piVar1,1);
  }
  if (((*(int *)(param_1 + 0x1c338) == param_2) && (DAT_05292338 != 0)) &&
     (*(int *)(DAT_05292338 + 0xf9c) != -1)) {
    FUN_017ff874(DAT_05292338 + 0xda0,*(int *)(DAT_05292338 + 0xf9c),
                 *(byte *)(DAT_05292338 + 0xedc) >> 7 ^ 1,1);
  }
  FUN_030694a0(*(undefined4 *)(param_1 + 0x37c),6,param_1 + 0x1f8);
  return;
}


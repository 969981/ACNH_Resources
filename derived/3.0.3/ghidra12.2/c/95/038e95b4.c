
void FUN_038e95b4(int *param_1,int *param_2,int *param_3,int *param_4,int *param_5,int *param_6,
                 int *param_7)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  *param_1 = *param_2;
  param_1[1] = *param_3;
  param_1[2] = *param_4;
  iVar2 = *param_3;
  iVar1 = iVar2 + 0xc;
  if (2 < iVar2) {
    iVar1 = iVar2;
  }
  iVar3 = *param_2 - (uint)(iVar2 < 3);
  iVar2 = iVar3 + 3;
  if (-1 < iVar3) {
    iVar2 = iVar3;
  }
  iVar4 = (int)((ulong)((long)iVar3 * -0x51eb851f) >> 0x20);
  param_1[3] = (iVar3 + *param_4 + (iVar2 >> 2) + ((iVar4 >> 5) - (iVar4 >> 0x1f)) + iVar3 / 400 +
               (iVar1 * 0x1a + 0x10) / 10) % 7;
  param_1[4] = *param_5;
  param_1[5] = *param_6;
  param_1[6] = *param_7;
  return;
}


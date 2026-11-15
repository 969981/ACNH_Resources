
void FUN_02401428(long param_1)

{
  ulong uVar1;
  int iVar2;
  int iVar3;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float fStack_28;
  float local_24;
  
  FUN_0231ade8(param_1,6);
  if (*(int *)(param_1 + 0x178) == 0) {
    uVar1 = FUN_02521940(&local_2c,&local_38,*(long *)(param_1 + 0x68) + 0x278,
                         *(long *)(param_1 + 0x68) + 0x2b4);
    if ((uVar1 & 1) != 0) {
      FUN_02333b24(param_1,&local_2c);
      iVar2 = (int)(fStack_28 * 4.0);
      iVar3 = (int)(local_34 * 4.0);
      if (0x7ffe < iVar2) {
        iVar2 = 0x7fff;
      }
      if (iVar2 < -0x7fff) {
        iVar2 = -0x8000;
      }
      *(short *)(param_1 + 0x1904) = (short)iVar2;
      if (0x7ffe < iVar3) {
        iVar3 = 0x7fff;
      }
      if (iVar3 < -0x7fff) {
        iVar3 = -0x8000;
      }
      *(short *)(param_1 + 0x190e) = (short)iVar3;
      *(int *)(param_1 + 0x1900) = (int)(local_2c * 999.99994);
      *(int *)(param_1 + 0x1906) = (int)(local_24 * 999.99994);
      *(int *)(param_1 + 0x190a) = (int)(local_38 * 999.99994);
      *(int *)(param_1 + 0x1910) = (int)(local_30 * 999.99994);
    }
  }
  return;
}


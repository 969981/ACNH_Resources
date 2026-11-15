
void FUN_02472994(long param_1,long param_2,long param_3)

{
  long lVar1;
  int iVar2;
  
  *(undefined1 *)(param_3 + 0x17) = 3;
  *(undefined1 *)(param_3 + 0x16) = 3;
  *(undefined2 *)(param_2 + 0xc) = 0x2c;
  *(undefined4 *)(param_2 + 0x10) = 2;
  lVar1 = *(long *)(param_1 + 0x68);
  *(int *)(param_3 + 10) = (int)(*(float *)(lVar1 + 0x278) * 999.99994);
  iVar2 = (int)(*(float *)(lVar1 + 0x27c) * 4.0);
  if (0x7ffe < iVar2) {
    iVar2 = 0x7fff;
  }
  if (iVar2 < -0x7fff) {
    iVar2 = -0x8000;
  }
  *(short *)(param_3 + 0xe) = (short)iVar2;
  *(int *)(param_3 + 0x10) = (int)(*(float *)(lVar1 + 0x280) * 999.99994);
  *(undefined2 *)(param_3 + 0x14) = *(undefined2 *)(*(long *)(param_1 + 0x68) + 0x2b6);
  return;
}


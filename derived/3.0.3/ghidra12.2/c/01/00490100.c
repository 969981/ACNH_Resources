
void FUN_00490100(long *param_1,long param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = *(long *)(param_2 + 0x18);
  lVar3 = *(long *)(lVar2 + 0x60);
  iVar1 = *(int *)(lVar2 + 0x68);
  *param_1 = lVar3;
  param_1[1] = lVar3 + (long)iVar1 * 8;
  lVar3 = *(long *)(lVar2 + 0x140);
  iVar1 = *(int *)(lVar2 + 0x148);
  param_1[2] = lVar3;
  param_1[3] = lVar3 + (long)iVar1 * 0x18;
  lVar3 = *(long *)(lVar2 + 0x70);
  iVar1 = *(int *)(lVar2 + 0x78);
  param_1[4] = lVar3;
  param_1[5] = lVar3 + (long)iVar1 * 8;
  lVar3 = *(long *)(lVar2 + 0x80);
  iVar1 = *(int *)(lVar2 + 0x88);
  param_1[6] = lVar3;
  param_1[7] = lVar3 + (long)iVar1 * 8;
  lVar3 = *(long *)(lVar2 + 0x90);
  iVar1 = *(int *)(lVar2 + 0x98);
  param_1[8] = lVar3;
  param_1[9] = lVar3 + (long)iVar1 * 8;
  lVar3 = *(long *)(lVar2 + 0x158);
  param_1[10] = *(long *)(lVar2 + 0x150);
  param_1[0xb] = lVar3;
  lVar3 = *(long *)(lVar2 + 0x128);
  iVar1 = *(int *)(lVar2 + 0x130);
  param_1[0xc] = lVar3;
  param_1[0xd] = lVar3 + (long)iVar1 * 8;
  lVar3 = *(long *)(lVar2 + 0x170);
  iVar1 = *(int *)(lVar2 + 0x178);
  param_1[0xe] = lVar3;
  param_1[0xf] = lVar3 + (long)iVar1 * 8;
  return;
}


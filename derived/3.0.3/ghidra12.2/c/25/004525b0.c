
void FUN_004525b0(long param_1,undefined8 param_2,int param_3)

{
  undefined8 *puVar1;
  int iVar2;
  long lVar3;
  
  *(ulong *)(param_1 + 0x70) = *(ulong *)(param_1 + 0x70) | 0x4000;
  iVar2 = *(int *)(param_1 + 0x1d8);
  *(undefined8 *)(param_1 + 0xe8) = 0;
  if (iVar2 < (int)(*(uint *)(param_1 + 0x1dc) & 0x3fffffff)) {
    lVar3 = *(long *)(param_1 + 0x1d0);
  }
  else {
    lVar3 = FUN_00426720(PTR_DAT_048607c0,iVar2 + 1,0x10,*(undefined8 *)(param_1 + 0x1d0),iVar2,
                         param_1 + 0x1dc);
    *(long *)(param_1 + 0x1d0) = lVar3;
  }
  puVar1 = (undefined8 *)(lVar3 + (long)iVar2 * 0x10);
  *(int *)(param_1 + 0x1d8) = iVar2 + 1;
  *puVar1 = param_2;
  puVar1[1] = (long)param_3;
  return;
}


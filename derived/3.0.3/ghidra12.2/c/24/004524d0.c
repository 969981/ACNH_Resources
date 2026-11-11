
void FUN_004524d0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 local_d0 [18];
  
  *(undefined8 *)(param_1 + 0xf0) = 0;
  *(ulong *)(param_1 + 0x70) = *(ulong *)(param_1 + 0x70) | 0x8000;
  FUN_00422710(local_d0,&DAT_040f7cb0,param_3,0,0,0,0);
  iVar2 = *(int *)(param_1 + 0x1a8);
  if (iVar2 < (int)(*(uint *)(param_1 + 0x1ac) & 0x3fffffff)) {
    lVar4 = *(long *)(param_1 + 0x1a0);
  }
  else {
    lVar4 = FUN_00426720(PTR_DAT_048607c0,iVar2 + 1,0x10,*(undefined8 *)(param_1 + 0x1a0),iVar2,
                         param_1 + 0x1ac);
    *(long *)(param_1 + 0x1a0) = lVar4;
  }
  *(int *)(param_1 + 0x1a8) = iVar2 + 1;
  uVar3 = FUN_0043a360(local_d0[0],param_1 + 8);
  puVar1 = (undefined8 *)(lVar4 + (long)iVar2 * 0x10);
  *puVar1 = param_2;
  puVar1[1] = uVar3;
  FUN_00422550(local_d0);
  return;
}


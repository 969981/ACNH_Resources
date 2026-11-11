
long FUN_00480e50(long param_1,long param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if (param_2 != param_1) {
    uVar3 = *(undefined8 *)(param_2 + 0x18);
    iVar1 = *(int *)(param_2 + 0x20);
    uVar2 = *(undefined8 *)(param_1 + 0x18);
    if ((int)(*(uint *)(param_1 + 0x24) & 0x3fffffff) < iVar1) {
      uVar2 = FUN_004267f0(PTR_DAT_048607b8,iVar1,0x10,uVar2,*(undefined4 *)(param_1 + 0x20));
      *(undefined8 *)(param_1 + 0x18) = uVar2;
    }
    FUN_0043aa30(uVar2,uVar3,(long)iVar1 << 4);
    *(int *)(param_1 + 0x20) = iVar1;
    uVar3 = *(undefined8 *)(param_2 + 0x28);
    iVar1 = *(int *)(param_2 + 0x30);
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    if ((int)(*(uint *)(param_1 + 0x34) & 0x3fffffff) < iVar1) {
      uVar2 = FUN_004267f0(PTR_DAT_048607b8,iVar1,0x10,uVar2,*(undefined4 *)(param_1 + 0x30));
      *(undefined8 *)(param_1 + 0x28) = uVar2;
    }
    FUN_0043aa30(uVar2,uVar3,(long)iVar1 << 4);
    *(int *)(param_1 + 0x30) = iVar1;
  }
  return param_1;
}


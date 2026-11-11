
long FUN_00673a30(long param_1,long param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  FUN_0043c080(param_1 + 0x18,param_2 + 0x18);
  if (*(long *)(param_2 + 0x20) == 0) {
    lVar2 = *(long *)(param_1 + 0x20);
    *(undefined8 *)(param_1 + 0x20) = 0;
  }
  else {
    FUN_004435a0();
    lVar2 = *(long *)(param_1 + 0x20);
    *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  }
  if (lVar2 != 0) {
    FUN_004435c0();
  }
  if (param_2 != param_1) {
    uVar4 = *(undefined8 *)(param_2 + 0x28);
    iVar1 = *(int *)(param_2 + 0x30);
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    if ((int)(*(uint *)(param_1 + 0x34) & 0x3fffffff) < iVar1) {
      uVar3 = FUN_004267f0(PTR_DAT_048607b8,iVar1,2,uVar3,*(undefined4 *)(param_1 + 0x30));
      *(undefined8 *)(param_1 + 0x28) = uVar3;
    }
    FUN_0043aa30(uVar3,uVar4,(long)iVar1 << 1);
    *(int *)(param_1 + 0x30) = iVar1;
    iVar1 = *(int *)(param_2 + 0x40);
    uVar4 = *(undefined8 *)(param_2 + 0x38);
    uVar3 = *(undefined8 *)(param_1 + 0x38);
    if ((int)(*(uint *)(param_1 + 0x44) & 0x3fffffff) < iVar1) {
      uVar3 = FUN_004267f0(PTR_DAT_048607b8,iVar1,2,uVar3,*(undefined4 *)(param_1 + 0x40));
      *(undefined8 *)(param_1 + 0x38) = uVar3;
    }
    FUN_0043aa30(uVar3,uVar4,(long)iVar1 << 1);
    *(int *)(param_1 + 0x40) = iVar1;
    iVar1 = *(int *)(param_2 + 0x50);
    uVar4 = *(undefined8 *)(param_2 + 0x48);
    uVar3 = *(undefined8 *)(param_1 + 0x48);
    if ((int)(*(uint *)(param_1 + 0x54) & 0x3fffffff) < iVar1) {
      uVar3 = FUN_004267f0(PTR_DAT_048607b8,iVar1,2,uVar3,*(undefined4 *)(param_1 + 0x50));
      *(undefined8 *)(param_1 + 0x48) = uVar3;
    }
    FUN_0043aa30(uVar3,uVar4,(long)iVar1 << 1);
    *(int *)(param_1 + 0x50) = iVar1;
  }
  *(undefined1 *)(param_1 + 0x58) = *(undefined1 *)(param_2 + 0x58);
  return param_1;
}


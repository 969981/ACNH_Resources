
void FUN_011be644(long param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  long lVar5;
  undefined8 *local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined1 auStack_40 [16];
  
  if (param_1 != 0) {
    FUN_011b9ab0(auStack_40);
    lVar5 = *(long *)PTR_DAT_04bb5c90;
    iVar2 = FUN_011ba8b0(auStack_40);
    if (iVar2 == 2) {
      iVar4 = *(int *)(lVar5 + 0x28);
      iVar2 = FUN_011bb170(auStack_40);
      iVar1 = *(int *)(lVar5 + 0x2c);
      iVar2 = iVar2 + iVar4;
      iVar4 = FUN_011bb330(auStack_40);
      iVar4 = iVar4 + iVar1;
      *(int *)(param_1 + 0x10) = iVar2;
      *(int *)(param_1 + 0x14) = iVar4;
      *(int *)(param_1 + 0x20) = iVar2 + 1;
      *(int *)(param_1 + 0x24) = iVar4 + 1;
    }
    else if (iVar2 == 1) {
      uVar3 = FUN_011bb170(auStack_40);
      uStack_44 = FUN_011bb330(auStack_40);
      local_50 = &DAT_048f9750;
      local_48 = uVar3;
      uVar3 = FUN_011baa50(auStack_40);
      FUN_011be848(param_1,uVar3,&local_50);
    }
    else if (iVar2 == 0) {
      uVar3 = FUN_011bb170(auStack_40);
      uStack_44 = FUN_011bb330(auStack_40);
      local_50 = &DAT_048f9750;
      local_48 = uVar3;
      uVar3 = FUN_011bac10(auStack_40);
      FUN_011be75c(param_1,uVar3,&local_50);
    }
  }
  return;
}


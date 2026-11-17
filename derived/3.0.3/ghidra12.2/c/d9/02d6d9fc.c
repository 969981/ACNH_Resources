
void FUN_02d6d9fc(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined4 uVar4;
  long lVar5;
  undefined1 auStack_36 [2];
  undefined1 auStack_34 [2];
  undefined1 auStack_32 [2];
  
  puVar3 = PTR_DAT_04bb5ce0;
  puVar2 = PTR_DAT_04bb3170;
  if ((*(long *)(param_1 + 0x1680) != 0) &&
     (lVar5 = *(long *)(*(long *)(param_1 + 0x1680) + 0x570), lVar5 != 0)) {
    if (*(int *)(param_1 + 0x241c) == 4) {
      if (*(long *)PTR_DAT_04bb5ce0 != 0) {
        puVar2 = (undefined *)(*(long *)PTR_DAT_04bb5ce0 + 0xe5c);
      }
      FUN_007ef010(auStack_36,puVar2);
      uVar4 = FUN_02d6cf20(auStack_36,param_1 + 0x1750,param_1 + 0x1db0);
      *(undefined4 *)(param_1 + 0x169c) = uVar4;
    }
    else if (*(int *)(param_1 + 0x241c) == 3) {
      puVar1 = PTR_DAT_04bb3170;
      if (*(long *)PTR_DAT_04bb5ce0 != 0) {
        puVar1 = (undefined *)(*(long *)PTR_DAT_04bb5ce0 + 0xe78);
      }
      FUN_007ef010(auStack_32,puVar1);
      if (*(long *)puVar3 != 0) {
        puVar2 = (undefined *)(*(long *)puVar3 + 0xe9c);
      }
      FUN_007ef010(auStack_34,puVar2);
      uVar4 = FUN_02d6cf20(auStack_32,param_1 + 0x1750,param_1 + 0x1db0);
      *(undefined4 *)(param_1 + 0x169c) = uVar4;
      uVar4 = FUN_02d6cf20(auStack_34,param_1 + 0x1750,param_1 + 0x1db0);
      *(undefined4 *)(param_1 + 0x16a0) = uVar4;
    }
    FUN_02d5ca80(lVar5,param_1 + 0x1688);
  }
  return;
}



void FUN_001f7044(long param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  short local_30 [8];
  undefined2 local_14 [2];
  
  lVar4 = *(long *)(param_2 + 0x18);
  if (lVar4 == 0) {
    local_30[0] = 0;
    FUN_00197478(param_1,local_30,2);
    return;
  }
  if (*(int *)(PTR_DAT_04bcc138 + 0x20) == 0 && *(int *)PTR_DAT_04bcbde8 != 0) {
    FUN_0018c218(local_30,0);
    FUN_0018c29c(local_30,lVar4,0);
    uVar2 = FUN_0018c39c(local_30);
    if (uVar2 < 0x10000) {
      local_14[0] = (undefined2)uVar2;
      FUN_00197478(param_1,local_14,2);
      uVar3 = FUN_0018c394(local_30);
      FUN_00197478(param_1,uVar3,uVar2);
      FUN_0018c280(local_30);
      return;
    }
    *(undefined1 *)(param_1 + 8) = 1;
    FUN_0018c280(local_30);
    return;
  }
  lVar1 = FUN_0018b798(param_2);
  if (lVar1 + 1U < 0x10000) {
    local_30[0] = (short)lVar1 + 1;
    FUN_00197478(param_1,local_30,2);
    FUN_00197478(param_1,lVar4,local_30[0]);
    return;
  }
  *(undefined1 *)(param_1 + 8) = 1;
  return;
}


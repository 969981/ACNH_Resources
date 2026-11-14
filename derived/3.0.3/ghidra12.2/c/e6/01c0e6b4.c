
void FUN_01c0e6b4(long *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  ulong uVar2;
  undefined4 *puVar3;
  long lVar4;
  undefined *local_50;
  undefined8 uStack_48;
  undefined *local_40;
  char *pcStack_38;
  
  lVar4 = *(long *)PTR_DAT_04bb4138;
  if (lVar4 == 0) {
LAB_01c0e750:
    lVar4 = *(long *)PTR_DAT_04bb4130;
    if (lVar4 != 0) {
      uVar1 = FUN_006bd550(param_2,0);
      local_40 = (undefined *)CONCAT44(local_40._4_4_,uVar1);
      lVar4 = FUN_0079e4d0(lVar4,&local_40);
      if (lVar4 != 0) {
        local_50 = PTR_DAT_04bb2020 + 0x10;
        pcStack_38 = "STR_SNpcName";
        uStack_48 = param_2;
        local_40 = local_50;
        uVar2 = (**(code **)*param_3)(param_3,param_1,&local_40,&local_50,1);
        uVar1 = FUN_021d6da0(param_2);
        goto LAB_01c0e7c8;
      }
    }
    puVar3 = (undefined4 *)(**(code **)(*param_1 + 0x40))(param_1);
    *puVar3 = 0;
  }
  else {
    uVar1 = FUN_006bd550(param_2,0);
    local_40 = (undefined *)CONCAT44(local_40._4_4_,uVar1);
    lVar4 = FUN_0079e770(lVar4,&local_40);
    if (lVar4 == 0) goto LAB_01c0e750;
    local_50 = PTR_DAT_04bb2020 + 0x10;
    pcStack_38 = "STR_NNpcName";
    uStack_48 = param_2;
    local_40 = local_50;
    uVar2 = (**(code **)*param_3)(param_3,param_1,&local_40,&local_50,1);
    uVar1 = FUN_021d6c90(param_2);
LAB_01c0e7c8:
    puVar3 = (undefined4 *)(**(code **)(*param_1 + 0x40))(param_1);
    *puVar3 = uVar1;
    if ((uVar2 & 1) != 0) {
      return;
    }
  }
  (**(code **)(*param_1 + 0x38))(param_1);
  return;
}


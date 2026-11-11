
undefined8 FUN_005160a0(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined *puVar1;
  long lVar2;
  uint uVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  long local_40;
  undefined8 local_38;
  long *local_30;
  undefined8 local_28;
  
  local_30 = (long *)0x0;
  local_28 = -0x8000000000000000;
  local_40 = 0;
  local_38 = -0x8000000000000000;
  FUN_00515190(param_1,param_2,1,&local_30,&local_40,0);
  lVar2 = local_38;
  puVar1 = PTR_DAT_048607b8;
  if ((int)local_28 != 0) {
    lVar5 = (long)(int)local_28 << 3;
    plVar4 = local_30;
    do {
      if (*(int *)(*plVar4 + 0x48) == param_3) {
        uVar6 = 1;
        goto LAB_00516108;
      }
      lVar5 = lVar5 + -8;
      plVar4 = plVar4 + 1;
    } while (lVar5 != 0);
  }
  uVar6 = 0;
LAB_00516108:
  uVar3 = local_38._4_4_;
  local_38 = (ulong)local_38._4_4_ << 0x20;
  if ((-1 < lVar2) && (local_40 != 0)) {
    FUN_00421f90(PTR_DAT_048607b8,local_40,4,uVar3 & 0x3fffffff);
  }
  lVar2 = local_28;
  uVar3 = local_28._4_4_;
  local_28 = (ulong)local_28._4_4_ << 0x20;
  if ((-1 < lVar2) && (local_30 != (long *)0x0)) {
    FUN_00421f90(puVar1,local_30,8,uVar3 & 0x3fffffff);
  }
  return uVar6;
}


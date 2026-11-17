
void FUN_030cd5e8(long param_1)

{
  int iVar1;
  undefined4 uVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 local_40;
  undefined4 local_38;
  
  if (*(long *)PTR_DAT_04bb46b0 == 0) {
    uVar2 = 0;
  }
  else {
    FUN_02703058(&local_40);
    uVar2 = 0;
    if (local_40._4_1_ != '\0') {
      uVar2 = (undefined4)local_40;
    }
  }
  *(undefined4 *)(param_1 + 0xe28) = uVar2;
  FUN_030cd6d0(param_1);
  FUN_030cd930(param_1);
  iVar1 = *(int *)(param_1 + 0xe28);
  local_40 = (undefined *)CONCAT44(local_40._4_4_,iVar1);
  plVar3 = *(long **)(param_1 + 0x308);
  if (plVar3 != (long *)0x0) {
    uVar4 = 0x3f800000;
    if (iVar1 != 1) {
      uVar4 = 0;
    }
    uVar5 = 0x40000000;
    if (iVar1 != 0) {
      uVar5 = uVar4;
    }
    local_40 = PTR_DAT_04bc4f00 + 0x10;
    local_38 = 0x14;
    (**(code **)(*plVar3 + 0x18))(plVar3,&local_40);
    (**(code **)(plVar3[3] + 0x158))(uVar5,plVar3[1]);
  }
  FUN_030cdb9c(param_1);
  return;
}



void FUN_03d79ef4(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *local_60;
  undefined *puStack_58;
  undefined *local_50;
  undefined8 uStack_48;
  undefined *local_40;
  undefined8 uStack_38;
  
  puVar1 = PTR_DAT_04bb2020;
  lVar3 = *(long *)(param_3 + 0x20);
  if (lVar3 == 0) {
    local_40 = PTR_DAT_04bb2020 + 0x10;
    uStack_38 = 0;
    uVar2 = FUN_03c688b0(param_2,&local_40);
    uStack_48 = 0;
    *(undefined8 *)(param_1 + 0x250) = uVar2;
  }
  else {
    uStack_38 = FUN_00364d70(lVar3,&DAT_040d74fc);
    local_40 = puVar1 + 0x10;
    uVar2 = FUN_03c688b0(param_2,&local_40);
    *(undefined8 *)(param_1 + 0x250) = uVar2;
    uStack_48 = FUN_00364d70(lVar3,&DAT_04076609);
  }
  puVar1 = puVar1 + 0x10;
  local_50 = puVar1;
  uVar2 = FUN_03c688b0(param_2,&local_50);
  *(undefined8 *)(param_1 + 600) = uVar2;
  puStack_58 = &DAT_040a4215;
  local_60 = puVar1;
  uVar2 = FUN_03c68d44(param_2,&local_60,&PTR_PTR_04c4b980);
  *(undefined8 *)(param_1 + 0x248) = uVar2;
  return;
}


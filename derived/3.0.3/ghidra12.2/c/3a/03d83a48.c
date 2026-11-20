
void FUN_03d83a48(long param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  long lVar2;
  undefined *local_50;
  char *pcStack_48;
  undefined *local_40;
  undefined *puStack_38;
  
  FUN_03d83b30();
  local_50 = PTR_DAT_04bb2020 + 0x10;
  puStack_38 = &DAT_040a3242;
  pcStack_48 = "*Cursor";
  local_40 = local_50;
  FUN_03d5d740(param_1,param_2,param_3,&local_40,&local_50);
  FUN_03d5d990(param_1,param_2,param_3);
  FUN_03d5de00(param_1,param_2,param_3);
  plVar1 = *(long **)(param_1 + 0x58);
  local_40 = (undefined *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x28))(plVar1,&local_40);
    if (local_40 != (undefined *)0x0) {
      if ((*(long *)(local_40 + 0xb8) != 0) &&
         (lVar2 = FUN_00364ec0(local_40 + 0xb8,"Draggable"), lVar2 != 0)) {
        FUN_03d5e1e0(param_1);
      }
    }
  }
  FUN_03d6627c(param_1,param_2,param_3);
  return;
}


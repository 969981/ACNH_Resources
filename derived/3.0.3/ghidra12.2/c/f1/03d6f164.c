
void FUN_03d6f164(long param_1)

{
  long *plVar1;
  undefined4 uVar2;
  undefined *local_30;
  undefined4 local_28;
  
  FUN_03d66690();
  plVar1 = *(long **)(param_1 + 0x208);
  if (plVar1[1] != 0) {
    local_30 = PTR_DAT_04bc4f00 + 0x10;
    local_28 = 8;
    (**(code **)(*plVar1 + 0x20))(plVar1,&local_30);
    uVar2 = (**(code **)(plVar1[3] + 0xa0))(plVar1[1]);
    *(undefined4 *)(param_1 + 0x220) = uVar2;
  }
  return;
}



void FUN_02f3452c(long param_1,uint param_2)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined *local_30;
  undefined4 local_28;
  
  plVar2 = *(long **)(*(long *)(*(long *)(param_1 + 0x210) + 0x230) +
                     (ulong)(2 < *(uint *)(*(long *)(param_1 + 0x210) + 0x228)) * 0x10);
  if (plVar2 != (long *)0x0) {
    local_30 = PTR_DAT_04bc4e68 + 0x10;
    if (param_2 < 10) {
      local_28 = 6;
      (**(code **)(*plVar2 + 0x18))(plVar2,&local_30);
      puVar1 = (undefined8 *)(plVar2[3] + 0x1b8);
    }
    else {
      local_28 = 7;
      (**(code **)(*plVar2 + 0x18))(plVar2,&local_30);
      puVar1 = (undefined8 *)(plVar2[3] + 0x1c0);
    }
    (*(code *)*puVar1)(plVar2[1]);
  }
  return;
}


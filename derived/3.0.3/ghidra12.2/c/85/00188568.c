
void FUN_00188568(long param_1)

{
  long lVar1;
  code *pcVar2;
  long local_28;
  long local_20;
  undefined8 local_18;
  
  if (*(long *)(param_1 + 0x60) != 0) {
    local_28 = 0;
    local_20 = 0;
    local_18 = 0;
    FUN_00188330(*(long *)(param_1 + 0x60),&local_28);
    if (local_28 != 0) {
      local_20 = local_28;
      pcVar2 = *(code **)(local_28 + -0x10);
      if (pcVar2 == (code *)0x0) {
        free((undefined8 *)(local_28 + -0x10));
        lVar1 = *(long *)(param_1 + 0x68);
        goto joined_r0x001885a8;
      }
      (*pcVar2)();
    }
  }
  lVar1 = *(long *)(param_1 + 0x68);
joined_r0x001885a8:
  if (lVar1 != 0) {
    local_28 = 0;
    local_20 = 0;
    local_18 = 0;
    FUN_00188330(lVar1,&local_28);
    if (local_28 != 0) {
      local_20 = local_28;
      pcVar2 = *(code **)(local_28 + -0x10);
      if (pcVar2 == (code *)0x0) {
        free((undefined8 *)(local_28 + -0x10));
        return;
      }
      (*pcVar2)();
    }
  }
  return;
}


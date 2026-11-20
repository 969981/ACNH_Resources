
void FUN_03e2bec8(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  long *plVar2;
  undefined8 local_30;
  undefined8 *local_28;
  undefined8 local_20;
  undefined8 *local_18;
  
  local_18 = (undefined8 *)0x0;
  local_20 = param_3;
  if ((DAT_05af9220 & 1) == 0) {
    iVar1 = __cxa_guard_acquire(&DAT_05af9220);
    if (iVar1 != 0) {
      FUN_03dc9dc8();
      FUN_001001d0(PTR_FUN_04bd2f60,&DAT_04c544c8,&__DT_FINI_ARRAY);
      __cxa_guard_release(&DAT_05af9220);
    }
  }
  local_18 = &DAT_04c544c8;
  plVar2 = (long *)*param_1;
  local_30 = param_2;
  if ((DAT_05af9220 & 1) == 0) {
    iVar1 = __cxa_guard_acquire(&DAT_05af9220);
    if (iVar1 != 0) {
      FUN_03dc9dc8();
      FUN_001001d0(PTR_FUN_04bd2f60,&DAT_04c544c8,&__DT_FINI_ARRAY);
      __cxa_guard_release(&DAT_05af9220);
    }
  }
  local_28 = &DAT_04c544c8;
  (**(code **)(*plVar2 + 0x38))(plVar2,&local_30,&local_20,1);
  return;
}


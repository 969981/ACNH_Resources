
void FUN_03c628c0(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  int iVar2;
  long *plVar3;
  undefined8 local_40;
  undefined *local_38;
  undefined8 local_30;
  undefined *local_28;
  
  local_28 = (undefined *)0x0;
  local_30 = param_3;
  if ((DAT_05aee1d8 & 1) == 0) {
    iVar2 = __cxa_guard_acquire(PTR_DAT_04bd3128);
    puVar1 = PTR_DAT_04bd3120;
    if (iVar2 != 0) {
      FUN_03c613d4(PTR_DAT_04bd3120,0);
      FUN_001001d0(FUN_03c60734,puVar1,&__DT_FINI_ARRAY);
      __cxa_guard_release(&DAT_05aee1d8);
    }
  }
  plVar3 = (long *)*param_1;
  local_28 = &DAT_04c4c648;
  local_40 = param_2;
  if ((DAT_05aee1d8 & 1) == 0) {
    iVar2 = __cxa_guard_acquire(PTR_DAT_04bd3128);
    if (iVar2 != 0) {
      FUN_03c613d4(&DAT_04c4c648,0);
      FUN_001001d0(FUN_03c60734,&DAT_04c4c648,&__DT_FINI_ARRAY);
      __cxa_guard_release(&DAT_05aee1d8);
    }
  }
  local_38 = &DAT_04c4c648;
  (**(code **)(*plVar3 + 0x38))(plVar3,&local_40,&local_30,1);
  return;
}



void FUN_03ce027c(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  int iVar2;
  long *plVar3;
  byte *pbVar4;
  undefined8 local_40;
  undefined *local_38;
  undefined8 local_30;
  undefined *local_28;
  
  pbVar4 = PTR_DAT_04bd3308;
  local_28 = (undefined *)0x0;
  local_30 = param_3;
  if ((*PTR_DAT_04bd3308 & 1) == 0) {
    iVar2 = __cxa_guard_acquire(PTR_DAT_04bd3308);
    puVar1 = PTR_DAT_04bd3300;
    if (iVar2 != 0) {
      FUN_03c7d4c4(PTR_DAT_04bd3300,0);
      pbVar4 = PTR_DAT_04bd3308;
      FUN_001001d0(PTR_FUN_04bd2f60,puVar1,&__DT_FINI_ARRAY);
      __cxa_guard_release(PTR_DAT_04bd3308);
    }
  }
  puVar1 = PTR_DAT_04bd3300;
  plVar3 = (long *)*param_1;
  local_28 = PTR_DAT_04bd3300;
  local_40 = param_2;
  if ((*pbVar4 & 1) == 0) {
    iVar2 = __cxa_guard_acquire(PTR_DAT_04bd3308);
    if (iVar2 != 0) {
      FUN_03c7d4c4(puVar1,0);
      FUN_001001d0(PTR_FUN_04bd2f60,puVar1,&__DT_FINI_ARRAY);
      __cxa_guard_release(PTR_DAT_04bd3308);
    }
  }
  local_38 = puVar1;
  (**(code **)(*plVar3 + 0x38))(plVar3,&local_40,&local_30,1);
  return;
}


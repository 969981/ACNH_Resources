
uint FUN_02206830(undefined4 param_1,undefined4 *param_2,uint param_3)

{
  long *plVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long *local_40;
  char local_38;
  char local_36;
  undefined4 local_18;
  undefined4 local_14;
  
  local_14 = param_1;
  FUN_0071cb58(&local_40,&local_14,PTR_DAT_04bb3238,0);
  plVar1 = local_40;
  if (local_40 != (long *)0x0) {
    if (((*PTR_DAT_04bb37d8 & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(PTR_DAT_04bb37d8), iVar3 != 0)) {
      *(undefined **)PTR_DAT_04bb37d0 = PTR_DAT_04bb3750 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb37d8);
    }
    uVar4 = (**(code **)(*plVar1 + 0x20))(plVar1,PTR_DAT_04bb37d0);
    if ((uVar4 & 1) == 0) {
      local_36 = '\0';
    }
  }
  uVar2 = 0;
  if (((local_40 != (long *)0x0) && (local_38 != '\0')) && (local_36 != '\0')) {
    puVar5 = (undefined8 *)local_40[0xc];
    if (puVar5 == (undefined8 *)0x0) {
      if (((DAT_052461c0 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_052461c0), iVar3 != 0)) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
        puVar5 = &DAT_05240280;
      }
      else {
        puVar5 = &DAT_05240280;
      }
    }
    local_18 = *param_2;
    uVar2 = FUN_022069a0(puVar5,&local_18,param_3 & 1);
  }
  return uVar2 & 1;
}


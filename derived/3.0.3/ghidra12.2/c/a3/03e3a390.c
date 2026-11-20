
undefined8 FUN_03e3a390(long *param_1,int param_2)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  
  if (param_2 == 0) {
    if (((DAT_05af9218 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05af9218), iVar1 != 0)) {
      if (((DAT_05af91f0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05af91f0), iVar1 != 0)) {
        DAT_05af9190 = &PTR_FUN_04b94ef8;
        DAT_05af9168 = &PTR_LAB_04b94ea0;
        DAT_05af9170 = &PTR_FUN_04b94ed0;
        DAT_05af91b0 = &PTR_FUN_04b94f20;
        DAT_05af91d0 = &PTR_FUN_04b94f48;
        __cxa_guard_release(&DAT_05af91f0);
      }
      if (((DAT_05af91f0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05af91f0), iVar1 != 0)) {
        DAT_05af9190 = &PTR_FUN_04b94ef8;
        DAT_05af9168 = &PTR_LAB_04b94ea0;
        DAT_05af9170 = &PTR_FUN_04b94ed0;
        DAT_05af91b0 = &PTR_FUN_04b94f20;
        DAT_05af91d0 = &PTR_FUN_04b94f48;
        __cxa_guard_release(&DAT_05af91f0);
      }
      DAT_05af9210 = (*(code *)*DAT_05af91d0)(&DAT_05af91d0,&DAT_05af91f8);
      (*(code *)*DAT_05af9170)(&DAT_05af9170,DAT_05af9210);
      FUN_001001d0(&LAB_03dc829c,&DAT_05af91f8,&__DT_FINI_ARRAY);
      __cxa_guard_release(&DAT_05af9218);
    }
    uVar2 = DAT_05af9210;
  }
  else {
    if ((param_1[1] != 0) && (lVar3 = *param_1, lVar3 != 0)) {
      if (((DAT_05af9108 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05af9108), iVar1 != 0)) {
        FUN_03dc7a84();
        FUN_001001d0(PTR_FUN_04bd2f60,&DAT_04c54238,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_05af9108);
      }
      uVar2 = FUN_03c66100(lVar3,&DAT_04c54238,param_1[1]);
      return uVar2;
    }
    uVar2 = 0;
  }
  return uVar2;
}


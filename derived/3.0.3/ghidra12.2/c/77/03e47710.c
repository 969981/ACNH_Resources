
undefined8 * FUN_03e47710(long *param_1,int param_2)

{
  int iVar1;
  undefined8 *puVar2;
  long lVar3;
  
  if (param_2 == 0) {
    if ((DAT_05af9520 & 1) == 0) {
      iVar1 = __cxa_guard_acquire(&DAT_05af9520);
      if (iVar1 != 0) {
        if (((DAT_05af94e0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05af94e0), iVar1 != 0)) {
          DAT_05af9478 = &PTR_LAB_04b95588;
          DAT_05af9480 = &PTR_FUN_04b955b8;
          DAT_05af94a0 = &PTR_FUN_04b955e0;
          DAT_05af94c0 = &PTR_FUN_04b95608;
          __cxa_guard_release(&DAT_05af94e0);
        }
        DAT_05af951b = 0;
        DAT_05af94fc = 0;
        DAT_05af94f8 = 0x20;
        DAT_05af94e8 = PTR_DAT_04bb2028 + 0x10;
        DAT_05af94f0 = &DAT_05af94fc;
        (*(code *)*DAT_05af9480)(&DAT_05af9480,&DAT_05af94e8);
        __cxa_guard_release(&DAT_05af9520);
      }
      puVar2 = &DAT_05af94e8;
    }
    else {
      puVar2 = &DAT_05af94e8;
    }
  }
  else {
    if ((param_1[1] != 0) && (lVar3 = *param_1, lVar3 != 0)) {
      if ((DAT_05af9418 & 1) == 0) {
        iVar1 = __cxa_guard_acquire(&DAT_05af9418);
        if (iVar1 != 0) {
          FUN_03dcdb80();
          FUN_001001d0(PTR_FUN_04bd2f60,&DAT_04c549e8,&__DT_FINI_ARRAY);
          __cxa_guard_release(&DAT_05af9418);
        }
      }
      puVar2 = (undefined8 *)FUN_03c66100(lVar3,&DAT_04c549e8,param_1[1]);
      return puVar2;
    }
    puVar2 = (undefined8 *)0x0;
  }
  return puVar2;
}


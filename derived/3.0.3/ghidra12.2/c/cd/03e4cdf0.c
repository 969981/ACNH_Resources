
undefined8 * FUN_03e4cdf0(long *param_1,int param_2)

{
  int iVar1;
  undefined8 *puVar2;
  long lVar3;
  
  if (param_2 == 0) {
    if ((DAT_05af97c0 & 1) == 0) {
      iVar1 = __cxa_guard_acquire(&DAT_05af97c0);
      if (iVar1 != 0) {
        if (((DAT_05af9720 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05af9720), iVar1 != 0)) {
          DAT_05af96b8 = &PTR_LAB_04b95a08;
          DAT_05af96c0 = &PTR_FUN_04b95a38;
          DAT_05af96e0 = &PTR_FUN_04b95a60;
          DAT_05af9700 = &PTR_FUN_04b95a88;
          __cxa_guard_release(&DAT_05af9720);
        }
        DAT_05af97bb = 0;
        DAT_05af973c = 0;
        DAT_05af9738 = 0x80;
        DAT_05af9728 = PTR_DAT_04bb2d88 + 0x10;
        DAT_05af9730 = &DAT_05af973c;
        (*(code *)*DAT_05af96c0)(&DAT_05af96c0,&DAT_05af9728);
        __cxa_guard_release(&DAT_05af97c0);
      }
      puVar2 = &DAT_05af9728;
    }
    else {
      puVar2 = &DAT_05af9728;
    }
  }
  else {
    if ((param_1[1] != 0) && (lVar3 = *param_1, lVar3 != 0)) {
      if ((DAT_05af9658 & 1) == 0) {
        iVar1 = __cxa_guard_acquire(&DAT_05af9658);
        if (iVar1 != 0) {
          FUN_03dd1940();
          FUN_001001d0(PTR_FUN_04bd2f60,&DAT_04c54f08,&__DT_FINI_ARRAY);
          __cxa_guard_release(&DAT_05af9658);
        }
      }
      puVar2 = (undefined8 *)FUN_03c66100(lVar3,&DAT_04c54f08,param_1[1]);
      return puVar2;
    }
    puVar2 = (undefined8 *)0x0;
  }
  return puVar2;
}


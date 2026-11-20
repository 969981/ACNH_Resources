
undefined8 * FUN_03e66ef0(long *param_1,int param_2)

{
  int iVar1;
  undefined8 *puVar2;
  long lVar3;
  
  if (param_2 == 0) {
    if ((DAT_05afa730 & 1) == 0) {
      iVar1 = __cxa_guard_acquire(&DAT_05afa730);
      if (iVar1 != 0) {
        if (((DAT_05afa610 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05afa610), iVar1 != 0)) {
          DAT_05afa5a8 = &PTR_LAB_04b969c8;
          DAT_05afa5b0 = &PTR_FUN_04b969f8;
          DAT_05afa5d0 = &PTR_FUN_04b96a50;
          DAT_05afa5f0 = &PTR_FUN_04b96a78;
          __cxa_guard_release(&DAT_05afa610);
        }
        DAT_05afa72a = 0;
        DAT_05afa62c = 0;
        DAT_05afa628 = 0x80;
        DAT_05afa618 = PTR_DAT_04bc35e0 + 0x10;
        DAT_05afa620 = &DAT_05afa62c;
        (*(code *)*DAT_05afa5b0)(&DAT_05afa5b0,&DAT_05afa618);
        __cxa_guard_release(&DAT_05afa730);
      }
      puVar2 = &DAT_05afa618;
    }
    else {
      puVar2 = &DAT_05afa618;
    }
  }
  else {
    if ((param_1[1] != 0) && (lVar3 = *param_1, lVar3 != 0)) {
      if ((DAT_05afa548 & 1) == 0) {
        iVar1 = __cxa_guard_acquire(&DAT_05afa548);
        if (iVar1 != 0) {
          FUN_03ddf1c0();
          FUN_001001d0(PTR_FUN_04bd2f60,&DAT_04c560f8,&__DT_FINI_ARRAY);
          __cxa_guard_release(&DAT_05afa548);
        }
      }
      puVar2 = (undefined8 *)FUN_03c66100(lVar3,&DAT_04c560f8,param_1[1]);
      return puVar2;
    }
    puVar2 = (undefined8 *)0x0;
  }
  return puVar2;
}


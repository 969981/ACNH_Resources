
undefined8 * FUN_03680708(void)

{
  int iVar1;
  undefined8 *puVar2;
  ulong uVar3;
  
  puVar2 = (undefined8 *)FUN_03f2d7f0();
  if (((*PTR_DAT_04bb2828 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_04bb2828), iVar1 != 0))
  {
    *(undefined **)PTR_DAT_04bb2820 = PTR_DAT_04bb2830 + 0x10;
    __cxa_guard_release(PTR_DAT_04bb2828);
  }
  if (puVar2 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    uVar3 = (**(code **)*puVar2)(puVar2,PTR_DAT_04bb2820);
    if ((uVar3 & 1) == 0) {
      puVar2 = (undefined8 *)0x0;
    }
  }
  return puVar2;
}


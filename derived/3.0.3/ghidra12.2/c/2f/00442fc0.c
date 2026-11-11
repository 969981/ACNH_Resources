
undefined8 FUN_00442fc0(void)

{
  undefined8 *local_28;
  
  if (DAT_04c6f290 != '\0') {
    DAT_04c6f298 = 1;
    local_28 = &DAT_04c6f2a8;
    FUN_004429f0(&local_28);
    if (DAT_04c70860 != '\0' && *(code **)PTR_DAT_04bd6168 != (code *)0x0) {
      (**(code **)PTR_DAT_04bd6168)();
      DAT_04c70860 = '\0';
    }
    if (DAT_04c6f2a0 != (long *)0x0) {
      (**(code **)(*DAT_04c6f2a0 + 8))();
      DAT_04c6f2a0 = (long *)0x0;
    }
    FUN_00443e90();
    FUN_00438940(0);
    FUN_0043c580();
    FUN_0043c5d0();
    DAT_04c6f298 = 0;
    DAT_04c6f290 = '\0';
  }
  return 0;
}


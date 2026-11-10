
void FUN_001f874c(void)

{
  long lVar1;
  
  (**(code **)(DAT_04c5ee88 + 0x10))();
  if ((DAT_04c5ee68 == 0) && (DAT_04c5ee70 = FUN_00185a6c(0x18), DAT_04c5ee70 != 0)) {
    *(long *)DAT_04c5ee70 = DAT_04c5ee70;
    *(long *)(DAT_04c5ee70 + 8) = DAT_04c5ee70;
    *(undefined8 *)(DAT_04c5ee70 + 0x10) = 0;
  }
  lVar1 = DAT_04c5ee88;
  DAT_04c5ee68 = DAT_04c5ee68 + 1;
  *(undefined **)PTR_DAT_04bcc968 = &DAT_04c5eb78;
                    /* WARNING: Could not recover jumptable at 0x001f87c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 0x20))(&DAT_04c5ee88);
  return;
}


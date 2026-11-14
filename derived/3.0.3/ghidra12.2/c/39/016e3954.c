
undefined8 * FUN_016e3954(long param_1)

{
  int iVar1;
  
  if (*(undefined8 **)(param_1 + 0x60) != (undefined8 *)0x0) {
    return *(undefined8 **)(param_1 + 0x60);
  }
  if (((DAT_052461c0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_052461c0), iVar1 != 0)) {
    FUN_016fcf10(&DAT_05240280);
    FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
    __cxa_guard_release(&DAT_052461c0);
  }
  return &DAT_05240280;
}


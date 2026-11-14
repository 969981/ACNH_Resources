
void FUN_016e373c(long param_1,undefined4 *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  
  puVar2 = *(undefined8 **)(param_1 + 0x60);
  if (puVar2 == (undefined8 *)0x0) {
    if (((DAT_052461c0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_052461c0), iVar1 != 0)) {
      FUN_016fcf10(&DAT_05240280);
      FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
      __cxa_guard_release(&DAT_052461c0);
    }
    puVar2 = &DAT_05240280;
  }
  FUN_017067d4(puVar2,*param_2,0);
  return;
}


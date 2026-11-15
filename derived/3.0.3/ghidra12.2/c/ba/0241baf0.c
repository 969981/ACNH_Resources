
void FUN_0241baf0(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  uVar2 = FUN_0241bba0();
  *(undefined8 *)(param_1 + 0xdc8) = uVar2;
  puVar3 = *(undefined8 **)(param_1 + 0x60);
  if (puVar3 == (undefined8 *)0x0) {
    if (((DAT_052461c0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_052461c0), iVar1 != 0)) {
      FUN_016fcf10(&DAT_05240280);
      FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
      __cxa_guard_release(&DAT_052461c0);
      puVar3 = &DAT_05240280;
    }
    else {
      puVar3 = &DAT_05240280;
    }
  }
  FUN_017081d0(puVar3,&DAT_054bf850,6,1,0);
  return;
}


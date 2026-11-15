
void FUN_024316b0(long param_1)

{
  char cVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined *local_40;
  char *pcStack_38;
  
  cVar1 = *(char *)(param_1 + 0x190c);
  puVar3 = *(undefined8 **)(param_1 + 0x60);
  if (puVar3 == (undefined8 *)0x0) {
    if (((DAT_052461c0 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_052461c0), iVar2 != 0)) {
      FUN_016fcf10(&DAT_05240280);
      FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
      __cxa_guard_release(&DAT_052461c0);
      puVar3 = &DAT_05240280;
    }
    else {
      puVar3 = &DAT_05240280;
    }
  }
  if (cVar1 == '\0') {
    FUN_017133a0(puVar3);
  }
  else {
    local_40 = PTR_DAT_04bb2020 + 0x10;
    pcStack_38 = "CommonPitfallWobbling";
    FUN_017029bc(puVar3,&local_40,6,0,0);
  }
  FUN_0232f9f0(param_1);
  return;
}



void FUN_024dd7b0(long param_1)

{
  int iVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined *local_40;
  char *pcStack_38;
  undefined8 local_2c;
  undefined4 local_24;
  
  lVar3 = *(long *)(param_1 + 0x68);
  local_2c = 0;
  local_24 = 0;
  if (lVar3 != 0) {
    local_24 = *(undefined4 *)(lVar3 + 0x280);
    local_2c = *(undefined8 *)(lVar3 + 0x278);
  }
  FUN_016dae54(1,param_1 + 0xc30,param_1 + 0xc34,param_1 + 0xc38,&local_2c,0,0,0);
  puVar2 = *(undefined8 **)(param_1 + 0x60);
  if (puVar2 == (undefined8 *)0x0) {
    if (((DAT_052461c0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_052461c0), iVar1 != 0)) {
      FUN_016fcf10(&DAT_05240280);
      FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
      __cxa_guard_release(&DAT_052461c0);
      puVar2 = &DAT_05240280;
    }
    else {
      puVar2 = &DAT_05240280;
    }
  }
  local_40 = PTR_DAT_04bb2020 + 0x10;
  pcStack_38 = "PlayerRhythm";
  FUN_017081d0(puVar2,&local_40,0x14,0,0);
  return;
}


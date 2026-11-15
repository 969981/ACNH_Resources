
void FUN_02484184(long param_1)

{
  uint uVar1;
  int iVar2;
  undefined8 *puVar3;
  byte bVar4;
  undefined *local_40;
  char *pcStack_38;
  
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
  local_40 = PTR_DAT_04bb2020 + 0x10;
  pcStack_38 = "PlayerChangeStickChant";
  FUN_017081d0(puVar3,&local_40,6,0,0);
  *(int *)(param_1 + 0x20b0) = (int)*(char *)(param_1 + 0x1900);
  uVar1 = *(uint *)(param_1 + 0x17d0);
  if ((((uVar1 >> 9 & 1) == 0) && (-1 < *(char *)(param_1 + 0x1900))) && ((uVar1 >> 10 & 1) == 0)) {
    *(uint *)(param_1 + 0x17d0) = uVar1 | 0x200;
    bVar4 = *(byte *)(param_1 + 0x1ee8);
    if (7 < bVar4) {
      bVar4 = 0xff;
    }
    local_40 = (undefined *)CONCAT71(local_40._1_7_,bVar4);
    FUN_02f08998(&local_40);
  }
  return;
}


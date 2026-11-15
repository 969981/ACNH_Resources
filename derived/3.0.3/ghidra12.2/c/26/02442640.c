
void FUN_02442640(long param_1)

{
  int iVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 local_30;
  char *pcStack_28;
  
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
  local_30 = PTR_DAT_04bb2020 + 0x10;
  pcStack_28 = "ShootingStarMakeAWish";
  FUN_017081d0(puVar2,&local_30,6,1,0);
  bVar3 = *(byte *)(param_1 + 0x1ee8);
  if (7 < bVar3) {
    bVar3 = 0xff;
  }
  local_30._0_2_ = CONCAT11(bVar3,*(int *)(param_1 + 0x178) == 0);
  FUN_023094d0(&local_30);
  return;
}


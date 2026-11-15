
void FUN_023d09d0(long param_1)

{
  byte *pbVar1;
  byte bVar2;
  undefined *puVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  byte bVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined2 local_60;
  undefined8 local_5c;
  undefined4 local_54;
  undefined **local_50;
  char *pcStack_48;
  
  puVar3 = PTR_DAT_04bb2020;
  if (*(int *)(param_1 + 0x178) == 0) {
    local_50 = (undefined **)(PTR_DAT_04bb2020 + 0x10);
    pbVar1 = (byte *)(param_1 + 0x1ee8);
    pcStack_48 = "BeStungbyPoisonousInsect";
    FUN_0279a9f0(pbVar1,&local_50,1);
    bVar2 = *pbVar1;
    bVar7 = bVar2;
    if (7 < bVar2) {
      bVar7 = 0xff;
    }
    local_60 = CONCAT11(bVar7,(undefined1)local_60);
    if (((bVar2 < 8) && (uVar5 = FUN_02582d8c(pbVar1,1), uVar5 < 8)) &&
       (*(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar5 * 0x13f0 + 0x13d4) != '\0')) {
      bVar4 = *(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar5 * 0x13f0 + 0x13d6) != '\0';
    }
    else {
      bVar4 = false;
    }
    local_60 = CONCAT11(local_60._1_1_,bVar4);
    local_54 = *(undefined4 *)(*(long *)(param_1 + 0x68) + 0x280);
    local_5c = *(undefined8 *)(*(long *)(param_1 + 0x68) + 0x278);
    local_50 = &PTR_FUN_04a72f18;
    iVar6 = *(int *)(*(long *)PTR_DAT_04bb3968 + 0xb88);
    pcStack_48 = (undefined *)((ulong)&local_60 | 1);
    if (iVar6 != 0) {
      lVar9 = (long)iVar6 << 3;
      puVar8 = *(undefined8 **)(*(long *)PTR_DAT_04bb3968 + 0xb90);
      do {
        (*(code *)*local_50)(&local_50,*puVar8);
        lVar9 = lVar9 + -8;
        puVar8 = puVar8 + 1;
      } while (lVar9 != 0);
    }
    if (*(int *)(param_1 + 0x178) == 0) {
      local_60 = 0;
      lVar9 = *(long *)PTR_DAT_04bb26a8;
      local_50 = (undefined **)(puVar3 + 0x10);
      pcStack_48 = &DAT_040685b4;
      FUN_02a2dcd0(lVar9,&local_60,&local_50);
      FUN_02a0d880(lVar9 + 0xa7660,local_60);
      puVar8 = *(undefined8 **)(param_1 + 0x60);
      goto joined_r0x023d0b08;
    }
  }
  puVar8 = *(undefined8 **)(param_1 + 0x60);
joined_r0x023d0b08:
  if (puVar8 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar6 = __cxa_guard_acquire(&DAT_052461c0);
      puVar8 = &DAT_05240280;
      if (iVar6 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      puVar8 = &DAT_05240280;
    }
  }
  local_50 = (undefined **)(puVar3 + 0x10);
  pcStack_48 = "PlayerFaint";
  FUN_017081d0(puVar8,&local_50,6,1,0);
  return;
}


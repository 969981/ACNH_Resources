
void FUN_0242ee64(long param_1)

{
  uint *puVar1;
  char cVar2;
  short sVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined **ppuVar6;
  ulong uVar7;
  uint uVar8;
  byte bVar9;
  uint uVar10;
  undefined *local_58;
  char *pcStack_50;
  undefined8 local_48;
  undefined4 local_28;
  byte local_24 [4];
  
  local_48 = 0xfffe;
  FUN_0277d4ac(&local_48);
  local_48 = *(undefined8 *)(param_1 + 0x1900);
  cVar2 = *(char *)(param_1 + 0x1909);
  puVar5 = *(undefined8 **)(param_1 + 0x60);
  if (puVar5 == (undefined8 *)0x0) {
    if (((DAT_052461c0 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_052461c0), iVar4 != 0)) {
      FUN_016fcf10(&DAT_05240280);
      FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
      __cxa_guard_release(&DAT_052461c0);
      puVar5 = &DAT_05240280;
    }
    else {
      puVar5 = &DAT_05240280;
    }
  }
  local_58 = PTR_DAT_04bb2020 + 0x10;
  pcStack_50 = "PlayerPutawayWait";
  FUN_017081d0(puVar5,&local_58,6,0,0);
  if (*(int *)(param_1 + 0x178) != 0) {
    return;
  }
  if (cVar2 == '\x01') {
    local_28 = 1;
    sVar3 = *(short *)PTR_DAT_04bb6298;
    if (sVar3 != -1) {
      local_58 = (undefined *)CONCAT44(local_58._4_4_,0x15);
      puVar1 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar3 * 8);
      if (0xff < (uint)(int)sVar3) {
        puVar1 = (uint *)PTR_DAT_04bc39f8;
      }
      if ((*puVar1 >> 0x15 & 1) != 0) goto LAB_0242efcc;
    }
    local_24[0] = *(byte *)(param_1 + 0x1ee8);
    ppuVar6 = (undefined **)local_24;
    if (7 < local_24[0]) {
      local_24[0] = 0xff;
    }
LAB_0242eff0:
    FUN_02669430(ppuVar6);
    uVar7 = FUN_025579bc(param_1 + 0x1ee8,&local_48,&local_28);
    uVar8 = *(uint *)(param_1 + 0x17cc);
    if ((uVar7 & 1) != 0) {
      uVar8 = uVar8 | 0x40;
      goto LAB_0242f018;
    }
  }
  else {
    local_28 = 0;
    sVar3 = *(short *)PTR_DAT_04bb6298;
    if (sVar3 == -1) {
LAB_0242efd4:
      bVar9 = *(byte *)(param_1 + 0x1ee8);
      ppuVar6 = &local_58;
      if (7 < bVar9) {
        bVar9 = 0xff;
      }
      local_58 = (undefined *)CONCAT71(local_58._1_7_,bVar9);
      goto LAB_0242eff0;
    }
    local_58 = (undefined *)CONCAT44(local_58._4_4_,0x15);
    puVar1 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar3 * 8);
    if (0xff < (uint)(int)sVar3) {
      puVar1 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((*puVar1 >> 0x15 & 1) == 0) goto LAB_0242efd4;
LAB_0242efcc:
    local_58 = (undefined *)CONCAT44(local_58._4_4_,0x15);
    uVar8 = *(uint *)(param_1 + 0x17cc);
  }
  uVar8 = uVar8 & 0xffffffbf;
LAB_0242f018:
  *(uint *)(param_1 + 0x17cc) = uVar8;
  if (*(int *)(param_1 + 0x178) == 0) {
    if ((*(uint *)(param_1 + 0x1da8) & 0xfffffffd) == 4) {
      puVar5 = *(undefined8 **)(param_1 + 0x1dc0);
      *(undefined4 *)(param_1 + 0x1da8) = 0;
      *(uint *)(param_1 + 0x17d0) = *(uint *)(param_1 + 0x17d0) & 0xfffffffd;
      if (puVar5 != &DAT_0407ebb1) {
        iVar4 = 0;
        if (*(int *)(param_1 + 0x1dc8) < 1) {
          iVar4 = *(int *)(param_1 + 0x1dc8) + -1;
        }
        memset(puVar5,0,(long)iVar4);
        *(undefined1 *)((long)puVar5 + (long)iVar4) = 0;
      }
      puVar5 = *(undefined8 **)(param_1 + 0x1e18);
      if (puVar5 != &DAT_0407ebb1) {
        iVar4 = 0;
        if (*(int *)(param_1 + 0x1e20) < 1) {
          iVar4 = *(int *)(param_1 + 0x1e20) + -1;
        }
        memset(puVar5,0,(long)iVar4);
        *(undefined1 *)((long)puVar5 + (long)iVar4) = 0;
      }
      *(undefined8 *)(param_1 + 0x1e68) = 0;
      *(undefined2 *)(param_1 + 0x1e70) = 0xff;
      uVar8 = *(uint *)(param_1 + 0x17cc);
      *(undefined8 *)(param_1 + 0x1e78) = 0;
    }
    uVar10 = *(uint *)(param_1 + 0x17d0) & 0xfffffffb;
  }
  else {
    uVar10 = *(uint *)(param_1 + 0x17d0);
  }
  *(uint *)(param_1 + 0x17d0) = uVar10 & 0xff800000 | uVar10 & 0x3fffff | (uVar8 >> 6 & 1) << 0x16;
  FUN_02328d9c(param_1,param_1 + 0xde0);
  *(undefined4 *)(param_1 + 0xb28) = (undefined4)local_48;
  *(undefined4 *)(param_1 + 0xb2c) = local_48._4_4_;
  return;
}


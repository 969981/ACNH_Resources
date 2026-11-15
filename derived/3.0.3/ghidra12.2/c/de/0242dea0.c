
void FUN_0242dea0(long param_1)

{
  uint *puVar1;
  byte bVar2;
  short sVar3;
  undefined *puVar4;
  int iVar5;
  long *plVar6;
  ulong uVar7;
  undefined8 uVar8;
  uint uVar9;
  undefined8 *puVar10;
  long lVar11;
  byte bVar12;
  uint uVar13;
  undefined8 *puVar14;
  undefined4 local_54;
  undefined8 local_50;
  char *pcStack_48;
  undefined4 local_24;
  
  puVar14 = *(undefined8 **)(param_1 + 0x60);
  if (puVar14 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar5 = __cxa_guard_acquire(&DAT_052461c0);
      puVar14 = &DAT_05240280;
      if (iVar5 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      puVar14 = &DAT_05240280;
    }
  }
  bVar12 = *(byte *)(param_1 + 0x1908);
  bVar2 = *(byte *)(param_1 + 0x1916);
  if (0xb < bVar12) {
    bVar12 = 0;
  }
  puVar10 = *(undefined8 **)(param_1 + 0x60);
  if (puVar10 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar5 = __cxa_guard_acquire(&DAT_052461c0);
      if (iVar5 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
      puVar10 = &DAT_05240280;
    }
    else {
      puVar10 = &DAT_05240280;
    }
  }
  puVar4 = PTR_DAT_04bb2020;
  local_50 = PTR_DAT_04bb2020 + 0x10;
  pcStack_48 = "PlayerIconPickupType";
  if (((puVar10[0x227] != 0) && (lVar11 = *(long *)(puVar10[0x227] + 0x78), lVar11 != 0)) &&
     (plVar6 = *(long **)(lVar11 + 0x48), plVar6 != (long *)0x0)) {
    (**(code **)(*plVar6 + 0x28))(plVar6,&local_50,bVar12);
  }
  *(undefined1 *)(param_1 + 0x8f0) = 0;
  *(undefined1 *)(param_1 + 0x8c5) = 0;
  *(undefined1 *)(param_1 + 0x8e5) = 0;
  *(undefined4 *)(param_1 + 0x8f4) = 0;
  *(undefined2 *)(param_1 + 0x8f8) = 0;
  *(undefined4 *)(param_1 + 0x8b8) = *(undefined4 *)(param_1 + 0x8bc);
  *(undefined4 *)(param_1 + 0x8d8) = *(undefined4 *)(param_1 + 0x8dc);
  *(undefined4 *)(puVar14 + 0x255) = *(undefined4 *)((long)puVar14 + 0x12ac);
  *(undefined1 *)((long)puVar14 + 0x12b5) = 0;
  if ((*(byte *)(param_1 + 0x1917) >> 2 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x1917) >> 1 & 1) == 0) {
      FUN_0232ba00(param_1);
      if (bVar2 - 8 < 0xfffffff9) {
        pcStack_48 = "PlayerPickupGetDemo";
      }
      else {
        pcStack_48 = "PlayerPickup2GetDemo";
      }
    }
    else {
      pcStack_48 = "PlayerPickupGetDemoKeep";
    }
    uVar8 = 0;
  }
  else {
    pcStack_48 = "PlayerPutawayWait";
    uVar8 = 1;
  }
  local_50 = puVar4 + 0x10;
  FUN_017081d0(puVar14,&local_50,6,uVar8,0);
  if (*(int *)(param_1 + 0x178) != 0) goto LAB_0242e1a0;
  local_50 = (undefined *)0xfffe;
  FUN_0277d4ac(&local_50);
  local_50 = *(undefined **)(param_1 + 0x1900);
  local_54 = 0;
  sVar3 = *(short *)PTR_DAT_04bb6298;
  if (sVar3 == -1) {
LAB_0242e090:
    bVar12 = *(byte *)(param_1 + 0x1ee8);
    if (7 < bVar12) {
      bVar12 = 0xff;
    }
    local_24 = CONCAT31(local_24._1_3_,bVar12);
    FUN_02669430(&local_24);
    uVar7 = FUN_025579bc(param_1 + 0x1ee8,&local_50,&local_54);
    uVar9 = *(uint *)(param_1 + 0x17cc);
    if ((uVar7 & 1) == 0) goto LAB_0242e0d0;
    uVar9 = uVar9 | 0x40;
  }
  else {
    local_24 = 0x15;
    puVar1 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar3 * 8);
    if (0xff < (uint)(int)sVar3) {
      puVar1 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((*puVar1 >> 0x15 & 1) == 0) goto LAB_0242e090;
    uVar9 = *(uint *)(param_1 + 0x17cc);
LAB_0242e0d0:
    uVar9 = uVar9 & 0xffffffbf;
  }
  *(uint *)(param_1 + 0x17cc) = uVar9;
  if (*(int *)(param_1 + 0x178) == 0) {
    if ((*(uint *)(param_1 + 0x1da8) & 0xfffffffd) == 4) {
      puVar14 = *(undefined8 **)(param_1 + 0x1dc0);
      *(undefined4 *)(param_1 + 0x1da8) = 0;
      *(uint *)(param_1 + 0x17d0) = *(uint *)(param_1 + 0x17d0) & 0xfffffffd;
      if (puVar14 != &DAT_0407ebb1) {
        iVar5 = 0;
        if (*(int *)(param_1 + 0x1dc8) < 1) {
          iVar5 = *(int *)(param_1 + 0x1dc8) + -1;
        }
        memset(puVar14,0,(long)iVar5);
        *(undefined1 *)((long)puVar14 + (long)iVar5) = 0;
      }
      puVar14 = *(undefined8 **)(param_1 + 0x1e18);
      if (puVar14 != &DAT_0407ebb1) {
        iVar5 = 0;
        if (*(int *)(param_1 + 0x1e20) < 1) {
          iVar5 = *(int *)(param_1 + 0x1e20) + -1;
        }
        memset(puVar14,0,(long)iVar5);
        *(undefined1 *)((long)puVar14 + (long)iVar5) = 0;
      }
      *(undefined8 *)(param_1 + 0x1e68) = 0;
      *(undefined8 *)(param_1 + 0x1e78) = 0;
      *(undefined2 *)(param_1 + 0x1e70) = 0xff;
      uVar9 = *(uint *)(param_1 + 0x17cc);
    }
    uVar13 = *(uint *)(param_1 + 0x17d0) & 0xfffffffb;
  }
  else {
    uVar13 = *(uint *)(param_1 + 0x17d0);
  }
  *(uint *)(param_1 + 0x17d0) = uVar13 & 0xff800000 | uVar13 & 0x3fffff | (uVar9 >> 6 & 1) << 0x16;
LAB_0242e1a0:
  local_50 = (undefined *)
             CONCAT44((float)(int)*(short *)(param_1 + 0x190d) * 0.25 +
                      (float)(int)*(short *)(param_1 + 0x1913) * 0.001,
                      (float)*(int *)(param_1 + 0x1909) * 0.001);
  pcStack_48 = (char *)CONCAT44(pcStack_48._4_4_,(float)*(int *)(param_1 + 0x190f) * 0.001);
  FUN_016dec40(param_1,&local_50,0,0,0,0,0);
  return;
}


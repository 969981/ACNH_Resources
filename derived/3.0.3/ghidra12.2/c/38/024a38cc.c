
/* WARNING: Removing unreachable block (ram,0x024a3d9c) */

void FUN_024a38cc(long param_1)

{
  long *plVar1;
  int *piVar2;
  uint *puVar3;
  undefined *puVar4;
  char cVar5;
  byte bVar6;
  short sVar7;
  bool bVar8;
  uint uVar9;
  int iVar10;
  ulong uVar11;
  byte *pbVar12;
  byte bVar13;
  uint uVar14;
  long lVar15;
  undefined8 *puVar16;
  undefined8 local_90;
  char *local_88;
  undefined1 local_80;
  undefined4 local_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined1 local_5c;
  undefined1 local_5b;
  undefined4 local_5a;
  undefined8 local_50;
  undefined4 local_44;
  
  plVar1 = (long *)(param_1 + 0x1902);
  if (*(int *)(param_1 + 0x178) == 0) {
    uVar11 = FUN_02744114(param_1 + 0x1ee8,&DAT_0548fdc0);
    uVar14 = 0x8000000;
    if ((uVar11 & 1) == 0) {
      uVar14 = 0;
    }
    *(uint *)(param_1 + 0x17d0) = *(uint *)(param_1 + 0x17d0) & 0xf7ffffff | uVar14;
  }
  cVar5 = *(char *)(param_1 + 0x1913);
  puVar16 = *(undefined8 **)(param_1 + 0x60);
  if (puVar16 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar10 = __cxa_guard_acquire(&DAT_052461c0);
      puVar16 = &DAT_05240280;
      if (iVar10 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      puVar16 = &DAT_05240280;
    }
  }
  if (cVar5 == '\0') {
    local_88 = "PlayerNetGetDemo";
  }
  else {
    local_88 = "PlayerNetGetDemoKeep";
  }
  local_90 = PTR_DAT_04bb2020 + 0x10;
  FUN_017081d0(puVar16,&local_90,6,1,0);
  *(undefined1 *)(param_1 + 0xaf5) = 0;
  *(undefined4 *)(param_1 + 0xae8) = *(undefined4 *)(param_1 + 0xaec);
  if (*(int *)(param_1 + 0x178) != 0) goto LAB_024a3e60;
  uVar14 = *(uint *)(param_1 + 0x17d0);
  *(undefined1 *)(param_1 + 0x1913) = 0;
  *(undefined1 *)(param_1 + 0x190a) = 0;
  *(byte *)(param_1 + 0x1914) = (byte)(uVar14 >> 0x1b) & 1;
  *(uint *)(param_1 + 0x17d0) = uVar14 | 0x400000;
  puVar4 = PTR_DAT_04bb6298;
  if ((uVar14 >> 0x1b & 1) == 0) {
    local_90 = (undefined *)0xfffe;
    FUN_0277d4ac(&local_90);
    local_90 = (undefined *)*plVar1;
    local_44 = 0;
    sVar7 = *(short *)puVar4;
    if (sVar7 == -1) {
LAB_024a3a34:
      bVar13 = *(byte *)(param_1 + 0x1ee8);
      if (7 < bVar13) {
        bVar13 = 0xff;
      }
      local_50 = CONCAT71(local_50._1_7_,bVar13);
      FUN_02669430(&local_50);
      uVar11 = FUN_025579bc(param_1 + 0x1ee8,&local_90,&local_44);
      uVar9 = *(uint *)(param_1 + 0x17cc);
      if ((uVar11 & 1) == 0) goto LAB_024a3a74;
      uVar9 = uVar9 | 0x40;
    }
    else {
      local_50 = CONCAT44(local_50._4_4_,0x15);
      puVar3 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar7 * 8);
      if (0xff < (uint)(int)sVar7) {
        puVar3 = (uint *)PTR_DAT_04bc39f8;
      }
      if ((*puVar3 >> 0x15 & 1) == 0) goto LAB_024a3a34;
      uVar9 = *(uint *)(param_1 + 0x17cc);
LAB_024a3a74:
      uVar9 = uVar9 & 0xffffffbf;
    }
    *(uint *)(param_1 + 0x17cc) = uVar9;
    *(uint *)(param_1 + 0x17d0) =
         *(uint *)(param_1 + 0x17d0) & 0xff800000 |
         *(uint *)(param_1 + 0x17d0) & 0x3fffff | (uVar9 >> 6 & 1) << 0x16;
  }
  pbVar12 = (byte *)(param_1 + 0x1ee8);
  FUN_0252d8f0(&local_50,pbVar12);
  uVar11 = FUN_02556d7c(&local_50,pbVar12,1);
  if ((uVar11 & 1) != 0) {
    FUN_02326130(pbVar12,&local_50,1);
  }
  FUN_02326130(pbVar12,&local_50,1);
  *(undefined8 *)(param_1 + 0x190b) = local_50;
  uVar11 = FUN_023266fc(param_1,0);
  if ((uVar11 & 1) != 0) {
    bVar6 = *pbVar12;
    local_90 = (undefined *)CONCAT71(local_90._1_7_,1);
    local_90 = (undefined *)CONCAT44(*(undefined4 *)PTR_DAT_04bb37e0,(undefined4)local_90);
    local_88 = (char *)CONCAT44(local_88._4_4_,*(undefined4 *)(PTR_DAT_04bb37e0 + 4));
    bVar13 = bVar6;
    if (7 < bVar6) {
      bVar13 = 0xff;
    }
    local_90._0_2_ = CONCAT11(bVar13,1);
    if (((bVar6 < 8) && (uVar9 = FUN_02582d8c(pbVar12,1), uVar9 < 8)) &&
       (*(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar9 * 0x13f0 + 0x13d4) != '\0')) {
      bVar8 = *(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar9 * 0x13f0 + 0x13d6) != '\0';
    }
    else {
      bVar8 = false;
    }
    local_90 = (undefined *)CONCAT71(local_90._1_7_,bVar8);
    local_90 = (undefined *)CONCAT44((undefined4)local_50,(undefined4)local_90);
    local_88 = (char *)CONCAT44(local_88._4_4_,local_50._4_4_);
    FUN_02308eb4(&local_90);
  }
  local_90 = (undefined *)0xfffe;
  FUN_0277d4ac(&local_90);
  local_90 = (undefined *)*plVar1;
  iVar10 = FUN_0277d6c4(&local_90);
  if (iVar10 == 0x283) {
    FUN_0232cc00(param_1);
  }
  else {
    FUN_0232ba00(param_1);
  }
  bVar13 = *pbVar12;
  if (7 < bVar13) {
    bVar13 = 0xff;
  }
  local_50 = CONCAT71(local_50._1_7_,bVar13);
  if ((uVar14 & 0x8000000) != 0) {
    lVar15 = *(long *)PTR_DAT_04bb39b0;
    if ((lVar15 != 0) && (*(int *)(lVar15 + 0x15c) != 0)) {
      pbVar12 = PTR_DAT_04bb32e0;
      if (*(int *)(lVar15 + 0x15c) != 0) {
        pbVar12 = (byte *)(lVar15 + 0x158);
      }
      if ((*pbVar12 < 8) ||
         (((*(int *)(lVar15 + 0x15c) != 0 && (*(long *)PTR_DAT_04bb4718 != 0)) &&
          (pbVar12 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5), *pbVar12 < 8)))) {
LAB_024a3ca8:
        bVar13 = *pbVar12;
        if (7 < bVar13) {
          bVar13 = 0xff;
        }
      }
      else {
        if (*(long **)PTR_DAT_04bb27d0 == (long *)0x0) {
LAB_024a3ca0:
          pbVar12 = PTR_DAT_04bb5038;
          goto LAB_024a3ca8;
        }
        lVar15 = **(long **)PTR_DAT_04bb27d0;
        bVar13 = *(byte *)(lVar15 + 0x473);
        pbVar12 = PTR_DAT_04bb5038;
        if ((long)(char)bVar13 != 0xffffffffffffffff) {
          puVar3 = (uint *)(lVar15 + 0x48) + ((long)(char)bVar13 & 0xffffffffU) * 0x20;
          if (7 < bVar13) {
            puVar3 = (uint *)(lVar15 + 0x48);
          }
          if ((*puVar3 & 8) != 0) {
            pbVar12 = (byte *)(lVar15 + 0x471);
          }
        }
        bVar13 = *pbVar12;
        if (7 < bVar13) goto LAB_024a3ca0;
      }
      if (7 < bVar13) {
        bVar13 = 0xff;
      }
      local_50 = CONCAT71(local_50._1_7_,bVar13);
    }
    local_90 = (undefined *)0xfffe;
    FUN_0277d4ac(&local_90);
    local_90 = (undefined *)*plVar1;
    FUN_0267ec30(&local_50,&local_90,0);
  }
  lVar15 = *(long *)PTR_DAT_04bb3968;
  local_90 = (undefined *)0xfffe;
  FUN_0277d4ac(&local_90);
  local_90 = (undefined *)*plVar1;
  FUN_0086a920(lVar15 + 0x3430,&local_50,&local_90);
  sVar7 = *(short *)puVar4;
  if (sVar7 != -1) {
    local_90 = (undefined *)CONCAT44(local_90._4_4_,0x20);
    puVar4 = PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar7 * 8;
    if (0xff < (uint)(int)sVar7) {
      puVar4 = PTR_DAT_04bc39f8;
    }
    if (((*(uint *)(puVar4 + 4) & 1) != 0) && (*(char *)(*(long *)PTR_DAT_04bb3728 + 0x198) != '\0')
       ) {
      local_90 = (undefined *)CONCAT44(local_90._4_4_,5);
      piVar2 = (int *)(*(long *)PTR_DAT_04bb3728 + 0x160);
      *piVar2 = *piVar2 + 1;
    }
  }
  if (*(int *)(param_1 + 0x178) == 0) {
    uVar14 = *(uint *)(param_1 + 0x17d0);
    if ((*(uint *)(param_1 + 0x1da8) & 0xfffffffd) == 4) {
      puVar16 = *(undefined8 **)(param_1 + 0x1dc0);
      *(uint *)(param_1 + 0x17d0) = uVar14 & 0xfffffffd;
      *(undefined4 *)(param_1 + 0x1da8) = 0;
      if (puVar16 != &DAT_0407ebb1) {
        iVar10 = 0;
        if (*(int *)(param_1 + 0x1dc8) < 1) {
          iVar10 = *(int *)(param_1 + 0x1dc8) + -1;
        }
        memset(puVar16,0,(long)iVar10);
        *(undefined1 *)((long)puVar16 + (long)iVar10) = 0;
      }
      puVar16 = *(undefined8 **)(param_1 + 0x1e18);
      if (puVar16 != &DAT_0407ebb1) {
        iVar10 = 0;
        if (*(int *)(param_1 + 0x1e20) < 1) {
          iVar10 = *(int *)(param_1 + 0x1e20) + -1;
        }
        memset(puVar16,0,(long)iVar10);
        *(undefined1 *)((long)puVar16 + (long)iVar10) = 0;
      }
      *(undefined8 *)(param_1 + 0x1e68) = 0;
      *(undefined8 *)(param_1 + 0x1e78) = 0;
      *(undefined2 *)(param_1 + 0x1e70) = 0xff;
      uVar14 = *(uint *)(param_1 + 0x17d0);
    }
    *(uint *)(param_1 + 0x17d0) = uVar14 & 0xfffffffb;
  }
LAB_024a3e60:
  local_5a = 0;
  local_60 = 0x3f800000;
  cVar5 = *(char *)(param_1 + 0x1914);
  local_5b = 1;
  local_50 = 0xfffe;
  FUN_0277d4ac(&local_50);
  local_90 = (undefined *)*plVar1;
  local_7c = 2;
  local_88 = (char *)0x1;
  local_80 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  local_5c = 1;
  local_5a = CONCAT31(local_5a._1_3_,cVar5 != '\0');
  FUN_0236b830(param_1,&local_90);
  *(undefined1 *)(param_1 + 0xb20) = 0;
  return;
}



/* WARNING: Heritage AFTER dead removal. Example location: s0xfffffffffffff842 : 0x036e89fc */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_036e8250(long *param_1,char *param_2)

{
  undefined **ppuVar1;
  ulong uVar2;
  byte bVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined5 uVar6;
  undefined1 uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  void *pvVar12;
  long lVar13;
  undefined8 uVar14;
  long lVar15;
  uint *puVar16;
  byte *pbVar17;
  ulong uVar18;
  undefined4 local_16ac;
  undefined **local_16a8;
  char *pcStack_16a0;
  undefined8 *local_1698;
  byte *pbStack_1690;
  uint local_f4c;
  uint local_f48;
  uint local_f44;
  int local_f40;
  byte local_f34 [4];
  undefined **local_f30;
  undefined ***local_f28 [234];
  uint local_7d4;
  uint local_7d0;
  uint local_7cc;
  int local_7c8;
  undefined8 local_7c0;
  undefined4 *local_7b8;
  
  *param_1 = (long)(PTR_DAT_04bbfe60 + 0x10);
  memset(param_1 + 1,0,0x754);
  uVar8 = nn::os::GetSystemTick();
  uVar8 = (uVar8 ^ uVar8 >> 0x1e) * 0x6c078965 + 1;
  *(uint *)((long)param_1 + 0x75c) = uVar8;
  uVar8 = (uVar8 ^ uVar8 >> 0x1e) * 0x6c078965 + 2;
  *(uint *)(param_1 + 0xec) = uVar8;
  uVar8 = (uVar8 ^ uVar8 >> 0x1e) * 0x6c078965 + 3;
  *(uint *)((long)param_1 + 0x764) = uVar8;
  *(uint *)(param_1 + 0xed) = (uVar8 ^ uVar8 >> 0x1e) * 0x6c078965 + 4;
  pvVar12 = (void *)FUN_01a451fc(param_1);
  memset(pvVar12,0,0x754);
  pvVar12 = (void *)(**(code **)(*param_1 + 0x18))(param_1);
  memset(pvVar12,0,0x754);
  uVar8 = DAT_05ac1978;
  if ((int)DAT_05ac1978 < 1) {
    if ((DAT_05ac1868 == 0) || (*(ushort **)(DAT_05ac1868 + 8) == (ushort *)0x0)) {
      uVar8 = 0;
    }
    else {
      uVar8 = (uint)**(ushort **)(DAT_05ac1868 + 8);
    }
  }
  local_f30 = (undefined **)(PTR_DAT_04bb2020 + 0x10);
  local_f28[0] = (undefined ***)0x40f411c;
  iVar9 = FUN_02758850(&local_f30);
  if ((uVar8 & 0xffff) != 0) {
    uVar18 = 0;
    ppuVar1 = (undefined **)(PTR_DAT_04bcad28 + 0x10);
    do {
      if ((int)DAT_05ac1978 < 1) {
        if ((((DAT_05ac1868 != 0) &&
             (puVar16 = *(uint **)(DAT_05ac1868 + 8), puVar16 != (uint *)0x0)) &&
            ((DAT_05ac1880 <= uVar18 || (*(char *)(DAT_05ac1888 + uVar18) != '\0')))) &&
           (((uVar18 < *puVar16 && (puVar16[1] != 0)) && ((ushort)puVar16[2] != 0)))) {
          iVar10 = 0xc;
          if (*(char *)((long)puVar16 + 10) != '\0') {
            iVar10 = 0x1c;
          }
          local_f28[0] = (undefined ***)
                         ((ulong)(puVar16[1] * (int)uVar18 + (uint)(ushort)puVar16[2] * 8 + iVar10)
                         + (long)puVar16);
          goto joined_r0x036e84d8;
        }
      }
      else if (uVar18 < DAT_05ac1978) {
        uVar2 = uVar18;
        if (DAT_05ac1968 <= uVar18) {
          uVar2 = 0;
        }
        local_f28[0] = *(undefined ****)(DAT_05ac1970 + uVar2 * 8);
joined_r0x036e84d8:
        if (local_f28[0] != (undefined ***)0x0) {
          local_f30 = ppuVar1;
          iVar10 = FUN_03789370(&local_f30);
          FUN_03789240(&local_16a8,&local_f30);
          if (iVar10 <= iVar9) {
            FUN_0277dedc(&local_16a8);
            lVar13 = (**(code **)(*param_1 + 0x18))(param_1);
            uVar11 = FUN_0277d6c4(&local_16a8);
            if ((uVar11 >> 3 & 0x1fff) < 0x753) {
              lVar15 = (ulong)((uVar11 & 0xffff) >> 5) * 4;
              *(uint *)(lVar13 + lVar15) = *(uint *)(lVar13 + lVar15) | 1 << (ulong)(uVar11 & 0x1f);
            }
          }
        }
      }
      uVar18 = uVar18 + 1;
    } while ((uVar8 & 0xffff) != uVar18);
  }
  puVar5 = PTR_DAT_04bbfe60;
  local_f30 = (undefined **)(PTR_DAT_04bbfe60 + 0x10);
  memset(local_f28,0,0x754);
  uVar8 = nn::os::GetSystemTick();
  local_7d4 = (uVar8 ^ uVar8 >> 0x1e) * 0x6c078965 + 1;
  local_7d0 = (local_7d4 ^ local_7d4 >> 0x1e) * 0x6c078965 + 2;
  local_7cc = (local_7d0 ^ local_7d0 >> 0x1e) * 0x6c078965 + 3;
  local_7c8 = (local_7cc ^ local_7cc >> 0x1e) * 0x6c078965 + 4;
  pvVar12 = (void *)(*(code *)local_f30[3])(&local_f30);
  memset(pvVar12,0,0x754);
  memcpy(local_f28,param_2 + 0x1298,0x754);
  puVar4 = PTR_DAT_04bb2020;
  lVar13 = *(long *)PTR_DAT_04bb39b0;
  pbVar17 = PTR_DAT_04bb32e0;
  if (lVar13 == 0) {
    bVar3 = *PTR_DAT_04bb32e0;
joined_r0x036e860c:
    if (7 < bVar3) {
LAB_036e8610:
      if (*(long **)PTR_DAT_04bb27d0 != (long *)0x0) {
        lVar13 = **(long **)PTR_DAT_04bb27d0;
        bVar3 = *(byte *)(lVar13 + 0x473);
        pbVar17 = PTR_DAT_04bb5038;
        if ((long)(char)bVar3 != 0xffffffffffffffff) {
          puVar16 = (uint *)(lVar13 + 0x48) + ((long)(char)bVar3 & 0xffffffffU) * 0x20;
          if (7 < bVar3) {
            puVar16 = (uint *)(lVar13 + 0x48);
          }
          if ((*puVar16 & 8) != 0) {
            pbVar17 = (byte *)(lVar13 + 0x471);
          }
        }
        local_f34[0] = *pbVar17;
        if (local_f34[0] < 8) goto LAB_036e8690;
      }
      pbVar17 = PTR_DAT_04bb5038;
    }
  }
  else {
    if (*(int *)(lVar13 + 0x15c) != 0) {
      pbVar17 = (byte *)(lVar13 + 0x158);
    }
    if (7 < *pbVar17) {
      if ((*(int *)(lVar13 + 0x15c) != 0) && (*(long *)PTR_DAT_04bb4718 != 0)) {
        pbVar17 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5);
        bVar3 = *pbVar17;
        goto joined_r0x036e860c;
      }
      goto LAB_036e8610;
    }
  }
  local_f34[0] = *pbVar17;
  if (7 < local_f34[0]) {
    local_f34[0] = 0xff;
  }
LAB_036e8690:
  ppuVar1 = (undefined **)(PTR_DAT_04bb2020 + 0x10);
  pcStack_16a0 = "Unlock_MargeCatalog_General";
  local_16a8 = ppuVar1;
  uVar14 = FUN_02758850(&local_16a8);
  if ((int)uVar14 == 0) {
    pcStack_16a0 = "Unlock_MargeCatalog_DIY";
    local_16a8 = ppuVar1;
    iVar9 = FUN_02757a80(uVar14,&local_16a8);
    if ((iVar9 != 0) &&
       (local_7c0 = *(undefined ***)PTR_DAT_04bb46f0, local_7c0 != (undefined **)0x0)) {
      local_1698 = &local_7c0;
      local_16a8 = &PTR_LAB_04b45588;
      pbStack_1690 = local_f34;
      pcStack_16a0 = param_2;
      FUN_008a1ba0(&local_f30,&local_16a8);
    }
  }
  else {
    FUN_0264a400(&local_16a8,local_f34);
    pvVar12 = (void *)(*(code *)local_f30[3])(&local_f30);
    lVar15 = (*(code *)local_16a8[4])(&local_16a8);
    for (lVar13 = 0;
        *(uint *)((long)&local_7c0 + lVar13) =
             *(uint *)(lVar15 + lVar13) | *(uint *)((long)pvVar12 + lVar13), lVar13 != 0x750;
        lVar13 = lVar13 + 8) {
      *(uint *)((long)&local_7c0 + lVar13 + 4) =
           *(uint *)(lVar15 + lVar13 + 4) | *(uint *)((long)pvVar12 + lVar13 + 4);
    }
    memcpy(pvVar12,&local_7c0,0x754);
    *(uint *)((long)pvVar12 + 0x750) = *(uint *)((long)pvVar12 + 0x750) & 0xffffff;
  }
  local_16a8 = (undefined **)(puVar5 + 0x10);
  memset(&pcStack_16a0,0,0x754);
  uVar8 = nn::os::GetSystemTick();
  local_f4c = (uVar8 ^ uVar8 >> 0x1e) * 0x6c078965 + 1;
  local_f48 = (local_f4c ^ local_f4c >> 0x1e) * 0x6c078965 + 2;
  local_f44 = (local_f48 ^ local_f48 >> 0x1e) * 0x6c078965 + 3;
  local_f40 = (local_f44 ^ local_f44 >> 0x1e) * 0x6c078965 + 4;
  pvVar12 = (void *)FUN_01a451fc(&local_16a8);
  memset(pvVar12,0,0x754);
  local_16ac = 0xd;
  local_7c0 = &PTR_FUN_049ff448;
  local_7b8 = &local_16ac;
  FUN_008a1ba0(&local_16a8,&local_7c0);
  local_7c0 = &PTR_FUN_049ff448;
  local_16ac = 0xe;
  local_7b8 = &local_16ac;
  FUN_008a1ba0(&local_16a8,&local_7c0);
  local_7c0 = &PTR_FUN_049ff448;
  local_16ac = 0xf;
  local_7b8 = &local_16ac;
  FUN_008a1ba0(&local_16a8,&local_7c0);
  local_7c0 = &PTR_FUN_049ff448;
  local_16ac = 0x10;
  local_7b8 = &local_16ac;
  FUN_008a1ba0(&local_16a8,&local_7c0);
  local_7c0 = &PTR_FUN_049ff448;
  local_16ac = 0x11;
  local_7b8 = &local_16ac;
  FUN_008a1ba0(&local_16a8,&local_7c0);
  local_7c0 = &PTR_FUN_049ff448;
  local_16ac = 0x12;
  local_7b8 = &local_16ac;
  FUN_008a1ba0(&local_16a8,&local_7c0);
  local_7c0 = &PTR_FUN_049ff448;
  local_16ac = 0x13;
  local_7b8 = &local_16ac;
  FUN_008a1ba0(&local_16a8,&local_7c0);
  pvVar12 = (void *)(*(code *)local_f30[3])(&local_f30);
  lVar15 = (*(code *)local_16a8[4])(&local_16a8);
  for (lVar13 = 0;
      *(uint *)((long)&local_7c0 + lVar13) =
           *(uint *)(lVar15 + lVar13) & *(uint *)((long)pvVar12 + lVar13), lVar13 != 0x750;
      lVar13 = lVar13 + 8) {
    *(uint *)((long)&local_7c0 + lVar13 + 4) =
         *(uint *)(lVar15 + lVar13 + 4) & *(uint *)((long)pvVar12 + lVar13 + 4);
  }
  memcpy(pvVar12,&local_7c0,0x754);
  *(uint *)((long)pvVar12 + 0x750) = *(uint *)((long)pvVar12 + 0x750) & 0xffffff;
  pvVar12 = (void *)(**(code **)(*param_1 + 0x18))(param_1);
  lVar15 = (*(code *)local_f30[4])(&local_f30);
  for (lVar13 = 0;
      *(uint *)((long)&local_7c0 + lVar13) =
           *(uint *)(lVar15 + lVar13) | *(uint *)((long)pvVar12 + lVar13), lVar13 != 0x750;
      lVar13 = lVar13 + 8) {
    *(uint *)((long)&local_7c0 + lVar13 + 4) =
         *(uint *)(lVar15 + lVar13 + 4) | *(uint *)((long)pvVar12 + lVar13 + 4);
  }
  memcpy(pvVar12,&local_7c0,0x754);
  local_7c0 = (undefined **)((ulong)local_7c0 & 0xffffffffff000000);
  *(uint *)((long)pvVar12 + 0x750) = *(uint *)((long)pvVar12 + 0x750) & 0xffffff;
  local_f28[0] = (undefined ***)0x40e9417;
  local_f30 = (undefined **)(puVar4 + 0x10);
  iVar9 = FUN_02758850(&local_f30);
  if (iVar9 != 0) {
    local_16a8 = (undefined **)CONCAT44(local_16a8._4_4_,0x14);
    uVar7 = local_7c0._2_1_;
    uVar6 = (undefined5)local_7c0;
    local_7c0 = (undefined **)(CONCAT56(local_7c0._3_5_,CONCAT15(uVar7,uVar6)) | 0x100000000000);
  }
  local_f28[0] = (undefined ***)0x409b6b6;
  local_f30 = (undefined **)(puVar4 + 0x10);
  iVar9 = FUN_02758850(&local_f30);
  if (iVar9 != 0) {
    local_16a8 = (undefined **)CONCAT44(local_16a8._4_4_,0x15);
    uVar7 = local_7c0._2_1_;
    uVar6 = (undefined5)local_7c0;
    local_7c0 = (undefined **)(CONCAT56(local_7c0._3_5_,CONCAT15(uVar7,uVar6)) | 0x200000000000);
  }
  local_f28[0] = &local_16a8;
  local_16a8 = (undefined **)
               CONCAT62(CONCAT51(local_16a8._3_5_,local_7c0._2_1_),(undefined2)local_7c0);
  local_f30 = &PTR_LAB_04b46998;
  FUN_008a1ba0(param_1,&local_f30);
  return;
}


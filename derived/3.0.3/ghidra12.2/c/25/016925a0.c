
void FUN_016925a0(long param_1)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  uint uVar6;
  undefined *puVar7;
  byte bVar8;
  int iVar9;
  ulong uVar10;
  undefined8 *puVar11;
  uint *puVar12;
  undefined **ppuVar13;
  long lVar14;
  int iVar15;
  float fVar16;
  float fVar17;
  undefined *local_f0;
  uint local_e8;
  int iStack_e4;
  uint local_e0;
  undefined4 uStack_dc;
  undefined *local_d8;
  uint local_d0;
  int iStack_cc;
  undefined2 local_c8;
  byte local_c6;
  undefined1 local_c5;
  undefined4 local_c4;
  undefined1 auStack_c0 [8];
  undefined2 local_b8;
  byte local_b6;
  undefined1 local_b5;
  undefined4 local_b4;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined1 auStack_a0 [8];
  uint local_98;
  int local_94;
  undefined *local_90;
  int local_88;
  int local_84;
  byte local_80;
  
  puVar7 = PTR_DAT_04bb6268;
  iVar9 = 0x1e - *(int *)(param_1 + 0xa038);
  iVar15 = iVar9;
  if (1 < iVar9) {
    iVar15 = 2;
  }
  if (0x1d < *(int *)(param_1 + 0xa038)) {
    iVar15 = iVar9;
  }
  if (0 < iVar15) {
    lVar5 = param_1 + 0x3020;
    puVar2 = PTR_DAT_04bb2018 + 0x10;
    puVar3 = PTR_DAT_04bb2010 + 0x10;
    puVar4 = PTR_DAT_04bbfe68 + 0x10;
    do {
      lVar14 = 0;
      iVar9 = 0;
      do {
        puVar12 = (uint *)(lVar5 + lVar14);
        lVar14 = lVar14 + 4;
        uVar6 = *puVar12 - (*puVar12 >> 1 & 0x55555555);
        uVar6 = (uVar6 >> 2 & 0x33333333) + (uVar6 & 0x33333333);
        uVar6 = uVar6 + (uVar6 >> 4) & 0xf0f0f0f;
        uVar6 = uVar6 + (uVar6 >> 8);
        iVar9 = (uVar6 + (uVar6 >> 0x10) & 0x3f) + iVar9;
      } while (lVar14 != 0x1000);
      if (iVar9 == 0) {
        return;
      }
      FUN_01696be0(auStack_a0,param_1 + 0x3018);
      local_a4 = 0;
      uVar6 = DAT_0514cb58 ^ DAT_0514cb58 << 0xb;
      DAT_0514cb58 = DAT_0514cb5c;
      DAT_0514cb5c = DAT_0514cb60;
      uVar6 = uVar6 >> 8 ^ DAT_0514cb64 >> 0x13 ^ uVar6 ^ DAT_0514cb64;
      DAT_0514cb60 = DAT_0514cb64;
      local_a8 = *(uint *)(&DAT_04176978 + ((ulong)uVar6 + (ulong)uVar6 * 2 >> 0x1e & 0xc)) & 0xffff
      ;
      DAT_0514cb64 = uVar6;
      FUN_0277d4ac(&local_a8);
      fVar17 = (float)local_94 * 5.0 + 5.0;
      fVar16 = (float)(int)local_98 * 5.0 + 5.0;
      local_88 = (int)((float)(int)fVar16 / 10.0) - (uint)(fVar16 < 0.0);
      local_84 = (int)((float)(int)fVar17 / 10.0) - (uint)(fVar17 < 0.0);
      local_90 = puVar2;
      uVar10 = FUN_01318310(&local_90);
      if ((uVar10 & 1) == 0) {
        local_f0 = PTR_DAT_04bb2010 + 0x10;
        local_e8 = local_98;
        iStack_e4 = local_94;
        local_e0 = local_a8;
        uStack_dc = local_a4;
        local_90 = PTR_DAT_04bbfe68 + 0x10;
        local_88 = 0;
        lVar14 = *(long *)PTR_DAT_04bb2720;
        if ((lVar14 == 0) || (*(long *)(lVar14 + 0x330) == 0)) {
          puVar11 = &DAT_055c04a0;
        }
        else {
          puVar11 = (undefined8 *)
                    (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                              (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar14 + 0x338));
          iVar9 = FUN_006bd550(*puVar11,0);
          puVar11 = (undefined8 *)PTR_DAT_04bc3a80;
          if (iVar9 != 0x758f7eaf) {
            puVar11 = &DAT_055c04a0;
          }
        }
        local_84 = *(int *)(puVar11 + 7);
        local_80 = FUN_017baf44();
        puVar12 = &local_e0;
        ppuVar13 = &local_f0;
        local_90 = PTR_DAT_04bb6268;
      }
      else {
        bVar8 = FUN_022af654(auStack_a0,1);
        FUN_0124c030(auStack_c0,&local_a8);
        iVar9 = FUN_0123db50(&local_b8,local_b0);
        if ((iVar9 == 0x21) || (iVar9 = FUN_0123db50(&local_b8,local_b0), iVar9 == 0x22)) {
          local_b6 = local_b6 & 0xe0 | local_b6 & 3 | (bVar8 & 7) << 2;
        }
        local_c8 = local_b8;
        local_a8 = CONCAT13(local_b5,CONCAT12(local_b6,local_b8));
        local_a4 = local_b4;
        local_c5 = local_b5;
        local_c4 = local_b4;
        local_d0 = local_98;
        iStack_cc = local_94;
        local_88 = 0;
        lVar14 = *(long *)PTR_DAT_04bb2720;
        local_d8 = puVar3;
        local_c6 = local_b6;
        local_90 = puVar4;
        if ((lVar14 == 0) || (*(long *)(lVar14 + 0x330) == 0)) {
          puVar11 = &DAT_055c04a0;
        }
        else {
          puVar11 = (undefined8 *)
                    (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                              (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar14 + 0x338));
          iVar9 = FUN_006bd550(*puVar11,0);
          puVar11 = (undefined8 *)PTR_DAT_04bc3a80;
          if (iVar9 != 0x758f7eaf) {
            puVar11 = &DAT_055c04a0;
          }
        }
        local_84 = *(int *)(puVar11 + 7);
        local_80 = FUN_017baf44();
        puVar12 = (uint *)&local_c8;
        ppuVar13 = &local_d8;
        local_90 = puVar7;
      }
      local_80 = local_80 & 1;
      local_90 = local_90 + 0x10;
      FUN_011f3880(&local_90,0,puVar12,ppuVar13);
      if ((((DAT_05233970 <= (int)local_98) && ((int)local_98 <= DAT_05233980)) &&
          (DAT_05233974 <= local_94)) && (local_94 <= DAT_05233984)) {
        uVar6 = (local_94 << 7 & 0xffffff00U) + ((int)local_98 >> 1);
        if (uVar6 >> 0xf == 0) {
          lVar14 = (ulong)(uVar6 >> 5) * 4;
          *(uint *)(lVar5 + lVar14) =
               *(uint *)(lVar5 + lVar14) & (1 << (ulong)(local_98 >> 1 & 0x1f) ^ 0xffffffffU);
          lVar14 = (ulong)(uVar6 >> 5) * 4;
          *(uint *)(param_1 + 0x1010 + lVar14) =
               *(uint *)(param_1 + 0x1010 + lVar14) &
               (1 << (ulong)(local_98 >> 1 & 0x1f) ^ 0xffffffffU);
        }
        uVar6 = (local_94 << 7 & 0xffffff00U) + ((int)local_98 >> 1);
        if (uVar6 >> 0xf == 0) {
          lVar14 = (ulong)(uVar6 >> 5) * 4;
          *(uint *)(param_1 + 0x2018 + lVar14) =
               *(uint *)(param_1 + 0x2018 + lVar14) &
               (1 << (ulong)(local_98 >> 1 & 0x1f) ^ 0xffffffffU);
        }
      }
      iVar9 = iVar15 + -1;
      bVar1 = 0 < iVar15;
      iVar15 = iVar9;
    } while (iVar9 != 0 && bVar1);
  }
  return;
}


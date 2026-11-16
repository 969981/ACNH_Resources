
void FUN_02890cc0(uint *param_1,long param_2)

{
  undefined *puVar1;
  undefined2 *puVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  undefined *puVar6;
  bool bVar7;
  uint uVar8;
  uint uVar9;
  void *pvVar10;
  int iVar11;
  uint uVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  uint uVar16;
  uint *puVar17;
  uint *puVar18;
  long lVar19;
  uint local_824;
  undefined4 local_808;
  undefined4 uStack_804;
  undefined *local_800;
  undefined2 local_7f8;
  undefined2 local_7f6;
  uint local_7f4;
  undefined8 local_7f0;
  uint local_a4;
  uint local_a0;
  uint local_9c;
  int local_98;
  uint local_90;
  uint local_8c;
  undefined8 local_88;
  undefined8 local_80;
  
  puVar6 = PTR_DAT_04bb43c0;
  local_8c = *param_1;
  if (2 < local_8c) {
    local_8c = 0;
  }
  if (1 < (int)local_8c) {
    local_90 = 0x56;
    uVar9 = 0;
    puVar1 = PTR_DAT_04bc0510 + 0x10;
    lVar13 = *(long *)PTR_DAT_04bb43c0;
    do {
      puVar2 = (undefined2 *)((long)param_1 + ((long)((ulong)uVar9 << 0x20) >> 0x1d) + 4);
      uVar8 = FUN_0277d6c4(puVar2);
      lVar19 = *(long *)puVar6;
      lVar14 = lVar19;
      if (lVar19 != 0) {
        lVar13 = *(long *)(lVar13 + 0x57e58);
        uVar8 = (uVar8 & 0xffff) - (uint)*(ushort *)(lVar13 + 0x1f8);
        if ((uVar8 < *(uint *)(lVar13 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar13 + 0x1e0) + (long)(int)uVar8 * 8) != 0)) {
          local_7f8 = *puVar2;
          local_7f0 = 0;
          local_7f6 = *(undefined2 *)((long)param_1 + (long)(int)uVar9 * 8 + 6);
          local_7f4 = param_1[(long)(int)uVar9 * 2 + 2];
          local_800 = puVar1;
          uVar8 = FUN_0277d6c4(&local_7f8);
          lVar14 = *(long *)puVar6;
          if (lVar14 == 0) {
LAB_02890ed4:
            uVar16 = 0;
          }
          else {
            lVar13 = *(long *)(lVar19 + 0x57e58);
            uVar8 = (uVar8 & 0xffff) - (uint)*(ushort *)(lVar13 + 0x1f8);
            if ((*(uint *)(lVar13 + 0x1d8) <= uVar8) ||
               (*(long *)(*(long *)(lVar13 + 0x1e0) + (long)(int)uVar8 * 8) == 0))
            goto LAB_02890ed4;
            lVar13 = *(long *)PTR_DAT_04bc0428;
            uVar8 = FUN_0277d6c4(puVar2);
            uVar8 = (uVar8 & 0xffff) - (uint)*(ushort *)(lVar13 + 0x1f8);
            lVar14 = *(long *)puVar6;
            if ((*(uint *)(lVar13 + 0x1d8) <= uVar8) ||
               (puVar17 = *(uint **)(*(long *)(lVar13 + 0x1e0) + (long)(int)uVar8 * 8),
               puVar17 == (uint *)0x0)) goto LAB_02890ed4;
            uVar8 = *puVar17;
            uVar16 = 0;
            if ((uVar8 != 0) && (puVar17 != (uint *)(ulong)uVar8)) {
              puVar18 = (uint *)((long)puVar17 - (long)(ulong)uVar8);
              uVar16 = 0;
              if (*puVar18 != 0) {
                uVar8 = puVar18[1];
                if ((uVar8 != 0) && ((ulong)(ushort)puVar18[2] != 0)) {
                  lVar13 = 0xc;
                  if (*(char *)((long)puVar18 + 10) != '\0') {
                    lVar13 = 0x1c;
                  }
                  lVar13 = (long)puVar18 + lVar13 + (ulong)(ushort)puVar18[2] * 8;
                  if (lVar13 != 0) {
                    uVar16 = 0;
                    if ((ulong)uVar8 != 0) {
                      uVar16 = (uint)((ulong)((long)puVar17 - lVar13) / (ulong)uVar8);
                    }
                    if (*puVar18 <= uVar16) {
                      uVar16 = 0xffffffff;
                    }
                    if ((uVar16 < *(uint *)PTR_DAT_04bc0068) &&
                       (uVar16 = (uint)*(ushort *)
                                        (*(long *)(PTR_DAT_04bc0068 + 8) + (long)(int)uVar16 * 2),
                       uVar16 < 0x13e)) goto LAB_02890ed8;
                  }
                }
                goto LAB_02890ed4;
              }
            }
          }
LAB_02890ed8:
          local_88 = (undefined **)CONCAT44(local_88._4_4_,uVar16);
          if (uVar16 == local_90) {
            return;
          }
        }
      }
      uVar9 = uVar9 + 1;
      lVar13 = lVar14;
    } while (uVar9 != 0x80);
    if ((*(char *)(param_2 + 0x12) == '\x02') && (*(char *)(param_2 + 0x13) < '\x04')) {
      uVar9 = nn::os::GetSystemTick();
      uVar15 = (ulong)(uint)(**(int **)PTR_DAT_04bb3448 << 1) | 1;
      if (0x1f < (uint)uVar15) {
        uVar15 = 0;
      }
      cVar3 = (&DAT_04058440)[uVar15];
      if (cVar3 == '\0') {
        uVar9 = (uVar9 ^ uVar9 >> 0x1e) * 0x6c078965 + 1;
        uVar8 = (uVar9 ^ uVar9 >> 0x1e) * 0x6c078965 + 2;
        uVar8 = (uVar8 ^ uVar8 >> 0x1e) * 0x6c078965 + 3;
        uVar8 = (uVar8 ^ uVar8 >> 0x1e) * 0x6c078965;
        local_824 = (uVar9 >> 8 ^ uVar8 + 4 >> 0x13 ^ uVar9 ^ uVar8) & 1;
        bVar7 = local_824 == 0;
      }
      else {
        local_824 = 0;
        bVar7 = false;
      }
      local_800 = PTR_DAT_04bbfe60 + 0x10;
      memset(&local_7f8,0,0x754);
      uVar9 = nn::os::GetSystemTick();
      local_a4 = (uVar9 ^ uVar9 >> 0x1e) * 0x6c078965 + 1;
      local_a0 = (local_a4 ^ local_a4 >> 0x1e) * 0x6c078965 + 2;
      local_9c = (local_a0 ^ local_a0 >> 0x1e) * 0x6c078965 + 3;
      local_98 = (local_9c ^ local_9c >> 0x1e) * 0x6c078965 + 4;
      pvVar10 = (void *)FUN_01a451fc(&local_800);
      memset(pvVar10,0,0x754);
      local_808 = 0x22e;
      local_80 = &local_808;
      local_88 = &PTR_FUN_049ff858;
      FUN_008a1ba0(&local_800,&local_88);
      puVar17 = (uint *)nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb39d8);
      uVar16 = puVar17[3];
      uVar9 = *puVar17 ^ *puVar17 << 0xb;
      *puVar17 = puVar17[1];
      puVar17[1] = puVar17[2];
      uVar8 = uVar9 ^ uVar16;
      uVar9 = uVar9 >> 8 ^ uVar16 >> 0x13 ^ uVar8;
      puVar17[2] = uVar16;
      puVar17[3] = uVar9;
      uVar9 = (uVar9 ^ uVar8 >> 0x1e) * 0x6c078965 + 1;
      uVar8 = (uVar9 ^ uVar9 >> 0x1e) * 0x6c078965 + 2;
      local_88 = (undefined **)CONCAT44(uVar8,uVar9);
      uVar16 = (uVar8 ^ uVar8 >> 0x1e) * 0x6c078965 + 3;
      uVar4 = (uVar16 ^ uVar16 >> 0x1e) * 0x6c078965 + 4;
      local_80 = (undefined4 *)CONCAT44(uVar4,uVar16);
      lVar14 = (**(code **)(local_800 + 0x20))(&local_800);
      lVar13 = 0;
      iVar11 = 0;
      do {
        puVar17 = (uint *)(lVar14 + lVar13);
        lVar13 = lVar13 + 4;
        uVar12 = *puVar17 - (*puVar17 >> 1 & 0x55555555);
        uVar12 = (uVar12 >> 2 & 0x33333333) + (uVar12 & 0x33333333);
        uVar12 = uVar12 + (uVar12 >> 4) & 0xf0f0f0f;
        uVar12 = uVar12 + (uVar12 >> 8);
        iVar11 = (uVar12 + (uVar12 >> 0x10) & 0x3f) + iVar11;
      } while (lVar13 != 0x754);
      if (iVar11 == 0) {
        local_808 = *(undefined4 *)PTR_DAT_04bb37e0;
        uStack_804 = *(undefined4 *)(PTR_DAT_04bb37e0 + 4);
      }
      else {
        lVar14 = (**(code **)(local_800 + 0x20))(&local_800);
        lVar13 = 0;
        uVar12 = 0;
        do {
          puVar17 = (uint *)(lVar14 + lVar13);
          lVar13 = lVar13 + 4;
          uVar5 = *puVar17 - (*puVar17 >> 1 & 0x55555555);
          uVar5 = (uVar5 >> 2 & 0x33333333) + (uVar5 & 0x33333333);
          uVar5 = uVar5 + (uVar5 >> 4) & 0xf0f0f0f;
          uVar5 = uVar5 + (uVar5 >> 8);
          uVar12 = (uVar5 + (uVar5 >> 0x10) & 0x3f) + uVar12;
        } while (lVar13 != 0x754);
        uVar9 = uVar9 ^ uVar9 * 0x800;
        local_88 = (undefined **)CONCAT44(uVar16,uVar8);
        uVar9 = uVar9 >> 8 ^ uVar4 >> 0x13 ^ uVar9 ^ uVar4;
        local_80 = (undefined4 *)CONCAT44(uVar9,uVar4);
        FUN_00889f80(&local_808,&local_800,(int)((ulong)uVar9 * (ulong)uVar12 >> 0x20) + 1);
        FUN_01a4c66c(&local_88,&local_808);
      }
      if (cVar3 == '\0') {
        FUN_02891630(param_1,&local_808);
      }
      else {
        FUN_0288f130(param_1,&local_808);
      }
      local_800 = PTR_DAT_04bbfe60 + 0x10;
      memset(&local_7f8,0,0x754);
      uVar9 = nn::os::GetSystemTick();
      local_a4 = (uVar9 ^ uVar9 >> 0x1e) * 0x6c078965 + 1;
      local_a0 = (local_a4 ^ local_a4 >> 0x1e) * 0x6c078965 + 2;
      local_9c = (local_a0 ^ local_a0 >> 0x1e) * 0x6c078965 + 3;
      local_98 = (local_9c ^ local_9c >> 0x1e) * 0x6c078965 + 4;
      pvVar10 = (void *)FUN_01a451fc(&local_800);
      memset(pvVar10,0,0x754);
      local_808 = 0x297;
      local_80 = &local_808;
      local_88 = &PTR_FUN_049ff858;
      FUN_008a1ba0(&local_800,&local_88);
      puVar17 = (uint *)nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb39d8);
      uVar9 = *puVar17 ^ *puVar17 << 0xb;
      uVar16 = puVar17[3];
      *puVar17 = puVar17[1];
      puVar17[1] = puVar17[2];
      uVar8 = uVar9 ^ uVar16;
      uVar9 = uVar9 >> 8 ^ uVar16 >> 0x13 ^ uVar8;
      puVar17[2] = uVar16;
      puVar17[3] = uVar9;
      uVar9 = (uVar9 ^ uVar8 >> 0x1e) * 0x6c078965 + 1;
      uVar8 = (uVar9 ^ uVar9 >> 0x1e) * 0x6c078965 + 2;
      local_88 = (undefined **)CONCAT44(uVar8,uVar9);
      uVar16 = (uVar8 ^ uVar8 >> 0x1e) * 0x6c078965 + 3;
      uVar4 = (uVar16 ^ uVar16 >> 0x1e) * 0x6c078965 + 4;
      local_80 = (undefined4 *)CONCAT44(uVar4,uVar16);
      lVar14 = (**(code **)(local_800 + 0x20))(&local_800);
      lVar13 = 0;
      iVar11 = 0;
      do {
        puVar17 = (uint *)(lVar14 + lVar13);
        lVar13 = lVar13 + 4;
        uVar12 = *puVar17 - (*puVar17 >> 1 & 0x55555555);
        uVar12 = (uVar12 >> 2 & 0x33333333) + (uVar12 & 0x33333333);
        uVar12 = uVar12 + (uVar12 >> 4) & 0xf0f0f0f;
        uVar12 = uVar12 + (uVar12 >> 8);
        iVar11 = (uVar12 + (uVar12 >> 0x10) & 0x3f) + iVar11;
      } while (lVar13 != 0x754);
      if (iVar11 == 0) {
        local_808 = *(undefined4 *)PTR_DAT_04bb37e0;
        uStack_804 = *(undefined4 *)(PTR_DAT_04bb37e0 + 4);
      }
      else {
        lVar14 = (**(code **)(local_800 + 0x20))(&local_800);
        lVar13 = 0;
        uVar12 = 0;
        do {
          puVar17 = (uint *)(lVar14 + lVar13);
          lVar13 = lVar13 + 4;
          uVar5 = *puVar17 - (*puVar17 >> 1 & 0x55555555);
          uVar5 = (uVar5 >> 2 & 0x33333333) + (uVar5 & 0x33333333);
          uVar5 = uVar5 + (uVar5 >> 4) & 0xf0f0f0f;
          uVar5 = uVar5 + (uVar5 >> 8);
          uVar12 = (uVar5 + (uVar5 >> 0x10) & 0x3f) + uVar12;
        } while (lVar13 != 0x754);
        uVar9 = uVar9 ^ uVar9 * 0x800;
        local_88 = (undefined **)CONCAT44(uVar16,uVar8);
        uVar9 = uVar9 >> 8 ^ uVar4 >> 0x13 ^ uVar9 ^ uVar4;
        local_80 = (undefined4 *)CONCAT44(uVar9,uVar4);
        FUN_00889f80(&local_808,&local_800,(int)((ulong)uVar9 * (ulong)uVar12 >> 0x20) + 1);
        FUN_01a4c66c(&local_88,&local_808);
      }
      if (local_824 == 0) {
        FUN_0288f130(param_1,&local_808);
      }
      else {
        FUN_02891630(param_1,&local_808);
      }
      local_800 = PTR_DAT_04bbfe60 + 0x10;
      memset(&local_7f8,0,0x754);
      uVar9 = nn::os::GetSystemTick();
      local_a4 = (uVar9 ^ uVar9 >> 0x1e) * 0x6c078965 + 1;
      local_a0 = (local_a4 ^ local_a4 >> 0x1e) * 0x6c078965 + 2;
      local_9c = (local_a0 ^ local_a0 >> 0x1e) * 0x6c078965 + 3;
      local_98 = (local_9c ^ local_9c >> 0x1e) * 0x6c078965 + 4;
      pvVar10 = (void *)FUN_01a451fc(&local_800);
      memset(pvVar10,0,0x754);
      local_808 = 0x4e1;
      local_80 = &local_808;
      local_88 = &PTR_FUN_049ff858;
      FUN_008a1ba0(&local_800,&local_88);
      puVar17 = (uint *)nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb39d8);
      uVar9 = *puVar17 ^ *puVar17 << 0xb;
      uVar16 = puVar17[3];
      *puVar17 = puVar17[1];
      puVar17[1] = puVar17[2];
      uVar8 = uVar9 ^ uVar16;
      uVar9 = uVar9 >> 8 ^ uVar16 >> 0x13 ^ uVar8;
      puVar17[2] = uVar16;
      puVar17[3] = uVar9;
      uVar9 = (uVar9 ^ uVar8 >> 0x1e) * 0x6c078965 + 1;
      uVar8 = (uVar9 ^ uVar9 >> 0x1e) * 0x6c078965 + 2;
      local_88 = (undefined **)CONCAT44(uVar8,uVar9);
      uVar16 = (uVar8 ^ uVar8 >> 0x1e) * 0x6c078965 + 3;
      uVar4 = (uVar16 ^ uVar16 >> 0x1e) * 0x6c078965 + 4;
      local_80 = (undefined4 *)CONCAT44(uVar4,uVar16);
      lVar14 = (**(code **)(local_800 + 0x20))(&local_800);
      lVar13 = 0;
      iVar11 = 0;
      do {
        puVar17 = (uint *)(lVar14 + lVar13);
        lVar13 = lVar13 + 4;
        uVar12 = *puVar17 - (*puVar17 >> 1 & 0x55555555);
        uVar12 = (uVar12 >> 2 & 0x33333333) + (uVar12 & 0x33333333);
        uVar12 = uVar12 + (uVar12 >> 4) & 0xf0f0f0f;
        uVar12 = uVar12 + (uVar12 >> 8);
        iVar11 = (uVar12 + (uVar12 >> 0x10) & 0x3f) + iVar11;
      } while (lVar13 != 0x754);
      if (iVar11 == 0) {
        local_808 = *(undefined4 *)PTR_DAT_04bb37e0;
        uStack_804 = *(undefined4 *)(PTR_DAT_04bb37e0 + 4);
      }
      else {
        lVar14 = (**(code **)(local_800 + 0x20))(&local_800);
        lVar13 = 0;
        uVar12 = 0;
        do {
          puVar17 = (uint *)(lVar14 + lVar13);
          lVar13 = lVar13 + 4;
          uVar5 = *puVar17 - (*puVar17 >> 1 & 0x55555555);
          uVar5 = (uVar5 >> 2 & 0x33333333) + (uVar5 & 0x33333333);
          uVar5 = uVar5 + (uVar5 >> 4) & 0xf0f0f0f;
          uVar5 = uVar5 + (uVar5 >> 8);
          uVar12 = (uVar5 + (uVar5 >> 0x10) & 0x3f) + uVar12;
        } while (lVar13 != 0x754);
        uVar9 = uVar9 ^ uVar9 * 0x800;
        local_88 = (undefined **)CONCAT44(uVar16,uVar8);
        uVar9 = uVar9 >> 8 ^ uVar4 >> 0x13 ^ uVar9 ^ uVar4;
        local_80 = (undefined4 *)CONCAT44(uVar9,uVar4);
        FUN_00889f80(&local_808,&local_800,(int)((ulong)uVar9 * (ulong)uVar12 >> 0x20) + 1);
        FUN_01a4c66c(&local_88,&local_808);
      }
      if (bVar7) {
        FUN_02891630(param_1,&local_808);
      }
      else {
        FUN_0288f130(param_1,&local_808);
      }
    }
  }
  return;
}


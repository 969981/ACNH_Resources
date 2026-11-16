
void FUN_02891b20(uint *param_1,long param_2)

{
  int iVar1;
  undefined *puVar2;
  undefined2 *puVar3;
  uint uVar4;
  undefined *puVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  void *__s;
  ulong uVar10;
  long lVar11;
  long lVar12;
  uint *puVar13;
  uint *puVar14;
  int iVar15;
  long lVar16;
  undefined *local_808;
  undefined2 local_800;
  undefined2 local_7fe;
  uint local_7fc;
  undefined8 local_7f8;
  uint local_ac;
  uint local_a8;
  uint local_a4;
  int local_a0;
  uint local_98;
  uint local_94;
  undefined **local_90;
  uint *puStack_88;
  undefined1 auStack_70 [16];
  
  puVar5 = PTR_DAT_04bb43c0;
  local_94 = *param_1;
  if (2 < local_94) {
    local_94 = 0;
  }
  if ((1 < (int)local_94 && *(char *)(param_2 + 0x12) == '\x03') &&
     (*(byte *)(param_2 + 0x13) - 10 < 8)) {
    local_98 = 0x57;
    uVar7 = 0;
    puVar2 = PTR_DAT_04bc0510 + 0x10;
    lVar11 = *(long *)PTR_DAT_04bb43c0;
    do {
      puVar3 = (undefined2 *)((long)param_1 + ((long)((ulong)uVar7 << 0x20) >> 0x1d) + 4);
      uVar6 = FUN_0277d6c4(puVar3);
      lVar16 = *(long *)puVar5;
      lVar12 = lVar16;
      if (lVar16 != 0) {
        lVar11 = *(long *)(lVar11 + 0x57e58);
        uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
        if ((uVar6 < *(uint *)(lVar11 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar6 * 8) != 0)) {
          local_800 = *puVar3;
          local_7f8 = 0;
          local_7fe = *(undefined2 *)((long)param_1 + (long)(int)uVar7 * 8 + 6);
          local_7fc = param_1[(long)(int)uVar7 * 2 + 2];
          local_808 = puVar2;
          uVar6 = FUN_0277d6c4(&local_800);
          lVar12 = *(long *)puVar5;
          if (lVar12 == 0) {
LAB_02891d28:
            uVar8 = 0;
          }
          else {
            lVar11 = *(long *)(lVar16 + 0x57e58);
            uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
            if ((*(uint *)(lVar11 + 0x1d8) <= uVar6) ||
               (*(long *)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar6 * 8) == 0))
            goto LAB_02891d28;
            lVar11 = *(long *)PTR_DAT_04bc0428;
            uVar6 = FUN_0277d6c4(puVar3);
            uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
            lVar12 = *(long *)puVar5;
            if ((*(uint *)(lVar11 + 0x1d8) <= uVar6) ||
               (puVar13 = *(uint **)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar6 * 8),
               puVar13 == (uint *)0x0)) goto LAB_02891d28;
            uVar6 = *puVar13;
            uVar8 = 0;
            if ((uVar6 != 0) && (puVar13 != (uint *)(ulong)uVar6)) {
              puVar14 = (uint *)((long)puVar13 - (long)(ulong)uVar6);
              uVar8 = 0;
              if (*puVar14 != 0) {
                uVar6 = puVar14[1];
                if ((uVar6 != 0) && ((ulong)(ushort)puVar14[2] != 0)) {
                  lVar11 = 0xc;
                  if (*(char *)((long)puVar14 + 10) != '\0') {
                    lVar11 = 0x1c;
                  }
                  lVar11 = (long)puVar14 + lVar11 + (ulong)(ushort)puVar14[2] * 8;
                  if (lVar11 != 0) {
                    uVar8 = 0;
                    if ((ulong)uVar6 != 0) {
                      uVar8 = (uint)((ulong)((long)puVar13 - lVar11) / (ulong)uVar6);
                    }
                    if (*puVar14 <= uVar8) {
                      uVar8 = 0xffffffff;
                    }
                    if ((uVar8 < *(uint *)PTR_DAT_04bc0068) &&
                       (uVar8 = (uint)*(ushort *)
                                       (*(long *)(PTR_DAT_04bc0068 + 8) + (long)(int)uVar8 * 2),
                       uVar8 < 0x13e)) goto LAB_02891d2c;
                  }
                }
                goto LAB_02891d28;
              }
            }
          }
LAB_02891d2c:
          local_90 = (undefined **)CONCAT44(local_90._4_4_,uVar8);
          if (uVar8 == local_98) {
            return;
          }
        }
      }
      uVar7 = uVar7 + 1;
      lVar11 = lVar12;
    } while (uVar7 != 0x80);
    local_808 = PTR_DAT_04bbfe60 + 0x10;
    memset(&local_800,0,0x754);
    uVar7 = nn::os::GetSystemTick();
    local_ac = (uVar7 ^ uVar7 >> 0x1e) * 0x6c078965 + 1;
    local_a8 = (local_ac ^ local_ac >> 0x1e) * 0x6c078965 + 2;
    local_a4 = (local_a8 ^ local_a8 >> 0x1e) * 0x6c078965 + 3;
    local_a0 = (local_a4 ^ local_a4 >> 0x1e) * 0x6c078965 + 4;
    __s = (void *)FUN_01a451fc(&local_808);
    memset(__s,0,0x754);
    puStack_88 = &local_98;
    local_90 = &PTR_FUN_049ff4e8;
    FUN_008a1ba0(&local_808,&local_90);
    uVar7 = 0;
    local_90 = &PTR_FUN_049ff808;
    do {
      (**(code **)(local_808 + 0x10))(auStack_70,&local_808,uVar7);
      lVar11 = (**(code **)(local_808 + 0x20))(&local_808);
      uVar6 = 1 << (ulong)(uVar7 & 0x1f);
      if ((*(uint *)(lVar11 + (ulong)(uVar7 >> 5) * 4) & uVar6) != 0) {
        lVar11 = *(long *)puVar5;
        uVar8 = FUN_0277d6c4(auStack_70);
        if (*(long *)puVar5 != 0) {
          lVar11 = *(long *)(lVar11 + 0x57e58);
          uVar8 = (uVar8 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
          if (((uVar8 < *(uint *)(lVar11 + 0x1d8)) &&
              (*(long *)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar8 * 8) != 0)) &&
             (uVar10 = (*(code *)*local_90)(&local_90,auStack_70), (uVar10 & 1) == 0))
          goto LAB_02891e40;
        }
        lVar11 = (**(code **)(local_808 + 0x18))(&local_808);
        lVar12 = (ulong)(uVar7 >> 5) * 4;
        *(uint *)(lVar11 + lVar12) = *(uint *)(lVar11 + lVar12) & (uVar6 ^ 0xffffffff);
      }
LAB_02891e40:
      uVar7 = uVar7 + 1;
    } while (uVar7 != 15000);
    lVar12 = (**(code **)(local_808 + 0x20))(&local_808);
    lVar11 = 0;
    uVar7 = 0;
    do {
      uVar8 = uVar7;
      puVar13 = (uint *)(lVar12 + lVar11);
      lVar11 = lVar11 + 4;
      uVar7 = *puVar13 - (*puVar13 >> 1 & 0x55555555);
      uVar7 = (uVar7 >> 2 & 0x33333333) + (uVar7 & 0x33333333);
      uVar6 = uVar7 + (uVar7 >> 4) & 0xf0f0f0f;
      uVar6 = uVar6 + (uVar6 >> 8);
      uVar6 = uVar6 + (uVar6 >> 0x10);
      uVar7 = (uVar6 & 0x3f) + uVar8;
    } while (lVar11 != 0x754);
    uVar9 = nn::os::GetSystemTick();
    if (uVar7 != 0) {
      uVar4 = (uVar9 ^ uVar9 >> 0x1e) * 0x6c078965 + 1;
      uVar9 = uVar4 ^ uVar4 * 0x800;
      uVar4 = (uVar4 ^ uVar4 >> 0x1e) * 0x6c078965 + 2;
      uVar4 = (uVar4 ^ uVar4 >> 0x1e) * 0x6c078965 + 3;
      uVar4 = (uVar4 ^ uVar4 >> 0x1e) * 0x6c078965 + 4;
      iVar15 = 0;
      do {
        iVar1 = iVar15 + 1;
        FUN_00889f80(&local_90,&local_808,iVar1);
        if ((int)((ulong)(uVar9 >> 8 ^ uVar4 >> 0x13 ^ uVar9 ^ uVar4) * (ulong)uVar7 >> 0x20) ==
            iVar15) {
          FUN_02891630();
        }
        else {
          FUN_0288f130(param_1,&local_90);
        }
        iVar15 = iVar1;
      } while (uVar8 + (uVar6 & 0x3f) != iVar1);
    }
  }
  return;
}


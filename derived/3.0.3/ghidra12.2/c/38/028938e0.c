
void FUN_028938e0(uint *param_1,long param_2)

{
  undefined *puVar1;
  undefined2 *puVar2;
  uint uVar3;
  uint uVar4;
  undefined *puVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  void *__s;
  ulong uVar9;
  long lVar10;
  long lVar11;
  uint *puVar12;
  uint *puVar13;
  int iVar14;
  long lVar15;
  undefined4 local_8f8;
  undefined4 uStack_8f4;
  uint local_8f0;
  uint uStack_8ec;
  uint local_8e8;
  int iStack_8e4;
  undefined8 local_8e0;
  uint *puStack_8d8;
  undefined *local_7e0;
  undefined2 local_7d8;
  undefined2 local_7d6;
  uint local_7d4;
  undefined8 local_7d0;
  uint local_84;
  uint local_80;
  uint local_7c;
  int local_78;
  uint local_70;
  uint local_6c;
  
  puVar5 = PTR_DAT_04bb43c0;
  local_6c = *param_1;
  if (2 < local_6c) {
    local_6c = 0;
  }
  if (1 < (int)local_6c && *(char *)(param_2 + 0x12) == '\x06') {
    local_70 = 0x59;
    uVar7 = 0;
    puVar1 = PTR_DAT_04bc0510 + 0x10;
    lVar10 = *(long *)PTR_DAT_04bb43c0;
    do {
      puVar2 = (undefined2 *)((long)param_1 + ((long)((ulong)uVar7 << 0x20) >> 0x1d) + 4);
      uVar6 = FUN_0277d6c4(puVar2);
      lVar15 = *(long *)puVar5;
      lVar11 = lVar15;
      if (lVar15 != 0) {
        lVar10 = *(long *)(lVar10 + 0x57e58);
        uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
        if ((uVar6 < *(uint *)(lVar10 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar6 * 8) != 0)) {
          local_7d8 = *puVar2;
          local_7d0 = 0;
          local_7d6 = *(undefined2 *)((long)param_1 + (long)(int)uVar7 * 8 + 6);
          local_7d4 = param_1[(long)(int)uVar7 * 2 + 2];
          local_7e0 = puVar1;
          uVar6 = FUN_0277d6c4(&local_7d8);
          lVar11 = *(long *)puVar5;
          if (lVar11 == 0) {
LAB_02893ad8:
            uVar8 = 0;
          }
          else {
            lVar10 = *(long *)(lVar15 + 0x57e58);
            uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
            if ((*(uint *)(lVar10 + 0x1d8) <= uVar6) ||
               (*(long *)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar6 * 8) == 0))
            goto LAB_02893ad8;
            lVar10 = *(long *)PTR_DAT_04bc0428;
            uVar6 = FUN_0277d6c4(puVar2);
            uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
            lVar11 = *(long *)puVar5;
            if ((*(uint *)(lVar10 + 0x1d8) <= uVar6) ||
               (puVar12 = *(uint **)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar6 * 8),
               puVar12 == (uint *)0x0)) goto LAB_02893ad8;
            uVar6 = *puVar12;
            uVar8 = 0;
            if ((uVar6 != 0) && (puVar12 != (uint *)(ulong)uVar6)) {
              puVar13 = (uint *)((long)puVar12 - (long)(ulong)uVar6);
              uVar8 = 0;
              if (*puVar13 != 0) {
                uVar6 = puVar13[1];
                if ((uVar6 != 0) && ((ulong)(ushort)puVar13[2] != 0)) {
                  lVar10 = 0xc;
                  if (*(char *)((long)puVar13 + 10) != '\0') {
                    lVar10 = 0x1c;
                  }
                  lVar10 = (long)puVar13 + lVar10 + (ulong)(ushort)puVar13[2] * 8;
                  if (lVar10 != 0) {
                    uVar8 = 0;
                    if ((ulong)uVar6 != 0) {
                      uVar8 = (uint)((ulong)((long)puVar12 - lVar10) / (ulong)uVar6);
                    }
                    if (*puVar13 <= uVar8) {
                      uVar8 = 0xffffffff;
                    }
                    if ((uVar8 < *(uint *)PTR_DAT_04bc0068) &&
                       (uVar8 = (uint)*(ushort *)
                                       (*(long *)(PTR_DAT_04bc0068 + 8) + (long)(int)uVar8 * 2),
                       uVar8 < 0x13e)) goto LAB_02893adc;
                  }
                }
                goto LAB_02893ad8;
              }
            }
          }
LAB_02893adc:
          local_8e0 = (undefined **)CONCAT44(local_8e0._4_4_,uVar8);
          if (uVar8 == local_70) {
            return;
          }
        }
      }
      uVar7 = uVar7 + 1;
      lVar10 = lVar11;
    } while (uVar7 != 0x80);
    local_7e0 = PTR_DAT_04bbfe60 + 0x10;
    memset(&local_7d8,0,0x754);
    uVar7 = nn::os::GetSystemTick();
    local_84 = (uVar7 ^ uVar7 >> 0x1e) * 0x6c078965 + 1;
    local_80 = (local_84 ^ local_84 >> 0x1e) * 0x6c078965 + 2;
    local_7c = (local_80 ^ local_80 >> 0x1e) * 0x6c078965 + 3;
    local_78 = (local_7c ^ local_7c >> 0x1e) * 0x6c078965 + 4;
    __s = (void *)FUN_01a451fc(&local_7e0);
    memset(__s,0,0x754);
    puStack_8d8 = &local_70;
    local_8e0 = &PTR_FUN_049ff4e8;
    FUN_008a1ba0(&local_7e0,&local_8e0);
    uVar7 = 0;
    local_8e0 = &PTR_FUN_049ff808;
    do {
      (**(code **)(local_7e0 + 0x10))(&local_8f0,&local_7e0,uVar7);
      lVar10 = (**(code **)(local_7e0 + 0x20))(&local_7e0);
      uVar6 = 1 << (ulong)(uVar7 & 0x1f);
      if ((*(uint *)(lVar10 + (ulong)(uVar7 >> 5) * 4) & uVar6) != 0) {
        lVar10 = *(long *)puVar5;
        uVar8 = FUN_0277d6c4(&local_8f0);
        if (*(long *)puVar5 != 0) {
          lVar10 = *(long *)(lVar10 + 0x57e58);
          uVar8 = (uVar8 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
          if (((uVar8 < *(uint *)(lVar10 + 0x1d8)) &&
              (*(long *)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar8 * 8) != 0)) &&
             (uVar9 = (*(code *)*local_8e0)(&local_8e0,&local_8f0), (uVar9 & 1) == 0))
          goto LAB_02893bf0;
        }
        lVar10 = (**(code **)(local_7e0 + 0x18))(&local_7e0);
        lVar11 = (ulong)(uVar7 >> 5) * 4;
        *(uint *)(lVar10 + lVar11) = *(uint *)(lVar10 + lVar11) & (uVar6 ^ 0xffffffff);
      }
LAB_02893bf0:
      uVar7 = uVar7 + 1;
    } while (uVar7 != 15000);
    FUN_02690004(&local_8e0);
    puVar12 = (uint *)nn::os::GetTlsValue(DAT_05ae7880);
    uVar7 = *puVar12 ^ *puVar12 << 0xb;
    uVar8 = puVar12[3];
    *puVar12 = puVar12[1];
    puVar12[1] = puVar12[2];
    uVar6 = uVar7 ^ uVar8;
    uVar7 = uVar7 >> 8 ^ uVar8 >> 0x13 ^ uVar6;
    puVar12[2] = uVar8;
    puVar12[3] = uVar7;
    local_8f0 = (uVar7 ^ uVar6 >> 0x1e) * 0x6c078965 + 1;
    uStack_8ec = (local_8f0 ^ local_8f0 >> 0x1e) * 0x6c078965 + 2;
    local_8e8 = (uStack_8ec ^ uStack_8ec >> 0x1e) * 0x6c078965 + 3;
    iStack_8e4 = (local_8e8 ^ local_8e8 >> 0x1e) * 0x6c078965 + 4;
    lVar11 = (**(code **)(local_7e0 + 0x20))(&local_7e0);
    lVar10 = 0;
    uVar7 = 0;
    do {
      puVar12 = (uint *)(lVar11 + lVar10);
      lVar10 = lVar10 + 4;
      uVar6 = *puVar12 - (*puVar12 >> 1 & 0x55555555);
      uVar6 = (uVar6 >> 2 & 0x33333333) + (uVar6 & 0x33333333);
      uVar6 = uVar6 + (uVar6 >> 4) & 0xf0f0f0f;
      uVar6 = uVar6 + (uVar6 >> 8);
      uVar7 = (uVar6 + (uVar6 >> 0x10) & 0x3f) + uVar7;
    } while (lVar10 != 0x754);
    lVar11 = (**(code **)(local_7e0 + 0x20))(&local_7e0);
    lVar10 = 0;
    iVar14 = 0;
    do {
      puVar12 = (uint *)(lVar11 + lVar10);
      lVar10 = lVar10 + 4;
      uVar6 = *puVar12 - (*puVar12 >> 1 & 0x55555555);
      uVar6 = (uVar6 >> 2 & 0x33333333) + (uVar6 & 0x33333333);
      uVar6 = uVar6 + (uVar6 >> 4) & 0xf0f0f0f;
      uVar6 = uVar6 + (uVar6 >> 8);
      iVar14 = (uVar6 + (uVar6 >> 0x10) & 0x3f) + iVar14;
    } while (lVar10 != 0x754);
    FUN_01a4cc70(&local_8f0,&local_8e0,&local_7e0,iVar14,0,0,PTR_FUN_04bb67e0,0);
    uVar6 = nn::os::GetSystemTick();
    if (uVar7 != 0) {
      uVar8 = 0;
      uVar6 = (uVar6 ^ uVar6 >> 0x1e) * 0x6c078965 + 1;
      uVar3 = uVar6 ^ uVar6 * 0x800;
      uVar6 = (uVar6 ^ uVar6 >> 0x1e) * 0x6c078965 + 2;
      uVar6 = (uVar6 ^ uVar6 >> 0x1e) * 0x6c078965 + 3;
      uVar4 = (uVar6 ^ uVar6 >> 0x1e) * 0x6c078965 + 4;
      uVar6 = uVar7 - 1;
      uVar9 = (ulong)(uVar3 >> 8 ^ uVar4 >> 0x13 ^ uVar3 ^ uVar4) * (ulong)uVar7 >> 0x20;
      if (0x1e < uVar6) {
        uVar6 = 0x1f;
      }
      iVar14 = uVar6 + 1;
      do {
        lVar10 = (long)((ulong)uVar8 << 0x20) >> 0x1d;
        local_8f8 = *(undefined4 *)((long)&local_8e0 + lVar10);
        uStack_8f4 = *(undefined4 *)((long)&local_8e0 + lVar10 + 4);
        if ((int)uVar9 == 0) {
          FUN_02891630();
        }
        else {
          FUN_0288f130(param_1,&local_8f8);
        }
        uVar8 = uVar8 + 1;
        iVar14 = iVar14 + -1;
        uVar9 = (ulong)((int)uVar9 - 1);
      } while (iVar14 != 0);
    }
  }
  return;
}



void FUN_013fe6d0(undefined8 *param_1,long param_2,int param_3,uint param_4)

{
  uint uVar1;
  ushort uVar2;
  ushort uVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  uint uVar7;
  void *pvVar8;
  long lVar9;
  uint *puVar10;
  undefined8 uVar11;
  uint *puVar12;
  long *plVar13;
  uint *puVar14;
  long lVar15;
  undefined8 *puVar16;
  uint local_1014 [3];
  undefined8 local_1008;
  undefined8 *local_1000;
  long *local_ff8;
  long *local_ff0;
  long local_fe8 [4];
  long local_fc8 [2];
  undefined1 auStack_fb8 [1296];
  undefined8 local_aa8;
  undefined8 local_a98 [85];
  undefined *local_7f0;
  undefined1 auStack_7e8 [1876];
  uint local_94;
  uint local_90;
  uint local_8c;
  int local_88;
  undefined4 local_80;
  undefined2 uStack_7c;
  undefined1 uStack_7a;
  undefined1 uStack_79;
  undefined8 local_78;
  int local_6c;
  
  local_78 = *(undefined8 *)(DAT_04da6480 + 0x4060);
  uStack_79 = (undefined1)((ulong)local_78 >> 0x38);
  _local_80 = CONCAT16(0x3b,CONCAT24(0x3b17,(int)local_78));
  local_7f0 = PTR_DAT_04bbfe60 + 0x10;
  local_6c = param_3;
  memset(auStack_7e8,0,0x754);
  uVar7 = nn::os::GetSystemTick();
  local_94 = (uVar7 ^ uVar7 >> 0x1e) * 0x6c078965 + 1;
  local_90 = (local_94 ^ local_94 >> 0x1e) * 0x6c078965 + 2;
  local_8c = (local_90 ^ local_90 >> 0x1e) * 0x6c078965 + 3;
  local_88 = (local_8c ^ local_8c >> 0x1e) * 0x6c078965 + 4;
  pvVar8 = (void *)FUN_01a451fc(&local_7f0);
  memset(pvVar8,0,0x754);
  pvVar8 = (void *)(**(code **)(local_7f0 + 0x18))(&local_7f0);
  memset(pvVar8,0,0x754);
  local_ff8 = local_fe8;
  local_1008 = 0;
  local_1000 = (undefined8 *)0x0;
  lVar15 = 0;
  do {
    lVar9 = lVar15 + 0x30;
    plVar13 = (long *)((long)local_fe8 + lVar15 + 0x10);
    *plVar13 = (long)local_fc8 + lVar15;
    *(long **)((long)local_fe8 + lVar15) = plVar13;
    *(undefined1 **)((long)local_fc8 + lVar15) = auStack_fb8 + lVar15;
    lVar15 = lVar9;
  } while (lVar9 != 0x540);
  local_aa8 = 0;
  if (local_a98 != (undefined8 *)0x0) {
    local_1008 = 0x5500000000;
    local_1000 = local_a98;
  }
  local_1014[2] = *(uint *)(*(long *)PTR_DAT_04bb30a0 + 0x65204);
  if (1 < local_1014[2]) {
    local_1014[2] = 0;
  }
  local_ff0 = local_ff8;
  FUN_013fbd10(param_2,&local_1008,&local_78,&local_80,local_1014 + 2,0);
  if ((int)local_1008 != 0) {
    lVar15 = (long)(int)local_1008 << 3;
    puVar16 = local_1000;
    do {
      puVar10 = (uint *)*puVar16;
      if ((char)puVar10[3] != '\0') {
        uVar2 = *(ushort *)(param_2 + 0x348);
        uVar4 = (uint)(ushort)*puVar10 - (uint)uVar2;
        uVar7 = *(uint *)(param_2 + 0x328);
        if (uVar4 < uVar7) {
          puVar12 = *(uint **)(*(long *)(param_2 + 0x330) + (long)(int)uVar4 * 8);
          local_1014[0] = 0;
          if (puVar12 != (uint *)0x0) {
            uVar4 = *puVar12;
            if (uVar4 != 0 && puVar12 != (uint *)(ulong)uVar4) {
              puVar14 = (uint *)((long)puVar12 - (long)(ulong)uVar4);
              if (((*puVar14 != 0) && (uVar4 = puVar14[1], uVar4 != 0)) &&
                 ((ulong)(ushort)puVar14[2] != 0)) {
                lVar9 = 0xc;
                if (*(char *)((long)puVar14 + 10) != '\0') {
                  lVar9 = 0x1c;
                }
                lVar9 = (long)puVar14 + lVar9 + (ulong)(ushort)puVar14[2] * 8;
                if (lVar9 != 0) {
                  uVar1 = 0;
                  if ((ulong)uVar4 != 0) {
                    uVar1 = (uint)((ulong)((long)puVar12 - lVar9) / (ulong)uVar4);
                  }
                  if (*puVar14 <= uVar1) {
                    uVar1 = 0xffffffff;
                  }
                  if ((uVar1 < DAT_051b69d0) &&
                     (uVar3 = *(ushort *)(DAT_051b69d8 + (long)(int)uVar1 * 2),
                     local_1014[0] = (uint)uVar3, uVar3 < 7)) goto LAB_013fe938;
                }
              }
            }
            goto LAB_013fe934;
          }
        }
        else {
LAB_013fe934:
          local_1014[0] = 0;
        }
LAB_013fe938:
        if (local_1014[0] - 3 < 2) {
          if (local_6c - 1U < 2) {
            uVar4 = (uint)(ushort)*puVar10 - (uint)uVar2;
            if (uVar4 < uVar7) {
              puVar12 = *(uint **)(*(long *)(param_2 + 0x330) + (long)(int)uVar4 * 8);
              local_1014[0] = 0;
              if (puVar12 != (uint *)0x0) {
                uVar7 = *puVar12;
                if (uVar7 != 0 && puVar12 != (uint *)(ulong)uVar7) {
                  puVar14 = (uint *)((long)puVar12 - (long)(ulong)uVar7);
                  if (((*puVar14 != 0) && (uVar7 = puVar14[1], uVar7 != 0)) &&
                     ((ulong)(ushort)puVar14[2] != 0)) {
                    lVar9 = 0xc;
                    if (*(char *)((long)puVar14 + 10) != '\0') {
                      lVar9 = 0x1c;
                    }
                    lVar9 = (long)puVar14 + lVar9 + (ulong)(ushort)puVar14[2] * 8;
                    if (lVar9 != 0) {
                      uVar4 = 0;
                      if ((ulong)uVar7 != 0) {
                        uVar4 = (uint)((ulong)((long)puVar12 - lVar9) / (ulong)uVar7);
                      }
                      if (*puVar14 <= uVar4) {
                        uVar4 = 0xffffffff;
                      }
                      if ((uVar4 < *(uint *)PTR_DAT_04bbcad8) &&
                         (uVar2 = *(ushort *)
                                   (*(long *)(PTR_DAT_04bbcad8 + 8) + (long)(int)uVar4 * 2),
                         local_1014[0] = (uint)uVar2, uVar2 < 9)) goto LAB_013fea00;
                    }
                  }
                }
                goto LAB_013fe9fc;
              }
            }
            else {
LAB_013fe9fc:
              local_1014[0] = 0;
            }
LAB_013fea00:
            if (local_1014[0] == 1) {
LAB_013fead0:
              local_1014[1] = 0;
              local_1014[0] = *puVar10 & 0xffff;
              FUN_0277d4ac(local_1014);
              FUN_0277dedc(local_1014);
              lVar9 = (**(code **)(local_7f0 + 0x18))(&local_7f0);
              uVar7 = FUN_0277d6c4(local_1014);
              if ((uVar7 >> 3 & 0x1fff) < 0x753) {
                lVar6 = (ulong)((uVar7 & 0xffff) >> 5) * 4;
                *(uint *)(lVar9 + lVar6) = *(uint *)(lVar9 + lVar6) | 1 << (ulong)(uVar7 & 0x1f);
              }
            }
          }
          else if (local_6c == 0) {
            uVar4 = (uint)(ushort)*puVar10 - (uint)uVar2;
            if ((uVar4 < uVar7) &&
               (puVar12 = *(uint **)(*(long *)(param_2 + 0x330) + (long)(int)uVar4 * 8),
               puVar12 != (uint *)0x0)) {
              uVar7 = *puVar12;
              local_1014[0] = 0;
              if ((uVar7 != 0) && (puVar12 != (uint *)(ulong)uVar7)) {
                puVar14 = (uint *)((long)puVar12 - (long)(ulong)uVar7);
                local_1014[0] = 0;
                if (*puVar14 != 0) {
                  uVar7 = puVar14[1];
                  if ((uVar7 != 0) && ((ulong)(ushort)puVar14[2] != 0)) {
                    lVar9 = 0xc;
                    if (*(char *)((long)puVar14 + 10) != '\0') {
                      lVar9 = 0x1c;
                    }
                    lVar9 = (long)puVar14 + lVar9 + (ulong)(ushort)puVar14[2] * 8;
                    if (lVar9 != 0) {
                      uVar4 = 0;
                      if ((ulong)uVar7 != 0) {
                        uVar4 = (uint)((ulong)((long)puVar12 - lVar9) / (ulong)uVar7);
                      }
                      if (*puVar14 <= uVar4) {
                        uVar4 = 0xffffffff;
                      }
                      if ((uVar4 < *(uint *)PTR_DAT_04bbcad8) &&
                         (local_1014[0] =
                               (uint)*(ushort *)
                                      (*(long *)(PTR_DAT_04bbcad8 + 8) + (long)(int)uVar4 * 2),
                         local_1014[0] < 9)) goto LAB_013feac0;
                    }
                  }
                  goto LAB_013feabc;
                }
              }
            }
            else {
LAB_013feabc:
              local_1014[0] = 0;
            }
LAB_013feac0:
            if (local_1014[0] == 2) goto LAB_013fead0;
          }
        }
      }
      puVar16 = puVar16 + 1;
      lVar15 = lVar15 + -8;
    } while (lVar15 != 0);
  }
  uVar4 = (param_4 ^ param_4 >> 0x1e) * 0x6c078965 + 1;
  uVar7 = (uVar4 ^ uVar4 >> 0x1e) * 0x6c078965 + 2;
  uVar1 = (uVar7 ^ uVar7 >> 0x1e) * 0x6c078965 + 3;
  lVar9 = (**(code **)(local_7f0 + 0x20))(&local_7f0);
  lVar15 = 0;
  uVar7 = 0;
  do {
    puVar10 = (uint *)(lVar9 + lVar15);
    lVar15 = lVar15 + 4;
    uVar5 = *puVar10 - (*puVar10 >> 1 & 0x55555555);
    uVar5 = (uVar5 >> 2 & 0x33333333) + (uVar5 & 0x33333333);
    uVar5 = uVar5 + (uVar5 >> 4) & 0xf0f0f0f;
    uVar5 = uVar5 + (uVar5 >> 8);
    uVar7 = (uVar5 + (uVar5 >> 0x10) & 0x3f) + uVar7;
  } while (lVar15 != 0x754);
  if (uVar7 == 0) {
    if (local_6c - 1U < 2) {
      uVar11 = 0x8d8;
    }
    else {
      if (local_6c != 0) goto LAB_013febc4;
      uVar11 = 0x8de;
    }
    *param_1 = uVar11;
    FUN_0277d4ac(param_1);
  }
  else {
LAB_013febc4:
    uVar4 = uVar4 ^ uVar4 * 0x800;
    uVar1 = (uVar1 ^ uVar1 >> 0x1e) * 0x6c078965 + 4;
    FUN_00889f80(param_1,&local_7f0,
                 (int)((ulong)uVar7 * (ulong)(uVar4 >> 8 ^ uVar1 >> 0x13 ^ uVar4 ^ uVar1) >> 0x20) +
                 1);
  }
  return;
}


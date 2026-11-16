
void FUN_02816c30(undefined2 *param_1,undefined4 *param_2,uint param_3,uint param_4)

{
  uint uVar1;
  undefined4 uVar2;
  undefined2 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  uint uVar6;
  ulong uVar7;
  undefined1 uVar8;
  undefined2 *puVar9;
  long lVar10;
  long lVar11;
  undefined *local_90;
  undefined4 local_88;
  undefined4 uStack_84;
  long local_80;
  undefined4 local_74;
  undefined *local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  long local_60;
  byte local_58 [4];
  undefined4 local_54;
  
  puVar4 = PTR_DAT_04bb43c0;
  lVar10 = *(long *)PTR_DAT_04bb43c0;
  uVar6 = FUN_0277d6c4(param_2);
  puVar5 = PTR_DAT_04bc0510;
  puVar9 = (undefined2 *)PTR_DAT_04bb37e0;
  lVar11 = *(long *)puVar4;
  if (lVar11 != 0) {
    lVar10 = *(long *)(lVar10 + 0x57e58);
    uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
    if ((uVar6 < *(uint *)(lVar10 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar6 * 8) != 0)) {
      local_80 = 0;
      local_88 = *param_2;
      uStack_84 = param_2[1];
      local_90 = PTR_DAT_04bc0510 + 0x10;
      uVar6 = FUN_0277d6c4(&local_88);
      if (*(long *)puVar4 != 0) {
        lVar10 = *(long *)(lVar11 + 0x57e58);
        uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
        if ((uVar6 < *(uint *)(lVar10 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar6 * 8) != 0)) {
          lVar10 = *(long *)PTR_DAT_04bc0428;
          uVar6 = FUN_0277d6c4(param_2);
          uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
          if ((uVar6 < *(uint *)(lVar10 + 0x1d8)) &&
             (lVar10 = *(long *)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar6 * 8), lVar10 != 0)) {
            local_80 = lVar10;
          }
        }
      }
      local_54 = (uint)local_54._2_2_ << 0x10;
      FUN_01adab50(&local_90,&local_54);
      puVar9 = (undefined2 *)PTR_DAT_04bb37e0;
      uVar6 = 0;
      do {
        if ((uVar6 != 0) && (uVar6 < 0xe)) {
          local_70 = (undefined *)CONCAT44(local_70._4_4_,uVar6);
          uVar1 = uVar6 + 7;
          if (-1 < (int)uVar6) {
            uVar1 = uVar6;
          }
          if (((uint)((int)uVar1 >> 3) < 2) &&
             (local_70 = (undefined *)CONCAT44(local_70._4_4_,uVar6),
             (local_58[(ulong)(uint)((int)uVar1 >> 3) + 4] >> (ulong)(uVar6 & 7) & 1) != 0)) {
            if (uVar6 == 9) {
              if (param_3 < 0x14) {
                lVar11 = *(long *)puVar4;
                local_74 = 0;
                uVar6 = FUN_0277d6c4(param_2);
                lVar10 = *(long *)puVar4;
                if (lVar10 != 0) {
                  lVar11 = *(long *)(lVar11 + 0x57e58);
                  uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
                  if ((uVar6 < *(uint *)(lVar11 + 0x1d8)) &&
                     (*(long *)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar6 * 8) != 0)) {
                    local_70 = puVar5 + 0x10;
                    local_60 = 0;
                    local_68 = *param_2;
                    uStack_64 = param_2[1];
                    uVar6 = FUN_0277d6c4(&local_68);
                    if (*(long *)puVar4 != 0) {
                      lVar10 = *(long *)(lVar10 + 0x57e58);
                      uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
                      if ((uVar6 < *(uint *)(lVar10 + 0x1d8)) &&
                         (*(long *)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar6 * 8) != 0)) {
                        lVar10 = *(long *)PTR_DAT_04bc0428;
                        uVar6 = FUN_0277d6c4(param_2);
                        uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
                        if ((uVar6 < *(uint *)(lVar10 + 0x1d8)) &&
                           (lVar10 = *(long *)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar6 * 8),
                           lVar10 != 0)) {
                          local_60 = lVar10;
                        }
                      }
                    }
                    local_58[0] = 0;
                    local_58[1] = 0;
                    FUN_01adab50(&local_70,local_58);
                    uVar6 = 0;
                    goto LAB_02817304;
                  }
                }
              }
              else {
                if (0x13 < param_3 - 0x14) {
                  if ((param_4 & 1) == 0) {
                    lVar10 = *(long *)puVar4;
                    uVar6 = FUN_0277d6c4(PTR_DAT_04bb37e0);
                    puVar5 = PTR_DAT_04bb37e0;
                    if (*(long *)puVar4 != 0) {
                      lVar10 = *(long *)(lVar10 + 0x57e58);
                      uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
                      if ((uVar6 < *(uint *)(lVar10 + 0x1d8)) &&
                         (*(long *)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar6 * 8) != 0)) {
                        FUN_01ad5d04(&local_70,PTR_DAT_04bb37e0);
                        uVar7 = FUN_01adba10(&local_70,1);
                        if ((uVar7 & 1) != 0) {
                          *param_1 = *(undefined2 *)puVar5;
                          *(undefined *)(param_1 + 1) = puVar5[2];
                          *(undefined *)((long)param_1 + 3) = puVar5[3];
                          *(undefined4 *)(param_1 + 2) = *(undefined4 *)(puVar5 + 4);
                          *(undefined1 *)((long)param_1 + 0x8b1) = 0;
                          *(undefined1 *)(param_1 + 0x458) = 0;
                          return;
                        }
                      }
                    }
                    goto LAB_028176a4;
                  }
                  lVar10 = *(long *)puVar4;
                  uVar6 = FUN_0277d6c4(param_2);
                  if (*(long *)puVar4 == 0) goto LAB_028176a4;
                  lVar10 = *(long *)(lVar10 + 0x57e58);
                  uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
                  if ((*(uint *)(lVar10 + 0x1d8) <= uVar6) ||
                     (*(long *)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar6 * 8) == 0))
                  goto LAB_028176a4;
                  FUN_01ad5d04(&local_70,param_2);
                  uVar7 = FUN_01adba10(&local_70,1);
                  if ((uVar7 & 1) == 0) goto LAB_028176a4;
                  *param_1 = *(undefined2 *)param_2;
                  *(undefined1 *)(param_1 + 1) = *(undefined1 *)((long)param_2 + 2);
                  *(undefined1 *)((long)param_1 + 3) = *(undefined1 *)((long)param_2 + 3);
                  *(undefined4 *)(param_1 + 2) = param_2[1];
                  *(undefined1 *)(param_1 + 0x458) = 0;
                  goto LAB_028172ec;
                }
                lVar11 = *(long *)puVar4;
                local_74 = 1;
                uVar6 = FUN_0277d6c4(param_2);
                lVar10 = *(long *)puVar4;
                if (lVar10 != 0) {
                  lVar11 = *(long *)(lVar11 + 0x57e58);
                  uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
                  if ((uVar6 < *(uint *)(lVar11 + 0x1d8)) &&
                     (*(long *)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar6 * 8) != 0)) {
                    local_70 = puVar5 + 0x10;
                    local_60 = 0;
                    local_68 = *param_2;
                    uStack_64 = param_2[1];
                    uVar6 = FUN_0277d6c4(&local_68);
                    if (*(long *)puVar4 != 0) {
                      lVar10 = *(long *)(lVar10 + 0x57e58);
                      uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
                      if ((uVar6 < *(uint *)(lVar10 + 0x1d8)) &&
                         (*(long *)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar6 * 8) != 0)) {
                        lVar10 = *(long *)PTR_DAT_04bc0428;
                        uVar6 = FUN_0277d6c4(param_2);
                        uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
                        if ((uVar6 < *(uint *)(lVar10 + 0x1d8)) &&
                           (lVar10 = *(long *)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar6 * 8),
                           lVar10 != 0)) {
                          local_60 = lVar10;
                        }
                      }
                    }
                    local_58[0] = 0;
                    local_58[1] = 0;
                    FUN_01adab50(&local_70,local_58);
                    uVar6 = 0;
                    goto LAB_028174a0;
                  }
                }
              }
              memset(param_1 + 8,0,0x8a8);
              puVar4 = PTR_DAT_04bb37e0;
              *(undefined8 *)(param_1 + 4) = 0;
              *param_1 = *(undefined2 *)puVar4;
              *(undefined *)(param_1 + 1) = puVar4[2];
              *(undefined *)((long)param_1 + 3) = puVar4[3];
              uVar2 = *(undefined4 *)(puVar4 + 4);
              goto LAB_02817240;
            }
            break;
          }
        }
        uVar6 = uVar6 + 1;
      } while (uVar6 != 0xe);
      local_74 = 0;
      lVar11 = *(long *)puVar4;
      uVar6 = FUN_0277d6c4(PTR_DAT_04bb37e0);
      lVar10 = *(long *)puVar4;
      if (lVar10 != 0) {
        lVar11 = *(long *)(lVar11 + 0x57e58);
        uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
        if ((*(uint *)(lVar11 + 0x1d8) <= uVar6) ||
           (*(long *)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar6 * 8) == 0)) goto LAB_02817208;
        local_70 = puVar5 + 0x10;
        local_60 = 0;
        local_68 = *(undefined4 *)puVar9;
        uStack_64 = *(undefined4 *)((long)puVar9 + 4);
        uVar6 = FUN_0277d6c4(&local_68);
        if (*(long *)puVar4 != 0) {
          lVar10 = *(long *)(lVar10 + 0x57e58);
          uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
          if ((uVar6 < *(uint *)(lVar10 + 0x1d8)) &&
             (*(long *)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar6 * 8) != 0)) {
            lVar10 = *(long *)PTR_DAT_04bc0428;
            uVar6 = FUN_0277d6c4(PTR_DAT_04bb37e0);
            uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
            if ((uVar6 < *(uint *)(lVar10 + 0x1d8)) &&
               (lVar10 = *(long *)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar6 * 8), lVar10 != 0))
            {
              local_60 = lVar10;
            }
          }
        }
        local_58[0] = 0;
        local_58[1] = 0;
        FUN_01adab50(&local_70,local_58);
        uVar6 = 0;
        do {
          local_54 = uVar6;
          if ((uVar6 != 0) && (uVar6 < 0xe)) {
            uVar1 = uVar6 + 7;
            if (-1 < (int)uVar6) {
              uVar1 = uVar6;
            }
            if (((uint)((int)uVar1 >> 3) < 2) &&
               ((local_58[(uint)((int)uVar1 >> 3)] >> (ulong)(uVar6 & 7) & 1) != 0)) {
              if (uVar6 == 9) {
                uVar8 = 0;
                *param_1 = *puVar9;
                *(undefined1 *)(param_1 + 1) = *(undefined1 *)((long)puVar9 + 2);
                *(undefined1 *)((long)param_1 + 3) = *(undefined1 *)((long)puVar9 + 3);
                *(undefined4 *)(param_1 + 2) = *(undefined4 *)((long)puVar9 + 4);
                *(char *)(param_1 + 0x458) = (char)local_74;
                goto LAB_028172f0;
              }
              break;
            }
          }
          uVar6 = uVar6 + 1;
        } while (uVar6 != 0xe);
        goto LAB_02817288;
      }
      goto LAB_02817208;
    }
  }
  local_54 = 0;
  uVar6 = FUN_0277d6c4(PTR_DAT_04bb37e0);
  lVar10 = *(long *)puVar4;
  if (lVar10 != 0) {
    lVar11 = *(long *)(lVar11 + 0x57e58);
    uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
    if ((uVar6 < *(uint *)(lVar11 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar6 * 8) != 0)) {
      local_60 = 0;
      local_68 = *(undefined4 *)puVar9;
      uStack_64 = *(undefined4 *)((long)puVar9 + 4);
      local_70 = PTR_DAT_04bc0510 + 0x10;
      uVar6 = FUN_0277d6c4(&local_68);
      if (*(long *)puVar4 != 0) {
        lVar10 = *(long *)(lVar10 + 0x57e58);
        uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
        if ((uVar6 < *(uint *)(lVar10 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar6 * 8) != 0)) {
          lVar10 = *(long *)PTR_DAT_04bc0428;
          uVar6 = FUN_0277d6c4(PTR_DAT_04bb37e0);
          uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
          if ((uVar6 < *(uint *)(lVar10 + 0x1d8)) &&
             (lVar10 = *(long *)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar6 * 8), lVar10 != 0)) {
            local_60 = lVar10;
          }
        }
      }
      local_74 = (uint)local_74._2_2_ << 0x10;
      FUN_01adab50(&local_70,&local_74);
      uVar6 = 0;
      do {
        if ((uVar6 != 0) && (uVar6 < 0xe)) {
          local_90 = (undefined *)CONCAT44(local_90._4_4_,uVar6);
          uVar1 = uVar6 + 7;
          if (-1 < (int)uVar6) {
            uVar1 = uVar6;
          }
          if (((uint)((int)uVar1 >> 3) < 2) &&
             (local_90 = (undefined *)CONCAT44(local_90._4_4_,uVar6),
             (local_58[(ulong)(uint)((int)uVar1 >> 3) - 0x1c] >> (ulong)(uVar6 & 7) & 1) != 0)) {
            if (uVar6 == 9) {
              uVar8 = 0;
              *param_1 = *puVar9;
              *(undefined1 *)(param_1 + 1) = *(undefined1 *)((long)puVar9 + 2);
              *(undefined1 *)((long)param_1 + 3) = *(undefined1 *)((long)puVar9 + 3);
              *(undefined4 *)(param_1 + 2) = *(undefined4 *)((long)puVar9 + 4);
              *(char *)(param_1 + 0x458) = (char)local_54;
              goto LAB_028172f0;
            }
            break;
          }
        }
        uVar6 = uVar6 + 1;
      } while (uVar6 != 0xe);
LAB_02817288:
      memset(param_1 + 8,0,0x8a8);
      uVar3 = *puVar9;
      *(undefined8 *)(param_1 + 4) = 0;
      *param_1 = uVar3;
      *(undefined1 *)(param_1 + 1) = *(undefined1 *)(puVar9 + 1);
      *(undefined1 *)((long)param_1 + 3) = *(undefined1 *)((long)puVar9 + 3);
      *(undefined4 *)(param_1 + 2) = *(undefined4 *)(puVar9 + 2);
      FUN_027c0ee4(param_1 + 8);
      memset(param_1 + 0x40,0,0x830);
      *(undefined1 *)(param_1 + 0x458) = 0;
      *(byte *)(param_1 + 0x3c) = *(byte *)(param_1 + 0x3c) | 1;
LAB_028172ec:
      uVar8 = 0xff;
LAB_028172f0:
      *(undefined1 *)((long)param_1 + 0x8b1) = uVar8;
      return;
    }
  }
LAB_02817208:
  memset(param_1 + 8,0,0x8a8);
  uVar3 = *puVar9;
  *(undefined8 *)(param_1 + 4) = 0;
  *param_1 = uVar3;
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(puVar9 + 1);
  *(undefined1 *)((long)param_1 + 3) = *(undefined1 *)((long)puVar9 + 3);
  uVar2 = *(undefined4 *)(puVar9 + 2);
LAB_02817240:
  *(undefined4 *)(param_1 + 2) = uVar2;
  FUN_027c0ee4(param_1 + 8);
  memset(param_1 + 0x40,0,0x830);
  *(byte *)(param_1 + 0x3c) = *(byte *)(param_1 + 0x3c) | 1;
  param_1[0x458] = 0xff00;
  return;
LAB_028174a0:
  local_54 = uVar6;
  if ((uVar6 != 0) && (uVar6 < 0xe)) {
    uVar1 = uVar6 + 7;
    if (-1 < (int)uVar6) {
      uVar1 = uVar6;
    }
    if (((uint)((int)uVar1 >> 3) < 2) &&
       ((local_58[(uint)((int)uVar1 >> 3)] >> (ulong)(uVar6 & 7) & 1) != 0)) {
      if (uVar6 == 9) {
        *param_1 = *(undefined2 *)param_2;
        *(undefined1 *)(param_1 + 1) = *(undefined1 *)((long)param_2 + 2);
        *(undefined1 *)((long)param_1 + 3) = *(undefined1 *)((long)param_2 + 3);
        *(undefined4 *)(param_1 + 2) = param_2[1];
        *(char *)((long)param_1 + 0x8b1) = (char)param_3 + -0x14;
        *(char *)(param_1 + 0x458) = (char)local_74;
        return;
      }
      goto LAB_028176a4;
    }
  }
  uVar6 = uVar6 + 1;
  if (uVar6 == 0xe) {
LAB_028176a4:
    memset(param_1,0,0x8b8);
    FUN_028163bc(param_1);
    return;
  }
  goto LAB_028174a0;
LAB_02817304:
  local_54 = uVar6;
  if ((uVar6 != 0) && (uVar6 < 0xe)) {
    uVar1 = uVar6 + 7;
    if (-1 < (int)uVar6) {
      uVar1 = uVar6;
    }
    if (((uint)((int)uVar1 >> 3) < 2) &&
       ((local_58[(uint)((int)uVar1 >> 3)] >> (ulong)(uVar6 & 7) & 1) != 0)) {
      if (uVar6 == 9) {
        *param_1 = *(undefined2 *)param_2;
        *(undefined1 *)(param_1 + 1) = *(undefined1 *)((long)param_2 + 2);
        *(undefined1 *)((long)param_1 + 3) = *(undefined1 *)((long)param_2 + 3);
        *(undefined4 *)(param_1 + 2) = param_2[1];
        goto LAB_0281772c;
      }
      goto LAB_028176c0;
    }
  }
  uVar6 = uVar6 + 1;
  if (uVar6 == 0xe) {
LAB_028176c0:
    memset(param_1 + 8,0,0x8a8);
    puVar4 = PTR_DAT_04bb37e0;
    *(undefined8 *)(param_1 + 4) = 0;
    *param_1 = *(undefined2 *)puVar4;
    *(undefined *)(param_1 + 1) = puVar4[2];
    *(undefined *)((long)param_1 + 3) = puVar4[3];
    *(undefined4 *)(param_1 + 2) = *(undefined4 *)(puVar4 + 4);
    FUN_027c0ee4(param_1 + 8);
    memset(param_1 + 0x40,0,0x830);
    local_74 = 0;
    param_3 = 0xff;
    *(byte *)(param_1 + 0x3c) = *(byte *)(param_1 + 0x3c) | 1;
LAB_0281772c:
    *(char *)(param_1 + 0x458) = (char)local_74;
    *(char *)((long)param_1 + 0x8b1) = (char)param_3;
    return;
  }
  goto LAB_02817304;
}


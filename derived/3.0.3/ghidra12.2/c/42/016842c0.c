
/* WARNING: Removing unreachable block (ram,0x01684378) */
/* WARNING: Removing unreachable block (ram,0x01684368) */
/* WARNING: Removing unreachable block (ram,0x016849e8) */

void FUN_016842c0(long param_1,long param_2,undefined4 *param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint uVar4;
  undefined *puVar5;
  uint uVar6;
  ulong uVar7;
  uint uVar8;
  uint *puVar9;
  ushort uVar10;
  uint *puVar11;
  uint uVar12;
  ulong uVar13;
  long lVar14;
  int iVar15;
  ulong uVar16;
  long lVar17;
  undefined *local_20c0;
  uint local_20b8;
  uint uStack_20b4;
  float local_20b0;
  uint local_20ac;
  undefined *local_20a8;
  uint local_20a0;
  uint local_209c;
  undefined **local_2098;
  uint local_2090 [1024];
  undefined *local_1090;
  undefined4 local_1088;
  undefined4 local_1084;
  byte local_1080;
  undefined8 local_1078;
  float local_1070;
  uint local_106c;
  uint *local_1068;
  
  FUN_0167f380();
  local_1088 = 1;
  local_1084 = *(undefined4 *)(PTR_DAT_04bbbf90 + 0xc);
  local_1080 = FUN_017baf44();
  local_1080 = local_1080 & 1;
  local_1090 = PTR_DAT_04bb6268 + 0x10;
  local_1078 = (undefined *)CONCAT44(local_1078._4_4_,1);
  if (*(long *)(*(long *)PTR_DAT_04bb27a8 + 0x38) != 0) {
    local_2098 = &PTR_LAB_049bb2c8;
    memset(local_2090,0,0x1000);
    lVar14 = 0;
    do {
      lVar17 = lVar14 + 8;
      uVar12 = *(uint *)((long)local_2090 + lVar14 + 4);
      uVar8 = *(uint *)((long)&DAT_05232814 + lVar14);
      *(uint *)((long)&local_1078 + lVar14) =
           *(uint *)((long)&DAT_05232810 + lVar14) | *(uint *)((long)local_2090 + lVar14);
      *(uint *)((long)&local_1078 + lVar14 + 4) = uVar8 | uVar12;
      lVar14 = lVar17;
    } while (lVar17 != 0x1000);
    memcpy(local_2090,&local_1078,0x1000);
    if (param_4 != 0) {
      lVar14 = 0;
      do {
        puVar9 = (uint *)(param_4 + 8 + lVar14);
        uVar12 = *(uint *)((long)local_2090 + lVar14 + 4);
        lVar17 = lVar14 + 8;
        uVar8 = puVar9[1];
        *(uint *)((long)&local_1078 + lVar14) = *puVar9 & *(uint *)((long)local_2090 + lVar14);
        *(uint *)((long)&local_1078 + lVar14 + 4) = uVar8 & uVar12;
        lVar14 = lVar17;
      } while (lVar17 != 0x1000);
      memcpy(local_2090,&local_1078,0x1000);
    }
    uVar16 = 0;
    do {
      if ((local_2090[uVar16 >> 5] >> (ulong)((uint)uVar16 & 0x1f) & 1) != 0) goto LAB_01684490;
      uVar12 = (uint)uVar16 + 1;
      uVar16 = (ulong)uVar12;
    } while (uVar12 != 0x8000);
    uVar16 = 0;
LAB_01684490:
    iVar15 = 0x8000;
    do {
      if ((local_2090[iVar15 - 1U >> 5] >> (ulong)(iVar15 - 1U & 0x1f) & 1) != 0) break;
      iVar15 = iVar15 + -1;
    } while (iVar15 != 0);
    if (iVar15 != (int)uVar16) {
      uVar13 = 0;
      puVar1 = PTR_DAT_04bb2010 + 0x10;
      puVar2 = PTR_DAT_04bbbad8 + 0x10;
      puVar3 = PTR_DAT_04bc0510 + 0x10;
LAB_0168457c:
      local_20a0 = ((uint)uVar16 & 0xff) << 1;
      local_209c = (int)(uint)uVar16 >> 7 & 0xfffffffe;
      local_20a8 = puVar2;
      FUN_01a50240(&local_20b0,&local_1090,0,&local_20a8);
      puVar5 = PTR_DAT_04bb43c0;
      uVar12 = (uint)local_20b0 & 0xffff;
      if (uVar12 == 0xfffe) {
        local_20a0 = local_20a0 + 1;
        FUN_01a50240(&local_1078,&local_1090,0,&local_20a8);
        local_20b0 = SUB84(local_1078,0);
        local_20ac = local_1078._4_4_;
        if ((short)local_1078 == -2) {
          local_209c = local_209c + 1;
          FUN_01a50240(&local_1078,&local_1090,0,&local_20a8);
          local_20b0 = SUB84(local_1078,0);
          local_20ac = local_1078._4_4_;
          if ((short)local_1078 == -2) {
            local_20a0 = local_20a0 - 1;
            FUN_01a50240(&local_1078,&local_1090,0,&local_20a8);
            local_20b0 = SUB84(local_1078,0);
            local_20ac = local_1078._4_4_;
            if ((short)local_1078 == -2) {
LAB_016848f0:
              local_1070 = (float)(int)local_209c * 5.0 + 5.0;
              local_1078 = (undefined *)
                           CONCAT44(local_1078._4_4_,(float)(int)local_20a0 * 5.0 + 5.0);
              uVar7 = FUN_035a2340(&local_1078,&DAT_0418f434);
              if ((uVar7 & 1) == 0) {
                local_20b8 = local_20a0;
                uStack_20b4 = local_209c;
                local_20c0 = puVar1;
                uVar7 = FUN_016771a0(&local_20c0);
                if ((uVar7 & 1) != 0) {
                  if (uVar12 == 0xfffe) {
                    if ((((DAT_05233970 <= (int)local_20a0) && ((int)local_20a0 <= DAT_05233980)) &&
                        (DAT_05233974 <= (int)local_209c)) &&
                       (((int)local_209c <= DAT_05233984 &&
                        (uVar12 = (local_209c & 0x1fffffe) * 0x80 + ((int)local_20a0 >> 1),
                        uVar12 >> 0xf == 0)))) {
                      lVar14 = (ulong)(uVar12 >> 5) * 4;
                      *(uint *)(param_1 + 0x19058 + lVar14) =
                           *(uint *)(param_1 + 0x19058 + lVar14) |
                           1 << (ulong)(local_20a0 >> 1 & 0x1f);
                    }
                  }
                  else if (uVar13 < 0x18) {
                    lVar14 = param_2 + uVar13 * 0x10;
                    uVar13 = uVar13 + 1;
                    *(uint *)(lVar14 + 8) = local_20a0;
                    *(uint *)(lVar14 + 0xc) = local_209c;
                  }
                }
              }
            }
          }
        }
      }
      else {
        lVar17 = *(long *)PTR_DAT_04bb43c0;
        uVar6 = FUN_0277d6c4(&local_20b0);
        uVar8 = local_20ac;
        lVar14 = *(long *)puVar5;
        if (lVar14 != 0) {
          lVar17 = *(long *)(lVar17 + 0x57e58);
          uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar17 + 0x1f8);
          if ((uVar6 < *(uint *)(lVar17 + 0x1d8)) &&
             (*(long *)(*(long *)(lVar17 + 0x1e0) + (long)(int)uVar6 * 8) != 0)) {
            local_1068 = (uint *)0x0;
            local_1070 = local_20b0;
            local_106c = local_20ac;
            local_1078 = puVar3;
            uVar6 = FUN_0277d6c4(&local_1070);
            if (*(long *)PTR_DAT_04bb43c0 != 0) {
              lVar14 = *(long *)(lVar14 + 0x57e58);
              uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar14 + 0x1f8);
              if ((uVar6 < *(uint *)(lVar14 + 0x1d8)) &&
                 (*(long *)(*(long *)(lVar14 + 0x1e0) + (long)(int)uVar6 * 8) != 0)) {
                lVar14 = *(long *)PTR_DAT_04bc0428;
                uVar6 = FUN_0277d6c4(&local_20b0);
                uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar14 + 0x1f8);
                if ((uVar6 < *(uint *)(lVar14 + 0x1d8)) &&
                   (puVar9 = *(uint **)(*(long *)(lVar14 + 0x1e0) + (long)(int)uVar6 * 8),
                   puVar9 != (uint *)0x0)) {
                  uVar10 = 0;
                  uVar6 = *puVar9;
                  if ((uVar6 != 0) && (puVar9 != (uint *)(ulong)uVar6)) {
                    puVar11 = (uint *)((long)puVar9 - (long)(ulong)uVar6);
                    uVar10 = 0;
                    if (*puVar11 != 0) {
                      uVar6 = puVar11[1];
                      if ((uVar6 != 0) && ((ulong)(ushort)puVar11[2] != 0)) {
                        lVar14 = 0xc;
                        if (*(char *)((long)puVar11 + 10) != '\0') {
                          lVar14 = 0x1c;
                        }
                        lVar14 = (long)puVar11 + lVar14 + (ulong)(ushort)puVar11[2] * 8;
                        if (lVar14 != 0) {
                          uVar4 = 0;
                          if ((ulong)uVar6 != 0) {
                            uVar4 = (uint)((ulong)((long)puVar9 - lVar14) / (ulong)uVar6);
                          }
                          if (*puVar11 <= uVar4) {
                            uVar4 = 0xffffffff;
                          }
                          if ((uVar4 < *(uint *)PTR_DAT_04bc00c8) &&
                             (uVar10 = *(ushort *)
                                        (*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar4 * 2),
                             uVar10 < 0xbd)) goto LAB_01684a64;
                        }
                      }
                      uVar10 = 0;
                    }
                  }
LAB_01684a64:
                  local_1068 = puVar9;
                  if (uVar10 == 0x6c) {
                    uVar8 = *(uint *)(param_1 + 0x32164);
                    if (((uVar8 ^ 0xffffffff) & 0x18000000) != 0) {
                      *(uint *)(param_1 + 0x32164) =
                           uVar8 & 0xe0000000 |
                           uVar8 & 0xffffff | (uVar8 + 0x1000000 >> 0x18 & 0x1f) << 0x18;
                    }
                    goto LAB_016848f0;
                  }
                  uVar10 = 0;
                  uVar12 = *puVar9;
                  if ((uVar12 != 0) && (puVar9 != (uint *)(ulong)uVar12)) {
                    puVar11 = (uint *)((long)puVar9 - (long)(ulong)uVar12);
                    uVar10 = 0;
                    if (*puVar11 != 0) {
                      uVar12 = puVar11[1];
                      if ((uVar12 != 0) && ((ulong)(ushort)puVar11[2] != 0)) {
                        lVar14 = 0xc;
                        if (*(char *)((long)puVar11 + 10) != '\0') {
                          lVar14 = 0x1c;
                        }
                        lVar14 = (long)puVar11 + lVar14 + (ulong)(ushort)puVar11[2] * 8;
                        if (lVar14 != 0) {
                          uVar6 = 0;
                          if ((ulong)uVar12 != 0) {
                            uVar6 = (uint)((ulong)((long)puVar9 - lVar14) / (ulong)uVar12);
                          }
                          if (*puVar11 <= uVar6) {
                            uVar6 = 0xffffffff;
                          }
                          if ((uVar6 < *(uint *)PTR_DAT_04bc00c8) &&
                             (uVar10 = *(ushort *)
                                        (*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar6 * 2),
                             uVar10 < 0xbd)) goto LAB_01684b20;
                        }
                      }
                      uVar10 = 0;
                    }
                  }
LAB_01684b20:
                  if (uVar10 == 0x68) {
                    uVar10 = 0;
                    uVar12 = *puVar9;
                    if ((uVar12 != 0) && (puVar9 != (uint *)(ulong)uVar12)) {
                      puVar11 = (uint *)((long)puVar9 - (long)(ulong)uVar12);
                      uVar10 = 0;
                      if (*puVar11 != 0) {
                        uVar12 = puVar11[1];
                        if ((uVar12 != 0) && ((ulong)(ushort)puVar11[2] != 0)) {
                          lVar14 = 0xc;
                          if (*(char *)((long)puVar11 + 10) != '\0') {
                            lVar14 = 0x1c;
                          }
                          lVar14 = (long)puVar11 + lVar14 + (ulong)(ushort)puVar11[2] * 8;
                          if (lVar14 != 0) {
                            uVar6 = 0;
                            if ((ulong)uVar12 != 0) {
                              uVar6 = (uint)((ulong)((long)puVar9 - lVar14) / (ulong)uVar12);
                            }
                            if (*puVar11 <= uVar6) {
                              uVar6 = 0xffffffff;
                            }
                            if ((uVar6 < *(uint *)PTR_DAT_04bc00c8) &&
                               (uVar10 = *(ushort *)
                                          (*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar6 * 2),
                               uVar10 < 0xbd)) goto LAB_016849f4;
                          }
                        }
                        uVar10 = 0;
                      }
                    }
LAB_016849f4:
                    if (((uVar10 == 0x68) && ((uVar8 >> 0x10 & 1) == 0)) &&
                       (uVar12 = *(uint *)(param_1 + 0x32168),
                       ((uVar12 ^ 0xffffffff) & 0x3c000) != 0)) {
                      *(uint *)(param_1 + 0x32168) =
                           uVar12 & 0xfffc0000 |
                           uVar12 & 0x3fff | (uVar12 + 0x4000 >> 0xe & 0xf) << 0xe;
                    }
                  }
                }
              }
            }
          }
        }
      }
      do {
        uVar12 = (int)uVar16 + 1;
        uVar16 = (ulong)uVar12;
        if (0x7fff < uVar12) {
          uVar12 = 0x7ffe;
          goto LAB_01684860;
        }
      } while ((local_2090[uVar12 >> 5] >> (ulong)(uVar12 & 0x1f) & 1) == 0);
      goto LAB_01684574;
    }
    uVar13 = 0;
LAB_016844c0:
    FUN_01684bcc(param_1);
    *param_3 = (int)uVar13;
  }
  return;
  while (uVar12 = uVar12 - 2, uVar12 != 0xfffffffe) {
LAB_01684860:
    uVar8 = uVar12 + 1;
    if (((local_2090[uVar8 >> 5] >> (ulong)(uVar8 & 0x1f) & 1) != 0) ||
       (uVar8 = uVar12, (local_2090[uVar12 >> 5] >> (ulong)(uVar12 & 0x1f) & 1) != 0)) {
      uVar16 = (ulong)(uVar8 + 1);
      goto LAB_01684574;
    }
  }
  uVar16 = 0;
LAB_01684574:
  if (iVar15 == (int)uVar16) goto LAB_016844c0;
  goto LAB_0168457c;
}


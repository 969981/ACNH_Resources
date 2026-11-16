
void FUN_0268e6d0(long param_1,undefined2 *param_2,undefined4 *param_3,undefined4 param_4,
                 undefined4 param_5,uint param_6,ulong param_7,uint param_8)

{
  undefined2 *puVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined1 uVar4;
  char cVar5;
  undefined2 uVar6;
  undefined *puVar7;
  uint uVar8;
  undefined4 uVar9;
  uint uVar10;
  ulong uVar11;
  undefined4 *puVar12;
  uint *puVar13;
  long lVar14;
  uint *puVar15;
  bool bVar16;
  long lVar17;
  undefined8 local_c0;
  undefined2 local_b8;
  undefined1 uStack_b6;
  char cStack_b5;
  uint uStack_b4;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  uint local_a0;
  ulong local_9c;
  undefined8 local_94;
  undefined4 local_8c;
  uint local_84;
  ushort local_80;
  undefined1 auStack_7e [2];
  uint local_7c;
  undefined2 local_78;
  undefined1 local_76;
  char local_75;
  uint local_74;
  byte local_70 [4];
  uint local_6c;
  uint local_68;
  uint local_64;
  
  puVar7 = PTR_DAT_04bb43c0;
  uVar6 = *param_2;
  uVar4 = *(undefined1 *)(param_2 + 1);
  cVar5 = *(char *)((long)param_2 + 3);
  uVar10 = *(uint *)(param_2 + 2);
  lVar17 = *(long *)PTR_DAT_04bb43c0;
  local_78 = uVar6;
  local_76 = uVar4;
  local_75 = cVar5;
  local_74 = uVar10;
  uVar8 = FUN_0277d6c4(&local_78);
  lVar14 = *(long *)puVar7;
  if (lVar14 == 0) {
    return;
  }
  lVar17 = *(long *)(lVar17 + 0x57e58);
  uVar8 = (uVar8 & 0xffff) - (uint)*(ushort *)(lVar17 + 0x1f8);
  if (*(uint *)(lVar17 + 0x1d8) <= uVar8) {
    return;
  }
  if (*(long *)(*(long *)(lVar17 + 0x1e0) + (long)(int)uVar8 * 8) == 0) {
    return;
  }
  local_c0 = PTR_DAT_04bc0510 + 0x10;
  local_b0 = 0;
  uStack_ac = 0;
  local_b8 = uVar6;
  uStack_b6 = uVar4;
  cStack_b5 = cVar5;
  uStack_b4 = uVar10;
  uVar8 = FUN_0277d6c4(&local_b8);
  if (*(long *)puVar7 == 0) {
LAB_0268e8a8:
    puVar15 = (uint *)0x0;
    local_7c = 0xbc;
    bVar16 = true;
  }
  else {
    lVar14 = *(long *)(lVar14 + 0x57e58);
    uVar8 = (uVar8 & 0xffff) - (uint)*(ushort *)(lVar14 + 0x1f8);
    if ((*(uint *)(lVar14 + 0x1d8) <= uVar8) ||
       (*(long *)(*(long *)(lVar14 + 0x1e0) + (long)(int)uVar8 * 8) == 0)) goto LAB_0268e8a8;
    lVar14 = *(long *)PTR_DAT_04bc0428;
    uVar8 = FUN_0277d6c4(&local_78);
    uVar8 = (uVar8 & 0xffff) - (uint)*(ushort *)(lVar14 + 0x1f8);
    if ((*(uint *)(lVar14 + 0x1d8) <= uVar8) ||
       (puVar15 = *(uint **)(*(long *)(lVar14 + 0x1e0) + (long)(int)uVar8 * 8),
       puVar15 == (uint *)0x0)) goto LAB_0268e8a8;
    local_b0 = SUB84(puVar15,0);
    uStack_ac = (undefined4)((ulong)puVar15 >> 0x20);
    local_7c = 0;
    uVar8 = *puVar15;
    if ((uVar8 == 0) || (puVar15 == (uint *)(ulong)uVar8)) {
LAB_0268eeec:
      bVar16 = false;
    }
    else {
      puVar13 = (uint *)((long)puVar15 - (long)(ulong)uVar8);
      local_7c = 0;
      if (*puVar13 == 0) goto LAB_0268eeec;
      uVar8 = puVar13[1];
      if ((uVar8 == 0) || ((ulong)(ushort)puVar13[2] == 0)) {
LAB_0268eee8:
        local_7c = 0;
        goto LAB_0268eeec;
      }
      lVar14 = 0xc;
      if (*(char *)((long)puVar13 + 10) != '\0') {
        lVar14 = 0x1c;
      }
      lVar14 = (long)puVar13 + lVar14 + (ulong)(ushort)puVar13[2] * 8;
      if (lVar14 == 0) goto LAB_0268eee8;
      uVar2 = 0;
      if ((ulong)uVar8 != 0) {
        uVar2 = (uint)((ulong)((long)puVar15 - lVar14) / (ulong)uVar8);
      }
      if (*puVar13 <= uVar2) {
        uVar2 = 0xffffffff;
      }
      if (DAT_05326ec0 <= uVar2) goto LAB_0268eee8;
      local_7c = (uint)*(ushort *)(DAT_05326ec8 + (long)(int)uVar2 * 2);
      if (local_7c < 0xbd) goto LAB_0268eeec;
      bVar16 = false;
      local_7c = 0;
    }
  }
  if (local_7c == 0xac) {
    uVar9 = FUN_021d7d60(param_1);
    FUN_01b086f4(auStack_7e,&local_c0);
    FUN_026567f0(&local_6c,uVar9,auStack_7e);
    FUN_007ef010(&local_80,&local_6c);
    local_64 = 0xac;
    if (bVar16) {
      local_68 = 0xbc;
    }
    else {
      uVar8 = *puVar15;
      local_68 = 0;
      if ((uVar8 != 0) && (puVar15 != (uint *)(ulong)uVar8)) {
        puVar13 = (uint *)((long)puVar15 - (long)(ulong)uVar8);
        local_68 = 0;
        if (*puVar13 != 0) {
          uVar8 = puVar13[1];
          if ((uVar8 != 0) && ((ulong)(ushort)puVar13[2] != 0)) {
            lVar14 = 0xc;
            if (*(char *)((long)puVar13 + 10) != '\0') {
              lVar14 = 0x1c;
            }
            lVar14 = (long)puVar13 + lVar14 + (ulong)(ushort)puVar13[2] * 8;
            if (lVar14 != 0) {
              uVar2 = 0;
              if ((ulong)uVar8 != 0) {
                uVar2 = (uint)((ulong)((long)puVar15 - lVar14) / (ulong)uVar8);
              }
              if (*puVar13 <= uVar2) {
                uVar2 = 0xffffffff;
              }
              if ((uVar2 < DAT_05326ec0) &&
                 (local_68 = (uint)*(ushort *)(DAT_05326ec8 + (long)(int)uVar2 * 2), local_68 < 0xbd
                 )) goto LAB_0268ea50;
            }
          }
          local_68 = 0;
        }
      }
    }
LAB_0268ea50:
    if (local_68 == 0xac) {
      uVar10 = uVar10 & 0xffff0000 | (uint)local_80;
      uStack_b4 = uVar10;
    }
    local_78 = uVar6;
    local_76 = uVar4;
    local_75 = cVar5;
    local_74 = uVar10;
  }
  else {
    local_70[0] = 0;
    local_70[1] = 0;
    FUN_01adab50(&local_c0,local_70);
    uVar10 = 0;
    do {
      local_6c = uVar10;
      if ((local_6c != 0) && (local_68 = local_6c, local_6c < 0xe)) {
        uVar10 = local_6c + 7;
        if (-1 < (int)local_6c) {
          uVar10 = local_6c;
        }
        local_64 = local_6c;
        if (((uint)((int)uVar10 >> 3) < 2) &&
           (local_84 = local_6c,
           (local_70[(uint)((int)uVar10 >> 3)] >> (ulong)(local_6c & 7) & 1) != 0))
        goto LAB_0268e998;
      }
      uVar10 = local_6c + 1;
    } while (local_6c + 1 != 0xe);
    local_84 = 0;
LAB_0268e998:
    if ((local_84 != 5) && (local_84 != 4)) {
      return;
    }
    uVar11 = FUN_01ad9cb4(&local_c0);
    if ((uVar11 & 1) != 0) {
      return;
    }
  }
  puVar1 = (undefined2 *)(param_1 + 0x125ec);
  if ((param_7 & 1) == 0) {
    FUN_0277d6c4(&local_78);
  }
  else {
    uVar11 = FUN_0277d7b4(param_1 + 0x125ec,&local_78);
    if ((((uVar11 & 1) != 0) && (*(char *)(param_1 + 0x125ef) == local_75)) &&
       (*(uint *)(param_1 + 0x125f0) == local_74)) {
      return;
    }
    lVar14 = *(long *)puVar7;
    uVar10 = FUN_0277d6c4(&local_78);
    if (*(long *)puVar7 != 0) {
      lVar14 = *(long *)(lVar14 + 0x57e58);
      uVar10 = (uVar10 & 0xffff) - (uint)*(ushort *)(lVar14 + 0x1f8);
      if ((uVar10 < *(uint *)(lVar14 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar14 + 0x1e0) + (long)(int)uVar10 * 8) != 0)) {
        uVar11 = FUN_0277d7b4(param_1 + 0x1094c,&local_78);
        if (((uVar11 & 1) == 0) ||
           ((*(char *)(param_1 + 0x1094f) != local_75 || (*(uint *)(param_1 + 0x10950) != local_74))
           )) {
          uVar11 = FUN_0277d7b4(param_1 + 0x10978,&local_78);
          if (((uVar11 & 1) == 0) ||
             ((*(char *)(param_1 + 0x1097b) != local_75 ||
              (*(uint *)(param_1 + 0x1097c) != local_74)))) {
            uVar11 = FUN_0277d7b4(param_1 + 0x109a4,&local_78);
            if (((uVar11 & 1) == 0) ||
               ((*(char *)(param_1 + 0x109a7) != local_75 ||
                (*(uint *)(param_1 + 0x109a8) != local_74)))) {
              uVar11 = FUN_0277d7b4(param_1 + 0x109d0,&local_78);
              if (((uVar11 & 1) == 0) ||
                 ((*(char *)(param_1 + 0x109d3) != local_75 ||
                  (*(uint *)(param_1 + 0x109d4) != local_74)))) {
                uVar11 = FUN_0277d7b4(param_1 + 0x109fc,&local_78);
                if (((uVar11 & 1) == 0) ||
                   ((*(char *)(param_1 + 0x109ff) != local_75 ||
                    (*(uint *)(param_1 + 0x10a00) != local_74)))) {
                  uVar11 = FUN_0277d7b4(param_1 + 0x10a28,&local_78);
                  if (((uVar11 & 1) == 0) ||
                     ((*(char *)(param_1 + 0x10a2b) != local_75 ||
                      (*(uint *)(param_1 + 0x10a2c) != local_74)))) {
                    uVar11 = FUN_0277d7b4(param_1 + 0x10a54,&local_78);
                    if (((uVar11 & 1) == 0) ||
                       ((*(char *)(param_1 + 0x10a57) != local_75 ||
                        (*(uint *)(param_1 + 0x10a58) != local_74)))) {
                      uVar11 = FUN_0277d7b4(param_1 + 0x10a80,&local_78);
                      if (((uVar11 & 1) == 0) ||
                         ((*(char *)(param_1 + 0x10a83) != local_75 ||
                          (*(uint *)(param_1 + 0x10a84) != local_74)))) {
                        uVar11 = FUN_0277d7b4(param_1 + 0x10aac,&local_78);
                        if (((uVar11 & 1) == 0) ||
                           ((*(char *)(param_1 + 0x10aaf) != local_75 ||
                            (*(uint *)(param_1 + 0x10ab0) != local_74)))) {
                          uVar11 = FUN_0277d7b4(param_1 + 0x10ad8,&local_78);
                          if (((uVar11 & 1) == 0) ||
                             ((*(char *)(param_1 + 0x10adb) != local_75 ||
                              (*(uint *)(param_1 + 0x10adc) != local_74)))) {
                            uVar11 = FUN_0277d7b4(param_1 + 0x10b04,&local_78);
                            if (((uVar11 & 1) == 0) ||
                               ((*(char *)(param_1 + 0x10b07) != local_75 ||
                                (*(uint *)(param_1 + 0x10b08) != local_74)))) {
                              uVar11 = FUN_0277d7b4(param_1 + 0x10b30,&local_78);
                              if (((uVar11 & 1) == 0) ||
                                 ((*(char *)(param_1 + 0x10b33) != local_75 ||
                                  (*(uint *)(param_1 + 0x10b34) != local_74)))) {
                                uVar11 = FUN_0277d7b4(param_1 + 0x10b5c,&local_78);
                                if (((uVar11 & 1) == 0) ||
                                   ((*(char *)(param_1 + 0x10b5f) != local_75 ||
                                    (*(uint *)(param_1 + 0x10b60) != local_74)))) {
                                  uVar11 = FUN_0277d7b4(param_1 + 0x10b88,&local_78);
                                  if (((uVar11 & 1) == 0) ||
                                     ((*(char *)(param_1 + 0x10b8b) != local_75 ||
                                      (*(uint *)(param_1 + 0x10b8c) != local_74)))) {
                                    uVar11 = FUN_0277d7b4(param_1 + 0x10bb4,&local_78);
                                    if (((uVar11 & 1) == 0) ||
                                       ((*(char *)(param_1 + 0x10bb7) != local_75 ||
                                        (*(uint *)(param_1 + 0x10bb8) != local_74)))) {
                                      uVar11 = FUN_0277d7b4(param_1 + 0x10be0,&local_78);
                                      if (((uVar11 & 1) == 0) ||
                                         ((*(char *)(param_1 + 0x10be3) != local_75 ||
                                          (*(uint *)(param_1 + 0x10be4) != local_74)))) {
                                        uVar11 = FUN_0277d7b4(param_1 + 0x10c0c,&local_78);
                                        if (((uVar11 & 1) == 0) ||
                                           ((*(char *)(param_1 + 0x10c0f) != local_75 ||
                                            (*(uint *)(param_1 + 0x10c10) != local_74)))) {
                                          uVar11 = FUN_0277d7b4(param_1 + 0x10c38,&local_78);
                                          if (((uVar11 & 1) == 0) ||
                                             ((*(char *)(param_1 + 0x10c3b) != local_75 ||
                                              (*(uint *)(param_1 + 0x10c3c) != local_74)))) {
                                            uVar11 = FUN_0277d7b4(param_1 + 0x10c64,&local_78);
                                            if (((uVar11 & 1) == 0) ||
                                               ((*(char *)(param_1 + 0x10c67) != local_75 ||
                                                (*(uint *)(param_1 + 0x10c68) != local_74)))) {
                                              uVar11 = FUN_0277d7b4(param_1 + 0x10c90,&local_78);
                                              if (((uVar11 & 1) == 0) ||
                                                 ((*(char *)(param_1 + 0x10c93) != local_75 ||
                                                  (*(uint *)(param_1 + 0x10c94) != local_74)))) {
                                                uVar11 = FUN_0277d7b4(param_1 + 0x10cbc,&local_78);
                                                if (((uVar11 & 1) == 0) ||
                                                   ((*(char *)(param_1 + 0x10cbf) != local_75 ||
                                                    (*(uint *)(param_1 + 0x10cc0) != local_74)))) {
                                                  uVar11 = FUN_0277d7b4(param_1 + 0x10ce8,&local_78)
                                                  ;
                                                  if (((uVar11 & 1) == 0) ||
                                                     ((*(char *)(param_1 + 0x10ceb) != local_75 ||
                                                      (*(uint *)(param_1 + 0x10cec) != local_74))))
                                                  {
                                                    uVar11 = FUN_0277d7b4(param_1 + 0x10d14,
                                                                          &local_78);
                                                    if (((uVar11 & 1) == 0) ||
                                                       ((*(char *)(param_1 + 0x10d17) != local_75 ||
                                                        (*(uint *)(param_1 + 0x10d18) != local_74)))
                                                       ) {
                                                      uVar11 = FUN_0277d7b4(param_1 + 0x10d40,
                                                                            &local_78);
                                                      if (((uVar11 & 1) == 0) ||
                                                         ((*(char *)(param_1 + 0x10d43) != local_75
                                                          || (*(uint *)(param_1 + 0x10d44) !=
                                                              local_74)))) goto LAB_0268eb58;
                                                      lVar14 = 0x17;
                                                    }
                                                    else {
                                                      lVar14 = 0x16;
                                                    }
                                                  }
                                                  else {
                                                    lVar14 = 0x15;
                                                  }
                                                }
                                                else {
                                                  lVar14 = 0x14;
                                                }
                                              }
                                              else {
                                                lVar14 = 0x13;
                                              }
                                            }
                                            else {
                                              lVar14 = 0x12;
                                            }
                                          }
                                          else {
                                            lVar14 = 0x11;
                                          }
                                        }
                                        else {
                                          lVar14 = 0x10;
                                        }
                                      }
                                      else {
                                        lVar14 = 0xf;
                                      }
                                    }
                                    else {
                                      lVar14 = 0xe;
                                    }
                                  }
                                  else {
                                    lVar14 = 0xd;
                                  }
                                }
                                else {
                                  lVar14 = 0xc;
                                }
                              }
                              else {
                                lVar14 = 0xb;
                              }
                            }
                            else {
                              lVar14 = 10;
                            }
                          }
                          else {
                            lVar14 = 9;
                          }
                        }
                        else {
                          lVar14 = 8;
                        }
                      }
                      else {
                        lVar14 = 7;
                      }
                    }
                    else {
                      lVar14 = 6;
                    }
                  }
                  else {
                    lVar14 = 5;
                  }
                }
                else {
                  lVar14 = 4;
                }
              }
              else {
                lVar14 = 3;
              }
            }
            else {
              lVar14 = 2;
            }
          }
          else {
            lVar14 = 1;
          }
        }
        else {
          lVar14 = 0;
        }
        lVar17 = *(long *)puVar7;
        puVar12 = (undefined4 *)(param_1 + 0x1094c + lVar14 * 0x2c);
        uVar11 = *(ulong *)(puVar12 + 9);
        local_c0._0_4_ = *puVar12;
        local_c0._4_4_ = puVar12[1];
        uVar3 = *(undefined8 *)(puVar12 + 2);
        local_a0 = puVar12[8];
        local_b8 = (undefined2)uVar3;
        uStack_b6 = (undefined1)((ulong)uVar3 >> 0x10);
        cStack_b5 = (char)((ulong)uVar3 >> 0x18);
        uStack_b4 = (uint)((ulong)uVar3 >> 0x20);
        local_b0 = (undefined4)*(undefined8 *)(puVar12 + 4);
        uStack_ac = (undefined4)((ulong)*(undefined8 *)(puVar12 + 4) >> 0x20);
        if (1 < local_a0) {
          local_a0 = 0;
        }
        local_a8 = (undefined4)*(undefined8 *)(puVar12 + 6);
        uStack_a4 = (undefined4)((ulong)*(undefined8 *)(puVar12 + 6) >> 0x20);
        local_9c = uVar11;
        uVar10 = FUN_0277d6c4(&local_c0);
        if (*(long *)puVar7 == 0) {
          return;
        }
        lVar17 = *(long *)(lVar17 + 0x57e58);
        uVar10 = (uVar10 & 0xffff) - (uint)*(ushort *)(lVar17 + 0x1f8);
        if (*(uint *)(lVar17 + 0x1d8) <= uVar10) {
          return;
        }
        if (*(long *)(*(long *)(lVar17 + 0x1e0) + (long)(int)uVar10 * 8) == 0) {
          return;
        }
        if ((param_8 & 1) != 0) {
          FUN_026b3b80(param_1,lVar14,1);
        }
        FUN_0268e6d0(param_1,&local_c0,&local_b8,uVar11 & 0xffffffff,uVar11 >> 0x20,
                     (uVar11 & 0xff0000000000) != 0,0,param_8 & 1);
        return;
      }
    }
  }
LAB_0268eb58:
  DAT_05405fd0 = *puVar1;
  DAT_05405fd2 = *(undefined1 *)(param_1 + 0x125ee);
  DAT_05405fd3 = *(undefined1 *)(param_1 + 0x125ef);
  DAT_05405fd4 = *(undefined4 *)(param_1 + 0x125f0);
  if ((param_8 & 1) != 0) {
    local_64 = *(int *)(param_1 + 0x12610);
    if ((local_64 != 7) && (local_64 != 0)) {
      lVar14 = *(long *)puVar7;
      uVar10 = FUN_0277d6c4(puVar1);
      if (*(long *)puVar7 != 0) {
        lVar14 = *(long *)(lVar14 + 0x57e58);
        uVar10 = (uVar10 & 0xffff) - (uint)*(ushort *)(lVar14 + 0x1f8);
        if ((uVar10 < *(uint *)(lVar14 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar14 + 0x1e0) + (long)(int)uVar10 * 8) != 0)) {
          FUN_01ad5d04(&local_c0,puVar1);
          local_68 = FUN_01ad9fd0(&local_c0);
          if (local_68 != 0xac) {
            FUN_026b3eb8(param_1,puVar1,1);
          }
        }
      }
    }
    local_a8 = CONCAT31(local_a8._1_3_,2);
    local_c0._0_4_ = 0;
    local_c0._4_4_ = 0;
    local_b8 = 0;
    uStack_b6 = 0;
    cStack_b5 = 0;
    uStack_b4 = 0;
    local_b0 = 0;
    uStack_ac = 0;
    puVar12 = &uStack_a4;
    if (param_3 != (undefined4 *)0x0) {
      puVar12 = param_3;
    }
    uStack_a4 = 0;
    local_a0 = 0;
    local_9c = 0;
    local_94 = 0;
    local_8c = 0;
    uVar9 = FUN_021d7d60(param_1);
    FUN_027d2090(puVar1,&local_78,puVar12,param_4,param_5,0);
    if ((param_6 & 1) != 0) {
      *(undefined1 *)(param_1 + 0x12615) = 1;
    }
    FUN_020ed39c(uVar9,5,puVar1);
  }
  return;
}


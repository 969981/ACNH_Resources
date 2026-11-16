
uint FUN_02536850(byte *param_1,short *param_2,uint param_3,undefined1 param_4,undefined1 param_5)

{
  undefined4 *puVar1;
  undefined *puVar2;
  int iVar3;
  short sVar4;
  undefined *puVar5;
  bool bVar6;
  uint uVar7;
  ulong uVar8;
  uint *puVar9;
  undefined **ppuVar10;
  ushort uVar11;
  uint uVar12;
  uint *puVar13;
  byte bVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  undefined8 local_88;
  undefined4 local_80;
  uint local_7c;
  undefined8 local_78;
  undefined4 local_70;
  uint local_6c;
  undefined8 local_68;
  undefined8 local_60;
  uint local_58;
  uint local_54;
  
  puVar5 = PTR_DAT_04bb43c0;
  sVar4 = *(short *)PTR_DAT_04bb6298;
  if (sVar4 != -1) {
    local_78 = (undefined **)CONCAT44(local_78._4_4_,0x20);
    puVar2 = PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar4 * 8;
    if (0xff < (uint)(int)sVar4) {
      puVar2 = PTR_DAT_04bc39f8;
    }
    if ((*(uint *)(puVar2 + 4) & 1) != 0) {
      if (*param_1 < 8) {
        uVar7 = FUN_02582d8c(param_1,1);
        puVar5 = PTR_DAT_04bb4fb8;
        if (((uVar7 < 8) &&
            (*(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar7 * 0x13f0 + 0x13d4) != '\0')) &&
           (*(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar7 * 0x13f0 + 0x13d6) != '\0')) {
          uVar7 = FUN_02582d8c(param_1,1);
          puVar2 = PTR_DAT_04bb43c0;
          if ((uVar7 < 8) && (*(char *)(*(long *)puVar5 + (ulong)uVar7 * 0x13f0 + 0x13d4) != '\0'))
          {
            lVar15 = *(long *)puVar5 + (ulong)uVar7 * 0x13f0;
            iVar3 = *(int *)(lVar15 + 0x13b8);
            lVar16 = *(long *)PTR_DAT_04bb43c0;
            uVar7 = FUN_0277d6c4(param_2);
            lVar17 = *(long *)puVar2;
            if (lVar17 != 0) {
              lVar16 = *(long *)(lVar16 + 0x57e58);
              uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar16 + 0x1f8);
              if ((uVar7 < *(uint *)(lVar16 + 0x1d8)) &&
                 (*(long *)(*(long *)(lVar16 + 0x1e0) + (long)(int)uVar7 * 8) != 0)) {
                local_80 = *(undefined4 *)param_2;
                local_7c = *(uint *)(param_2 + 2);
                puVar1 = (undefined4 *)(lVar15 + 0x13b8);
                local_78 = (undefined **)0x0;
                local_88 = (undefined **)(PTR_DAT_04bc0510 + 0x10);
                uVar7 = FUN_0277d6c4(&local_80);
                puVar9 = (uint *)0x0;
                if (DAT_053274a0 != 0) {
                  lVar15 = *(long *)(lVar17 + 0x57e58);
                  uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar15 + 0x1f8);
                  if (uVar7 < *(uint *)(lVar15 + 0x1d8)) {
                    puVar9 = (uint *)0x0;
                    if (*(long *)(*(long *)(lVar15 + 0x1e0) + (long)(int)uVar7 * 8) != 0) {
                      lVar15 = *(long *)PTR_DAT_04bc0428;
                      uVar7 = FUN_0277d6c4(param_2);
                      uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar15 + 0x1f8);
                      if (*(uint *)(lVar15 + 0x1d8) <= uVar7) goto LAB_02536d6c;
                      puVar9 = *(uint **)(*(long *)(lVar15 + 0x1e0) + (long)(int)uVar7 * 8);
                    }
                  }
                  else {
LAB_02536d6c:
                    puVar9 = (uint *)0x0;
                  }
                }
                if (iVar3 == 2) {
                  *puVar1 = 0;
                  if ((((*param_1 < 8) && (uVar7 = FUN_02582d8c(param_1,1), uVar7 < 8)) &&
                      (*(char *)(*(long *)puVar5 + (ulong)uVar7 * 0x13f0 + 0x13d4) != '\0')) &&
                     (((*(char *)(*(long *)puVar5 + (ulong)uVar7 * 0x13f0 + 0x13d6) != '\0' &&
                       (uVar7 = FUN_02582d8c(param_1,1), uVar7 < 8)) &&
                      (*(char *)(*(long *)puVar5 + (ulong)uVar7 * 0x13f0 + 0x13d4) != '\0')))) {
                    lVar15 = *(long *)puVar5 + (ulong)uVar7 * 0x13f0;
                    iVar3 = *(int *)(lVar15 + 0x13b8);
                    local_68 = CONCAT44(local_68._4_4_,iVar3);
                    sVar4 = *param_2;
                    if (iVar3 == 2) {
                      if (sVar4 == -2) {
                        local_68 = 2;
                        *(undefined4 *)(lVar15 + 0x13c8) = 0;
                      }
                    }
                    else if (iVar3 == 1) {
                      *(short *)(lVar15 + 0x13c0) = sVar4;
                      *(char *)(lVar15 + 0x13c2) = (char)param_2[1];
                      *(undefined1 *)(lVar15 + 0x13c3) = *(undefined1 *)((long)param_2 + 3);
                      *(undefined4 *)(lVar15 + 0x13c4) = *(undefined4 *)(param_2 + 2);
                    }
                    else if (iVar3 == 0) {
                      if (sVar4 == -2) {
                        *(undefined4 *)(lVar15 + 0x13bc) = DAT_0559bc2c;
                      }
                      else {
                        *(uint *)(lVar15 + 0x13bc) = param_3;
                      }
                    }
                  }
                  uVar7 = 1;
                  FUN_02538e78(param_1,param_2,9,1,0);
                  FUN_0274bfe8(param_1,&DAT_054f5728,0);
                  goto LAB_02536d48;
                }
                if (puVar9 == (uint *)0x0) {
                  uVar11 = 0xbc;
                }
                else {
                  uVar7 = *puVar9;
                  uVar11 = 0;
                  if ((uVar7 != 0) && (puVar9 != (uint *)(ulong)uVar7)) {
                    puVar13 = (uint *)((long)puVar9 - (long)(ulong)uVar7);
                    uVar11 = 0;
                    if (*puVar13 != 0) {
                      uVar7 = puVar13[1];
                      if ((uVar7 != 0) && ((ulong)(ushort)puVar13[2] != 0)) {
                        lVar15 = 0xc;
                        if (*(char *)((long)puVar13 + 10) != '\0') {
                          lVar15 = 0x1c;
                        }
                        lVar15 = (long)puVar13 + lVar15 + (ulong)(ushort)puVar13[2] * 8;
                        if (lVar15 != 0) {
                          uVar12 = 0;
                          if ((ulong)uVar7 != 0) {
                            uVar12 = (uint)((ulong)((long)puVar9 - lVar15) / (ulong)uVar7);
                          }
                          if (*puVar13 <= uVar12) {
                            uVar12 = 0xffffffff;
                          }
                          if ((uVar12 < DAT_05326ec0) &&
                             (uVar11 = *(ushort *)(DAT_05326ec8 + (long)(int)uVar12 * 2),
                             uVar11 < 0xbd)) goto LAB_02536ee0;
                        }
                      }
                      uVar11 = 0;
                    }
                  }
                }
LAB_02536ee0:
                if ((uVar11 != 0x78) && (iVar3 == 1)) {
                  *puVar1 = 0;
                }
              }
            }
            puVar2 = PTR_DAT_04bb43c0;
            if (((((*param_1 < 8) && (uVar7 = FUN_02582d8c(param_1,1), uVar7 < 8)) &&
                 (*(char *)(*(long *)puVar5 + (ulong)uVar7 * 0x13f0 + 0x13d4) != '\0')) &&
                ((*(char *)(*(long *)puVar5 + (ulong)uVar7 * 0x13f0 + 0x13d6) != '\0' &&
                 (uVar7 = FUN_02582d8c(param_1,1), uVar7 < 8)))) &&
               (*(char *)(*(long *)puVar5 + (ulong)uVar7 * 0x13f0 + 0x13d4) != '\0')) {
              lVar15 = *(long *)puVar5 + (ulong)uVar7 * 0x13f0;
              iVar3 = *(int *)(lVar15 + 0x13b8);
              local_68 = CONCAT44(iVar3,(undefined4)local_68);
              sVar4 = *param_2;
              if (iVar3 == 2) {
                if (sVar4 == -2) {
                  local_88 = (undefined **)((ulong)local_88 & 0xffffffff00000000);
                  *(undefined4 *)(lVar15 + 0x13c8) = 0;
                }
              }
              else if (iVar3 == 1) {
                *(short *)(lVar15 + 0x13c0) = sVar4;
                *(char *)(lVar15 + 0x13c2) = (char)param_2[1];
                *(undefined1 *)(lVar15 + 0x13c3) = *(undefined1 *)((long)param_2 + 3);
                *(undefined4 *)(lVar15 + 0x13c4) = *(undefined4 *)(param_2 + 2);
              }
              else if (iVar3 == 0) {
                if (sVar4 == -2) {
                  *(undefined4 *)(lVar15 + 0x13bc) = DAT_0559bc2c;
                }
                else {
                  *(uint *)(lVar15 + 0x13bc) = param_3;
                }
              }
            }
            lVar16 = *(long *)puVar2;
            uVar7 = FUN_0277d6c4(param_2);
            lVar15 = *(long *)puVar2;
            if (lVar15 == 0) {
LAB_02537198:
              bVar6 = true;
            }
            else {
              lVar16 = *(long *)(lVar16 + 0x57e58);
              uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar16 + 0x1f8);
              if ((*(uint *)(lVar16 + 0x1d8) <= uVar7) ||
                 (*(long *)(*(long *)(lVar16 + 0x1e0) + (long)(int)uVar7 * 8) == 0))
              goto LAB_02537198;
              local_78 = (undefined **)0x0;
              local_80 = *(undefined4 *)param_2;
              local_7c = *(uint *)(param_2 + 2);
              local_88 = &PTR_FUN_04a36b50;
              uVar7 = FUN_0277d6c4(&local_80);
              if (*(long *)puVar2 != 0) {
                lVar15 = *(long *)(lVar15 + 0x57e58);
                uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar15 + 0x1f8);
                if ((uVar7 < *(uint *)(lVar15 + 0x1d8)) &&
                   (*(long *)(*(long *)(lVar15 + 0x1e0) + (long)(int)uVar7 * 8) != 0)) {
                  lVar15 = *(long *)PTR_DAT_04bc0428;
                  uVar7 = FUN_0277d6c4(param_2);
                  uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar15 + 0x1f8);
                  if (uVar7 < *(uint *)(lVar15 + 0x1d8)) {
                    ppuVar10 = *(undefined ***)(*(long *)(lVar15 + 0x1e0) + (long)(int)uVar7 * 8);
                    if (ppuVar10 != (undefined **)0x0) {
                      local_78 = ppuVar10;
                    }
                  }
                }
              }
              local_70 = (uint)local_70._2_2_ << 0x10;
              FUN_01adab50(&local_88,&local_70);
              uVar7 = 0;
              do {
                local_6c = uVar7;
                if (local_6c != 0) {
                  local_68 = CONCAT44(local_68._4_4_,local_6c);
                  if (local_6c < 0xe) {
                    local_68 = CONCAT44(local_6c,local_6c);
                    uVar7 = local_6c + 7;
                    if (-1 < (int)local_6c) {
                      uVar7 = local_6c;
                    }
                    if ((uint)((int)uVar7 >> 3) < 2) {
                      local_68 = CONCAT44(local_6c,local_6c);
                      uVar12 = local_6c;
                      if ((*(byte *)((long)&local_70 + (ulong)(uint)((int)uVar7 >> 3)) >>
                           (ulong)(local_6c & 7) & 1) != 0) goto LAB_0253729c;
                    }
                  }
                }
                uVar7 = local_6c + 1;
              } while (local_6c + 1 != 0xe);
              uVar12 = 0;
LAB_0253729c:
              bVar6 = uVar12 != 9;
            }
            bVar14 = *param_1;
            local_80 = *(undefined4 *)(param_2 + 2);
            local_88 = (undefined **)CONCAT44(*(undefined4 *)param_2,(undefined4)local_88);
            if (7 < bVar14) {
              bVar14 = 0xff;
            }
            local_88 = (undefined **)CONCAT71(local_88._1_7_,bVar14);
            local_78 = (undefined **)
                       ((CONCAT26(local_78._6_2_,
                                  CONCAT15(param_5,CONCAT14(param_4,(undefined4)local_78))) &
                         0xffff0101ffffffff ^ 0xff0000000000) & 0xffff01ffffffffff);
            if (bVar6) {
              local_7c = 0;
              param_3 = 0xffffffff;
            }
            else {
              if (param_3 < 0x28) {
                lVar15 = FUN_02677ea0(param_1,param_3);
                uVar8 = FUN_0277d7b4(lVar15,param_2);
                if ((((uVar8 & 1) == 0) || (*(char *)(lVar15 + 3) != *(char *)((long)param_2 + 3)))
                   || (*(int *)(lVar15 + 4) != *(int *)(param_2 + 2))) {
                  param_3 = FUN_026788f0(param_1,param_2);
                }
                if (param_3 < 0x14) {
                  local_7c = 0;
                  goto LAB_02537284;
                }
              }
              param_3 = param_3 - 0x14;
              local_7c = (uint)(param_3 < 0x14);
              if (param_3 >= 0x14) {
                param_3 = 0xffffffff;
              }
            }
LAB_02537284:
            local_78 = (undefined **)CONCAT44(local_78._4_4_,param_3);
            uVar7 = FUN_02537348(&local_88);
            goto LAB_02536d48;
          }
        }
      }
      uVar7 = 0;
LAB_02536d48:
      return uVar7 & 1;
    }
  }
  lVar16 = *(long *)PTR_DAT_04bb43c0;
  uVar7 = FUN_0277d6c4(param_2);
  lVar15 = *(long *)puVar5;
  if (lVar15 == 0) {
LAB_02536a68:
    bVar6 = true;
  }
  else {
    lVar16 = *(long *)(lVar16 + 0x57e58);
    uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar16 + 0x1f8);
    if ((*(uint *)(lVar16 + 0x1d8) <= uVar7) ||
       (*(long *)(*(long *)(lVar16 + 0x1e0) + (long)(int)uVar7 * 8) == 0)) goto LAB_02536a68;
    local_68 = 0;
    local_70 = *(int *)param_2;
    local_6c = *(uint *)(param_2 + 2);
    local_78 = &PTR_FUN_04a36b50;
    uVar7 = FUN_0277d6c4(&local_70);
    if (*(long *)puVar5 != 0) {
      lVar15 = *(long *)(lVar15 + 0x57e58);
      uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar15 + 0x1f8);
      if ((uVar7 < *(uint *)(lVar15 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar15 + 0x1e0) + (long)(int)uVar7 * 8) != 0)) {
        lVar15 = *(long *)PTR_DAT_04bc0428;
        uVar7 = FUN_0277d6c4(param_2);
        uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar15 + 0x1f8);
        if (uVar7 < *(uint *)(lVar15 + 0x1d8)) {
          lVar15 = *(long *)(*(long *)(lVar15 + 0x1e0) + (long)(int)uVar7 * 8);
          if (lVar15 != 0) {
            local_68 = lVar15;
          }
        }
      }
    }
    local_60 = local_60 & 0xffffffffffff0000;
    FUN_01adab50(&local_78,&local_60);
    uVar7 = 0;
    do {
      local_60 = CONCAT44(uVar7,(undefined4)local_60);
      if (uVar7 != 0) {
        _local_58 = CONCAT44(local_54,uVar7);
        if (uVar7 < 0xe) {
          _local_58 = CONCAT44(uVar7,uVar7);
          uVar12 = uVar7 + 7;
          if (-1 < (int)uVar7) {
            uVar12 = uVar7;
          }
          if (((uint)((int)uVar12 >> 3) < 2) &&
             (_local_58 = CONCAT44(uVar7,uVar7),
             (*(byte *)((long)&local_60 + (ulong)(uint)((int)uVar12 >> 3)) >> (ulong)(uVar7 & 7) & 1
             ) != 0)) goto LAB_02536b84;
        }
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 != 0xe);
    uVar7 = 0;
LAB_02536b84:
    bVar6 = uVar7 != 9;
  }
  bVar14 = *param_1;
  local_68 = CONCAT35(local_68._5_3_,CONCAT14(param_4,(undefined4)local_68)) & 0xffffff01ffffffff;
  local_70 = *(int *)(param_2 + 2);
  local_78 = (undefined **)CONCAT44(*(undefined4 *)param_2,(undefined4)local_78);
  if (7 < bVar14) {
    bVar14 = 0xff;
  }
  local_78 = (undefined **)CONCAT71(local_78._1_7_,bVar14);
  local_68 = (CONCAT26(local_68._6_2_,CONCAT15(param_5,(undefined5)local_68)) ^ 0xff0000000000) &
             0xffff01ffffffffff;
  if (bVar6) {
    local_6c = 0;
    param_3 = 0xffffffff;
  }
  else {
    if (param_3 < 0x28) {
      lVar15 = FUN_02677ea0(param_1,param_3);
      uVar8 = FUN_0277d7b4(lVar15,param_2);
      if ((((uVar8 & 1) == 0) || (*(char *)(lVar15 + 3) != *(char *)((long)param_2 + 3))) ||
         (*(int *)(lVar15 + 4) != *(int *)(param_2 + 2))) {
        param_3 = FUN_026788f0(param_1,param_2);
      }
      if (param_3 < 0x14) {
        local_6c = 0;
        goto LAB_02536b54;
      }
    }
    param_3 = param_3 - 0x14;
    local_6c = (uint)(param_3 < 0x14);
    if (param_3 >= 0x14) {
      param_3 = 0xffffffff;
    }
  }
LAB_02536b54:
  local_68 = CONCAT44(local_68._4_4_,param_3);
  uVar7 = FUN_02537348(&local_78);
  return uVar7 & 1;
}


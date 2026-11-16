
/* WARNING: Type propagation algorithm not settling */

void FUN_02646860(uint *param_1,ulong param_2)

{
  ulong uVar1;
  uint *puVar2;
  uint *puVar3;
  uint *puVar4;
  bool bVar5;
  undefined *puVar6;
  undefined8 *******pppppppuVar7;
  bool bVar8;
  undefined8 *puVar9;
  uint *puVar10;
  long *plVar11;
  uint uVar12;
  long lVar13;
  long *plVar14;
  ulong uVar15;
  byte bVar16;
  byte bVar17;
  uint uVar18;
  long lVar19;
  long lVar20;
  uint *puVar21;
  ulong uVar22;
  byte *pbVar23;
  long lVar24;
  ulong uVar25;
  int *piVar26;
  uint *puVar27;
  int iVar28;
  int local_120 [2];
  undefined1 *local_118;
  undefined8 *******local_110;
  undefined8 *******pppppppuStack_108;
  undefined8 *******local_100;
  undefined8 ******local_f8;
  undefined8 *****local_f0;
  undefined8 ****local_e8;
  undefined8 ***local_e0;
  undefined8 **local_d8;
  undefined8 *local_d0;
  undefined8 local_c8;
  undefined1 local_c0 [64];
  undefined *local_80;
  char *pcStack_78;
  undefined8 local_70;
  
  lVar24 = *(long *)(param_1 + 2);
  if (lVar24 == 0) {
    return;
  }
  puVar10 = param_1;
  if (*(long *)(lVar24 + 0x28) != 0) {
    puVar9 = *(undefined8 **)(*(long *)(lVar24 + 0x28) + 0x10);
    puVar10 = (uint *)0x0;
    if (puVar9 != (undefined8 *)0x0) {
      puVar10 = (uint *)(**(code **)*puVar9)();
      uVar25 = (ulong)puVar10 & 0xffffffff;
      goto LAB_026468b8;
    }
  }
  uVar25 = 0;
LAB_026468b8:
  puVar6 = PTR_DAT_04bb49f8;
  local_120[0] = 0;
  local_120[1] = 0;
  local_118 = (undefined1 *)0x0;
  local_100 = &local_f8;
  local_f8 = &local_f0;
  local_f0 = &local_e8;
  local_e8 = &local_e0;
  local_e0 = &local_d8;
  local_d8 = &local_d0;
  local_d0 = &local_c8;
  local_c8 = 0;
  local_110 = &local_100;
  pppppppuStack_108 = &local_100;
  if (local_c0 != (undefined1 *)0x0) {
    local_118 = local_c0;
    local_120[0] = 0;
    local_120[1] = 8;
  }
  if (((*(int *)(*(long *)PTR_DAT_04bb21d0 + 0x78) == 0) ||
      (*(int *)(*(long *)PTR_DAT_04bb21d0 + 0xc4) != 0)) ||
     (*(byte *)(**(long **)PTR_DAT_04bb27d0 + 0x476) < 2)) {
    piVar26 = (int *)0x0;
  }
  else {
    iVar28 = 0;
    uVar18 = 0;
    do {
      pppppppuVar7 = local_110;
      lVar20 = **(long **)PTR_DAT_04bb27d0;
      bVar16 = *(byte *)(lVar20 + 0x473);
      if ((long)(char)bVar16 != 0xffffffffffffffff) {
        puVar27 = (uint *)(lVar20 + 0x48);
        puVar10 = puVar27 + ((long)(char)bVar16 & 0xffffffffU) * 0x20;
        puVar3 = puVar10;
        if (7 < bVar16) {
          puVar3 = puVar27;
        }
        pbVar23 = PTR_DAT_04bc1220;
        if ((*puVar3 & 8) != 0) {
          pbVar23 = (byte *)(lVar20 + 0x473);
        }
        if ((((uVar18 ^ 0xffffffff) & 0xff) != 0) &&
           ((uint)*pbVar23 != (uVar18 & 0xff) && (*puVar3 & 8) != 0)) {
          uVar22 = (long)(char)uVar18 & 0xffffffff;
          puVar3 = puVar27 + uVar22 * 0x20;
          if ((uVar18 & 0xf8) != 0) {
            puVar3 = puVar27;
          }
          if (((byte)*puVar3 >> 3 & 1) != 0) {
            plVar11 = (long *)(*(long *)PTR_DAT_04bbaed0 + 0xd8) + uVar22 * 6;
            if ((uVar18 & 0xf8) != 0) {
              plVar11 = (long *)(*(long *)PTR_DAT_04bbaed0 + 0xd8);
            }
            if (iVar28 < local_120[1]) {
              if (local_110 != (undefined8 *******)0x0) {
                local_110 = (undefined8 *******)*local_110;
              }
              *pppppppuVar7 = (undefined8 ******)*plVar11;
              iVar28 = local_120[0];
              if (local_120[0] < local_120[1]) {
                *(undefined8 ********)(local_118 + (long)local_120[0] * 8) = pppppppuVar7;
                iVar28 = local_120[0] + 1;
                local_120[0] = iVar28;
              }
            }
          }
        }
      }
      uVar18 = uVar18 + 1;
    } while (uVar18 != 8);
    piVar26 = local_120;
  }
  if ((param_2 & 1) != 0) {
    if (*(long *)(lVar24 + 0x28) != 0) {
      plVar11 = *(long **)(*(long *)(lVar24 + 0x28) + 0x20);
      puVar10 = (uint *)0x0;
      if (plVar11 != (long *)0x0) {
        local_80 = *(undefined **)(lVar24 + 8);
        pcStack_78 = *(char **)(lVar24 + 0x10);
        local_70 = 0xb548;
        puVar10 = (uint *)(**(code **)(*plVar11 + 0x20))(plVar11,&local_80);
      }
    }
    lVar20 = *(long *)puVar6;
    uVar18 = *(uint *)(lVar20 + 0x28);
    if (uVar18 != 0xffffffff) {
      if (*(uint *)(lVar20 + 8) <= uVar18) {
        uVar18 = 0;
      }
      lVar20 = *(long *)(lVar20 + 0x10) + (long)(int)uVar18 * 0x40;
      if (((*(byte *)(lVar20 + 0x31) ^ 0xff) & 0xe) == 0) {
        plVar11 = *(long **)(lVar20 + 0x28);
        lVar20 = 0;
        bVar5 = false;
        puVar27 = (uint *)(*(long *)(lVar24 + 0x10) + *(long *)(lVar24 + 8));
        puVar3 = (uint *)*plVar11;
        puVar4 = (uint *)plVar11[1];
        puVar21 = (uint *)plVar11[2];
        do {
          uVar22 = (ulong)puVar27[lVar20 + 0x2bc0];
          puVar10 = puVar27 + uVar22 * 0x1c;
          if (399 < puVar27[lVar20 + 0x2bc0]) {
            puVar10 = puVar27;
          }
          if ((puVar3 != (uint *)0x0) && (puVar3[4] != 0)) {
            uVar18 = 0;
            do {
              lVar13 = (long)(int)uVar18;
              if (*puVar3 <= uVar18) {
                lVar13 = 0;
              }
              if (*(long *)(*(long *)(puVar3 + 2) + lVar13 * 8) == *(long *)puVar10) {
                bVar16 = *(byte *)((long)puVar10 + 0x6e);
                if (uVar18 == 0xffffffff) goto LAB_02646b80;
                *(byte *)((long)puVar10 + 0x6e) = bVar16 | 2;
                puVar2 = puVar27 + (ulong)puVar27[lVar20 + 0x2bc0] * 0x1c;
                if (399 < puVar27[lVar20 + 0x2bc0]) {
                  puVar2 = puVar27;
                }
                bVar5 = (bool)(((bVar16 ^ 0xff) & 6) != 0 | bVar5);
                uVar18 = *(byte *)((long)puVar2 + 0x6e) | 4;
                puVar10 = (uint *)(ulong)uVar18;
                *(char *)((long)puVar2 + 0x6e) = (char)uVar18;
                goto LAB_02646b18;
              }
              uVar18 = uVar18 + 1;
            } while (puVar3[4] != uVar18);
          }
          bVar16 = *(byte *)((long)puVar10 + 0x6e);
LAB_02646b80:
          if (((bVar16 ^ 0xff) & 6) == 0) {
            if ((piVar26 != (int *)0x0) && (*piVar26 != 0)) {
              puVar9 = *(undefined8 **)(piVar26 + 2);
              lVar13 = (long)*piVar26 << 3;
              do {
                if (*(long *)*puVar9 == *(long *)puVar10) goto LAB_02646b18;
                puVar9 = puVar9 + 1;
                lVar13 = lVar13 + -8;
              } while (lVar13 != 0);
            }
            *(byte *)((long)puVar10 + 0x6e) = bVar16 & 0xf9;
            bVar5 = true;
            uVar22 = (ulong)puVar27[lVar20 + 0x2bc0];
          }
          puVar10 = puVar27 + uVar22 * 0x1c;
          if (399 < uVar22) {
            puVar10 = puVar27;
          }
          if ((puVar4 != (uint *)0x0) && (puVar4[4] != 0)) {
            uVar18 = 0;
            do {
              lVar13 = (long)(int)uVar18;
              if (*puVar4 <= uVar18) {
                lVar13 = 0;
              }
              if (*(long *)(*(long *)(puVar4 + 2) + lVar13 * 0x30 + 8) == *(long *)puVar10) {
                bVar17 = *(byte *)((long)puVar10 + 0x6e);
                bVar16 = bVar17 & 6;
                if (uVar18 == 0xffffffff) goto joined_r0x02646d3c;
                if (bVar16 == 2) goto LAB_02646c4c;
                *(byte *)((long)puVar10 + 0x6e) = bVar17 | 2;
                goto LAB_02646c48;
              }
              uVar18 = uVar18 + 1;
            } while (puVar4[4] != uVar18);
          }
          bVar17 = *(byte *)((long)puVar10 + 0x6e);
          bVar16 = bVar17 & 6;
joined_r0x02646d3c:
          if (bVar16 == 2) {
            *(byte *)((long)puVar10 + 0x6e) = bVar17 & 0xfd;
            bVar5 = true;
LAB_02646c48:
            uVar22 = (ulong)puVar27[lVar20 + 0x2bc0];
          }
LAB_02646c4c:
          puVar10 = puVar27 + uVar22 * 0x1c;
          if (399 < uVar22) {
            puVar10 = puVar27;
          }
          if ((puVar21 != (uint *)0x0) && (puVar21[4] != 0)) {
            uVar18 = 0;
            do {
              lVar13 = (long)(int)uVar18;
              if (*puVar21 <= uVar18) {
                lVar13 = 0;
              }
              if (*(long *)(*(long *)(puVar21 + 2) + lVar13 * 0x30 + 8) == *(long *)puVar10) {
                puVar10 = puVar27 + uVar22 * 0x1c;
                if (399 < uVar22) {
                  puVar10 = puVar27;
                }
                pbVar23 = (byte *)((long)puVar10 + 0x6e);
                bVar16 = *pbVar23;
                uVar12 = bVar16 & 6;
                if (uVar18 == 0xffffffff) goto LAB_02646cc0;
                bVar8 = uVar12 != 4;
                uVar18 = bVar16 | 4;
                goto LAB_02646b14;
              }
              uVar18 = uVar18 + 1;
            } while (puVar21[4] != uVar18);
          }
          puVar10 = puVar27 + uVar22 * 0x1c;
          if (399 < uVar22) {
            puVar10 = puVar27;
          }
          pbVar23 = (byte *)((long)puVar10 + 0x6e);
          bVar16 = *pbVar23;
          uVar12 = bVar16 & 6;
LAB_02646cc0:
          bVar8 = uVar12 == 4;
          uVar18 = bVar16 & 0xfffffffb;
LAB_02646b14:
          bVar5 = (bool)(bVar8 | bVar5);
          puVar10 = (uint *)(ulong)uVar18;
          *pbVar23 = (byte)uVar18;
LAB_02646b18:
          lVar20 = lVar20 + 1;
        } while (lVar20 != 400);
        if (bVar5) {
          local_80 = PTR_DAT_04bb2020 + 0x10;
          pcStack_78 = "FriendListNotifyLook";
          FUN_0274bfe8(param_1,&local_80,1);
          bVar16 = (byte)*param_1;
          if (7 < bVar16) {
            bVar16 = 0xff;
          }
          local_80 = (undefined *)CONCAT71(local_80._1_7_,bVar16);
          puVar10 = (uint *)FUN_02f095f0(&local_80);
        }
      }
    }
  }
  if (*(long *)(lVar24 + 0x28) != 0) {
    plVar11 = *(long **)(*(long *)(lVar24 + 0x28) + 0x20);
    puVar10 = (uint *)0x0;
    if (plVar11 != (long *)0x0) {
      local_80 = *(undefined **)(lVar24 + 8);
      pcStack_78 = *(char **)(lVar24 + 0x10);
      local_70 = 0xb548;
      puVar10 = (uint *)(**(code **)(*plVar11 + 0x20))(plVar11,&local_80);
    }
  }
  lVar20 = *(long *)puVar6;
  uVar18 = *(uint *)(lVar20 + 0x28);
  if (uVar18 != 0xffffffff) {
    if (*(uint *)(lVar20 + 8) <= uVar18) {
      uVar18 = 0;
    }
    lVar20 = *(long *)(lVar20 + 0x10) + (long)(int)uVar18 * 0x40;
    if (*(char *)(lVar20 + 0x39) != '\0') {
      uVar18 = *(uint *)(lVar20 + 0x20);
      lVar13 = 0;
      bVar16 = 0;
      plVar11 = (long *)(*(long *)(lVar24 + 0x10) + *(long *)(lVar24 + 8));
      do {
        uVar12 = *(uint *)((long)plVar11 + lVar13 * 4 + 0xaf00);
        plVar14 = plVar11 + (ulong)uVar12 * 0xe;
        if (399 < uVar12) {
          plVar14 = plVar11;
        }
        if (0 < (int)uVar18) {
          puVar27 = (uint *)plVar14[1];
          uVar15 = 0;
          uVar22 = (ulong)uVar18;
          do {
            if (*(uint *)(lVar20 + 0x10) <= (uint)uVar15 || *(long *)(lVar20 + 0x18) == 0) break;
            puVar10 = (uint *)nn::friends::Friend::GetAccountId();
            if (puVar10 == puVar27) {
              uVar12 = *(uint *)((long)plVar11 + lVar13 * 4 + 0xaf00);
              plVar14 = plVar11 + (ulong)uVar12 * 0xe;
              if (399 < uVar12) {
                plVar14 = plVar11;
              }
              if ((*(byte *)((long)plVar14 + 0x6e) & 1) == 0) {
                bVar16 = 1;
                lVar19 = *(long *)PTR_DAT_04bb8930;
                uVar12 = 0;
                if (*(uint *)(lVar19 + 0x18) != 0xffffffff) {
                  uVar12 = *(uint *)(lVar19 + 0x18);
                }
                if (*(uint *)(lVar19 + 8) <= uVar12) {
                  uVar12 = 0;
                }
                *(undefined4 *)(*(long *)(lVar19 + 0x10) + (long)(int)uVar12 * 0x58 + 0x50) = 0x1e;
                uVar12 = *(uint *)((long)plVar11 + lVar13 * 4 + 0xaf00);
              }
              plVar14 = plVar11 + (ulong)uVar12 * 0xe;
              if (399 < uVar12) {
                plVar14 = plVar11;
              }
              bVar17 = *(byte *)((long)plVar14 + 0x6e) | 1;
              goto LAB_02646e54;
            }
            uVar1 = (uVar22 & 0xffffffff00000000) + 0x100000000;
            uVar15 = uVar1 >> 0x20;
            iVar28 = (int)uVar22;
            uVar22 = uVar1 | uVar22 & 0xffffffff;
          } while ((int)(uVar1 >> 0x20) < iVar28);
          uVar12 = *(uint *)((long)plVar11 + lVar13 * 4 + 0xaf00);
        }
        plVar14 = plVar11 + (ulong)uVar12 * 0xe;
        if (399 < uVar12) {
          plVar14 = plVar11;
        }
        bVar16 = *(byte *)((long)plVar14 + 0x6e) | bVar16;
        *(byte *)((long)plVar14 + 0x6e) = *(byte *)((long)plVar14 + 0x6e) & 0xfe;
        if (piVar26 == (int *)0x0) {
          uVar22 = (ulong)*(uint *)((long)plVar11 + lVar13 * 4 + 0xaf00);
        }
        else {
          uVar22 = (ulong)*(uint *)((long)plVar11 + lVar13 * 4 + 0xaf00);
          if (*piVar26 != 0) {
            puVar9 = *(undefined8 **)(piVar26 + 2);
            lVar19 = (long)*piVar26 << 3;
            plVar14 = plVar11 + uVar22 * 0xe;
            if (399 < uVar22) {
              plVar14 = plVar11;
            }
            do {
              if (*(long *)*puVar9 == *plVar14) goto LAB_02646e58;
              puVar9 = puVar9 + 1;
              lVar19 = lVar19 + -8;
            } while (lVar19 != 0);
          }
        }
        plVar14 = plVar11 + uVar22 * 0xe;
        if (399 < uVar22) {
          plVar14 = plVar11;
        }
        bVar17 = (*(byte *)((long)plVar14 + 0x6e) & 2) << 2 | *(byte *)((long)plVar14 + 0x6e) & 0xf9
        ;
LAB_02646e54:
        *(byte *)((long)plVar14 + 0x6e) = bVar17;
LAB_02646e58:
        lVar13 = lVar13 + 1;
      } while (lVar13 != 400);
      if ((bVar16 & 1) != 0) {
        local_80 = PTR_DAT_04bb2020 + 0x10;
        pcStack_78 = "FriendListNotifyLook";
        FUN_0274bfe8(param_1,&local_80,1);
        bVar16 = (byte)*param_1;
        if (7 < bVar16) {
          bVar16 = 0xff;
        }
        local_80 = (undefined *)CONCAT71(local_80._1_7_,bVar16);
        puVar10 = (uint *)FUN_02f095f0(&local_80);
      }
    }
  }
  if (*(long *)(lVar24 + 0x28) != 0) {
    plVar11 = *(long **)(*(long *)(lVar24 + 0x28) + 0x20);
    puVar10 = (uint *)0x0;
    if (plVar11 != (long *)0x0) {
      local_80 = *(undefined **)(lVar24 + 8);
      pcStack_78 = *(char **)(lVar24 + 0x10);
      local_70 = 0xb548;
      puVar10 = (uint *)(**(code **)(*plVar11 + 0x20))(plVar11,&local_80);
    }
  }
  FUN_026463a0(puVar10,*(long *)(lVar24 + 0x10) + *(long *)(lVar24 + 8));
  if ((((uVar25 & 1) != 0) && (*(long *)(lVar24 + 0x28) != 0)) &&
     (puVar9 = *(undefined8 **)(*(long *)(lVar24 + 0x28) + 0x18), puVar9 != (undefined8 *)0x0)) {
    (**(code **)*puVar9)();
  }
  return;
}


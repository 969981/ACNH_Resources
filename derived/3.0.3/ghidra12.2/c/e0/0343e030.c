
ulong FUN_0343e030(undefined4 *param_1,undefined4 *param_2,uint param_3)

{
  undefined *puVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  uint uVar5;
  uint uVar6;
  undefined4 uVar7;
  int iVar8;
  ulong uVar9;
  uint uVar10;
  uint *puVar11;
  ushort uVar12;
  uint *puVar13;
  long lVar14;
  uint *puVar15;
  undefined *local_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  uint *local_b0;
  undefined *local_a8;
  undefined4 local_a0;
  undefined4 uStack_9c;
  uint *local_98;
  uint local_90;
  uint local_8c;
  undefined8 local_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  uint *local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  uint *local_60;
  uint local_58;
  uint local_54;
  
  puVar4 = PTR_DAT_04bc0510;
  puVar3 = PTR_DAT_04bb43c0;
  local_98 = (uint *)0x0;
  local_a0 = *param_1;
  uStack_9c = param_1[1];
  puVar1 = PTR_DAT_04bc0510 + 0x10;
  lVar14 = *(long *)PTR_DAT_04bb43c0;
  local_a8 = puVar1;
  uVar5 = FUN_0277d6c4(&local_a0);
  if (*(long *)puVar3 == 0) {
LAB_0343e104:
    puVar15 = (uint *)0x0;
  }
  else {
    lVar14 = *(long *)(lVar14 + 0x57e58);
    uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar14 + 0x1f8);
    if ((*(uint *)(lVar14 + 0x1d8) <= uVar5) ||
       (*(long *)(*(long *)(lVar14 + 0x1e0) + (long)(int)uVar5 * 8) == 0)) goto LAB_0343e104;
    lVar14 = *(long *)PTR_DAT_04bc0428;
    uVar5 = FUN_0277d6c4(param_1);
    uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar14 + 0x1f8);
    if (*(uint *)(lVar14 + 0x1d8) <= uVar5) goto LAB_0343e104;
    puVar15 = *(uint **)(*(long *)(lVar14 + 0x1e0) + (long)(int)uVar5 * 8);
    if (puVar15 != (uint *)0x0) {
      local_98 = puVar15;
    }
  }
  local_b8 = *param_2;
  uStack_b4 = param_2[1];
  lVar14 = *(long *)puVar3;
  local_b0 = (uint *)0x0;
  local_c0 = puVar1;
  uVar5 = FUN_0277d6c4(&local_b8);
  if (*(long *)puVar3 == 0) {
LAB_0343e1a8:
    puVar11 = (uint *)0x0;
joined_r0x0343e1b0:
    if (puVar15 == (uint *)0x0) goto LAB_0343e1b4;
LAB_0343e1d0:
    uVar10 = 0;
    uVar5 = *puVar15;
    if ((uVar5 != 0) && (puVar15 != (uint *)(ulong)uVar5)) {
      puVar13 = (uint *)((long)puVar15 - (long)(ulong)uVar5);
      uVar10 = 0;
      if (*puVar13 != 0) {
        uVar5 = puVar13[1];
        if ((uVar5 != 0) && ((ulong)(ushort)puVar13[2] != 0)) {
          lVar14 = 0xc;
          if (*(char *)((long)puVar13 + 10) != '\0') {
            lVar14 = 0x1c;
          }
          lVar14 = (long)puVar13 + lVar14 + (ulong)(ushort)puVar13[2] * 8;
          if (lVar14 != 0) {
            uVar10 = 0;
            if ((ulong)uVar5 != 0) {
              uVar10 = (uint)((ulong)((long)puVar15 - lVar14) / (ulong)uVar5);
            }
            if (*puVar13 <= uVar10) {
              uVar10 = 0xffffffff;
            }
            if ((uVar10 < DAT_05326f18) &&
               (uVar10 = (uint)*(ushort *)(DAT_05326f20 + (long)(int)uVar10 * 2), uVar10 < 0xf))
            goto LAB_0343e258;
          }
        }
        uVar10 = 0;
      }
    }
LAB_0343e258:
    uVar12 = 0;
    uVar5 = *puVar15;
    if ((uVar5 != 0) && (puVar15 != (uint *)(ulong)uVar5)) {
      puVar13 = (uint *)((long)puVar15 - (long)(ulong)uVar5);
      uVar12 = 0;
      if (*puVar13 != 0) {
        uVar5 = puVar13[1];
        if ((uVar5 != 0) && ((ulong)(ushort)puVar13[2] != 0)) {
          lVar14 = 0xc;
          if (*(char *)((long)puVar13 + 10) != '\0') {
            lVar14 = 0x1c;
          }
          lVar14 = (long)puVar13 + lVar14 + (ulong)(ushort)puVar13[2] * 8;
          if (lVar14 != 0) {
            uVar6 = 0;
            if ((ulong)uVar5 != 0) {
              uVar6 = (uint)((ulong)((long)puVar15 - lVar14) / (ulong)uVar5);
            }
            if (*puVar13 <= uVar6) {
              uVar6 = 0xffffffff;
            }
            if ((uVar6 < DAT_05326ec0) &&
               (uVar12 = *(ushort *)(DAT_05326ec8 + (long)(int)uVar6 * 2), uVar12 < 0xbd))
            goto LAB_0343e2ec;
          }
        }
        uVar12 = 0;
      }
    }
  }
  else {
    lVar14 = *(long *)(lVar14 + 0x57e58);
    uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar14 + 0x1f8);
    if (*(uint *)(lVar14 + 0x1d8) <= uVar5) goto LAB_0343e1a8;
    if (*(long *)(*(long *)(lVar14 + 0x1e0) + (long)(int)uVar5 * 8) == 0) {
      puVar11 = (uint *)0x0;
      goto joined_r0x0343e1b0;
    }
    lVar14 = *(long *)PTR_DAT_04bc0428;
    uVar5 = FUN_0277d6c4(param_2);
    uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar14 + 0x1f8);
    if (*(uint *)(lVar14 + 0x1d8) <= uVar5) goto LAB_0343e1a8;
    puVar11 = *(uint **)(*(long *)(lVar14 + 0x1e0) + (long)(int)uVar5 * 8);
    if (puVar11 == (uint *)0x0) goto joined_r0x0343e1b0;
    local_b0 = puVar11;
    if (puVar15 != (uint *)0x0) goto LAB_0343e1d0;
LAB_0343e1b4:
    uVar10 = 0;
    uVar12 = 0xbc;
  }
LAB_0343e2ec:
  if (uVar12 == 3) {
    uVar10 = 7;
  }
  else if ((uVar10 < 0xf) && ((1 << (ulong)(uVar10 & 0x1f) & 0x4044U) != 0)) {
    uVar10 = 2;
  }
  uVar5 = 0;
  if (puVar11 == (uint *)0x0) {
    uVar6 = 0xbc;
  }
  else {
    uVar6 = *puVar11;
    if ((uVar6 != 0) && (puVar11 != (uint *)(ulong)uVar6)) {
      puVar15 = (uint *)((long)puVar11 - (long)(ulong)uVar6);
      uVar5 = 0;
      if (*puVar15 != 0) {
        uVar5 = puVar15[1];
        if ((uVar5 != 0) && ((ulong)(ushort)puVar15[2] != 0)) {
          lVar14 = 0xc;
          if (*(char *)((long)puVar15 + 10) != '\0') {
            lVar14 = 0x1c;
          }
          lVar14 = (long)puVar15 + lVar14 + (ulong)(ushort)puVar15[2] * 8;
          if (lVar14 != 0) {
            uVar6 = 0;
            if ((ulong)uVar5 != 0) {
              uVar6 = (uint)((ulong)((long)puVar11 - lVar14) / (ulong)uVar5);
            }
            if (*puVar15 <= uVar6) {
              uVar6 = 0xffffffff;
            }
            if ((uVar6 < DAT_05326f18) &&
               (uVar5 = (uint)*(ushort *)(DAT_05326f20 + (long)(int)uVar6 * 2), uVar5 < 0xf))
            goto LAB_0343e3bc;
          }
        }
        uVar5 = 0;
      }
    }
LAB_0343e3bc:
    uVar6 = 0;
    uVar2 = *puVar11;
    if ((uVar2 != 0) && (puVar11 != (uint *)(ulong)uVar2)) {
      puVar15 = (uint *)((long)puVar11 - (long)(ulong)uVar2);
      uVar6 = 0;
      if (*puVar15 != 0) {
        uVar6 = puVar15[1];
        if ((uVar6 != 0) && ((ulong)(ushort)puVar15[2] != 0)) {
          lVar14 = 0xc;
          if (*(char *)((long)puVar15 + 10) != '\0') {
            lVar14 = 0x1c;
          }
          lVar14 = (long)puVar15 + lVar14 + (ulong)(ushort)puVar15[2] * 8;
          if (lVar14 != 0) {
            uVar2 = 0;
            if ((ulong)uVar6 != 0) {
              uVar2 = (uint)((ulong)((long)puVar11 - lVar14) / (ulong)uVar6);
            }
            if (*puVar15 <= uVar2) {
              uVar2 = 0xffffffff;
            }
            if ((uVar2 < DAT_05326ec0) &&
               (uVar6 = (uint)*(ushort *)(DAT_05326ec8 + (long)(int)uVar2 * 2), uVar6 < 0xbd))
            goto LAB_0343e460;
          }
        }
        uVar6 = 0;
      }
    }
  }
LAB_0343e460:
  local_70 = (undefined *)CONCAT44(local_70._4_4_,3);
  local_88 = (undefined *)CONCAT44(local_88._4_4_,uVar6);
  if (uVar6 == 3) {
    uVar5 = 7;
  }
  else if ((uVar5 < 0xf) && ((1 << (ulong)(uVar5 & 0x1f) & 0x4044U) != 0)) {
    uVar5 = 2;
  }
  if (((uVar10 < 0xf) && ((1 << (ulong)(uVar10 & 0x1f) & 0x4044U) != 0)) && ((uVar5 | 4) == 6)) {
    local_68 = *param_1;
    uStack_64 = param_1[1];
    lVar14 = *(long *)puVar3;
    local_60 = (uint *)0x0;
    local_70 = puVar4 + 0x10;
    uVar6 = FUN_0277d6c4(&local_68);
    if (*(long *)puVar3 == 0) {
LAB_0343e55c:
      puVar15 = (uint *)0x0;
    }
    else {
      lVar14 = *(long *)(lVar14 + 0x57e58);
      uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar14 + 0x1f8);
      if ((*(uint *)(lVar14 + 0x1d8) <= uVar6) ||
         (*(long *)(*(long *)(lVar14 + 0x1e0) + (long)(int)uVar6 * 8) == 0)) goto LAB_0343e55c;
      lVar14 = *(long *)PTR_DAT_04bc0428;
      uVar6 = FUN_0277d6c4(param_1);
      uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar14 + 0x1f8);
      if (*(uint *)(lVar14 + 0x1d8) <= uVar6) goto LAB_0343e55c;
      puVar15 = *(uint **)(*(long *)(lVar14 + 0x1e0) + (long)(int)uVar6 * 8);
      if (puVar15 != (uint *)0x0) {
        local_60 = puVar15;
      }
    }
    local_80 = *param_2;
    uStack_7c = param_2[1];
    lVar14 = *(long *)puVar3;
    local_78 = (uint *)0x0;
    local_88 = puVar4 + 0x10;
    uVar6 = FUN_0277d6c4(&local_80);
    if (*(long *)puVar3 == 0) {
LAB_0343e608:
      puVar11 = (uint *)0x0;
joined_r0x0343e608:
      if (puVar15 == (uint *)0x0) goto LAB_0343e5f0;
LAB_0343e60c:
      uVar6 = *puVar15;
      local_54 = 0;
      if ((uVar6 != 0) && (puVar15 != (uint *)(ulong)uVar6)) {
        puVar13 = (uint *)((long)puVar15 - (long)(ulong)uVar6);
        local_54 = 0;
        if (*puVar13 != 0) {
          uVar6 = puVar13[1];
          if ((uVar6 != 0) && ((ulong)(ushort)puVar13[2] != 0)) {
            lVar14 = 0xc;
            if (*(char *)((long)puVar13 + 10) != '\0') {
              lVar14 = 0x1c;
            }
            lVar14 = (long)puVar13 + lVar14 + (ulong)(ushort)puVar13[2] * 8;
            if (lVar14 != 0) {
              uVar2 = 0;
              if ((ulong)uVar6 != 0) {
                uVar2 = (uint)((ulong)((long)puVar15 - lVar14) / (ulong)uVar6);
              }
              if (*puVar13 <= uVar2) {
                uVar2 = 0xffffffff;
              }
              if ((uVar2 < DAT_05326f28) &&
                 (local_54 = (uint)*(ushort *)(DAT_05326f30 + (long)(int)uVar2 * 2),
                 local_54 < 0x100)) goto LAB_0343e698;
            }
          }
          local_54 = 0;
        }
      }
LAB_0343e698:
      if (puVar11 != (uint *)0x0) goto LAB_0343e6a0;
LAB_0343e5fc:
      local_58 = 0x4f;
    }
    else {
      lVar14 = *(long *)(lVar14 + 0x57e58);
      uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar14 + 0x1f8);
      if ((*(uint *)(lVar14 + 0x1d8) <= uVar6) ||
         (*(long *)(*(long *)(lVar14 + 0x1e0) + (long)(int)uVar6 * 8) == 0)) goto LAB_0343e608;
      lVar14 = *(long *)PTR_DAT_04bc0428;
      uVar6 = FUN_0277d6c4(param_2);
      uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar14 + 0x1f8);
      if (uVar6 < *(uint *)(lVar14 + 0x1d8)) {
        puVar11 = *(uint **)(*(long *)(lVar14 + 0x1e0) + (long)(int)uVar6 * 8);
        goto joined_r0x0343e608;
      }
      puVar11 = (uint *)0x0;
      if (puVar15 != (uint *)0x0) goto LAB_0343e60c;
LAB_0343e5f0:
      local_54 = 0x4f;
      if (puVar11 == (uint *)0x0) goto LAB_0343e5fc;
LAB_0343e6a0:
      uVar6 = *puVar11;
      local_58 = 0;
      if ((uVar6 != 0) && (puVar11 != (uint *)(ulong)uVar6)) {
        puVar15 = (uint *)((long)puVar11 - (long)(ulong)uVar6);
        local_58 = 0;
        if (*puVar15 != 0) {
          uVar6 = puVar15[1];
          if ((uVar6 != 0) && ((ulong)(ushort)puVar15[2] != 0)) {
            lVar14 = 0xc;
            if (*(char *)((long)puVar15 + 10) != '\0') {
              lVar14 = 0x1c;
            }
            lVar14 = (long)puVar15 + lVar14 + (ulong)(ushort)puVar15[2] * 8;
            if (lVar14 != 0) {
              uVar2 = 0;
              if ((ulong)uVar6 != 0) {
                uVar2 = (uint)((ulong)((long)puVar11 - lVar14) / (ulong)uVar6);
              }
              if (*puVar15 <= uVar2) {
                uVar2 = 0xffffffff;
              }
              if ((uVar2 < DAT_05326f28) &&
                 (local_58 = (uint)*(ushort *)(DAT_05326f30 + (long)(int)uVar2 * 2),
                 local_58 < 0x100)) goto LAB_0343e72c;
            }
          }
          local_58 = 0;
        }
      }
    }
LAB_0343e72c:
    if (local_58 < local_54) {
      return 1;
    }
    if (local_54 < local_58) {
      return 0xffffffff;
    }
  }
  if (((uVar10 - 7 < 2) && (uVar5 - 7 < 2)) &&
     (uVar9 = FUN_0343bc10(param_1,param_2), (int)uVar9 != 0)) {
    return uVar9;
  }
  if (((param_3 & 1) != 0) && (uVar10 != uVar5)) {
    local_68 = *param_1;
    uStack_64 = param_1[1];
    lVar14 = *(long *)puVar3;
    local_60 = (uint *)0x0;
    local_70 = puVar4 + 0x10;
    uVar6 = FUN_0277d6c4(&local_68);
    if (*(long *)puVar3 == 0) {
LAB_0343e840:
      puVar15 = (uint *)0x0;
    }
    else {
      lVar14 = *(long *)(lVar14 + 0x57e58);
      uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar14 + 0x1f8);
      if ((*(uint *)(lVar14 + 0x1d8) <= uVar6) ||
         (*(long *)(*(long *)(lVar14 + 0x1e0) + (long)(int)uVar6 * 8) == 0)) goto LAB_0343e840;
      lVar14 = *(long *)PTR_DAT_04bc0428;
      uVar6 = FUN_0277d6c4(param_1);
      uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar14 + 0x1f8);
      if (*(uint *)(lVar14 + 0x1d8) <= uVar6) goto LAB_0343e840;
      puVar15 = *(uint **)(*(long *)(lVar14 + 0x1e0) + (long)(int)uVar6 * 8);
      if (puVar15 != (uint *)0x0) {
        local_60 = puVar15;
      }
    }
    local_80 = *param_2;
    uStack_7c = param_2[1];
    lVar14 = *(long *)puVar3;
    local_78 = (uint *)0x0;
    local_88 = puVar4 + 0x10;
    uVar6 = FUN_0277d6c4(&local_80);
    puVar11 = (uint *)0x0;
    if (*(long *)puVar3 == 0) {
joined_r0x0343ea24:
      if (puVar15 == (uint *)0x0) goto LAB_0343ea28;
LAB_0343e8fc:
      local_8c = 0;
      uVar6 = *puVar15;
      if ((uVar6 != 0) && (puVar15 != (uint *)(ulong)uVar6)) {
        puVar13 = (uint *)((long)puVar15 - (long)(ulong)uVar6);
        local_8c = 0;
        if (*puVar13 != 0) {
          uVar6 = puVar13[1];
          if ((uVar6 != 0) && ((ulong)(ushort)puVar13[2] != 0)) {
            lVar14 = 0xc;
            if (*(char *)((long)puVar13 + 10) != '\0') {
              lVar14 = 0x1c;
            }
            lVar14 = (long)puVar13 + lVar14 + (ulong)(ushort)puVar13[2] * 8;
            if (lVar14 != 0) {
              uVar2 = 0;
              if ((ulong)uVar6 != 0) {
                uVar2 = (uint)((ulong)((long)puVar15 - lVar14) / (ulong)uVar6);
              }
              if (*puVar13 <= uVar2) {
                uVar2 = 0xffffffff;
              }
              if ((uVar2 < DAT_05326f18) &&
                 (local_8c = (uint)*(ushort *)(DAT_05326f20 + (long)(int)uVar2 * 2), local_8c < 0xf)
                 ) goto LAB_0343e984;
            }
          }
          local_8c = 0;
        }
      }
LAB_0343e984:
      uVar12 = 0;
      uVar6 = *puVar15;
      if ((uVar6 != 0) && (puVar15 != (uint *)(ulong)uVar6)) {
        puVar13 = (uint *)((long)puVar15 - (long)(ulong)uVar6);
        uVar12 = 0;
        if (*puVar13 != 0) {
          uVar6 = puVar13[1];
          if ((uVar6 != 0) && ((ulong)(ushort)puVar13[2] != 0)) {
            lVar14 = 0xc;
            if (*(char *)((long)puVar13 + 10) != '\0') {
              lVar14 = 0x1c;
            }
            lVar14 = (long)puVar13 + lVar14 + (ulong)(ushort)puVar13[2] * 8;
            if (lVar14 != 0) {
              uVar2 = 0;
              if ((ulong)uVar6 != 0) {
                uVar2 = (uint)((ulong)((long)puVar15 - lVar14) / (ulong)uVar6);
              }
              if (*puVar13 <= uVar2) {
                uVar2 = 0xffffffff;
              }
              if ((uVar2 < DAT_05326ec0) &&
                 (uVar12 = *(ushort *)(DAT_05326ec8 + (long)(int)uVar2 * 2), uVar12 < 0xbd))
              goto LAB_0343ea34;
            }
          }
          uVar12 = 0;
        }
      }
    }
    else {
      lVar14 = *(long *)(lVar14 + 0x57e58);
      uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar14 + 0x1f8);
      if (*(uint *)(lVar14 + 0x1d8) <= uVar6) {
        puVar11 = (uint *)0x0;
        goto joined_r0x0343ea24;
      }
      puVar11 = (uint *)0x0;
      if (*(long *)(*(long *)(lVar14 + 0x1e0) + (long)(int)uVar6 * 8) == 0) goto joined_r0x0343ea24;
      lVar14 = *(long *)PTR_DAT_04bc0428;
      uVar6 = FUN_0277d6c4(param_2);
      uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar14 + 0x1f8);
      if (*(uint *)(lVar14 + 0x1d8) <= uVar6) {
        puVar11 = (uint *)0x0;
        goto joined_r0x0343ea24;
      }
      puVar11 = *(uint **)(*(long *)(lVar14 + 0x1e0) + (long)(int)uVar6 * 8);
      if (puVar11 == (uint *)0x0) goto joined_r0x0343ea24;
      local_78 = puVar11;
      if (puVar15 != (uint *)0x0) goto LAB_0343e8fc;
LAB_0343ea28:
      local_8c = 0;
      uVar12 = 0xbc;
    }
LAB_0343ea34:
    if (uVar12 == 3) {
      local_8c = 7;
    }
    else if ((local_8c < 0xf) && ((1 << (ulong)(local_8c & 0x1f) & 0x4044U) != 0)) {
      local_8c = 2;
    }
    local_90 = 0;
    if (puVar11 == (uint *)0x0) {
      local_58 = 0xbc;
    }
    else {
      uVar6 = *puVar11;
      if ((uVar6 != 0) && (puVar11 != (uint *)(ulong)uVar6)) {
        puVar15 = (uint *)((long)puVar11 - (long)(ulong)uVar6);
        local_90 = 0;
        if (*puVar15 != 0) {
          uVar6 = puVar15[1];
          if ((uVar6 != 0) && ((ulong)(ushort)puVar15[2] != 0)) {
            lVar14 = 0xc;
            if (*(char *)((long)puVar15 + 10) != '\0') {
              lVar14 = 0x1c;
            }
            lVar14 = (long)puVar15 + lVar14 + (ulong)(ushort)puVar15[2] * 8;
            if (lVar14 != 0) {
              uVar2 = 0;
              if ((ulong)uVar6 != 0) {
                uVar2 = (uint)((ulong)((long)puVar11 - lVar14) / (ulong)uVar6);
              }
              if (*puVar15 <= uVar2) {
                uVar2 = 0xffffffff;
              }
              if ((uVar2 < DAT_05326f18) &&
                 (local_90 = (uint)*(ushort *)(DAT_05326f20 + (long)(int)uVar2 * 2), local_90 < 0xf)
                 ) goto LAB_0343eb00;
            }
          }
          local_90 = 0;
        }
      }
LAB_0343eb00:
      local_58 = 0;
      uVar6 = *puVar11;
      if ((uVar6 != 0) && (puVar11 != (uint *)(ulong)uVar6)) {
        puVar15 = (uint *)((long)puVar11 - (long)(ulong)uVar6);
        local_58 = 0;
        if (*puVar15 != 0) {
          uVar6 = puVar15[1];
          if ((uVar6 != 0) && ((ulong)(ushort)puVar15[2] != 0)) {
            lVar14 = 0xc;
            if (*(char *)((long)puVar15 + 10) != '\0') {
              lVar14 = 0x1c;
            }
            lVar14 = (long)puVar15 + lVar14 + (ulong)(ushort)puVar15[2] * 8;
            if (lVar14 != 0) {
              uVar2 = 0;
              if ((ulong)uVar6 != 0) {
                uVar2 = (uint)((ulong)((long)puVar11 - lVar14) / (ulong)uVar6);
              }
              if (*puVar15 <= uVar2) {
                uVar2 = 0xffffffff;
              }
              if ((uVar2 < DAT_05326ec0) &&
                 (local_58 = (uint)*(ushort *)(DAT_05326ec8 + (long)(int)uVar2 * 2), local_58 < 0xbd
                 )) goto LAB_0343eba4;
            }
          }
          local_58 = 0;
        }
      }
    }
LAB_0343eba4:
    local_54 = 3;
    if (local_58 == 3) {
      local_90 = 7;
    }
    else if ((local_90 < 0xf) && ((1 << (ulong)(local_90 & 0x1f) & 0x4044U) != 0)) {
      local_90 = 2;
    }
    if (local_8c != local_90) {
      if ((local_8c != DAT_05752400) && (local_90 == DAT_05752400)) {
        return 1;
      }
      if ((local_8c == DAT_05752400) && (local_90 != DAT_05752400)) {
        return 0xffffffff;
      }
      if ((local_8c != DAT_05752404) && (local_90 == DAT_05752404)) {
        return 1;
      }
      if ((local_8c == DAT_05752404) && (local_90 != DAT_05752404)) {
        return 0xffffffff;
      }
      if ((local_8c != DAT_05752408) && (local_90 == DAT_05752408)) {
        return 1;
      }
      if ((local_8c == DAT_05752408) && (local_90 != DAT_05752408)) {
        return 0xffffffff;
      }
      if ((local_8c != DAT_0575240c) && (local_90 == DAT_0575240c)) {
        return 1;
      }
      if ((local_8c == DAT_0575240c) && (local_90 != DAT_0575240c)) {
        return 0xffffffff;
      }
      if ((local_8c != DAT_05752410) && (local_90 == DAT_05752410)) {
        return 1;
      }
      if ((local_8c == DAT_05752410) && (local_90 != DAT_05752410)) {
        return 0xffffffff;
      }
      if ((local_8c != DAT_05752414) && (local_90 == DAT_05752414)) {
        return 1;
      }
      if ((local_8c == DAT_05752414) && (local_90 != DAT_05752414)) {
        return 0xffffffff;
      }
      if ((local_8c != DAT_05752418) && (local_90 == DAT_05752418)) {
        return 1;
      }
      if ((local_8c == DAT_05752418) && (local_90 != DAT_05752418)) {
        return 0xffffffff;
      }
      if ((local_8c != DAT_0575241c) && (local_90 == DAT_0575241c)) {
        return 1;
      }
      if ((local_8c == DAT_0575241c) && (local_90 != DAT_0575241c)) {
        return 0xffffffff;
      }
      if ((local_8c != DAT_05752420) && (local_90 == DAT_05752420)) {
        return 1;
      }
      if ((local_8c == DAT_05752420) && (local_90 != DAT_05752420)) {
        return 0xffffffff;
      }
      if ((local_8c != DAT_05752424) && (local_90 == DAT_05752424)) {
        return 1;
      }
      if ((local_8c == DAT_05752424) && (local_90 != DAT_05752424)) {
        return 0xffffffff;
      }
      if ((local_8c != DAT_05752428) && (local_90 == DAT_05752428)) {
        return 1;
      }
      if ((local_8c == DAT_05752428) && (local_90 != DAT_05752428)) {
        return 0xffffffff;
      }
      if ((local_8c != DAT_0575242c) && (local_90 == DAT_0575242c)) {
        return 1;
      }
      if ((local_8c == DAT_0575242c) && (local_90 != DAT_0575242c)) {
        return 0xffffffff;
      }
      if ((local_8c != DAT_05752430) && (local_90 == DAT_05752430)) {
        return 1;
      }
      if ((local_8c == DAT_05752430) && (local_90 != DAT_05752430)) {
        return 0xffffffff;
      }
    }
  }
  local_68 = *param_1;
  uStack_64 = param_1[1];
  lVar14 = *(long *)puVar3;
  local_60 = (uint *)0x0;
  local_70 = puVar4 + 0x10;
  uVar6 = FUN_0277d6c4(&local_68);
  if (*(long *)puVar3 != 0) {
    lVar14 = *(long *)(lVar14 + 0x57e58);
    uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar14 + 0x1f8);
    if ((uVar6 < *(uint *)(lVar14 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar14 + 0x1e0) + (long)(int)uVar6 * 8) != 0)) {
      lVar14 = *(long *)PTR_DAT_04bc0428;
      uVar6 = FUN_0277d6c4(param_1);
      uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar14 + 0x1f8);
      if ((uVar6 < *(uint *)(lVar14 + 0x1d8)) &&
         (lVar14 = *(long *)(*(long *)(lVar14 + 0x1e0) + (long)(int)uVar6 * 8), lVar14 != 0)) {
        local_60 = (uint *)lVar14;
      }
    }
  }
  local_80 = *param_2;
  uStack_7c = param_2[1];
  lVar14 = *(long *)puVar3;
  local_78 = (uint *)0x0;
  local_88 = puVar4 + 0x10;
  uVar6 = FUN_0277d6c4(&local_80);
  if (*(long *)puVar3 != 0) {
    lVar14 = *(long *)(lVar14 + 0x57e58);
    uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar14 + 0x1f8);
    if ((uVar6 < *(uint *)(lVar14 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar14 + 0x1e0) + (long)(int)uVar6 * 8) != 0)) {
      lVar14 = *(long *)PTR_DAT_04bc0428;
      uVar6 = FUN_0277d6c4(param_2);
      uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar14 + 0x1f8);
      if ((uVar6 < *(uint *)(lVar14 + 0x1d8)) &&
         (lVar14 = *(long *)(*(long *)(lVar14 + 0x1e0) + (long)(int)uVar6 * 8), lVar14 != 0)) {
        local_78 = (uint *)lVar14;
      }
    }
  }
  local_54 = FUN_01af53c8(&local_70);
  local_58 = FUN_01af53c8(&local_88);
  if (local_54 != local_58) {
    uVar5 = 1;
    if ((int)local_54 < (int)local_58) {
      uVar5 = 0xffffffff;
    }
    return (ulong)uVar5;
  }
  uVar9 = FUN_0343c0f0(param_1,param_2);
  if ((int)uVar9 != 0) {
    return uVar9;
  }
  local_68 = *param_1;
  uStack_64 = param_1[1];
  lVar14 = *(long *)puVar3;
  local_60 = (uint *)0x0;
  local_70 = puVar4 + 0x10;
  uVar6 = FUN_0277d6c4(&local_68);
  if (*(long *)puVar3 == 0) {
LAB_0343ee20:
    puVar15 = (uint *)0x0;
  }
  else {
    lVar14 = *(long *)(lVar14 + 0x57e58);
    uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar14 + 0x1f8);
    if ((*(uint *)(lVar14 + 0x1d8) <= uVar6) ||
       (*(long *)(*(long *)(lVar14 + 0x1e0) + (long)(int)uVar6 * 8) == 0)) goto LAB_0343ee20;
    lVar14 = *(long *)PTR_DAT_04bc0428;
    uVar6 = FUN_0277d6c4(param_1);
    uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar14 + 0x1f8);
    if (*(uint *)(lVar14 + 0x1d8) <= uVar6) goto LAB_0343ee20;
    puVar15 = *(uint **)(*(long *)(lVar14 + 0x1e0) + (long)(int)uVar6 * 8);
    if (puVar15 != (uint *)0x0) {
      local_60 = puVar15;
    }
  }
  local_80 = *param_2;
  uStack_7c = param_2[1];
  lVar14 = *(long *)puVar3;
  local_78 = (uint *)0x0;
  local_88 = puVar4 + 0x10;
  uVar6 = FUN_0277d6c4(&local_80);
  if (*(long *)puVar3 == 0) {
LAB_0343f238:
    puVar11 = (uint *)0x0;
joined_r0x0343f238:
    if (puVar15 == (uint *)0x0) goto LAB_0343eeb4;
LAB_0343f23c:
    uVar6 = *puVar15;
    local_54 = 0;
    if ((uVar6 != 0) && (puVar15 != (uint *)(ulong)uVar6)) {
      puVar13 = (uint *)((long)puVar15 - (long)(ulong)uVar6);
      local_54 = 0;
      if (*puVar13 != 0) {
        uVar6 = puVar13[1];
        if ((uVar6 != 0) && ((ulong)(ushort)puVar13[2] != 0)) {
          lVar14 = 0xc;
          if (*(char *)((long)puVar13 + 10) != '\0') {
            lVar14 = 0x1c;
          }
          lVar14 = (long)puVar13 + lVar14 + (ulong)(ushort)puVar13[2] * 8;
          if (lVar14 != 0) {
            uVar2 = 0;
            if ((ulong)uVar6 != 0) {
              uVar2 = (uint)((ulong)((long)puVar15 - lVar14) / (ulong)uVar6);
            }
            if (*puVar13 <= uVar2) {
              uVar2 = 0xffffffff;
            }
            if ((uVar2 < DAT_05326f28) &&
               (local_54 = (uint)*(ushort *)(DAT_05326f30 + (long)(int)uVar2 * 2), local_54 < 0x100)
               ) goto LAB_0343f2c8;
          }
        }
        local_54 = 0;
      }
    }
  }
  else {
    lVar14 = *(long *)(lVar14 + 0x57e58);
    uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar14 + 0x1f8);
    if ((*(uint *)(lVar14 + 0x1d8) <= uVar6) ||
       (*(long *)(*(long *)(lVar14 + 0x1e0) + (long)(int)uVar6 * 8) == 0)) goto LAB_0343f238;
    lVar14 = *(long *)PTR_DAT_04bc0428;
    uVar6 = FUN_0277d6c4(param_2);
    uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar14 + 0x1f8);
    if (uVar6 < *(uint *)(lVar14 + 0x1d8)) {
      puVar11 = *(uint **)(*(long *)(lVar14 + 0x1e0) + (long)(int)uVar6 * 8);
      goto joined_r0x0343f238;
    }
    puVar11 = (uint *)0x0;
    if (puVar15 != (uint *)0x0) goto LAB_0343f23c;
LAB_0343eeb4:
    local_54 = 0x4f;
  }
LAB_0343f2c8:
  if (puVar11 == (uint *)0x0) {
    local_58 = 0x4f;
  }
  else {
    uVar6 = *puVar11;
    local_58 = 0;
    if ((uVar6 != 0) && (puVar11 != (uint *)(ulong)uVar6)) {
      puVar15 = (uint *)((long)puVar11 - (long)(ulong)uVar6);
      local_58 = 0;
      if (*puVar15 != 0) {
        uVar6 = puVar15[1];
        if ((uVar6 != 0) && ((ulong)(ushort)puVar15[2] != 0)) {
          lVar14 = 0xc;
          if (*(char *)((long)puVar15 + 10) != '\0') {
            lVar14 = 0x1c;
          }
          lVar14 = (long)puVar15 + lVar14 + (ulong)(ushort)puVar15[2] * 8;
          if (lVar14 != 0) {
            uVar2 = 0;
            if ((ulong)uVar6 != 0) {
              uVar2 = (uint)((ulong)((long)puVar11 - lVar14) / (ulong)uVar6);
            }
            if (*puVar15 <= uVar2) {
              uVar2 = 0xffffffff;
            }
            if ((uVar2 < DAT_05326f28) &&
               (local_58 = (uint)*(ushort *)(DAT_05326f30 + (long)(int)uVar2 * 2), local_58 < 0x100)
               ) goto LAB_0343f364;
          }
        }
        local_58 = 0;
      }
    }
  }
LAB_0343f364:
  if (local_58 < local_54) {
    return 1;
  }
  if (local_54 < local_58) {
    return 0xffffffff;
  }
  if (uVar10 != uVar5) goto LAB_0343f4c8;
  if (uVar10 == 5) {
    uVar9 = FUN_0343c310(param_1,param_2);
    iVar8 = (int)uVar9;
joined_r0x0343f3d4:
    if (iVar8 != 0) {
      return uVar9;
    }
  }
  else if (uVar10 == 0xd) {
    uVar9 = FUN_034319a0(param_1,param_2);
    iVar8 = (int)uVar9;
    goto joined_r0x0343f3d4;
  }
  if (((DAT_05752698 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_05752698), iVar8 != 0)) {
    DAT_05752678 = &PTR_FUN_04b2a188;
    __cxa_guard_release(&DAT_05752698);
  }
  uVar9 = (*(code *)*DAT_05752678)(&DAT_05752678,param_1);
  if ((((uVar9 & 1) != 0) &&
      (uVar9 = (*(code *)*DAT_05752678)(&DAT_05752678,param_2), (uVar9 & 1) != 0)) &&
     (uVar9 = FUN_0343dc40(param_1,param_2), (int)uVar9 != 0)) {
    return uVar9;
  }
  uVar7 = FUN_0343d000(&local_a8);
  local_70 = (undefined *)CONCAT44(local_70._4_4_,uVar7);
  iVar8 = FUN_0343d000(&local_c0);
  local_88 = (undefined *)CONCAT44(local_88._4_4_,iVar8);
  if (uVar10 == 7) {
    if (((int)local_70 != iVar8) && (uVar9 = FUN_0343d1f0(param_1,param_2), (int)uVar9 != 0)) {
      return uVar9;
    }
    if (((int)local_70 != 0x51) || ((int)local_88 != 0x51)) goto LAB_0343f4c8;
    uVar9 = FUN_0343d730(param_1,param_2);
    iVar8 = (int)uVar9;
  }
  else {
    if ((uVar10 != 8) || ((int)local_70 == iVar8)) goto LAB_0343f4c8;
    uVar9 = FUN_0343d1f0(param_1,param_2);
    iVar8 = (int)uVar9;
  }
  if (iVar8 != 0) {
    return uVar9;
  }
LAB_0343f4c8:
  uVar9 = FUN_0343d7f0(param_1,param_2);
  return uVar9;
}


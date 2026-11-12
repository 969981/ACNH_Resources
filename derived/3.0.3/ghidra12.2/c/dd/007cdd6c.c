
void FUN_007cdd6c(uint *param_1,byte *param_2,int *param_3)

{
  uint uVar1;
  byte bVar2;
  ushort uVar3;
  byte bVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  bool bVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  ulong uVar12;
  uint *puVar13;
  byte bVar14;
  long lVar15;
  uint *puVar16;
  uint *puVar17;
  ushort uVar18;
  long lVar19;
  undefined8 local_88;
  uint local_80;
  uint uStack_7c;
  uint *local_78;
  int local_70;
  int iStack_6c;
  undefined2 local_68;
  uint local_60;
  uint local_5c;
  undefined4 local_58;
  undefined2 local_54;
  undefined1 local_52;
  
  puVar5 = PTR_DAT_04bb27d0;
  lVar15 = **(long **)PTR_DAT_04bb27d0;
  bVar4 = *(byte *)(lVar15 + 0x473);
  uVar12 = (ulong)(char)bVar4;
  puVar13 = (uint *)PTR_DAT_04bb32e0;
  if (uVar12 != 0xffffffffffffffff) {
    puVar17 = (uint *)(lVar15 + 0x48);
    puVar16 = puVar17 + (uVar12 & 0xffffffff) * 0x20;
    if (7 < bVar4) {
      puVar16 = puVar17;
    }
    if ((*puVar16 >> 3 & 1) == 0) goto LAB_007cddc8;
    iVar10 = *param_3;
    if (*(byte *)(lVar15 + 0x472) == bVar4) goto LAB_007cddcc;
    if (iVar10 != 3) {
      if (iVar10 == 2) {
        if ((char)param_1[0x45] == '\0') {
          return;
        }
        if (param_1[0x44] != 0) {
          return;
        }
        if (param_1[0x43] == param_1[0x40]) {
          *(undefined2 *)(param_1 + 0x41) = 0;
          return;
        }
        return;
      }
      if (iVar10 != 1) {
        return;
      }
      if ((ulong)*(byte *)(param_3 + 1) < 8) {
        param_1[(ulong)*(byte *)(param_3 + 1) * 8] = param_3[2];
        bVar4 = *(byte *)(param_3 + 1);
        bVar8 = 7 < bVar4;
        if (bVar8) {
          bVar4 = 0xff;
        }
        puVar13 = param_1 + ((long)(char)bVar4 & 0xffffffffU) * 8;
        if (bVar8) {
          puVar13 = param_1;
        }
        puVar13[4] = param_3[6];
        puVar13[5] = param_3[7];
        bVar4 = *(byte *)(param_3 + 1);
        bVar8 = 7 < bVar4;
        if (bVar8) {
          bVar4 = 0xff;
        }
        puVar13 = param_1 + ((long)(char)bVar4 & 0xffffffffU) * 8;
        if (bVar8) {
          puVar13 = param_1;
        }
        puVar13[1] = param_3[3];
        local_88 = (undefined *)(ulong)*(ushort *)(param_3 + 8);
        FUN_0277d4ac(&local_88);
        bVar4 = *(byte *)(param_3 + 1);
        bVar8 = 7 < bVar4;
        if (bVar8) {
          bVar4 = 0xff;
        }
        puVar13 = param_1 + ((long)(char)bVar4 & 0xffffffffU) * 8;
        if (bVar8) {
          puVar13 = param_1;
        }
        puVar13[6] = (uint)local_88;
        puVar13[7] = local_88._4_4_;
      }
      if ((char)param_1[0x45] == '\0') {
        return;
      }
      if (param_1[0x44] != 0) {
        return;
      }
      if (param_1[0x43] == param_1[0x40]) {
        *(undefined2 *)(param_1 + 0x41) = 1;
        return;
      }
      return;
    }
    bVar4 = *param_2;
    if ((*puVar16 >> 3 & 1) == 0) {
      puVar13 = (uint *)PTR_DAT_04bb5038;
      if (*PTR_DAT_04bc1220 != bVar4) {
        puVar13 = (uint *)PTR_DAT_04bb32e0;
      }
      goto LAB_007ce0f8;
    }
    if (bVar4 == 0xff) goto LAB_007ce0f8;
    puVar16 = puVar17 + ((long)(char)bVar4 & 0xffffffffU) * 0x20;
    if (7 < bVar4) {
      puVar16 = puVar17;
    }
LAB_007ce06c:
    if ((*puVar16 & 1) != 0) {
      puVar13 = puVar16 + 0x1e;
    }
LAB_007ce0f8:
    if ((ulong)(byte)*puVar13 < 8) {
      param_1 = param_1 + (ulong)(byte)*puVar13 * 8;
      param_1[0] = 0;
      puVar5 = PTR_DAT_04bb37e0;
      param_1[1] = 0;
      param_1[4] = 0;
      param_1[5] = 0;
      *(undefined2 *)(param_1 + 6) = *(undefined2 *)puVar5;
      *(undefined *)((long)param_1 + 0x1a) = puVar5[2];
      *(undefined *)((long)param_1 + 0x1b) = puVar5[3];
      param_1[7] = *(uint *)(puVar5 + 4);
    }
    return;
  }
LAB_007cddc8:
  iVar10 = *param_3;
LAB_007cddcc:
  if (iVar10 == 3) {
    bVar14 = *param_2;
    if (bVar4 != 0xff) {
      puVar17 = (uint *)(lVar15 + 0x48);
      puVar16 = puVar17 + (uVar12 & 0xffffffff) * 0x20;
      if (7 < bVar4) {
        puVar16 = puVar17;
      }
      if ((*puVar16 >> 3 & 1) != 0) {
        if (bVar14 == 0xff) goto LAB_007ce0f8;
        puVar16 = puVar17 + ((long)(char)bVar14 & 0xffffffffU) * 0x20;
        if (7 < bVar14) {
          puVar16 = puVar17;
        }
        goto LAB_007ce06c;
      }
    }
    puVar13 = (uint *)PTR_DAT_04bb5038;
    if (*PTR_DAT_04bc1220 != bVar14) {
      puVar13 = (uint *)PTR_DAT_04bb32e0;
    }
    goto LAB_007ce0f8;
  }
  if (iVar10 != 0) {
    return;
  }
  bVar4 = *param_2;
  local_5c = 0;
  local_60 = (uint)*(ushort *)(param_3 + 8);
  FUN_0277d4ac(&local_60);
  puVar6 = PTR_DAT_04bb43c0;
  if (7 < *(byte *)(param_3 + 1)) goto LAB_007cf43c;
  lVar15 = *(long *)PTR_DAT_04bb43c0;
  uVar9 = FUN_0277d6c4(&local_60);
  puVar7 = PTR_DAT_04bc0510;
  lVar19 = *(long *)puVar6;
  if (lVar19 == 0) goto LAB_007cf43c;
  lVar15 = *(long *)(lVar15 + 0x57e58);
  uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar15 + 0x1f8);
  if ((*(uint *)(lVar15 + 0x1d8) <= uVar9) ||
     (*(long *)(*(long *)(lVar15 + 0x1e0) + (long)(int)uVar9 * 8) == 0)) goto LAB_007cf43c;
  uVar9 = param_3[2];
  if ((*param_1 == 0) || (*param_1 != uVar9)) {
LAB_007ce31c:
    puVar7 = PTR_DAT_04bc0510;
    if ((param_1[8] != 0) && (param_1[8] == uVar9)) {
      local_80 = param_1[0xe];
      uStack_7c = param_1[0xf];
      lVar15 = *(long *)puVar6;
      local_78 = (uint *)0x0;
      local_88 = PTR_DAT_04bc0510 + 0x10;
      uVar9 = FUN_0277d6c4(&local_80);
      if (*(long *)puVar6 == 0) {
LAB_007ce3d4:
        puVar13 = local_78;
        if (local_78 != (uint *)0x0) goto LAB_007ce3dc;
LAB_007ce464:
        uVar18 = 0;
      }
      else {
        lVar15 = *(long *)(lVar15 + 0x57e58);
        uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar15 + 0x1f8);
        if ((*(uint *)(lVar15 + 0x1d8) <= uVar9) ||
           (*(long *)(*(long *)(lVar15 + 0x1e0) + (long)(int)uVar9 * 8) == 0)) goto LAB_007ce3d4;
        lVar15 = *(long *)PTR_DAT_04bc0428;
        uVar9 = FUN_0277d6c4(param_1 + 0xe);
        uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar15 + 0x1f8);
        if ((*(uint *)(lVar15 + 0x1d8) <= uVar9) ||
           (puVar13 = *(uint **)(*(long *)(lVar15 + 0x1e0) + (long)(int)uVar9 * 8),
           puVar13 == (uint *)0x0)) goto LAB_007ce3d4;
LAB_007ce3dc:
        uVar9 = *puVar13;
        uVar18 = 0;
        if ((uVar9 != 0) && (puVar13 != (uint *)(ulong)uVar9)) {
          puVar17 = (uint *)((long)puVar13 - (long)(ulong)uVar9);
          if ((*puVar17 != 0) &&
             ((uVar9 = puVar17[1], uVar9 != 0 && ((ulong)(ushort)puVar17[2] != 0)))) {
            lVar15 = 0xc;
            if (*(char *)((long)puVar17 + 10) != '\0') {
              lVar15 = 0x1c;
            }
            lVar15 = (long)puVar17 + lVar15 + (ulong)(ushort)puVar17[2] * 8;
            if (lVar15 != 0) {
              uVar1 = 0;
              if ((ulong)uVar9 != 0) {
                uVar1 = (uint)((ulong)((long)puVar13 - lVar15) / (ulong)uVar9);
              }
              if (*puVar17 <= uVar1) {
                uVar1 = 0xffffffff;
              }
              if ((uVar1 < *(uint *)PTR_DAT_04bc0018) &&
                 (uVar18 = *(ushort *)(*(long *)(PTR_DAT_04bc0018 + 8) + (long)(int)uVar1 * 2),
                 uVar18 < 6)) goto LAB_007ce468;
            }
          }
          goto LAB_007ce464;
        }
      }
LAB_007ce468:
      local_88 = puVar7 + 0x10;
      lVar15 = *(long *)puVar6;
      local_78 = (uint *)0x0;
      local_80 = local_60;
      uStack_7c = local_5c;
      uVar9 = FUN_0277d6c4(&local_80);
      if (*(long *)puVar6 == 0) {
LAB_007ce504:
        if (local_78 != (uint *)0x0) goto LAB_007ce50c;
LAB_007ce5a8:
        if (uVar18 != 5) goto LAB_007cf304;
      }
      else {
        lVar15 = *(long *)(lVar15 + 0x57e58);
        uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar15 + 0x1f8);
        if ((*(uint *)(lVar15 + 0x1d8) <= uVar9) ||
           (*(long *)(*(long *)(lVar15 + 0x1e0) + (long)(int)uVar9 * 8) == 0)) goto LAB_007ce504;
        lVar15 = *(long *)PTR_DAT_04bc0428;
        uVar9 = FUN_0277d6c4(&local_60);
        uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar15 + 0x1f8);
        if ((*(uint *)(lVar15 + 0x1d8) <= uVar9) ||
           (puVar13 = *(uint **)(*(long *)(lVar15 + 0x1e0) + (long)(int)uVar9 * 8),
           puVar13 == (uint *)0x0)) goto LAB_007ce504;
        local_78 = puVar13;
LAB_007ce50c:
        puVar13 = (uint *)((long)local_78 - (ulong)*local_78);
        if ((((*local_78 == 0) || (puVar13 == (uint *)0x0)) || (*puVar13 == 0)) ||
           ((uVar9 = puVar13[1], uVar9 == 0 || ((ulong)(ushort)puVar13[2] == 0))))
        goto LAB_007ce5a8;
        lVar15 = 0xc;
        if (*(char *)((long)puVar13 + 10) != '\0') {
          lVar15 = 0x1c;
        }
        lVar15 = (long)puVar13 + lVar15 + (ulong)(ushort)puVar13[2] * 8;
        if (lVar15 == 0) goto LAB_007ce5a8;
        uVar1 = 0;
        if ((ulong)uVar9 != 0) {
          uVar1 = (uint)((ulong)((long)local_78 - lVar15) / (ulong)uVar9);
        }
        if (*puVar13 <= uVar1) {
          uVar1 = 0xffffffff;
        }
        if ((*(uint *)PTR_DAT_04bc0018 <= uVar1) ||
           (uVar3 = *(ushort *)(*(long *)(PTR_DAT_04bc0018 + 8) + (long)(int)uVar1 * 2), 5 < uVar3))
        goto LAB_007ce5a8;
        if ((uVar18 == 5) == (uVar3 == 5)) goto LAB_007cf304;
      }
      uVar9 = param_3[2];
    }
    puVar7 = PTR_DAT_04bc0510;
    if ((param_1[0x10] != 0) && (param_1[0x10] == uVar9)) {
      local_80 = param_1[0x16];
      uStack_7c = param_1[0x17];
      lVar15 = *(long *)puVar6;
      local_78 = (uint *)0x0;
      local_88 = PTR_DAT_04bc0510 + 0x10;
      uVar9 = FUN_0277d6c4(&local_80);
      if (*(long *)puVar6 == 0) {
LAB_007ce66c:
        puVar13 = local_78;
        if (local_78 != (uint *)0x0) goto LAB_007ce674;
LAB_007ce6fc:
        uVar18 = 0;
      }
      else {
        lVar15 = *(long *)(lVar15 + 0x57e58);
        uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar15 + 0x1f8);
        if ((*(uint *)(lVar15 + 0x1d8) <= uVar9) ||
           (*(long *)(*(long *)(lVar15 + 0x1e0) + (long)(int)uVar9 * 8) == 0)) goto LAB_007ce66c;
        lVar15 = *(long *)PTR_DAT_04bc0428;
        uVar9 = FUN_0277d6c4(param_1 + 0x16);
        uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar15 + 0x1f8);
        if ((*(uint *)(lVar15 + 0x1d8) <= uVar9) ||
           (puVar13 = *(uint **)(*(long *)(lVar15 + 0x1e0) + (long)(int)uVar9 * 8),
           puVar13 == (uint *)0x0)) goto LAB_007ce66c;
LAB_007ce674:
        uVar9 = *puVar13;
        uVar18 = 0;
        if ((uVar9 != 0) && (puVar13 != (uint *)(ulong)uVar9)) {
          puVar17 = (uint *)((long)puVar13 - (long)(ulong)uVar9);
          if ((*puVar17 != 0) &&
             ((uVar9 = puVar17[1], uVar9 != 0 && ((ulong)(ushort)puVar17[2] != 0)))) {
            lVar15 = 0xc;
            if (*(char *)((long)puVar17 + 10) != '\0') {
              lVar15 = 0x1c;
            }
            lVar15 = (long)puVar17 + lVar15 + (ulong)(ushort)puVar17[2] * 8;
            if (lVar15 != 0) {
              uVar1 = 0;
              if ((ulong)uVar9 != 0) {
                uVar1 = (uint)((ulong)((long)puVar13 - lVar15) / (ulong)uVar9);
              }
              if (*puVar17 <= uVar1) {
                uVar1 = 0xffffffff;
              }
              if ((uVar1 < *(uint *)PTR_DAT_04bc0018) &&
                 (uVar18 = *(ushort *)(*(long *)(PTR_DAT_04bc0018 + 8) + (long)(int)uVar1 * 2),
                 uVar18 < 6)) goto LAB_007ce700;
            }
          }
          goto LAB_007ce6fc;
        }
      }
LAB_007ce700:
      local_88 = puVar7 + 0x10;
      lVar15 = *(long *)puVar6;
      local_78 = (uint *)0x0;
      local_80 = local_60;
      uStack_7c = local_5c;
      uVar9 = FUN_0277d6c4(&local_80);
      if (*(long *)puVar6 == 0) {
LAB_007ce79c:
        if (local_78 != (uint *)0x0) goto LAB_007ce7a4;
LAB_007ce840:
        if (uVar18 != 5) goto LAB_007cf304;
      }
      else {
        lVar15 = *(long *)(lVar15 + 0x57e58);
        uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar15 + 0x1f8);
        if ((*(uint *)(lVar15 + 0x1d8) <= uVar9) ||
           (*(long *)(*(long *)(lVar15 + 0x1e0) + (long)(int)uVar9 * 8) == 0)) goto LAB_007ce79c;
        lVar15 = *(long *)PTR_DAT_04bc0428;
        uVar9 = FUN_0277d6c4(&local_60);
        uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar15 + 0x1f8);
        if ((*(uint *)(lVar15 + 0x1d8) <= uVar9) ||
           (puVar13 = *(uint **)(*(long *)(lVar15 + 0x1e0) + (long)(int)uVar9 * 8),
           puVar13 == (uint *)0x0)) goto LAB_007ce79c;
        local_78 = puVar13;
LAB_007ce7a4:
        puVar13 = (uint *)((long)local_78 - (ulong)*local_78);
        if ((((*local_78 == 0) || (puVar13 == (uint *)0x0)) || (*puVar13 == 0)) ||
           ((uVar9 = puVar13[1], uVar9 == 0 || ((ulong)(ushort)puVar13[2] == 0))))
        goto LAB_007ce840;
        lVar15 = 0xc;
        if (*(char *)((long)puVar13 + 10) != '\0') {
          lVar15 = 0x1c;
        }
        lVar15 = (long)puVar13 + lVar15 + (ulong)(ushort)puVar13[2] * 8;
        if (lVar15 == 0) goto LAB_007ce840;
        uVar1 = 0;
        if ((ulong)uVar9 != 0) {
          uVar1 = (uint)((ulong)((long)local_78 - lVar15) / (ulong)uVar9);
        }
        if (*puVar13 <= uVar1) {
          uVar1 = 0xffffffff;
        }
        if ((*(uint *)PTR_DAT_04bc0018 <= uVar1) ||
           (uVar3 = *(ushort *)(*(long *)(PTR_DAT_04bc0018 + 8) + (long)(int)uVar1 * 2), 5 < uVar3))
        goto LAB_007ce840;
        if ((uVar18 == 5) == (uVar3 == 5)) goto LAB_007cf304;
      }
      uVar9 = param_3[2];
    }
    puVar7 = PTR_DAT_04bc0510;
    if ((param_1[0x18] != 0) && (param_1[0x18] == uVar9)) {
      local_80 = param_1[0x1e];
      uStack_7c = param_1[0x1f];
      lVar15 = *(long *)puVar6;
      local_78 = (uint *)0x0;
      local_88 = PTR_DAT_04bc0510 + 0x10;
      uVar9 = FUN_0277d6c4(&local_80);
      if (*(long *)puVar6 == 0) {
LAB_007ce904:
        puVar13 = local_78;
        if (local_78 != (uint *)0x0) goto LAB_007ce90c;
LAB_007ce994:
        uVar18 = 0;
      }
      else {
        lVar15 = *(long *)(lVar15 + 0x57e58);
        uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar15 + 0x1f8);
        if ((*(uint *)(lVar15 + 0x1d8) <= uVar9) ||
           (*(long *)(*(long *)(lVar15 + 0x1e0) + (long)(int)uVar9 * 8) == 0)) goto LAB_007ce904;
        lVar15 = *(long *)PTR_DAT_04bc0428;
        uVar9 = FUN_0277d6c4(param_1 + 0x1e);
        uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar15 + 0x1f8);
        if ((*(uint *)(lVar15 + 0x1d8) <= uVar9) ||
           (puVar13 = *(uint **)(*(long *)(lVar15 + 0x1e0) + (long)(int)uVar9 * 8),
           puVar13 == (uint *)0x0)) goto LAB_007ce904;
LAB_007ce90c:
        uVar9 = *puVar13;
        uVar18 = 0;
        if ((uVar9 != 0) && (puVar13 != (uint *)(ulong)uVar9)) {
          puVar17 = (uint *)((long)puVar13 - (long)(ulong)uVar9);
          if ((*puVar17 != 0) &&
             ((uVar9 = puVar17[1], uVar9 != 0 && ((ulong)(ushort)puVar17[2] != 0)))) {
            lVar15 = 0xc;
            if (*(char *)((long)puVar17 + 10) != '\0') {
              lVar15 = 0x1c;
            }
            lVar15 = (long)puVar17 + lVar15 + (ulong)(ushort)puVar17[2] * 8;
            if (lVar15 != 0) {
              uVar1 = 0;
              if ((ulong)uVar9 != 0) {
                uVar1 = (uint)((ulong)((long)puVar13 - lVar15) / (ulong)uVar9);
              }
              if (*puVar17 <= uVar1) {
                uVar1 = 0xffffffff;
              }
              if ((uVar1 < *(uint *)PTR_DAT_04bc0018) &&
                 (uVar18 = *(ushort *)(*(long *)(PTR_DAT_04bc0018 + 8) + (long)(int)uVar1 * 2),
                 uVar18 < 6)) goto LAB_007ce998;
            }
          }
          goto LAB_007ce994;
        }
      }
LAB_007ce998:
      local_88 = puVar7 + 0x10;
      lVar15 = *(long *)puVar6;
      local_78 = (uint *)0x0;
      local_80 = local_60;
      uStack_7c = local_5c;
      uVar9 = FUN_0277d6c4(&local_80);
      if (*(long *)puVar6 == 0) {
LAB_007cea34:
        if (local_78 != (uint *)0x0) goto LAB_007cea3c;
LAB_007cead8:
        if (uVar18 != 5) goto LAB_007cf304;
      }
      else {
        lVar15 = *(long *)(lVar15 + 0x57e58);
        uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar15 + 0x1f8);
        if ((*(uint *)(lVar15 + 0x1d8) <= uVar9) ||
           (*(long *)(*(long *)(lVar15 + 0x1e0) + (long)(int)uVar9 * 8) == 0)) goto LAB_007cea34;
        lVar15 = *(long *)PTR_DAT_04bc0428;
        uVar9 = FUN_0277d6c4(&local_60);
        uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar15 + 0x1f8);
        if ((*(uint *)(lVar15 + 0x1d8) <= uVar9) ||
           (puVar13 = *(uint **)(*(long *)(lVar15 + 0x1e0) + (long)(int)uVar9 * 8),
           puVar13 == (uint *)0x0)) goto LAB_007cea34;
        local_78 = puVar13;
LAB_007cea3c:
        puVar13 = (uint *)((long)local_78 - (ulong)*local_78);
        if ((((*local_78 == 0) || (puVar13 == (uint *)0x0)) || (*puVar13 == 0)) ||
           ((uVar9 = puVar13[1], uVar9 == 0 || ((ulong)(ushort)puVar13[2] == 0))))
        goto LAB_007cead8;
        lVar15 = 0xc;
        if (*(char *)((long)puVar13 + 10) != '\0') {
          lVar15 = 0x1c;
        }
        lVar15 = (long)puVar13 + lVar15 + (ulong)(ushort)puVar13[2] * 8;
        if (lVar15 == 0) goto LAB_007cead8;
        uVar1 = 0;
        if ((ulong)uVar9 != 0) {
          uVar1 = (uint)((ulong)((long)local_78 - lVar15) / (ulong)uVar9);
        }
        if (*puVar13 <= uVar1) {
          uVar1 = 0xffffffff;
        }
        if ((*(uint *)PTR_DAT_04bc0018 <= uVar1) ||
           (uVar3 = *(ushort *)(*(long *)(PTR_DAT_04bc0018 + 8) + (long)(int)uVar1 * 2), 5 < uVar3))
        goto LAB_007cead8;
        if ((uVar18 == 5) == (uVar3 == 5)) goto LAB_007cf304;
      }
      uVar9 = param_3[2];
    }
    puVar7 = PTR_DAT_04bc0510;
    if ((param_1[0x20] != 0) && (param_1[0x20] == uVar9)) {
      local_80 = param_1[0x26];
      uStack_7c = param_1[0x27];
      lVar15 = *(long *)puVar6;
      local_78 = (uint *)0x0;
      local_88 = PTR_DAT_04bc0510 + 0x10;
      uVar9 = FUN_0277d6c4(&local_80);
      if (*(long *)puVar6 == 0) {
LAB_007ceb9c:
        puVar13 = local_78;
        if (local_78 != (uint *)0x0) goto LAB_007ceba4;
LAB_007cec2c:
        uVar18 = 0;
      }
      else {
        lVar15 = *(long *)(lVar15 + 0x57e58);
        uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar15 + 0x1f8);
        if ((*(uint *)(lVar15 + 0x1d8) <= uVar9) ||
           (*(long *)(*(long *)(lVar15 + 0x1e0) + (long)(int)uVar9 * 8) == 0)) goto LAB_007ceb9c;
        lVar15 = *(long *)PTR_DAT_04bc0428;
        uVar9 = FUN_0277d6c4(param_1 + 0x26);
        uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar15 + 0x1f8);
        if ((*(uint *)(lVar15 + 0x1d8) <= uVar9) ||
           (puVar13 = *(uint **)(*(long *)(lVar15 + 0x1e0) + (long)(int)uVar9 * 8),
           puVar13 == (uint *)0x0)) goto LAB_007ceb9c;
LAB_007ceba4:
        uVar9 = *puVar13;
        uVar18 = 0;
        if ((uVar9 != 0) && (puVar13 != (uint *)(ulong)uVar9)) {
          puVar17 = (uint *)((long)puVar13 - (long)(ulong)uVar9);
          if ((*puVar17 != 0) &&
             ((uVar9 = puVar17[1], uVar9 != 0 && ((ulong)(ushort)puVar17[2] != 0)))) {
            lVar15 = 0xc;
            if (*(char *)((long)puVar17 + 10) != '\0') {
              lVar15 = 0x1c;
            }
            lVar15 = (long)puVar17 + lVar15 + (ulong)(ushort)puVar17[2] * 8;
            if (lVar15 != 0) {
              uVar1 = 0;
              if ((ulong)uVar9 != 0) {
                uVar1 = (uint)((ulong)((long)puVar13 - lVar15) / (ulong)uVar9);
              }
              if (*puVar17 <= uVar1) {
                uVar1 = 0xffffffff;
              }
              if ((uVar1 < *(uint *)PTR_DAT_04bc0018) &&
                 (uVar18 = *(ushort *)(*(long *)(PTR_DAT_04bc0018 + 8) + (long)(int)uVar1 * 2),
                 uVar18 < 6)) goto LAB_007cec30;
            }
          }
          goto LAB_007cec2c;
        }
      }
LAB_007cec30:
      local_88 = puVar7 + 0x10;
      lVar15 = *(long *)puVar6;
      local_78 = (uint *)0x0;
      local_80 = local_60;
      uStack_7c = local_5c;
      uVar9 = FUN_0277d6c4(&local_80);
      if (*(long *)puVar6 == 0) {
LAB_007ceccc:
        if (local_78 != (uint *)0x0) goto LAB_007cecd4;
LAB_007ced70:
        if (uVar18 != 5) goto LAB_007cf304;
      }
      else {
        lVar15 = *(long *)(lVar15 + 0x57e58);
        uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar15 + 0x1f8);
        if ((*(uint *)(lVar15 + 0x1d8) <= uVar9) ||
           (*(long *)(*(long *)(lVar15 + 0x1e0) + (long)(int)uVar9 * 8) == 0)) goto LAB_007ceccc;
        lVar15 = *(long *)PTR_DAT_04bc0428;
        uVar9 = FUN_0277d6c4(&local_60);
        uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar15 + 0x1f8);
        if ((*(uint *)(lVar15 + 0x1d8) <= uVar9) ||
           (puVar13 = *(uint **)(*(long *)(lVar15 + 0x1e0) + (long)(int)uVar9 * 8),
           puVar13 == (uint *)0x0)) goto LAB_007ceccc;
        local_78 = puVar13;
LAB_007cecd4:
        puVar13 = (uint *)((long)local_78 - (ulong)*local_78);
        if ((((*local_78 == 0) || (puVar13 == (uint *)0x0)) || (*puVar13 == 0)) ||
           ((uVar9 = puVar13[1], uVar9 == 0 || ((ulong)(ushort)puVar13[2] == 0))))
        goto LAB_007ced70;
        lVar15 = 0xc;
        if (*(char *)((long)puVar13 + 10) != '\0') {
          lVar15 = 0x1c;
        }
        lVar15 = (long)puVar13 + lVar15 + (ulong)(ushort)puVar13[2] * 8;
        if (lVar15 == 0) goto LAB_007ced70;
        uVar1 = 0;
        if ((ulong)uVar9 != 0) {
          uVar1 = (uint)((ulong)((long)local_78 - lVar15) / (ulong)uVar9);
        }
        if (*puVar13 <= uVar1) {
          uVar1 = 0xffffffff;
        }
        if ((*(uint *)PTR_DAT_04bc0018 <= uVar1) ||
           (uVar3 = *(ushort *)(*(long *)(PTR_DAT_04bc0018 + 8) + (long)(int)uVar1 * 2), 5 < uVar3))
        goto LAB_007ced70;
        if ((uVar18 == 5) == (uVar3 == 5)) goto LAB_007cf304;
      }
      uVar9 = param_3[2];
    }
    puVar7 = PTR_DAT_04bc0510;
    if ((param_1[0x28] != 0) && (param_1[0x28] == uVar9)) {
      local_80 = param_1[0x2e];
      uStack_7c = param_1[0x2f];
      lVar15 = *(long *)puVar6;
      local_78 = (uint *)0x0;
      local_88 = PTR_DAT_04bc0510 + 0x10;
      uVar9 = FUN_0277d6c4(&local_80);
      if (*(long *)puVar6 == 0) {
LAB_007cee34:
        puVar13 = local_78;
        if (local_78 != (uint *)0x0) goto LAB_007cee3c;
LAB_007ceec4:
        uVar18 = 0;
      }
      else {
        lVar15 = *(long *)(lVar15 + 0x57e58);
        uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar15 + 0x1f8);
        if ((*(uint *)(lVar15 + 0x1d8) <= uVar9) ||
           (*(long *)(*(long *)(lVar15 + 0x1e0) + (long)(int)uVar9 * 8) == 0)) goto LAB_007cee34;
        lVar15 = *(long *)PTR_DAT_04bc0428;
        uVar9 = FUN_0277d6c4(param_1 + 0x2e);
        uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar15 + 0x1f8);
        if ((*(uint *)(lVar15 + 0x1d8) <= uVar9) ||
           (puVar13 = *(uint **)(*(long *)(lVar15 + 0x1e0) + (long)(int)uVar9 * 8),
           puVar13 == (uint *)0x0)) goto LAB_007cee34;
LAB_007cee3c:
        uVar9 = *puVar13;
        uVar18 = 0;
        if ((uVar9 != 0) && (puVar13 != (uint *)(ulong)uVar9)) {
          puVar17 = (uint *)((long)puVar13 - (long)(ulong)uVar9);
          if ((*puVar17 != 0) &&
             ((uVar9 = puVar17[1], uVar9 != 0 && ((ulong)(ushort)puVar17[2] != 0)))) {
            lVar15 = 0xc;
            if (*(char *)((long)puVar17 + 10) != '\0') {
              lVar15 = 0x1c;
            }
            lVar15 = (long)puVar17 + lVar15 + (ulong)(ushort)puVar17[2] * 8;
            if (lVar15 != 0) {
              uVar1 = 0;
              if ((ulong)uVar9 != 0) {
                uVar1 = (uint)((ulong)((long)puVar13 - lVar15) / (ulong)uVar9);
              }
              if (*puVar17 <= uVar1) {
                uVar1 = 0xffffffff;
              }
              if ((uVar1 < *(uint *)PTR_DAT_04bc0018) &&
                 (uVar18 = *(ushort *)(*(long *)(PTR_DAT_04bc0018 + 8) + (long)(int)uVar1 * 2),
                 uVar18 < 6)) goto LAB_007ceec8;
            }
          }
          goto LAB_007ceec4;
        }
      }
LAB_007ceec8:
      local_88 = puVar7 + 0x10;
      lVar15 = *(long *)puVar6;
      local_78 = (uint *)0x0;
      local_80 = local_60;
      uStack_7c = local_5c;
      uVar9 = FUN_0277d6c4(&local_80);
      if (*(long *)puVar6 == 0) {
LAB_007cef64:
        if (local_78 != (uint *)0x0) goto LAB_007cef6c;
LAB_007cf008:
        if (uVar18 != 5) goto LAB_007cf304;
      }
      else {
        lVar15 = *(long *)(lVar15 + 0x57e58);
        uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar15 + 0x1f8);
        if ((*(uint *)(lVar15 + 0x1d8) <= uVar9) ||
           (*(long *)(*(long *)(lVar15 + 0x1e0) + (long)(int)uVar9 * 8) == 0)) goto LAB_007cef64;
        lVar15 = *(long *)PTR_DAT_04bc0428;
        uVar9 = FUN_0277d6c4(&local_60);
        uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar15 + 0x1f8);
        if ((*(uint *)(lVar15 + 0x1d8) <= uVar9) ||
           (puVar13 = *(uint **)(*(long *)(lVar15 + 0x1e0) + (long)(int)uVar9 * 8),
           puVar13 == (uint *)0x0)) goto LAB_007cef64;
        local_78 = puVar13;
LAB_007cef6c:
        puVar13 = (uint *)((long)local_78 - (ulong)*local_78);
        if ((((*local_78 == 0) || (puVar13 == (uint *)0x0)) || (*puVar13 == 0)) ||
           ((uVar9 = puVar13[1], uVar9 == 0 || ((ulong)(ushort)puVar13[2] == 0))))
        goto LAB_007cf008;
        lVar15 = 0xc;
        if (*(char *)((long)puVar13 + 10) != '\0') {
          lVar15 = 0x1c;
        }
        lVar15 = (long)puVar13 + lVar15 + (ulong)(ushort)puVar13[2] * 8;
        if (lVar15 == 0) goto LAB_007cf008;
        uVar1 = 0;
        if ((ulong)uVar9 != 0) {
          uVar1 = (uint)((ulong)((long)local_78 - lVar15) / (ulong)uVar9);
        }
        if (*puVar13 <= uVar1) {
          uVar1 = 0xffffffff;
        }
        if ((*(uint *)PTR_DAT_04bc0018 <= uVar1) ||
           (uVar3 = *(ushort *)(*(long *)(PTR_DAT_04bc0018 + 8) + (long)(int)uVar1 * 2), 5 < uVar3))
        goto LAB_007cf008;
        if ((uVar18 == 5) == (uVar3 == 5)) goto LAB_007cf304;
      }
      uVar9 = param_3[2];
    }
    puVar7 = PTR_DAT_04bc0510;
    if ((param_1[0x30] != 0) && (param_1[0x30] == uVar9)) {
      local_80 = param_1[0x36];
      uStack_7c = param_1[0x37];
      lVar15 = *(long *)puVar6;
      local_78 = (uint *)0x0;
      local_88 = PTR_DAT_04bc0510 + 0x10;
      uVar9 = FUN_0277d6c4(&local_80);
      if (*(long *)puVar6 == 0) {
LAB_007cf0cc:
        puVar13 = local_78;
        if (local_78 != (uint *)0x0) goto LAB_007cf0d4;
LAB_007cf15c:
        uVar18 = 0;
      }
      else {
        lVar15 = *(long *)(lVar15 + 0x57e58);
        uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar15 + 0x1f8);
        if ((*(uint *)(lVar15 + 0x1d8) <= uVar9) ||
           (*(long *)(*(long *)(lVar15 + 0x1e0) + (long)(int)uVar9 * 8) == 0)) goto LAB_007cf0cc;
        lVar15 = *(long *)PTR_DAT_04bc0428;
        uVar9 = FUN_0277d6c4(param_1 + 0x36);
        uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar15 + 0x1f8);
        if ((*(uint *)(lVar15 + 0x1d8) <= uVar9) ||
           (puVar13 = *(uint **)(*(long *)(lVar15 + 0x1e0) + (long)(int)uVar9 * 8),
           puVar13 == (uint *)0x0)) goto LAB_007cf0cc;
LAB_007cf0d4:
        uVar9 = *puVar13;
        uVar18 = 0;
        if ((uVar9 != 0) && (puVar13 != (uint *)(ulong)uVar9)) {
          puVar17 = (uint *)((long)puVar13 - (long)(ulong)uVar9);
          if ((*puVar17 != 0) &&
             ((uVar9 = puVar17[1], uVar9 != 0 && ((ulong)(ushort)puVar17[2] != 0)))) {
            lVar15 = 0xc;
            if (*(char *)((long)puVar17 + 10) != '\0') {
              lVar15 = 0x1c;
            }
            lVar15 = (long)puVar17 + lVar15 + (ulong)(ushort)puVar17[2] * 8;
            if (lVar15 != 0) {
              uVar1 = 0;
              if ((ulong)uVar9 != 0) {
                uVar1 = (uint)((ulong)((long)puVar13 - lVar15) / (ulong)uVar9);
              }
              if (*puVar17 <= uVar1) {
                uVar1 = 0xffffffff;
              }
              if ((uVar1 < *(uint *)PTR_DAT_04bc0018) &&
                 (uVar18 = *(ushort *)(*(long *)(PTR_DAT_04bc0018 + 8) + (long)(int)uVar1 * 2),
                 uVar18 < 6)) goto LAB_007cf160;
            }
          }
          goto LAB_007cf15c;
        }
      }
LAB_007cf160:
      local_88 = puVar7 + 0x10;
      lVar15 = *(long *)puVar6;
      local_78 = (uint *)0x0;
      local_80 = local_60;
      uStack_7c = local_5c;
      uVar9 = FUN_0277d6c4(&local_80);
      if (*(long *)puVar6 == 0) {
LAB_007cf1fc:
        if (local_78 != (uint *)0x0) goto LAB_007cf204;
LAB_007cf2a0:
        if (uVar18 != 5) goto LAB_007cf304;
      }
      else {
        lVar15 = *(long *)(lVar15 + 0x57e58);
        uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar15 + 0x1f8);
        if ((*(uint *)(lVar15 + 0x1d8) <= uVar9) ||
           (*(long *)(*(long *)(lVar15 + 0x1e0) + (long)(int)uVar9 * 8) == 0)) goto LAB_007cf1fc;
        lVar15 = *(long *)PTR_DAT_04bc0428;
        uVar9 = FUN_0277d6c4(&local_60);
        uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar15 + 0x1f8);
        if ((*(uint *)(lVar15 + 0x1d8) <= uVar9) ||
           (puVar13 = *(uint **)(*(long *)(lVar15 + 0x1e0) + (long)(int)uVar9 * 8),
           puVar13 == (uint *)0x0)) goto LAB_007cf1fc;
        local_78 = puVar13;
LAB_007cf204:
        puVar13 = (uint *)((long)local_78 - (ulong)*local_78);
        if ((((*local_78 == 0) || (puVar13 == (uint *)0x0)) || (*puVar13 == 0)) ||
           ((uVar9 = puVar13[1], uVar9 == 0 || ((ulong)(ushort)puVar13[2] == 0))))
        goto LAB_007cf2a0;
        lVar15 = 0xc;
        if (*(char *)((long)puVar13 + 10) != '\0') {
          lVar15 = 0x1c;
        }
        lVar15 = (long)puVar13 + lVar15 + (ulong)(ushort)puVar13[2] * 8;
        if (lVar15 == 0) goto LAB_007cf2a0;
        uVar1 = 0;
        if ((ulong)uVar9 != 0) {
          uVar1 = (uint)((ulong)((long)local_78 - lVar15) / (ulong)uVar9);
        }
        if (*puVar13 <= uVar1) {
          uVar1 = 0xffffffff;
        }
        if ((*(uint *)PTR_DAT_04bc0018 <= uVar1) ||
           (uVar3 = *(ushort *)(*(long *)(PTR_DAT_04bc0018 + 8) + (long)(int)uVar1 * 2), 5 < uVar3))
        goto LAB_007cf2a0;
        if ((uVar18 == 5) == (uVar3 == 5)) goto LAB_007cf304;
      }
      uVar9 = param_3[2];
    }
    if ((param_1[0x38] != 0) && (param_1[0x38] == uVar9)) {
      FUN_01ad5d04(&local_88,param_1 + 0x3e);
      iVar10 = FUN_01aee7b8(&local_88);
      FUN_01ad5d04(&local_88,&local_60);
      iVar11 = FUN_01aee7b8(&local_88);
      if ((iVar10 == 5) == (iVar11 == 5)) goto LAB_007cf304;
    }
    bVar8 = false;
  }
  else {
    local_78 = (uint *)0x0;
    local_88 = PTR_DAT_04bc0510 + 0x10;
    local_80 = param_1[6];
    uStack_7c = param_1[7];
    uVar9 = FUN_0277d6c4(&local_80);
    if (*(long *)puVar6 == 0) {
LAB_007ce13c:
      puVar13 = local_78;
      if (local_78 != (uint *)0x0) goto LAB_007ce144;
LAB_007ce1cc:
      uVar18 = 0;
    }
    else {
      lVar15 = *(long *)(lVar19 + 0x57e58);
      uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar15 + 0x1f8);
      if ((*(uint *)(lVar15 + 0x1d8) <= uVar9) ||
         (*(long *)(*(long *)(lVar15 + 0x1e0) + (long)(int)uVar9 * 8) == 0)) goto LAB_007ce13c;
      lVar15 = *(long *)PTR_DAT_04bc0428;
      uVar9 = FUN_0277d6c4(param_1 + 6);
      uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar15 + 0x1f8);
      if ((*(uint *)(lVar15 + 0x1d8) <= uVar9) ||
         (puVar13 = *(uint **)(*(long *)(lVar15 + 0x1e0) + (long)(int)uVar9 * 8),
         puVar13 == (uint *)0x0)) goto LAB_007ce13c;
LAB_007ce144:
      uVar9 = *puVar13;
      uVar18 = 0;
      if ((uVar9 != 0) && (puVar13 != (uint *)(ulong)uVar9)) {
        puVar17 = (uint *)((long)puVar13 - (long)(ulong)uVar9);
        if ((*puVar17 != 0) &&
           ((uVar9 = puVar17[1], uVar9 != 0 && ((ulong)(ushort)puVar17[2] != 0)))) {
          lVar15 = 0xc;
          if (*(char *)((long)puVar17 + 10) != '\0') {
            lVar15 = 0x1c;
          }
          lVar15 = (long)puVar17 + lVar15 + (ulong)(ushort)puVar17[2] * 8;
          if (lVar15 != 0) {
            uVar1 = 0;
            if ((ulong)uVar9 != 0) {
              uVar1 = (uint)((ulong)((long)puVar13 - lVar15) / (ulong)uVar9);
            }
            if (*puVar17 <= uVar1) {
              uVar1 = 0xffffffff;
            }
            if ((uVar1 < *(uint *)PTR_DAT_04bc0018) &&
               (uVar18 = *(ushort *)(*(long *)(PTR_DAT_04bc0018 + 8) + (long)(int)uVar1 * 2),
               uVar18 < 6)) goto LAB_007ce1d0;
          }
        }
        goto LAB_007ce1cc;
      }
    }
LAB_007ce1d0:
    local_88 = puVar7 + 0x10;
    lVar15 = *(long *)puVar6;
    local_78 = (uint *)0x0;
    local_80 = local_60;
    uStack_7c = local_5c;
    uVar9 = FUN_0277d6c4(&local_80);
    if (*(long *)puVar6 == 0) {
LAB_007ce26c:
      if (local_78 != (uint *)0x0) goto LAB_007ce274;
LAB_007ce310:
      if (uVar18 == 5) {
LAB_007ce318:
        uVar9 = param_3[2];
        goto LAB_007ce31c;
      }
    }
    else {
      lVar15 = *(long *)(lVar15 + 0x57e58);
      uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar15 + 0x1f8);
      if ((*(uint *)(lVar15 + 0x1d8) <= uVar9) ||
         (*(long *)(*(long *)(lVar15 + 0x1e0) + (long)(int)uVar9 * 8) == 0)) goto LAB_007ce26c;
      lVar15 = *(long *)PTR_DAT_04bc0428;
      uVar9 = FUN_0277d6c4(&local_60);
      uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar15 + 0x1f8);
      if ((*(uint *)(lVar15 + 0x1d8) <= uVar9) ||
         (puVar13 = *(uint **)(*(long *)(lVar15 + 0x1e0) + (long)(int)uVar9 * 8),
         puVar13 == (uint *)0x0)) goto LAB_007ce26c;
      local_78 = puVar13;
LAB_007ce274:
      puVar13 = (uint *)((long)local_78 - (ulong)*local_78);
      if ((((*local_78 == 0) || (puVar13 == (uint *)0x0)) || (*puVar13 == 0)) ||
         ((uVar9 = puVar13[1], uVar9 == 0 || ((ulong)(ushort)puVar13[2] == 0)))) goto LAB_007ce310;
      lVar15 = 0xc;
      if (*(char *)((long)puVar13 + 10) != '\0') {
        lVar15 = 0x1c;
      }
      lVar15 = (long)puVar13 + lVar15 + (ulong)(ushort)puVar13[2] * 8;
      if (lVar15 == 0) goto LAB_007ce310;
      uVar1 = 0;
      if ((ulong)uVar9 != 0) {
        uVar1 = (uint)((ulong)((long)local_78 - lVar15) / (ulong)uVar9);
      }
      if (*puVar13 <= uVar1) {
        uVar1 = 0xffffffff;
      }
      if ((*(uint *)PTR_DAT_04bc0018 <= uVar1) ||
         (uVar3 = *(ushort *)(*(long *)(PTR_DAT_04bc0018 + 8) + (long)(int)uVar1 * 2), 5 < uVar3))
      goto LAB_007ce310;
      if ((uVar18 == 5) != (uVar3 == 5)) goto LAB_007ce318;
    }
LAB_007cf304:
    bVar8 = true;
  }
  bVar2 = *(byte *)(param_3 + 1);
  bVar14 = bVar2;
  if (7 < bVar2) {
    bVar14 = 0xff;
  }
  puVar13 = param_1 + ((long)(char)bVar14 & 0xffffffffU) * 8;
  if (7 < bVar2) {
    puVar13 = param_1;
  }
  if ((!bVar8) && (*puVar13 == 0)) {
    local_70 = param_3[6];
    iStack_6c = param_3[7];
    local_80 = param_3[2];
    uStack_7c = param_3[3];
    local_68 = (undefined2)param_3[8];
    local_58 = 0;
    local_52 = 0;
    local_78 = (uint *)(PTR_DAT_04bb2010 + 0x10);
    local_88 = (undefined *)CONCAT44(CONCAT31(local_88._5_3_,bVar14),1);
    local_54 = 0xff00;
    if (-1 < DAT_04cadf30) {
      FUN_01db1df0(**(long **)puVar5 + 0x480,DAT_04cadf30,&local_58,&local_88,0x28,0);
      local_80 = param_3[2];
      bVar2 = *(byte *)(param_3 + 1);
    }
    bVar8 = 7 < bVar2;
    if (bVar8) {
      bVar2 = 0xff;
    }
    puVar13 = param_1 + ((long)(char)bVar2 & 0xffffffffU) * 8;
    if (bVar8) {
      puVar13 = param_1;
    }
    *puVar13 = local_80;
    bVar4 = *(byte *)(param_3 + 1);
    bVar8 = 7 < bVar4;
    if (bVar8) {
      bVar4 = 0xff;
    }
    puVar13 = param_1 + ((long)(char)bVar4 & 0xffffffffU) * 8;
    if (bVar8) {
      puVar13 = param_1;
    }
    puVar13[4] = param_3[6];
    puVar13[5] = param_3[7];
    bVar4 = *(byte *)(param_3 + 1);
    bVar8 = 7 < bVar4;
    if (bVar8) {
      bVar4 = 0xff;
    }
    puVar13 = param_1 + ((long)(char)bVar4 & 0xffffffffU) * 8;
    if (bVar8) {
      puVar13 = param_1;
    }
    puVar13[1] = param_3[3];
    bVar4 = *(byte *)(param_3 + 1);
    bVar8 = 7 < bVar4;
    if (bVar8) {
      bVar4 = 0xff;
    }
    puVar13 = param_1 + ((long)(char)bVar4 & 0xffffffffU) * 8;
    if (bVar8) {
      puVar13 = param_1;
    }
    puVar13[6] = local_60;
    puVar13[7] = local_5c;
    return;
  }
LAB_007cf43c:
  local_70 = param_3[6];
  iStack_6c = param_3[7];
  local_80 = param_3[2];
  uStack_7c = param_3[3];
  local_68 = (undefined2)param_3[8];
  local_58 = 0;
  local_52 = 0;
  local_78 = (uint *)(PTR_DAT_04bb2010 + 0x10);
  bVar14 = *(byte *)(param_3 + 1);
  if (7 < bVar14) {
    bVar14 = 0xff;
  }
  local_88._0_5_ = CONCAT14(bVar14,2);
  local_54 = CONCAT11(bVar4,4);
  if (DAT_04cadf30 < 0) {
    return;
  }
  FUN_01db1df0(**(long **)puVar5 + 0x480,DAT_04cadf30,&local_58,&local_88,0x28,0);
  return;
}


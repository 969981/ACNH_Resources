
void FUN_001c4a10(long *param_1,ulong param_2,ulong param_3,long param_4,undefined1 param_5)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  undefined1 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  char cVar7;
  int iVar8;
  long *plVar9;
  undefined8 *puVar10;
  uint *puVar11;
  undefined1 *puVar12;
  long lVar13;
  long *plVar14;
  ulong uVar15;
  undefined *puVar16;
  undefined *puVar17;
  ulong uVar18;
  ulong uVar19;
  ulong *puVar20;
  ulong *puVar21;
  ulong *puVar22;
  undefined4 uVar23;
  ulong uVar24;
  undefined2 uVar25;
  uint uVar26;
  undefined1 auVar27 [16];
  undefined8 uStack_d0;
  undefined2 auStack_c4 [2];
  ulong *local_58;
  long local_50;
  long local_48;
  
  uVar15 = param_1[1];
  uVar24 = param_2 - uVar15;
  if (param_2 < uVar15 || uVar24 == 0) {
    param_1[1] = param_2;
    return;
  }
  uVar19 = param_1[2] * 0x40;
  if (uVar24 <= uVar19 && uVar15 <= uVar19 - uVar24) {
    uVar19 = (ulong)((uint)uVar15 & 0x3f);
    param_1[1] = param_2;
    puVar21 = (ulong *)(*param_1 + (uVar15 >> 6) * 8);
LAB_001c4b60:
    if (uVar24 != 0) {
      iVar8 = (int)uVar19;
      if ((param_3 & 1) == 0) {
        puVar22 = puVar21;
        if (iVar8 != 0) {
          uVar18 = (ulong)(0x40 - iVar8);
          uVar15 = uVar18;
          if (uVar24 <= uVar18) {
            uVar15 = uVar24;
          }
          uVar24 = uVar24 - uVar15;
          puVar22 = puVar21 + 1;
          *puVar21 = *puVar21 &
                     (0xffffffffffffffffU >> (uVar18 - uVar15 & 0x3f) & -1L << uVar19 ^
                     0xffffffffffffffff);
        }
        uVar15 = uVar24 >> 6;
        if (0x3f < uVar24) {
          uVar19 = uVar24 >> 6 & 3;
          uVar18 = uVar15;
          puVar21 = puVar22;
          if (uVar19 != 0) {
            uVar18 = uVar15 & 0x3fffffffffffffc;
            puVar20 = puVar22;
            do {
              uVar19 = uVar19 - 1;
              puVar21 = puVar20 + 1;
              *puVar20 = 0;
              puVar20 = puVar21;
            } while (uVar19 != 0);
          }
          if (2 < uVar15 - 1) {
            do {
              *puVar21 = 0;
              puVar21[1] = 0;
              uVar18 = uVar18 - 4;
              puVar21[2] = 0;
              puVar21[3] = 0;
              puVar21 = puVar21 + 4;
            } while (uVar18 != 0);
          }
        }
        if ((uVar24 & 0x3f) != 0) {
          puVar22[uVar15] =
               puVar22[uVar15] &
               (0xffffffffffffffffU >> (-(uVar24 & 0x3f) & 0x3f) ^ 0xffffffffffffffff);
          return;
        }
      }
      else {
        puVar22 = puVar21;
        if (iVar8 != 0) {
          uVar18 = (ulong)(0x40 - iVar8);
          uVar15 = uVar18;
          if (uVar24 <= uVar18) {
            uVar15 = uVar24;
          }
          uVar24 = uVar24 - uVar15;
          puVar22 = puVar21 + 1;
          *puVar21 = *puVar21 | 0xffffffffffffffffU >> (uVar18 - uVar15 & 0x3f) & -1L << uVar19;
        }
        uVar15 = uVar24 >> 6;
        if (0x3f < uVar24) {
          uVar19 = uVar24 >> 6 & 3;
          uVar18 = uVar15;
          puVar21 = puVar22;
          if (uVar19 != 0) {
            uVar18 = uVar15 & 0x3fffffffffffffc;
            puVar20 = puVar22;
            do {
              uVar19 = uVar19 - 1;
              puVar21 = puVar20 + 1;
              *puVar20 = 0xffffffffffffffff;
              puVar20 = puVar21;
            } while (uVar19 != 0);
          }
          if (2 < uVar15 - 1) {
            do {
              *puVar21 = 0xffffffffffffffff;
              puVar21[1] = 0xffffffffffffffff;
              uVar18 = uVar18 - 4;
              puVar21[2] = 0xffffffffffffffff;
              puVar21[3] = 0xffffffffffffffff;
              puVar21 = puVar21 + 4;
            } while (uVar18 != 0);
          }
        }
        if ((uVar24 & 0x3f) != 0) {
          puVar22[uVar15] = puVar22[uVar15] | 0xffffffffffffffffU >> (-(uVar24 & 0x3f) & 0x3f);
          return;
        }
      }
    }
    return;
  }
  local_58 = (ulong *)0x0;
  local_50 = 0;
  local_48 = 0;
  if (-1 < (long)param_2) {
    if (uVar19 < 0x3fffffffffffffff) {
      uVar15 = param_1[2] * 0x80;
      uVar19 = param_2 + 0x3f & 0xffffffffffffffc0;
      if (uVar15 <= uVar19) {
        uVar15 = uVar19;
      }
    }
    else {
      uVar15 = 0x7fffffffffffffff;
    }
    FUN_001dedd0(&local_58,uVar15);
    puVar21 = local_58;
    puVar22 = (ulong *)*param_1;
    uVar19 = param_1[1];
    local_50 = uVar19 + uVar24;
    if ((long)uVar19 < 1) {
      uVar19 = 0;
    }
    else {
      uVar15 = uVar19 >> 6;
      if (0x3f < uVar19) {
        memmove(local_58,puVar22,uVar15 << 3);
      }
      puVar21 = puVar21 + uVar15;
      uVar19 = uVar19 & 0x3f;
      if (uVar19 == 0) {
        uVar19 = 0;
      }
      else {
        uVar18 = 0xffffffffffffffff >> (-uVar19 & 0x3f);
        *puVar21 = *puVar21 & (uVar18 ^ 0xffffffffffffffff) | puVar22[uVar15] & uVar18;
      }
      puVar22 = (ulong *)*param_1;
    }
    lVar13 = param_1[1];
    lVar2 = param_1[2];
    *param_1 = (long)local_58;
    param_1[1] = local_50;
    param_1[2] = local_48;
    if (puVar22 != (ulong *)0x0) {
      local_58 = puVar22;
      local_50 = lVar13;
      local_48 = lVar2;
      FUN_00187e4c(puVar22);
    }
    goto LAB_001c4b60;
  }
  auVar27 = FUN_001deed8(param_1);
  plVar9 = auVar27._0_8_;
  *plVar9 = (long)(PTR_DAT_04bcc310 + 0x10);
  FUN_001b8358(plVar9 + 2,param_3);
  *(undefined4 *)(plVar9 + 0x11) = 0;
  *(undefined1 *)(plVar9 + 0x16) = 0;
  plVar9[0x17] = 0;
  plVar9[0x10] = 0;
  *(undefined4 *)(plVar9 + 0x12) = 0;
  plVar9[0x13] = 0;
  plVar9[0x14] = 0;
  puVar17 = PTR_DAT_04bcc678 + 0x10;
  *(undefined2 *)(plVar9 + 0x18) = 0;
  plVar9[0x1b] = 0;
  plVar9[0x19] = 0;
  plVar9[0x1a] = 0;
  *plVar9 = (long)puVar17;
  plVar9[1] = auVar27._8_8_;
  puVar10 = (undefined8 *)FUN_00187df4(8);
  plVar9[0x19] = (long)puVar10;
  plVar9[0x1b] = (long)(puVar10 + 1);
  *puVar10 = 0;
  plVar9[0x1a] = (long)(puVar10 + 1);
  plVar9[0x1e] = 0;
  plVar9[0x1c] = 0;
  plVar9[0x1d] = 0;
  puVar10 = (undefined8 *)FUN_00187df4(8);
  plVar9[0x1c] = (long)puVar10;
  plVar9[0x1e] = (long)(puVar10 + 1);
  uVar26 = *(uint *)(auVar27._8_8_ + 8);
  *puVar10 = 0;
  plVar9[0x1d] = (long)(puVar10 + 1);
  puVar17 = PTR_DAT_04bcbb78;
  puVar6 = PTR_DAT_04bcb910;
  puVar5 = PTR_DAT_04bcb908;
  if (*PTR_DAT_04bcb908 == '\0') {
LAB_001c4e2c:
    puVar16 = puVar17 + (ulong)uVar26 * 0x2a8 + 0x18;
  }
  else {
    puVar11 = (uint *)FUN_03876070(*(undefined8 *)PTR_DAT_04bcb910);
    if (*puVar11 == 0) goto LAB_001c4e2c;
    puVar16 = (undefined *)
              (*(long *)(puVar17 + (ulong)uVar26 * 0x2a8 + 0x10) + (ulong)*puVar11 * 0x148);
  }
  FUN_001d6548(plVar9 + 0x24,*(undefined4 *)(puVar16 + 0xdc));
  puVar16 = PTR_DAT_04bcc320;
  plVar9[0x27] = 0;
  plVar9[0x28] = 0;
  puVar16 = puVar16 + 0x10;
  *(undefined2 *)(plVar9 + 0x2a) = 0;
  *(undefined2 *)(plVar9 + 0x2c) = 0;
  *(undefined2 *)(plVar9 + 0x2f) = 0;
  plVar9[0x33] = 0;
  plVar9[0x29] = (long)puVar16;
  plVar9[0x2b] = (long)puVar16;
  plVar9[0x2e] = (long)puVar16;
  plVar9[0x36] = 0;
  plVar9[0x37] = 0;
  plVar9[0x38] = 0;
  plVar9[0x39] = 0;
  puVar10 = (undefined8 *)FUN_00187df4(8);
  plVar9[0x37] = (long)puVar10;
  plVar9[0x39] = (long)(puVar10 + 1);
  *puVar10 = 0;
  plVar9[0x38] = (long)(puVar10 + 1);
  plVar9[0x3c] = 0;
  plVar9[0x3a] = 0;
  plVar9[0x3b] = 0;
  puVar12 = (undefined1 *)FUN_00187df4(1);
  plVar9[0x3a] = (long)puVar12;
  plVar9[0x3c] = (long)(puVar12 + 1);
  *puVar12 = 0;
  plVar9[0x3b] = (long)(puVar12 + 1);
  *(undefined1 *)(plVar9 + 0x3f) = 0;
  plVar9[0x40] = 0;
  plVar9[0x41] = 0;
  plVar9[0x42] = 0;
  puVar10 = (undefined8 *)FUN_00187df4(8);
  plVar9[0x42] = 1;
  plVar9[0x40] = (long)puVar10;
  plVar9[0x41] = 1;
  *puVar10 = 0;
  FUN_0018a200(plVar9 + 0x43,&DAT_04094803,1000,&DAT_0407ebb1);
  *(undefined4 *)(plVar9 + 0x62) = 0;
  puVar16 = PTR_DAT_04bcc680;
  plVar9[0x60] = 0;
  plVar9[0x5f] = 0;
  plVar9[0x61] = 0;
  plVar9[0x5e] = (long)(puVar16 + 0x10);
  FUN_001a6f1c(plVar9 + 0x67);
  plVar9[0x95] = 0;
  plVar9[0x96] = (long)(plVar9 + 0x97);
  plVar9[0x97] = 0;
  plVar9[0x98] = 0;
  *(undefined4 *)((long)plVar9 + 0x114) = 0;
  (**(code **)(*plVar9 + 0xa0))(plVar9);
  *(undefined1 *)(plVar9 + 0x66) = 0;
  lVar13 = FUN_00185a6c(0x30);
  if (lVar13 != 0) {
    FUN_001c3bc4(lVar13);
  }
  *(long *)plVar9[0x19] = lVar13;
  lVar13 = FUN_00185a6c(0x68);
  if (lVar13 != 0) {
    uVar26 = *(uint *)(plVar9[1] + 8);
    if (*puVar5 == '\0') {
LAB_001c4fd0:
      uVar25 = *(undefined2 *)(puVar17 + (ulong)uVar26 * 0x2a8 + 0xd8);
      uVar26 = *(uint *)(plVar9[1] + 8);
      if (*puVar5 == '\0') goto LAB_001c5014;
LAB_001c4ff0:
      puVar11 = (uint *)FUN_03876070(*(undefined8 *)puVar6);
      if (*puVar11 == 0) goto LAB_001c5014;
      puVar16 = (undefined *)
                (*(long *)(puVar17 + (ulong)uVar26 * 0x2a8 + 0x10) + (ulong)*puVar11 * 0x148);
    }
    else {
      puVar11 = (uint *)FUN_03876070(*(undefined8 *)puVar6);
      if (*puVar11 == 0) goto LAB_001c4fd0;
      uVar25 = *(undefined2 *)
                (*(long *)(puVar17 + (ulong)uVar26 * 0x2a8 + 0x10) + (ulong)*puVar11 * 0x148 + 0xc0)
      ;
      uVar26 = *(uint *)(plVar9[1] + 8);
      if (*puVar5 != '\0') goto LAB_001c4ff0;
LAB_001c5014:
      puVar16 = puVar17 + (ulong)uVar26 * 0x2a8 + 0x18;
    }
    FUN_001d658c(lVar13,uVar25,*(undefined8 *)(puVar16 + 200));
  }
  *(undefined2 *)(plVar9 + 0x2a) = 0;
  *(undefined2 *)(plVar9 + 0x2c) = 0;
  *(undefined2 *)(plVar9 + 0x2f) = 0;
  *(undefined2 *)(plVar9 + 0x30) = 0;
  *(undefined4 *)((long)plVar9 + 0x11c) = 0;
  *(undefined1 *)((long)plVar9 + 0x1eb) = param_5;
  *(long *)plVar9[0x1c] = lVar13;
  plVar9[0x2d] = param_4;
  plVar9[0x1f] = 0;
  iVar8 = FUN_001b8fa0(param_3,&DAT_0410a6c4,0xffffffff);
  if (iVar8 == -1) {
    uVar26 = *(uint *)(plVar9[1] + 8);
    if (*puVar5 == '\0') {
LAB_001c50e4:
      iVar8 = *(int *)(puVar17 + (ulong)uVar26 * 0x2a8 + 0x158);
      uVar23 = *(undefined4 *)(plVar9[1] + 8);
    }
    else {
      puVar11 = (uint *)FUN_03876070(*(undefined8 *)puVar6);
      if (*puVar11 == 0) goto LAB_001c50e4;
      iVar8 = *(int *)(*(long *)(puVar17 + (ulong)uVar26 * 0x2a8 + 0x10) + (ulong)*puVar11 * 0x148 +
                      0x140);
      uVar23 = *(undefined4 *)(plVar9[1] + 8);
    }
    if (iVar8 == 0) goto LAB_001c5100;
LAB_001c5084:
    plVar14 = (long *)FUN_00185a6c(0x18);
    if (plVar14 != (long *)0x0) {
      FUN_001d5ed4(plVar14,uVar23);
    }
  }
  else {
    uVar23 = *(undefined4 *)(plVar9[1] + 8);
    if (iVar8 != 0) goto LAB_001c5084;
LAB_001c5100:
    plVar14 = (long *)FUN_00185a6c(0x118);
    if (plVar14 != (long *)0x0) {
      FUN_001d5acc(plVar14,uVar23);
    }
  }
  lVar13 = *plVar14;
  plVar9[100] = (long)plVar14;
  auStack_c4[0] = 0;
  (**(code **)(lVar13 + 0x10))(plVar14,(long)plVar9 + 0x1ec,auStack_c4);
  lVar13 = FUN_00185a6c(0x238);
  FUN_001d8a50(lVar13,plVar9,0,0x40,0,0);
  uVar23 = *(undefined4 *)((long)plVar9 + 0x1ec);
  plVar9[0x20] = lVar13;
  *(undefined1 *)(lVar13 + 0x40) = param_5;
  *(int *)(lVar13 + 0x1e8) = iVar8;
  *(undefined4 *)(lVar13 + 0xd0) = uVar23;
  *(undefined1 *)(lVar13 + 0xa3) = (undefined1)auStack_c4[0];
  *(undefined8 *)plVar9[0x37] = 0;
  *(undefined1 *)plVar9[0x3a] = 1;
  puVar16 = PTR_DAT_04bcc688;
  if (*puVar5 == '\0') {
LAB_001c51e0:
    if (puVar16[0x18] == '\0') goto LAB_001c51c0;
LAB_001c51ec:
    if (*puVar5 == '\0') {
LAB_001c5220:
      cVar7 = puVar16[0x18] + '\x01';
      if (*puVar5 == '\0') goto LAB_001c5298;
LAB_001c5234:
      puVar11 = (uint *)FUN_03876070(*(undefined8 *)puVar6);
      uVar26 = *puVar11;
      goto joined_r0x001c5240;
    }
    puVar11 = (uint *)FUN_03876070(*(undefined8 *)puVar6);
    if (*puVar11 == 0) goto LAB_001c5220;
    cVar7 = *(char *)(*(long *)(puVar16 + 0x10) + (ulong)*puVar11) + '\x01';
    if (*puVar5 != '\0') goto LAB_001c5234;
LAB_001c5298:
    puVar16[0x18] = cVar7;
    if (*puVar5 == '\0') goto LAB_001c52e8;
LAB_001c52a4:
    puVar11 = (uint *)FUN_03876070(*(undefined8 *)puVar6);
    if (*puVar11 == 0) goto LAB_001c52e8;
    if (*(char *)(*(long *)(puVar16 + 0x10) + (ulong)*puVar11) != '\0') goto LAB_001c52c4;
LAB_001c52f4:
    if (*puVar5 == '\0') {
LAB_001c5328:
      cVar7 = puVar16[0x18];
      cVar3 = *puVar5;
    }
    else {
      puVar11 = (uint *)FUN_03876070(*(undefined8 *)puVar6);
      if (*puVar11 == 0) goto LAB_001c5328;
      cVar7 = *(char *)(*(long *)(puVar16 + 0x10) + (ulong)*puVar11);
      cVar3 = *puVar5;
    }
    if (cVar3 != '\0') {
      puVar11 = (uint *)FUN_03876070(*(undefined8 *)puVar6);
      if (*puVar11 != 0) {
        *(char *)(*(long *)(puVar16 + 0x10) + (ulong)*puVar11) = cVar7 + '\x01';
        cVar7 = *puVar5;
        goto joined_r0x001c5358;
      }
    }
    puVar16[0x18] = cVar7 + '\x01';
    if (*puVar5 == '\0') goto LAB_001c536c;
LAB_001c52cc:
    puVar11 = (uint *)FUN_03876070(*(undefined8 *)puVar6);
    if (*puVar11 == 0) goto LAB_001c536c;
    puVar12 = (undefined1 *)(*(long *)(puVar16 + 0x10) + (ulong)*puVar11);
  }
  else {
    puVar11 = (uint *)FUN_03876070(*(undefined8 *)puVar6);
    if (*puVar11 == 0) goto LAB_001c51e0;
    if (*(char *)(*(long *)(puVar16 + 0x10) + (ulong)*puVar11) != '\0') goto LAB_001c51ec;
LAB_001c51c0:
    if (*PTR_DAT_04bcbca8 == '\0') {
      FUN_0018cb8c(&uStack_d0);
    }
    else {
      FUN_0018c9b0(&uStack_d0,0);
    }
    *(undefined8 *)PTR_DAT_04bcbcb0 = uStack_d0;
    cVar7 = FUN_00189e50(0xff);
    cVar7 = cVar7 + (char)uStack_d0;
    if (*puVar5 == '\0') goto LAB_001c5298;
    puVar11 = (uint *)FUN_03876070(*(undefined8 *)puVar6);
    uVar26 = *puVar11;
joined_r0x001c5240:
    if (uVar26 == 0) goto LAB_001c5298;
    *(char *)(*(long *)(puVar16 + 0x10) + (ulong)uVar26) = cVar7;
    if (*puVar5 != '\0') goto LAB_001c52a4;
LAB_001c52e8:
    if (puVar16[0x18] == '\0') goto LAB_001c52f4;
LAB_001c52c4:
    cVar7 = *puVar5;
joined_r0x001c5358:
    if (cVar7 != '\0') goto LAB_001c52cc;
LAB_001c536c:
    puVar12 = puVar16 + 0x18;
  }
  uVar4 = *puVar12;
  *(undefined1 *)(plVar9 + 0x3d) = 0;
  *(undefined1 *)((long)plVar9 + 0x1ea) = 0;
  plVar9[0x3e] = 0;
  *(undefined1 *)(plVar9 + 0x21) = 0;
  *(undefined1 *)((long)plVar9 + 0x1e9) = uVar4;
  uVar26 = *(uint *)(plVar9[1] + 8);
  if (*puVar5 == '\0') {
LAB_001c53d4:
    *(undefined4 *)((long)plVar9 + 0x10c) = *(undefined4 *)(puVar17 + (ulong)uVar26 * 0x2a8 + 0xd0);
    uVar26 = *(uint *)(plVar9[1] + 8);
    cVar7 = *puVar5;
  }
  else {
    puVar11 = (uint *)FUN_03876070(*(undefined8 *)puVar6);
    if (*puVar11 == 0) goto LAB_001c53d4;
    *(undefined4 *)((long)plVar9 + 0x10c) =
         *(undefined4 *)
          (*(long *)(puVar17 + (ulong)uVar26 * 0x2a8 + 0x10) + (ulong)*puVar11 * 0x148 + 0xb8);
    uVar26 = *(uint *)(plVar9[1] + 8);
    cVar7 = *puVar5;
  }
  if (cVar7 != '\0') {
    puVar11 = (uint *)FUN_03876070(*(undefined8 *)puVar6);
    if (*puVar11 != 0) {
      puVar17 = (undefined *)
                (*(long *)(puVar17 + (ulong)uVar26 * 0x2a8 + 0x10) + (ulong)*puVar11 * 0x148);
      goto LAB_001c5428;
    }
  }
  puVar17 = puVar17 + (ulong)uVar26 * 0x2a8 + 0x18;
LAB_001c5428:
  *(undefined4 *)(plVar9 + 0x22) = *(undefined4 *)(puVar17 + 0xb0);
  puVar17 = PTR_DAT_04bcb900;
  plVar14 = (long *)(PTR_DAT_04bcb900 + 0x18);
  if (*puVar5 != '\0') {
    puVar11 = (uint *)FUN_03876070(*(undefined8 *)puVar6);
    uVar26 = *puVar11;
    if (uVar26 != 0) {
      lVar13 = **(long **)(puVar17 + 0xa0);
      if ((ulong)((*(long **)(puVar17 + 0xa0))[1] - lVar13 >> 3) <= (ulong)uVar26) {
                    /* WARNING: Subroutine does not return */
        FUN_0018786c("C:\\home\\ws\\Master\\Pack\\7923402a\\.\\OnlineCore/src/Core/InstanceTable.h",
                     0x47,0xe0000003,0);
      }
      plVar14 = (long *)(*(long *)(lVar13 + (ulong)uVar26 * 8) + 0x10);
    }
  }
  plVar1 = (long *)(*(long *)(*plVar14 + 0x10) + 0x1b0);
  if (1 < iVar8 - 1U) {
    plVar1 = (long *)(*(long *)(*plVar14 + 0x10) + 0x1a8);
  }
  plVar9[99] = *plVar1;
  lVar13 = (**(code **)(*(long *)plVar9[100] + 0x20))();
  plVar9[0x65] = lVar13;
  (**(code **)(*plVar9 + 0x10))(plVar9);
  return;
}


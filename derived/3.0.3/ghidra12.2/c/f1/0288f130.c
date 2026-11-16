
undefined8 FUN_0288f130(long param_1,undefined2 *param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined2 *puVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined2 uVar6;
  ushort uVar7;
  undefined *puVar8;
  uint uVar9;
  uint uVar10;
  ulong uVar11;
  undefined8 *puVar12;
  long lVar13;
  long lVar14;
  uint *puVar15;
  long lVar16;
  uint *puVar17;
  undefined4 *puVar18;
  undefined2 *puVar19;
  undefined1 *puVar20;
  undefined *local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined1 local_7d;
  undefined *local_78;
  undefined2 local_70;
  undefined1 local_6e;
  undefined1 local_6d;
  undefined4 local_6c;
  undefined8 local_68;
  
  puVar8 = PTR_DAT_04bb43c0;
  uVar10 = 0;
  lVar14 = param_1 + 4;
  lVar16 = *(long *)PTR_DAT_04bb43c0;
  do {
    lVar2 = lVar14 + ((long)((ulong)uVar10 << 0x20) >> 0x1d);
    uVar9 = FUN_0277d6c4(lVar2);
    lVar13 = *(long *)puVar8;
    if (lVar13 == 0) {
      lVar13 = 0;
    }
    else {
      lVar16 = *(long *)(lVar16 + 0x57e58);
      uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar16 + 0x1f8);
      if ((uVar9 < *(uint *)(lVar16 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar16 + 0x1e0) + (long)(int)uVar9 * 8) != 0)) {
        uVar11 = FUN_0277d7b4(lVar2,param_2);
        if ((uVar11 & 1) != 0) {
          return 0;
        }
        lVar13 = *(long *)puVar8;
      }
    }
    uVar10 = uVar10 + 1;
    lVar16 = lVar13;
  } while (uVar10 != 0x80);
  uVar11 = 0;
  while (*(short *)(lVar14 + (-(uVar11 >> 0x1f) & 0xfffffff800000000 | uVar11 << 3)) != -2) {
    uVar10 = (int)uVar11 + 1;
    uVar11 = (ulong)uVar10;
    if (uVar10 == 0x80) {
      return 0;
    }
  }
  uVar6 = *param_2;
  puVar3 = (undefined2 *)(lVar14 + (long)(int)uVar11 * 8);
  *puVar3 = uVar6;
  uVar4 = *(undefined1 *)(param_2 + 1);
  puVar19 = puVar3 + 1;
  *(undefined1 *)puVar19 = uVar4;
  uVar5 = *(undefined1 *)((long)param_2 + 3);
  puVar20 = (undefined1 *)((long)puVar3 + 3);
  *puVar20 = uVar5;
  local_a0 = 0;
  puVar1 = PTR_DAT_04bc0510 + 0x10;
  local_a8 = CONCAT44(*(undefined4 *)(param_2 + 2),CONCAT13(uVar5,CONCAT12(uVar4,uVar6)));
  puVar18 = (undefined4 *)(puVar3 + 2);
  *puVar18 = *(undefined4 *)(param_2 + 2);
  local_b0 = puVar1;
  uVar10 = FUN_0277d6c4(&local_a8);
  if (*(long *)puVar8 != 0) {
    lVar14 = *(long *)(lVar13 + 0x57e58);
    uVar10 = (uVar10 & 0xffff) - (uint)*(ushort *)(lVar14 + 0x1f8);
    if ((uVar10 < *(uint *)(lVar14 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar14 + 0x1e0) + (long)(int)uVar10 * 8) != 0)) {
      lVar14 = *(long *)PTR_DAT_04bc0428;
      uVar10 = FUN_0277d6c4(puVar3);
      uVar10 = (uVar10 & 0xffff) - (uint)*(ushort *)(lVar14 + 0x1f8);
      if ((uVar10 < *(uint *)(lVar14 + 0x1d8)) &&
         ((puVar15 = *(uint **)(*(long *)(lVar14 + 0x1e0) + (long)(int)uVar10 * 8),
          puVar15 != (uint *)0x0 &&
          (uVar10 = *puVar15, uVar10 != 0 && puVar15 != (uint *)(ulong)uVar10)))) {
        puVar17 = (uint *)((long)puVar15 - (long)(ulong)uVar10);
        if ((*puVar17 != 0) &&
           ((uVar10 = puVar17[1], uVar10 != 0 && ((ulong)(ushort)puVar17[2] != 0)))) {
          lVar14 = 0xc;
          if (*(char *)((long)puVar17 + 10) != '\0') {
            lVar14 = 0x1c;
          }
          lVar14 = (long)puVar17 + lVar14 + (ulong)(ushort)puVar17[2] * 8;
          if (lVar14 != 0) {
            uVar9 = 0;
            if ((ulong)uVar10 != 0) {
              uVar9 = (uint)((ulong)((long)puVar15 - lVar14) / (ulong)uVar10);
            }
            if (*puVar17 <= uVar9) {
              uVar9 = 0xffffffff;
            }
            if ((uVar9 < DAT_05327190) &&
               (uVar7 = *(ushort *)(DAT_05327198 + (long)(int)uVar9 * 2),
               uVar7 < 0x13e && (uVar7 == 0x53 || uVar7 == 0x54))) {
              *(undefined2 *)(param_1 + 0x12d4) = *(undefined2 *)(param_1 + 0x12dc);
              *(undefined2 *)(param_1 + 0x12d6) = *(undefined2 *)(param_1 + 0x12de);
              *(undefined4 *)(param_1 + 0x12d8) = *(undefined4 *)(param_1 + 0x12e0);
              *(undefined2 *)(param_1 + 0x12dc) = *(undefined2 *)(param_1 + 0x12e4);
              *(undefined2 *)(param_1 + 0x12de) = *(undefined2 *)(param_1 + 0x12e6);
              *(undefined4 *)(param_1 + 0x12e0) = *(undefined4 *)(param_1 + 0x12e8);
              *(undefined2 *)(param_1 + 0x12e4) = *puVar3;
              *(undefined1 *)(param_1 + 0x12e6) = *(undefined1 *)puVar19;
              *(undefined1 *)(param_1 + 0x12e7) = *puVar20;
              *(undefined4 *)(param_1 + 0x12e8) = *puVar18;
            }
          }
        }
      }
    }
  }
  local_70 = *puVar3;
  local_6e = *(undefined1 *)puVar19;
  local_68 = 0;
  local_6d = *puVar20;
  local_6c = *puVar18;
  lVar14 = *(long *)puVar8;
  local_78 = puVar1;
  uVar10 = FUN_0277d6c4(&local_70);
  puVar15 = (uint *)0x0;
  if (*(long *)puVar8 != 0) {
    lVar14 = *(long *)(lVar14 + 0x57e58);
    uVar10 = (uVar10 & 0xffff) - (uint)*(ushort *)(lVar14 + 0x1f8);
    if (uVar10 < *(uint *)(lVar14 + 0x1d8)) {
      puVar15 = (uint *)0x0;
      if (*(long *)(*(long *)(lVar14 + 0x1e0) + (long)(int)uVar10 * 8) != 0) {
        lVar14 = *(long *)PTR_DAT_04bc0428;
        uVar10 = FUN_0277d6c4(puVar3);
        uVar10 = (uVar10 & 0xffff) - (uint)*(ushort *)(lVar14 + 0x1f8);
        if (*(uint *)(lVar14 + 0x1d8) <= uVar10) goto LAB_0288f47c;
        puVar15 = *(uint **)(*(long *)(lVar14 + 0x1e0) + (long)(int)uVar10 * 8);
      }
    }
    else {
LAB_0288f47c:
      puVar15 = (uint *)0x0;
    }
  }
  local_7d = 0;
  local_a8 = (long)&local_a0 + 4;
  local_a0 = CONCAT35(local_a0._5_3_,0x20);
  local_b0 = PTR_DAT_04bb2028 + 0x10;
  if (puVar15 == (uint *)0x0) {
    uVar10 = 0xbc;
  }
  else {
    uVar9 = *puVar15;
    uVar10 = 0;
    if ((uVar9 != 0) && (puVar15 != (uint *)(ulong)uVar9)) {
      puVar17 = (uint *)((long)puVar15 - (long)(ulong)uVar9);
      uVar10 = 0;
      if (*puVar17 != 0) {
        uVar10 = puVar17[1];
        if ((uVar10 != 0) && ((ulong)(ushort)puVar17[2] != 0)) {
          lVar14 = 0xc;
          if (*(char *)((long)puVar17 + 10) != '\0') {
            lVar14 = 0x1c;
          }
          lVar14 = (long)puVar17 + lVar14 + (ulong)(ushort)puVar17[2] * 8;
          if (lVar14 != 0) {
            uVar9 = 0;
            if ((ulong)uVar10 != 0) {
              uVar9 = (uint)((ulong)((long)puVar15 - lVar14) / (ulong)uVar10);
            }
            if (*puVar17 <= uVar9) {
              uVar9 = 0xffffffff;
            }
            if ((uVar9 < DAT_05326ec0) &&
               (uVar10 = (uint)*(ushort *)(DAT_05326ec8 + (long)(int)uVar9 * 2), uVar10 < 0xbd))
            goto LAB_0288f540;
          }
        }
        uVar10 = 0;
      }
    }
  }
LAB_0288f540:
  if (uVar10 < 0xbd) {
    puVar12 = (undefined8 *)(&PTR_DAT_0495c4b0)[uVar10];
  }
  else {
    puVar12 = &DAT_0407ebb1;
  }
  FUN_038d1270(&local_b0,"Shop.Tailor.%s",puVar12);
  return 1;
}


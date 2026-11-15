
void FUN_023472d0(long param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  byte bVar5;
  undefined2 uVar6;
  undefined *puVar7;
  uint uVar8;
  long *plVar9;
  ushort uVar10;
  uint *puVar11;
  uint *puVar12;
  long lVar13;
  uint uVar14;
  long lVar15;
  undefined4 local_80;
  undefined4 local_7c;
  undefined *local_78;
  undefined2 local_70;
  undefined1 local_6e;
  undefined1 local_6d;
  undefined4 local_6c;
  undefined8 local_68;
  undefined2 local_48;
  undefined1 local_46;
  undefined1 local_45;
  undefined4 local_44;
  
  *(undefined1 *)(param_1 + 0xc1d4) = 1;
  puVar7 = PTR_DAT_04bb43c0;
  lVar13 = *(long *)(param_1 + 0xbde0) +
           ((ulong)*(uint *)(*(long *)(param_1 + 0xbde0) + 0x10) & 1) * 0x20;
  uVar6 = *(undefined2 *)(lVar13 + 0x14);
  uVar3 = *(undefined1 *)(lVar13 + 0x16);
  uVar4 = *(undefined1 *)(lVar13 + 0x17);
  uVar2 = *(undefined4 *)(lVar13 + 0x18);
  lVar15 = *(long *)PTR_DAT_04bb43c0;
  local_48 = uVar6;
  local_46 = uVar3;
  local_45 = uVar4;
  local_44 = uVar2;
  uVar8 = FUN_0277d6c4(&local_48);
  lVar13 = *(long *)puVar7;
  if (lVar13 != 0) {
    lVar15 = *(long *)(lVar15 + 0x57e58);
    uVar8 = (uVar8 & 0xffff) - (uint)*(ushort *)(lVar15 + 0x1f8);
    if ((uVar8 < *(uint *)(lVar15 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar15 + 0x1e0) + (long)(int)uVar8 * 8) != 0)) {
      local_78 = PTR_DAT_04bc0510 + 0x10;
      local_68 = 0;
      local_70 = uVar6;
      local_6e = uVar3;
      local_6d = uVar4;
      local_6c = uVar2;
      uVar8 = FUN_0277d6c4(&local_70);
      if (*(long *)puVar7 == 0) {
LAB_023474b0:
        uVar10 = 0x21;
      }
      else {
        lVar13 = *(long *)(lVar13 + 0x57e58);
        uVar8 = (uVar8 & 0xffff) - (uint)*(ushort *)(lVar13 + 0x1f8);
        if ((*(uint *)(lVar13 + 0x1d8) <= uVar8) ||
           (*(long *)(*(long *)(lVar13 + 0x1e0) + (long)(int)uVar8 * 8) == 0)) goto LAB_023474b0;
        lVar13 = *(long *)PTR_DAT_04bc0428;
        uVar8 = FUN_0277d6c4(&local_48);
        uVar8 = (uVar8 & 0xffff) - (uint)*(ushort *)(lVar13 + 0x1f8);
        if ((*(uint *)(lVar13 + 0x1d8) <= uVar8) ||
           (puVar11 = *(uint **)(*(long *)(lVar13 + 0x1e0) + (long)(int)uVar8 * 8),
           puVar11 == (uint *)0x0)) goto LAB_023474b0;
        uVar8 = *puVar11;
        uVar10 = 0;
        if ((uVar8 != 0) && (puVar11 != (uint *)(ulong)uVar8)) {
          puVar12 = (uint *)((long)puVar11 - (long)(ulong)uVar8);
          uVar10 = 0;
          if (*puVar12 != 0) {
            uVar8 = puVar12[1];
            if ((uVar8 != 0) && ((ulong)(ushort)puVar12[2] != 0)) {
              lVar13 = 0xc;
              if (*(char *)((long)puVar12 + 10) != '\0') {
                lVar13 = 0x1c;
              }
              lVar13 = (long)puVar12 + lVar13 + (ulong)(ushort)puVar12[2] * 8;
              if (lVar13 != 0) {
                uVar14 = 0;
                if ((ulong)uVar8 != 0) {
                  uVar14 = (uint)((ulong)((long)puVar11 - lVar13) / (ulong)uVar8);
                }
                if (*puVar12 <= uVar14) {
                  uVar14 = 0xffffffff;
                }
                if ((uVar14 < DAT_05326af0) &&
                   (uVar10 = *(ushort *)(DAT_05326af8 + (long)(int)uVar14 * 2), uVar10 < 0xa2))
                goto LAB_023474b4;
              }
            }
            uVar10 = 0;
          }
        }
      }
LAB_023474b4:
      if (uVar10 == 4) {
        *(undefined1 *)(param_1 + 0xc1d4) = 0;
      }
      lVar13 = *(long *)puVar7;
    }
  }
  lVar15 = *(long *)(param_1 + 0xbdd8) +
           ((ulong)*(uint *)(*(long *)(param_1 + 0xbdd8) + 0x10) & 1) * 0x20;
  uVar6 = *(undefined2 *)(lVar15 + 0x14);
  uVar3 = *(undefined1 *)(lVar15 + 0x16);
  uVar4 = *(undefined1 *)(lVar15 + 0x17);
  local_80 = *(undefined4 *)(lVar15 + 0x14);
  uVar2 = *(undefined4 *)(lVar15 + 0x18);
  local_7c = uVar2;
  uVar8 = FUN_0277d6c4(&local_80);
  lVar15 = *(long *)puVar7;
  if (lVar15 == 0) goto LAB_02347684;
  lVar13 = *(long *)(lVar13 + 0x57e58);
  uVar8 = (uVar8 & 0xffff) - (uint)*(ushort *)(lVar13 + 0x1f8);
  if ((*(uint *)(lVar13 + 0x1d8) <= uVar8) ||
     (*(long *)(*(long *)(lVar13 + 0x1e0) + (long)(int)uVar8 * 8) == 0)) goto LAB_02347684;
  local_78 = PTR_DAT_04bc0510 + 0x10;
  local_68 = 0;
  local_70 = uVar6;
  local_6e = uVar3;
  local_6d = uVar4;
  local_6c = uVar2;
  uVar8 = FUN_0277d6c4(&local_70);
  if (*(long *)puVar7 == 0) {
LAB_0234766c:
    uVar10 = 0x21;
  }
  else {
    lVar13 = *(long *)(lVar15 + 0x57e58);
    uVar8 = (uVar8 & 0xffff) - (uint)*(ushort *)(lVar13 + 0x1f8);
    if ((*(uint *)(lVar13 + 0x1d8) <= uVar8) ||
       (*(long *)(*(long *)(lVar13 + 0x1e0) + (long)(int)uVar8 * 8) == 0)) goto LAB_0234766c;
    lVar13 = *(long *)PTR_DAT_04bc0428;
    uVar8 = FUN_0277d6c4(&local_80);
    uVar8 = (uVar8 & 0xffff) - (uint)*(ushort *)(lVar13 + 0x1f8);
    if ((*(uint *)(lVar13 + 0x1d8) <= uVar8) ||
       (puVar11 = *(uint **)(*(long *)(lVar13 + 0x1e0) + (long)(int)uVar8 * 8),
       puVar11 == (uint *)0x0)) goto LAB_0234766c;
    uVar8 = *puVar11;
    uVar10 = 0;
    if ((uVar8 != 0) && (puVar11 != (uint *)(ulong)uVar8)) {
      puVar12 = (uint *)((long)puVar11 - (long)(ulong)uVar8);
      uVar10 = 0;
      if (*puVar12 != 0) {
        uVar8 = puVar12[1];
        if ((uVar8 != 0) && ((ulong)(ushort)puVar12[2] != 0)) {
          lVar13 = 0xc;
          if (*(char *)((long)puVar12 + 10) != '\0') {
            lVar13 = 0x1c;
          }
          lVar13 = (long)puVar12 + lVar13 + (ulong)(ushort)puVar12[2] * 8;
          if (lVar13 != 0) {
            uVar14 = 0;
            if ((ulong)uVar8 != 0) {
              uVar14 = (uint)((ulong)((long)puVar11 - lVar13) / (ulong)uVar8);
            }
            if (*puVar12 <= uVar14) {
              uVar14 = 0xffffffff;
            }
            if ((uVar14 < DAT_05326af0) &&
               (uVar10 = *(ushort *)(DAT_05326af8 + (long)(int)uVar14 * 2), uVar10 < 0xa2))
            goto LAB_02347670;
          }
        }
        uVar10 = 0;
      }
    }
  }
LAB_02347670:
  if (uVar10 == 8) {
    *(undefined1 *)(param_1 + 0xc1d4) = 0;
  }
LAB_02347684:
  lVar13 = *(long *)(param_1 + 0x1150);
  if (lVar13 != 0) {
    bVar5 = *(byte *)(param_1 + 0xc1ac);
    uVar8 = *(uint *)(*(long *)(*(long *)PTR_DAT_04bb4868 + 0x28) + 0x1c0);
    if ((0 < (int)uVar8) ||
       (((lVar15 = *(long *)(*(long *)(*(long *)PTR_DAT_04bb4868 + 0x28) + 0xb0), lVar15 != 0 &&
         (puVar11 = *(uint **)(lVar15 + 8), puVar11 != (uint *)0x0)) &&
        (uVar8 = *puVar11, uVar8 != 0)))) {
      uVar14 = 0;
      do {
        if (*(long *)(param_1 + 0x1170) != 0 && *(long *)(param_1 + 0x1160) != 0) {
          uVar1 = uVar14;
          if (*(uint *)(param_1 + 0x1168) <= uVar14) {
            uVar1 = 0;
          }
          uVar1 = *(uint *)(*(long *)(param_1 + 0x1170) + (long)(int)uVar1 * 4);
          if (uVar1 < 0xffff0000 && ((uVar1 ^ 0xffffffff) & 0xffff) != 0) {
            plVar9 = (long *)**(undefined8 **)(*(long *)(lVar13 + 0x38) + (long)(short)uVar1 * 8);
            (**(code **)(*plVar9 + 0x88))
                      (plVar9,(int)uVar1 >> 0x10,
                       bVar5 == uVar14 && *(char *)(param_1 + 0xc1d4) != '\0');
          }
        }
        uVar14 = uVar14 + 1;
      } while (uVar8 != uVar14);
    }
  }
  return;
}


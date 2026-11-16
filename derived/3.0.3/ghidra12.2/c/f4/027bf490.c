
void FUN_027bf490(long param_1,undefined4 *param_2,int param_3)

{
  undefined2 *puVar1;
  undefined1 *puVar2;
  uint uVar3;
  byte bVar4;
  byte bVar5;
  ushort uVar6;
  undefined1 *puVar7;
  undefined *puVar8;
  bool bVar9;
  uint uVar10;
  long lVar11;
  uint *puVar12;
  uint *puVar13;
  undefined2 *puVar14;
  ulong uVar15;
  long lVar16;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  
  if (param_3 < 0) {
    return;
  }
  lVar11 = *(long *)PTR_DAT_04bb32e8;
  uVar6 = *(ushort *)(lVar11 + 0x4060);
  bVar4 = *(byte *)(lVar11 + 0x4062);
  bVar5 = *(byte *)(lVar11 + 0x4063);
  nn::time::IsValidDate((uint)uVar6,(uint)bVar4,(uint)bVar5);
  puVar8 = PTR_DAT_04bb43c0;
  lVar16 = *(long *)PTR_DAT_04bb43c0;
  uVar10 = FUN_0277d6c4(param_2);
  lVar11 = *(long *)puVar8;
  if (lVar11 == 0) goto LAB_027bf790;
  lVar16 = *(long *)(lVar16 + 0x57e58);
  uVar10 = (uVar10 & 0xffff) - (uint)*(ushort *)(lVar16 + 0x1f8);
  if ((*(uint *)(lVar16 + 0x1d8) <= uVar10) ||
     (*(long *)(*(long *)(lVar16 + 0x1e0) + (long)(int)uVar10 * 8) == 0)) goto LAB_027bf790;
  local_68 = 0;
  local_70 = *param_2;
  uStack_6c = param_2[1];
  uVar10 = FUN_0277d6c4(&local_70);
  if (*(long *)puVar8 == 0) {
LAB_027bf664:
    uVar10 = 0xbc;
  }
  else {
    lVar11 = *(long *)(lVar11 + 0x57e58);
    uVar10 = (uVar10 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
    if ((*(uint *)(lVar11 + 0x1d8) <= uVar10) ||
       (*(long *)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar10 * 8) == 0)) goto LAB_027bf664;
    lVar11 = *(long *)PTR_DAT_04bc0428;
    uVar10 = FUN_0277d6c4(param_2);
    uVar10 = (uVar10 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
    if ((*(uint *)(lVar11 + 0x1d8) <= uVar10) ||
       (puVar12 = *(uint **)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar10 * 8),
       puVar12 == (uint *)0x0)) goto LAB_027bf664;
    uVar3 = *puVar12;
    uVar10 = 0;
    if ((uVar3 != 0) && (puVar12 != (uint *)(ulong)uVar3)) {
      puVar13 = (uint *)((long)puVar12 - (long)(ulong)uVar3);
      uVar10 = 0;
      if (*puVar13 != 0) {
        uVar10 = puVar13[1];
        if ((uVar10 != 0) && ((ulong)(ushort)puVar13[2] != 0)) {
          lVar11 = 0xc;
          if (*(char *)((long)puVar13 + 10) != '\0') {
            lVar11 = 0x1c;
          }
          lVar11 = (long)puVar13 + lVar11 + (ulong)(ushort)puVar13[2] * 8;
          if (lVar11 != 0) {
            uVar3 = 0;
            if ((ulong)uVar10 != 0) {
              uVar3 = (uint)((ulong)((long)puVar12 - lVar11) / (ulong)uVar10);
            }
            if (*puVar13 <= uVar3) {
              uVar3 = 0xffffffff;
            }
            if ((uVar3 < DAT_05326ec0) &&
               (uVar10 = (uint)*(ushort *)(DAT_05326ec8 + (long)(int)uVar3 * 2), uVar10 < 0xbd))
            goto LAB_027bf668;
          }
        }
        uVar10 = 0;
      }
    }
  }
LAB_027bf668:
  if (((((uVar10 == DAT_0558f600) || (uVar10 == DAT_0558f604)) || (uVar10 == DAT_0558f608)) ||
      ((uVar10 == DAT_0558f60c || (uVar10 == DAT_0558f610)))) || (uVar10 == DAT_0558f614)) {
    lVar16 = 0;
    lVar11 = 0;
    puVar1 = (undefined2 *)(param_1 + 0x1004);
    uVar15 = 0;
    puVar14 = puVar1;
    do {
      if (*(short *)((long)puVar1 + (-(uVar15 >> 0x1f) & 0xfffffff800000000 | uVar15 << 3)) == -2) {
        bVar9 = 0x3ff < (uint)lVar11;
        if (bVar9) {
          puVar14 = puVar1;
        }
        *puVar14 = *(undefined2 *)param_2;
        puVar2 = (undefined1 *)(param_1 + 0x3004);
        puVar12 = (uint *)(puVar2 + lVar16 + -0x3000);
        puVar7 = puVar2 + lVar11;
        if (bVar9) {
          puVar12 = (uint *)(param_1 + 4);
          puVar7 = puVar2;
        }
        *(undefined1 *)(puVar14 + 1) = *(undefined1 *)((long)param_2 + 2);
        *(undefined1 *)((long)puVar14 + 3) = *(undefined1 *)((long)param_2 + 3);
        *(undefined4 *)(puVar14 + 2) = param_2[1];
        *puVar12 = (uint)bVar5 << 0x18 | (uint)bVar4 << 0x10 | (uint)uVar6;
        *puVar7 = (char)param_3;
        return;
      }
      uVar10 = (int)uVar15 + 1;
      uVar15 = (ulong)uVar10;
      lVar11 = lVar11 + 1;
      lVar16 = lVar16 + 4;
      puVar14 = puVar14 + 4;
    } while (uVar10 != 0x400);
    return;
  }
  lVar11 = *(long *)puVar8;
LAB_027bf790:
  local_68 = 0;
  local_70 = *param_2;
  uStack_6c = param_2[1];
  uVar10 = FUN_0277d6c4(&local_70);
  if (*(long *)puVar8 != 0) {
    lVar11 = *(long *)(lVar11 + 0x57e58);
    uVar10 = (uVar10 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
    if ((uVar10 < *(uint *)(lVar11 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar10 * 8) != 0)) {
      FUN_0277d6c4(param_2);
    }
  }
  return;
}


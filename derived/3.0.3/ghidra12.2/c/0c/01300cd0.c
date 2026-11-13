
void FUN_01300cd0(long param_1)

{
  int iVar1;
  ushort *puVar2;
  ushort *puVar3;
  long lVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  short sVar10;
  short sVar11;
  uint uVar12;
  undefined *puVar13;
  long lVar14;
  int iVar15;
  int iVar16;
  uint *puVar17;
  int iVar18;
  long lVar19;
  uint *puVar20;
  
  iVar1 = *(int *)(param_1 + 0x34) + 1;
  iVar6 = *(int *)(param_1 + 0x20);
  iVar18 = *(int *)(param_1 + 0x24);
  *(int *)(param_1 + 0x1348) = iVar6;
  *(int *)(param_1 + 0x134c) = iVar18;
  *(int *)(param_1 + 0x1370) = iVar6;
  *(int *)(param_1 + 0x1374) = iVar18;
  puVar13 = PTR_DAT_04bbc2f8;
  if (iVar1 != iVar18) {
    lVar19 = *(long *)PTR_DAT_04bb27a8;
    uVar7 = *(uint *)PTR_DAT_04bbbe50;
    lVar14 = *(long *)(PTR_DAT_04bbbe50 + 8);
    iVar16 = iVar6;
    iVar15 = iVar6;
    do {
      sVar10 = *(short *)(param_1 + 0x3c);
      if (*(short *)(param_1 + 0x40) <= *(short *)(param_1 + 0x3c)) {
        sVar10 = *(short *)(param_1 + 0x40);
      }
      sVar11 = *(short *)(param_1 + 0x3e);
      if (*(short *)(param_1 + 0x42) <= *(short *)(param_1 + 0x3e)) {
        sVar11 = *(short *)(param_1 + 0x42);
      }
      puVar2 = (ushort *)
               (param_1 + 0x44 + (ulong)(uint)((iVar18 - sVar11) * 3 + (iVar15 - sVar10)) * 0xe);
      if (2 < (uint)(iVar18 - sVar11) || 2 < (uint)(iVar15 - sVar10)) {
        puVar2 = (ushort *)puVar13;
      }
      puVar3 = puVar2 + (ulong)*(uint *)(param_1 + 8) * 3;
      if (1 < *(uint *)(param_1 + 8)) {
        puVar3 = puVar2;
      }
      uVar12 = (uint)*puVar3 - (uint)*(ushort *)(lVar19 + 0x408);
      if (((uVar12 < *(uint *)(lVar19 + 1000)) &&
          (puVar17 = *(uint **)(*(long *)(lVar19 + 0x3f0) + (long)(int)uVar12 * 8),
          puVar17 != (uint *)0x0)) &&
         (uVar12 = *puVar17, uVar12 != 0 && puVar17 != (uint *)(ulong)uVar12)) {
        puVar20 = (uint *)((long)puVar17 - (long)(ulong)uVar12);
        if (((*puVar20 != 0) && (uVar12 = puVar20[1], uVar12 != 0)) &&
           ((ulong)(ushort)puVar20[2] != 0)) {
          lVar4 = 0xc;
          if (*(char *)((long)puVar20 + 10) != '\0') {
            lVar4 = 0x1c;
          }
          lVar4 = (long)puVar20 + lVar4 + (ulong)(ushort)puVar20[2] * 8;
          if (lVar4 != 0) {
            uVar5 = 0;
            if ((ulong)uVar12 != 0) {
              uVar5 = (uint)((ulong)((long)puVar17 - lVar4) / (ulong)uVar12);
            }
            if (*puVar20 <= uVar5) {
              uVar5 = 0xffffffff;
            }
            if ((uVar5 < uVar7) && (*(short *)(lVar14 + (long)(int)uVar5 * 2) == 1)) {
              lVar4 = param_1 + 0x1328 + (ulong)*(uint *)(param_1 + 8) * 0x28;
              if (1 < *(uint *)(param_1 + 8)) {
                lVar4 = param_1 + 0x1328;
              }
              iVar8 = *(int *)(lVar4 + 0x20);
              if ((iVar8 <= iVar15) && (iVar15 <= iVar8 + 3)) {
                iVar9 = *(int *)(lVar4 + 0x24);
                if ((iVar9 <= iVar18) &&
                   (((iVar18 <= iVar9 + 3 && ((uint)(iVar15 - iVar8) < 3)) &&
                    ((uint)(iVar18 - iVar9) < 3)))) {
                  *(uint *)(lVar4 + 0x10) =
                       *(uint *)(lVar4 + 0x10) |
                       1 << (ulong)((iVar18 - iVar9) * 3 + (iVar15 - iVar8) & 0x1f);
                  iVar16 = *(int *)(param_1 + 0x20);
                }
              }
            }
          }
        }
      }
      if (iVar15 < *(int *)(param_1 + 0x30)) {
        iVar15 = iVar15 + 1;
      }
      else {
        iVar18 = iVar18 + 1;
        iVar15 = iVar16;
      }
    } while ((iVar6 != iVar15) || (iVar1 != iVar18));
  }
  return;
}


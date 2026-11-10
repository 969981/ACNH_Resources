
undefined8 FUN_001087f0(long param_1)

{
  byte *pbVar1;
  short *psVar2;
  ushort *puVar3;
  ushort *puVar4;
  int iVar5;
  int iVar6;
  short sVar7;
  uint uVar8;
  ushort *puVar9;
  ushort *puVar10;
  void *__dest;
  long lVar11;
  long lVar12;
  ushort uVar13;
  long lVar14;
  ulong uVar15;
  long lVar16;
  ulong uVar17;
  ushort uVar18;
  ushort uVar19;
  ulong uVar20;
  
  psVar2 = (short *)(param_1 + 0x9260);
  sVar7 = *psVar2;
  lVar11 = (long)sVar7;
  if (100 < lVar11) {
    return 0;
  }
  lVar12 = param_1 + lVar11 * 0x150;
  if (sVar7 < 1) {
    uVar13 = *(ushort *)(lVar12 + 0x144);
  }
  else {
    if ((*(char *)(lVar12 + 0x148) == '\x02') &&
       ((uint)*(ushort *)(param_1 + lVar11 * 0x150 + 0x144) < *(ushort *)(param_1 + 0x144) / 3)) {
      return 0;
    }
    lVar14 = param_1 + lVar11 * 0x150;
    uVar13 = *(ushort *)(lVar14 + 0x144);
    lVar12 = 0;
    uVar20 = 0;
    pbVar1 = (byte *)(lVar14 + 0x148);
    do {
      uVar18 = *(ushort *)(param_1 + lVar12 + 0x144);
      if (uVar18 == uVar13) {
        uVar15 = (ulong)*(byte *)(param_1 + lVar12 + 0x148);
        if (uVar15 == 0) {
          uVar19 = 0;
          uVar18 = 0;
          uVar17 = (ulong)*pbVar1;
          if (uVar17 != 0) goto LAB_001088e0;
LAB_00108924:
          if (uVar19 != 0) goto LAB_00108984;
        }
        else {
          lVar14 = param_1 + lVar12 + uVar15 * 0x88;
          puVar3 = (ushort *)(lVar14 + -6);
          if ((*(byte *)(param_1 + uVar15 * 0x88 + lVar12 + 2) & 0x7f) != 0) {
            puVar3 = (ushort *)(lVar14 + 4);
          }
          uVar18 = *puVar3 >> 7;
          uVar17 = (ulong)*pbVar1;
          uVar19 = uVar18;
          if (uVar17 == 0) goto LAB_00108924;
LAB_001088e0:
          lVar14 = param_1 + lVar11 * 0x150 + uVar17 * 0x88;
          puVar3 = (ushort *)(lVar14 + -6);
          if ((*(byte *)(lVar14 + 2) & 0x7f) != 0) {
            puVar3 = (ushort *)(lVar14 + 4);
          }
          if (uVar18 != *puVar3 >> 7) goto LAB_00108984;
        }
        lVar14 = param_1 + uVar15 * 0x10 + lVar12;
        lVar16 = uVar17 - 1;
        if (((*(short *)(lVar14 + 0x11c) ==
              *(short *)(param_1 + lVar11 * 0x150 + lVar16 * 0x10 + 300)) &&
            (*(long *)(lVar14 + 0x110) ==
             *(long *)(param_1 + lVar11 * 0x150 + lVar16 * 0x10 + 0x120))) &&
           (*(int *)(lVar14 + 0x118) == *(int *)(param_1 + lVar11 * 0x150 + lVar16 * 0x10 + 0x128)))
        {
          __dest = (void *)(param_1 + 0x10 + (uVar20 & 0xffff) * 0x150);
          iVar5 = *(int *)((long)__dest + 0x130);
          iVar6 = *(int *)(param_1 + 0x10 + lVar11 * 0x150 + 0x130);
          if (iVar6 <= iVar5) {
            if (iVar5 != iVar6) {
              return 0;
            }
            lVar12 = param_1 + 0x10 + (uVar20 & 0xffff) * 0x150;
            lVar14 = param_1 + 0x10 + lVar11 * 0x150 + lVar16 * 0x88;
            lVar12 = lVar12 + (ulong)*(byte *)(lVar12 + 0x138) * 0x88;
            puVar3 = (ushort *)(lVar12 + -0x16);
            puVar9 = (ushort *)(lVar12 + -0xc);
            if ((*(byte *)(lVar12 + -0x21) & 0xf0) != 0x50) {
              puVar3 = (ushort *)(lVar12 + -0x18);
              puVar9 = (ushort *)(lVar12 + -0xe);
            }
            puVar4 = (ushort *)(lVar14 + 0x72);
            puVar10 = (ushort *)(lVar14 + 0x7c);
            if ((*(byte *)(lVar14 + 0x67) & 0xf0) != 0x50) {
              puVar4 = (ushort *)(lVar14 + 0x70);
              puVar10 = (ushort *)(lVar14 + 0x7a);
            }
            if ((ushort)((*puVar10 & 0x7f) + (*puVar4 & 0x7f)) <=
                (ushort)((*puVar9 & 0x7f) + (*puVar3 & 0x7f))) {
              return 0;
            }
          }
          lVar12 = param_1 + lVar11 * 0x150;
          *(byte *)(lVar12 + 0x14a) = *(byte *)(lVar12 + 0x14a) & 0x7f;
          memcpy(__dest,(void *)(param_1 + lVar11 * 0x150 + 0x10),0x150);
          FUN_00108b20(param_1,uVar20);
          return 0;
        }
      }
      else if (uVar18 < uVar13) goto LAB_001089a8;
LAB_00108984:
      uVar8 = (uint)(short)((short)uVar20 + 1);
      uVar20 = (ulong)uVar8;
      lVar12 = lVar12 + 0x150;
    } while ((int)uVar8 < (int)sVar7);
  }
  if (uVar13 != 0) {
LAB_001089a8:
    lVar14 = param_1 + lVar11 * 0x150;
    lVar12 = (ulong)*(byte *)(lVar14 + 0x148) - 1;
    uVar13 = (ushort)*(byte *)(lVar14 + lVar12 * 0x88 + 0x85);
    if ((uVar13 != 0) &&
       (0x37 < (ushort)((*(ushort *)(param_1 + lVar11 * 0x150 + lVar12 * 0x88 + 0x8a) & 0x7f) +
                       uVar13))) {
      return 0;
    }
  }
  *psVar2 = sVar7 + 1;
  FUN_00108b20(param_1);
  if (99 < *psVar2) {
    *psVar2 = *psVar2 + -1;
  }
  return 1;
}


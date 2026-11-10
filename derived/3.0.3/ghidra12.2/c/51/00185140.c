
void FUN_00185140(long param_1,long param_2,long param_3)

{
  ushort *puVar1;
  int iVar2;
  byte bVar3;
  ushort uVar4;
  ushort uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  undefined *puVar9;
  undefined *puVar10;
  long lVar11;
  ulong uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  
  puVar10 = PTR_DAT_04bcb750;
  puVar9 = PTR_DAT_04bcb748;
  if (*(int *)(param_1 + 0x170c) == 0) {
    uVar14 = *(uint *)(param_1 + 0x1734);
  }
  else {
    uVar13 = 0;
    do {
      lVar11 = *(long *)(param_1 + 0x1700);
      uVar6 = (uint)CONCAT11(*(undefined1 *)(lVar11 + (ulong)(uVar13 + 1)),
                             *(undefined1 *)(lVar11 + (ulong)uVar13));
      bVar3 = *(byte *)(lVar11 + (ulong)(uVar13 + 2));
      if (uVar6 == 0) {
        puVar1 = (ushort *)(param_2 + (ulong)bVar3 * 4);
        uVar14 = *(uint *)(param_1 + 0x1734);
        uVar15 = (uint)puVar1[1];
        uVar4 = *puVar1;
        uVar6 = (uint)*(ushort *)(param_1 + 0x1730) | (uint)uVar4 << (ulong)(uVar14 & 0x1f);
        *(short *)(param_1 + 0x1730) = (short)uVar6;
        if ((int)(0x10 - uVar15) < (int)uVar14) {
          lVar11 = *(long *)(param_1 + 0x28);
          *(long *)(param_1 + 0x28) = lVar11 + 1;
          *(char *)(*(long *)(param_1 + 0x10) + lVar11) = (char)uVar6;
          lVar11 = *(long *)(param_1 + 0x28);
          *(long *)(param_1 + 0x28) = lVar11 + 1;
          *(undefined1 *)(*(long *)(param_1 + 0x10) + lVar11) = *(undefined1 *)(param_1 + 0x1731);
          uVar14 = (uVar15 + *(int *)(param_1 + 0x1734)) - 0x10;
          *(ushort *)(param_1 + 0x1730) =
               uVar4 >> (ulong)(0x10U - *(int *)(param_1 + 0x1734) & 0x1f);
        }
        else {
          uVar14 = uVar14 + uVar15;
        }
LAB_00185198:
        *(uint *)(param_1 + 0x1734) = uVar14;
      }
      else {
        uVar12 = (ulong)(byte)puVar9[bVar3];
        lVar11 = param_2 + uVar12 * 4;
        uVar14 = *(uint *)(param_1 + 0x1734);
        uVar4 = *(ushort *)(lVar11 + 0x406);
        uVar5 = *(ushort *)(lVar11 + 0x404);
        uVar15 = (uint)*(ushort *)(param_1 + 0x1730) | (uint)uVar5 << (ulong)(uVar14 & 0x1f);
        *(short *)(param_1 + 0x1730) = (short)uVar15;
        if ((int)(0x10 - (uint)uVar4) < (int)uVar14) {
          lVar11 = *(long *)(param_1 + 0x28);
          *(long *)(param_1 + 0x28) = lVar11 + 1;
          *(char *)(*(long *)(param_1 + 0x10) + lVar11) = (char)uVar15;
          lVar11 = *(long *)(param_1 + 0x28);
          *(long *)(param_1 + 0x28) = lVar11 + 1;
          *(undefined1 *)(*(long *)(param_1 + 0x10) + lVar11) = *(undefined1 *)(param_1 + 0x1731);
          uVar5 = uVar5 >> (ulong)(0x10U - *(int *)(param_1 + 0x1734) & 0x1f);
          uVar15 = (uint)uVar5;
          uVar14 = ((uint)uVar4 + *(int *)(param_1 + 0x1734)) - 0x10;
          *(ushort *)(param_1 + 0x1730) = uVar5;
          *(uint *)(param_1 + 0x1734) = uVar14;
        }
        else {
          uVar14 = uVar14 + uVar4;
          *(uint *)(param_1 + 0x1734) = uVar14;
        }
        if (0xffffffffffffffeb < uVar12 - 0x1c) {
          iVar2 = *(int *)(&DAT_04108b44 + uVar12 * 4);
          uVar8 = (uint)bVar3 - *(int *)(&DAT_04108c90 + uVar12 * 4);
          if (0x10 - iVar2 < (int)uVar14) {
            lVar11 = *(long *)(param_1 + 0x28);
            uVar15 = uVar15 | uVar8 << (ulong)(uVar14 & 0x1f);
            *(short *)(param_1 + 0x1730) = (short)uVar15;
            *(long *)(param_1 + 0x28) = lVar11 + 1;
            *(char *)(*(long *)(param_1 + 0x10) + lVar11) = (char)uVar15;
            lVar11 = *(long *)(param_1 + 0x28);
            *(long *)(param_1 + 0x28) = lVar11 + 1;
            *(undefined1 *)(*(long *)(param_1 + 0x10) + lVar11) = *(undefined1 *)(param_1 + 0x1731);
            uVar15 = (uVar8 & 0xffff) >> (ulong)(0x10U - *(int *)(param_1 + 0x1734) & 0x1f);
            uVar14 = (iVar2 + *(int *)(param_1 + 0x1734)) - 0x10;
          }
          else {
            uVar7 = uVar14 & 0x1f;
            uVar14 = iVar2 + uVar14;
            uVar15 = uVar15 | uVar8 << (ulong)uVar7;
          }
          *(short *)(param_1 + 0x1730) = (short)uVar15;
          *(uint *)(param_1 + 0x1734) = uVar14;
        }
        uVar7 = uVar6 - 1;
        uVar8 = uVar7;
        if (0x100 < uVar6) {
          uVar8 = (uVar7 >> 7) + 0x100;
        }
        bVar3 = puVar10[uVar8];
        uVar12 = (ulong)bVar3;
        puVar1 = (ushort *)(param_3 + uVar12 * 4);
        uVar4 = puVar1[1];
        uVar5 = *puVar1;
        uVar15 = uVar15 | (uint)uVar5 << (ulong)(uVar14 & 0x1f);
        *(short *)(param_1 + 0x1730) = (short)uVar15;
        if ((int)(0x10 - (uint)uVar4) < (int)uVar14) {
          lVar11 = *(long *)(param_1 + 0x28);
          *(long *)(param_1 + 0x28) = lVar11 + 1;
          *(char *)(*(long *)(param_1 + 0x10) + lVar11) = (char)uVar15;
          lVar11 = *(long *)(param_1 + 0x28);
          *(long *)(param_1 + 0x28) = lVar11 + 1;
          *(undefined1 *)(*(long *)(param_1 + 0x10) + lVar11) = *(undefined1 *)(param_1 + 0x1731);
          uVar5 = uVar5 >> (ulong)(0x10U - *(int *)(param_1 + 0x1734) & 0x1f);
          uVar15 = (uint)uVar5;
          uVar14 = ((uint)uVar4 + *(int *)(param_1 + 0x1734)) - 0x10;
          *(ushort *)(param_1 + 0x1730) = uVar5;
          *(uint *)(param_1 + 0x1734) = uVar14;
        }
        else {
          uVar14 = uVar14 + uVar4;
          *(uint *)(param_1 + 0x1734) = uVar14;
        }
        if (3 < bVar3) {
          iVar2 = *(int *)(&DAT_04108bb8 + uVar12 * 4);
          uVar7 = uVar7 - *(int *)(&DAT_04108d04 + uVar12 * 4);
          if (0x10 - iVar2 < (int)uVar14) {
            lVar11 = *(long *)(param_1 + 0x28);
            uVar15 = uVar15 | uVar7 << (ulong)(uVar14 & 0x1f);
            *(short *)(param_1 + 0x1730) = (short)uVar15;
            *(long *)(param_1 + 0x28) = lVar11 + 1;
            *(char *)(*(long *)(param_1 + 0x10) + lVar11) = (char)uVar15;
            lVar11 = *(long *)(param_1 + 0x28);
            *(long *)(param_1 + 0x28) = lVar11 + 1;
            *(undefined1 *)(*(long *)(param_1 + 0x10) + lVar11) = *(undefined1 *)(param_1 + 0x1731);
            uVar14 = (iVar2 + *(int *)(param_1 + 0x1734)) - 0x10;
            *(short *)(param_1 + 0x1730) =
                 (short)((uVar7 & 0xffff) >> (ulong)(0x10U - *(int *)(param_1 + 0x1734) & 0x1f));
          }
          else {
            uVar6 = uVar14 & 0x1f;
            uVar14 = iVar2 + uVar14;
            *(ushort *)(param_1 + 0x1730) = (ushort)uVar15 | (ushort)(uVar7 << (ulong)uVar6);
          }
          goto LAB_00185198;
        }
      }
      uVar13 = uVar13 + 3;
    } while (uVar13 < *(uint *)(param_1 + 0x170c));
  }
  uVar4 = *(ushort *)(param_2 + 0x402);
  uVar5 = *(ushort *)(param_2 + 0x400);
  uVar13 = (uint)*(ushort *)(param_1 + 0x1730) | (uint)uVar5 << (ulong)(uVar14 & 0x1f);
  *(short *)(param_1 + 0x1730) = (short)uVar13;
  if ((int)(0x10 - (uint)uVar4) < (int)uVar14) {
    lVar11 = *(long *)(param_1 + 0x28);
    *(long *)(param_1 + 0x28) = lVar11 + 1;
    *(char *)(*(long *)(param_1 + 0x10) + lVar11) = (char)uVar13;
    lVar11 = *(long *)(param_1 + 0x28);
    *(long *)(param_1 + 0x28) = lVar11 + 1;
    *(undefined1 *)(*(long *)(param_1 + 0x10) + lVar11) = *(undefined1 *)(param_1 + 0x1731);
    *(ushort *)(param_1 + 0x1730) = uVar5 >> (ulong)(0x10U - *(int *)(param_1 + 0x1734) & 0x1f);
    *(uint *)(param_1 + 0x1734) = (uint)uVar4 + *(int *)(param_1 + 0x1734) + -0x10;
    return;
  }
  *(uint *)(param_1 + 0x1734) = uVar14 + uVar4;
  return;
}


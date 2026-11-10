
void FUN_00109030(long param_1,short param_2)

{
  ushort *puVar1;
  ushort uVar2;
  undefined4 uVar3;
  ushort uVar4;
  short sVar5;
  ushort uVar6;
  short sVar7;
  int iVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  short *psVar12;
  int iVar13;
  ushort uVar14;
  long lVar15;
  uint uVar16;
  long lVar17;
  int iVar18;
  int iVar19;
  
  psVar12 = (short *)(param_1 + 0x18 + (long)param_2 * 6);
  uVar4 = psVar12[2];
  sVar7 = *psVar12;
  sVar5 = psVar12[1];
  iVar19 = param_2 + -1;
  lVar17 = 0;
  if (param_2 != 0) {
    lVar17 = (long)iVar19;
  }
  uVar2 = uVar4 & 0x7f;
  iVar13 = (int)sVar7;
  if (((param_2 != 0) && (uVar14 = *(ushort *)(param_1 + lVar17 * 6 + 0x1c) & 0x7f, uVar14 <= uVar2)
      ) && (*(short *)(param_1 + 0x18 + lVar17 * 6) <= sVar7 || uVar2 != uVar14)) {
    iVar8 = (int)(short)iVar19;
    while( true ) {
      if (iVar8 < 0) {
        *(short *)(param_1 + 0x18) = sVar7;
        *(short *)(param_1 + 0x1a) = sVar5;
        *(ushort *)(param_1 + 0x1c) = uVar4;
        return;
      }
      lVar17 = param_1 + (long)(short)iVar19 * 6;
      uVar14 = *(ushort *)(lVar17 + 0x1c) & 0x7f;
      if (uVar2 < uVar14) break;
      bVar9 = false;
      bVar10 = false;
      bVar11 = false;
      if (uVar2 == uVar14) {
        iVar18 = (int)*(short *)(lVar17 + 0x18);
        bVar11 = SBORROW4(iVar13,iVar18);
        bVar9 = iVar13 - iVar18 < 0;
        bVar10 = iVar13 == iVar18;
      }
      if (bVar10 || bVar9 != bVar11) break;
      uVar3 = *(undefined4 *)(lVar17 + 0x18);
      lVar15 = param_1 + (long)iVar8 * 6;
      *(undefined2 *)(lVar15 + 0x22) = *(undefined2 *)(lVar17 + 0x1c);
      *(undefined4 *)(lVar15 + 0x1e) = uVar3;
      iVar19 = (int)(short)((short)iVar19 + -1);
      iVar8 = iVar19;
    }
    param_1 = param_1 + (long)iVar8 * 6;
    *(short *)(param_1 + 0x1e) = sVar7;
    *(short *)(param_1 + 0x20) = sVar5;
    *(ushort *)(param_1 + 0x22) = uVar4;
    return;
  }
  puVar1 = (ushort *)(param_1 + 0xb992);
  uVar6 = *puVar1;
  uVar14 = param_2 + 1;
  if (uVar14 < uVar6) {
    do {
      lVar17 = (long)(short)uVar14;
      lVar15 = param_1 + lVar17 * 6;
      uVar6 = *(ushort *)(lVar15 + 0x1c) & 0x7f;
      if (uVar6 < uVar2) {
LAB_00109174:
        lVar17 = param_1 + lVar17 * 6;
        *(short *)(lVar17 + 0x12) = sVar7;
        *(short *)(lVar17 + 0x14) = sVar5;
        *(ushort *)(lVar17 + 0x16) = uVar4;
        uVar16 = (uint)*puVar1;
        if (uVar14 < uVar16) {
          return;
        }
        goto LAB_00109194;
      }
      bVar9 = false;
      bVar10 = true;
      bVar11 = false;
      if (uVar2 == uVar6) {
        iVar19 = (int)*(short *)(lVar15 + 0x18);
        bVar11 = SBORROW4(iVar13,iVar19);
        bVar9 = iVar13 - iVar19 < 0;
        bVar10 = iVar13 == iVar19;
      }
      if (!bVar10 && bVar9 == bVar11) goto LAB_00109174;
      lVar17 = param_1 + lVar17 * 6;
      uVar3 = *(undefined4 *)(lVar15 + 0x18);
      *(undefined2 *)(lVar17 + 0x16) = *(undefined2 *)(lVar15 + 0x1c);
      *(undefined4 *)(lVar17 + 0x12) = uVar3;
      uVar6 = *puVar1;
      uVar14 = uVar14 + 1;
    } while (uVar14 < uVar6);
  }
  uVar16 = (uint)uVar6;
  if (uVar14 < uVar16) {
    return;
  }
LAB_00109194:
  param_1 = param_1 + (ulong)uVar16 * 6;
  *(short *)(param_1 + 0x12) = sVar7;
  *(short *)(param_1 + 0x14) = sVar5;
  *(ushort *)(param_1 + 0x16) = uVar4;
  return;
}


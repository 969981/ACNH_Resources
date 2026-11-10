
uint FUN_00183870(long param_1,ulong param_2)

{
  char *pcVar1;
  long lVar2;
  char *pcVar3;
  char *pcVar4;
  uint uVar5;
  uint uVar6;
  ushort uVar7;
  uint uVar8;
  int iVar9;
  long lVar10;
  char cVar11;
  int iVar12;
  long lVar13;
  uint uVar14;
  char cVar15;
  uint uVar16;
  int iVar17;
  ulong uVar18;
  
  uVar14 = *(uint *)(param_1 + 0xac);
  pcVar3 = (char *)(*(long *)(param_1 + 0x60) + (ulong)uVar14);
  uVar18 = (ulong)(int)*(uint *)(param_1 + 0xb8);
  uVar8 = *(int *)(param_1 + 0x50) - 0x106;
  uVar6 = *(uint *)(param_1 + 0xb4);
  iVar9 = (int)pcVar3 + 0x102;
  uVar5 = 0;
  if (uVar8 <= uVar14) {
    uVar5 = uVar14 - uVar8;
  }
  uVar14 = *(uint *)(param_1 + 0xbc);
  if (*(uint *)(param_1 + 0xcc) <= *(uint *)(param_1 + 0xb8)) {
    uVar14 = *(uint *)(param_1 + 0xbc) >> 2;
  }
  uVar8 = *(uint *)(param_1 + 0xd0);
  if (uVar6 <= *(uint *)(param_1 + 0xd0)) {
    uVar8 = uVar6;
  }
  cVar15 = (pcVar3 + uVar18)[-1];
  cVar11 = pcVar3[uVar18];
  do {
    pcVar1 = (char *)(*(long *)(param_1 + 0x60) + (param_2 & 0xffffffff));
    iVar17 = (int)uVar18;
    if ((((pcVar1[iVar17] == cVar11) && (pcVar1[(long)iVar17 + -1] == cVar15)) &&
        (*pcVar1 == *pcVar3)) && (pcVar1[1] == pcVar3[1])) {
      lVar13 = 0;
      do {
        pcVar4 = pcVar3 + lVar13;
        iVar12 = (int)pcVar4;
        if (pcVar4[3] != pcVar1[lVar13 + 3]) {
          iVar12 = (iVar12 + 3) - iVar9;
          goto joined_r0x00183a24;
        }
        if (pcVar4[4] != pcVar1[lVar13 + 4]) {
          iVar12 = (iVar12 + 4) - iVar9;
          goto joined_r0x00183a24;
        }
        if (pcVar4[5] != pcVar1[lVar13 + 5]) {
          iVar12 = (iVar12 + 5) - iVar9;
          goto joined_r0x00183a24;
        }
        if (pcVar4[6] != pcVar1[lVar13 + 6]) {
          iVar12 = (iVar12 + 6) - iVar9;
          goto joined_r0x00183a24;
        }
        if (pcVar4[7] != pcVar1[lVar13 + 7]) {
          iVar12 = (iVar12 + 7) - iVar9;
          goto joined_r0x00183a24;
        }
        if (pcVar4[8] != pcVar1[lVar13 + 8]) {
          iVar12 = (iVar12 + 8) - iVar9;
          goto joined_r0x00183a24;
        }
        if (pcVar4[9] != pcVar1[lVar13 + 9]) {
          iVar12 = (iVar12 + 9) - iVar9;
          goto joined_r0x00183a24;
        }
        lVar2 = lVar13 + 8;
      } while ((lVar13 + 2U < 0xfa) &&
              (lVar10 = lVar13 + 10, lVar13 = lVar2, pcVar4[10] == pcVar1[lVar10]));
      iVar12 = ((int)pcVar3 + (int)lVar2 + 2) - iVar9;
joined_r0x00183a24:
      uVar16 = iVar12 + 0x102;
      if (iVar17 < (int)uVar16) {
        *(int *)(param_1 + 0xb0) = (int)param_2;
        if ((int)uVar8 <= (int)uVar16) break;
        cVar11 = pcVar3[(int)uVar16];
        cVar15 = pcVar3[iVar12 + 0x101];
        uVar18 = (ulong)uVar16;
      }
    }
    uVar16 = (uint)uVar18;
    uVar14 = uVar14 - 1;
    uVar7 = *(ushort *)(*(long *)(param_1 + 0x70) + (param_2 & *(uint *)(param_1 + 0x58)) * 2);
    param_2 = (ulong)uVar7;
  } while (uVar5 < uVar7 && uVar14 != 0);
  if (uVar6 <= uVar16) {
    uVar16 = uVar6;
  }
  return uVar16;
}


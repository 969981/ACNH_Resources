
undefined8 FUN_012f8da0(long param_1,uint param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  ushort *puVar3;
  ushort *puVar4;
  long lVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  ushort uVar10;
  short sVar11;
  short sVar12;
  int iVar13;
  int iVar14;
  long lVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  uint uVar20;
  uint *puVar21;
  uint *puVar22;
  
  iVar7 = *(int *)(param_1 + 0x80);
  iVar18 = *(int *)(param_1 + 0x84);
  iVar16 = *(int *)(param_1 + 0x94) + 1;
  iVar8 = *(int *)(param_1 + 0x68);
  iVar9 = *(int *)(param_1 + 0x6c);
  if (iVar7 == iVar8 && iVar16 == iVar9) {
    if (iVar7 < *(int *)(param_1 + 0x90)) {
      iVar19 = iVar7 + 1;
      goto LAB_012f8e04;
    }
    iVar16 = *(int *)(param_1 + 0x94) + 2;
  }
  iVar19 = iVar7;
  if (iVar16 == iVar18) {
    return 0;
  }
LAB_012f8e04:
  sVar11 = *(short *)(param_1 + 0xd4);
  if (*(short *)(param_1 + 0xd8) <= *(short *)(param_1 + 0xd4)) {
    sVar11 = *(short *)(param_1 + 0xd8);
  }
  sVar12 = *(short *)(param_1 + 0xd6);
  if (*(short *)(param_1 + 0xda) <= *(short *)(param_1 + 0xd6)) {
    sVar12 = *(short *)(param_1 + 0xda);
  }
  lVar15 = *(long *)PTR_DAT_04bb27a8;
  iVar17 = iVar7;
  if (iVar8 < *(int *)(param_1 + 0x90)) {
    iVar13 = iVar8 + 1;
    iVar1 = iVar9;
  }
  else {
    iVar1 = iVar9 + 1;
    iVar13 = iVar7;
  }
  do {
    puVar3 = (ushort *)
             (param_1 + 0xdc + (ulong)(uint)((iVar18 - sVar12) * 3 + (iVar17 - sVar11)) * 0xe);
    if (2 < (uint)(iVar18 - sVar12) || 2 < (uint)(iVar17 - sVar11)) {
      puVar3 = (ushort *)PTR_DAT_04bbc2f8;
    }
    if ((byte)puVar3[6] == param_3) {
      puVar4 = puVar3 + (ulong)*(uint *)(param_1 + 0xa0) * 3;
      if (1 < *(uint *)(param_1 + 0xa0)) {
        puVar4 = puVar3;
      }
      uVar20 = (uint)*puVar4 - (uint)*(ushort *)(lVar15 + 0x408);
      if ((uVar20 < *(uint *)(lVar15 + 1000)) &&
         (puVar21 = *(uint **)(*(long *)(lVar15 + 0x3f0) + (long)(int)uVar20 * 8),
         puVar21 != (uint *)0x0)) {
        uVar20 = *puVar21;
        if (uVar20 == 0 || puVar21 == (uint *)(ulong)uVar20) {
LAB_012f8f4c:
          uVar20 = 0;
        }
        else {
          puVar22 = (uint *)((long)puVar21 - (long)(ulong)uVar20);
          if (((*puVar22 == 0) || (uVar20 = puVar22[1], uVar20 == 0)) ||
             ((ulong)(ushort)puVar22[2] == 0)) goto LAB_012f8f4c;
          lVar5 = 0xc;
          if (*(char *)((long)puVar22 + 10) != '\0') {
            lVar5 = 0x1c;
          }
          lVar5 = (long)puVar22 + lVar5 + (ulong)(ushort)puVar22[2] * 8;
          if (lVar5 == 0) goto LAB_012f8f4c;
          uVar6 = 0;
          if ((ulong)uVar20 != 0) {
            uVar6 = (uint)((ulong)((long)puVar21 - lVar5) / (ulong)uVar20);
          }
          if (*puVar22 <= uVar6) {
            uVar6 = 0xffffffff;
          }
          if ((*(uint *)PTR_DAT_04bbbe48 <= uVar6) ||
             (uVar10 = *(ushort *)(*(long *)(PTR_DAT_04bbbe48 + 8) + (long)(int)uVar6 * 2),
             uVar20 = (uint)uVar10, 4 < uVar10)) goto LAB_012f8f4c;
        }
        if (uVar20 == param_2) {
          return 1;
        }
      }
    }
    if (iVar17 < *(int *)(param_1 + 0x90)) {
      iVar14 = iVar17 + 1;
    }
    else {
      iVar18 = iVar18 + 1;
      iVar14 = iVar7;
    }
    iVar2 = iVar1;
    iVar17 = iVar13;
    if (iVar14 != iVar8 || iVar18 != iVar9) {
      iVar2 = iVar18;
      iVar17 = iVar14;
    }
    iVar18 = iVar2;
    if ((iVar19 == iVar17) && (iVar16 == iVar2)) {
      return 0;
    }
  } while( true );
}


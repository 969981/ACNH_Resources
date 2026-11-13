
undefined8 FUN_012f8fd0(long param_1,int param_2)

{
  int iVar1;
  ushort *puVar2;
  ushort *puVar3;
  long lVar4;
  uint uVar5;
  int iVar6;
  short sVar7;
  short sVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  long lVar12;
  ushort uVar13;
  uint *puVar14;
  uint *puVar15;
  
  iVar11 = *(int *)(param_1 + 0x84);
  iVar1 = *(int *)(param_1 + 0x94) + 1;
  if (iVar1 != iVar11) {
    iVar6 = *(int *)(param_1 + 0x80);
    sVar7 = *(short *)(param_1 + 0xd4);
    if (*(short *)(param_1 + 0xd8) <= *(short *)(param_1 + 0xd4)) {
      sVar7 = *(short *)(param_1 + 0xd8);
    }
    sVar8 = *(short *)(param_1 + 0xd6);
    if (*(short *)(param_1 + 0xda) <= *(short *)(param_1 + 0xd6)) {
      sVar8 = *(short *)(param_1 + 0xda);
    }
    lVar12 = *(long *)PTR_DAT_04bb27a8;
    iVar10 = iVar6;
    do {
      if ((iVar10 == *(int *)(param_1 + 0x68)) || (iVar11 == *(int *)(param_1 + 0x6c))) {
        puVar2 = (ushort *)
                 (param_1 + 0xdc + (ulong)(uint)((iVar11 - sVar8) * 3 + (iVar10 - sVar7)) * 0xe);
        if (2 < (uint)(iVar11 - sVar8) || 2 < (uint)(iVar10 - sVar7)) {
          puVar2 = (ushort *)PTR_DAT_04bbc2f8;
        }
        if (((byte)puVar2[6] != 4) && (param_2 <= (int)(uint)(byte)puVar2[6])) {
          puVar3 = puVar2 + (ulong)*(uint *)(param_1 + 0xa0) * 3;
          if (1 < *(uint *)(param_1 + 0xa0)) {
            puVar3 = puVar2;
          }
          uVar9 = (uint)*puVar3 - (uint)*(ushort *)(lVar12 + 0x408);
          if ((uVar9 < *(uint *)(lVar12 + 1000)) &&
             (puVar14 = *(uint **)(*(long *)(lVar12 + 0x3f0) + (long)(int)uVar9 * 8),
             puVar14 != (uint *)0x0)) {
            uVar9 = *puVar14;
            if (uVar9 == 0 || puVar14 == (uint *)(ulong)uVar9) {
LAB_012f9164:
              uVar13 = 0;
            }
            else {
              puVar15 = (uint *)((long)puVar14 - (long)(ulong)uVar9);
              if (((*puVar15 == 0) || (uVar9 = puVar15[1], uVar9 == 0)) ||
                 ((ulong)(ushort)puVar15[2] == 0)) goto LAB_012f9164;
              lVar4 = 0xc;
              if (*(char *)((long)puVar15 + 10) != '\0') {
                lVar4 = 0x1c;
              }
              lVar4 = (long)puVar15 + lVar4 + (ulong)(ushort)puVar15[2] * 8;
              if (lVar4 == 0) goto LAB_012f9164;
              uVar5 = 0;
              if ((ulong)uVar9 != 0) {
                uVar5 = (uint)((ulong)((long)puVar14 - lVar4) / (ulong)uVar9);
              }
              if (*puVar15 <= uVar5) {
                uVar5 = 0xffffffff;
              }
              if ((*(uint *)PTR_DAT_04bbbe48 <= uVar5) ||
                 (uVar13 = *(ushort *)(*(long *)(PTR_DAT_04bbbe48 + 8) + (long)(int)uVar5 * 2),
                 4 < uVar13)) goto LAB_012f9164;
            }
            if (uVar13 == 4) {
              return 1;
            }
          }
        }
      }
      if (iVar10 < *(int *)(param_1 + 0x90)) {
        iVar10 = iVar10 + 1;
      }
      else {
        iVar11 = iVar11 + 1;
        iVar10 = iVar6;
      }
    } while ((iVar6 != iVar10) || (iVar1 != iVar11));
  }
  return 0;
}


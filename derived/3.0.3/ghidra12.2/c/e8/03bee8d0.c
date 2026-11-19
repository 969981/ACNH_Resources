
void FUN_03bee8d0(undefined4 *param_1,long param_2,uint *param_3)

{
  ulong uVar1;
  long lVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  long lVar5;
  int *piVar6;
  undefined *puVar7;
  uint uVar8;
  size_t sVar9;
  int iVar10;
  uint uVar11;
  uint *puVar12;
  int *piVar13;
  int *piVar14;
  int *piVar15;
  uint uVar16;
  byte *pbVar17;
  ulong uVar18;
  int *piVar19;
  int *piVar20;
  byte *__string;
  int iVar21;
  int *piVar22;
  int *piVar23;
  
  puVar7 = PTR_DAT_04bb38c8;
  uVar8 = param_1[1];
  uVar16 = param_1[2];
  puVar4 = (undefined4 *)0x0;
  if (uVar8 != 0) {
    puVar4 = param_1 + 0xc;
  }
  lVar2 = (long)(param_1 + 0xc) +
          ((ulong)uVar16 & 1) * 2 + (ulong)uVar16 * 2 + (ulong)*param_3 * 4 + (ulong)uVar8 * 4;
  lVar5 = 0;
  if (uVar16 != 0) {
    lVar5 = lVar2;
  }
  iVar21 = 0;
  if (uVar16 != param_1[3]) {
    iVar21 = (int)lVar2 + uVar16 * 0x20;
  }
  uVar18 = (ulong)(uint)(param_1[0xb] + (int)param_1);
  piVar20 = (int *)(*(ulong *)PTR_DAT_04bb38c8 | uVar18);
  piVar15 = piVar20 + 0x40000000;
  if (*(ulong *)PTR_DAT_04bb38c0 <= uVar18) {
    piVar15 = piVar20;
  }
  piVar20 = (int *)0x0;
  if (param_1[5] != 0) {
    piVar20 = piVar15;
  }
  piVar15 = piVar15 + (ulong)(uint)param_1[5] * 2;
  piVar23 = (int *)0x0;
  if (param_1[6] != 0) {
    piVar23 = piVar15;
  }
  piVar15 = piVar15 + (ulong)(uint)param_1[6] * 3;
  piVar13 = (int *)0x0;
  if (param_1[7] != 0) {
    piVar13 = piVar15;
  }
  piVar15 = piVar15 + (ulong)(uint)param_1[7] * 6;
  piVar22 = (int *)0x0;
  if (param_1[8] != 0) {
    piVar22 = piVar15;
  }
  piVar14 = (int *)0x0;
  if ((ulong)(uint)param_1[9] != 0) {
    piVar14 = piVar15 + (ulong)(uint)param_1[8] * 4;
  }
  piVar6 = (int *)0x0;
  if (param_1[10] != 0) {
    piVar6 = piVar15 + (ulong)(uint)param_1[8] * 4 + (ulong)(uint)param_1[9] * 5;
  }
  if (uVar8 != 0) {
    uVar18 = 0;
    do {
      uVar1 = uVar18 + 1;
      puVar4[uVar18] = puVar4[uVar18] + *(int *)(param_2 + 0x70);
      uVar18 = uVar1;
    } while (uVar1 < (uint)param_1[1]);
    uVar16 = param_1[2];
  }
  if (uVar16 != 0) {
    uVar18 = 0;
    do {
      uVar8 = *(int *)(lVar5 + uVar18 * 0x20) + *(int *)(param_2 + 0x70);
      *(uint *)(lVar5 + uVar18 * 0x20) = uVar8;
      pbVar17 = (byte *)(*(ulong *)puVar7 | (ulong)uVar8);
      __string = pbVar17 + 0x100000000;
      if (*(ulong *)PTR_DAT_04bb38c0 <= (ulong)uVar8) {
        __string = pbVar17;
      }
      sVar9 = strnlen((char *)__string,0x100);
      uVar8 = (uint)sVar9;
      if (uVar8 == 0) {
        uVar16 = 0;
      }
      else {
        if (uVar8 < 8) {
          uVar16 = 0xffffffff;
        }
        else {
          uVar11 = uVar8 & 0xfffffff8;
          uVar16 = 0xffffffff;
          do {
            uVar11 = uVar11 - 8;
            uVar3 = crc32b(uVar16,(uint)*__string,0x4c11db7);
            uVar3 = crc32b(uVar3,(uint)__string[1],0x4c11db7);
            uVar3 = crc32b(uVar3,(uint)__string[2],0x4c11db7);
            uVar3 = crc32b(uVar3,(uint)__string[3],0x4c11db7);
            uVar3 = crc32b(uVar3,(uint)__string[4],0x4c11db7);
            uVar3 = crc32b(uVar3,(uint)__string[5],0x4c11db7);
            uVar3 = crc32b(uVar3,(uint)__string[6],0x4c11db7);
            pbVar17 = __string + 7;
            __string = __string + 8;
            uVar16 = crc32b(uVar3,(uint)*pbVar17,0x4c11db7);
          } while (uVar11 != 0);
        }
        uVar8 = uVar8 & 7;
        if ((sVar9 & 7) != 0) {
          do {
            uVar8 = uVar8 - 1;
            uVar16 = crc32b(uVar16,(uint)*__string,0x4c11db7);
            __string = __string + 1;
          } while (uVar8 != 0);
        }
        uVar16 = ~uVar16;
      }
      lVar2 = lVar5 + uVar18 * 0x20;
      *(uint *)(lVar2 + 0x14) = uVar16;
      if ((*(ushort *)(lVar2 + 6) & 1) == 0) {
        *(int *)(lVar2 + 0x18) = *(int *)(lVar2 + 0x18) + *(int *)(param_2 + 0x28);
      }
      else {
        puVar12 = (uint *)(lVar2 + 0x18);
        if (*puVar12 == 0xffffffff) {
          *puVar12 = 0;
        }
        else {
          uVar8 = *puVar12 + iVar21;
          *puVar12 = uVar8;
          piVar19 = (int *)(*(ulong *)puVar7 | (ulong)uVar8);
          piVar15 = piVar19 + 0x40000000;
          if (*(ulong *)PTR_DAT_04bb38c0 <= (ulong)uVar8) {
            piVar15 = piVar19;
          }
          if (*piVar15 == 0) {
            piVar15[3] = piVar15[3] + *(int *)(param_2 + 0x70);
          }
        }
      }
      iVar10 = *(int *)(lVar2 + 0x1c);
      if (iVar10 == -1) {
        iVar10 = 0;
      }
      else {
        iVar10 = *(int *)(param_2 + 0x68) + iVar10;
      }
      *(int *)(lVar2 + 0x1c) = iVar10;
      uVar18 = uVar18 + 1;
    } while (uVar18 < (uint)param_1[2]);
  }
  if (param_1[5] != 0) {
    uVar18 = 0;
    do {
      uVar18 = uVar18 + 1;
      *piVar20 = *piVar20 + *(int *)(param_2 + 0x70);
      piVar20 = piVar20 + 2;
    } while (uVar18 < (uint)param_1[5]);
  }
  if (param_1[6] != 0) {
    uVar18 = 0;
    do {
      uVar18 = uVar18 + 1;
      *piVar23 = *piVar23 + *(int *)(param_2 + 0x70);
      piVar23 = piVar23 + 3;
    } while (uVar18 < (uint)param_1[6]);
  }
  iVar21 = (int)lVar5;
  if (param_1[7] != 0) {
    uVar18 = 0;
    piVar13 = piVar13 + 5;
    do {
      piVar13[-4] = piVar13[-4] + iVar21;
      if (*piVar13 == -1) {
        iVar10 = 0;
      }
      else {
        iVar10 = *(int *)(param_2 + 0x30) + *piVar13;
      }
      *piVar13 = iVar10;
      if ((*(ushort *)(piVar13 + -1) & 0x1c) == 0x10) {
        piVar13[-3] = piVar13[-3] + *(int *)(param_2 + 0x70);
      }
      uVar18 = uVar18 + 1;
      piVar13 = piVar13 + 6;
    } while (uVar18 < (uint)param_1[7]);
  }
  if (param_1[8] != 0) {
    uVar18 = 0;
    do {
      uVar18 = uVar18 + 1;
      *piVar22 = *piVar22 + *(int *)(param_2 + 0x70);
      piVar22 = piVar22 + 4;
    } while (uVar18 < (uint)param_1[8]);
  }
  if (param_1[9] != 0) {
    uVar18 = 0;
    piVar14 = piVar14 + 2;
    do {
      piVar14[-1] = piVar14[-1] + iVar21;
      if (*piVar14 == -1) {
        iVar10 = 0;
      }
      else {
        iVar10 = *(int *)(param_2 + 0x68) + *piVar14;
      }
      *piVar14 = iVar10;
      if (piVar14[2] == -1) {
        iVar10 = 0;
      }
      else {
        iVar10 = *(int *)(param_2 + 0x30) + piVar14[2];
      }
      piVar14[2] = iVar10;
      uVar18 = uVar18 + 1;
      piVar14 = piVar14 + 5;
    } while (uVar18 < (uint)param_1[9]);
  }
  if (param_1[10] != 0) {
    uVar18 = 0;
    piVar15 = piVar6 + 3;
    do {
      piVar15[-2] = piVar15[-2] + iVar21;
      if (*piVar15 == -1) {
        iVar10 = 0;
      }
      else {
        iVar10 = *(int *)(param_2 + 0x30) + *piVar15;
      }
      *piVar15 = iVar10;
      uVar18 = uVar18 + 1;
      piVar15 = piVar15 + 4;
    } while (uVar18 < (uint)param_1[10]);
  }
  *param_1 = 1;
  return;
}


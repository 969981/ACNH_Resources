
void FUN_02dc4d00(uint *param_1)

{
  bool bVar1;
  short *psVar2;
  undefined *puVar3;
  uint uVar4;
  int iVar5;
  short *psVar6;
  ulong uVar7;
  ulong uVar8;
  short *psVar9;
  long lVar10;
  short *psVar11;
  long *plVar12;
  long lVar13;
  uint uVar14;
  ulong uVar15;
  uint uVar16;
  uint uVar17;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  
  puVar3 = PTR_DAT_04bb37e0;
  uVar14 = *param_1;
  if (1 < (int)uVar14) {
    plVar12 = *(long **)(param_1 + 2);
    uVar7 = (ulong)(uVar14 >> 1);
    do {
      uVar17 = (uint)uVar7 * 2;
      lVar13 = plVar12[uVar7 - 1 & 0xffffffff];
      if ((int)uVar14 < (int)uVar17) {
        uVar4 = (uint)uVar7;
      }
      else {
        psVar2 = (short *)(lVar13 + 8);
        uVar15 = uVar7 & 0xffffffff;
        do {
          if ((int)uVar17 < (int)uVar14) {
            psVar11 = (short *)((plVar12 + (int)uVar17)[-1] + 8);
            psVar6 = (short *)(plVar12[(int)uVar17] + 8);
            psVar9 = (short *)puVar3;
            if (*psVar11 != -2) {
              psVar9 = psVar11;
            }
            local_68 = *(undefined4 *)psVar9;
            uStack_64 = *(undefined4 *)(psVar9 + 2);
            psVar9 = (short *)puVar3;
            if (*psVar6 != -2) {
              psVar9 = psVar6;
            }
            local_70 = *(undefined4 *)psVar9;
            uStack_6c = *(undefined4 *)(psVar9 + 2);
            uVar4 = FUN_01a4e630(&local_68,&local_70);
            uVar16 = uVar17 | uVar4 >> 0x1f;
          }
          else {
            uVar16 = uVar17;
          }
          psVar9 = (short *)puVar3;
          if (*psVar2 != -2) {
            psVar9 = psVar2;
          }
          local_68 = *(undefined4 *)psVar9;
          uStack_64 = *(undefined4 *)(psVar9 + 2);
          psVar9 = (short *)puVar3;
          if (*(short *)(plVar12[(int)(uVar16 - 1)] + 8) != -2) {
            psVar9 = (short *)(plVar12[(int)(uVar16 - 1)] + 8);
          }
          local_70 = *(undefined4 *)psVar9;
          uStack_6c = *(undefined4 *)(psVar9 + 2);
          iVar5 = FUN_01a4e630(&local_68,&local_70);
          uVar4 = (uint)uVar15;
          if (-1 < iVar5) break;
          uVar17 = uVar16 * 2;
          uVar15 = (ulong)uVar16;
          plVar12[(int)(uVar4 - 1)] = plVar12[(int)(uVar16 - 1)];
          uVar4 = uVar16;
        } while ((int)uVar17 <= (int)uVar14);
      }
      plVar12[(int)(uVar4 - 1)] = lVar13;
      bVar1 = 1 < (long)uVar7;
      uVar7 = uVar7 - 1;
    } while (bVar1);
    uVar7 = (ulong)uVar14 - 1;
    uVar15 = uVar7 & 0xffffffff;
    lVar13 = plVar12[uVar15];
    plVar12[uVar15] = *plVar12;
    uVar15 = (ulong)uVar14;
    if (2 < uVar14) {
      do {
        uVar8 = uVar7;
        uVar14 = 2;
        uVar17 = 1;
        do {
          uVar4 = uVar14;
          if ((int)uVar14 < (int)uVar8) {
            psVar6 = (short *)((plVar12 + (int)uVar14)[-1] + 8);
            psVar9 = (short *)(plVar12[(int)uVar14] + 8);
            psVar2 = (short *)puVar3;
            if (*psVar6 != -2) {
              psVar2 = psVar6;
            }
            local_68 = *(undefined4 *)psVar2;
            uStack_64 = *(undefined4 *)(psVar2 + 2);
            psVar2 = (short *)puVar3;
            if (*psVar9 != -2) {
              psVar2 = psVar9;
            }
            local_70 = *(undefined4 *)psVar2;
            uStack_6c = *(undefined4 *)(psVar2 + 2);
            uVar4 = FUN_01a4e630(&local_68,&local_70);
            uVar4 = uVar14 | uVar4 >> 0x1f;
          }
          psVar2 = (short *)puVar3;
          if (*(short *)(lVar13 + 8) != -2) {
            psVar2 = (short *)(lVar13 + 8);
          }
          local_68 = *(undefined4 *)psVar2;
          uStack_64 = *(undefined4 *)(psVar2 + 2);
          psVar2 = (short *)puVar3;
          if (*(short *)(plVar12[(int)(uVar4 - 1)] + 8) != -2) {
            psVar2 = (short *)(plVar12[(int)(uVar4 - 1)] + 8);
          }
          local_70 = *(undefined4 *)psVar2;
          uStack_6c = *(undefined4 *)(psVar2 + 2);
          iVar5 = FUN_01a4e630(&local_68,&local_70);
          if (-1 < iVar5) {
            lVar10 = (long)(int)(uVar17 - 1);
            break;
          }
          lVar10 = (long)(int)(uVar4 - 1);
          uVar14 = uVar4 << 1;
          plVar12[(int)(uVar17 - 1)] = plVar12[lVar10];
          uVar17 = uVar4;
        } while ((long)(int)uVar14 < (long)uVar15);
        plVar12[lVar10] = lVar13;
        uVar7 = uVar8 - 1 & 0xffffffff;
        lVar13 = plVar12[uVar7];
        plVar12[uVar7] = *plVar12;
        uVar7 = uVar8 - 1;
        uVar15 = uVar8;
      } while (2 < uVar8);
    }
    *plVar12 = lVar13;
  }
  return;
}


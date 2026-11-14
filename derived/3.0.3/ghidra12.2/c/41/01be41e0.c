
void FUN_01be41e0(int *param_1,int param_2)

{
  long lVar1;
  int iVar2;
  undefined *puVar3;
  ulong uVar4;
  char *pcVar5;
  ulong uVar6;
  int *piVar7;
  ulong uVar8;
  uint uVar9;
  uint uVar10;
  ulong uVar11;
  ulong uVar12;
  ushort *puVar13;
  ushort uVar14;
  ushort *puVar15;
  long lVar16;
  undefined8 *puVar17;
  undefined1 auStack_c10 [56];
  undefined *local_bd8;
  undefined *puStack_bd0;
  undefined8 local_bc8;
  undefined6 uStack_bc0;
  undefined2 local_bba;
  undefined6 uStack_bb8;
  int local_bb0 [724];
  
  puVar3 = PTR_DAT_04bb2020;
  if (*param_1 != 0) {
    puVar17 = *(undefined8 **)(param_1 + 2);
    uVar14 = 0;
    lVar16 = (long)*param_1 << 3;
    do {
      puVar15 = (ushort *)*puVar17;
      uStack_bb8 = 0;
      local_bb0[0] = 0;
      local_bb0[1] = 0;
      local_bc8 = 0;
      uStack_bc0 = 0;
      local_bba = 0;
      if (*(int *)(puVar15 + 4) == 2) {
        pcVar5 = "%03d_%02d_1";
        local_bd8 = puVar3;
      }
      else {
        pcVar5 = "%03d_%02d_0";
        local_bd8 = PTR_DAT_04bb2020;
      }
      local_bd8 = local_bd8 + 0x10;
      puStack_bd0 = PTR_s_NookMilage_Keyword_Noun_04c485f8;
      FUN_006d8678(auStack_c10,pcVar5,puVar15[1],*(int *)(puVar15 + 2) + -1);
      local_bb0[0] = 0;
      local_bb0[1] = 0;
      local_bc8 = 0;
      uStack_bc0 = 0;
      local_bba = 0;
      uStack_bb8 = 0;
      FUN_01b970f0(&local_bc8,&local_bd8);
      FUN_01b9735c(&local_bc8,&local_bd8,auStack_c10);
      piVar7 = local_bb0;
      if (param_2 == 0xe) {
LAB_01be4240:
        uVar8 = (ulong)uVar14;
        iVar2 = *piVar7;
        if ((int)local_bc8 != 7) {
          iVar2 = 0;
        }
        if (0x2cf < uVar14) {
          uVar8 = 0;
        }
        local_bb0[uVar8 + 2] = iVar2;
      }
      else if (param_2 == 0xf) {
        piVar7 = local_bb0 + 1;
        goto LAB_01be4240;
      }
      *puVar15 = uVar14;
      uVar14 = uVar14 + 1;
      puVar17 = puVar17 + 1;
      lVar16 = lVar16 + -8;
    } while (lVar16 != 0);
    if (1 < *param_1) {
      uVar9 = *param_1 - 1;
      lVar16 = *(long *)(param_1 + 2);
      uVar10 = 0;
      do {
        if ((int)uVar9 <= (int)uVar10) {
          return;
        }
        puVar15 = *(ushort **)(lVar16 + (ulong)uVar10 * 8);
        uVar8 = (ulong)uVar10;
        if ((uVar9 - uVar10 & 1) == 0) {
          puVar13 = puVar15;
          uVar11 = uVar8;
        }
        else {
          uVar11 = uVar8 + 1;
          uVar12 = (ulong)*puVar15;
          puVar13 = *(ushort **)(lVar16 + uVar11 * 8);
          uVar4 = (ulong)*puVar13;
          if (0x2cf < *puVar15) {
            uVar12 = 0;
          }
          if (0x2cf < *puVar13) {
            uVar4 = 0;
          }
          if (local_bb0[uVar4 + 2] < local_bb0[uVar12 + 2]) {
            *(ushort **)(lVar16 + uVar11 * 8) = puVar15;
            *(ushort **)(lVar16 + uVar8 * 8) = puVar13;
            puVar13 = puVar15;
          }
        }
        uVar12 = (ulong)uVar9;
        uVar9 = uVar10;
        if (~uVar8 + uVar12 != 0) {
          puVar17 = (undefined8 *)(lVar16 + 8 + uVar11 * 8);
          do {
            puVar15 = (ushort *)*puVar17;
            uVar4 = (ulong)*puVar13;
            uVar6 = (ulong)*puVar15;
            if (0x2cf < *puVar13) {
              uVar4 = 0;
            }
            if (0x2cf < *puVar15) {
              uVar6 = 0;
            }
            if (local_bb0[uVar6 + 2] < local_bb0[uVar4 + 2]) {
              puVar17[-1] = puVar15;
              *puVar17 = puVar13;
              uVar9 = (uint)uVar11;
            }
            else {
              puVar13 = puVar15;
            }
            puVar15 = (ushort *)puVar17[1];
            uVar4 = (ulong)*puVar13;
            uVar6 = (ulong)*puVar15;
            if (0x2cf < *puVar13) {
              uVar4 = 0;
            }
            if (0x2cf < *puVar15) {
              uVar6 = 0;
            }
            if (local_bb0[uVar6 + 2] < local_bb0[uVar4 + 2]) {
              uVar9 = (uint)uVar11 + 1;
              *puVar17 = puVar15;
              puVar17[1] = puVar13;
            }
            else {
              puVar13 = puVar15;
            }
            uVar11 = uVar11 + 2;
            puVar17 = puVar17 + 2;
          } while (uVar12 != uVar11);
        }
        if ((int)uVar9 <= (int)uVar10) {
          return;
        }
        puVar15 = *(ushort **)(lVar16 + (ulong)uVar9 * 8);
        uVar11 = (ulong)uVar9;
        uVar10 = uVar9;
        do {
          lVar1 = lVar16 + uVar11 * 8;
          uVar12 = (ulong)*puVar15;
          puVar13 = *(ushort **)(lVar1 + -8);
          if (0x2cf < *puVar15) {
            uVar12 = 0;
          }
          uVar4 = (ulong)*puVar13;
          if (0x2cf < *puVar13) {
            uVar4 = 0;
          }
          if (local_bb0[uVar12 + 2] < local_bb0[uVar4 + 2]) {
            uVar10 = (uint)uVar11;
            *(ushort **)(lVar1 + -8) = puVar15;
            *(ushort **)(lVar16 + uVar11 * 8) = puVar13;
          }
          else {
            puVar15 = puVar13;
          }
          uVar11 = uVar11 - 1;
        } while ((long)uVar8 < (long)uVar11);
      } while (uVar10 != uVar9);
    }
  }
  return;
}


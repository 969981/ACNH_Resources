
void FUN_03f018a0(long param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  long *plVar8;
  uint uVar9;
  long lVar10;
  uint *puVar11;
  long lVar12;
  long lVar13;
  uint *puVar14;
  long lVar15;
  undefined8 uVar16;
  
  uVar7 = *(uint *)(param_1 + 0x58);
  if (0 < (int)uVar7) {
    uVar9 = 0;
    do {
      lVar10 = *(long *)(param_1 + 0x60);
      uVar3 = uVar9;
      if (*(uint *)(param_1 + 0x58) <= uVar9) {
        uVar3 = 0;
      }
      puVar11 = (uint *)(lVar10 + (ulong)uVar3 * 0x28);
      uVar4 = puVar11[3];
      uVar5 = puVar11[4];
      if (*(uint *)(param_2 + 0x10) <= uVar4) {
        uVar4 = 0;
      }
      plVar8 = (long *)(*(long *)(param_2 + 0x18) + (long)(int)uVar4 * 0x48);
      if (*(uint *)(plVar8 + 1) <= uVar5) {
        uVar5 = 0;
      }
      uVar4 = *puVar11;
      uVar6 = puVar11[1];
      if (*(uint *)(param_1 + 0x10) <= uVar4) {
        uVar4 = 0;
      }
      lVar15 = *(long *)(param_1 + 0x18) + (long)(int)uVar4 * 0x48;
      if (*(uint *)(lVar15 + 8) <= uVar6) {
        uVar6 = 0;
      }
      lVar12 = *plVar8;
      if ((lVar12 != 0) &&
         (lVar13 = *(long *)(*(long *)(param_1 + 0x18) + (long)(int)uVar4 * 0x48), lVar13 != 0)) {
        puVar11 = *(uint **)(plVar8[2] + (long)(int)uVar5 * 0x20 + 0x10);
        uVar4 = *puVar11;
        if ((-1 < (int)uVar4) && ((int)uVar4 < *(int *)(lVar12 + 0x38))) {
          puVar14 = *(uint **)(*(long *)(lVar15 + 0x10) + (long)(int)uVar6 * 0x20 + 0x10);
          uVar5 = *puVar14;
          if ((((-1 < (int)uVar5) && ((int)uVar5 < *(int *)(lVar13 + 0x38))) &&
              (lVar15 = *(long *)(*(long *)(lVar12 + 0x30) + (ulong)uVar4 * 8), lVar15 != 0)) &&
             (lVar12 = *(long *)(*(long *)(lVar13 + 0x30) + (ulong)uVar5 * 8), lVar12 != 0)) {
            uVar4 = *(uint *)(lVar10 + (ulong)uVar3 * 0x28 + 0x14);
            if (((-1 < (int)uVar4) && ((int)uVar4 < (int)puVar11[8])) &&
               ((int)uVar4 < (int)puVar11[4])) {
              uVar3 = *(uint *)(lVar10 + (ulong)uVar3 * 0x28 + 8);
              if (((-1 < (int)uVar3) && ((int)uVar3 < (int)puVar14[8])) &&
                 ((int)uVar3 < (int)puVar14[4])) {
                uVar3 = *(uint *)(*(long *)(puVar14 + 2) + (ulong)uVar3 * 4);
                if ((-1 < (int)uVar3) && ((int)uVar3 < *(int *)(lVar12 + 0x20))) {
                  uVar4 = *(uint *)(*(long *)(puVar11 + 2) + (ulong)uVar4 * 4);
                  if ((-1 < (int)uVar4) && ((int)uVar4 < *(int *)(lVar15 + 0x20))) {
                    puVar1 = (undefined8 *)(*(long *)(lVar15 + 0x18) + (ulong)uVar4 * 0x40);
                    uVar16 = *puVar1;
                    puVar2 = (undefined8 *)(*(long *)(lVar12 + 0x18) + (ulong)uVar3 * 0x40);
                    puVar2[1] = puVar1[1];
                    *puVar2 = uVar16;
                    uVar16 = puVar1[2];
                    puVar2[3] = puVar1[3];
                    puVar2[2] = uVar16;
                    uVar16 = puVar1[4];
                    puVar2[5] = puVar1[5];
                    puVar2[4] = uVar16;
                    uVar16 = puVar1[6];
                    puVar2[7] = puVar1[7];
                    puVar2[6] = uVar16;
                  }
                }
              }
            }
          }
        }
      }
      uVar9 = uVar9 + 1;
    } while (uVar7 != uVar9);
  }
  return;
}


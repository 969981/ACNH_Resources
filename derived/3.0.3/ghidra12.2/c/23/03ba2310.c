
/* WARNING: Type propagation algorithm not settling */

void FUN_03ba2310(long *param_1)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  byte bVar9;
  long lVar10;
  uint *puVar11;
  uint uVar12;
  uint uVar13;
  uint *puVar14;
  long lVar15;
  
  if ((int)param_1[0x2f] == 0 && *(int *)((long)param_1 + 0x17c) == 0) {
    return;
  }
  if ((char)param_1[0x2b] == '\0') {
    if ((param_1[0xb] == 0) || (lVar10 = *(long *)(param_1[0xb] + 0x20), lVar10 == 0)) {
      lVar10 = param_1[0x26];
      plVar5 = (long *)param_1[0x27];
      lVar15 = param_1[0x23];
      lVar3 = param_1[0x24];
      puVar11 = (uint *)plVar5[8];
      plVar5[8] = param_1[0x25];
      lVar6 = param_1[0x1e];
      *plVar5 = param_1[0x1d];
      plVar5[1] = lVar6;
      lVar6 = param_1[0x1f];
      lVar7 = param_1[0x20];
      lVar4 = param_1[0x21];
      lVar8 = param_1[0x22];
      plVar5[6] = lVar15;
      plVar5[7] = lVar3;
      plVar5[8] = (long)puVar11;
      plVar5[9] = lVar10;
      plVar5[4] = lVar4;
      plVar5[5] = lVar8;
      plVar5[2] = lVar6;
      plVar5[3] = lVar7;
      if (puVar11 != (uint *)0x0) {
        puVar14 = (uint *)param_1[0x25];
        uVar12 = *puVar11;
        puVar11[4] = puVar14[4];
        if (0 < (int)uVar12) {
          uVar13 = 0;
          do {
            uVar1 = uVar13;
            if (*puVar14 <= uVar13) {
              uVar1 = 0;
            }
            uVar2 = uVar13;
            if (uVar12 <= uVar13) {
              uVar2 = 0;
            }
            uVar13 = uVar13 + 1;
            *(undefined4 *)(*(long *)(puVar11 + 2) + (ulong)uVar2 * 4) =
                 *(undefined4 *)(*(long *)(puVar14 + 2) + (ulong)uVar1 * 4);
            uVar12 = *puVar11;
          } while ((int)uVar13 < (int)uVar12);
        }
      }
    }
    else {
      FUN_03b42340(param_1[0x27],*(undefined8 *)(lVar10 + 0x138),param_1 + 0x1d);
    }
  }
  else {
    FUN_03b42340(param_1[0x27],param_1 + 0x13,param_1 + 0x1d);
    if ((param_1[0xb] != 0) && (lVar10 = *(long *)(param_1[0xb] + 0x20), lVar10 != 0)) {
      FUN_03b42170(param_1[0x27],*(undefined8 *)(lVar10 + 0x138));
    }
  }
  bVar9 = *(byte *)(param_1 + 0x30);
  if (bVar9 != 0) {
    if ((bVar9 & 1) != 0) {
      *(int *)(param_1[0x27] + 0x10) = (int)param_1[0x1f];
      bVar9 = *(byte *)(param_1 + 0x30);
    }
    if ((bVar9 >> 1 & 1) != 0) {
      *(undefined4 *)(param_1[0x27] + 0x14) = *(undefined4 *)((long)param_1 + 0xfc);
      bVar9 = *(byte *)(param_1 + 0x30);
    }
    if ((bVar9 >> 2 & 1) != 0) {
      *(int *)(param_1[0x27] + 0x18) = (int)param_1[0x20];
      bVar9 = *(byte *)(param_1 + 0x30);
    }
    if ((bVar9 >> 3 & 1) != 0) {
      *(undefined4 *)(param_1[0x27] + 0x1c) = *(undefined4 *)((long)param_1 + 0x104);
    }
    puVar11 = *(uint **)(param_1[0x27] + 0x40);
    if ((puVar11 != (uint *)0x0) && (uVar12 = *puVar11, 0 < (int)uVar12)) {
      puVar14 = (uint *)param_1[0x25];
      uVar13 = 0;
      do {
        if (uVar13 < 8) {
          uVar1 = uVar13;
          if (*puVar14 <= uVar13) {
            uVar1 = 0;
          }
          uVar2 = uVar13;
          if (uVar12 <= uVar13) {
            uVar2 = 0;
          }
          *(undefined4 *)(*(long *)(puVar11 + 2) + (ulong)uVar2 * 4) =
               *(undefined4 *)(*(long *)(puVar14 + 2) + (ulong)uVar1 * 4);
          uVar12 = *puVar11;
        }
        uVar13 = uVar13 + 1;
      } while ((int)uVar13 < (int)uVar12);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x03ba24d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xe0))(param_1);
  return;
}


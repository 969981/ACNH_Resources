
void FUN_008a8af0(long param_1,long param_2)

{
  undefined *puVar1;
  undefined4 *puVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  uint uVar6;
  uint uVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  
  uVar6 = *(uint *)(param_1 + 0x358);
  uVar3 = (ulong)uVar6;
  if (0 < (int)uVar6) {
    plVar5 = *(long **)(param_1 + 0x360);
    lVar4 = 0xffffffff;
    do {
      if (*plVar5 == param_2) {
        if (lVar4 != 0) goto LAB_008a8b74;
        break;
      }
      lVar4 = lVar4 + -1;
      uVar3 = uVar3 - 1;
      plVar5 = plVar5 + 1;
    } while (uVar3 != 0);
  }
  if ((int)uVar6 < *(int *)(param_1 + 0x35c)) {
    *(long *)(*(long *)(param_1 + 0x360) + (long)(int)uVar6 * 8) = param_2;
    *(int *)(param_1 + 0x358) = *(int *)(param_1 + 0x358) + 1;
  }
  *(long *)(param_2 + 0x20) = param_1;
  if (1 < *(int *)(param_1 + 0x358)) {
    lVar4 = *(long *)(param_1 + 0x360);
    uVar7 = 0;
    uVar6 = *(int *)(param_1 + 0x358) - 1;
    do {
      if ((int)uVar6 <= (int)uVar7) break;
      lVar8 = *(long *)(lVar4 + (ulong)uVar7 * 8);
      uVar3 = (ulong)uVar7;
      if ((uVar6 - uVar7 & 1) == 0) {
        lVar10 = lVar8;
        uVar9 = uVar3;
      }
      else {
        uVar9 = uVar3 + 1;
        lVar10 = *(long *)(lVar4 + uVar9 * 8);
        if (*(uint *)(lVar10 + 0x2c) < *(uint *)(lVar8 + 0x2c)) {
          *(long *)(lVar4 + uVar9 * 8) = lVar8;
          *(long *)(lVar4 + uVar3 * 8) = lVar10;
          lVar10 = lVar8;
        }
      }
      uVar11 = (ulong)uVar6;
      uVar6 = uVar7;
      if (~uVar3 + uVar11 != 0) {
        plVar5 = (long *)(lVar4 + 8 + uVar9 * 8);
        do {
          lVar8 = *plVar5;
          if (*(uint *)(lVar8 + 0x2c) < *(uint *)(lVar10 + 0x2c)) {
            plVar5[-1] = lVar8;
            *plVar5 = lVar10;
            uVar6 = (uint)uVar9;
          }
          else {
            lVar10 = lVar8;
          }
          lVar8 = plVar5[1];
          if (*(uint *)(lVar8 + 0x2c) < *(uint *)(lVar10 + 0x2c)) {
            uVar6 = (uint)uVar9 + 1;
            *plVar5 = lVar8;
            plVar5[1] = lVar10;
          }
          else {
            lVar10 = lVar8;
          }
          uVar9 = uVar9 + 2;
          plVar5 = plVar5 + 2;
        } while (uVar11 != uVar9);
      }
      if ((int)uVar6 <= (int)uVar7) break;
      lVar8 = *(long *)(lVar4 + (ulong)uVar6 * 8);
      uVar9 = (ulong)uVar6;
      uVar7 = uVar6;
      do {
        lVar10 = lVar4 + uVar9 * 8;
        lVar12 = *(long *)(lVar10 + -8);
        if (*(uint *)(lVar8 + 0x2c) < *(uint *)(lVar12 + 0x2c)) {
          uVar7 = (uint)uVar9;
          *(long *)(lVar10 + -8) = lVar8;
          *(long *)(lVar4 + uVar9 * 8) = lVar12;
        }
        else {
          lVar8 = lVar12;
        }
        uVar9 = uVar9 - 1;
      } while ((long)uVar3 < (long)uVar9);
    } while (uVar7 != uVar6);
  }
LAB_008a8b74:
  if ((*(int *)(DAT_04c93e08 + 0x5e8) == 1) && (*(int *)(param_1 + 0x358) != 0)) {
    plVar5 = *(long **)(param_1 + 0x360);
    lVar4 = (long)*(int *)(param_1 + 0x358) << 3;
    do {
      if ((char)((long *)*plVar5)[5] != '\0') {
        puVar2 = (undefined4 *)(**(code **)(*(long *)*plVar5 + 0x20))();
        uVar13 = *puVar2;
        *(undefined4 *)(param_1 + 0x2a8) = uVar13;
        uVar14 = puVar2[1];
        *(undefined4 *)(param_1 + 0x2ac) = uVar14;
        uVar15 = puVar2[2];
        *(undefined4 *)(param_1 + 0x2b0) = uVar15;
        puVar1 = PTR_DAT_04bb39d0;
        *(undefined4 *)PTR_DAT_04bb39d0 = uVar13;
        *(undefined4 *)(puVar1 + 4) = uVar14;
        *(undefined4 *)(puVar1 + 8) = uVar15;
        return;
      }
      plVar5 = plVar5 + 1;
      lVar4 = lVar4 + -8;
    } while (lVar4 != 0);
  }
  return;
}


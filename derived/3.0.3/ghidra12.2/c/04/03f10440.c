
float FUN_03f10440(long param_1,uint param_2,uint param_3)

{
  uint *puVar1;
  uint uVar2;
  ushort uVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  undefined4 *puVar7;
  long lVar8;
  float fVar9;
  float fVar10;
  
  plVar4 = *(long **)(param_1 + 0x18);
  if (plVar4 == (long *)0x0) {
    lVar8 = *(long *)(param_1 + 8);
    if (lVar8 == 0) {
      return -1.0;
    }
    if (*(int *)(param_1 + 0x10) != *(int *)(lVar8 + 0x10)) {
      return -1.0;
    }
    lVar5 = *(long *)(*(long *)(lVar8 + 0x120) + 8);
    lVar8 = *(long *)(lVar5 + 0x38);
    if ((DAT_05aebc00 == '\0') && (lVar8 == 0)) {
      return -1.0;
    }
    if (DAT_05aebc00 != '\0') {
      lVar8 = lVar5 + 0x70;
    }
    lVar8 = *(long *)(lVar8 + 8);
    if (lVar8 == 0) {
      return -1.0;
    }
    if (*(uint *)(lVar8 + 0x18) == 0) {
      return -1.0;
    }
    plVar4 = (long *)((ulong)*(uint *)(lVar8 + 0x18) + lVar8);
    if (*plVar4 != 0x101feff464e494d) {
      return -1.0;
    }
  }
  uVar2 = *(uint *)(plVar4 + 8);
  if (uVar2 != 0) {
    puVar1 = (uint *)((ulong)uVar2 + (long)(plVar4 + 8));
    uVar6 = (ulong)*puVar1;
    if (*puVar1 != 0) {
      lVar8 = -(long)puVar1;
      do {
        lVar8 = lVar8 + -8;
        if (puVar1[1] == param_2) {
          lVar8 = (ulong)puVar1[2] - lVar8;
          if (lVar8 != 0) {
            uVar3 = *(ushort *)(lVar8 + 4);
            if (uVar3 == param_3 || (int)(uint)uVar3 < (int)param_3) {
              return -1.0;
            }
            fVar9 = 0.0;
            if (uVar3 < param_3 || uVar3 == param_3) goto LAB_03f1057c;
            puVar7 = (undefined4 *)(lVar8 + (ulong)param_3 * 4 + 8);
            goto LAB_03f10574;
          }
          break;
        }
        uVar6 = uVar6 - 1;
        puVar1 = puVar1 + 2;
      } while (uVar6 != 0);
    }
  }
  uVar2 = *(uint *)((long)plVar4 + 0x44);
  if (uVar2 != 0) {
    puVar1 = (uint *)((ulong)uVar2 + (long)plVar4 + 0x44);
    uVar6 = (ulong)*puVar1;
    if (*puVar1 != 0) {
      lVar8 = -(long)puVar1;
      do {
        lVar8 = lVar8 + -8;
        if (puVar1[1] == param_2) {
          lVar8 = (ulong)puVar1[2] - lVar8;
          if (lVar8 == 0) {
            return -1.0;
          }
          if ((float)*(ushort *)(lVar8 + 8) <= (float)(int)param_3) {
            return -1.0;
          }
          fVar9 = 0.0;
          if (param_3 < *(ushort *)(lVar8 + 8)) {
            puVar7 = (undefined4 *)(lVar8 + (ulong)param_3 * 8 + 0xc);
LAB_03f10574:
            fVar9 = (float)NEON_ucvtf(*puVar7);
          }
LAB_03f1057c:
          fVar10 = (float)NEON_ucvtf(*(undefined4 *)((long)plVar4 + 0x14));
          return fVar9 / fVar10;
        }
        uVar6 = uVar6 - 1;
        puVar1 = puVar1 + 2;
      } while (uVar6 != 0);
    }
  }
  return -1.0;
}



bool FUN_03f11150(long param_1,undefined8 *param_2,uint param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  char cVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  float fVar13;
  
  if (param_2 == (undefined8 *)0x0) {
    return false;
  }
  if (((param_3 != 0) && (lVar9 = *(long *)(param_1 + 0x88), lVar9 != 0)) &&
     (uVar3 = *(uint *)(param_1 + 0x94), uVar3 != 0)) {
    uVar5 = 0;
    if (uVar3 != 0) {
      uVar5 = param_3 / uVar3;
    }
    uVar5 = param_3 - uVar5 * uVar3;
    uVar6 = uVar5;
    do {
      uVar4 = *(uint *)(lVar9 + (-(ulong)(uVar6 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar6 << 3));
      if (uVar4 == param_3) {
        uVar3 = *(uint *)(lVar9 + (long)(int)uVar6 * 8 + 4);
        if (*(uint *)(param_1 + 0x58) <= uVar3) {
          return false;
        }
        lVar9 = *(long *)(*(long *)(param_1 + 0x60) + (long)(int)uVar3 * 8);
        if (lVar9 == 0) {
          return false;
        }
        if (*(long *)(lVar9 + 0x30) == 0) {
          return false;
        }
        puVar8 = (undefined8 *)FUN_03f1e960();
        uVar2 = puVar8[1];
        uVar1 = puVar8[2];
        lVar10 = puVar8[3];
        *param_2 = *puVar8;
        param_2[1] = uVar2;
        param_2[2] = uVar1;
        param_2[3] = lVar10;
        cVar7 = DAT_05aebc00;
        if (lVar10 != 0) {
          fVar13 = *(float *)(param_1 + 600);
          if (0.0 <= *(float *)(lVar9 + 0xb4)) {
            fVar13 = *(float *)(lVar9 + 0xb4);
          }
          *(int *)((long)param_2 + 4) = (int)fVar13;
          return true;
        }
        lVar10 = param_2[1];
        if (lVar10 == 0) {
          return false;
        }
        if (*(int *)(param_2 + 2) != *(int *)(lVar10 + 0x10)) {
          return false;
        }
        lVar11 = *(long *)(*(long *)(lVar10 + 0x120) + 8);
        lVar12 = *(long *)(lVar11 + 0x38);
        if ((DAT_05aebc00 == '\0') && (lVar12 == 0)) {
          return false;
        }
        if (DAT_05aebc00 != '\0') {
          lVar12 = lVar11 + 0x70;
        }
        lVar12 = *(long *)(lVar12 + 8);
        if (lVar12 == 0) {
          return false;
        }
        if (*(uint *)(lVar12 + 0x18) == 0) {
          return false;
        }
        if (*(long *)((ulong)*(uint *)(lVar12 + 0x18) + lVar12) != 0x101feff464e494d) {
          return false;
        }
        fVar13 = *(float *)(param_1 + 600);
        if (0.0 <= *(float *)(lVar9 + 0xb4)) {
          fVar13 = *(float *)(lVar9 + 0xb4);
        }
        *(int *)((long)param_2 + 4) = (int)fVar13;
        if (*(int *)(param_2 + 2) != *(int *)(lVar10 + 0x10)) {
          return false;
        }
        lVar10 = *(long *)(*(long *)(lVar10 + 0x120) + 8);
        lVar9 = *(long *)(lVar10 + 0x38);
        if ((cVar7 == '\0') && (lVar9 == 0)) {
          return false;
        }
        if (cVar7 != '\0') {
          lVar9 = lVar10 + 0x70;
        }
        lVar9 = *(long *)(lVar9 + 8);
        if (lVar9 == 0) {
          return false;
        }
        if (*(uint *)(lVar9 + 0x18) == 0) {
          return false;
        }
        return *(long *)((ulong)*(uint *)(lVar9 + 0x18) + lVar9) == 0x101feff464e494d;
      }
      if (uVar4 == 0) {
        return false;
      }
      uVar4 = 0;
      if ((int)(uVar6 + 1) < (int)uVar3) {
        uVar4 = uVar6 + 1;
      }
      uVar6 = uVar4;
    } while (uVar4 != uVar5);
  }
  return false;
}


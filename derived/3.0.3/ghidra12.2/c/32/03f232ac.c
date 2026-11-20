
float FUN_03f232ac(long *param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  float __x;
  float fVar7;
  float fVar8;
  float fVar9;
  
  if ((char)param_1[6] == '\0') {
    lVar4 = param_1[1];
    if (*(char *)(lVar4 + 0x15) == '\0') {
      lVar4 = *(long *)(lVar4 + 0x18);
    }
    else {
      lVar4 = (long)(DAT_05ae7888 *
                     (*(long *)(DAT_05aebb88 + 8) + (ulong)*(uint *)(DAT_05aebb88 + 4)) * 5) / 1000
              + *(long *)(lVar4 + 0x18);
    }
    lVar4 = (lVar4 - *param_1) - param_1[9];
  }
  else {
    lVar4 = param_1[7] - *param_1;
  }
  lVar6 = param_1[2];
  lVar2 = param_1[3];
  if (lVar2 + lVar6 <= lVar4) {
LAB_03f233f0:
    return *(float *)((long)param_1 + 0x24);
  }
  lVar3 = lVar4 - lVar6;
  if (lVar4 < lVar6) {
    return *(float *)(param_1 + 4);
  }
  if ((char)param_1[5] != '\0') {
    return 1.0;
  }
  if (lVar2 == 0) goto LAB_03f233f0;
  lVar4 = 1000000;
  if (lVar3 + 0x8637bd05af6U < 0x10c6f7a0b5ec) {
    lVar5 = *(long *)PTR_DAT_04bb29d0;
    lVar6 = 0;
    if (lVar5 != 0) {
      lVar6 = (lVar3 * 1000000) / lVar5;
    }
  }
  else if (lVar3 + 0x20c49ba5e353f7U < 0x4189374bc6a7ee) {
    lVar5 = *(long *)PTR_DAT_04bb29d0;
    lVar6 = 0;
    if (lVar5 != 0) {
      lVar6 = (lVar3 * 1000) / lVar5;
    }
    lVar6 = lVar6 * 1000;
  }
  else {
    lVar6 = 0;
    if (DAT_05ae7888 != 0) {
      lVar6 = lVar3 / DAT_05ae7888;
    }
    lVar6 = lVar6 * 1000000;
    lVar5 = DAT_05ae7888;
  }
  if (lVar2 + 0x8637bd05af6U < 0x10c6f7a0b5ec) {
    lVar3 = 0;
    if (lVar5 != 0) {
      lVar3 = (lVar2 * 1000000) / lVar5;
    }
  }
  else {
    if (lVar2 + 0x20c49ba5e353f7U < 0x4189374bc6a7ee) {
      lVar4 = 1000;
      lVar2 = lVar2 * 1000;
    }
    lVar3 = 0;
    if (lVar5 != 0) {
      lVar3 = lVar2 / lVar5;
    }
    lVar3 = lVar3 * lVar4;
  }
  __x = (float)lVar6 / (float)lVar3;
  fVar9 = *(float *)(param_1 + 4);
  fVar8 = *(float *)((long)param_1 + 0x24);
  iVar1 = *(int *)((long)param_1 + 0x2c);
  if (iVar1 == 3) {
    fVar7 = sinf(__x * 1.5707964);
  }
  else {
    if (iVar1 != 2) {
      fVar7 = __x;
      if (iVar1 == 1) {
        fVar7 = __x * __x;
      }
      goto LAB_03f234e4;
    }
    fVar7 = SQRT(__x);
    if (!NAN(SQRT(__x))) goto LAB_03f234e4;
    fVar7 = sqrtf(__x);
  }
LAB_03f234e4:
  return *(float *)(param_1 + 4) + fVar7 * (fVar8 - fVar9);
}


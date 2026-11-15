
/* WARNING: Removing unreachable block (ram,0x01f07220) */

void FUN_01f071a0(undefined8 *param_1)

{
  float *pfVar1;
  float *pfVar2;
  ulong uVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  float *pfVar7;
  long lVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  uint local_634;
  float local_630;
  float local_62c;
  float local_628 [382];
  
  FUN_01e9dbb0();
  *param_1 = &PTR_LAB_04a62cd8;
  param_1[0x15ea] = &LAB_01f073b8;
  *(undefined8 *)((long)param_1 + 0xaf34) = 0xffffffff;
  local_630 = 4.2039e-45;
  param_1[0x15ed] = &PTR_LAB_04a630b0;
  param_1[0x15eb] = 0;
  param_1[0x15ec] = 0;
  param_1[0x15e8] = &PTR_LAB_04a63060;
  param_1[0x15e9] = param_1;
  param_1[0x158e] = param_1 + 0x15e8;
  param_1[0x15f0] = 0;
  param_1[0x15ee] = param_1;
  param_1[0x15ef] = &LAB_01eeef10;
  if (*(int *)(param_1 + 0x1599) < *(int *)((long)param_1 + 0xaccc)) {
    *(undefined8 **)(param_1[0x159a] + (long)*(int *)(param_1 + 0x1599) * 8) = param_1 + 0x15ed;
    *(int *)(param_1 + 0x1599) = *(int *)(param_1 + 0x1599) + 1;
  }
  lVar8 = param_1[1];
  if (*(int *)(lVar8 + 0x178) == 0) {
    uVar3 = FUN_0291e130(&local_630,&local_634,0);
    if (((uVar3 & 1) == 0) || (local_634 == 0)) {
      uVar5 = 0xffffffff;
    }
    else {
      fVar9 = 999999.9;
      uVar3 = 0;
      pfVar7 = &local_630;
      uVar4 = 0xffffffff;
      do {
        pfVar1 = pfVar7;
        if (0x7f < uVar3) {
          pfVar1 = &local_630;
        }
        uVar5 = (uint)uVar3;
        if (*pfVar1 == *(float *)(lVar8 + 0x6a8)) {
          pfVar2 = pfVar7 + 1;
          if (0x7f < uVar3) {
            pfVar2 = &local_62c;
          }
          if (*pfVar2 == *(float *)(lVar8 + 0x6ac)) {
            pfVar2 = pfVar7 + 2;
            if (0x7f < uVar3) {
              pfVar2 = local_628;
            }
            if (*pfVar2 == *(float *)(lVar8 + 0x6b0)) break;
          }
        }
        fVar10 = *pfVar1 - *(float *)(lVar8 + 0x6a8);
        pfVar1 = pfVar7 + 2;
        if (0x7f < uVar3) {
          pfVar1 = local_628;
        }
        pfVar7 = pfVar7 + 3;
        fVar11 = *pfVar1 - *(float *)(lVar8 + 0x6b0);
        fVar10 = SQRT(fVar11 * fVar11 + fVar10 * fVar10);
        if (fVar9 <= fVar10) {
          uVar5 = uVar4;
          fVar10 = fVar9;
        }
        fVar9 = fVar10;
        uVar3 = uVar3 + 1;
        uVar4 = uVar5;
      } while (local_634 != uVar3);
    }
    *(uint *)((long)param_1 + 0xaf34) = uVar5;
  }
  else {
    uVar5 = *(uint *)((long)param_1 + 0xaf34);
  }
  if (uVar5 < 0x10) {
    uVar6 = *(undefined4 *)(DAT_053e4ff0 + (ulong)uVar5 * 4 + 0x21c);
  }
  else {
    uVar6 = 1;
  }
  *(undefined4 *)(param_1 + 0x15e7) = uVar6;
  param_1[0xfe9] = &LAB_01f073c0;
  param_1[0xfe8] = param_1;
  param_1[0xfea] = 0;
  param_1[0xfe7] = &PTR_LAB_04a63100;
  return;
}


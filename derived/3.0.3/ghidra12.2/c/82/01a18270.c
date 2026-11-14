
float FUN_01a18270(float *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint *puVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  fVar6 = param_1[1];
  if (fVar6 == 0.0) {
    return 0.0;
  }
  fVar8 = 0.0;
  if ((param_2 & 1) == 0) {
    fVar8 = param_1[3];
  }
  if (((DAT_052d3250 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_052d3250), iVar3 != 0)) {
    DAT_052d324c = 0.015625;
    __cxa_guard_release(&DAT_052d3250);
  }
  fVar5 = param_1[2];
  if (fVar5 != fVar8) {
    fVar9 = fVar8 - fVar5;
    fVar7 = -fVar9;
    if (0.0 <= fVar9) {
      fVar7 = fVar9;
    }
    if (fVar7 <= DAT_052d324c) {
      param_1[2] = fVar8;
    }
    else {
      fVar7 = DAT_052d324c;
      if (fVar9 <= 0.0) {
        fVar7 = -fVar6;
        fVar6 = -DAT_052d324c;
      }
      fVar9 = fVar9 * 0.3;
      if (fVar9 <= fVar6) {
        fVar6 = fVar9;
      }
      if (fVar7 <= fVar9) {
        fVar7 = fVar6;
      }
      fVar5 = fVar5 + fVar7;
      param_1[2] = fVar5;
      if (fVar5 != fVar8) {
        fVar6 = param_1[3];
        goto LAB_01a18394;
      }
    }
  }
  fVar6 = *param_1;
  puVar4 = (uint *)nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb39d8);
  uVar2 = puVar4[3];
  uVar1 = *puVar4 ^ *puVar4 << 0xb;
  *puVar4 = puVar4[1];
  puVar4[1] = puVar4[2];
  uVar1 = uVar1 >> 8 ^ uVar2 >> 0x13 ^ uVar1 ^ uVar2;
  puVar4[2] = uVar2;
  puVar4[3] = uVar1;
  fVar6 = (fVar6 + fVar6) * ((float)(uVar1 >> 9 | 0x3f800000) + -1.0) - fVar6;
  fVar5 = param_1[2];
LAB_01a18394:
  param_1[3] = fVar6;
  return fVar5;
}


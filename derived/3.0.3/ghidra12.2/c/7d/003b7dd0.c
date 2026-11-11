
float FUN_003b7dd0(uint param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  float fVar8;
  
  if ((int)param_1 < 0) {
    uVar3 = param_1;
    if ((int)param_1 < -0xbff) {
      uVar3 = 0xfffff400;
    }
    uVar5 = param_1;
    if (param_1 < 0xfffff400) {
      uVar5 = param_1 + 1;
    }
    uVar3 = (uVar3 - uVar5) / 0xc00;
    if (param_1 < 0xfffff400) {
      uVar3 = uVar3 + 1;
    }
    uVar5 = ~uVar3;
    param_1 = param_1 + uVar3 * 0xc00 + 0xc00;
    if (0xbff < (int)param_1) goto LAB_003b7de0;
LAB_003b7e8c:
    uVar4 = param_1 >> 8;
    uVar3 = param_1 & 0xff;
    uVar2 = param_1;
  }
  else {
    uVar5 = 0;
    if ((int)param_1 < 0xc00) goto LAB_003b7e8c;
LAB_003b7de0:
    uVar3 = param_1;
    if (0x17fe < (int)param_1) {
      uVar3 = 0x17ff;
    }
    uVar3 = ((param_1 - uVar3) + 0xbff) / 0xc00;
    iVar1 = uVar5 + uVar3;
    uVar2 = (param_1 + uVar3 * -0xc00) - 0xc00;
    uVar3 = param_1 & 0xff;
    uVar4 = uVar2 >> 8;
    if (-1 < iVar1) {
      fVar8 = 1.0;
      uVar5 = iVar1 + 2;
      do {
        fVar8 = fVar8 + fVar8;
        uVar5 = uVar5 - 1;
      } while (1 < uVar5);
      goto LAB_003b7f08;
    }
    uVar5 = iVar1 + 1;
  }
  if ((int)uVar5 < 0) {
    fVar8 = 1.0;
    uVar7 = -uVar5 & 3;
    uVar6 = uVar5;
    if (uVar7 != 0) {
      do {
        fVar8 = fVar8 * 0.5;
        uVar6 = uVar6 + 1;
        uVar7 = uVar7 - 1;
      } while (uVar7 != 0);
    }
    if (uVar5 < 0xfffffffd) {
      do {
        uVar6 = uVar6 + 4;
        fVar8 = fVar8 * 0.5 * 0.5 * 0.5 * 0.5;
      } while (uVar6 != 0);
    }
  }
  else {
    fVar8 = 1.0;
  }
LAB_003b7f08:
  if (0xff < uVar2) {
    fVar8 = fVar8 * *(float *)(&DAT_041356d0 + (ulong)uVar4 * 4);
  }
  if (uVar3 != 0) {
    fVar8 = fVar8 * *(float *)(&DAT_04135700 + (ulong)uVar3 * 4);
  }
  return fVar8;
}


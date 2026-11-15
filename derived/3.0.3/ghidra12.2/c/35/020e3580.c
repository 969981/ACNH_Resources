
ulong FUN_020e3580(float *param_1,float *param_2)

{
  float *pfVar1;
  float *pfVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  float *pfVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float local_630;
  float local_62c;
  float local_628 [382];
  uint local_14;
  
  pfVar6 = &local_630;
  uVar4 = FUN_0291e130(&local_630,&local_14,0);
  if ((uVar4 & 1) == 0) {
    uVar4 = 0xffffffff;
  }
  else {
    if (local_14 == 0) {
      fVar7 = 999999.9;
      uVar4 = 0xffffffff;
    }
    else {
      fVar7 = 999999.9;
      uVar5 = 0;
      uVar4 = 0xffffffff;
      do {
        pfVar1 = pfVar6;
        if (0x7f < uVar5) {
          pfVar1 = &local_630;
        }
        uVar3 = (uint)uVar5;
        if (*pfVar1 == *param_1) {
          pfVar2 = pfVar6 + 1;
          if (0x7f < uVar5) {
            pfVar2 = &local_62c;
          }
          if (*pfVar2 == param_1[1]) {
            pfVar2 = pfVar6 + 2;
            if (0x7f < uVar5) {
              pfVar2 = local_628;
            }
            if (*pfVar2 == param_1[2]) {
              uVar4 = uVar5 & 0xffffffff;
              break;
            }
          }
        }
        fVar8 = *pfVar1 - *param_1;
        pfVar1 = pfVar6 + 2;
        if (0x7f < uVar5) {
          pfVar1 = local_628;
        }
        pfVar6 = pfVar6 + 3;
        fVar9 = *pfVar1 - param_1[2];
        fVar8 = SQRT(fVar9 * fVar9 + fVar8 * fVar8);
        if (fVar7 <= fVar8) {
          uVar3 = (uint)uVar4;
          fVar8 = fVar7;
        }
        fVar7 = fVar8;
        uVar4 = (ulong)uVar3;
        uVar5 = uVar5 + 1;
      } while (local_14 != uVar5);
    }
    if (param_2 != (float *)0x0) {
      *param_2 = fVar7;
    }
  }
  return uVar4;
}


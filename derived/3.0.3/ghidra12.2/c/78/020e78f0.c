
undefined4 FUN_020e78f0(undefined8 param_1,undefined8 param_2)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  ulong uVar4;
  uint uVar5;
  uint uVar6;
  float *pfVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  uint local_624;
  float local_620;
  float local_61c;
  float local_618 [382];
  
  pfVar3 = (float *)FUN_0251b3b0(param_2,0);
  if (((pfVar3 != (float *)0x0) && (uVar4 = FUN_0291e130(&local_620,&local_624,0), (uVar4 & 1) != 0)
      ) && (local_624 != 0)) {
    fVar8 = 999999.9;
    uVar4 = 0;
    pfVar7 = &local_620;
    uVar5 = 0xffffffff;
    do {
      pfVar1 = pfVar7;
      if (0x7f < uVar4) {
        pfVar1 = &local_620;
      }
      uVar6 = (uint)uVar4;
      if (*pfVar1 == *pfVar3) {
        pfVar2 = pfVar7 + 1;
        if (0x7f < uVar4) {
          pfVar2 = &local_61c;
        }
        if (*pfVar2 == pfVar3[1]) {
          pfVar2 = pfVar7 + 2;
          if (0x7f < uVar4) {
            pfVar2 = local_618;
          }
          if (*pfVar2 == pfVar3[2]) break;
        }
      }
      fVar9 = *pfVar1 - *pfVar3;
      pfVar1 = pfVar7 + 2;
      if (0x7f < uVar4) {
        pfVar1 = local_618;
      }
      pfVar7 = pfVar7 + 3;
      fVar10 = *pfVar1 - pfVar3[2];
      fVar9 = SQRT(fVar10 * fVar10 + fVar9 * fVar9);
      if (fVar8 <= fVar9) {
        uVar6 = uVar5;
        fVar9 = fVar8;
      }
      fVar8 = fVar9;
      uVar4 = uVar4 + 1;
      uVar5 = uVar6;
    } while (local_624 != uVar4);
    if (fVar8 <= 10.0 && uVar6 < 0x10) {
      return *(undefined4 *)(&DAT_041797e8 + (long)(int)uVar6 * 4);
    }
  }
  return 5;
}


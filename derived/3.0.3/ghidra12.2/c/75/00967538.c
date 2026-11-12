
bool FUN_00967538(long param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  float *pfVar6;
  long lVar7;
  float fVar8;
  
  uVar1 = *(uint *)(param_2 + 8);
  if ((((-1 < (int)uVar1) && (uVar2 = *(uint *)(param_2 + 0xc), -1 < (int)uVar2)) &&
      (uVar1 < *(uint *)(param_1 + 0x38))) && (uVar2 < *(uint *)(param_1 + 0x3c))) {
    uVar1 = uVar1 + *(uint *)(param_1 + 0x38) * uVar2;
    if ((*(long *)(param_1 + 0x60) == 0) || (*(uint *)(param_1 + 0x58) <= uVar1)) {
      cVar5 = '\a';
    }
    else {
      cVar5 = *(char *)(*(long *)(param_1 + 0x60) + (long)(int)uVar1 * 0x34 + 0x30);
    }
    if (cVar5 == '\a') {
      if (*(uint *)(param_1 + 0x48) <= uVar1) {
        return false;
      }
      lVar7 = *(long *)(param_1 + 0x50);
      if (lVar7 == 0) {
        return false;
      }
      if (*(char *)(lVar7 + (long)(int)uVar1 * 0x34 + 0x30) == '\x05') {
        pfVar6 = (float *)(lVar7 + (long)(int)uVar1 * 0x34);
        fVar8 = *pfVar6 - pfVar6[1];
        bVar3 = false;
        bVar4 = true;
        if (-3.8146973e-06 <= fVar8) {
          bVar3 = false;
          bVar4 = true;
          if (!NAN(fVar8)) {
            bVar3 = fVar8 == 3.8146973e-06;
            bVar4 = 3.8146973e-06 <= fVar8;
          }
        }
        if (!bVar4 || bVar3) {
          fVar8 = pfVar6[1] - pfVar6[2];
          bVar3 = false;
          bVar4 = true;
          if (-3.8146973e-06 <= fVar8) {
            bVar3 = false;
            bVar4 = true;
            if (!NAN(fVar8)) {
              bVar3 = fVar8 == 3.8146973e-06;
              bVar4 = 3.8146973e-06 <= fVar8;
            }
          }
          if (!bVar4 || bVar3) {
            fVar8 = pfVar6[2] - *pfVar6;
            return fVar8 <= 3.8146973e-06 && -3.8146973e-06 <= fVar8;
          }
        }
      }
    }
  }
  return false;
}


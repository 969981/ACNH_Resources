
bool FUN_00966f60(long param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  bool bVar4;
  float *pfVar5;
  char cVar6;
  long lVar7;
  float fVar8;
  
  uVar1 = *(uint *)(param_2 + 8);
  if (((((-1 < (int)uVar1) && (uVar2 = *(uint *)(param_2 + 0xc), -1 < (int)uVar2)) &&
       (uVar1 < *(uint *)(param_1 + 0x38))) && (uVar2 < *(uint *)(param_1 + 0x3c))) &&
     (((uVar1 = uVar1 + *(uint *)(param_1 + 0x38) * uVar2, *(uint *)(param_1 + 0x68) <= uVar1 ||
       (*(long *)(param_1 + 0x70) == 0)) ||
      ((*(uint *)(*(long *)(param_1 + 0x70) + (long)(int)uVar1 * 4) & 1) == 0)))) {
    cVar6 = '\a';
    if ((*(long *)(param_1 + 0x60) != 0) && (uVar1 < *(uint *)(param_1 + 0x58))) {
      cVar6 = *(char *)(*(long *)(param_1 + 0x60) + (long)(int)uVar1 * 0x34 + 0x30);
    }
    if (cVar6 == '\a') {
      if (*(uint *)(param_1 + 0x48) <= uVar1) {
        return false;
      }
      lVar7 = *(long *)(param_1 + 0x50);
      if (lVar7 == 0) {
        return false;
      }
      if (*(char *)(lVar7 + (long)(int)uVar1 * 0x34 + 0x30) == '\x05') {
        pfVar5 = (float *)(lVar7 + (long)(int)uVar1 * 0x34);
        fVar8 = *pfVar5 - pfVar5[1];
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
        if (bVar4 && !bVar3) {
          return true;
        }
        fVar8 = pfVar5[1] - pfVar5[2];
        if (fVar8 < -3.8146973e-06) {
          return true;
        }
        if (fVar8 <= 3.8146973e-06) {
          fVar8 = pfVar5[2] - *pfVar5;
          return 3.8146973e-06 < fVar8 || fVar8 < -3.8146973e-06;
        }
        return true;
      }
    }
  }
  return false;
}



bool FUN_009678e0(long param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  long lVar6;
  long lVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  uVar1 = *(uint *)(param_2 + 8);
  if ((((-1 < (int)uVar1) && (uVar2 = *(uint *)(param_2 + 0xc), -1 < (int)uVar2)) &&
      (uVar1 < *(uint *)(param_1 + 0x38))) && (uVar2 < *(uint *)(param_1 + 0x3c))) {
    uVar1 = uVar1 + *(uint *)(param_1 + 0x38) * uVar2;
    if ((*(long *)(param_1 + 0x60) == 0) || (*(uint *)(param_1 + 0x58) <= uVar1)) {
      cVar5 = '\a';
    }
    else {
      cVar5 = *(char *)(*(long *)(param_1 + 0x60) + (long)(int)uVar1 * 0x34 + 0x33);
    }
    if (cVar5 == '\a') {
      if (*(uint *)(param_1 + 0x48) <= uVar1) {
        return false;
      }
      lVar7 = *(long *)(param_1 + 0x50);
      if (lVar7 == 0) {
        return false;
      }
      if (*(char *)(lVar7 + (long)(int)uVar1 * 0x34 + 0x33) == '\x05') {
        lVar6 = lVar7 + (long)(int)uVar1 * 0x34;
        fVar8 = *(float *)(lVar6 + 0x24);
        fVar9 = *(float *)(lVar6 + 0x28);
        fVar10 = fVar8 - fVar9;
        bVar3 = false;
        bVar4 = true;
        if (-3.8146973e-06 <= fVar10) {
          bVar3 = false;
          bVar4 = true;
          if (!NAN(fVar10)) {
            bVar3 = fVar10 == 3.8146973e-06;
            bVar4 = 3.8146973e-06 <= fVar10;
          }
        }
        if (!bVar4 || bVar3) {
          fVar10 = *(float *)(lVar7 + (long)(int)uVar1 * 0x34 + 0x2c);
          fVar9 = fVar9 - fVar10;
          bVar3 = false;
          bVar4 = true;
          if (-3.8146973e-06 <= fVar9) {
            bVar3 = false;
            bVar4 = true;
            if (!NAN(fVar9)) {
              bVar3 = fVar9 == 3.8146973e-06;
              bVar4 = 3.8146973e-06 <= fVar9;
            }
          }
          if (!bVar4 || bVar3) {
            fVar10 = fVar10 - fVar8;
            return fVar10 <= 3.8146973e-06 && -3.8146973e-06 <= fVar10;
          }
        }
      }
    }
  }
  return false;
}


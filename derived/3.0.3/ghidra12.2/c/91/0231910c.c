
undefined4 FUN_0231910c(long param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  float *pfVar3;
  long lVar4;
  uint uVar5;
  float fVar6;
  
  uVar2 = *(undefined4 *)(param_1 + 0x1bf8);
  if (*(int *)(param_1 + 0x2244) == 0) {
    lVar4 = *(long *)(param_1 + 0x70);
  }
  else {
    lVar4 = *(long *)(param_1 + 0x70);
    if (lVar4 == 0) {
      uVar5 = 0;
    }
    else {
      uVar5 = 0;
      if (*(uint *)(lVar4 + 0x280) < 0x149) {
        uVar5 = *(uint *)(lVar4 + 0x280);
      }
    }
    if (uVar5 == 5) {
      return 3;
    }
  }
  if (lVar4 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = 0;
    if (*(uint *)(lVar4 + 0x280) < 0x149) {
      uVar5 = *(uint *)(lVar4 + 0x280);
    }
    if (((uVar5 == 0x19) || (uVar5 == 0x2a)) || (uVar5 == 0x2b)) {
      uVar1 = 0;
      if ((*(uint *)(param_1 + 0x1810) & 0xfffffff7) != 1) {
        uVar1 = uVar2;
      }
      return uVar1;
    }
  }
  if (uVar5 == 0xf4) {
    if ((*(byte *)(param_1 + 0x17d5) >> 4 & 1) != 0) {
      return 1;
    }
    *(undefined4 *)(param_1 + 0x1bf4) = 0x3ecccccd;
    lVar4 = FUN_0251e98c(1);
    pfVar3 = (float *)(**(code **)(*(long *)(lVar4 + 0x2a0) + 0xf0))(lVar4 + 0x2a0);
    fVar6 = *pfVar3;
    *(undefined4 *)(param_1 + 0x1bf4) = 0x3f800000;
    *(uint *)(param_1 + 0x17cc) = *(uint *)(param_1 + 0x17cc) | 0x400;
    *(float *)(param_1 + 0x1bf0) = fVar6 * 0.4;
  }
  else {
    if ((*(uint *)(param_1 + 0x1810) & 0xfffffffe) != 2) {
      return uVar2;
    }
    if (lVar4 == 0) {
      uVar5 = 0;
    }
    else {
      uVar5 = 0;
      if (*(uint *)(lVar4 + 0x280) < 0x149) {
        uVar5 = *(uint *)(lVar4 + 0x280);
      }
      if (uVar5 == 0x47) {
        return 5;
      }
    }
    if (uVar5 != 0x48) {
      return uVar2;
    }
  }
  return 5;
}


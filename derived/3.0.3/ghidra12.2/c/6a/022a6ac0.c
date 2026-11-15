
undefined8 FUN_022a6ac0(undefined1 param_1 [16],float param_2,undefined8 param_3,int param_4)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  long lVar6;
  uint uVar7;
  float fVar8;
  
  lVar6 = FUN_0251b3b0(param_3,0);
  if (lVar6 == 0) {
    return 0;
  }
  fVar8 = *(float *)(lVar6 + 4);
  lVar6 = FUN_0251bdc4(param_3,0);
  if (lVar6 == 0) {
    return 0;
  }
  uVar2 = *(uint *)(lVar6 + 4);
  param_2 = param_2 - fVar8;
  uVar7 = (uint)(long)((float)param_4 * 45.0 * 11930465.0);
  if (uVar2 != uVar7) {
    uVar1 = uVar7 - uVar2;
    if (uVar7 <= uVar2) {
      uVar1 = uVar2 - uVar7;
    }
    uVar2 = -uVar1;
    if (uVar1 < 0x80000001) {
      uVar2 = uVar1;
    }
    if (60.0 <= (float)uVar2 * 8.381903e-08) {
      bVar3 = false;
      bVar4 = true;
      bVar5 = false;
      if (param_2 < 2.0) {
        bVar3 = false;
        bVar4 = false;
        bVar5 = true;
        if (!NAN(param_2)) {
          bVar3 = param_2 < -2.0;
          bVar4 = param_2 == -2.0;
          bVar5 = false;
        }
      }
      if (bVar4 || bVar3 != bVar5) {
        return 0;
      }
      return 1;
    }
  }
  bVar3 = false;
  bVar4 = true;
  bVar5 = false;
  if (param_2 < -13.0) {
    bVar3 = false;
    bVar4 = false;
    bVar5 = true;
    if (!NAN(param_2)) {
      bVar3 = param_2 < -17.0;
      bVar4 = param_2 == -17.0;
      bVar5 = false;
    }
  }
  if (bVar4 || bVar3 != bVar5) {
    return 0;
  }
  return 1;
}


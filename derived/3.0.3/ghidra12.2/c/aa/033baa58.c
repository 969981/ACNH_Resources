
undefined8 FUN_033baa58(long param_1,float *param_2)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  ulong uVar6;
  undefined8 uVar7;
  uint uVar8;
  float fVar9;
  undefined4 uVar10;
  float __x;
  float local_18;
  float fStack_14;
  
  uVar6 = FUN_033bab78();
  if ((uVar6 & 1) != 0) {
    __x = *param_2;
    fVar9 = param_2[1];
    bVar2 = false;
    bVar3 = true;
    if (-1.1920929e-07 <= __x) {
      bVar2 = false;
      bVar3 = true;
      if (!NAN(__x)) {
        bVar2 = __x == 1.1920929e-07;
        bVar3 = 1.1920929e-07 <= __x;
      }
    }
    bVar1 = true;
    bVar4 = false;
    if (!bVar3 || bVar2) {
      bVar1 = false;
      bVar4 = true;
      if (!NAN(fVar9)) {
        bVar1 = fVar9 < -1.1920929e-07;
        bVar4 = false;
      }
    }
    bVar2 = false;
    bVar3 = true;
    if (bVar1 == bVar4) {
      bVar2 = false;
      bVar3 = true;
      if (!NAN(fVar9)) {
        bVar2 = fVar9 == 1.1920929e-07;
        bVar3 = 1.1920929e-07 <= fVar9;
      }
    }
    if (bVar3 && !bVar2) {
      fStack_14 = atan2f(fVar9,__x);
      fVar9 = fStack_14 * 0.15915494;
      uVar8 = 0;
      if (fVar9 != (float)(int)fVar9) {
        uVar8 = (uint)(fVar9 < 0.0);
      }
      fStack_14 = fStack_14 + (float)(int)((int)fVar9 - uVar8) * -6.2831855;
      bVar2 = false;
      bVar3 = false;
      if (fStack_14 < 6.2831855) {
        bVar2 = false;
        bVar3 = true;
        if (!NAN(fStack_14)) {
          bVar2 = fStack_14 == 0.0;
          bVar3 = 0.0 <= fStack_14;
        }
      }
      if (!bVar3 || bVar2) {
        fStack_14 = 0.0;
      }
      local_18 = SQRT(param_2[1] * param_2[1] + *param_2 * *param_2);
      iVar5 = FUN_03858470(param_1 + 0xb8,&fStack_14,&local_18);
      if (iVar5 == 2) {
        uVar10 = 0x41200000;
      }
      else {
        if (iVar5 != 3) {
          return 0;
        }
        uVar10 = 0xc1200000;
      }
      uVar7 = FUN_033bae00(uVar10,param_1);
      return uVar7;
    }
    *(undefined4 *)(param_1 + 0xe8) = 0xffffffff;
  }
  return 0;
}


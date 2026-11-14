
void FUN_014f5970(long param_1,float *param_2,undefined8 param_3,int param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  
  if (param_2 != (float *)0x0) {
    lVar2 = param_1 + 0x2c0;
    if (param_4 != 1) {
      lVar2 = 0;
    }
    lVar1 = param_1 + 0x268;
    if (param_4 != 0) {
      lVar1 = lVar2;
    }
    if ((lVar1 != 0) && (*(int *)(lVar1 + 0x10) != 0)) {
      if (*(long *)(lVar1 + 8) == lVar1) {
        fVar4 = 0.0;
        fVar5 = 0.0;
        fVar6 = 0.0;
      }
      else {
        lVar3 = (long)*(int *)(lVar1 + 0x14);
        fVar6 = 3.4028235e+38;
        fVar7 = -3.4028235e+38;
        fVar5 = -3.4028235e+38;
        fVar4 = -3.4028235e+38;
        fVar8 = 3.4028235e+38;
        fVar9 = 3.4028235e+38;
        lVar2 = *(long *)(lVar1 + 8) - lVar3;
        do {
          local_98 = 0xff7fffffff7fffff;
          local_a8 = 0x7f7fffff7f7fffff;
          local_a0 = 0xff7fffff7f7fffff;
          FUN_014eed1c(lVar2,&local_a8,param_3);
          lVar2 = *(long *)(lVar2 + lVar3 + 8) - lVar3;
          if (fVar9 <= (float)local_a8) {
            local_a8._0_4_ = fVar9;
          }
          fVar9 = (float)local_a8;
          if (fVar8 <= local_a8._4_4_) {
            local_a8._4_4_ = fVar8;
          }
          fVar8 = local_a8._4_4_;
          if (fVar6 <= (float)local_a0) {
            local_a0._0_4_ = fVar6;
          }
          fVar6 = (float)local_a0;
          if (local_a0._4_4_ <= fVar4) {
            local_a0._4_4_ = fVar4;
          }
          fVar4 = local_a0._4_4_;
          if ((float)local_98 <= fVar5) {
            local_98._0_4_ = fVar5;
          }
          fVar5 = (float)local_98;
          if (local_98._4_4_ <= fVar7) {
            local_98._4_4_ = fVar7;
          }
          fVar7 = local_98._4_4_;
        } while (lVar2 != lVar1 - lVar3);
        fVar4 = (fVar9 + fVar4) * 0.5;
        fVar5 = (fVar8 + fVar5) * 0.5;
        fVar6 = (fVar6 + fVar7) * 0.5;
      }
      *param_2 = fVar4;
      param_2[1] = fVar5;
      param_2[2] = fVar6;
    }
  }
  return;
}


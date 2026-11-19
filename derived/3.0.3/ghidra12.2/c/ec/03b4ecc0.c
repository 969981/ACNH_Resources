
void FUN_03b4ecc0(float param_1,float *param_2,uint param_3,int param_4,uint param_5)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  float fVar6;
  float fVar7;
  
  if (param_1 < 0.0) {
    return;
  }
  if (1.0 < param_1) {
    return;
  }
  if (0 < param_4) {
    return;
  }
  lVar4 = *(long *)(*(long *)(DAT_05aebb78 + 0x10) + 8);
  if (lVar4 == 0) {
    return;
  }
  lVar4 = *(long *)(lVar4 + 8);
  if (lVar4 == 0) {
    return;
  }
  if (*(long *)(lVar4 + 0x10) == 0) {
    return;
  }
  uVar1 = *(uint *)(lVar4 + 8);
  if (uVar1 == 0) {
    return;
  }
  if (-1 < (int)*(uint *)(lVar4 + 0x18)) {
    param_5 = *(uint *)(lVar4 + 0x18);
  }
  if ((int)uVar1 <= (int)param_5) {
    param_5 = 0;
  }
  if (uVar1 <= param_5) {
    return;
  }
  plVar5 = *(long **)(*(long *)(lVar4 + 0x10) + (long)(int)param_5 * 8);
  if (plVar5 == (long *)0x0) {
    return;
  }
  if ((*PTR_DAT_04bc43e8 == '\0') &&
     (uVar3 = (**(code **)(*plVar5 + 0x28))(plVar5), (uVar3 & 1) == 0)) {
    fVar7 = (float)param_3 * 9.313226e-10;
    if (fVar7 < 1.0) {
      fVar7 = fVar7 * (1.0 - param_1);
      goto LAB_03b4edb8;
    }
    if ((2.0 <= fVar7) && ((fVar7 < 2.0 || (3.0 <= fVar7)))) {
      fVar7 = fVar7 + -4.0;
      goto LAB_03b4edb4;
    }
    fVar7 = 2.0 - fVar7;
LAB_03b4eeac:
    fVar6 = 1.0 - param_1;
    fVar7 = fVar6 * fVar7;
  }
  else {
    uVar1 = *(uint *)((long)plVar5 + 0x24);
    fVar6 = 1.0 - param_1;
    if (uVar1 <= param_3) {
      if (param_3 >> 0x1e == 0) {
        *param_2 = fVar6;
        param_3 = -param_3;
LAB_03b4edd4:
        uVar1 = 0x40000000 - uVar1;
        fVar7 = -(float)(param_3 + 0x40000000);
      }
      else {
        uVar2 = *(uint *)(plVar5 + 5);
        if (uVar2 <= param_3) {
          if ((int)param_3 < 0) {
            if (-uVar2 <= param_3) {
              if (param_3 >> 0x1e < 3) {
                *param_2 = -fVar6;
                fVar6 = fVar6 * ((float)(0xc0000000 - param_3) / (float)(uVar2 + 0xc0000000));
                goto LAB_03b4eeb4;
              }
              if (-uVar1 <= param_3) {
                fVar7 = -(float)-param_3;
                goto LAB_03b4edac;
              }
              *param_2 = -fVar6;
              goto LAB_03b4edd4;
            }
            fVar7 = -(float)(param_3 ^ 0x80000000);
          }
          else {
            fVar7 = (float)(0x80000000 - param_3);
          }
          fVar7 = fVar7 / (float)(0x80000000 - uVar2);
          goto LAB_03b4eeac;
        }
        *param_2 = fVar6;
        uVar1 = uVar2 + 0xc0000000;
        fVar7 = (float)(param_3 + 0xc0000000);
      }
      fVar6 = fVar6 * (fVar7 / (float)uVar1);
      goto LAB_03b4eeb4;
    }
    fVar7 = (float)param_3;
LAB_03b4edac:
    fVar7 = fVar7 / (float)uVar1;
LAB_03b4edb4:
    fVar7 = (1.0 - param_1) * fVar7;
LAB_03b4edb8:
    fVar6 = -(1.0 - param_1);
  }
  *param_2 = fVar7;
LAB_03b4eeb4:
  param_2[1] = fVar6;
  return;
}



void FUN_0344d350(long *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  uint local_54;
  undefined **local_50;
  undefined4 local_48;
  
  if (param_1 != (long *)0x0) {
    fVar4 = param_2[1];
    fVar5 = param_2[2];
    fVar6 = param_2[3];
    fVar1 = powf(*param_2,2.2);
    fVar2 = powf(fVar4,2.2);
    fVar5 = powf(fVar5,2.2);
    local_50 = &PTR_LAB_04a3ee98;
    fVar4 = 255.0;
    if (fVar1 <= 1.0) {
      fVar4 = fVar1 * 255.0;
    }
    fVar3 = 0.0;
    if (0.0 <= fVar1) {
      fVar3 = fVar4;
    }
    fVar4 = 255.0;
    if (fVar2 <= 1.0) {
      fVar4 = fVar2 * 255.0;
    }
    fVar1 = 0.0;
    if (0.0 <= fVar2) {
      fVar1 = fVar4;
    }
    fVar4 = 255.0;
    if (fVar5 <= 1.0) {
      fVar4 = fVar5 * 255.0;
    }
    fVar2 = 0.0;
    if (0.0 <= fVar5) {
      fVar2 = fVar4;
    }
    fVar4 = 255.0;
    if (fVar6 <= 1.0) {
      fVar4 = fVar6 * 255.0;
    }
    fVar5 = 0.0;
    if (0.0 <= fVar6) {
      fVar5 = fVar4;
    }
    local_48 = 0x1a;
    local_54 = (int)fVar3 << 0x18 | (int)fVar1 << 0x10 | (int)fVar2 << 8 | (int)fVar5;
    (**(code **)(*param_1 + 0x18))(param_1,&local_50);
    (**(code **)(param_1[3] + 0x1b8))(param_1[1],0,1,0,&local_54);
  }
  return;
}


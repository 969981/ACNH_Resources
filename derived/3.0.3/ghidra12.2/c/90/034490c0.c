
void FUN_034490c0(long *param_1,float *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  uint local_34;
  undefined *local_30;
  undefined4 local_28;
  
  puVar2 = PTR_DAT_04bd3ef0;
  if (((*PTR_DAT_04bd3ef8 & 1) == 0) && (iVar3 = __cxa_guard_acquire(PTR_DAT_04bd3ef8), iVar3 != 0))
  {
    FUN_03c7fd94(puVar2);
    puVar1 = PTR_LAB_04bd3ed0;
    *(undefined **)(puVar2 + 0x650) = PTR_LAB_04bd3ec8;
    *(undefined **)(puVar2 + 0x658) = puVar1;
    *(undefined **)(puVar2 + 0x660) = PTR_LAB_04bd3ed8;
    __cxa_guard_release(PTR_DAT_04bd3ef8);
  }
  if ((param_1 != (long *)0x0) && (param_1[1] != 0)) {
    fVar5 = *param_2;
    fVar6 = param_2[1];
    fVar4 = 255.0;
    if (fVar5 <= 1.0) {
      fVar4 = fVar5 * 255.0;
    }
    fVar8 = 0.0;
    if (0.0 <= fVar5) {
      fVar8 = fVar4;
    }
    fVar4 = 255.0;
    if (fVar6 <= 1.0) {
      fVar4 = fVar6 * 255.0;
    }
    fVar5 = 0.0;
    if (0.0 <= fVar6) {
      fVar5 = fVar4;
    }
    fVar6 = param_2[2];
    fVar9 = param_2[3];
    local_30 = PTR_DAT_04bc0cb8 + 0x10;
    fVar4 = 255.0;
    if (fVar6 <= 1.0) {
      fVar4 = fVar6 * 255.0;
    }
    fVar7 = 0.0;
    if (0.0 <= fVar6) {
      fVar7 = fVar4;
    }
    local_28 = 0x1a;
    fVar4 = 255.0;
    if (fVar9 <= 1.0) {
      fVar4 = fVar9 * 255.0;
    }
    fVar6 = 0.0;
    if (0.0 <= fVar9) {
      fVar6 = fVar4;
    }
    local_34 = (int)fVar8 << 0x18 | (int)fVar5 << 0x10 | (int)fVar7 << 8 | (int)fVar6;
    (**(code **)(*param_1 + 0x18))(param_1,&local_30);
    (**(code **)(param_1[3] + 0x1b8))(param_1[1],0,1,0,&local_34);
  }
  (**(code **)(puVar2 + 8))(0);
  return;
}


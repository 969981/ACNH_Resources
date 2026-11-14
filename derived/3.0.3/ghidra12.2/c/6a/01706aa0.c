
undefined8 FUN_01706aa0(float param_1,long *param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  uint uVar3;
  float fVar4;
  
  if ((param_2[0x227] == 0) || (uVar1 = FUN_03850a90(param_2[0x227],0x2b,0,0), (uVar1 & 1) == 0)) {
    fVar4 = 0.001;
    if (0.001 <= param_1) {
      fVar4 = param_1;
    }
    *(float *)((long)param_2 + 0x1614) = fVar4;
    (**(code **)(*param_2 + 0x4e0))((int)param_2[0x2c1],param_2);
    if (param_1 <= 0.001) {
      uVar3 = *(uint *)((long)param_2 + 0x15f4) | 0x20;
    }
    else {
      uVar3 = *(uint *)((long)param_2 + 0x15f4) & 0xffffffdf;
    }
    *(uint *)((long)param_2 + 0x15f4) = uVar3;
    uVar2 = 1;
  }
  else {
    *(undefined4 *)((long)param_2 + 0x1614) = 0x3a83126f;
    (**(code **)(*param_2 + 0x4e0))((int)param_2[0x2c1],param_2);
    *(uint *)((long)param_2 + 0x15f4) = *(uint *)((long)param_2 + 0x15f4) | 0x20;
    uVar2 = 0;
  }
  return uVar2;
}


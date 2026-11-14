
void FUN_01861604(long *param_1)

{
  int iVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  
  fVar3 = (float)(**(code **)(*param_1 + 0x2d0))();
  iVar1 = (**(code **)(*param_1 + 0x2d8))(param_1);
  fVar4 = (float)(**(code **)(*param_1 + 0x2e0))(param_1);
  iVar2 = (**(code **)(*param_1 + 0x2d8))(param_1);
  *(float *)(param_1 + 0x61) = fVar3 / (float)iVar1 + fVar4 * (float)iVar2 * -0.5;
  uVar5 = (**(code **)(*param_1 + 0x2e0))(param_1);
  *(undefined4 *)(param_1 + 99) = uVar5;
  iVar1 = (**(code **)(*param_1 + 0x2d8))(param_1);
  *(float *)((long)param_1 + 0x40c) = (5.0 / (float)iVar1) * 4.0;
  iVar2 = (**(code **)(*param_1 + 0x2d8))(param_1);
  fVar3 = -((5.0 / (float)iVar1) * 4.0) / (float)iVar2;
  *(float *)(param_1 + 0x94) = fVar3 + fVar3;
  if (*(long *)(*(long *)(param_1[9] + 0x60) + 0x1138) == 0) {
    return;
  }
  FUN_03850760(0x3f800000);
  return;
}



void FUN_01872224(long *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  float fVar5;
  float fVar6;
  
  if (param_2 == 6) {
    *(undefined4 *)(param_1 + 0x61) = 0;
    *(undefined4 *)((long)param_1 + 0x40c) = 0;
  }
  else if (param_2 == 5) {
    fVar5 = (float)(**(code **)(*param_1 + 0x2c8))(param_1);
    iVar1 = (**(code **)(*param_1 + 0x2d0))(param_1);
    fVar6 = (float)(**(code **)(*param_1 + 0x2d8))(param_1);
    iVar2 = (**(code **)(*param_1 + 0x2d0))(param_1);
    *(float *)(param_1 + 0x61) = fVar5 / (float)iVar1 + fVar6 * (float)iVar2 * -0.5;
    uVar4 = (**(code **)(*param_1 + 0x2d8))(param_1);
    *(undefined4 *)(param_1 + 99) = uVar4;
    iVar1 = (**(code **)(*param_1 + 0x2d0))(param_1);
    *(float *)((long)param_1 + 0x40c) = (5.0 / (float)iVar1) * 8.0;
    iVar2 = (**(code **)(*param_1 + 0x2d0))(param_1);
    fVar5 = -((5.0 / (float)iVar1) * 8.0) / (float)iVar2;
    *(float *)(param_1 + 0x94) = fVar5 + fVar5;
  }
  else if (param_2 == 0) {
    uVar4 = (**(code **)(*param_1 + 0x2c0))(param_1);
    *(undefined4 *)(param_1 + 0x61) = uVar4;
    *(undefined4 *)(param_1 + 99) = 0;
    puVar3 = (undefined4 *)(**(code **)(*(long *)(param_1[0x8c] + 0x30) + 0xf0))();
    uVar4 = *puVar3;
    *(undefined4 *)(param_1 + 0x96) = 0;
    *(undefined4 *)((long)param_1 + 0x40c) = uVar4;
  }
  return;
}


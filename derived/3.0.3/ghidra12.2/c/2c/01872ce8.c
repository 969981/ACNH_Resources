
void FUN_01872ce8(long *param_1)

{
  long *plVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  float fVar7;
  float fVar8;
  
  lVar6 = param_1[0x7a];
  if (lVar6 != 0) {
    (**(code **)(*(long *)(lVar6 + 0x2d8) + 0x28))(lVar6 + 0x2d8);
    plVar1 = DAT_0537d558;
    uVar5 = FUN_01d3e29c(*DAT_0537d558 + 8);
    if (((uVar5 & 1) != 0) && (uVar5 = FUN_01d692e8(plVar1[2]), (uVar5 & 1) == 0))
    goto LAB_01872d44;
  }
  FUN_01872e80(param_1);
LAB_01872d44:
  uVar2 = FUN_006f0400(*(float *)(param_1 + 0x65) - *(float *)(param_1[0x60] + 0x278),
                       *(float *)(param_1 + 0x66) - *(float *)(param_1[0x60] + 0x280));
  *(undefined4 *)(param_1 + 100) = uVar2;
  if ((param_1[0x7a] != 0) && (lVar6 = *(long *)(param_1[0x7a] + 0x90), lVar6 != 0)) {
    *(uint *)(lVar6 + 0x178) = *(uint *)(lVar6 + 0x178) | 1;
  }
  *(byte *)(param_1 + 0x7c) = *(byte *)(param_1 + 0x7c) & 0xfd;
  fVar7 = (float)(**(code **)(*param_1 + 0x2c8))(param_1);
  iVar3 = (**(code **)(*param_1 + 0x2d0))(param_1);
  fVar8 = (float)(**(code **)(*param_1 + 0x2d8))(param_1);
  iVar4 = (**(code **)(*param_1 + 0x2d0))(param_1);
  *(float *)(param_1 + 0x61) = fVar7 / (float)iVar3 + fVar8 * (float)iVar4 * -0.5;
  uVar2 = (**(code **)(*param_1 + 0x2d8))(param_1);
  *(undefined4 *)(param_1 + 99) = uVar2;
  iVar3 = (**(code **)(*param_1 + 0x2d0))(param_1);
  *(float *)((long)param_1 + 0x40c) = (5.0 / (float)iVar3) * 8.0;
  iVar4 = (**(code **)(*param_1 + 0x2d0))(param_1);
  *(undefined1 *)((long)param_1 + 0x51a) = 0;
  fVar7 = -((5.0 / (float)iVar3) * 8.0) / (float)iVar4;
  *(float *)(param_1 + 0x94) = fVar7 + fVar7;
  FUN_01815e0c(param_1,(int)param_1[0x50],param_1 + 0x65);
  return;
}


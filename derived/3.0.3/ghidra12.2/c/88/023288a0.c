
void FUN_023288a0(long param_1,undefined1 *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  long *plVar3;
  int iVar4;
  long lVar5;
  float *pfVar6;
  undefined8 *puVar7;
  int iVar8;
  int iVar9;
  float fVar10;
  undefined8 local_50;
  float local_48;
  
  if (*(int *)(param_1 + 0x178) == 0) {
    puVar2 = &DAT_054e9a58;
    if (*(undefined8 **)(param_1 + 0x4c8) != (undefined8 *)0x0) {
      puVar2 = *(undefined8 **)(param_1 + 0x4c8);
    }
    local_50 = puVar2[0x4f];
    local_48 = *(float *)(puVar2 + 0x50);
  }
  else {
    local_50 = CONCAT44((float)(int)*(short *)(param_1 + 0x18e9) * 0.25,
                        (float)*(int *)(param_1 + 0x18e5) * 0.001);
    local_48 = (float)*(int *)(param_1 + 0x18eb) * 0.001;
  }
  lVar5 = FUN_0251e98c(1);
  pfVar6 = (float *)(**(code **)(*(long *)(lVar5 + 0x1380) + 0xf0))(lVar5 + 0x1380);
  puVar2 = &DAT_054e9a58;
  if (*(undefined8 **)(param_1 + 0x4c8) != (undefined8 *)0x0) {
    puVar2 = *(undefined8 **)(param_1 + 0x4c8);
  }
  if (*(int *)(param_2 + 0x1c) - 1U < 3) {
    puVar7 = &local_50;
  }
  else {
    puVar7 = (undefined8 *)param_2;
  }
  FUN_03eb4b60(*pfVar6 * 0.6,0x41200000,0x3e4ccccc,puVar2 + 0x4f,puVar7);
  puVar2 = &DAT_054e9a58;
  if (*(undefined8 **)(param_1 + 0x4c8) != (undefined8 *)0x0) {
    puVar2 = *(undefined8 **)(param_1 + 0x4c8);
  }
  FUN_006f0400(*(float *)(param_2 + 0xc) - *(float *)(puVar2 + 0x4f),
               *(float *)(param_2 + 0x14) - *(float *)(puVar2 + 0x50));
  lVar5 = FUN_0251e98c(1);
  pfVar6 = (float *)(**(code **)(*(long *)(lVar5 + 0x13b0) + 0xf0))(lVar5 + 0x13b0);
  fVar10 = *pfVar6;
  if (*(int *)(param_1 + 0x178) == 0) {
    local_50 = CONCAT44(local_50._4_4_,10);
    if ((*(byte *)(param_1 + 0x18f5) >> 2 & 1) != 0) {
      return;
    }
  }
  plVar3 = &DAT_054e9a58;
  if (*(long **)(param_1 + 0x4c8) != (long *)0x0) {
    plVar3 = *(long **)(param_1 + 0x4c8);
  }
  lVar5 = (**(code **)(*plVar3 + 0x148))();
  iVar9 = *(int *)(param_2 + 0x18);
  iVar8 = iVar9 - *(int *)(lVar5 + 4);
  if (0xb60b5e < iVar8 + 0x5b05afU) {
    iVar4 = 0x15555560;
    iVar9 = -0x15555560;
    iVar8 = (int)(fVar10 * 0.6 * (float)iVar8);
    if (iVar8 < 1) {
      iVar4 = -0x5b05b0;
    }
    else {
      iVar9 = 0x5b05b0;
    }
    iVar1 = iVar8;
    if (iVar4 <= iVar8) {
      iVar1 = iVar4;
    }
    if (iVar9 <= iVar8) {
      iVar9 = iVar1;
    }
    iVar9 = iVar9 + *(int *)(lVar5 + 4);
  }
  *(int *)(lVar5 + 4) = iVar9;
  return;
}


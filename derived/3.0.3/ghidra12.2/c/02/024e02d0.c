
bool FUN_024e02d0(long param_1,byte *param_2,undefined8 *param_3)

{
  bool bVar1;
  int iVar2;
  long *plVar3;
  undefined8 *puVar4;
  short sVar5;
  int iVar6;
  bool bVar7;
  long lVar8;
  float *pfVar9;
  undefined4 *puVar10;
  int iVar11;
  int iVar12;
  float fVar13;
  float fVar14;
  int iVar15;
  float fVar16;
  float local_8c;
  float fStack_88;
  float local_84;
  ulong local_80;
  float fStack_78;
  undefined8 local_70;
  float local_68;
  
  fVar13 = (float)NEON_ucvtf((uint)*param_2);
  fVar13 = fVar13 * 5.0 + 2.5;
  fVar14 = (float)NEON_ucvtf((uint)param_2[1]);
  local_68 = fVar14 * 5.0 + 2.5;
  local_70 = (ulong)(uint)fVar13;
  bVar7 = local_68 < 0.0;
  iVar15 = (int)local_68;
  local_70._4_4_ = FUN_016e026c(0,&local_70,0,0);
  local_68 = (float)(int)((int)((float)iVar15 / 5.0) - (uint)bVar7 & 0xfffffffe) * 5.0 + 5.0;
  local_70._0_4_ =
       (float)(int)((int)((float)(int)fVar13 / 5.0) - (uint)(fVar13 < 0.0) & 0xfffffffe) * 5.0 + 5.0
  ;
  FUN_016e026c(0,&local_70,0,0);
  sVar5 = *(short *)(param_2 + 7);
  fVar13 = *(float *)(param_2 + 3);
  fVar14 = *(float *)(param_2 + 9);
  iVar15 = FUN_006f0400((float)local_70 - fVar13,local_68 - fVar14);
  lVar8 = FUN_0251e98c(1);
  pfVar9 = (float *)(**(code **)(*(long *)(lVar8 + 0x13b0) + 0xf0))(lVar8 + 0x13b0);
  fVar16 = *pfVar9;
  if (*(int *)(param_1 + 0x178) == 0) {
    local_80 = CONCAT44(local_80._4_4_,10);
    local_70._0_4_ = 1.4013e-44;
    if ((*(byte *)(param_1 + 0x18f5) >> 2 & 1) != 0) {
      bVar7 = true;
      goto LAB_024e0508;
    }
  }
  plVar3 = &DAT_054e9a58;
  if (*(long **)(param_1 + 0x4c8) != (long *)0x0) {
    plVar3 = *(long **)(param_1 + 0x4c8);
  }
  lVar8 = (**(code **)(*plVar3 + 0x148))();
  iVar11 = iVar15 - *(int *)(lVar8 + 4);
  if (iVar11 + 0x5b05afU < 0xb60b5f) {
    bVar7 = true;
    iVar12 = iVar15;
  }
  else {
    iVar6 = 0x15555560;
    iVar12 = -0x15555560;
    iVar11 = (int)(fVar16 * (float)iVar11);
    if (iVar11 < 1) {
      iVar6 = -0x5b05b0;
    }
    else {
      iVar12 = 0x5b05b0;
    }
    iVar2 = iVar11;
    if (iVar6 <= iVar11) {
      iVar2 = iVar6;
    }
    if (iVar12 <= iVar11) {
      iVar12 = iVar2;
    }
    iVar12 = iVar12 + *(int *)(lVar8 + 4);
    bVar7 = iVar12 == iVar15;
  }
  *(int *)(lVar8 + 4) = iVar12;
LAB_024e0508:
  local_8c = fVar13;
  fStack_88 = (float)(int)sVar5 * 0.25;
  local_84 = fVar14;
  fStack_88 = (float)FUN_016e026c(0,&local_8c,0,0);
  lVar8 = FUN_0251e98c(1);
  puVar10 = (undefined4 *)(**(code **)(*(long *)(lVar8 + 0x1380) + 0xf0))(lVar8 + 0x1380);
  puVar4 = &DAT_054e9a58;
  if (*(undefined8 **)(param_1 + 0x4c8) != (undefined8 *)0x0) {
    puVar4 = *(undefined8 **)(param_1 + 0x4c8);
  }
  local_80 = (ulong)(uint)local_8c;
  fStack_78 = local_84;
  local_68 = *(float *)(puVar4 + 0x50);
  local_70 = puVar4[0x4f] & 0xffffffff;
  fVar13 = (float)FUN_03eb4b60(*puVar10,0x41200000,0x3e4ccccc,&local_70,&local_80);
  *(float *)(puVar4 + 0x4f) = (float)local_70;
  *(float *)(puVar4 + 0x50) = local_68;
  if (param_3 != (undefined8 *)0x0) {
    *(float *)(param_3 + 1) = local_84;
    *param_3 = CONCAT44(fStack_88,local_8c);
  }
  bVar1 = false;
  if (fVar13 == 0.0) {
    bVar1 = bVar7;
  }
  return bVar1;
}



void FUN_024dc780(long param_1)

{
  int iVar1;
  long *plVar2;
  ushort uVar3;
  int iVar4;
  bool bVar5;
  int iVar6;
  long lVar7;
  float *pfVar8;
  undefined8 *puVar9;
  ulong uVar10;
  int iVar11;
  float fVar12;
  float local_5c;
  float fStack_58;
  float local_54;
  float local_50;
  float fStack_4c;
  float local_48;
  undefined4 local_44;
  
  fStack_4c = (float)(int)*(short *)(param_1 + 0x1904) * 0.25;
  local_50 = (float)*(int *)(param_1 + 0x1900) * 0.001;
  fStack_58 = (float)(int)*(short *)(param_1 + 0x1918) * 0.25;
  local_5c = (float)*(int *)(param_1 + 0x1914) * 0.001;
  local_48 = (float)*(int *)(param_1 + 0x1906) * 0.001;
  local_54 = (float)*(int *)(param_1 + 0x191a) * 0.001;
  lVar7 = FUN_0251e98c(1);
  pfVar8 = (float *)(**(code **)(*(long *)(lVar7 + 0x1380) + 0xf0))(lVar7 + 0x1380);
  puVar9 = &DAT_054e9a58;
  if (*(undefined8 **)(param_1 + 0x4c8) != (undefined8 *)0x0) {
    puVar9 = *(undefined8 **)(param_1 + 0x4c8);
  }
  FUN_03eb4b60(*pfVar8 * 0.3,0x41200000,0x3e4ccccc,puVar9 + 0x4f,&local_5c);
  uVar3 = *(ushort *)(param_1 + 0x191e);
  lVar7 = FUN_0251e98c(1);
  pfVar8 = (float *)(**(code **)(*(long *)(lVar7 + 0x13b0) + 0xf0))(lVar7 + 0x13b0);
  fVar12 = *pfVar8;
  if (*(int *)(param_1 + 0x178) == 0) {
    local_44 = 10;
    local_5c = 1.4013e-44;
    if ((*(byte *)(param_1 + 0x18f5) >> 2 & 1) == 0) goto LAB_024dc8fc;
    bVar5 = true;
  }
  else {
LAB_024dc8fc:
    iVar6 = (uint)uVar3 * 0x10000;
    plVar2 = &DAT_054e9a58;
    if (*(long **)(param_1 + 0x4c8) != (long *)0x0) {
      plVar2 = *(long **)(param_1 + 0x4c8);
    }
    lVar7 = (**(code **)(*plVar2 + 0x148))();
    iVar11 = iVar6 - *(int *)(lVar7 + 4);
    if (0xb60b5e < iVar11 + 0x5b05afU) {
      iVar4 = 0x15555560;
      iVar6 = -0x15555560;
      iVar11 = (int)(fVar12 * 0.3 * (float)iVar11);
      if (iVar11 < 1) {
        iVar4 = -0x5b05b0;
      }
      else {
        iVar6 = 0x5b05b0;
      }
      iVar1 = iVar11;
      if (iVar4 <= iVar11) {
        iVar1 = iVar4;
      }
      if (iVar6 <= iVar11) {
        iVar6 = iVar1;
      }
      iVar6 = iVar6 + *(int *)(lVar7 + 4);
    }
    *(int *)(lVar7 + 4) = iVar6;
    bVar5 = *(int *)(param_1 + 0x178) == 0;
  }
  FUN_016f7880(param_1,bVar5,&local_50);
  puVar9 = *(undefined8 **)(param_1 + 0x60);
  if (puVar9 == (undefined8 *)0x0) {
    if (((DAT_052461c0 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_052461c0), iVar6 != 0)) {
      FUN_016fcf10(&DAT_05240280);
      FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
      __cxa_guard_release(&DAT_052461c0);
      puVar9 = &DAT_05240280;
      lVar7 = DAT_052413b8;
      goto joined_r0x024dc9c4;
    }
    puVar9 = &DAT_05240280;
  }
  lVar7 = puVar9[0x227];
joined_r0x024dc9c4:
  if (lVar7 == 0) {
    uVar10 = FUN_0170a6d0(puVar9,0);
  }
  else {
    local_5c = 1.4013e-45;
    uVar10 = FUN_0170a6d0(puVar9,*(uint *)(puVar9 + 0x2d3) >> 1 & 1);
  }
  if ((uVar10 & 1) != 0) {
    if (*(int *)(param_1 + 0x178) == 0) {
      FUN_02373ee0(param_1,6,1,1);
    }
    else {
      *(uint *)(param_1 + 0x17cc) = *(uint *)(param_1 + 0x17cc) | 8;
      FUN_023164ec(param_1,6);
    }
  }
  return;
}


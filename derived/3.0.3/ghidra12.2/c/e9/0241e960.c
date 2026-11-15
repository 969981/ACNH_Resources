
void FUN_0241e960(long param_1)

{
  int iVar1;
  long *plVar2;
  ushort uVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  undefined4 *puVar7;
  float *pfVar8;
  ulong uVar9;
  undefined8 *puVar10;
  int iVar11;
  float fVar12;
  float local_54;
  float fStack_50;
  float local_4c;
  undefined4 local_48;
  undefined4 local_44;
  
  local_54 = (float)*(int *)(param_1 + 0x1900) * 0.001;
  fStack_50 = (float)(int)*(short *)(param_1 + 0x1904) * 0.25;
  local_4c = (float)*(int *)(param_1 + 0x1906) * 0.001;
  lVar6 = FUN_0251e98c(1);
  puVar7 = (undefined4 *)(**(code **)(*(long *)(lVar6 + 0x1380) + 0xf0))(lVar6 + 0x1380);
  puVar10 = &DAT_054e9a58;
  if (*(undefined8 **)(param_1 + 0x4c8) != (undefined8 *)0x0) {
    puVar10 = *(undefined8 **)(param_1 + 0x4c8);
  }
  FUN_03eb4b60(*puVar7,0x41200000,0x3e4ccccc,puVar10 + 0x4f,&local_54);
  uVar3 = *(ushort *)(param_1 + 0x190a);
  lVar6 = FUN_0251e98c(1);
  pfVar8 = (float *)(**(code **)(*(long *)(lVar6 + 0x13b0) + 0xf0))(lVar6 + 0x13b0);
  fVar12 = *pfVar8;
  if (*(int *)(param_1 + 0x178) == 0) {
    local_48 = 10;
    local_44 = 10;
    if ((*(byte *)(param_1 + 0x18f5) >> 2 & 1) != 0) goto LAB_0241eb24;
  }
  iVar5 = (uint)uVar3 * 0x10000;
  plVar2 = &DAT_054e9a58;
  if (*(long **)(param_1 + 0x4c8) != (long *)0x0) {
    plVar2 = *(long **)(param_1 + 0x4c8);
  }
  lVar6 = (**(code **)(*plVar2 + 0x148))();
  iVar11 = iVar5 - *(int *)(lVar6 + 4);
  if (0xb60b5e < iVar11 + 0x5b05afU) {
    iVar4 = 0x15555560;
    iVar5 = -0x15555560;
    iVar11 = (int)(fVar12 * (float)iVar11);
    if (iVar11 < 1) {
      iVar4 = -0x5b05b0;
    }
    else {
      iVar5 = 0x5b05b0;
    }
    iVar1 = iVar11;
    if (iVar4 <= iVar11) {
      iVar1 = iVar4;
    }
    if (iVar5 <= iVar11) {
      iVar5 = iVar1;
    }
    iVar5 = iVar5 + *(int *)(lVar6 + 4);
  }
  *(int *)(lVar6 + 4) = iVar5;
LAB_0241eb24:
  puVar10 = *(undefined8 **)(param_1 + 0x60);
  if (puVar10 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar5 = __cxa_guard_acquire(&DAT_052461c0);
      if (iVar5 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
      puVar10 = &DAT_05240280;
    }
    else {
      puVar10 = &DAT_05240280;
    }
  }
  local_44 = 0;
  local_54 = 6.16571e-44;
  if ((puVar10[0x227] != 0) && (uVar9 = FUN_03850a90(puVar10[0x227],0x2c,0,0), (uVar9 & 1) != 0)) {
    FUN_02239250(*(undefined4 *)(param_1 + 0x230),&DAT_054bf930,0);
  }
  if (*(int *)(param_1 + 0x178) == 0) {
    puVar10 = *(undefined8 **)(param_1 + 0x60);
    if (puVar10 == (undefined8 *)0x0) {
      if ((DAT_052461c0 & 1) == 0) {
        iVar5 = __cxa_guard_acquire(&DAT_052461c0);
        if (iVar5 != 0) {
          FUN_016fcf10(&DAT_05240280);
          FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
          __cxa_guard_release(&DAT_052461c0);
        }
        puVar10 = &DAT_05240280;
      }
      else {
        puVar10 = &DAT_05240280;
      }
    }
    uVar9 = FUN_0170a6d0(puVar10,0);
    if ((uVar9 & 1) != 0) {
      *(undefined1 *)(param_1 + 0x1915) = 1;
      FUN_0241eca0(param_1);
    }
  }
  return;
}


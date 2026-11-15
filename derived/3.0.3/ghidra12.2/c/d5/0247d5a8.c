
void FUN_0247d5a8(long param_1)

{
  int iVar1;
  long *plVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  float *pfVar7;
  ulong uVar8;
  int iVar9;
  undefined8 *puVar10;
  float fVar11;
  byte local_68 [4];
  float local_64;
  float fStack_60;
  float local_5c;
  undefined4 local_58;
  undefined4 local_54;
  
  fStack_60 = (float)(int)*(short *)(param_1 + 0x18e9) * 0.25;
  local_64 = (float)*(int *)(param_1 + 0x18e5) * 0.001;
  local_5c = (float)*(int *)(param_1 + 0x18eb) * 0.001;
  lVar6 = FUN_0251e98c(1);
  pfVar7 = (float *)(**(code **)(*(long *)(lVar6 + 0x1380) + 0xf0))(lVar6 + 0x1380);
  puVar10 = &DAT_054e9a58;
  if (*(undefined8 **)(param_1 + 0x4c8) != (undefined8 *)0x0) {
    puVar10 = *(undefined8 **)(param_1 + 0x4c8);
  }
  FUN_03eb4b60(*pfVar7 * 0.6,0x41200000,0x3e4ccccc,puVar10 + 0x4f,&local_64);
  cVar3 = *(char *)(param_1 + 0x1913);
  iVar5 = FUN_006f0400((float)*(int *)(param_1 + 0x1900) * 0.001 - local_64,
                       (float)*(int *)(param_1 + 0x1906) * 0.001 - local_5c);
  lVar6 = FUN_0251e98c(1);
  pfVar7 = (float *)(**(code **)(*(long *)(lVar6 + 0x13b0) + 0xf0))(lVar6 + 0x13b0);
  fVar11 = *pfVar7;
  if (*(int *)(param_1 + 0x178) == 0) {
    local_58 = 10;
    local_54 = 10;
    if ((*(byte *)(param_1 + 0x18f5) >> 2 & 1) != 0) goto LAB_0247d7ac;
  }
  plVar2 = &DAT_054e9a58;
  if (*(long **)(param_1 + 0x4c8) != (long *)0x0) {
    plVar2 = *(long **)(param_1 + 0x4c8);
  }
  lVar6 = (**(code **)(*plVar2 + 0x148))();
  iVar9 = iVar5 - *(int *)(lVar6 + 4);
  if (0xb60b5e < iVar9 + 0x5b05afU) {
    iVar4 = 0x15555560;
    iVar5 = -0x15555560;
    iVar9 = (int)(fVar11 * 0.6 * (float)iVar9);
    if (iVar9 < 1) {
      iVar4 = -0x5b05b0;
    }
    else {
      iVar5 = 0x5b05b0;
    }
    iVar1 = iVar9;
    if (iVar4 <= iVar9) {
      iVar1 = iVar4;
    }
    if (iVar5 <= iVar9) {
      iVar5 = iVar1;
    }
    iVar5 = iVar5 + *(int *)(lVar6 + 4);
  }
  *(int *)(lVar6 + 4) = iVar5;
LAB_0247d7ac:
  puVar10 = *(undefined8 **)(param_1 + 0x60);
  if (puVar10 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar5 = __cxa_guard_acquire(&DAT_052461c0);
      puVar10 = &DAT_05240280;
      if (iVar5 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      puVar10 = &DAT_05240280;
    }
  }
  local_58 = 0;
  local_54 = 0x2d;
  if ((puVar10[0x227] != 0) && (uVar8 = FUN_03850890(puVar10[0x227],0x2d,0,0), (uVar8 & 1) != 0)) {
    *(uint *)(param_1 + 0x17cc) = *(uint *)(param_1 + 0x17cc) & 0xfffffffe;
    local_68[0] = *(byte *)(param_1 + 0x1ee8);
    if (7 < local_68[0]) {
      local_68[0] = 0xff;
    }
    FUN_0247d89c(local_68,param_1 + 0x18e0);
  }
  FUN_024df754(param_1,cVar3 != '\0',1);
  return;
}


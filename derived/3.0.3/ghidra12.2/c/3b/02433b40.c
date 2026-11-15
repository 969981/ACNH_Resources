
void FUN_02433b40(long param_1)

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
  int iVar10;
  undefined8 *puVar11;
  float fVar12;
  float local_4c;
  float fStack_48;
  float local_44;
  
  fStack_48 = (float)(int)*(short *)(param_1 + 0x1904) * 0.25;
  local_4c = (float)*(int *)(param_1 + 0x1900) * 0.001;
  local_44 = (float)*(int *)(param_1 + 0x1906) * 0.001;
  lVar6 = FUN_0251e98c(1);
  puVar7 = (undefined4 *)(**(code **)(*(long *)(lVar6 + 0x1380) + 0xf0))(lVar6 + 0x1380);
  puVar11 = &DAT_054e9a58;
  if (*(undefined8 **)(param_1 + 0x4c8) != (undefined8 *)0x0) {
    puVar11 = *(undefined8 **)(param_1 + 0x4c8);
  }
  FUN_03eb4b60(*puVar7,0x41200000,0x3e4ccccc,puVar11 + 0x4f,&local_4c);
  uVar3 = *(ushort *)(param_1 + 0x190a);
  lVar6 = FUN_0251e98c(1);
  pfVar8 = (float *)(**(code **)(*(long *)(lVar6 + 0x13b0) + 0xf0))(lVar6 + 0x13b0);
  fVar12 = *pfVar8;
  if ((*(int *)(param_1 + 0x178) != 0) || ((*(byte *)(param_1 + 0x18f5) >> 2 & 1) == 0)) {
    iVar5 = (uint)uVar3 * 0x10000;
    plVar2 = &DAT_054e9a58;
    if (*(long **)(param_1 + 0x4c8) != (long *)0x0) {
      plVar2 = *(long **)(param_1 + 0x4c8);
    }
    lVar6 = (**(code **)(*plVar2 + 0x148))();
    iVar10 = iVar5 - *(int *)(lVar6 + 4);
    if (0xb60b5e < iVar10 + 0x5b05afU) {
      iVar4 = 0x15555560;
      iVar5 = -0x15555560;
      iVar10 = (int)(fVar12 * (float)iVar10);
      if (iVar10 < 1) {
        iVar4 = -0x5b05b0;
      }
      else {
        iVar5 = 0x5b05b0;
      }
      iVar1 = iVar10;
      if (iVar4 <= iVar10) {
        iVar1 = iVar4;
      }
      if (iVar5 <= iVar10) {
        iVar5 = iVar1;
      }
      iVar5 = iVar5 + *(int *)(lVar6 + 4);
    }
    *(int *)(lVar6 + 4) = iVar5;
  }
  puVar11 = *(undefined8 **)(param_1 + 0x60);
  if (puVar11 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar5 = __cxa_guard_acquire(&DAT_052461c0);
      puVar11 = &DAT_05240280;
      if (iVar5 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      puVar11 = &DAT_05240280;
    }
  }
  local_4c = 0.0;
  if ((((puVar11[0x227] == 0) || (uVar9 = FUN_03850368(puVar11[0x227],0), (uVar9 & 1) != 0)) ||
      (puVar11[0x227] == 0)) ||
     ((uVar9 = FUN_03850368(puVar11[0x227],0), (uVar9 & 1) != 0 ||
      (uVar9 = FUN_0384fca4(puVar11[0x227],0), (uVar9 & 1) != 0)))) {
    if (*(int *)(param_1 + 0x178) == 0) {
      *(undefined8 *)(param_1 + 0x1960) = *(undefined8 *)(param_1 + 0x18e0);
      *(undefined8 *)(param_1 + 0x1968) = *(undefined8 *)(param_1 + 0x18e8);
      *(undefined8 *)(param_1 + 0x1970) = *(undefined8 *)(param_1 + 0x18f0);
      *(undefined8 *)(param_1 + 0x1978) = *(undefined8 *)(param_1 + 0x18f8);
      *(undefined8 *)(param_1 + 0x198c) = 0;
      *(undefined8 *)(param_1 + 0x1994) = 0;
      *(undefined8 *)(param_1 + 0x199c) = 0;
      *(undefined8 *)(param_1 + 0x19a4) = 0;
      *(undefined8 *)(param_1 + 0x19ac) = 0;
      *(undefined8 *)(param_1 + 0x19b4) = 0;
      *(undefined8 *)(param_1 + 0x19bc) = 0;
      *(undefined8 *)(param_1 + 0x19c4) = 0;
      *(undefined8 *)(param_1 + 0x19cc) = 0;
      *(undefined8 *)(param_1 + 0x19d2) = 0;
      *(undefined4 *)(param_1 + 0x1988) = *(undefined4 *)(param_1 + 0x1908);
      *(undefined8 *)(param_1 + 0x1980) = *(undefined8 *)(param_1 + 0x1900);
      local_4c = 3.61535e-43;
      *(undefined8 *)(param_1 + 0x18c0) = *(undefined8 *)(param_1 + 0x19c0);
      *(undefined8 *)(param_1 + 0x18c8) = *(undefined8 *)(param_1 + 0x19c8);
      *(undefined8 *)(param_1 + 0x18d0) = *(undefined8 *)(param_1 + 0x19d0);
      *(undefined2 *)(param_1 + 0x18d8) = *(undefined2 *)(param_1 + 0x19d8);
      *(undefined8 *)(param_1 + 0x18a0) = *(undefined8 *)(param_1 + 0x19a0);
      *(undefined8 *)(param_1 + 0x18a8) = *(undefined8 *)(param_1 + 0x19a8);
      *(undefined8 *)(param_1 + 0x18b0) = *(undefined8 *)(param_1 + 0x19b0);
      *(undefined8 *)(param_1 + 0x18b8) = *(undefined8 *)(param_1 + 0x19b8);
      *(undefined8 *)(param_1 + 0x1880) = *(undefined8 *)(param_1 + 0x1980);
      *(undefined8 *)(param_1 + 0x1888) = *(undefined8 *)(param_1 + 0x1988);
      *(undefined8 *)(param_1 + 0x1890) = *(undefined8 *)(param_1 + 0x1990);
      *(undefined8 *)(param_1 + 0x1898) = *(undefined8 *)(param_1 + 0x1998);
      *(undefined8 *)(param_1 + 0x1860) = *(undefined8 *)(param_1 + 0x1960);
      *(undefined8 *)(param_1 + 0x1868) = *(undefined8 *)(param_1 + 0x1968);
      *(undefined8 *)(param_1 + 0x1878) = *(undefined8 *)(param_1 + 0x1978);
      *(undefined8 *)(param_1 + 0x1870) = *(undefined8 *)(param_1 + 0x1970);
      lVar6 = 0;
      if (*(long *)(param_1 + 0x70) != 0) {
        lVar6 = *(long *)(param_1 + 0x70) + 0x278;
      }
      FUN_03ebb160(lVar6,0x102);
    }
    else {
      puVar11 = *(undefined8 **)(param_1 + 0x60);
      if (puVar11 == (undefined8 *)0x0) {
        if ((DAT_052461c0 & 1) == 0) {
          iVar5 = __cxa_guard_acquire(&DAT_052461c0);
          puVar11 = &DAT_05240280;
          if (iVar5 != 0) {
            FUN_016fcf10(&DAT_05240280);
            FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
            __cxa_guard_release(&DAT_052461c0);
          }
        }
        else {
          puVar11 = &DAT_05240280;
        }
      }
      FUN_017081d0(puVar11,&DAT_054c3cf8,6,1,0);
    }
  }
  return;
}


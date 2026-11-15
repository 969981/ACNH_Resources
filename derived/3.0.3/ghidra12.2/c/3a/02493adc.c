
void FUN_02493adc(long param_1)

{
  int iVar1;
  undefined8 *puVar2;
  long *plVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  float *pfVar7;
  int iVar8;
  float fVar9;
  float local_50;
  float fStack_4c;
  float local_48;
  undefined4 local_44;
  
  if (((*(long *)(param_1 + 0x60) == 0) && ((DAT_052461c0 & 1) == 0)) &&
     (iVar5 = __cxa_guard_acquire(&DAT_052461c0), iVar5 != 0)) {
    FUN_016fcf10(&DAT_05240280);
    FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
    __cxa_guard_release(&DAT_052461c0);
  }
  if (*(int *)(param_1 + 0x178) == 1) {
    fStack_4c = (float)(int)*(short *)(param_1 + 0x18e9) * 0.25;
    local_50 = (float)*(int *)(param_1 + 0x18e5) * 0.001;
    local_48 = (float)*(int *)(param_1 + 0x18eb) * 0.001;
    lVar6 = FUN_0251e98c(1);
    pfVar7 = (float *)(**(code **)(*(long *)(lVar6 + 0x2200) + 0xf0))(lVar6 + 0x2200);
    fVar9 = *pfVar7;
    lVar6 = FUN_0251e98c(1);
    pfVar7 = (float *)(**(code **)(*(long *)(lVar6 + 0x1380) + 0xf0))(lVar6 + 0x1380);
    puVar2 = &DAT_054e9a58;
    if (*(undefined8 **)(param_1 + 0x4c8) != (undefined8 *)0x0) {
      puVar2 = *(undefined8 **)(param_1 + 0x4c8);
    }
    FUN_03eb4b60(fVar9 * *pfVar7,0x41200000,0x3e4ccccc,puVar2 + 0x4f,&local_50);
  }
  iVar5 = FUN_006f0400((float)*(int *)(param_1 + 0x1900) * 0.001 -
                       *(float *)(*(long *)(param_1 + 0x68) + 0x278),
                       (float)*(int *)(param_1 + 0x1906) * 0.001 -
                       *(float *)(*(long *)(param_1 + 0x68) + 0x280));
  lVar6 = FUN_0251e98c(1);
  pfVar7 = (float *)(**(code **)(*(long *)(lVar6 + 0x13b0) + 0xf0))(lVar6 + 0x13b0);
  fVar9 = *pfVar7;
  if (*(int *)(param_1 + 0x178) == 0) {
    local_44 = 10;
    local_50 = 1.4013e-44;
    if ((*(byte *)(param_1 + 0x18f5) >> 2 & 1) != 0) goto LAB_02493d48;
  }
  plVar3 = &DAT_054e9a58;
  if (*(long **)(param_1 + 0x4c8) != (long *)0x0) {
    plVar3 = *(long **)(param_1 + 0x4c8);
  }
  lVar6 = (**(code **)(*plVar3 + 0x148))();
  iVar8 = iVar5 - *(int *)(lVar6 + 4);
  if (0xb60b5e < iVar8 + 0x5b05afU) {
    iVar4 = 0x15555560;
    iVar5 = -0x15555560;
    iVar8 = (int)(fVar9 * (float)iVar8);
    if (iVar8 < 1) {
      iVar4 = -0x5b05b0;
    }
    else {
      iVar5 = 0x5b05b0;
    }
    iVar1 = iVar8;
    if (iVar4 <= iVar8) {
      iVar1 = iVar4;
    }
    if (iVar5 <= iVar8) {
      iVar5 = iVar1;
    }
    iVar5 = iVar5 + *(int *)(lVar6 + 4);
  }
  *(int *)(lVar6 + 4) = iVar5;
  if (*(int *)(param_1 + 0x178) != 0) {
    return;
  }
LAB_02493d48:
  lVar6 = *(long *)PTR_DAT_04bb4f78 + 0x20 + (ulong)(uint)*(byte *)(param_1 + 0x1ee8) * 0x740;
  if (7 < *(byte *)(param_1 + 0x1ee8)) {
    lVar6 = *(long *)PTR_DAT_04bb4f78 + 0x20;
  }
  *(undefined4 *)(lVar6 + 0x11c) = 2;
  local_50 = (float)FUN_01392d64(lVar6 + 0x1c0);
  *(float *)(lVar6 + 0x118) = local_50;
  *(int *)(lVar6 + 0x1b8) = *(int *)(lVar6 + 0x1b8) + 1;
  if (local_50 != 4.2039e-45) {
    if (local_50 == 1.4013e-45) {
      *(undefined8 *)(param_1 + 0x199c) = 0;
      *(undefined8 *)(param_1 + 0x19a4) = 0;
      *(undefined8 *)(param_1 + 0x19cc) = 0;
      *(undefined8 *)(param_1 + 0x19d2) = 0;
      *(undefined8 *)(param_1 + 0x1960) = *(undefined8 *)(param_1 + 0x18e0);
      *(undefined8 *)(param_1 + 0x1968) = *(undefined8 *)(param_1 + 0x18e8);
      *(undefined8 *)(param_1 + 0x1970) = *(undefined8 *)(param_1 + 0x18f0);
      *(undefined8 *)(param_1 + 0x19ac) = 0;
      *(undefined8 *)(param_1 + 0x19b4) = 0;
      *(undefined8 *)(param_1 + 0x19bc) = 0;
      *(undefined8 *)(param_1 + 0x19c4) = 0;
      *(undefined8 *)(param_1 + 0x1978) = *(undefined8 *)(param_1 + 0x18f8);
      *(undefined4 *)(param_1 + 0x1998) = *(undefined4 *)(param_1 + 0x1918);
      *(undefined8 *)(param_1 + 0x1990) = *(undefined8 *)(param_1 + 0x1910);
      *(undefined8 *)(param_1 + 0x1988) = *(undefined8 *)(param_1 + 0x1908);
      *(undefined8 *)(param_1 + 0x1980) = *(undefined8 *)(param_1 + 0x1900);
      local_50 = 4.06377e-44;
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
      FUN_03ebb160(lVar6,0x1d);
    }
    else {
      FUN_02473abc(param_1);
    }
  }
  return;
}


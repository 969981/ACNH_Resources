
void FUN_0245d834(long param_1)

{
  int iVar1;
  long *plVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  float *pfVar6;
  ulong uVar7;
  int iVar8;
  undefined8 *puVar9;
  float fVar10;
  float local_50;
  float fStack_4c;
  float local_48;
  undefined4 local_44;
  
  iVar4 = FUN_006f0400((float)*(int *)(param_1 + 0x190c) * 0.001 -
                       *(float *)(*(long *)(param_1 + 0x68) + 0x278),
                       (float)*(int *)(param_1 + 0x1912) * 0.001 -
                       *(float *)(*(long *)(param_1 + 0x68) + 0x280));
  lVar5 = FUN_0251e98c(1);
  pfVar6 = (float *)(**(code **)(*(long *)(lVar5 + 0x13b0) + 0xf0))(lVar5 + 0x13b0);
  fVar10 = *pfVar6;
  if (*(int *)(param_1 + 0x178) == 0) {
    local_44 = 10;
    local_50 = 1.4013e-44;
    if ((*(byte *)(param_1 + 0x18f5) >> 2 & 1) != 0) goto LAB_0245da64;
  }
  plVar2 = &DAT_054e9a58;
  if (*(long **)(param_1 + 0x4c8) != (long *)0x0) {
    plVar2 = *(long **)(param_1 + 0x4c8);
  }
  lVar5 = (**(code **)(*plVar2 + 0x148))();
  iVar8 = iVar4 - *(int *)(lVar5 + 4);
  if (0xb60b5e < iVar8 + 0x5b05afU) {
    iVar3 = 0x15555560;
    iVar4 = -0x15555560;
    iVar8 = (int)(fVar10 * 0.6 * (float)iVar8);
    if (iVar8 < 1) {
      iVar3 = -0x5b05b0;
    }
    else {
      iVar4 = 0x5b05b0;
    }
    iVar1 = iVar8;
    if (iVar3 <= iVar8) {
      iVar1 = iVar3;
    }
    if (iVar4 <= iVar8) {
      iVar4 = iVar1;
    }
    iVar4 = iVar4 + *(int *)(lVar5 + 4);
  }
  *(int *)(lVar5 + 4) = iVar4;
  iVar4 = *(int *)(param_1 + 0x178);
  if (iVar4 == 1) {
    lVar5 = FUN_0251e98c(1);
    pfVar6 = (float *)(**(code **)(*(long *)(lVar5 + 0x1380) + 0xf0))(lVar5 + 0x1380);
    fStack_4c = (float)(int)*(short *)(param_1 + 0x18e9) * 0.25;
    local_50 = (float)*(int *)(param_1 + 0x18e5) * 0.001;
    local_48 = (float)*(int *)(param_1 + 0x18eb) * 0.001;
    puVar9 = &DAT_054e9a58;
    if (*(undefined8 **)(param_1 + 0x4c8) != (undefined8 *)0x0) {
      puVar9 = *(undefined8 **)(param_1 + 0x4c8);
    }
    FUN_03eb4b60(*pfVar6 * 0.6,0x41200000,0x3e4ccccc,puVar9 + 0x4f,&local_50);
    iVar4 = *(int *)(param_1 + 0x178);
  }
  if (iVar4 != 0) {
    return;
  }
LAB_0245da64:
  puVar9 = *(undefined8 **)(param_1 + 0x60);
  if (puVar9 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar4 = __cxa_guard_acquire(&DAT_052461c0);
      puVar9 = &DAT_05240280;
      if (iVar4 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      puVar9 = &DAT_05240280;
    }
  }
  uVar7 = FUN_0170a6d0(puVar9,0);
  if ((uVar7 & 1) != 0) {
    *(undefined8 *)(param_1 + 0x1960) = *(undefined8 *)(param_1 + 0x18e0);
    *(undefined8 *)(param_1 + 0x1968) = *(undefined8 *)(param_1 + 0x18e8);
    *(undefined8 *)(param_1 + 0x1970) = *(undefined8 *)(param_1 + 0x18f0);
    *(undefined8 *)(param_1 + 0x1978) = *(undefined8 *)(param_1 + 0x18f8);
    *(undefined8 *)(param_1 + 0x1988) = *(undefined8 *)(param_1 + 0x1908);
    *(undefined8 *)(param_1 + 0x1980) = *(undefined8 *)(param_1 + 0x1900);
    *(undefined8 *)(param_1 + 0x1999) = 0;
    *(undefined8 *)(param_1 + 0x19a1) = 0;
    *(undefined8 *)(param_1 + 0x19a9) = 0;
    *(undefined8 *)(param_1 + 0x19b1) = 0;
    *(undefined8 *)(param_1 + 0x19b9) = 0;
    *(undefined8 *)(param_1 + 0x19c1) = 0;
    *(undefined8 *)(param_1 + 0x19c9) = 0;
    *(undefined8 *)(param_1 + 0x19d1) = 0;
    *(undefined1 *)(param_1 + 0x19d9) = 0;
    *(undefined8 *)(param_1 + 0x1990) = *(undefined8 *)(param_1 + 0x1910);
    *(undefined1 *)(param_1 + 0x1998) = *(undefined1 *)(param_1 + 0x1918);
    local_50 = 3.89561e-43;
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
    lVar5 = 0;
    if (*(long *)(param_1 + 0x70) != 0) {
      lVar5 = *(long *)(param_1 + 0x70) + 0x278;
    }
    FUN_03ebb160(lVar5,0x116);
  }
  return;
}


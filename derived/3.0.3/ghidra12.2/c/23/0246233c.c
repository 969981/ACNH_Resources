
void FUN_0246233c(long param_1)

{
  int iVar1;
  long *plVar2;
  ushort uVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  float *pfVar7;
  undefined8 *puVar8;
  ulong uVar9;
  int iVar10;
  float fVar11;
  float local_50;
  float fStack_4c;
  float local_48;
  undefined4 local_44;
  
  *(undefined4 *)(param_1 + 0x1bf4) = 0x3f000000;
  lVar6 = FUN_0251e98c(1);
  pfVar7 = (float *)(**(code **)(*(long *)(lVar6 + 0x2a0) + 0xf0))(lVar6 + 0x2a0);
  fVar11 = *pfVar7;
  *(undefined4 *)(param_1 + 0x1bf4) = 0x3f800000;
  uVar3 = *(ushort *)(param_1 + 0x18ef);
  *(uint *)(param_1 + 0x17cc) = *(uint *)(param_1 + 0x17cc) | 0x400;
  *(float *)(param_1 + 0x1bf0) = fVar11 * 0.5;
  lVar6 = FUN_0251e98c(1);
  pfVar7 = (float *)(**(code **)(*(long *)(lVar6 + 0x13b0) + 0xf0))(lVar6 + 0x13b0);
  fVar11 = *pfVar7;
  if (*(int *)(param_1 + 0x178) == 0) {
    local_44 = 10;
    local_50 = 1.4013e-44;
    if ((*(byte *)(param_1 + 0x18f5) >> 2 & 1) != 0) goto LAB_0246257c;
  }
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
    iVar10 = (int)(fVar11 * 0.6 * (float)iVar10);
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
  iVar5 = *(int *)(param_1 + 0x178);
  if (iVar5 == 1) {
    lVar6 = FUN_0251e98c(1);
    pfVar7 = (float *)(**(code **)(*(long *)(lVar6 + 0x1380) + 0xf0))(lVar6 + 0x1380);
    fStack_4c = (float)(int)*(short *)(param_1 + 0x18e9) * 0.25;
    local_50 = (float)*(int *)(param_1 + 0x18e5) * 0.001;
    local_48 = (float)*(int *)(param_1 + 0x18eb) * 0.001;
    puVar8 = &DAT_054e9a58;
    if (*(undefined8 **)(param_1 + 0x4c8) != (undefined8 *)0x0) {
      puVar8 = *(undefined8 **)(param_1 + 0x4c8);
    }
    FUN_03eb4b60(*pfVar7 * 0.6,0x41200000,0x3e4ccccc,puVar8 + 0x4f,&local_50);
    iVar5 = *(int *)(param_1 + 0x178);
  }
  if (iVar5 != 0) {
    return;
  }
LAB_0246257c:
  puVar8 = *(undefined8 **)(param_1 + 0x60);
  if (puVar8 == (undefined8 *)0x0) {
    if (((DAT_052461c0 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_052461c0), iVar5 != 0)) {
      FUN_016fcf10(&DAT_05240280);
      FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
      __cxa_guard_release(&DAT_052461c0);
      puVar8 = &DAT_05240280;
    }
    else {
      puVar8 = &DAT_05240280;
    }
  }
  uVar9 = FUN_0170a6d0(puVar8,0);
  if ((uVar9 & 1) != 0) {
    *(undefined8 *)(param_1 + 0x1960) = *(undefined8 *)(param_1 + 0x18e0);
    *(undefined8 *)(param_1 + 0x1980) = *(undefined8 *)(param_1 + 0x1900);
    *(undefined8 *)(param_1 + 0x1968) = *(undefined8 *)(param_1 + 0x18e8);
    *(undefined8 *)(param_1 + 0x1988) = *(undefined8 *)(param_1 + 0x1908);
    *(undefined8 *)(param_1 + 0x1970) = *(undefined8 *)(param_1 + 0x18f0);
    *(undefined8 *)(param_1 + 0x1990) = *(undefined8 *)(param_1 + 0x1910);
    local_50 = 3.97969e-43;
    *(undefined8 *)(param_1 + 0x1978) = *(undefined8 *)(param_1 + 0x18f8);
    *(undefined8 *)(param_1 + 0x1999) = 0;
    *(undefined8 *)(param_1 + 0x19a1) = 0;
    *(undefined8 *)(param_1 + 0x19a9) = 0;
    *(undefined8 *)(param_1 + 0x19b1) = 0;
    *(undefined8 *)(param_1 + 0x19b9) = 0;
    *(undefined8 *)(param_1 + 0x19c1) = 0;
    *(undefined8 *)(param_1 + 0x19c9) = 0;
    *(undefined8 *)(param_1 + 0x19d1) = 0;
    *(undefined1 *)(param_1 + 0x19d9) = 0;
    *(undefined1 *)(param_1 + 0x1998) = *(undefined1 *)(param_1 + 0x1918);
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
    FUN_03ebb160(lVar6,0x11c);
  }
  return;
}


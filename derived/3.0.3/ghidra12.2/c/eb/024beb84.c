
void FUN_024beb84(long param_1)

{
  int iVar1;
  long *plVar2;
  char cVar3;
  short sVar4;
  short sVar5;
  uint3 uVar6;
  uint uVar7;
  int iVar8;
  long lVar9;
  float *pfVar10;
  float *pfVar11;
  undefined8 *puVar12;
  ulong uVar13;
  int iVar14;
  int iVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined8 local_90;
  undefined8 local_88;
  undefined4 local_80;
  float local_7c;
  float fStack_78;
  float local_74;
  
  pfVar11 = (float *)&local_90;
  sVar4 = *(short *)(param_1 + 0x1904);
  cVar3 = *(char *)(param_1 + 0x1922);
  fVar16 = (float)*(int *)(param_1 + 0x1900) * 0.001;
  fVar17 = (float)*(int *)(param_1 + 0x1906) * 0.001;
  lVar9 = FUN_0251e98c(1);
  pfVar10 = (float *)(**(code **)(*(long *)(lVar9 + 0x1380) + 0xf0))(lVar9 + 0x1380);
  local_90._4_4_ = (float)(int)*(short *)(param_1 + 0x190e) * 0.25;
  local_90._0_4_ = (float)*(int *)(param_1 + 0x190a) * 0.001;
  local_88 = (char *)CONCAT44(local_88._4_4_,(float)*(int *)(param_1 + 0x1910) * 0.001);
  if (cVar3 == '\0') {
    if (*(int *)(param_1 + 0x178) == 1) {
      pfVar11 = &local_7c;
      fStack_78 = (float)(int)*(short *)(param_1 + 0x18e9) * 0.25;
      puVar12 = &DAT_054e9a58;
      if (*(undefined8 **)(param_1 + 0x4c8) != (undefined8 *)0x0) {
        puVar12 = *(undefined8 **)(param_1 + 0x4c8);
      }
      local_7c = (float)*(int *)(param_1 + 0x18e5) * 0.001;
      local_74 = (float)*(int *)(param_1 + 0x18eb) * 0.001;
      goto LAB_024bece0;
    }
  }
  else {
    puVar12 = &DAT_054e9a58;
    if (*(undefined8 **)(param_1 + 0x4c8) != (undefined8 *)0x0) {
      puVar12 = *(undefined8 **)(param_1 + 0x4c8);
    }
LAB_024bece0:
    FUN_03eb4b60(*pfVar10 * 0.6,0x41200000,0x3e4ccccc,puVar12 + 0x4f,pfVar11);
  }
  iVar8 = FUN_006f0400(fVar16 - *(float *)(*(long *)(param_1 + 0x68) + 0x278),
                       fVar17 - *(float *)(*(long *)(param_1 + 0x68) + 0x280));
  uVar7 = (uint)iVar8 >> 0x10;
  lVar9 = FUN_0251e98c(1);
  pfVar11 = (float *)(**(code **)(*(long *)(lVar9 + 0x13b0) + 0xf0))(lVar9 + 0x13b0);
  fVar18 = *pfVar11;
  if (*(int *)(param_1 + 0x178) == 0) {
    local_7c = 1.4013e-44;
    local_90._0_4_ = 1.4013e-44;
    if ((*(byte *)(param_1 + 0x18f5) >> 2 & 1) == 0) goto LAB_024bed80;
  }
  else {
LAB_024bed80:
    plVar2 = &DAT_054e9a58;
    if (*(long **)(param_1 + 0x4c8) != (long *)0x0) {
      plVar2 = *(long **)(param_1 + 0x4c8);
    }
    lVar9 = (**(code **)(*plVar2 + 0x148))();
    iVar15 = iVar8 - *(int *)(lVar9 + 4);
    if (0xb60b5e < iVar15 + 0x5b05afU) {
      iVar14 = 0x15555560;
      iVar8 = -0x15555560;
      iVar15 = (int)(fVar18 * 0.6 * (float)iVar15);
      if (iVar15 < 1) {
        iVar14 = -0x5b05b0;
      }
      else {
        iVar8 = 0x5b05b0;
      }
      iVar1 = iVar15;
      if (iVar14 <= iVar15) {
        iVar1 = iVar14;
      }
      if (iVar8 <= iVar15) {
        iVar8 = iVar1;
      }
      iVar8 = iVar8 + *(int *)(lVar9 + 4);
    }
    *(int *)(lVar9 + 4) = iVar8;
  }
  iVar15 = *(int *)(param_1 + 0x190a);
  iVar8 = *(int *)(param_1 + 0x1910);
  sVar5 = *(short *)(param_1 + 0x190e);
  puVar12 = *(undefined8 **)(param_1 + 0x60);
  if (puVar12 == (undefined8 *)0x0) {
    if (((DAT_052461c0 & 1) != 0) || (iVar14 = __cxa_guard_acquire(&DAT_052461c0), iVar14 == 0)) {
      puVar12 = &DAT_05240280;
      goto LAB_024bee44;
    }
    FUN_016fcf10(&DAT_05240280);
    FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
    __cxa_guard_release(&DAT_052461c0);
    puVar12 = &DAT_05240280;
    if (DAT_052413b8 == 0) goto LAB_024beec8;
LAB_024bee4c:
    local_90._0_4_ = 1.4013e-45;
    uVar13 = FUN_0170a6d0(puVar12,*(uint *)(puVar12 + 0x2d3) >> 1 & 1);
  }
  else {
LAB_024bee44:
    if (puVar12[0x227] != 0) goto LAB_024bee4c;
LAB_024beec8:
    uVar13 = FUN_0170a6d0(puVar12,0);
  }
  if ((uVar13 & 1) == 0) {
    return;
  }
  if (*(int *)(param_1 + 0x178) != 0) {
    puVar12 = *(undefined8 **)(param_1 + 0x60);
    if (puVar12 == (undefined8 *)0x0) {
      if ((DAT_052461c0 & 1) == 0) {
        iVar8 = __cxa_guard_acquire(&DAT_052461c0);
        puVar12 = &DAT_05240280;
        if (iVar8 != 0) {
          FUN_016fcf10(&DAT_05240280);
          FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
          __cxa_guard_release(&DAT_052461c0);
        }
      }
      else {
        puVar12 = &DAT_05240280;
      }
    }
    local_90 = PTR_DAT_04bb2020 + 0x10;
    local_88 = "PlayerScoopReadyWait";
    FUN_017081d0(puVar12,&local_90,3,0,0);
    return;
  }
  if (*(short *)(param_1 + 0x6d4) == 0x31) {
    local_90 = (undefined *)0xfffe;
    FUN_0277d4ac(&local_90);
    *(undefined8 *)(param_1 + 0x1990) = 0;
    *(undefined8 *)(param_1 + 0x1998) = 0;
    iVar14 = (int)((float)(int)sVar4 * 0.25 * 4.0);
    *(undefined8 *)(param_1 + 0x19a0) = 0;
    *(undefined8 *)(param_1 + 0x19a8) = 0;
    *(undefined8 *)(param_1 + 0x19b0) = 0;
    *(undefined8 *)(param_1 + 0x19b8) = 0;
    *(undefined8 *)(param_1 + 0x19c0) = 0;
    *(undefined8 *)(param_1 + 0x1960) = *(undefined8 *)(param_1 + 0x18e0);
    *(undefined8 *)(param_1 + 0x1968) = *(undefined8 *)(param_1 + 0x18e8);
    *(undefined8 *)(param_1 + 0x1970) = *(undefined8 *)(param_1 + 0x18f0);
    *(undefined8 *)(param_1 + 0x1978) = *(undefined8 *)(param_1 + 0x18f8);
    if (0x7ffe < iVar14) {
      iVar14 = 0x7fff;
    }
    *(undefined8 *)(param_1 + 0x19c8) = 0;
    *(undefined8 *)(param_1 + 0x19d0) = 0;
    if (iVar14 < -0x7fff) {
      iVar14 = -0x8000;
    }
    *(undefined2 *)(param_1 + 0x19d8) = 0;
    *(ulong *)(param_1 + 0x1997) = *(ulong *)(param_1 + 0x1919);
    *(short *)(param_1 + 0x1984) = (short)iVar14;
    *(int *)(param_1 + 0x1980) = (int)(fVar16 * 999.99994);
    *(int *)(param_1 + 0x1986) = (int)(fVar17 * 999.99994);
    *(int *)(param_1 + 0x198a) = (int)((float)iVar15 * 0.001 * 999.99994);
    iVar15 = (int)((float)(int)sVar5 * 0.25 * 4.0);
    if (0x7ffe < iVar15) {
      iVar15 = 0x7fff;
    }
    if (iVar15 < -0x7fff) {
      iVar15 = -0x8000;
    }
    *(short *)(param_1 + 0x198e) = (short)iVar15;
    *(short *)(param_1 + 0x1994) = (short)uVar7;
    *(bool *)(param_1 + 0x199f) = (*(ulong *)(param_1 + 0x1919) & 0xffff) != 0xfffe;
    local_90 = (undefined *)CONCAT44(local_90._4_4_,0x31);
    *(int *)(param_1 + 0x1990) = (int)((float)iVar8 * 0.001 * 999.99994);
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
    lVar9 = 0;
    if (*(long *)(param_1 + 0x70) != 0) {
      lVar9 = *(long *)(param_1 + 0x70) + 0x278;
    }
    FUN_03ebb160(lVar9,0x31);
    return;
  }
  uVar6 = (uint3)((ulong)local_88 >> 0x28);
  local_90 = (undefined *)0x0;
  local_88 = (char *)CONCAT35(uVar6,0x100000000);
  local_80 = 0;
  switch(*(undefined4 *)(param_1 + 0x6d8)) {
  case 0:
    local_88 = (char *)((ulong)uVar6 << 0x28);
    local_88 = (char *)CONCAT44(local_88._4_4_,*(undefined4 *)(param_1 + 0x6d0));
    local_90 = *(undefined **)(param_1 + 0x6c8);
    goto LAB_024bf194;
  case 1:
    local_90 = *(undefined **)(param_1 + 0x6c8);
    local_88._0_5_ = CONCAT14(1,*(undefined4 *)(param_1 + 0x6d0));
    local_88 = (char *)CONCAT35(uVar6,(undefined5)local_88);
LAB_024bf194:
    FUN_02473fc8(param_1,&local_90);
    break;
  case 2:
  case 4:
  case 5:
    FUN_024735ac(param_1);
    break;
  case 3:
    FUN_0247430c(param_1,param_1 + 0x21a8);
    break;
  default:
    FUN_02373ee0(param_1,6,1,1);
  }
  return;
}


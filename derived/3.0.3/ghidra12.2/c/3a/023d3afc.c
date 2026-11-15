
/* WARNING: Removing unreachable block (ram,0x023d3e40) */

void FUN_023d3afc(long param_1)

{
  int iVar1;
  long *plVar2;
  ushort uVar3;
  int iVar4;
  bool bVar5;
  undefined4 uVar6;
  long lVar7;
  float *pfVar8;
  undefined4 *puVar9;
  ulong uVar10;
  int iVar11;
  byte bVar12;
  undefined8 *puVar13;
  int iVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined8 local_98;
  float local_90;
  float local_8c;
  float local_88;
  undefined1 local_84;
  float local_7c [3];
  
  uVar3 = *(ushort *)(param_1 + 0x1900);
  fVar18 = (float)*(int *)(param_1 + 0x1902) * 0.001;
  fVar19 = (float)(int)*(short *)(param_1 + 0x1906) * 0.25;
  fVar17 = (float)*(int *)(param_1 + 0x1908) * 0.001;
  if (*(char *)(param_1 + 0x3a5) == '\0') {
    bVar5 = true;
  }
  else {
    uVar6 = (**(code **)(*(long *)(param_1 + 0x390) + (ulong)*(byte *)(param_1 + 0x3a4) * 8))
                      (param_1 + 0x390);
    *(undefined4 *)(param_1 + 0x398) = uVar6;
    bVar5 = *(char *)(param_1 + 0x3a5) == '\0';
  }
  bVar12 = *(byte *)(param_1 + 0x1ee8);
  fVar20 = 0.0;
  local_98 = CONCAT44(fVar18 + 1.0,(undefined4)local_98);
  if (7 < bVar12) {
    bVar12 = 0xff;
  }
  local_98 = CONCAT71(local_98._1_7_,bVar12);
  iVar14 = *(int *)(param_1 + 0x3a0);
  if (!bVar5) {
    if (iVar14 == 0) {
      fVar20 = 1.0;
    }
    else {
      fVar20 = 1.0;
      if (*(int *)(param_1 + 0x398) < iVar14) {
        fVar15 = (float)*(int *)(param_1 + 0x398) / (float)iVar14;
        fVar16 = 1.0;
        if (fVar15 <= 1.0) {
          fVar16 = fVar15;
        }
        fVar20 = 0.0;
        if (0.0 <= fVar15) {
          fVar20 = fVar16;
        }
      }
    }
  }
  local_84 = 1;
  local_88 = fVar20 * 0.9 + 0.1;
  local_90 = fVar19;
  local_8c = fVar17 + -2.5;
  FUN_016fa230(*(undefined4 *)(param_1 + 0x388),&local_98,*(undefined4 *)(param_1 + 0x230),1);
  lVar7 = FUN_0251e98c(1);
  pfVar8 = (float *)(**(code **)(*(long *)(lVar7 + 0x13b0) + 0xf0))(lVar7 + 0x13b0);
  fVar20 = *pfVar8;
  lVar7 = FUN_0251e98c(1);
  puVar9 = (undefined4 *)(**(code **)(*(long *)(lVar7 + 0x1410) + 0xf0))(lVar7 + 0x1410);
  uVar6 = *puVar9;
  if (*(int *)(param_1 + 0x178) == 0) {
    local_7c[0] = 1.4013e-44;
    local_98 = CONCAT44(local_98._4_4_,10);
    if ((*(byte *)(param_1 + 0x18f5) >> 2 & 1) != 0) goto LAB_023d3d88;
  }
  iVar14 = (uint)uVar3 * 0x10000;
  plVar2 = &DAT_054e9a58;
  if (*(long **)(param_1 + 0x4c8) != (long *)0x0) {
    plVar2 = *(long **)(param_1 + 0x4c8);
  }
  lVar7 = (**(code **)(*plVar2 + 0x148))();
  iVar11 = iVar14 - *(int *)(lVar7 + 4);
  if (0xb60b5e < iVar11 + 0x5b05afU) {
    iVar4 = 0x15555560;
    iVar14 = -0x15555560;
    iVar11 = (int)(fVar20 * 0.5 * (float)iVar11);
    if (iVar11 < 1) {
      iVar4 = -0x5b05b0;
    }
    else {
      iVar14 = 0x5b05b0;
    }
    iVar1 = iVar11;
    if (iVar4 <= iVar11) {
      iVar1 = iVar4;
    }
    if (iVar14 <= iVar11) {
      iVar14 = iVar1;
    }
    iVar14 = iVar14 + *(int *)(lVar7 + 4);
  }
  *(int *)(lVar7 + 4) = iVar14;
LAB_023d3d88:
  local_7c[1] = 0.0;
  puVar13 = &DAT_054e9a58;
  if (*(undefined8 **)(param_1 + 0x4c8) != (undefined8 *)0x0) {
    puVar13 = *(undefined8 **)(param_1 + 0x4c8);
  }
  local_90 = *(float *)(puVar13 + 0x50);
  local_98 = puVar13[0x4f] & 0xffffffff;
  local_7c[0] = fVar18;
  local_7c[2] = fVar17;
  FUN_03eb4b60(uVar6,0x41200000,0x3e4ccccc,&local_98,local_7c);
  *(undefined4 *)(puVar13 + 0x4f) = (undefined4)local_98;
  *(float *)(puVar13 + 0x50) = local_90;
  puVar13 = *(undefined8 **)(param_1 + 0x60);
  if (puVar13 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar14 = __cxa_guard_acquire(&DAT_052461c0);
      puVar13 = &DAT_05240280;
      if (iVar14 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      puVar13 = &DAT_05240280;
    }
  }
  if (puVar13[0x227] == 0) {
    local_7c[0] = 0.0;
    local_98 = (ulong)local_98._4_4_ << 0x20;
  }
  else {
    local_7c[0] = (float)(*(uint *)(puVar13 + 0x2d3) >> 1 & 1);
    local_98 = CONCAT44(local_98._4_4_,*(uint *)(puVar13 + 0x2d3) >> 1) & 0xffffffff00000001;
    uVar10 = FUN_03850368(puVar13[0x227],local_7c[0]);
    fVar20 = local_7c[0];
    if (((((uVar10 & 1) == 0) && (puVar13[0x227] != 0)) &&
        (uVar10 = FUN_03850368(puVar13[0x227],local_7c[0]), (uVar10 & 1) == 0)) &&
       (uVar10 = FUN_0384fca4(puVar13[0x227],fVar20), (uVar10 & 1) == 0)) {
      return;
    }
  }
  if (*(int *)(param_1 + 0x178) == 0) {
    *(undefined8 *)(param_1 + 0x1988) = 0;
    *(undefined8 *)(param_1 + 0x1990) = 0;
    *(undefined8 *)(param_1 + 0x1998) = 0;
    *(undefined8 *)(param_1 + 0x19a0) = 0;
    *(undefined8 *)(param_1 + 0x19a8) = 0;
    *(undefined8 *)(param_1 + 0x19b0) = 0;
    *(undefined8 *)(param_1 + 0x19b8) = 0;
    *(undefined8 *)(param_1 + 0x19c0) = 0;
    *(undefined8 *)(param_1 + 0x19c8) = 0;
    *(undefined8 *)(param_1 + 0x19d0) = 0;
    *(undefined8 *)(param_1 + 0x1960) = *(undefined8 *)(param_1 + 0x18e0);
    *(undefined2 *)(param_1 + 0x19d8) = 0;
    *(ushort *)(param_1 + 0x1980) = uVar3;
    *(undefined8 *)(param_1 + 0x1968) = *(undefined8 *)(param_1 + 0x18e8);
    *(undefined8 *)(param_1 + 0x1970) = *(undefined8 *)(param_1 + 0x18f0);
    *(undefined8 *)(param_1 + 0x1978) = *(undefined8 *)(param_1 + 0x18f8);
    *(int *)(param_1 + 0x1982) = (int)(fVar18 * 999.99994);
    iVar14 = (int)(fVar19 * 4.0);
    if (0x7ffe < iVar14) {
      iVar14 = 0x7fff;
    }
    if (iVar14 < -0x7fff) {
      iVar14 = -0x8000;
    }
    *(short *)(param_1 + 0x1986) = (short)iVar14;
    *(int *)(param_1 + 0x1988) = (int)(fVar17 * 999.99994);
    local_98 = CONCAT44(local_98._4_4_,0xe4);
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
    lVar7 = 0;
    if (*(long *)(param_1 + 0x70) != 0) {
      lVar7 = *(long *)(param_1 + 0x70) + 0x278;
    }
    FUN_03ebb160(lVar7,0xe4);
  }
  return;
}



/* WARNING: Removing unreachable block (ram,0x024323a4) */

void FUN_024320f0(long param_1)

{
  byte *pbVar1;
  int iVar2;
  long *plVar3;
  byte *pbVar4;
  uint uVar5;
  ushort uVar6;
  int iVar7;
  undefined *puVar8;
  long lVar9;
  undefined4 *puVar10;
  float *pfVar11;
  ulong uVar12;
  byte bVar13;
  byte bVar14;
  undefined8 *puVar15;
  uint *puVar16;
  int iVar17;
  int iVar18;
  float fVar19;
  float local_6c [3];
  ulong local_60;
  undefined4 local_58;
  
  iVar17 = *(int *)(param_1 + 0x18e5);
  iVar18 = *(int *)(param_1 + 0x18eb);
  lVar9 = FUN_0251e98c(1);
  puVar10 = (undefined4 *)(**(code **)(*(long *)(lVar9 + 0x1380) + 0xf0))(lVar9 + 0x1380);
  local_6c[1] = 0.0;
  puVar15 = &DAT_054e9a58;
  if (*(undefined8 **)(param_1 + 0x4c8) != (undefined8 *)0x0) {
    puVar15 = *(undefined8 **)(param_1 + 0x4c8);
  }
  local_58 = *(undefined4 *)(puVar15 + 0x50);
  local_60 = puVar15[0x4f] & 0xffffffff;
  local_6c[0] = (float)iVar17 * 0.001;
  local_6c[2] = (float)iVar18 * 0.001;
  FUN_03eb4b60(*puVar10,0x41200000,0x3e4ccccc,&local_60,local_6c);
  *(undefined4 *)(puVar15 + 0x4f) = (undefined4)local_60;
  *(undefined4 *)(puVar15 + 0x50) = local_58;
  uVar6 = *(ushort *)(param_1 + 0x18ef);
  lVar9 = FUN_0251e98c(1);
  pfVar11 = (float *)(**(code **)(*(long *)(lVar9 + 0x13b0) + 0xf0))(lVar9 + 0x13b0);
  fVar19 = *pfVar11;
  if (*(int *)(param_1 + 0x178) == 0) {
    local_6c[0] = 1.4013e-44;
    local_60 = CONCAT44(local_60._4_4_,10);
    if ((*(byte *)(param_1 + 0x18f5) >> 2 & 1) == 0) goto LAB_02432240;
  }
  else {
LAB_02432240:
    iVar17 = (uint)uVar6 * 0x10000;
    plVar3 = &DAT_054e9a58;
    if (*(long **)(param_1 + 0x4c8) != (long *)0x0) {
      plVar3 = *(long **)(param_1 + 0x4c8);
    }
    lVar9 = (**(code **)(*plVar3 + 0x148))();
    iVar18 = iVar17 - *(int *)(lVar9 + 4);
    if (0xb60b5e < iVar18 + 0x5b05afU) {
      iVar7 = 0x15555560;
      iVar17 = -0x15555560;
      iVar18 = (int)(fVar19 * 0.6 * (float)iVar18);
      if (iVar18 < 1) {
        iVar7 = -0x5b05b0;
      }
      else {
        iVar17 = 0x5b05b0;
      }
      iVar2 = iVar18;
      if (iVar7 <= iVar18) {
        iVar2 = iVar7;
      }
      if (iVar17 <= iVar18) {
        iVar17 = iVar2;
      }
      iVar17 = iVar17 + *(int *)(lVar9 + 4);
    }
    *(int *)(lVar9 + 4) = iVar17;
    if (*(int *)(param_1 + 0x178) != 0) goto LAB_024322e0;
  }
  FUN_0231cb70(param_1,1);
  pbVar1 = (byte *)(param_1 + 0x1ee8);
  if (*(long *)PTR_DAT_04bb4718 == 0) {
    if ((DAT_054f0960 & 1) == 0) {
      iVar17 = __cxa_guard_acquire(&DAT_054f0960);
      puVar16 = (uint *)&DAT_054f0958;
      if (iVar17 != 0) {
        DAT_054f0958 = 0;
        __cxa_guard_release(&DAT_054f0960);
      }
    }
    else {
      puVar16 = (uint *)&DAT_054f0958;
    }
  }
  else {
    puVar16 = (uint *)(*(long *)PTR_DAT_04bb4718 + 0x204);
    if ((ulong)*pbVar1 < 8) {
      puVar16 = puVar16 + (ulong)*pbVar1 * 2;
    }
  }
  local_60 = CONCAT44(local_60._4_4_,0x1e);
  uVar5 = *puVar16;
  uVar12 = FUN_02430320(param_1);
  puVar8 = PTR_DAT_04bb39b0;
  if (((uVar5 >> 0x1e & 1) != 0) || ((uVar12 & 1) != 0)) {
LAB_02432498:
    local_60 = CONCAT44(local_60._4_4_,0xae);
    *(undefined8 *)(param_1 + 0x18c0) = *(undefined8 *)(param_1 + 0x1940);
    *(undefined8 *)(param_1 + 0x18c0) = 0;
    *(undefined8 *)(param_1 + 0x18c8) = *(undefined8 *)(param_1 + 0x1948);
    *(undefined8 *)(param_1 + 0x18c8) = 0;
    *(undefined8 *)(param_1 + 0x18d0) = *(undefined8 *)(param_1 + 0x1950);
    *(undefined8 *)(param_1 + 0x18d0) = 0;
    *(undefined2 *)(param_1 + 0x18d8) = *(undefined2 *)(param_1 + 0x1958);
    *(undefined8 *)(param_1 + 0x18a0) = *(undefined8 *)(param_1 + 0x1920);
    *(undefined8 *)(param_1 + 0x18a0) = 0;
    *(undefined8 *)(param_1 + 0x18a8) = *(undefined8 *)(param_1 + 0x1928);
    *(undefined8 *)(param_1 + 0x18a8) = 0;
    *(undefined8 *)(param_1 + 0x18b0) = *(undefined8 *)(param_1 + 0x1930);
    *(undefined8 *)(param_1 + 0x18b0) = 0;
    *(undefined8 *)(param_1 + 0x18b8) = *(undefined8 *)(param_1 + 0x1938);
    *(undefined8 *)(param_1 + 0x18b8) = 0;
    *(undefined8 *)(param_1 + 0x1880) = *(undefined8 *)(param_1 + 0x1900);
    *(undefined8 *)(param_1 + 0x1880) = 0;
    *(undefined8 *)(param_1 + 0x1888) = *(undefined8 *)(param_1 + 0x1908);
    *(undefined8 *)(param_1 + 0x1888) = 0;
    *(undefined8 *)(param_1 + 0x1890) = *(undefined8 *)(param_1 + 0x1910);
    *(undefined8 *)(param_1 + 0x1890) = 0;
    *(undefined8 *)(param_1 + 0x1898) = *(undefined8 *)(param_1 + 0x1918);
    *(undefined8 *)(param_1 + 0x1898) = 0;
    *(undefined8 *)(param_1 + 0x1860) = *(undefined8 *)(param_1 + 0x18e0);
    *(undefined8 *)(param_1 + 0x1868) = *(undefined8 *)(param_1 + 0x18e8);
    *(undefined8 *)(param_1 + 0x1870) = *(undefined8 *)(param_1 + 0x18f0);
    *(undefined8 *)(param_1 + 0x1878) = *(undefined8 *)(param_1 + 0x18f8);
    lVar9 = 0;
    if (*(long *)(param_1 + 0x70) != 0) {
      lVar9 = *(long *)(param_1 + 0x70) + 0x278;
    }
    FUN_03ebb160(lVar9,0xae);
    return;
  }
  if (((**(char **)(PTR_DAT_04bc39e0 + 8) != '\0') || (**(char **)(PTR_DAT_04bc3a88 + 8) != '\0'))
     && ((lVar9 = *(long *)PTR_DAT_04bb39b0, lVar9 != 0 && (*(int *)(lVar9 + 0x15c) != 0)))) {
    pbVar4 = PTR_DAT_04bb32e0;
    if (*(int *)(lVar9 + 0x15c) != 0) {
      pbVar4 = (byte *)(lVar9 + 0x158);
    }
    bVar14 = *pbVar1;
    bVar13 = *pbVar4;
    if (7 < bVar13) {
      bVar13 = 0xff;
    }
    if (7 < bVar14) {
      bVar14 = 0xff;
    }
    if (bVar13 != bVar14) goto LAB_02432498;
  }
  iVar17 = FUN_00a74b78(pbVar1);
  local_60 = CONCAT44(local_60._4_4_,iVar17);
  if (((iVar17 == 0xd) && (lVar9 = *(long *)puVar8, lVar9 != 0)) && (*(int *)(lVar9 + 0x15c) != 0))
  {
    pbVar4 = PTR_DAT_04bb32e0;
    if (*(int *)(lVar9 + 0x15c) != 0) {
      pbVar4 = (byte *)(lVar9 + 0x158);
    }
    bVar14 = *pbVar1;
    bVar13 = *pbVar4;
    if (7 < bVar13) {
      bVar13 = 0xff;
    }
    if (7 < bVar14) {
      bVar14 = 0xff;
    }
    if (bVar13 != bVar14) goto LAB_02432498;
  }
LAB_024322e0:
  puVar15 = *(undefined8 **)(param_1 + 0x60);
  if (puVar15 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar17 = __cxa_guard_acquire(&DAT_052461c0);
      puVar15 = &DAT_05240280;
      if (iVar17 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      puVar15 = &DAT_05240280;
    }
  }
  FUN_01713640(*(undefined4 *)(param_1 + 0x1cb0),puVar15);
  return;
}


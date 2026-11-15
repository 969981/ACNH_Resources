
void FUN_02439774(long param_1)

{
  int iVar1;
  uint *puVar2;
  short sVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  long lVar7;
  ulong uVar8;
  long *plVar9;
  int iVar10;
  undefined8 *puVar11;
  undefined4 local_44;
  undefined *local_40;
  char *pcStack_38;
  int local_18;
  undefined4 local_14;
  
  if (*(int *)(param_1 + 0x178) != 0) {
    iVar6 = (uint)*(ushort *)(param_1 + 0x18ef) * 0x10000;
    plVar9 = &DAT_054e9a58;
    if (*(long **)(param_1 + 0x4c8) != (long *)0x0) {
      plVar9 = *(long **)(param_1 + 0x4c8);
    }
    lVar7 = (**(code **)(*plVar9 + 0x148))();
    iVar10 = iVar6 - *(int *)(lVar7 + 4);
    if (0xb60b5e < iVar10 + 0x5b05afU) {
      iVar4 = 0x15555560;
      iVar6 = -0x15555560;
      iVar10 = (int)((float)iVar10 * 0.3);
      if (iVar10 < 1) {
        iVar4 = -0x5b05b0;
      }
      else {
        iVar6 = 0x5b05b0;
      }
      iVar1 = iVar10;
      if (iVar4 <= iVar10) {
        iVar1 = iVar4;
      }
      if (iVar6 <= iVar10) {
        iVar6 = iVar1;
      }
      iVar6 = iVar6 + *(int *)(lVar7 + 4);
    }
    *(int *)(lVar7 + 4) = iVar6;
    goto LAB_024399a4;
  }
  local_44 = *(undefined4 *)(param_1 + 0x230);
  sVar3 = *(short *)PTR_DAT_04bb6298;
  if (sVar3 == -1) {
LAB_0243989c:
    FUN_016f742c(&local_18,&local_44,0);
    if (*(int *)(param_1 + 0x178) == 0) goto LAB_024398b4;
  }
  else {
    local_40 = (undefined *)CONCAT44(local_40._4_4_,1);
    puVar2 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar3 * 8);
    if (0xff < (uint)(int)sVar3) {
      puVar2 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((*puVar2 >> 1 & 1) == 0) goto LAB_0243989c;
    local_18 = 0;
LAB_024398b4:
    local_14 = 10;
    local_40 = (undefined *)CONCAT44(local_40._4_4_,10);
    if ((*(byte *)(param_1 + 0x18f5) >> 2 & 1) != 0) goto LAB_024399a4;
  }
  plVar9 = &DAT_054e9a58;
  if (*(long **)(param_1 + 0x4c8) != (long *)0x0) {
    plVar9 = *(long **)(param_1 + 0x4c8);
  }
  lVar7 = (**(code **)(*plVar9 + 0x148))();
  iVar10 = local_18 - *(int *)(lVar7 + 4);
  iVar6 = local_18;
  if (0xb60b5e < iVar10 + 0x5b05afU) {
    iVar4 = 0x15555560;
    iVar6 = -0x15555560;
    iVar10 = (int)((float)iVar10 * 0.3);
    if (iVar10 < 1) {
      iVar4 = -0x5b05b0;
    }
    else {
      iVar6 = 0x5b05b0;
    }
    iVar1 = iVar10;
    if (iVar4 <= iVar10) {
      iVar1 = iVar4;
    }
    if (iVar6 <= iVar10) {
      iVar6 = iVar1;
    }
    iVar6 = iVar6 + *(int *)(lVar7 + 4);
  }
  *(int *)(lVar7 + 4) = iVar6;
LAB_024399a4:
  puVar11 = *(undefined8 **)(param_1 + 0x60);
  if (puVar11 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar6 = __cxa_guard_acquire(&DAT_052461c0);
      puVar11 = &DAT_05240280;
      if (iVar6 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      puVar11 = &DAT_05240280;
    }
  }
  local_14 = 0;
  local_40 = (undefined *)((ulong)local_40 & 0xffffffff00000000);
  if ((((puVar11[0x227] == 0) ||
       (uVar8 = FUN_03850368(puVar11[0x227],0), uVar5 = local_14, (uVar8 & 1) != 0)) ||
      (puVar11[0x227] == 0)) ||
     ((uVar8 = FUN_03850368(puVar11[0x227],local_14), (uVar8 & 1) != 0 ||
      (uVar8 = FUN_0384fca4(puVar11[0x227],uVar5), (uVar8 & 1) != 0)))) {
    if (*(int *)(param_1 + 0x178) == 0) {
      lVar7 = *(long *)(*(long *)(param_1 + 0x60) + 0x1138);
      local_40 = PTR_DAT_04bb2020 + 0x10;
      pcStack_38 = "GymnasticsActionNum";
      if (((lVar7 != 0) && (lVar7 = *(long *)(lVar7 + 0x78), lVar7 != 0)) &&
         (plVar9 = *(long **)(lVar7 + 0x48), plVar9 != (long *)0x0)) {
        (**(code **)(*plVar9 + 0x28))
                  (plVar9,&local_40,*(undefined4 *)(*(long *)PTR_DAT_04bb47c0 + 0x14));
      }
      local_40 = (undefined *)CONCAT44(local_40._4_4_,0x11e);
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
      lVar7 = 0;
      if (*(long *)(param_1 + 0x70) != 0) {
        lVar7 = *(long *)(param_1 + 0x70) + 0x278;
      }
      FUN_03ebb160(lVar7,0x11e);
    }
    else {
      FUN_023164ec(param_1,6);
    }
  }
  return;
}



void FUN_02402804(long param_1)

{
  int iVar1;
  uint *puVar2;
  long *plVar3;
  short sVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  float *pfVar8;
  int iVar9;
  undefined8 *puVar10;
  float fVar11;
  undefined *local_48;
  char *pcStack_40;
  undefined4 local_34;
  int local_28 [2];
  
  local_34 = *(undefined4 *)(param_1 + 0x230);
  sVar4 = *(short *)PTR_DAT_04bb6298;
  if (sVar4 == -1) {
LAB_0240287c:
    FUN_016f742c(local_28,&local_34,0);
  }
  else {
    local_48 = (undefined *)CONCAT44(local_48._4_4_,1);
    puVar2 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar4 * 8);
    if (0xff < (uint)(int)sVar4) {
      puVar2 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((*puVar2 >> 1 & 1) == 0) goto LAB_0240287c;
    local_28[0] = 0;
  }
  lVar7 = FUN_0251e98c(1);
  pfVar8 = (float *)(**(code **)(*(long *)(lVar7 + 0x13b0) + 0xf0))(lVar7 + 0x13b0);
  fVar11 = *pfVar8;
  if (*(int *)(param_1 + 0x178) == 0) {
    local_28[1] = 10;
    local_48 = (undefined *)CONCAT44(local_48._4_4_,10);
    if ((*(byte *)(param_1 + 0x18f5) >> 2 & 1) != 0) goto LAB_0240299c;
  }
  plVar3 = &DAT_054e9a58;
  if (*(long **)(param_1 + 0x4c8) != (long *)0x0) {
    plVar3 = *(long **)(param_1 + 0x4c8);
  }
  lVar7 = (**(code **)(*plVar3 + 0x148))();
  iVar9 = local_28[0] - *(int *)(lVar7 + 4);
  iVar6 = local_28[0];
  if (0xb60b5e < iVar9 + 0x5b05afU) {
    iVar5 = 0x15555560;
    iVar6 = -0x15555560;
    iVar9 = (int)(fVar11 * (float)iVar9);
    if (iVar9 < 1) {
      iVar5 = -0x5b05b0;
    }
    else {
      iVar6 = 0x5b05b0;
    }
    iVar1 = iVar9;
    if (iVar5 <= iVar9) {
      iVar1 = iVar5;
    }
    if (iVar6 <= iVar9) {
      iVar6 = iVar1;
    }
    iVar6 = iVar6 + *(int *)(lVar7 + 4);
  }
  *(int *)(lVar7 + 4) = iVar6;
LAB_0240299c:
  if (*(int *)(param_1 + 0x1c04) == 0x5a) {
    local_48 = (undefined *)CONCAT44(local_48._4_4_,0xed);
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
    FUN_03ebb160(lVar7,0xed);
  }
  else if (*(int *)(param_1 + 0x1c04) == 0x46) {
    puVar10 = *(undefined8 **)(param_1 + 0x60);
    if (puVar10 == (undefined8 *)0x0) {
      if ((DAT_052461c0 & 1) == 0) {
        iVar6 = __cxa_guard_acquire(&DAT_052461c0);
        puVar10 = &DAT_05240280;
        if (iVar6 != 0) {
          FUN_016fcf10(&DAT_05240280);
          FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
          __cxa_guard_release(&DAT_052461c0);
        }
      }
      else {
        puVar10 = &DAT_05240280;
      }
    }
    local_48 = PTR_DAT_04bb2020 + 0x10;
    pcStack_40 = "MaReShocked";
    FUN_017081d0(puVar10,&local_48,6,1,0);
  }
  return;
}


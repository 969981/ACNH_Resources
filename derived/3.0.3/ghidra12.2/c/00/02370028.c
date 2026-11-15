
/* WARNING: Type propagation algorithm not settling */

void FUN_02370028(long param_1)

{
  int iVar1;
  uint *puVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  float *pfVar7;
  ulong uVar8;
  int iVar9;
  undefined8 *puVar10;
  long *plVar11;
  float fVar12;
  undefined4 local_44;
  undefined8 local_40;
  char *pcStack_38;
  int local_28;
  undefined4 local_24;
  
  if ((*(char *)(param_1 + 0xc24) == '\0') &&
     (plVar11 = *(long **)(param_1 + 0x60), plVar11 != (long *)0x0)) {
    if (((*PTR_DAT_04bb37a0 & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(PTR_DAT_04bb37a0), iVar5 != 0)) {
      *(undefined **)PTR_DAT_04bb3798 = PTR_DAT_04bb37a8 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb37a0);
    }
    uVar8 = (**(code **)(*plVar11 + 0x10))(plVar11,PTR_DAT_04bb3798);
    if ((uVar8 & 1) != 0) {
      if (*(char *)plVar11[0x17cb] != '\0') {
        if ((char)plVar11[0x17f0] == '\0') {
          return;
        }
        if ((int)plVar11[0x17c3] != 2) {
          return;
        }
      }
      puVar10 = *(undefined8 **)(param_1 + 0x60);
      if (puVar10 == (undefined8 *)0x0) {
        if (((DAT_052461c0 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_052461c0), iVar5 != 0)) {
          FUN_016fcf10(&DAT_05240280);
          FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
          __cxa_guard_release(&DAT_052461c0);
          puVar10 = &DAT_05240280;
        }
        else {
          puVar10 = &DAT_05240280;
        }
      }
      local_40 = PTR_DAT_04bb2020 + 0x10;
      pcStack_38 = "PlayerBeeMedicine";
      FUN_017081d0(puVar10,&local_40,6,1,0);
      *(undefined1 *)(param_1 + 0xc24) = 1;
    }
  }
  local_44 = *(undefined4 *)(param_1 + 0x230);
  sVar3 = *(short *)PTR_DAT_04bb6298;
  if (sVar3 == -1) {
LAB_023700a8:
    FUN_016f742c(&local_28,&local_44,0);
  }
  else {
    local_40 = (undefined *)CONCAT44(local_40._4_4_,1);
    puVar2 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar3 * 8);
    if (0xff < (uint)(int)sVar3) {
      puVar2 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((*puVar2 >> 1 & 1) == 0) goto LAB_023700a8;
    local_28 = 0;
  }
  lVar6 = FUN_0251e98c(1);
  pfVar7 = (float *)(**(code **)(*(long *)(lVar6 + 0x13b0) + 0xf0))(lVar6 + 0x13b0);
  fVar12 = *pfVar7;
  if (*(int *)(param_1 + 0x178) == 0) {
    local_24 = 10;
    local_40 = (undefined *)CONCAT44(local_40._4_4_,10);
    if ((*(byte *)(param_1 + 0x18f5) >> 2 & 1) == 0) goto LAB_02370138;
  }
  else {
LAB_02370138:
    plVar11 = &DAT_054e9a58;
    if (*(long **)(param_1 + 0x4c8) != (long *)0x0) {
      plVar11 = *(long **)(param_1 + 0x4c8);
    }
    lVar6 = (**(code **)(*plVar11 + 0x148))();
    iVar9 = local_28 - *(int *)(lVar6 + 4);
    iVar5 = local_28;
    if (0xb60b5e < iVar9 + 0x5b05afU) {
      iVar4 = 0x15555560;
      iVar5 = -0x15555560;
      iVar9 = (int)(fVar12 * (float)iVar9);
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
  }
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
  local_24 = 0;
  local_40 = (undefined *)CONCAT44(local_40._4_4_,2);
  if ((puVar10[0x227] == 0) || (uVar8 = FUN_03850890(puVar10[0x227],2,0,0), (uVar8 & 1) == 0)) {
LAB_02370254:
    puVar10 = *(undefined8 **)(param_1 + 0x60);
    if (puVar10 == (undefined8 *)0x0) goto LAB_0237025c;
  }
  else {
    plVar11 = *(long **)(param_1 + 0x60);
    if (plVar11 != (long *)0x0) {
      if (((*PTR_DAT_04bb37a0 & 1) == 0) &&
         (iVar5 = __cxa_guard_acquire(PTR_DAT_04bb37a0), iVar5 != 0)) {
        *(undefined **)PTR_DAT_04bb3798 = PTR_DAT_04bb37a8 + 0x10;
        __cxa_guard_release(PTR_DAT_04bb37a0);
      }
      uVar8 = (**(code **)(*plVar11 + 0x10))(plVar11,PTR_DAT_04bb3798);
      if ((uVar8 & 1) != 0) {
        *(undefined1 *)(plVar11 + 0x17f0) = 0;
        *(undefined1 *)(param_1 + 0xc25) = 1;
      }
      goto LAB_02370254;
    }
LAB_0237025c:
    if (((DAT_052461c0 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_052461c0), iVar5 != 0)) {
      FUN_016fcf10(&DAT_05240280);
      FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
      __cxa_guard_release(&DAT_052461c0);
      puVar10 = &DAT_05240280;
      lVar6 = DAT_052413b8;
      goto joined_r0x02370278;
    }
    puVar10 = &DAT_05240280;
  }
  lVar6 = puVar10[0x227];
joined_r0x02370278:
  if (lVar6 == 0) {
    uVar8 = FUN_0170a6d0(puVar10,0);
  }
  else {
    local_40._4_4_ = (undefined4)((ulong)local_40 >> 0x20);
    local_40 = (undefined *)CONCAT44(local_40._4_4_,1);
    uVar8 = FUN_0170a6d0(puVar10,*(uint *)(puVar10 + 0x2d3) >> 1 & 1);
  }
  if ((uVar8 & 1) != 0) {
    local_40._4_4_ = (undefined4)((ulong)local_40 >> 0x20);
    local_40 = (undefined *)CONCAT44(local_40._4_4_,0xbf);
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
    lVar6 = 0;
    if (*(long *)(param_1 + 0x70) != 0) {
      lVar6 = *(long *)(param_1 + 0x70) + 0x278;
    }
    FUN_03ebb160(lVar6,0xbf);
  }
  return;
}


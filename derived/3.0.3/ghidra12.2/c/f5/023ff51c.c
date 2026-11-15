
void FUN_023ff51c(long param_1)

{
  int iVar1;
  long *plVar2;
  int iVar3;
  long lVar4;
  undefined4 *puVar5;
  ulong uVar6;
  undefined8 *puVar7;
  int iVar8;
  int iVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined *local_70;
  char *local_68;
  float local_5c;
  undefined4 local_58;
  float local_54;
  
  iVar8 = *(int *)(param_1 + 0x1900);
  iVar9 = *(int *)(param_1 + 0x1906);
  lVar4 = FUN_0251e98c(1);
  puVar5 = (undefined4 *)(**(code **)(*(long *)(lVar4 + 0x1380) + 0xf0))(lVar4 + 0x1380);
  local_58 = 0;
  puVar7 = &DAT_054e9a58;
  if (*(undefined8 **)(param_1 + 0x4c8) != (undefined8 *)0x0) {
    puVar7 = *(undefined8 **)(param_1 + 0x4c8);
  }
  local_70 = (undefined *)(puVar7[0x4f] & 0xffffffff);
  local_68 = (char *)CONCAT44(local_68._4_4_,*(undefined4 *)(puVar7 + 0x50));
  local_5c = (float)iVar8 * 0.001;
  local_54 = (float)iVar9 * 0.001;
  FUN_03eb4b60(*puVar5,0x41200000,0x3e4ccccc,&local_70,&local_5c);
  *(undefined4 *)(puVar7 + 0x4f) = local_70._0_4_;
  *(undefined4 *)(puVar7 + 0x50) = local_68._0_4_;
  fVar10 = (float)*(int *)(param_1 + 0x190a) * 0.001 - *(float *)(*(long *)(param_1 + 0x68) + 0x278)
  ;
  fVar11 = (float)*(int *)(param_1 + 0x1910) * 0.001 - *(float *)(*(long *)(param_1 + 0x68) + 0x280)
  ;
  fVar12 = SQRT(fVar10 * fVar10 + 0.0 + fVar11 * fVar11);
  if (0.0 < fVar12) {
    fVar10 = fVar10 * (1.0 / fVar12);
    fVar11 = fVar11 * (1.0 / fVar12);
    fVar12 = SQRT(fVar10 * fVar10 + 0.0 + fVar11 * fVar11);
  }
  if (0.0 < fVar12) {
    fVar10 = (1.0 / fVar12) * fVar10;
    fVar11 = fVar11 * (1.0 / fVar12);
  }
  if ((fVar10 == 0.0) && (fVar11 == 0.0)) {
    iVar8 = 0;
    iVar9 = 0;
    if (*(int *)(param_1 + 0x178) != 0) goto LAB_023ff6fc;
LAB_023ff698:
    iVar8 = iVar9;
    local_5c = 1.4013e-44;
    local_70 = (undefined *)CONCAT44(local_70._4_4_,10);
    if ((*(byte *)(param_1 + 0x18f5) >> 2 & 1) == 0) goto LAB_023ff6fc;
    iVar8 = 0;
    puVar7 = *(undefined8 **)(param_1 + 0x60);
  }
  else {
    iVar8 = FUN_006f0400();
    iVar9 = iVar8;
    if (*(int *)(param_1 + 0x178) == 0) goto LAB_023ff698;
LAB_023ff6fc:
    plVar2 = &DAT_054e9a58;
    if (*(long **)(param_1 + 0x4c8) != (long *)0x0) {
      plVar2 = *(long **)(param_1 + 0x4c8);
    }
    lVar4 = (**(code **)(*plVar2 + 0x148))();
    iVar9 = iVar8 - *(int *)(lVar4 + 4);
    if (0xb60b5e < iVar9 + 0x5b05afU) {
      iVar3 = 0x15555560;
      iVar8 = -0x15555560;
      iVar9 = (int)((float)iVar9 * 0.25);
      if (iVar9 < 1) {
        iVar3 = -0x5b05b0;
      }
      else {
        iVar8 = 0x5b05b0;
      }
      iVar1 = iVar9;
      if (iVar3 <= iVar9) {
        iVar1 = iVar3;
      }
      if (iVar8 <= iVar9) {
        iVar8 = iVar1;
      }
      iVar8 = iVar8 + *(int *)(lVar4 + 4);
    }
    *(int *)(lVar4 + 4) = iVar8;
    iVar8 = *(int *)(param_1 + 0x178);
    puVar7 = *(undefined8 **)(param_1 + 0x60);
  }
  if (puVar7 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar9 = __cxa_guard_acquire(&DAT_052461c0);
      puVar7 = &DAT_05240280;
      if (iVar9 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      puVar7 = &DAT_05240280;
    }
  }
  if (puVar7[0x227] == 0) {
    if (iVar8 == 0) goto LAB_023ff834;
  }
  else {
    uVar6 = FUN_03850368(puVar7[0x227],0);
    if (iVar8 == 0) {
      if ((uVar6 & 1) != 0) {
        return;
      }
LAB_023ff834:
      puVar7 = *(undefined8 **)(param_1 + 0x60);
      if (puVar7 == (undefined8 *)0x0) {
        if ((DAT_052461c0 & 1) == 0) {
          iVar8 = __cxa_guard_acquire(&DAT_052461c0);
          puVar7 = &DAT_05240280;
          if (iVar8 != 0) {
            FUN_016fcf10(&DAT_05240280);
            FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
            __cxa_guard_release(&DAT_052461c0);
          }
        }
        else {
          puVar7 = &DAT_05240280;
        }
      }
      local_5c = 0.0;
      local_70 = (undefined *)((ulong)local_70 & 0xffffffff00000000);
      if ((((puVar7[0x227] != 0) &&
           (uVar6 = FUN_03850368(puVar7[0x227],0), fVar11 = local_5c, (uVar6 & 1) == 0)) &&
          (puVar7[0x227] != 0)) &&
         ((uVar6 = FUN_03850368(puVar7[0x227],local_5c), (uVar6 & 1) == 0 &&
          (uVar6 = FUN_0384fca4(puVar7[0x227],fVar11), (uVar6 & 1) == 0)))) {
        return;
      }
      *(undefined8 *)(param_1 + 0x1960) = *(undefined8 *)(param_1 + 0x18e0);
      *(undefined8 *)(param_1 + 0x1968) = *(undefined8 *)(param_1 + 0x18e8);
      *(undefined8 *)(param_1 + 0x1970) = *(undefined8 *)(param_1 + 0x18f0);
      *(undefined8 *)(param_1 + 0x1978) = *(undefined8 *)(param_1 + 0x18f8);
      *(undefined8 *)(param_1 + 0x1997) = 0;
      *(undefined8 *)(param_1 + 0x199f) = 0;
      *(undefined8 *)(param_1 + 0x19a7) = 0;
      *(undefined8 *)(param_1 + 0x19af) = 0;
      *(undefined8 *)(param_1 + 0x19b7) = 0;
      *(undefined8 *)(param_1 + 0x19bf) = 0;
      *(undefined8 *)(param_1 + 0x19c7) = 0;
      *(undefined8 *)(param_1 + 0x19cf) = 0;
      *(undefined4 *)(param_1 + 0x19d6) = 0;
      *(undefined8 *)(param_1 + 0x198f) = *(undefined8 *)(param_1 + 0x190f);
      *(undefined8 *)(param_1 + 0x1988) = *(undefined8 *)(param_1 + 0x1908);
      *(undefined8 *)(param_1 + 0x1980) = *(undefined8 *)(param_1 + 0x1900);
      local_70 = (undefined *)CONCAT44(local_70._4_4_,0xb9);
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
      lVar4 = 0;
      if (*(long *)(param_1 + 0x70) != 0) {
        lVar4 = *(long *)(param_1 + 0x70) + 0x278;
      }
      FUN_03ebb160(lVar4,0xb9);
      return;
    }
    if ((uVar6 & 1) != 0) {
      return;
    }
  }
  puVar7 = *(undefined8 **)(param_1 + 0x60);
  if (puVar7 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar8 = __cxa_guard_acquire(&DAT_052461c0);
      puVar7 = &DAT_05240280;
      if (iVar8 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      puVar7 = &DAT_05240280;
    }
  }
  local_5c = 0.0;
  local_70 = (undefined *)((ulong)local_70 & 0xffffffff00000000);
  if (((puVar7[0x227] == 0) ||
      (uVar6 = FUN_03850368(puVar7[0x227],0), fVar11 = local_5c, (uVar6 & 1) != 0)) ||
     ((puVar7[0x227] == 0 ||
      ((uVar6 = FUN_03850368(puVar7[0x227],local_5c), (uVar6 & 1) != 0 ||
       (uVar6 = FUN_0384fca4(puVar7[0x227],fVar11), (uVar6 & 1) != 0)))))) {
    puVar7 = *(undefined8 **)(param_1 + 0x60);
    if (puVar7 == (undefined8 *)0x0) {
      if ((DAT_052461c0 & 1) == 0) {
        iVar8 = __cxa_guard_acquire(&DAT_052461c0);
        puVar7 = &DAT_05240280;
        if (iVar8 != 0) {
          FUN_016fcf10(&DAT_05240280);
          FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
          __cxa_guard_release(&DAT_052461c0);
        }
      }
      else {
        puVar7 = &DAT_05240280;
      }
    }
    local_70 = PTR_DAT_04bb2020 + 0x10;
    local_68 = "PlayerPassGapReadyWait";
    FUN_01707d90(puVar7,&local_70,6,0,0);
  }
  return;
}


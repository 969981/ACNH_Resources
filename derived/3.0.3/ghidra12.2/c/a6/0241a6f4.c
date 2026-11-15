
void FUN_0241a6f4(long param_1)

{
  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined8 *puVar6;
  ulong uVar7;
  long lVar8;
  float *pfVar9;
  float fVar10;
  float fVar11;
  undefined8 local_50;
  char *pcStack_48;
  
  if (*(int *)(param_1 + 0x178) != 0) {
    return;
  }
  if (*(char *)(param_1 + 0x17ac) == '\0') {
    uVar4 = (undefined4)((ulong)local_50 >> 0x20);
    local_50 = (undefined *)((ulong)local_50 & 0xffffffff00000000);
    puVar1 = (uint *)(param_1 + 0xed0);
    if (((*puVar1 & 1) != 0) &&
       (local_50 = (undefined *)CONCAT44(uVar4,0x15), (*puVar1 >> 0x15 & 1) == 0)) {
      if (*(char *)(param_1 + 0xee8) == '\0') {
        puVar2 = (uint *)(param_1 + 0xee0);
        *(undefined8 *)puVar2 = *(undefined8 *)puVar1;
        local_50 = (undefined *)CONCAT44(uVar4,0x1e);
        *puVar2 = *puVar2 & 0xbfffffff;
        *(undefined1 *)(param_1 + 0xee8) = 1;
      }
      else {
        uVar3 = *(uint *)(param_1 + 0xed4) | *(uint *)(param_1 + 0xee4);
        *(ulong *)(param_1 + 0xee0) =
             CONCAT44(uVar3,*(uint *)(param_1 + 0xed0) | *(uint *)(param_1 + 0xee0));
        *(uint *)(param_1 + 0xee4) = uVar3 & 0x7fffff;
      }
    }
  }
  puVar6 = *(undefined8 **)(param_1 + 0x60);
  if (puVar6 == (undefined8 *)0x0) {
    if (((DAT_052461c0 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_052461c0), iVar5 != 0)) {
      FUN_016fcf10(&DAT_05240280);
      FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
      __cxa_guard_release(&DAT_052461c0);
      puVar6 = &DAT_05240280;
    }
    else {
      puVar6 = &DAT_05240280;
    }
  }
  uVar7 = FUN_0073d6e0(puVar6,0);
  if ((uVar7 & 1) == 0) {
    puVar6 = *(undefined8 **)(param_1 + 0x60);
    if (puVar6 == (undefined8 *)0x0) {
      if ((DAT_052461c0 & 1) == 0) {
        iVar5 = __cxa_guard_acquire(&DAT_052461c0);
        if (iVar5 != 0) {
          FUN_016fcf10(&DAT_05240280);
          FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
          __cxa_guard_release(&DAT_052461c0);
        }
        puVar6 = &DAT_05240280;
      }
      else {
        puVar6 = &DAT_05240280;
      }
    }
    local_50 = PTR_DAT_04bb2020 + 0x10;
    pcStack_48 = "PlayerMoveTurn";
    FUN_01707d90(puVar6,&local_50,6,0,0);
  }
  puVar6 = *(undefined8 **)(param_1 + 0x60);
  if (puVar6 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar5 = __cxa_guard_acquire(&DAT_052461c0);
      if (iVar5 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
      puVar6 = &DAT_05240280;
    }
    else {
      puVar6 = &DAT_05240280;
    }
  }
  local_50 = (undefined *)((ulong)local_50 & 0xffffffff00000000);
  uVar7 = FUN_0073da08(puVar6,0);
  if ((uVar7 & 1) != 0) {
    pfVar9 = (float *)PTR_DAT_04bc3038;
    if (*(char *)(param_1 + 0x12f8) != '\0') {
      pfVar9 = (float *)(param_1 + 0xeec);
    }
    fVar11 = SQRT(pfVar9[1] * pfVar9[1] + *pfVar9 * *pfVar9);
    lVar8 = FUN_0251e98c(1);
    pfVar9 = (float *)(**(code **)(*(long *)(lVar8 + 0x120) + 0xf0))(lVar8 + 0x120);
    if (*pfVar9 <= fVar11) {
      lVar8 = FUN_0251e98c(1);
      pfVar9 = (float *)(**(code **)(*(long *)(lVar8 + 0x120) + 0xf0))(lVar8 + 0x120);
      fVar10 = *pfVar9;
      lVar8 = FUN_0251e98c(1);
      pfVar9 = (float *)(**(code **)(*(long *)(lVar8 + 0x120) + 0xf0))(lVar8 + 0x120);
      fVar10 = (fVar11 - *pfVar9) / (1.0 - fVar10);
      fVar11 = 0.9999;
      if (fVar10 <= 0.9999) {
        fVar11 = fVar10;
      }
      if ((0.0 <= fVar10) && (fVar11 != 0.0)) {
        local_50 = (undefined *)CONCAT44(local_50._4_4_,0xc);
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
        lVar8 = 0;
        if (*(long *)(param_1 + 0x70) != 0) {
          lVar8 = *(long *)(param_1 + 0x70) + 0x278;
        }
        FUN_03ebb160(lVar8,0xc);
        return;
      }
    }
    FUN_0236a88c(param_1,6,1,0);
  }
  return;
}


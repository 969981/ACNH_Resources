
/* WARNING: Removing unreachable block (ram,0x0246c7e8) */
/* WARNING: Removing unreachable block (ram,0x0246c86c) */

void FUN_0246c6d8(long param_1)

{
  undefined *puVar1;
  undefined4 uVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  long lVar7;
  undefined4 *puVar8;
  uint *puVar9;
  float *pfVar10;
  ulong uVar11;
  undefined2 uVar12;
  long lVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  float fVar16;
  float fVar17;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined1 local_48;
  undefined4 local_44;
  
  lVar7 = FUN_0251e98c(1);
  puVar8 = (undefined4 *)(**(code **)(*(long *)(lVar7 + 0x1bf0) + 0xf0))(lVar7 + 0x1bf0);
  local_54 = *puVar8;
  lVar7 = FUN_0251e98c(1);
  puVar8 = (undefined4 *)(**(code **)(*(long *)(lVar7 + 0x1c20) + 0xf0))(lVar7 + 0x1c20);
  local_50 = *puVar8;
  lVar7 = FUN_0251e98c(1);
  puVar8 = (undefined4 *)(**(code **)(*(long *)(lVar7 + 0x1bc0) + 0xf0))(lVar7 + 0x1bc0);
  local_4c = *puVar8;
  local_48 = 0;
  FUN_02465c70(param_1,&local_54);
  lVar7 = FUN_0251e98c(1);
  puVar9 = (uint *)(**(code **)(*(long *)(lVar7 + 0x14d0) + 0xf0))(lVar7 + 0x14d0);
  if (*puVar9 <= *(uint *)(param_1 + 0x1c04)) {
    FUN_023334c0(param_1);
  }
  puVar1 = PTR_DAT_04bb2200;
  lVar7 = *(long *)PTR_DAT_04bb2200;
  if (lVar7 == 0) {
    fVar17 = -20.0;
    iVar6 = *(int *)(param_1 + 0x178);
  }
  else {
    fVar17 = -20.0;
    if (*(long *)(lVar7 + 0x50) == 0) {
LAB_0246c84c:
      if (*(long *)(lVar7 + 0x50) != 0) {
        local_54 = 0;
        lVar7 = *(long *)(*(long *)(lVar7 + 0x50) + 0x118);
        if (lVar7 != 0) {
          lVar7 = *(long *)(lVar7 + 0x280);
          if ((lVar7 != 0) && (lVar7 = *(long *)(lVar7 + 8), lVar7 != 0)) {
            (**(code **)(*(long *)(lVar7 + 0x488) + 0xf0))(lVar7 + 0x488);
          }
          lVar7 = FUN_0251e98c(1);
          (**(code **)(*(long *)(lVar7 + 0x1590) + 0xf0))(lVar7 + 0x1590);
        }
      }
    }
    else {
      local_54 = 0;
      lVar13 = *(long *)(*(long *)(lVar7 + 0x50) + 0x118);
      if (lVar13 == 0) goto LAB_0246c84c;
      lVar7 = *(long *)(lVar13 + 0x280);
      fVar17 = 0.0;
      if ((lVar7 != 0) && (lVar7 = *(long *)(lVar7 + 8), lVar7 != 0)) {
        pfVar10 = (float *)(**(code **)(*(long *)(lVar7 + 0x488) + 0xf0))(lVar7 + 0x488);
        fVar17 = *pfVar10;
      }
      lVar7 = FUN_0251e98c(1);
      pfVar10 = (float *)(**(code **)(*(long *)(lVar7 + 0x1560) + 0xf0))(lVar7 + 0x1560);
      fVar17 = fVar17 + *pfVar10;
      lVar7 = *(long *)puVar1;
      if (lVar7 != 0) goto LAB_0246c84c;
    }
    iVar6 = *(int *)(param_1 + 0x178);
  }
  if (iVar6 != 0) {
    puVar14 = *(undefined8 **)(param_1 + 0x60);
    if (puVar14 == (undefined8 *)0x0) {
      if ((DAT_052461c0 & 1) == 0) {
        iVar6 = __cxa_guard_acquire(&DAT_052461c0);
        puVar14 = &DAT_05240280;
        if (iVar6 != 0) {
          FUN_016fcf10(&DAT_05240280);
          FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
          __cxa_guard_release(&DAT_052461c0);
        }
      }
      else {
        puVar14 = &DAT_05240280;
      }
    }
    local_44 = 0;
    local_54 = 0;
    if ((((puVar14[0x227] != 0) &&
         (uVar11 = FUN_03850368(puVar14[0x227],0), uVar2 = local_44, (uVar11 & 1) == 0)) &&
        (puVar14[0x227] != 0)) &&
       ((uVar11 = FUN_03850368(puVar14[0x227],local_44), (uVar11 & 1) == 0 &&
        (uVar11 = FUN_0384fca4(puVar14[0x227],uVar2), (uVar11 & 1) == 0)))) {
      return;
    }
    puVar14 = *(undefined8 **)(param_1 + 0x60);
    if (puVar14 == (undefined8 *)0x0) {
      if ((DAT_052461c0 & 1) == 0) {
        iVar6 = __cxa_guard_acquire(&DAT_052461c0);
        puVar14 = &DAT_05240280;
        if (iVar6 != 0) {
          FUN_016fcf10(&DAT_05240280);
          FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
          __cxa_guard_release(&DAT_052461c0);
        }
      }
      else {
        puVar14 = &DAT_05240280;
      }
    }
    FUN_01707d90(puVar14,&DAT_054cf078,6,0,0);
    return;
  }
  puVar14 = (undefined8 *)(param_1 + 0x1980);
  puVar15 = &DAT_054e9a58;
  if (*(undefined8 **)(param_1 + 0x4c8) != (undefined8 *)0x0) {
    puVar15 = *(undefined8 **)(param_1 + 0x4c8);
  }
  *(float *)((long)puVar15 + 0x2ec) = fVar17;
  *(undefined1 *)((long)puVar15 + 0x2e5) = 1;
  pfVar10 = (float *)PTR_DAT_04bc3038;
  if (*(char *)(param_1 + 0x12f8) != '\0') {
    pfVar10 = (float *)(param_1 + 0xeec);
  }
  fVar17 = SQRT(pfVar10[1] * pfVar10[1] + *pfVar10 * *pfVar10);
  lVar7 = FUN_0251e98c(1);
  pfVar10 = (float *)(**(code **)(*(long *)(lVar7 + 0x120) + 0xf0))(lVar7 + 0x120);
  if (*pfVar10 <= fVar17) {
    lVar7 = FUN_0251e98c(1);
    pfVar10 = (float *)(**(code **)(*(long *)(lVar7 + 0x120) + 0xf0))(lVar7 + 0x120);
    fVar16 = *pfVar10;
    lVar7 = FUN_0251e98c(1);
    pfVar10 = (float *)(**(code **)(*(long *)(lVar7 + 0x120) + 0xf0))(lVar7 + 0x120);
    fVar16 = (fVar17 - *pfVar10) / (1.0 - fVar16);
    fVar17 = 0.9999;
    if (fVar16 <= 0.9999) {
      fVar17 = fVar16;
    }
    bVar3 = false;
    bVar4 = true;
    bVar5 = false;
    if (0.0 <= fVar16) {
      bVar3 = false;
      bVar4 = false;
      bVar5 = true;
      if (!NAN(fVar17)) {
        bVar3 = fVar17 < 0.5;
        bVar4 = fVar17 == 0.5;
        bVar5 = false;
      }
    }
    if ((!bVar4 && bVar3 == bVar5) &&
       (fVar17 = (float)FUN_0251dd30(param_1 + 0x1ee8), 0.925 < fVar17)) {
      *puVar14 = 0;
      *(undefined8 *)(param_1 + 0x1988) = 0;
      *(undefined8 *)(param_1 + 0x19d0) = 0;
      *(undefined8 *)(param_1 + 0x1960) = *(undefined8 *)(param_1 + 0x18e0);
      *(undefined8 *)(param_1 + 0x1990) = 0;
      *(undefined8 *)(param_1 + 0x1998) = 0;
      *(undefined8 *)(param_1 + 0x1968) = *(undefined8 *)(param_1 + 0x18e8);
      *(undefined8 *)(param_1 + 0x19a0) = 0;
      *(undefined8 *)(param_1 + 0x19a8) = 0;
      *(undefined8 *)(param_1 + 0x1970) = *(undefined8 *)(param_1 + 0x18f0);
      *(undefined8 *)(param_1 + 0x1978) = *(undefined8 *)(param_1 + 0x18f8);
      uVar12 = 0xc01;
      *(undefined8 *)(param_1 + 0x19b0) = 0;
      *(undefined8 *)(param_1 + 0x19b8) = 0;
      goto LAB_0246cb40;
    }
  }
  puVar15 = *(undefined8 **)(param_1 + 0x60);
  if (puVar15 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar6 = __cxa_guard_acquire(&DAT_052461c0);
      puVar15 = &DAT_05240280;
      if (iVar6 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      puVar15 = &DAT_05240280;
    }
  }
  local_44 = 0;
  local_54 = 0;
  if ((((puVar15[0x227] != 0) &&
       (uVar11 = FUN_03850368(puVar15[0x227],0), uVar2 = local_44, (uVar11 & 1) == 0)) &&
      (puVar15[0x227] != 0)) &&
     ((uVar11 = FUN_03850368(puVar15[0x227],local_44), (uVar11 & 1) == 0 &&
      (uVar11 = FUN_0384fca4(puVar15[0x227],uVar2), (uVar11 & 1) == 0)))) {
    return;
  }
  *puVar14 = 0;
  *(undefined8 *)(param_1 + 0x1988) = 0;
  *(undefined8 *)(param_1 + 0x19d0) = 0;
  *(undefined8 *)(param_1 + 0x1960) = *(undefined8 *)(param_1 + 0x18e0);
  *(undefined8 *)(param_1 + 0x1990) = 0;
  *(undefined8 *)(param_1 + 0x1998) = 0;
  *(undefined8 *)(param_1 + 0x1968) = *(undefined8 *)(param_1 + 0x18e8);
  *(undefined8 *)(param_1 + 0x19a0) = 0;
  *(undefined8 *)(param_1 + 0x19a8) = 0;
  *(undefined8 *)(param_1 + 0x1970) = *(undefined8 *)(param_1 + 0x18f0);
  *(undefined8 *)(param_1 + 0x1978) = *(undefined8 *)(param_1 + 0x18f8);
  *(undefined8 *)(param_1 + 0x19b0) = 0;
  *(undefined8 *)(param_1 + 0x19b8) = 0;
  uVar12 = 0x601;
LAB_0246cb40:
  *(undefined8 *)(param_1 + 0x19c0) = 0;
  *(undefined8 *)(param_1 + 0x19c8) = 0;
  *(undefined2 *)puVar14 = uVar12;
  *(undefined2 *)(param_1 + 0x19d8) = 0;
  local_54 = 0xfa;
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
  FUN_03ebb160(lVar7,0xfa);
  return;
}


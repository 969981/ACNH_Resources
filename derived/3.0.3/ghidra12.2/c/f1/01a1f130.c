
bool FUN_01a1f130(float *param_1,float *param_2,undefined8 *param_3)

{
  uint uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined *puVar7;
  bool bVar8;
  ulong uVar9;
  long lVar10;
  uint uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined *local_b0;
  byte local_a8;
  undefined *local_a0;
  byte local_98;
  undefined *local_90;
  int local_88;
  int local_84;
  undefined *local_80;
  int local_78;
  int local_74;
  
  fVar12 = *param_1;
  local_90 = PTR_DAT_04bb2010 + 0x10;
  fVar13 = param_1[2];
  fVar14 = *param_2;
  local_78 = (int)((float)(int)fVar12 / 5.0) - (uint)(fVar12 < 0.0);
  local_74 = (int)((float)(int)fVar13 / 5.0) - (uint)(fVar13 < 0.0);
  fVar15 = param_2[2];
  local_88 = (int)((float)(int)fVar14 / 5.0) - (uint)(fVar14 < 0.0);
  local_84 = (int)((float)(int)fVar15 / 5.0) - (uint)(fVar15 < 0.0);
  local_80 = local_90;
  if (param_3 != (undefined8 *)0x0) {
    uVar9 = (**(code **)*param_3)(param_3,&local_90);
    if ((uVar9 & 1) != 0) {
      fVar12 = *param_1;
      fVar13 = param_1[2];
      fVar14 = *param_2;
      fVar15 = param_2[2];
      goto LAB_01a1f230;
    }
    goto LAB_01a1f5ac;
  }
LAB_01a1f230:
  puVar7 = PTR_DAT_04bb27c8;
  fVar13 = fVar13 - ((float)local_74 * 5.0 + 2.5);
  fVar12 = fVar12 - ((float)local_78 * 5.0 + 2.5);
  fVar15 = fVar15 - ((float)local_84 * 5.0 + 2.5);
  fVar14 = fVar14 - ((float)local_88 * 5.0 + 2.5);
  fVar2 = -fVar13;
  if (fVar13 >= 0.0) {
    fVar2 = fVar13;
  }
  fVar3 = -fVar12;
  if (0.0 <= fVar12) {
    fVar3 = fVar12;
  }
  uVar11 = 3;
  if (0.0 <= fVar12) {
    uVar11 = 1;
  }
  uVar1 = (uint)(fVar13 < 0.0) << 1;
  if (fVar2 <= fVar3) {
    uVar1 = uVar11;
  }
  fVar4 = -fVar15;
  if (fVar15 >= 0.0) {
    fVar4 = fVar15;
  }
  fVar5 = -fVar14;
  if (0.0 <= fVar14) {
    fVar5 = fVar14;
  }
  uVar11 = 3;
  if (0.0 <= fVar14) {
    uVar11 = 1;
  }
  if (fVar5 < fVar4) {
    uVar11 = (uint)(fVar15 < 0.0) << 1;
  }
  if ((local_78 == local_88) && (local_74 == local_84)) {
    local_a0 = PTR_DAT_04bb5ba0 + 0x10;
    local_98 = 0;
    if ((*(long *)PTR_DAT_04bb27c8 != 0) &&
       (lVar10 = *(long *)(*(long *)PTR_DAT_04bb27c8 + 0xa8), lVar10 != 0)) {
      FUN_00974bc8(lVar10,&local_80,&local_a0);
      if (((local_98 & 0x60) != 0) &&
         (uVar11 = 1 << (ulong)uVar11 | 1 << (ulong)uVar1, uVar11 < 0xd)) {
        uVar1 = 1 << (ulong)(uVar11 & 0x1f);
        if ((uVar1 & 0x240) != 0) {
          return (local_98 & 0x40) == 0;
        }
        if ((uVar1 & 0x420) != 0) goto LAB_01a1f5ac;
        if ((1 << (ulong)(uVar11 & 0x1f) & 0x1008U) != 0) {
          return (local_98 & 0x20) == 0;
        }
      }
    }
LAB_01a1f3dc:
    bVar8 = true;
  }
  else {
    local_b0 = PTR_DAT_04bb5ba0 + 0x10;
    local_a8 = 0;
    local_98 = 0;
    lVar10 = *(long *)PTR_DAT_04bb27c8;
    if (lVar10 != 0) {
      local_a0 = local_b0;
      if (*(long *)(lVar10 + 0xa8) != 0) {
        FUN_00974bc8(*(long *)(lVar10 + 0xa8),&local_80,&local_a0);
        lVar10 = *(long *)puVar7;
        local_a8 = 0;
        if (lVar10 == 0) goto LAB_01a1f3bc;
      }
      local_a8 = 0;
      if (*(long *)(lVar10 + 0xa8) != 0) {
        FUN_00974bc8(*(long *)(lVar10 + 0xa8),&local_90,&local_b0);
      }
    }
LAB_01a1f3bc:
    if (local_78 == local_88) {
LAB_01a1f3cc:
      if (local_74 == local_84) goto LAB_01a1f3dc;
      if (local_74 < local_84) {
        if (((local_98 & 1) != 0) && ((local_a8 >> 2 & 1) != 0)) {
          if (fVar2 <= fVar3) {
            fVar13 = fVar12;
          }
          if (((0.0 <= fVar13 || (local_98 & 0x40) == 0) &&
              (uVar1 - 3 < 0xfffffffe || (local_98 & 0x20) == 0)) &&
             (1 < uVar11 || (local_a8 & 0x40) == 0)) {
            if ((local_a8 >> 5 & 1) != 0) {
              return uVar11 != 0 && (0.0 <= fVar14 || fVar5 < fVar4);
            }
            goto LAB_01a1f3dc;
          }
        }
      }
      else if (((((local_98 >> 2 & 1) != 0) && ((local_a8 & 1) != 0)) &&
               (1 < uVar1 || (local_98 & 0x40) == 0)) &&
              (((local_98 >> 5 & 1) == 0 || (uVar1 != 0 && uVar1 != 3)))) {
        if (fVar5 < fVar4) {
          fVar14 = fVar15;
        }
        if ((0.0 <= fVar14 || (local_a8 & 0x40) == 0) &&
           (uVar11 - 3 < 0xfffffffe || (local_a8 & 0x20) == 0)) goto LAB_01a1f3dc;
      }
    }
    else if (local_78 < local_88) {
      if (((local_98 >> 1 & 1) != 0) && ((local_a8 >> 3 & 1) != 0)) {
        fVar6 = fVar13;
        if (fVar2 <= fVar3) {
          fVar6 = fVar12;
        }
        if ((((0.0 <= fVar6 || (local_98 & 0x40) == 0) &&
             (((local_98 >> 5 & 1) == 0 || (uVar1 != 0 && uVar1 != 3)))) &&
            (1 < uVar11 || (local_a8 & 0x40) == 0)) &&
           (uVar11 - 3 < 0xfffffffe || (local_a8 & 0x20) == 0)) goto LAB_01a1f3cc;
      }
    }
    else if (((((local_98 >> 3 & 1) != 0) && ((local_a8 >> 1 & 1) != 0)) &&
             (1 < uVar1 || (local_98 & 0x40) == 0)) &&
            (uVar1 - 3 < 0xfffffffe || (local_98 & 0x20) == 0)) {
      fVar6 = fVar14;
      if (fVar5 < fVar4) {
        fVar6 = fVar15;
      }
      if ((0.0 <= fVar6 || (local_a8 & 0x40) == 0) &&
         (((local_a8 >> 5 & 1) == 0 || (uVar11 != 0 && uVar11 != 3)))) goto LAB_01a1f3cc;
    }
LAB_01a1f5ac:
    bVar8 = false;
  }
  return bVar8;
}


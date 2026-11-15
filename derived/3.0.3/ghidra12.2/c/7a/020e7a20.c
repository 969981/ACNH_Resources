
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_020e7a20(undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  float *pfVar2;
  float *pfVar3;
  undefined1 **ppuVar4;
  uint uVar5;
  uint uVar6;
  float *pfVar7;
  ulong uVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  float *pfVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined8 local_630;
  undefined1 *local_628;
  undefined4 local_620;
  undefined1 local_61c;
  undefined2 uStack_61b;
  undefined4 uStack_619;
  undefined1 local_615;
  undefined1 local_5dd;
  uint local_14;
  
  pfVar12 = (float *)&local_630;
  pfVar7 = (float *)FUN_0251b3b0(param_2,0);
  if (pfVar7 != (float *)0x0) {
    uVar8 = FUN_0291e130(&local_630,&local_14,0);
    if (((uVar8 & 1) == 0) || (local_14 == 0)) {
      iVar11 = -1;
    }
    else {
      fVar13 = 999999.9;
      uVar8 = 0;
      iVar9 = -1;
      do {
        pfVar2 = pfVar12;
        if (0x7f < uVar8) {
          pfVar2 = (float *)&local_630;
        }
        iVar11 = (int)uVar8;
        if (*pfVar2 == *pfVar7) {
          pfVar3 = pfVar12 + 1;
          if (0x7f < uVar8) {
            pfVar3 = (float *)((long)&local_630 + 4);
          }
          if (*pfVar3 == pfVar7[1]) {
            ppuVar4 = (undefined1 **)(pfVar12 + 2);
            if (0x7f < uVar8) {
              ppuVar4 = &local_628;
            }
            if (*(float *)ppuVar4 == pfVar7[2]) break;
          }
        }
        fVar14 = *pfVar2 - *pfVar7;
        ppuVar4 = (undefined1 **)(pfVar12 + 2);
        if (0x7f < uVar8) {
          ppuVar4 = &local_628;
        }
        pfVar12 = pfVar12 + 3;
        fVar15 = *(float *)ppuVar4 - pfVar7[2];
        fVar14 = SQRT(fVar15 * fVar15 + fVar14 * fVar14);
        if (fVar13 <= fVar14) {
          iVar11 = iVar9;
          fVar14 = fVar13;
        }
        fVar13 = fVar14;
        uVar8 = uVar8 + 1;
        iVar9 = iVar11;
      } while (local_14 != uVar8);
    }
    local_5dd = 0;
    local_628 = &local_61c;
    local_620 = 0x40;
    local_61c = 0;
    local_630 = PTR_DAT_04bb2bc0 + 0x10;
    if (iVar11 == 9) {
      local_615 = 0;
      local_61c = 0x43;
      uStack_61b = 0x756f;
      uStack_619 = 0x7265746e;
    }
    else {
      FUN_038d1270(&local_630,"Table%d");
    }
    (**(code **)(local_630 + 0x18))(&local_630);
    uVar6 = FUN_006bd550(local_628,0);
    if (_DAT_00000008 != 0) {
      iVar11 = _DAT_00000008 + -1;
      if (iVar11 == 0 || _DAT_00000008 < 1) {
        uVar10 = 0;
      }
      else {
        uVar10 = 0;
        do {
          iVar9 = iVar11 + uVar10;
          if (iVar9 < 0 != SCARRY4(iVar11,uVar10)) {
            iVar9 = iVar9 + 1;
          }
          uVar1 = iVar9 >> 1;
          uVar5 = *(uint *)(*(long *)(_DAT_00000010 + (long)(int)uVar1 * 8) + 0x18);
          if (uVar5 == uVar6) goto joined_r0x020e7c38;
          if (uVar5 < uVar6) {
            uVar10 = uVar1 + 1;
          }
          else {
            iVar11 = uVar1 - 1;
          }
        } while ((int)uVar10 < iVar11);
      }
      uVar1 = uVar10;
      if (*(uint *)(*(long *)(_DAT_00000010 + (long)(int)uVar10 * 8) + 0x18) == uVar6) {
joined_r0x020e7c38:
        if (-1 < (int)uVar1) {
          return **(undefined8 **)(_DAT_00000010 + (ulong)uVar1 * 8);
        }
      }
    }
  }
  return 0;
}


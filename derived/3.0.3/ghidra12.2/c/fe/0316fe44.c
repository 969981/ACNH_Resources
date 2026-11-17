
undefined8 FUN_0316fe44(long param_1,byte *param_2,uint param_3)

{
  float fVar1;
  undefined *puVar2;
  uint uVar3;
  float *pfVar4;
  ulong uVar5;
  float *pfVar6;
  long lVar7;
  long lVar8;
  undefined8 *puVar9;
  long *plVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float __x;
  float fVar17;
  undefined4 uVar18;
  float local_b4;
  float local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  float fStack_a4;
  float local_a0;
  undefined8 local_98;
  float local_90;
  float local_84;
  undefined1 auStack_28 [4];
  float local_24;
  
  plVar10 = *(long **)(param_1 + 0x1d0);
  if (plVar10 != (long *)0x0) {
    pfVar4 = (float *)FUN_0251b574(param_2,0);
    puVar2 = PTR_DAT_04bb2200;
    if (pfVar4 == (float *)0x0) {
      return 0;
    }
    local_a0 = pfVar4[2];
    if (param_3 == 2) {
      local_a0 = 0.0;
      if ((*(long *)PTR_DAT_04bb4718 != 0) && ((ulong)*param_2 < 8)) {
        local_a0 = *(float *)(*(long *)PTR_DAT_04bb4718 + (ulong)*param_2 * 8 + 0xf08);
      }
    }
    fStack_a4 = (float)((ulong)*(undefined8 *)pfVar4 >> 0x20);
    fVar16 = 10.0;
    _local_a8 = CONCAT44(fStack_a4 + 10.0,(int)*(undefined8 *)pfVar4);
    if (*(long *)PTR_DAT_04bb2200 == 0) {
      return 0;
    }
    uVar5 = FUN_01664580(*(long *)PTR_DAT_04bb2200,&local_98,&local_b4,&local_a8,0);
    fVar14 = -((local_98._4_4_ / 360.0) * 540.0);
    fVar1 = -(((float)local_98 / 640.0) * 960.0);
    if (0.0 <= local_b4) {
      fVar14 = (local_98._4_4_ / 360.0) * 540.0;
      fVar1 = ((float)local_98 / 640.0) * 960.0;
    }
    if ((uVar5 & 1) != 0) {
      local_ac = 0;
      fVar13 = 860.0;
      if (fVar1 <= 860.0) {
        fVar13 = fVar1;
      }
      local_b4 = -860.0;
      if (-860.0 <= fVar1) {
        local_b4 = fVar13;
      }
      fVar13 = 440.0;
      if (fVar14 <= 440.0) {
        fVar13 = fVar14;
      }
      local_b0 = -440.0;
      if (-440.0 <= fVar14) {
        local_b0 = fVar13;
      }
      if ((param_3 >> 1 & 1) != 0) {
        lVar7 = *(long *)(*(long *)puVar2 + 0x78);
        uVar18 = *(undefined4 *)(lVar7 + 0x50);
        fVar17 = *(float *)(lVar7 + 0x54);
        __x = *(float *)(lVar7 + 0x58);
        fVar13 = 57600.0 / (*(float *)(lVar7 + 0x40) * 6.2831855) + fVar17;
        fVar11 = atan2f(fVar13,__x);
        fVar11 = 1.5707964 - fVar11;
        fVar12 = cosf(fVar11);
        if (fVar12 == 0.0) {
          fVar12 = 0.001;
        }
        else {
          fVar12 = cosf(fVar11);
        }
        lVar7 = *(long *)puVar2;
        lVar8 = *(long *)(lVar7 + 0x78);
        fVar15 = *(float *)(lVar8 + 0x3c);
        local_98 = (undefined *)
                   CONCAT44(fVar17 * (1.0 - fVar15) +
                            fVar15 * (fVar13 / fVar12 +
                                     -57600.0 / (*(float *)(lVar8 + 0x40) * 6.2831855)),uVar18);
        local_90 = fVar15 * ((fVar11 / (*(float *)(lVar8 + 0x40) * 0.017453292)) * 160.0 -
                            *(float *)(lVar8 + 0x38)) + (1.0 - fVar15) * __x;
        uVar5 = FUN_01664580(lVar7,auStack_28,&local_84,&local_98,0);
        if ((uVar5 & 1) == 0) {
          local_b0 = 440.0;
        }
        else {
          fVar13 = -((local_24 / 360.0) * 540.0);
          if (0.0 <= local_84) {
            fVar13 = (local_24 / 360.0) * 540.0;
          }
          fVar13 = fVar13 + 100.0;
          fVar11 = 440.0;
          if (fVar13 <= 440.0) {
            fVar11 = fVar13;
          }
          local_b0 = -440.0;
          if (-440.0 <= fVar13) {
            local_b0 = fVar11;
          }
        }
      }
      local_98 = PTR_DAT_04bc0cb8 + 0x10;
      local_90 = 1.12104e-44;
      (**(code **)(*plVar10 + 0x18))(plVar10,&local_98);
      (**(code **)(plVar10[3] + 0x98))(plVar10[1],&local_b4);
      if (1.0 <= SQRT((fVar1 - local_b4) * (fVar1 - local_b4) + 0.0 +
                      (fVar14 - local_b0) * (fVar14 - local_b0))) {
        uVar3 = FUN_006f0400();
        fVar14 = (float)uVar3 * 8.381903e-08;
      }
      else {
        fVar14 = 180.0;
      }
      puVar2 = PTR_DAT_04bc4f00;
      puVar9 = *(undefined8 **)(param_1 + 0x230);
      plVar10 = (long *)*puVar9;
      if (plVar10 != (long *)0x0) {
        local_98 = PTR_DAT_04bc4f00 + 0x10;
        local_90 = 2.8026e-44;
        (**(code **)(*plVar10 + 0x18))(plVar10,&local_98);
        (**(code **)(plVar10[3] + 0x158))(fVar14,plVar10[1]);
        puVar9 = *(undefined8 **)(param_1 + 0x230);
      }
      plVar10 = (long *)puVar9[1 < *(uint *)(param_1 + 0x228)];
      pfVar6 = (float *)FUN_0252dc40(0);
      if (pfVar6 == (float *)0x0) {
        fVar16 = 0.0;
      }
      else {
        fVar14 = SQRT((pfVar4[2] - pfVar6[2]) * (pfVar4[2] - pfVar6[2]) +
                      (*pfVar4 - *pfVar6) * (*pfVar4 - *pfVar6));
        if ((fVar14 <= 400.0) && (fVar16 = 0.0, 140.0 < fVar14)) {
          fVar16 = (fVar14 + -140.0) / 26.0;
        }
      }
      if (plVar10 != (long *)0x0) {
        local_98 = puVar2 + 0x10;
        local_90 = 2.8026e-44;
        (**(code **)(*plVar10 + 0x18))(plVar10,&local_98);
        (**(code **)(plVar10[3] + 0x158))(fVar16,plVar10[1]);
      }
      return 1;
    }
  }
  return 0;
}


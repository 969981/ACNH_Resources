
/* WARNING: Removing unreachable block (ram,0x013b80ec) */

undefined8 FUN_013b7f18(long param_1)

{
  byte *pbVar1;
  uint uVar2;
  undefined *puVar3;
  uint uVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  float *pfVar8;
  uint *puVar9;
  ulong uVar10;
  uint uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined1 local_c4 [4];
  undefined *local_c0;
  int local_b8;
  int iStack_b4;
  undefined8 local_ac;
  float local_a4;
  float local_a0;
  float fStack_9c;
  float local_98;
  char local_90 [4];
  char local_8c [4];
  undefined **local_88;
  int local_80;
  int iStack_7c;
  
  local_8c[0] = '\0';
  local_90[0] = '\0';
  FUN_013b7618(param_1,local_90,local_8c);
  local_98 = *(float *)(param_1 + 0x338);
  local_a0 = (float)*(undefined8 *)(param_1 + 0x330);
  _local_a0 = CONCAT44(*(undefined4 *)(param_1 + 0x3c8),local_a0);
  if ((local_8c[0] == '\0') || (uVar5 = 0, local_90[0] != '\0')) {
    fVar12 = *(float *)(param_1 + 0x330);
    fVar13 = *(float *)(param_1 + 0x338);
    fVar14 = *(float *)(param_1 + 0x318);
    fVar15 = *(float *)(param_1 + 800);
    if (*(int *)(param_1 + 0x460) == 1) {
      lVar6 = FUN_013b65c4(param_1);
      plVar7 = (long *)(lVar6 + 0xf0);
    }
    else {
      lVar6 = FUN_013b65c4(param_1);
      plVar7 = (long *)(lVar6 + 0xc0);
    }
    fVar14 = fVar14 - fVar12;
    fVar15 = fVar15 - fVar13;
    pfVar8 = (float *)(**(code **)(*plVar7 + 0xf0))();
    if ((*pfVar8 + 1.0 < SQRT(fVar15 * fVar15 + fVar14 * fVar14)) ||
       (pbVar1 = (byte *)(param_1 + 0x300), (*pbVar1 >> 1 & 1) != 0)) {
      *(undefined4 *)(param_1 + 0x338) = *(undefined4 *)(param_1 + 800);
      *(undefined8 *)(param_1 + 0x330) = *(undefined8 *)(param_1 + 0x318);
      *(undefined4 *)(param_1 + 0x30c) = *(undefined4 *)(param_1 + 0x308);
      *(byte *)(param_1 + 0x300) = *(byte *)(param_1 + 0x300) | 1;
    }
    else {
      local_88 = (undefined **)CONCAT44(local_88._4_4_,1);
      local_ac = 0;
      local_a4 = 0.0;
      if ((*(long *)PTR_DAT_04bb2200 == 0) ||
         (lVar6 = *(long *)(*(long *)PTR_DAT_04bb2200 + 0x50), lVar6 == 0)) {
        fVar14 = 0.0;
      }
      else {
        local_88 = (undefined **)((ulong)local_88 & 0xffffffff00000000);
        fVar14 = 0.0;
        lVar6 = *(long *)(lVar6 + 0x118);
        if (lVar6 != 0) {
          FUN_015bca00(lVar6,&local_ac,param_1 + 0x38c,0,1,1);
          fVar14 = (float)local_ac;
        }
      }
      if (SQRT(local_a4 * local_a4 + fVar14 * fVar14) == 0.0) {
        lVar6 = FUN_013b65c4(param_1);
        pfVar8 = (float *)(**(code **)(*(long *)(lVar6 + 0x180) + 0xf0))(lVar6 + 0x180);
        puVar3 = PTR_DAT_04bb39d8;
        fVar15 = *pfVar8;
        puVar9 = (uint *)nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb39d8);
        uVar2 = puVar9[3];
        uVar11 = *puVar9 ^ *puVar9 << 0xb;
        *puVar9 = puVar9[1];
        puVar9[1] = puVar9[2];
        uVar11 = uVar11 >> 8 ^ uVar2 >> 0x13 ^ uVar11 ^ uVar2;
        puVar9[2] = uVar2;
        puVar9[3] = uVar11;
        puVar9 = (uint *)nn::os::GetTlsValue(*(undefined4 *)puVar3);
        lVar6 = FUN_013b65c4(param_1);
        pfVar8 = (float *)(**(code **)(*(long *)(lVar6 + 0x1e0) + 0xf0))(lVar6 + 0x1e0);
        fVar12 = *pfVar8;
        lVar6 = FUN_013b65c4(param_1);
        pfVar8 = (float *)(**(code **)(*(long *)(lVar6 + 0x1e0) + 0xf0))(lVar6 + 0x1e0);
        uVar2 = *puVar9 ^ *puVar9 << 0xb;
        uVar4 = puVar9[3];
        fVar14 = *pfVar8;
        *puVar9 = puVar9[1];
        puVar9[1] = puVar9[2];
        uVar2 = uVar2 >> 8 ^ uVar4 >> 0x13 ^ uVar2 ^ uVar4;
        puVar9[2] = uVar4;
        puVar9[3] = uVar2;
        fVar14 = cosf(((fVar12 + fVar14) * ((float)(uVar2 >> 9 | 0x3f800000) + -1.0) - fVar12) *
                      0.017453292);
        fVar12 = local_a0 +
                 fVar14 * ((fVar15 + fVar15) * ((float)(uVar11 >> 9 | 0x3f800000) + -1.0) - fVar15);
        _local_a0 = CONCAT44(fStack_9c,fVar12);
        puVar9 = (uint *)nn::os::GetTlsValue(*(undefined4 *)puVar3);
        uVar11 = *puVar9 ^ *puVar9 << 0xb;
        uVar2 = puVar9[3];
        *puVar9 = puVar9[1];
        puVar9[1] = puVar9[2];
        uVar11 = uVar11 >> 8 ^ uVar2 >> 0x13 ^ uVar11 ^ uVar2;
        puVar9[2] = uVar2;
        puVar9[3] = uVar11;
        puVar9 = (uint *)nn::os::GetTlsValue(*(undefined4 *)puVar3);
        lVar6 = FUN_013b65c4(param_1);
        pfVar8 = (float *)(**(code **)(*(long *)(lVar6 + 0x1e0) + 0xf0))(lVar6 + 0x1e0);
        fVar13 = *pfVar8;
        lVar6 = FUN_013b65c4(param_1);
        pfVar8 = (float *)(**(code **)(*(long *)(lVar6 + 0x1e0) + 0xf0))(lVar6 + 0x1e0);
        uVar2 = *puVar9 ^ *puVar9 << 0xb;
        uVar4 = puVar9[3];
        fVar14 = *pfVar8;
        *puVar9 = puVar9[1];
        puVar9[1] = puVar9[2];
        uVar2 = uVar2 >> 8 ^ uVar4 >> 0x13 ^ uVar2 ^ uVar4;
        puVar9[2] = uVar4;
        puVar9[3] = uVar2;
        fVar14 = sinf(((fVar13 + fVar14) * ((float)(uVar2 >> 9 | 0x3f800000) + -1.0) - fVar13) *
                      0.017453292);
        fVar14 = local_98 +
                 fVar14 * ((fVar15 + fVar15) * ((float)(uVar11 >> 9 | 0x3f800000) + -1.0) - fVar15);
      }
      else {
        puVar9 = (uint *)nn::os::GetTlsValue(DAT_05ae7880);
        lVar6 = FUN_013b65c4(param_1);
        pfVar8 = (float *)(**(code **)(*(long *)(lVar6 + 0x1e0) + 0xf0))(lVar6 + 0x1e0);
        fVar12 = *pfVar8;
        lVar6 = FUN_013b65c4(param_1);
        pfVar8 = (float *)(**(code **)(*(long *)(lVar6 + 0x1e0) + 0xf0))(lVar6 + 0x1e0);
        uVar2 = puVar9[3];
        fVar14 = *pfVar8;
        uVar11 = *puVar9 ^ *puVar9 << 0xb;
        *puVar9 = puVar9[1];
        puVar9[1] = puVar9[2];
        uVar11 = uVar11 >> 8 ^ uVar2 >> 0x13 ^ uVar11 ^ uVar2;
        puVar9[2] = uVar2;
        puVar9[3] = uVar11;
        uVar4 = FUN_006f0400((*(float *)(param_1 + 0x38c) - (float)local_ac) -
                             *(float *)(param_1 + 0x38c),
                             (*(float *)(param_1 + 0x394) - local_a4) - *(float *)(param_1 + 0x394))
        ;
        puVar9 = (uint *)nn::os::GetTlsValue(DAT_05ae7880);
        lVar6 = FUN_013b65c4(param_1);
        pfVar8 = (float *)(**(code **)(*(long *)(lVar6 + 0x180) + 0xf0))(lVar6 + 0x180);
        puVar3 = PTR_DAT_04bb2d00;
        uVar2 = puVar9[3];
        fVar15 = *pfVar8;
        uVar10 = (ulong)(((float)uVar4 * 8.381903e-08 +
                         ((fVar12 + fVar14) * ((float)(uVar11 >> 9 | 0x3f800000) + -1.0) - fVar12))
                        * 11930465.0);
        uVar11 = *puVar9 ^ *puVar9 << 0xb;
        uVar11 = uVar11 >> 8 ^ uVar2 >> 0x13 ^ uVar11 ^ uVar2;
        *puVar9 = puVar9[1];
        puVar9[1] = puVar9[2];
        puVar9[2] = uVar2;
        puVar9[3] = uVar11;
        pfVar8 = (float *)(puVar3 + (uVar10 >> 0x18 & 0xff) * 0x10);
        fVar14 = (float)((uint)uVar10 & 0xffffff) * 5.9604645e-08;
        fVar15 = (fVar15 + -5.0) * ((float)(uVar11 >> 9 | 0x3f800000) + -1.0) + 5.0;
        fVar12 = *(float *)(param_1 + 0x38c) + (*pfVar8 + fVar14 * pfVar8[1]) * fVar15;
        fVar14 = (pfVar8[2] + fVar14 * pfVar8[3]) * fVar15 + *(float *)(param_1 + 0x394);
        _local_a0 = CONCAT44(fVar15 * 0.0 + *(float *)(param_1 + 0x390),fVar12);
      }
      fVar15 = (float)(int)((int)((float)(int)fVar12 / 5.0) - (uint)(fVar12 < 0.0)) * 0.5;
      local_88 = &PTR_FUN_048f9730;
      uVar11 = 0;
      if (fVar15 != (float)(int)fVar15) {
        uVar11 = (uint)(fVar15 < 0.0);
      }
      local_80 = (int)fVar15 - uVar11;
      fVar15 = (float)(int)((int)((float)(int)fVar14 / 5.0) - (uint)(fVar14 < 0.0)) * 0.5;
      uVar11 = 0;
      if (fVar15 != (float)(int)fVar15) {
        uVar11 = (uint)(fVar15 < 0.0);
      }
      iStack_7c = (int)fVar15 - uVar11;
      local_98 = fVar14;
      uVar10 = FUN_01318220(&local_88);
      if ((uVar10 & 1) == 0) {
        local_c0 = PTR_DAT_04bb2010 + 0x10;
        local_b8 = (int)((float)(int)*(float *)(param_1 + 0x330) / 5.0) -
                   (uint)(*(float *)(param_1 + 0x330) < 0.0);
        iStack_b4 = (int)((float)(int)*(float *)(param_1 + 0x338) / 5.0) -
                    (uint)(*(float *)(param_1 + 0x338) < 0.0);
        uVar10 = FUN_0168bb28(&local_c0);
        if ((uVar10 & 1) == 0) {
          local_c4[0] = 3;
          uVar10 = FUN_013b87d0(param_1 + 0x38c,local_c4);
          if ((uVar10 & 1) != 0) {
            if (*(int *)(*(long *)(param_1 + 0x48) + 0x174) == 0) {
              local_88 = (undefined **)CONCAT71(local_88._1_7_,3);
              uVar10 = FUN_013b87d0(&local_a0,&local_88);
              if ((uVar10 & 1) != 0) {
                *(float *)(param_1 + 0x330) = fVar12;
                *(float *)(param_1 + 0x338) = fVar14;
                *(undefined4 *)(param_1 + 0x334) = *(undefined4 *)(param_1 + 0x3c8);
                FUN_013b70c0(pbVar1);
                return 1;
              }
            }
            return 0;
          }
        }
      }
      *(undefined4 *)(param_1 + 0x338) = *(undefined4 *)(param_1 + 800);
      *(undefined8 *)(param_1 + 0x330) = *(undefined8 *)(param_1 + 0x318);
      *pbVar1 = *pbVar1 | 1;
    }
    uVar5 = 1;
  }
  return uVar5;
}


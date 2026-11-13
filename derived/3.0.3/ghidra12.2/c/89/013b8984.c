
/* WARNING: Removing unreachable block (ram,0x013b8b88) */

uint FUN_013b8984(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  float *pfVar6;
  long *plVar7;
  uint *puVar8;
  ulong uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined1 local_a4 [4];
  undefined *local_a0;
  int local_98;
  int iStack_94;
  undefined8 local_8c;
  float local_84;
  float local_80;
  float fStack_7c;
  float local_78;
  char local_70 [4];
  char local_6c [8];
  undefined4 local_64;
  
  local_6c[0] = '\0';
  local_70[0] = '\0';
  FUN_013b7618(param_1,local_70,local_6c);
  local_78 = *(float *)(param_1 + 0x394);
  fVar10 = *(float *)(param_1 + 0x330);
  fVar11 = *(float *)(param_1 + 0x338);
  fVar12 = *(float *)(param_1 + 0x318);
  fVar13 = *(float *)(param_1 + 800);
  local_80 = (float)*(undefined8 *)(param_1 + 0x38c);
  _local_80 = CONCAT44(*(undefined4 *)(param_1 + 0x3c8),local_80);
  if (*(int *)(param_1 + 0x460) == 1) {
    lVar5 = FUN_013b65c4(param_1);
    plVar7 = (long *)(lVar5 + 0xf0);
  }
  else {
    lVar5 = FUN_013b65c4(param_1);
    plVar7 = (long *)(lVar5 + 0xc0);
  }
  fVar12 = fVar12 - fVar10;
  fVar13 = fVar13 - fVar11;
  pfVar6 = (float *)(**(code **)(*plVar7 + 0xf0))();
  if (*pfVar6 + 1.0 < SQRT(fVar13 * fVar13 + fVar12 * fVar12)) {
LAB_013b8aa4:
    *(undefined4 *)(param_1 + 0x338) = *(undefined4 *)(param_1 + 800);
    *(undefined8 *)(param_1 + 0x330) = *(undefined8 *)(param_1 + 0x318);
  }
  else {
    fVar10 = *(float *)(param_1 + 0x38c);
    fVar11 = *(float *)(param_1 + 0x394);
    fVar12 = *(float *)(param_1 + 0x318);
    fVar13 = *(float *)(param_1 + 800);
    if (*(int *)(param_1 + 0x460) == 1) {
      lVar5 = FUN_013b65c4(param_1);
      plVar7 = (long *)(lVar5 + 0xf0);
    }
    else {
      lVar5 = FUN_013b65c4(param_1);
      plVar7 = (long *)(lVar5 + 0xc0);
    }
    fVar12 = fVar12 - fVar10;
    fVar13 = fVar13 - fVar11;
    pfVar6 = (float *)(**(code **)(*plVar7 + 0xf0))();
    if (*pfVar6 + 1.0 < SQRT(fVar13 * fVar13 + fVar12 * fVar12)) goto LAB_013b8aa4;
    if ((local_6c[0] != '\0') && (local_70[0] == '\0')) {
      uVar4 = 0;
      goto LAB_013b8b0c;
    }
    local_8c = 0;
    local_84 = 0.0;
    if ((*(long *)PTR_DAT_04bb2200 == 0) ||
       (lVar5 = *(long *)(*(long *)PTR_DAT_04bb2200 + 0x50), lVar5 == 0)) {
      fVar12 = 0.0;
    }
    else {
      local_64 = 0;
      fVar12 = 0.0;
      lVar5 = *(long *)(lVar5 + 0x118);
      if (lVar5 != 0) {
        FUN_015bca00(lVar5,&local_8c,(undefined8 *)(param_1 + 0x38c),0,1,1);
        fVar12 = (float)local_8c;
      }
    }
    if (SQRT(local_84 * local_84 + fVar12 * fVar12) == 0.0) {
      lVar5 = FUN_013b65c4(param_1);
      pfVar6 = (float *)(**(code **)(*(long *)(lVar5 + 0x1b0) + 0xf0))(lVar5 + 0x1b0);
      puVar2 = PTR_DAT_04bb39d8;
      fVar13 = *pfVar6;
      puVar8 = (uint *)nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb39d8);
      uVar1 = puVar8[3];
      uVar4 = *puVar8 ^ *puVar8 << 0xb;
      *puVar8 = puVar8[1];
      puVar8[1] = puVar8[2];
      uVar4 = uVar4 >> 8 ^ uVar1 >> 0x13 ^ uVar4 ^ uVar1;
      puVar8[2] = uVar1;
      puVar8[3] = uVar4;
      puVar8 = (uint *)nn::os::GetTlsValue(*(undefined4 *)puVar2);
      lVar5 = FUN_013b65c4(param_1);
      pfVar6 = (float *)(**(code **)(*(long *)(lVar5 + 0x1e0) + 0xf0))(lVar5 + 0x1e0);
      fVar10 = *pfVar6;
      lVar5 = FUN_013b65c4(param_1);
      pfVar6 = (float *)(**(code **)(*(long *)(lVar5 + 0x1e0) + 0xf0))(lVar5 + 0x1e0);
      uVar1 = *puVar8 ^ *puVar8 << 0xb;
      uVar3 = puVar8[3];
      fVar12 = *pfVar6;
      *puVar8 = puVar8[1];
      puVar8[1] = puVar8[2];
      uVar1 = uVar1 >> 8 ^ uVar3 >> 0x13 ^ uVar1 ^ uVar3;
      puVar8[2] = uVar3;
      puVar8[3] = uVar1;
      fVar12 = cosf(((fVar10 + fVar12) * ((float)(uVar1 >> 9 | 0x3f800000) + -1.0) - fVar10) *
                    0.017453292);
      fVar10 = local_80 +
               fVar12 * ((fVar13 + fVar13) * ((float)(uVar4 >> 9 | 0x3f800000) + -1.0) - fVar13);
      _local_80 = CONCAT44(fStack_7c,fVar10);
      puVar8 = (uint *)nn::os::GetTlsValue(*(undefined4 *)puVar2);
      uVar4 = *puVar8 ^ *puVar8 << 0xb;
      uVar1 = puVar8[3];
      *puVar8 = puVar8[1];
      puVar8[1] = puVar8[2];
      uVar4 = uVar4 >> 8 ^ uVar1 >> 0x13 ^ uVar4 ^ uVar1;
      puVar8[2] = uVar1;
      puVar8[3] = uVar4;
      puVar8 = (uint *)nn::os::GetTlsValue(*(undefined4 *)puVar2);
      lVar5 = FUN_013b65c4(param_1);
      pfVar6 = (float *)(**(code **)(*(long *)(lVar5 + 0x1e0) + 0xf0))(lVar5 + 0x1e0);
      fVar11 = *pfVar6;
      lVar5 = FUN_013b65c4(param_1);
      pfVar6 = (float *)(**(code **)(*(long *)(lVar5 + 0x1e0) + 0xf0))(lVar5 + 0x1e0);
      uVar1 = *puVar8 ^ *puVar8 << 0xb;
      uVar3 = puVar8[3];
      fVar12 = *pfVar6;
      *puVar8 = puVar8[1];
      puVar8[1] = puVar8[2];
      uVar1 = uVar1 >> 8 ^ uVar3 >> 0x13 ^ uVar1 ^ uVar3;
      puVar8[2] = uVar3;
      puVar8[3] = uVar1;
      fVar12 = sinf(((fVar11 + fVar12) * ((float)(uVar1 >> 9 | 0x3f800000) + -1.0) - fVar11) *
                    0.017453292);
      fVar12 = local_78 +
               fVar12 * ((fVar13 + fVar13) * ((float)(uVar4 >> 9 | 0x3f800000) + -1.0) - fVar13);
    }
    else {
      puVar8 = (uint *)nn::os::GetTlsValue(DAT_05ae7880);
      lVar5 = FUN_013b65c4(param_1);
      pfVar6 = (float *)(**(code **)(*(long *)(lVar5 + 0x1e0) + 0xf0))(lVar5 + 0x1e0);
      fVar10 = *pfVar6;
      lVar5 = FUN_013b65c4(param_1);
      pfVar6 = (float *)(**(code **)(*(long *)(lVar5 + 0x1e0) + 0xf0))(lVar5 + 0x1e0);
      uVar1 = puVar8[3];
      fVar12 = *pfVar6;
      uVar4 = *puVar8 ^ *puVar8 << 0xb;
      *puVar8 = puVar8[1];
      puVar8[1] = puVar8[2];
      uVar4 = uVar4 >> 8 ^ uVar1 >> 0x13 ^ uVar4 ^ uVar1;
      puVar8[2] = uVar1;
      puVar8[3] = uVar4;
      uVar3 = FUN_006f0400((*(float *)(param_1 + 0x38c) - (float)local_8c) -
                           *(float *)(param_1 + 0x38c),
                           (*(float *)(param_1 + 0x394) - local_84) - *(float *)(param_1 + 0x394));
      puVar8 = (uint *)nn::os::GetTlsValue(DAT_05ae7880);
      lVar5 = FUN_013b65c4(param_1);
      pfVar6 = (float *)(**(code **)(*(long *)(lVar5 + 0x1b0) + 0xf0))(lVar5 + 0x1b0);
      puVar2 = PTR_DAT_04bb2d00;
      uVar1 = puVar8[3];
      fVar13 = *pfVar6;
      uVar9 = (ulong)(((float)uVar3 * 8.381903e-08 +
                      ((fVar10 + fVar12) * ((float)(uVar4 >> 9 | 0x3f800000) + -1.0) - fVar10)) *
                     11930465.0);
      uVar4 = *puVar8 ^ *puVar8 << 0xb;
      uVar4 = uVar4 >> 8 ^ uVar1 >> 0x13 ^ uVar4 ^ uVar1;
      *puVar8 = puVar8[1];
      puVar8[1] = puVar8[2];
      puVar8[2] = uVar1;
      puVar8[3] = uVar4;
      pfVar6 = (float *)(puVar2 + (uVar9 >> 0x18 & 0xff) * 0x10);
      fVar12 = (float)((uint)uVar9 & 0xffffff) * 5.9604645e-08;
      fVar13 = (fVar13 + -5.0) * ((float)(uVar4 >> 9 | 0x3f800000) + -1.0) + 5.0;
      fVar10 = *(float *)(param_1 + 0x38c) + (*pfVar6 + fVar12 * pfVar6[1]) * fVar13;
      fVar12 = (pfVar6[2] + fVar12 * pfVar6[3]) * fVar13 + *(float *)(param_1 + 0x394);
      _local_80 = CONCAT44(fVar13 * 0.0 + *(float *)(param_1 + 0x390),fVar10);
    }
    local_a0 = PTR_DAT_04bb2010 + 0x10;
    local_98 = (int)((float)(int)*(float *)(param_1 + 0x330) / 5.0) -
               (uint)(*(float *)(param_1 + 0x330) < 0.0);
    iStack_94 = (int)((float)(int)*(float *)(param_1 + 0x338) / 5.0) -
                (uint)(*(float *)(param_1 + 0x338) < 0.0);
    local_78 = fVar12;
    uVar9 = FUN_0168bb28(&local_a0);
    if ((uVar9 & 1) == 0) {
      local_a4[0] = 6;
      uVar4 = FUN_013b87d0(&local_80,local_a4);
      if ((uVar4 & 1) != 0) {
        *(float *)(param_1 + 0x330) = fVar10;
        *(float *)(param_1 + 0x338) = fVar12;
        *(undefined4 *)(param_1 + 0x334) = *(undefined4 *)(param_1 + 0x3c8);
        *(byte *)(param_1 + 0x300) = *(byte *)(param_1 + 0x300) | 1;
      }
      goto LAB_013b8b0c;
    }
    *(undefined4 *)(param_1 + 0x338) = *(undefined4 *)(param_1 + 800);
    *(undefined8 *)(param_1 + 0x330) = *(undefined8 *)(param_1 + 0x318);
  }
  *(byte *)(param_1 + 0x300) = *(byte *)(param_1 + 0x300) | 1;
  uVar4 = 1;
LAB_013b8b0c:
  return uVar4 & 1;
}


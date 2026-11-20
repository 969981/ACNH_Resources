
void FUN_03ffc950(float param_1,undefined8 *param_2,ulong param_3,ulong param_4)

{
  ulong uVar1;
  undefined2 uVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  ulong uVar6;
  long lVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float local_d0 [16];
  
  uVar6 = 0;
  if (param_4 >> 0x1f != 0) {
    uVar6 = param_3 / (param_4 >> 0x1f);
  }
  *(undefined4 *)(param_2 + 2) = 0;
  param_2[0x8c] = 0;
  param_2[0x8d] = 0;
  param_2[0x8e] = 0;
  param_2[0x8f] = 0;
  param_2[0x90] = 0;
  param_2[0x91] = 0;
  param_2[0x92] = 0;
  param_2[0x93] = 0;
  *param_2 = 0;
  param_2[1] = uVar6;
  uVar6 = 0;
  do {
    fVar11 = 0.0;
    lVar7 = 0;
    do {
      fVar10 = ((float)(int)lVar7 + -7.0) - (float)(uVar6 & 0xffffffff) * 0.0625;
      fVar8 = (float)FUN_03ffb8f0(fVar10 * 0.44879895);
      bVar3 = false;
      bVar4 = false;
      bVar5 = false;
      if (-7.0 <= fVar10) {
        bVar3 = false;
        bVar4 = false;
        bVar5 = true;
        if (!NAN(fVar10)) {
          bVar3 = fVar10 < 7.0;
          bVar4 = fVar10 == 7.0;
          bVar5 = false;
        }
      }
      fVar9 = 0.0;
      if ((bVar4 || bVar3 != bVar5) &&
         (fVar10 = (param_1 / ((float)(long)param_3 * 4.656613e-10 * 0.5)) * fVar10 * 3.1415927,
         fVar9 = fVar8, fVar10 != 0.0)) {
        fVar9 = sinf(fVar10);
        fVar9 = fVar8 * (fVar9 / fVar10);
      }
      fVar11 = fVar11 + fVar9;
      local_d0[lVar7] = fVar9;
      lVar7 = lVar7 + 1;
    } while (lVar7 != 0x10);
    uVar1 = uVar6 + 1;
    local_d0[1] = local_d0[1] / fVar11;
    local_d0[0] = local_d0[0] / fVar11;
    local_d0[2] = local_d0[2] / fVar11;
    local_d0[3] = local_d0[3] / fVar11;
    local_d0[4] = local_d0[4] / fVar11;
    local_d0[6] = local_d0[6] / fVar11;
    local_d0[8] = local_d0[8] / fVar11;
    local_d0[9] = local_d0[9] / fVar11;
    local_d0[5] = local_d0[5] / fVar11;
    local_d0[7] = local_d0[7] / fVar11;
    local_d0[0xb] = local_d0[0xb] / fVar11;
    local_d0[10] = local_d0[10] / fVar11;
    uVar2 = (undefined2)(int)(local_d0[0] * 32767.0);
    *(undefined2 *)(param_2 + uVar6 * 8 + 4) = uVar2;
    *(undefined2 *)(param_2 + uVar6 * 8 + 8) = uVar2;
    uVar2 = (undefined2)(int)(local_d0[1] * 32767.0);
    *(undefined2 *)((long)param_2 + uVar6 * 0x40 + 0x22) = uVar2;
    *(undefined2 *)((long)param_2 + uVar6 * 0x40 + 0x42) = uVar2;
    uVar2 = (undefined2)(int)(local_d0[2] * 32767.0);
    *(undefined2 *)((long)param_2 + uVar6 * 0x40 + 0x24) = uVar2;
    *(undefined2 *)((long)param_2 + uVar6 * 0x40 + 0x44) = uVar2;
    local_d0[0xc] = local_d0[0xc] / fVar11;
    local_d0[0xd] = local_d0[0xd] / fVar11;
    uVar2 = (undefined2)(int)(local_d0[3] * 32767.0);
    *(undefined2 *)((long)param_2 + uVar6 * 0x40 + 0x26) = uVar2;
    *(undefined2 *)((long)param_2 + uVar6 * 0x40 + 0x46) = uVar2;
    uVar2 = (undefined2)(int)(local_d0[4] * 32767.0);
    *(undefined2 *)(param_2 + uVar6 * 8 + 5) = uVar2;
    *(undefined2 *)(param_2 + uVar6 * 8 + 9) = uVar2;
    uVar2 = (undefined2)(int)(local_d0[5] * 32767.0);
    *(undefined2 *)((long)param_2 + uVar6 * 0x40 + 0x2a) = uVar2;
    *(undefined2 *)((long)param_2 + uVar6 * 0x40 + 0x4a) = uVar2;
    local_d0[0xe] = local_d0[0xe] / fVar11;
    local_d0[0xf] = local_d0[0xf] / fVar11;
    uVar2 = (undefined2)(int)(local_d0[6] * 32767.0);
    *(undefined2 *)((long)param_2 + uVar6 * 0x40 + 0x2c) = uVar2;
    *(undefined2 *)((long)param_2 + uVar6 * 0x40 + 0x4c) = uVar2;
    uVar2 = (undefined2)(int)(local_d0[7] * 32767.0);
    *(undefined2 *)((long)param_2 + uVar6 * 0x40 + 0x2e) = uVar2;
    *(undefined2 *)((long)param_2 + uVar6 * 0x40 + 0x4e) = uVar2;
    uVar2 = (undefined2)(int)(local_d0[8] * 32767.0);
    *(undefined2 *)(param_2 + uVar6 * 8 + 6) = uVar2;
    *(undefined2 *)(param_2 + uVar6 * 8 + 10) = uVar2;
    uVar2 = (undefined2)(int)(local_d0[9] * 32767.0);
    *(undefined2 *)((long)param_2 + uVar6 * 0x40 + 0x32) = uVar2;
    *(undefined2 *)((long)param_2 + uVar6 * 0x40 + 0x52) = uVar2;
    uVar2 = (undefined2)(int)(local_d0[10] * 32767.0);
    *(undefined2 *)((long)param_2 + uVar6 * 0x40 + 0x34) = uVar2;
    *(undefined2 *)((long)param_2 + uVar6 * 0x40 + 0x54) = uVar2;
    uVar2 = (undefined2)(int)(local_d0[0xb] * 32767.0);
    *(undefined2 *)((long)param_2 + uVar6 * 0x40 + 0x36) = uVar2;
    *(undefined2 *)((long)param_2 + uVar6 * 0x40 + 0x56) = uVar2;
    uVar2 = (undefined2)(int)(local_d0[0xc] * 32767.0);
    *(undefined2 *)(param_2 + uVar6 * 8 + 7) = uVar2;
    *(undefined2 *)(param_2 + uVar6 * 8 + 0xb) = uVar2;
    uVar2 = (undefined2)(int)(local_d0[0xd] * 32767.0);
    *(undefined2 *)((long)param_2 + uVar6 * 0x40 + 0x3a) = uVar2;
    *(undefined2 *)((long)param_2 + uVar6 * 0x40 + 0x5a) = uVar2;
    uVar2 = (undefined2)(int)(local_d0[0xe] * 32767.0);
    *(undefined2 *)((long)param_2 + uVar6 * 0x40 + 0x3c) = uVar2;
    *(undefined2 *)((long)param_2 + uVar6 * 0x40 + 0x5c) = uVar2;
    uVar2 = (undefined2)(int)(local_d0[0xf] * 32767.0);
    *(undefined2 *)((long)param_2 + uVar6 * 0x40 + 0x3e) = uVar2;
    *(undefined2 *)((long)param_2 + uVar6 * 0x40 + 0x5e) = uVar2;
    uVar6 = uVar1;
  } while (uVar1 != 0x11);
  return;
}


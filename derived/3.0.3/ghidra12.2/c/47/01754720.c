
void FUN_01754720(float param_1,uint *param_2,float *param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  float *pfVar3;
  int iVar4;
  ulong uVar5;
  uint *puVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  uVar2 = param_4;
  if (0xe < (int)param_4) {
    uVar2 = 0xf;
  }
  fVar7 = (float)(int)uVar2;
  param_2[2] = uVar2;
  *param_2 = uVar2;
  param_2[1] = uVar2 + 1;
  if (-1 < (int)uVar2) {
    uVar5 = 0;
    pfVar3 = (float *)(param_2 + 6);
    do {
      fVar10 = param_3[2];
      iVar4 = (int)uVar5;
      uVar5 = uVar5 + 1;
      fVar8 = *param_3;
      fVar9 = param_3[1];
      pfVar3[3] = 0.0;
      pfVar3[4] = 0.0;
      pfVar3[5] = 0.0;
      pfVar3[6] = 1.0;
      pfVar3[-1] = fVar10 + 0.0;
      *pfVar3 = fVar8 + 0.0;
      fVar9 = fVar9 + (param_1 / fVar7) * (float)iVar4;
      pfVar3[-3] = fVar8 + 0.0;
      pfVar3[-2] = fVar9;
      pfVar3[1] = fVar9;
      pfVar3[2] = fVar10 + 0.0;
      pfVar3 = pfVar3 + 10;
    } while (uVar2 + 1 != uVar5);
  }
  param_2[0xc] = 0;
  if (0 < (int)param_4) {
    puVar6 = param_2 + 0xd;
    if ((int)uVar2 < 2) {
      uVar2 = 1;
    }
    uVar5 = (ulong)uVar2;
    pfVar3 = (float *)(param_2 + 0xa8);
    do {
      uVar5 = uVar5 - 1;
      *(uint **)(pfVar3 + -4) = puVar6 + -10;
      *(uint **)(pfVar3 + -2) = puVar6;
      puVar6 = puVar6 + 10;
      *pfVar3 = param_1 / fVar7;
      pfVar3 = pfVar3 + 6;
    } while (uVar5 != 0);
  }
  param_2[0xa8] = 0;
  *(uint **)(param_2 + 0xa4) = param_2 + 3;
  *(uint **)(param_2 + 0xa6) = param_2 + 0xd;
  *(uint **)(param_2 + 0xaa) = param_2 + 0xd;
  *(uint **)(param_2 + 0xac) = param_2 + 0x17;
  *(uint **)(param_2 + 0xb0) = param_2 + 0x17;
  param_2[0xae] = 0x4039999a;
  param_2[0xb4] = 0x4039999a;
  *(uint **)(param_2 + 0xb8) = param_2 + 0x2b;
  param_2[0xba] = 0x4039999a;
  *(uint **)(param_2 + 0xbc) = param_2 + 0x2b;
  *(uint **)(param_2 + 0xbe) = param_2 + 0x35;
  param_2[0xc0] = 0x40400000;
  *(uint **)(param_2 + 0xc2) = param_2 + 0x35;
  *(uint **)(param_2 + 0xb2) = param_2 + 0x21;
  *(uint **)(param_2 + 0xb6) = param_2 + 0x21;
  *(uint **)(param_2 + 0xc4) = param_2 + 0x3f;
  param_2[0xc6] = 0x40dccccd;
  uVar2 = nn::os::GetSystemTick();
  uVar1 = (uVar2 ^ uVar2 >> 0x1e) * 0x6c078965 + 1;
  uVar2 = uVar1 ^ uVar1 * 0x800;
  uVar1 = (uVar1 ^ uVar1 >> 0x1e) * 0x6c078965 + 2;
  uVar1 = (uVar1 ^ uVar1 >> 0x1e) * 0x6c078965 + 3;
  uVar1 = (uVar1 ^ uVar1 >> 0x1e) * 0x6c078965 + 4;
  param_2[0x104] =
       (uint)(((float)((uVar2 >> 8 ^ uVar1 >> 0x13 ^ uVar2 ^ uVar1) >> 9 | 0x3f800000) + -1.0) *
              3.1415927 + 0.0);
  return;
}


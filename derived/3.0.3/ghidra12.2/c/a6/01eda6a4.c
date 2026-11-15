
void FUN_01eda6a4(long param_1)

{
  ulong uVar1;
  float *pfVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  
  pfVar2 = (float *)(param_1 + 0xae30);
  nn::os::GetSystemTick();
  lVar5 = *(long *)(param_1 + 8);
  uVar7 = *(undefined8 *)(*(long *)(lVar5 + 0x68) + 0x278);
  *(undefined4 *)(param_1 + 0xae38) = *(undefined4 *)(*(long *)(lVar5 + 0x68) + 0x280);
  *(undefined8 *)pfVar2 = uVar7;
  uVar4 = *(uint *)(lVar5 + 0x288);
  *(undefined4 *)(lVar5 + 0x288) = *(undefined4 *)(lVar5 + 0x28c);
  uVar4 = uVar4 ^ uVar4 << 0xb;
  *(undefined4 *)(lVar5 + 0x28c) = *(undefined4 *)(lVar5 + 0x290);
  uVar3 = *(uint *)(lVar5 + 0x294);
  *(uint *)(lVar5 + 0x290) = uVar3;
  uVar4 = uVar4 >> 8 ^ uVar3 >> 0x13 ^ uVar4 ^ uVar3;
  *(uint *)(lVar5 + 0x294) = uVar4;
  uVar6 = (ulong)((((float)(uVar4 >> 9 | 0x3f800000) + -1.0) * 360.0 + -180.0) * 11930465.0);
  uVar1 = uVar6 >> 0x18 & 0xff;
  fVar8 = (float)((uint)uVar6 & 0xffffff) * 5.9604645e-08;
  fVar10 = (float)(&DAT_04199798)[uVar1 * 4];
  fVar11 = (float)(&DAT_0419979c)[uVar1 * 4];
  fVar12 = (float)(&DAT_041997a0)[uVar1 * 4];
  fVar13 = (float)(&DAT_041997a4)[uVar1 * 4];
  lVar5 = *(long *)(param_1 + 8);
  uVar4 = *(uint *)(lVar5 + 0x288);
  *(undefined4 *)(lVar5 + 0x288) = *(undefined4 *)(lVar5 + 0x28c);
  uVar4 = uVar4 ^ uVar4 << 0xb;
  *(undefined4 *)(lVar5 + 0x28c) = *(undefined4 *)(lVar5 + 0x290);
  uVar3 = *(uint *)(lVar5 + 0x294);
  *(uint *)(lVar5 + 0x290) = uVar3;
  uVar4 = uVar4 >> 8 ^ uVar3 >> 0x13 ^ uVar4 ^ uVar3;
  *(uint *)(lVar5 + 0x294) = uVar4;
  fVar9 = ((float)(uVar4 >> 9 | 0x3f800000) + -1.0) * 25.5 + 14.5;
  fVar10 = *pfVar2 + (fVar10 + fVar8 * fVar11) * fVar9;
  fVar8 = *(float *)(param_1 + 0xae38) + (fVar12 + fVar8 * fVar13) * fVar9;
  *pfVar2 = fVar10;
  *(float *)(param_1 + 0xae38) = fVar8;
  lVar5 = *(long *)(*(long *)(param_1 + 8) + 0x68);
  uVar4 = FUN_006f0400(fVar10 - *(float *)(lVar5 + 0x278),fVar8 - *(float *)(lVar5 + 0x280));
  FUN_01e5ae50((float)uVar4,*(undefined8 *)(param_1 + 0x10),pfVar2,PTR_DAT_04bb6740);
  return;
}


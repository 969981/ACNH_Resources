
void FUN_01817850(long param_1)

{
  ulong uVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  float *pfVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  
  lVar9 = *(long *)(param_1 + 8);
  if (*(long *)(lVar9 + 0x3d8) != 0) {
    puVar4 = (uint *)nn::os::GetTlsValue(DAT_05ae7880);
    uVar2 = *puVar4 ^ *puVar4 << 0xb;
    uVar3 = puVar4[3];
    *puVar4 = puVar4[1];
    puVar4[1] = puVar4[2];
    uVar2 = uVar2 >> 8 ^ uVar3 >> 0x13 ^ uVar2 ^ uVar3;
    puVar4[2] = uVar3;
    puVar4[3] = uVar2;
    lVar7 = *(long *)(lVar9 + 0x460);
    iVar6 = 0;
    if (lVar7 != 0) {
      pfVar5 = (float *)(**(code **)(*(long *)(lVar7 + 0x180) + 0xf0))(lVar7 + 0x180);
      iVar6 = (int)(long)(*pfVar5 * 11930465.0);
    }
    uVar2 = iVar6 * ((uVar2 & 2) - 1);
    uVar1 = (ulong)(uVar2 >> 0x18 ^ 0x80);
    lVar7 = *(long *)(lVar9 + 0x300);
    fVar10 = (float)(uVar2 & 0xffffff) * 5.9604645e-08;
    lVar9 = *(long *)(lVar9 + 0x3d8);
    fVar12 = *(float *)(lVar7 + 0x27c);
    fVar11 = (float)(&DAT_04199798)[uVar1 * 4] + fVar10 * (float)(&DAT_0419979c)[uVar1 * 4] +
             *(float *)(lVar7 + 0x278);
    lVar8 = *(long *)(*(long *)(lVar9 + 0x48) + 0x68);
    fVar10 = (float)(&DAT_041997a0)[uVar1 * 4] + fVar10 * (float)(&DAT_041997a4)[uVar1 * 4] +
             *(float *)(lVar7 + 0x280);
    fVar14 = *(float *)(lVar8 + 0x280) - fVar10;
    fVar13 = *(float *)(lVar8 + 0x278) - fVar11;
    fVar13 = fVar14 * fVar14 + fVar13 * fVar13;
    *(undefined4 *)(lVar9 + 0x2b0) = *(undefined4 *)(lVar9 + 700);
    if (fVar13 < *(float *)(lVar9 + 0x2c8)) {
      *(float *)(lVar9 + 0x2c8) = fVar13;
      *(float *)(lVar9 + 0x2cc) = fVar11;
      *(float *)(lVar9 + 0x2d4) = fVar10;
      *(float *)(lVar9 + 0x2d0) = fVar12 + 0.0;
    }
  }
  return;
}


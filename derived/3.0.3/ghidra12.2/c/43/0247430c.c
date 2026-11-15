
/* WARNING: Removing unreachable block (ram,0x024747c8) */

void FUN_0247430c(long param_1,uint *param_2)

{
  undefined *puVar1;
  int iVar2;
  long *plVar3;
  float *pfVar4;
  undefined1 uVar5;
  uint uVar6;
  long lVar7;
  undefined8 *puVar8;
  int iVar9;
  int iVar10;
  long lVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  
  *(undefined8 *)(param_1 + 0x1980) = 0;
  *(undefined8 *)(param_1 + 0x1988) = 0;
  *(undefined8 *)(param_1 + 0x1990) = 0;
  *(undefined8 *)(param_1 + 0x1998) = 0;
  *(undefined8 *)(param_1 + 0x19a0) = 0;
  *(undefined8 *)(param_1 + 0x19a8) = 0;
  *(undefined8 *)(param_1 + 0x19b0) = 0;
  *(undefined8 *)(param_1 + 0x19b8) = 0;
  *(undefined8 *)(param_1 + 0x19c0) = 0;
  *(undefined8 *)(param_1 + 0x1960) = *(undefined8 *)(param_1 + 0x18e0);
  *(undefined8 *)(param_1 + 0x19c8) = 0;
  *(undefined8 *)(param_1 + 0x1968) = *(undefined8 *)(param_1 + 0x18e8);
  *(undefined8 *)(param_1 + 0x1970) = *(undefined8 *)(param_1 + 0x18f0);
  *(undefined8 *)(param_1 + 0x1978) = *(undefined8 *)(param_1 + 0x18f8);
  puVar1 = PTR_DAT_04bb27c0;
  *(undefined8 *)(param_1 + 0x19d0) = 0;
  *(undefined2 *)(param_1 + 0x19d8) = 0;
  lVar7 = *(long *)puVar1;
  uVar5 = 0;
  if (lVar7 == 0) goto LAB_02474478;
  uVar6 = *param_2;
  if ((((uVar6 == 0) ||
       (lVar11 = *(long *)(*(long *)(*(long *)(lVar7 + 0x1c0) + 8) +
                          ((ulong)(uVar6 >> 0x11) & 0x7ff8)), lVar11 == 0)) ||
      ((*(uint *)(lVar11 + 0x248) >> 1 & 1) != 0)) || (*(uint *)(lVar11 + 0x230) != uVar6)) {
    lVar11 = 0;
  }
  if ((*(int *)(lVar7 + 0x288) == 1) || (*(int *)(lVar7 + 0x288) == -1)) {
    plVar3 = (long *)nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
    lVar7 = *(long *)puVar1;
    iVar2 = (**(code **)(*plVar3 + 0x60))();
    if (iVar2 < 0x11) {
      uVar6 = 1;
    }
    else {
      uVar6 = *(uint *)(lVar7 + 0x5e8);
      if (4 < uVar6) goto LAB_02474424;
      uVar6 = 0x1aU >> (ulong)(uVar6 & 0x1f) & 1;
    }
  }
  else {
LAB_02474424:
    uVar6 = 0;
  }
  if (lVar11 != 0) {
    uVar6 = uVar6 ^ 1;
    if (*(int *)(lVar11 + 0x150) != 1) {
      uVar6 = 1;
    }
    if (uVar6 == 0) {
      iVar2 = *(int *)(lVar11 + 0x15c);
      if (iVar2 == 1) {
        uVar5 = 2;
      }
      else if (iVar2 == 10) {
        uVar5 = 3;
      }
      else if (iVar2 == 0x4f) {
        uVar5 = 4;
      }
      else {
        uVar5 = 5;
        if (iVar2 != 0x85) {
          uVar5 = 1;
        }
      }
      goto LAB_02474478;
    }
  }
  uVar5 = 0;
LAB_02474478:
  *(undefined4 *)(param_1 + 0x1981) = 0;
  *(undefined1 *)(param_1 + 0x1980) = uVar5;
  lVar7 = *(long *)(param_1 + 0x68);
  iVar2 = (int)(*(float *)(lVar7 + 0x278) * 4.0);
  if (0x7ffe < iVar2) {
    iVar2 = 0x7fff;
  }
  if (iVar2 < -0x7fff) {
    iVar2 = -0x8000;
  }
  *(short *)(param_1 + 0x1985) = (short)iVar2;
  iVar2 = (int)(*(float *)(lVar7 + 0x27c) * 4.0);
  if (0x7ffe < iVar2) {
    iVar2 = 0x7fff;
  }
  if (iVar2 < -0x7fff) {
    iVar2 = -0x8000;
  }
  *(short *)(param_1 + 0x1987) = (short)iVar2;
  iVar2 = (int)(*(float *)(lVar7 + 0x280) * 4.0);
  if (0x7ffe < iVar2) {
    iVar2 = 0x7fff;
  }
  if (iVar2 < -0x7fff) {
    iVar2 = -0x8000;
  }
  *(short *)(param_1 + 0x1989) = (short)iVar2;
  lVar7 = FUN_0251e98c(1);
  pfVar4 = (float *)(**(code **)(*(long *)(lVar7 + 0x2290) + 0xf0))(lVar7 + 0x2290);
  puVar1 = PTR_DAT_04bb2d00;
  lVar7 = *(long *)(param_1 + 0x68);
  if (lVar7 == 0) {
    iVar2 = 0;
    iVar10 = 0;
    iVar9 = 0;
  }
  else {
    fVar12 = *pfVar4;
    pfVar4 = (float *)(PTR_DAT_04bb2d00 + ((ulong)(*(uint *)(lVar7 + 0x2b4) >> 0x14) & 0xff0));
    fVar13 = (float)(*(uint *)(lVar7 + 0x2b4) & 0xffffff) * 5.9604645e-08;
    fVar14 = *pfVar4 + fVar13 * pfVar4[1];
    fVar13 = pfVar4[2] + fVar13 * pfVar4[3];
    fVar15 = fVar14 * 0.0;
    iVar2 = (int)((*(float *)(lVar7 + 0x278) +
                  ((fVar15 * 0.0 + fVar13 * 0.0) - fVar12 * (fVar14 + 0.0))) * 4.0);
    iVar10 = (int)((*(float *)(lVar7 + 0x27c) +
                   (((fVar15 * 0.0 + 1.0) * 0.0 + fVar13 * 0.0 * 0.0) - fVar12 * fVar15)) * 4.0);
    iVar9 = (int)((*(float *)(lVar7 + 0x280) +
                  ((fVar13 * 0.0 * 0.0 - fVar14 * 0.0) - fVar12 * fVar13)) * 4.0);
  }
  if (0x7ffe < iVar2) {
    iVar2 = 0x7fff;
  }
  if (iVar2 < -0x7fff) {
    iVar2 = -0x8000;
  }
  if (0x7ffe < iVar10) {
    iVar10 = 0x7fff;
  }
  *(short *)(param_1 + 0x198b) = (short)iVar2;
  if (iVar10 < -0x7fff) {
    iVar10 = -0x8000;
  }
  if (0x7ffe < iVar9) {
    iVar9 = 0x7fff;
  }
  *(short *)(param_1 + 0x198d) = (short)iVar10;
  if (iVar9 < -0x7fff) {
    iVar9 = -0x8000;
  }
  *(short *)(param_1 + 0x198f) = (short)iVar9;
  if (lVar7 == 0) {
    iVar2 = 0;
    iVar9 = 0;
    iVar10 = 0;
  }
  else {
    pfVar4 = (float *)(puVar1 + ((ulong)(*(uint *)(lVar7 + 0x2b4) >> 0x14) & 0xff0));
    fVar12 = (float)(*(uint *)(lVar7 + 0x2b4) & 0xffffff) * 5.9604645e-08;
    fVar13 = *pfVar4 + fVar12 * pfVar4[1];
    fVar12 = pfVar4[2] + fVar12 * pfVar4[3];
    fVar14 = fVar13 * 0.0;
    iVar2 = (int)((*(float *)(lVar7 + 0x278) + fVar14 * 0.0 + fVar12 * 0.0 + (fVar13 + 0.0) * 10.0)
                 * 4.0);
    iVar10 = (int)((*(float *)(lVar7 + 0x27c) +
                   (fVar14 * 0.0 + 1.0) * 0.0 + fVar12 * 0.0 * 0.0 + fVar14 * 10.0) * 4.0);
    iVar9 = (int)((*(float *)(lVar7 + 0x280) + (fVar12 * 0.0 * 0.0 - fVar13 * 0.0) + fVar12 * 10.0)
                 * 4.0);
  }
  if (0x7ffe < iVar2) {
    iVar2 = 0x7fff;
  }
  if (iVar2 < -0x7fff) {
    iVar2 = -0x8000;
  }
  if (0x7ffe < iVar10) {
    iVar10 = 0x7fff;
  }
  *(short *)(param_1 + 0x1991) = (short)iVar2;
  if (iVar10 < -0x7fff) {
    iVar10 = -0x8000;
  }
  if (0x7ffe < iVar9) {
    iVar9 = 0x7fff;
  }
  *(short *)(param_1 + 0x1993) = (short)iVar10;
  if (iVar9 < -0x7fff) {
    iVar9 = -0x8000;
  }
  *(short *)(param_1 + 0x1995) = (short)iVar9;
  if (*(long *)(param_1 + 0x298) == 0) {
    puVar8 = (undefined8 *)&DAT_05586008;
  }
  else {
    lVar7 = *(long *)(*(long *)(param_1 + 0x298) + 0x1480);
    puVar8 = (undefined8 *)(lVar7 + ((ulong)*(uint *)(lVar7 + 0x10) & 1) * 0x20 + 0x14);
  }
  *(undefined8 *)(param_1 + 0x1997) = *puVar8;
  *(undefined1 *)(param_1 + 0x199f) = 0;
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
  FUN_03ebb160(lVar7,0x2d);
  return;
}


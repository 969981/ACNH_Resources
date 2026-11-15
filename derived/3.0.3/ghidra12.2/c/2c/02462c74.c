
/* WARNING: Removing unreachable block (ram,0x02462e84) */

void FUN_02462c74(long param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  uint uVar4;
  int iVar5;
  undefined8 uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  *(undefined8 *)(param_1 + 0x1980) = 0;
  *(undefined8 *)(param_1 + 0x1988) = 0;
  *(undefined8 *)(param_1 + 0x1990) = 0;
  *(undefined8 *)(param_1 + 0x19a0) = 0;
  *(undefined8 *)(param_1 + 0x19a8) = 0;
  *(undefined8 *)(param_1 + 0x19b0) = 0;
  *(undefined8 *)(param_1 + 0x19b8) = 0;
  *(undefined8 *)(param_1 + 0x19c0) = 0;
  *(undefined8 *)(param_1 + 0x19c8) = 0;
  *(undefined8 *)(param_1 + 0x1960) = *(undefined8 *)(param_1 + 0x18e0);
  *(undefined8 *)(param_1 + 0x19d0) = 0;
  *(undefined2 *)(param_1 + 0x19d8) = 0;
  *(undefined8 *)(param_1 + 0x1998) = 0;
  *(undefined8 *)(param_1 + 0x1968) = *(undefined8 *)(param_1 + 0x18e8);
  *(undefined8 *)(param_1 + 0x1970) = *(undefined8 *)(param_1 + 0x18f0);
  *(undefined8 *)(param_1 + 0x1978) = *(undefined8 *)(param_1 + 0x18f8);
  uVar3 = *(undefined1 *)(param_2 + 3);
  uVar6 = *param_2;
  uVar2 = param_2[2];
  *(undefined8 *)(param_1 + 0x1988) = param_2[1];
  *(undefined1 *)(param_1 + 0x1998) = uVar3;
  *(undefined8 *)(param_1 + 0x1990) = uVar2;
  *(undefined8 *)(param_1 + 0x1980) = uVar6;
  uVar4 = (uint)*(ushort *)(param_1 + 0x1996) * 0x10000;
  fVar7 = (float)((ulong)*(ushort *)(param_1 + 0x198a) << 0x10) * 8.381903e-08;
  fVar8 = (float)uVar4 * 8.381903e-08;
  if (fVar7 <= 360.0) {
    if (fVar7 < 0.0) {
      fVar9 = fVar7 / 360.0 + -1.0;
      goto LAB_02462d48;
    }
  }
  else {
    fVar9 = fVar7 / 360.0;
LAB_02462d48:
    fVar7 = fVar7 - (float)(int)fVar9 * 360.0;
  }
  if (fVar8 <= 360.0) {
    if (0.0 <= fVar8) goto LAB_02462d90;
    fVar9 = fVar8 / 360.0 + -1.0;
  }
  else {
    fVar9 = fVar8 / 360.0;
  }
  fVar8 = fVar8 - (float)(int)fVar9 * 360.0;
LAB_02462d90:
  if (fVar7 != fVar8) {
    fVar9 = fVar7 - fVar8;
    if (fVar7 <= fVar8) {
      fVar9 = fVar8 - fVar7;
    }
    fVar7 = 360.0 - fVar9;
    if (fVar9 <= 180.0) {
      fVar7 = fVar9;
    }
    if (150.0 < fVar7) {
      iVar5 = -0x10000;
      if (*(char *)(param_1 + 0x1998) != '\0') {
        iVar5 = 0;
      }
      *(short *)(param_1 + 0x1996) = (short)(iVar5 + uVar4 >> 0x10);
    }
  }
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
  lVar1 = 0;
  if (*(long *)(param_1 + 0x70) != 0) {
    lVar1 = *(long *)(param_1 + 0x70) + 0x278;
  }
  FUN_03ebb160(lVar1,0x11d);
  return;
}


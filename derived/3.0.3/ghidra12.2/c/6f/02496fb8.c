
void FUN_02496fb8(long param_1,float *param_2)

{
  long lVar1;
  float fVar2;
  undefined1 uVar3;
  char cVar4;
  undefined2 uVar5;
  undefined8 uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  
  fVar11 = *param_2;
  uVar5 = *(undefined2 *)((long)param_2 + 0x1a);
  iVar7 = (int)(param_2[1] * 4.0);
  fVar2 = param_2[10];
  fVar16 = param_2[5];
  iVar9 = (int)(param_2[4] * 4.0);
  uVar3 = *(undefined1 *)(param_2 + 0xb);
  cVar4 = *(char *)((long)param_2 + 0x2d);
  fVar12 = param_2[2];
  fVar15 = param_2[3];
  if (0x7ffe < iVar7) {
    iVar7 = 0x7fff;
  }
  if (iVar7 < -0x7fff) {
    iVar7 = -0x8000;
  }
  if (0x7ffe < iVar9) {
    iVar9 = 0x7fff;
  }
  fVar13 = param_2[7];
  if (iVar9 < -0x7fff) {
    iVar9 = -0x8000;
  }
  iVar10 = (int)(param_2[8] * 4.0);
  fVar14 = param_2[9];
  uVar6 = *(undefined8 *)(param_2 + 0xc);
  *(undefined8 *)(param_1 + 0x1960) = *(undefined8 *)(param_1 + 0x18e0);
  *(short *)(param_1 + 0x1984) = (short)iVar7;
  *(undefined8 *)(param_1 + 0x1968) = *(undefined8 *)(param_1 + 0x18e8);
  *(short *)(param_1 + 0x198e) = (short)iVar9;
  *(undefined8 *)(param_1 + 0x19a8) = 0;
  *(undefined8 *)(param_1 + 0x19b0) = 0;
  *(undefined8 *)(param_1 + 0x19b8) = 0;
  *(undefined8 *)(param_1 + 0x19c0) = 0;
  *(undefined8 *)(param_1 + 0x19c8) = 0;
  *(undefined8 *)(param_1 + 0x19d0) = 0;
  *(undefined2 *)(param_1 + 0x19d8) = 0;
  *(int *)(param_1 + 0x1980) = (int)(fVar11 * 999.99994);
  *(int *)(param_1 + 0x1990) = (int)(fVar16 * 999.99994);
  *(undefined2 *)(param_1 + 0x1994) = uVar5;
  if (0x7ffe < iVar10) {
    iVar10 = 0x7fff;
  }
  if (iVar10 < -0x7fff) {
    iVar10 = -0x8000;
  }
  *(undefined8 *)(param_1 + 0x1970) = *(undefined8 *)(param_1 + 0x18f0);
  *(short *)(param_1 + 0x199a) = (short)iVar10;
  *(undefined8 *)(param_1 + 0x1978) = *(undefined8 *)(param_1 + 0x18f8);
  *(int *)(param_1 + 0x1986) = (int)(fVar12 * 999.99994);
  *(int *)(param_1 + 0x198a) = (int)(fVar15 * 999.99994);
  *(int *)(param_1 + 0x1996) = (int)(fVar13 * 999.99994);
  *(char *)(param_1 + 0x19a0) = SUB41(fVar2,0);
  *(undefined1 *)(param_1 + 0x19a1) = uVar3;
  *(char *)(param_1 + 0x19a2) = cVar4;
  *(undefined8 *)(param_1 + 0x19a3) = uVar6;
  *(int *)(param_1 + 0x199c) = (int)(fVar14 * 999.99994);
  uVar8 = 0x110;
  if (cVar4 != '\0') {
    uVar8 = 0x8a;
  }
  if (0x148 < uVar8) {
    return;
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
  FUN_03ebb160(lVar1,uVar8);
  return;
}


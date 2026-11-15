
void FUN_0236b830(long param_1,undefined8 *param_2)

{
  byte *pbVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  undefined2 uVar9;
  int iVar10;
  int iVar11;
  undefined1 uVar12;
  byte bVar13;
  byte bVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  
  uVar2 = *(undefined4 *)(param_2 + 1);
  uVar3 = *(undefined4 *)((long)param_2 + 0xc);
  uVar4 = *(undefined4 *)((long)param_2 + 0x14);
  uVar5 = *(undefined1 *)(param_2 + 2);
  fVar19 = *(float *)(param_2 + 3);
  fVar18 = *(float *)((long)param_2 + 0x1c);
  fVar22 = *(float *)(param_2 + 6);
  fVar20 = *(float *)(param_2 + 4);
  fVar21 = *(float *)((long)param_2 + 0x24);
  uVar6 = *(undefined1 *)((long)param_2 + 0x34);
  uVar7 = *(undefined1 *)((long)param_2 + 0x35);
  if (*(char *)((long)param_2 + 0x36) == '\0') {
    if (((DAT_04cd19d8 != 0) && (*(int *)(DAT_04cd19d8 + 0x15c) != 0)) &&
       (*(int *)(DAT_04cd19d8 + 0x15c) != 0)) {
      pbVar1 = PTR_DAT_04bb32e0;
      if (*(int *)(DAT_04cd19d8 + 0x15c) != 0) {
        pbVar1 = (byte *)(DAT_04cd19d8 + 0x158);
      }
      bVar14 = *(byte *)(param_1 + 0x1ee8);
      bVar13 = *pbVar1;
      if (7 < bVar13) {
        bVar13 = 0xff;
      }
      if (7 < bVar14) {
        bVar14 = 0xff;
      }
      if (bVar13 != bVar14) goto LAB_0236b880;
    }
    uVar12 = 0;
  }
  else {
LAB_0236b880:
    uVar12 = 1;
  }
  iVar17 = (int)(*(float *)((long)param_2 + 0x2c) * 4.0);
  iVar10 = (int)(*(float *)(param_2 + 5) * 4.0);
  uVar9 = *(undefined2 *)((long)param_2 + 0x37);
  uVar8 = *(undefined1 *)((long)param_2 + 0x39);
  *(undefined8 *)(param_1 + 0x1ee9) = *param_2;
  iVar11 = (int)(fVar21 * 4.0);
  *(undefined1 *)(param_1 + 0x1f07) = uVar6;
  *(char *)(param_1 + 0x1ef1) = (char)uVar2;
  *(char *)(param_1 + 0x1ef2) = (char)uVar3;
  *(undefined1 *)(param_1 + 0x1ef3) = uVar5;
  *(char *)(param_1 + 0x1ef4) = (char)uVar4;
  *(undefined1 *)(param_1 + 0x1f08) = uVar7;
  *(undefined1 *)(param_1 + 0x1f09) = uVar12;
  *(undefined2 *)(param_1 + 0x1f0a) = uVar9;
  iVar15 = (int)(fVar22 * 999.99994);
  *(undefined1 *)(param_1 + 0x1f0c) = uVar8;
  *(int *)(param_1 + 0x1ef5) = (int)(fVar19 * 999.99994);
  *(int *)(param_1 + 0x1efb) = (int)(fVar20 * 999.99994);
  if (0x7ffe < iVar15) {
    iVar15 = 0x7fff;
  }
  iVar16 = (int)(fVar18 * 4.0);
  if (iVar15 < -0x7fff) {
    iVar15 = -0x8000;
  }
  if (0x7ffe < iVar17) {
    iVar17 = 0x7fff;
  }
  *(short *)(param_1 + 0x1f05) = (short)iVar15;
  if (iVar17 < -0x7fff) {
    iVar17 = -0x8000;
  }
  if (0x7ffe < iVar10) {
    iVar10 = 0x7fff;
  }
  *(short *)(param_1 + 0x1f03) = (short)iVar17;
  if (iVar10 < -0x7fff) {
    iVar10 = -0x8000;
  }
  if (0x7ffe < iVar11) {
    iVar11 = 0x7fff;
  }
  *(short *)(param_1 + 0x1f01) = (short)iVar10;
  if (iVar11 < -0x7fff) {
    iVar11 = -0x8000;
  }
  if (0x7ffe < iVar16) {
    iVar16 = 0x7fff;
  }
  *(short *)(param_1 + 0x1eff) = (short)iVar11;
  if (iVar16 < -0x7fff) {
    iVar16 = -0x8000;
  }
  *(short *)(param_1 + 0x1ef9) = (short)iVar16;
  *(uint *)(param_1 + 0x17cc) = *(uint *)(param_1 + 0x17cc) | 0x1000;
  return;
}


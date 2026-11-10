
void FUN_00378410(long param_1,long param_2,byte param_3,int param_4,ulong param_5,
                 undefined8 param_6,undefined8 param_7,undefined8 param_8,undefined2 param_9)

{
  long lVar1;
  uint uVar2;
  byte bVar3;
  float fVar4;
  float fVar5;
  byte bVar6;
  long *plVar7;
  short sVar8;
  uint uVar9;
  long lVar10;
  ushort local_54;
  ushort local_52;
  
  bVar3 = *(byte *)(param_1 + 0x49);
  if ((bVar3 >> 1 & 1) == 0) {
    *(byte *)(param_2 + 0x18d) = *(byte *)(param_1 + 0x14) & 3;
  }
  *(undefined1 *)(param_2 + 0x18b) = 0;
  bVar6 = *(byte *)(param_1 + 0x48) >> 4;
  if (bVar6 == 0xf) {
    sVar8 = (short)param_4 + (*(ushort *)(param_1 + 0x4a) / 3) * 3;
  }
  else {
    if (*(long *)(param_1 + 0x20) == 0) {
      *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0xb8);
    }
    sVar8 = (ushort)bVar6 + (short)param_4 * 0xe;
  }
  *(short *)(param_1 + 0x4a) = sVar8;
  lVar10 = *(long *)(*(long *)(param_2 + 200) + 0x38);
  lVar1 = 0;
  if (lVar10 != 0) {
    lVar1 = lVar10 + (ulong)*(uint *)(param_1 + 0x30);
  }
  if (param_4 == 1) {
    *(undefined8 *)(lVar1 + 0x200) = 0x437f0000437f0000;
    *(undefined8 *)(lVar1 + 0x1d0) = 0x437f0000437f0000;
    *(undefined8 *)(lVar1 + 0x1d8) = 0x437f0000437f0000;
    *(undefined8 *)(lVar1 + 0x208) = 0x437f0000437f0000;
    *(undefined8 *)(lVar1 + 0x1e0) = 0x437f0000437f0000;
    *(undefined8 *)(lVar1 + 0x1e8) = 0x437f0000437f0000;
    *(undefined8 *)(lVar1 + 0x1f0) = 0x437f0000437f0000;
    *(undefined8 *)(lVar1 + 0x1f8) = 0x437f0000437f0000;
  }
  *(undefined8 *)(lVar1 + 0xd0) = 0x3b8080813b808081;
  *(undefined4 *)(lVar1 + 0xd8) = 0x3b808081;
  *(float *)(lVar1 + 0xdc) = (float)param_3 * 1.5378702e-05;
  FUN_0036520c(param_2,lVar1);
  if ((param_5 & 1) != 0) {
    *(undefined4 *)(lVar1 + 0x22c) = 0;
  }
  FUN_003788e0(param_1,param_2,param_6,param_7);
  if ((((*(byte *)(param_1 + 0x14) & 3) != 0) && ('\0' < *(char *)(param_2 + 0x18d))) &&
     (plVar7 = *(long **)(*(long *)(param_1 + 0x18) + 8), plVar7 != (long *)0x0)) {
    lVar10 = *(long *)(*(long *)(param_2 + 200) + 0x38);
    lVar1 = 0;
    if (lVar10 != 0) {
      lVar1 = lVar10 + (ulong)*(uint *)(param_1 + 0x30);
    }
    (**(code **)(*plVar7 + 0x20))(&local_54);
    *(undefined8 *)(lVar1 + 0x1c8) = 0;
    fVar4 = (float)NEON_ucvtf((uint)local_54);
    fVar5 = (float)NEON_ucvtf((uint)local_52);
    *(float *)(lVar1 + 0x1c0) = 1.0 / fVar4;
    *(float *)(lVar1 + 0x1c4) = 1.0 / fVar5;
  }
  if ((bVar3 >> 1 & 1) == 0) {
    FUN_00378bdc(param_1,param_2,param_8,param_9,param_7);
  }
  uVar9 = *(uint *)(param_1 + 0x14);
  if ((uVar9 & 0xc0000) != 0) {
    uVar2 = *(uint *)(param_1 + 0x10);
    lVar1 = *(long *)(param_1 + 0x18) +
            (((ulong)uVar2 & 3) * 0x10 + ((ulong)uVar2 & 0x30) | (ulong)(uVar2 >> 6) & 8) +
            ((ulong)(uVar2 >> 8) & 0xc) + ((ulong)(uVar2 >> 4) & 0x1c) +
            ((ulong)(uVar2 >> 0xc) & 8) + (ulong)(-(uVar2 >> 0xc & 1) & 0xc) +
            (ulong)(-(uVar2 >> 0x10 & 1) & 0x1c) +
            ((ulong)(uVar2 >> 0xc) & 0x10) * ((ulong)(uVar2 >> 6) & 7) +
            (ulong)((int)(uVar2 << 0xe) >> 0x1f & 0x74) +
            (((ulong)(uVar2 >> 0xd) & 3) + ((ulong)(uVar2 >> 2) & 3)) * 0x14;
    if (*(long *)(lVar1 + 0x18) != 0) {
      uVar9 = *(uint *)(param_1 + 0x10);
      FUN_003984cc((short)*(undefined4 *)
                           (*(long *)(param_1 + 0x18) +
                           (((ulong)uVar9 & 3) * 0x10 + ((ulong)uVar9 & 0x30) |
                           (ulong)(uVar9 >> 6) & 8) +
                           ((ulong)(uVar9 >> 8) & 0xc) + ((ulong)(uVar9 >> 4) & 0x1c) +
                           ((ulong)(uVar9 >> 0xc) & 8) + (ulong)(-(uVar9 >> 0xc & 1) & 0xc) +
                           (ulong)(-(uVar9 >> 0x10 & 1) & 0x1c) +
                           ((ulong)(uVar9 >> 0xc) & 0x10) * ((ulong)(uVar9 >> 6) & 7) +
                           (ulong)((int)(uVar9 << 0xe) >> 0x1f & 0x74) +
                           (((ulong)(uVar9 >> 0xd) & 3) + ((ulong)(uVar9 >> 2) & 3)) * 0x14));
      *(byte *)(*(long *)(lVar1 + 0x18) + 0x158) = *(byte *)(*(long *)(lVar1 + 0x18) + 0x158) | 2;
      uVar9 = *(uint *)(param_1 + 0x14);
    }
    if ((uVar9 >> 0x13 & 1) != 0) {
      if (*(long *)(lVar1 + 0x38) != 0) {
        uVar9 = *(uint *)(param_1 + 0x10);
        FUN_003984cc((short)*(undefined4 *)
                             (*(long *)(param_1 + 0x18) +
                              (((ulong)uVar9 & 3) * 0x10 + ((ulong)uVar9 & 0x30) |
                              (ulong)(uVar9 >> 6) & 8) +
                              ((ulong)(uVar9 >> 8) & 0xc) + ((ulong)(uVar9 >> 4) & 0x1c) +
                              ((ulong)(uVar9 >> 0xc) & 8) + (ulong)(-(uVar9 >> 0xc & 1) & 0xc) +
                              (ulong)(-(uVar9 >> 0x10 & 1) & 0x1c) +
                              ((ulong)(uVar9 >> 0xc) & 0x10) * ((ulong)(uVar9 >> 6) & 7) +
                              (ulong)((int)(uVar9 << 0xe) >> 0x1f & 0x74) +
                              (((ulong)(uVar9 >> 0xd) & 3) + ((ulong)(uVar9 >> 2) & 3)) * 0x14 +
                             0x20));
        *(byte *)(*(long *)(lVar1 + 0x38) + 0x158) = *(byte *)(*(long *)(lVar1 + 0x38) + 0x158) | 2;
        uVar9 = *(uint *)(param_1 + 0x14);
      }
      if ((((uVar9 ^ 0xffffffff) & 0xc0000) == 0) && (*(long *)(lVar1 + 0x58) != 0)) {
        uVar9 = *(uint *)(param_1 + 0x10);
        FUN_003984cc((short)*(undefined4 *)
                             (*(long *)(param_1 + 0x18) +
                              (((ulong)uVar9 & 3) * 0x10 + ((ulong)uVar9 & 0x30) |
                              (ulong)(uVar9 >> 6) & 8) +
                              ((ulong)(uVar9 >> 8) & 0xc) + ((ulong)(uVar9 >> 4) & 0x1c) +
                              ((ulong)(uVar9 >> 0xc) & 8) + (ulong)(-(uVar9 >> 0xc & 1) & 0xc) +
                              (ulong)(-(uVar9 >> 0x10 & 1) & 0x1c) +
                              ((ulong)(uVar9 >> 0xc) & 0x10) * ((ulong)(uVar9 >> 6) & 7) +
                              (ulong)((int)(uVar9 << 0xe) >> 0x1f & 0x74) +
                              (((ulong)(uVar9 >> 0xd) & 3) + ((ulong)(uVar9 >> 2) & 3)) * 0x14 +
                             0x40));
        *(byte *)(*(long *)(lVar1 + 0x58) + 0x158) = *(byte *)(*(long *)(lVar1 + 0x58) + 0x158) | 2;
      }
    }
  }
  *(byte *)(param_1 + 0x48) = *(byte *)(param_1 + 0x48) & 0xf0 | *(byte *)(param_2 + 0x18d) & 0xf;
  return;
}


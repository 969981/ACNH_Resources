
void FUN_035cefdc(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  uint uVar3;
  bool bVar4;
  bool bVar5;
  long *plVar6;
  long lVar7;
  byte bVar8;
  uint uVar9;
  long lVar10;
  uint uVar11;
  long lVar12;
  uint uVar13;
  
  bVar8 = *(byte *)(param_1 + 1);
  *(char *)(param_1 + 0xf) = *(char *)(param_1 + 4);
  uVar11 = bVar8 & 0x7b | (uint)(*(char *)(param_1 + 0x10) == *(char *)(param_1 + 4)) << 2;
  uVar13 = (uint)bVar8;
  uVar9 = (uint)bVar8;
  if (uVar13 != uVar11) {
    if (*(char *)(param_1 + 0xd8) == '\x01') {
      bVar4 = (bVar8 & 0x38) != 0;
      bVar5 = (uVar13 & 0x44444444) == 0x44 || bVar4;
      bVar4 = ((uVar11 ^ 0xffffffff) & 0x44) == 0 || bVar4;
    }
    else {
      uVar9 = (bVar8 >> 3 & 7) >> (ulong)(uVar13 & 3) & 1;
      uVar3 = uVar9;
      if ((uVar13 & 0x44444444) == 0x44) {
        uVar3 = 1;
      }
      bVar5 = uVar3 != 0;
      if (((uVar11 ^ 0xffffffff) & 0x44) == 0) {
        uVar9 = 1;
      }
      bVar4 = uVar9 != 0;
    }
    *(char *)(param_1 + 1) = (char)uVar11;
    uVar9 = uVar11;
    if (bVar4 && !bVar5) {
      *(byte *)(param_1 + -0x3f) = *(byte *)(param_1 + -0x3f) | 2;
      uVar9 = (uint)*(byte *)(param_1 + 1);
      if (*(char *)(param_1 + 0x10) != *(char *)(param_1 + 5)) {
        uVar9 = uVar9 & 0xfffffffb;
        *(char *)(param_1 + 1) = (char)uVar9;
      }
    }
  }
  bVar8 = (byte)uVar9;
  uVar11 = uVar9 & 0x44;
  if (*(char *)(param_1 + 0xd8) == '\x01') {
    uVar9 = (uint)((uVar9 & 0x38) != 0 || uVar11 == 0x44);
    uVar11 = uVar9;
  }
  else {
    uVar13 = (uVar9 >> 3 & 7) >> (ulong)(uVar9 & 3) & 1;
    if (uVar11 == 0x44) {
      uVar13 = 1;
    }
    uVar9 = (uint)(uVar11 == 0x44) | uVar9 >> 4 & 1;
    uVar11 = (uint)(uVar13 != 0);
  }
  if ((uVar11 | uVar9 ^ 1) != 1 || *(char *)(param_1 + 0x14) != '\0') {
    *(byte *)(param_1 + -0x3f) = *(byte *)(param_1 + -0x3f) | 2;
    bVar8 = *(byte *)(param_1 + 1);
  }
  *(byte *)(param_1 + 1) = bVar8 & 0x7c | 1;
  *(byte *)(param_1 + -0x3f) = *(byte *)(param_1 + -0x3f) | 1;
  *(undefined1 *)(param_1 + -0x1f0) = 1;
  lVar7 = *(long *)(param_1 + -0x1b0);
  *(byte *)(param_1 + -0x1ef) = *(byte *)(param_1 + -0x1ef) | 1;
  uVar1 = lVar7 + 0x1150c;
  uVar2 = *(ulong *)(param_1 + -0x198);
  if (uVar1 <= *(ulong *)(param_1 + -0x198)) {
    uVar2 = uVar1;
  }
  *(ulong *)(param_1 + -400) = uVar1;
  *(ulong *)(param_1 + -0x188) = uVar2;
  if (*(char *)(param_1 + 0xd90) == '\0') {
    lVar10 = *(long *)(param_1 + 0xda0);
  }
  else {
    lVar10 = *(long *)(param_1 + 0xd98);
    *(long *)(param_1 + 0xd98) = *(long *)(param_1 + -0x1b0);
    lVar10 = (*(long *)(param_1 + -0x1b0) - lVar10) + *(long *)(param_1 + 0xda0);
  }
  lVar12 = *(long *)(param_1 + 0xda8);
  *(long *)(param_1 + 0xda8) = lVar10;
  *(undefined8 *)(param_1 + 0xda0) = 0;
  plVar6 = *(long **)(param_1 + -0x268);
  uVar1 = lVar12 + lVar10;
  if (0x2249f < uVar1) {
    uVar1 = 0x224a0;
  }
  *(ulong *)(param_1 + 0xdb0) = uVar1;
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 0x10))(plVar6,1);
    lVar7 = *(long *)(param_1 + -0x1b0);
  }
  FUN_035c3b90(param_1 + 0x178,lVar7,3);
  *(undefined1 *)(param_1 + 0xe9) = 0;
  *(undefined1 *)(param_1 + 0xd) = 0xff;
  return;
}


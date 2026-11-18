
void FUN_035cc010(long param_1)

{
  ulong uVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  bool bVar5;
  bool bVar6;
  long *plVar7;
  long lVar8;
  byte bVar9;
  long lVar10;
  long lVar11;
  
  bVar9 = *(byte *)(param_1 + 1);
  uVar2 = bVar9 & 0x44444444;
  if (*(char *)(param_1 + 0xd8) == '\x01') {
    bVar5 = (bVar9 & 0x38) != 0 || uVar2 == 0x44;
    bVar6 = bVar5;
  }
  else {
    uVar3 = (bVar9 >> 3 & 7) >> (ulong)(bVar9 & 3) & 1;
    if (uVar2 == 0x44) {
      uVar3 = 1;
    }
    bVar6 = uVar3 != 0;
    bVar5 = (bool)(uVar2 == 0x44 | bVar9 >> 4 & 1);
  }
  if ((byte)(bVar6 | bVar5 ^ 1U) != 1 || *(char *)(param_1 + 0x14) != '\0') {
    *(byte *)(param_1 + -0x3f) = *(byte *)(param_1 + -0x3f) | 2;
    bVar9 = *(byte *)(param_1 + 1);
  }
  *(byte *)(param_1 + 1) = bVar9 & 0x7c | 1;
  *(byte *)(param_1 + -0x3f) = *(byte *)(param_1 + -0x3f) | 1;
  *(undefined1 *)(param_1 + -0x1f0) = 1;
  lVar8 = *(long *)(param_1 + -0x1b0);
  *(byte *)(param_1 + -0x1ef) = *(byte *)(param_1 + -0x1ef) | 1;
  uVar1 = lVar8 + 0x1150c;
  uVar4 = *(ulong *)(param_1 + -0x198);
  if (uVar1 <= *(ulong *)(param_1 + -0x198)) {
    uVar4 = uVar1;
  }
  *(ulong *)(param_1 + -400) = uVar1;
  *(ulong *)(param_1 + -0x188) = uVar4;
  if (*(char *)(param_1 + 0xd90) == '\0') {
    lVar10 = *(long *)(param_1 + 0xda0);
  }
  else {
    lVar10 = *(long *)(param_1 + 0xd98);
    *(long *)(param_1 + 0xd98) = *(long *)(param_1 + -0x1b0);
    lVar10 = (*(long *)(param_1 + -0x1b0) - lVar10) + *(long *)(param_1 + 0xda0);
  }
  lVar11 = *(long *)(param_1 + 0xda8);
  *(long *)(param_1 + 0xda8) = lVar10;
  *(undefined8 *)(param_1 + 0xda0) = 0;
  plVar7 = *(long **)(param_1 + -0x268);
  uVar1 = lVar11 + lVar10;
  if (0x2249f < uVar1) {
    uVar1 = 0x224a0;
  }
  *(ulong *)(param_1 + 0xdb0) = uVar1;
  if (plVar7 != (long *)0x0) {
    (**(code **)(*plVar7 + 0x10))(plVar7,1);
    lVar8 = *(long *)(param_1 + -0x1b0);
  }
  FUN_035c3b90(param_1 + 0x178,lVar8,3);
  *(undefined1 *)(param_1 + 0xe9) = 0;
  *(undefined1 *)(param_1 + 0xd) = 0xff;
  return;
}


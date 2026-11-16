
int FUN_0267c230(byte *param_1)

{
  short *psVar1;
  short sVar2;
  uint uVar3;
  long lVar4;
  undefined8 *puVar5;
  long *plVar6;
  uint uVar7;
  ulong uVar8;
  short *psVar9;
  int iVar10;
  long lVar11;
  byte local_24 [4];
  
  local_24[0] = *param_1;
  if (7 < local_24[0]) {
    local_24[0] = 0xff;
  }
  lVar4 = FUN_025830c0(DAT_055021a0,local_24,1);
  if (lVar4 == 0) {
    return 0;
  }
  lVar11 = lVar4 + 0x194b0;
  if (*(long *)(lVar4 + 0x194b8) == 0) {
    lVar11 = *(long *)(DAT_05574040 + 0x20);
    plVar6 = *(long **)(lVar11 + 0x178);
  }
  else {
    plVar6 = *(long **)(lVar4 + 0x19628);
  }
  if ((plVar6 == (long *)0x0) || ((undefined8 *)*plVar6 == (undefined8 *)0x0)) {
    uVar3 = 1;
  }
  else {
    uVar3 = (*(code *)**(undefined8 **)*plVar6)();
    uVar3 = uVar3 ^ 1;
  }
  lVar4 = *(long *)(lVar11 + 0x160) + *(long *)(lVar11 + 0x158);
  uVar7 = *(uint *)(lVar4 + 72000);
  if (8999 < uVar7) {
    uVar7 = 9000;
  }
  if (uVar7 == 0) {
    iVar10 = 0;
  }
  else {
    if (uVar7 == 1) {
      uVar8 = 0;
      iVar10 = 0;
    }
    else {
      uVar8 = 0;
      iVar10 = 0;
      psVar9 = (short *)(lVar4 + 8);
      do {
        psVar1 = psVar9 + -4;
        uVar8 = uVar8 + 2;
        sVar2 = *psVar9;
        psVar9 = psVar9 + 8;
        if (*psVar1 == -2) {
          iVar10 = iVar10 + 1;
        }
        if (sVar2 == -2) {
          iVar10 = iVar10 + 1;
        }
      } while (((ulong)uVar7 & 0x3ffe) != uVar8);
    }
    if (((uVar7 & 1) != 0) && (*(short *)(lVar4 + uVar8 * 8) == -2)) {
      iVar10 = iVar10 + 1;
    }
  }
  if ((((uVar3 & 1) == 0) && (*(long *)(lVar11 + 0x178) != 0)) &&
     (puVar5 = *(undefined8 **)(*(long *)(lVar11 + 0x178) + 8), puVar5 != (undefined8 *)0x0)) {
    (**(code **)*puVar5)();
  }
  return iVar10;
}


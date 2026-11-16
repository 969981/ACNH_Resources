
int FUN_0267dce0(byte *param_1)

{
  short *psVar1;
  short sVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  undefined8 *puVar6;
  long *plVar7;
  uint uVar8;
  int iVar9;
  short *psVar10;
  long lVar11;
  byte local_38 [4];
  byte local_34 [4];
  
  local_38[0] = *param_1;
  if (7 < local_38[0]) {
    local_38[0] = 0xff;
  }
  lVar4 = FUN_025830c0(DAT_055021a0,local_38,1);
  if (lVar4 == 0) {
    return 0;
  }
  lVar11 = lVar4 + 0x194b0;
  if (*(long *)(lVar4 + 0x194b8) == 0) {
    lVar11 = *(long *)(DAT_05574040 + 0x20);
    plVar7 = *(long **)(lVar11 + 0x1b0);
  }
  else {
    plVar7 = *(long **)(lVar4 + 0x19660);
  }
  if ((plVar7 == (long *)0x0) || ((undefined8 *)*plVar7 == (undefined8 *)0x0)) {
    uVar3 = 1;
  }
  else {
    uVar3 = (*(code *)**(undefined8 **)*plVar7)();
    uVar3 = uVar3 ^ 1;
  }
  lVar4 = *(long *)(lVar11 + 0x198) + *(long *)(lVar11 + 400);
  local_34[0] = *param_1;
  if (7 < local_34[0]) {
    local_34[0] = 0xff;
  }
  uVar5 = FUN_02669430(local_34);
  if ((uVar5 & 1) == 0) {
    lVar4 = lVar4 + 0xa4;
  }
  uVar8 = *(uint *)(lVar4 + 0xa0);
  if (0x13 < uVar8) {
    uVar8 = 0x14;
  }
  if (uVar8 == 0) {
    iVar9 = 0;
  }
  else {
    if (uVar8 == 1) {
      uVar5 = 0;
      iVar9 = 0;
    }
    else {
      uVar5 = 0;
      iVar9 = 0;
      psVar10 = (short *)(lVar4 + 8);
      do {
        psVar1 = psVar10 + -4;
        uVar5 = uVar5 + 2;
        sVar2 = *psVar10;
        psVar10 = psVar10 + 8;
        if (*psVar1 == -2) {
          iVar9 = iVar9 + 1;
        }
        if (sVar2 == -2) {
          iVar9 = iVar9 + 1;
        }
      } while (((ulong)uVar8 & 0x1e) != uVar5);
    }
    if (((uVar8 & 1) != 0) && (*(short *)(lVar4 + uVar5 * 8) == -2)) {
      iVar9 = iVar9 + 1;
    }
  }
  if ((((uVar3 & 1) == 0) && (*(long *)(lVar11 + 0x1b0) != 0)) &&
     (puVar6 = *(undefined8 **)(*(long *)(lVar11 + 0x1b0) + 8), puVar6 != (undefined8 *)0x0)) {
    (**(code **)*puVar6)();
  }
  return uVar8 - iVar9;
}


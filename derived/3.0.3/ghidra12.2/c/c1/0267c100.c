
uint FUN_0267c100(byte *param_1)

{
  uint uVar1;
  long lVar2;
  undefined8 *puVar3;
  long *plVar4;
  short *psVar5;
  uint uVar6;
  ulong uVar7;
  long lVar8;
  byte local_24 [4];
  
  local_24[0] = *param_1;
  if (7 < local_24[0]) {
    local_24[0] = 0xff;
  }
  lVar2 = FUN_025830c0(DAT_055021a0,local_24,1);
  if (lVar2 == 0) {
    return 0;
  }
  lVar8 = lVar2 + 0x194b0;
  if (*(long *)(lVar2 + 0x194b8) == 0) {
    lVar8 = *(long *)(DAT_05574040 + 0x20);
    plVar4 = *(long **)(lVar8 + 0x178);
  }
  else {
    plVar4 = *(long **)(lVar2 + 0x19628);
  }
  if ((plVar4 == (long *)0x0) || ((undefined8 *)*plVar4 == (undefined8 *)0x0)) {
    uVar1 = 1;
  }
  else {
    uVar1 = (*(code *)**(undefined8 **)*plVar4)();
    uVar1 = uVar1 ^ 1;
  }
  psVar5 = (short *)(*(long *)(lVar8 + 0x160) + *(long *)(lVar8 + 0x158));
  uVar6 = *(uint *)(psVar5 + 36000);
  if (8999 < uVar6) {
    uVar6 = 9000;
  }
  if (uVar6 != 0) {
    uVar7 = 0;
    do {
      if (*psVar5 == -2) {
        uVar6 = ~(uint)uVar7 >> 0x1f;
        if ((uVar1 & 1) != 0) {
          return uVar6;
        }
        goto LAB_0267c1f4;
      }
      uVar7 = uVar7 + 1;
      psVar5 = psVar5 + 4;
    } while (uVar6 != uVar7);
  }
  uVar6 = 0;
  if ((uVar1 & 1) == 0) {
LAB_0267c1f4:
    if ((*(long *)(lVar8 + 0x178) != 0) &&
       (puVar3 = *(undefined8 **)(*(long *)(lVar8 + 0x178) + 8), puVar3 != (undefined8 *)0x0)) {
      (**(code **)*puVar3)();
    }
  }
  return uVar6;
}


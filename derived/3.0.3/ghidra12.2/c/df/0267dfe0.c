
/* WARNING: Type propagation algorithm not settling */

ulong FUN_0267dfe0(byte *param_1)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  long *plVar5;
  short *psVar6;
  uint uVar7;
  long lVar8;
  byte local_38 [4];
  byte local_34 [4];
  
  local_38[0] = *param_1;
  if (7 < local_38[0]) {
    local_38[0] = 0xff;
  }
  lVar2 = FUN_025830c0(DAT_055021a0,local_38,1);
  if (lVar2 == 0) {
    return 0xffffffff;
  }
  lVar8 = lVar2 + 0x194b0;
  if (*(long *)(lVar2 + 0x194b8) == 0) {
    lVar8 = *(long *)(DAT_05574040 + 0x20);
    plVar5 = *(long **)(lVar8 + 0x1b0);
  }
  else {
    plVar5 = *(long **)(lVar2 + 0x19660);
  }
  if ((plVar5 == (long *)0x0) || ((undefined8 *)*plVar5 == (undefined8 *)0x0)) {
    uVar1 = 1;
  }
  else {
    uVar1 = (*(code *)**(undefined8 **)*plVar5)();
    uVar1 = uVar1 ^ 1;
  }
  psVar6 = (short *)(*(long *)(lVar8 + 0x198) + *(long *)(lVar8 + 400));
  local_34[0] = *param_1;
  if (7 < local_34[0]) {
    local_34[0] = 0xff;
  }
  uVar3 = FUN_02669430(local_34);
  if ((uVar3 & 1) == 0) {
    psVar6 = psVar6 + 0x52;
  }
  uVar7 = *(uint *)(psVar6 + 0x50);
  if (0x13 < uVar7) {
    uVar7 = 0x14;
  }
  if (uVar7 != 0) {
    uVar3 = 0;
    do {
      if (*psVar6 == -2) {
        uVar3 = uVar3 & 0xffffffff;
        goto joined_r0x0267e100;
      }
      uVar3 = uVar3 + 1;
      psVar6 = psVar6 + 4;
    } while (uVar7 != uVar3);
  }
  uVar3 = 0xffffffff;
joined_r0x0267e100:
  if ((((uVar1 & 1) == 0) && (*(long *)(lVar8 + 0x1b0) != 0)) &&
     (puVar4 = *(undefined8 **)(*(long *)(lVar8 + 0x1b0) + 8), puVar4 != (undefined8 *)0x0)) {
    (**(code **)*puVar4)();
  }
  return uVar3;
}


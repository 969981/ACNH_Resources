
void FUN_02648820(byte *param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint uVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  byte local_6c [4];
  byte local_68 [4];
  byte local_64 [4];
  
  if ((((*param_1 < 8) && (uVar4 = FUN_02582d8c(param_1,1), puVar3 = PTR_DAT_04bb4f78, uVar4 < 8))
      && (*(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar4 * 0x13f0 + 0x13d4) != '\0')) &&
     (*(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar4 * 0x13f0 + 0x13d6) != '\0')) {
    local_6c[0] = *param_1;
    if (7 < local_6c[0]) {
      local_6c[0] = 0xff;
    }
    lVar5 = FUN_02583354(*(undefined8 *)PTR_DAT_04bb4f78,local_6c,1);
    if (lVar5 != 0) {
      if ((*(long **)(lVar5 + 0x178) == (long *)0x0) ||
         (puVar6 = (undefined8 *)**(long **)(lVar5 + 0x178), puVar6 == (undefined8 *)0x0)) {
        uVar4 = 1;
      }
      else {
        uVar4 = (**(code **)*puVar6)();
        uVar4 = uVar4 ^ 1;
      }
      uVar7 = FUN_026e85f0(*(long *)(lVar5 + 0x160) + *(long *)(lVar5 + 0x158));
      FUN_02648c90(param_1,uVar7,0);
      uVar7 = FUN_026e88f0(*(long *)(lVar5 + 0x160) + *(long *)(lVar5 + 0x158));
      FUN_02648c90(param_1,uVar7,0);
      uVar7 = FUN_026e8b00(*(long *)(lVar5 + 0x160) + *(long *)(lVar5 + 0x158));
      FUN_02648c90(param_1,uVar7,0);
      uVar7 = FUN_02814c00(*(long *)(lVar5 + 0x160) + *(long *)(lVar5 + 0x158));
      FUN_02648c90(param_1,uVar7,0);
      uVar7 = FUN_026e8d10(*(long *)(lVar5 + 0x160) + *(long *)(lVar5 + 0x158));
      FUN_02648c90(param_1,uVar7,0);
      uVar7 = FUN_028159b0(*(long *)(lVar5 + 0x160) + *(long *)(lVar5 + 0x158));
      FUN_02648c90(param_1,uVar7,0);
      uVar7 = FUN_026e9240(*(long *)(lVar5 + 0x160) + *(long *)(lVar5 + 0x158));
      FUN_02648c90(param_1,uVar7,0);
      uVar7 = FUN_026e9470(*(long *)(lVar5 + 0x160) + *(long *)(lVar5 + 0x158));
      FUN_02648c90(param_1,uVar7,0);
      uVar7 = FUN_026e96a0(*(long *)(lVar5 + 0x160) + *(long *)(lVar5 + 0x158));
      FUN_02648c90(param_1,uVar7,0);
      if ((((uVar4 & 1) == 0) && (*(long *)(lVar5 + 0x178) != 0)) &&
         (puVar6 = *(undefined8 **)(*(long *)(lVar5 + 0x178) + 8), puVar6 != (undefined8 *)0x0)) {
        (**(code **)*puVar6)();
      }
    }
    local_68[0] = *param_1;
    if (7 < local_68[0]) {
      local_68[0] = 0xff;
    }
    lVar5 = FUN_025830c0(*(undefined8 *)puVar3,local_68,1);
    if (lVar5 != 0) {
      if ((*(long **)(lVar5 + 0x1aa0) == (long *)0x0) ||
         (puVar6 = (undefined8 *)**(long **)(lVar5 + 0x1aa0), puVar6 == (undefined8 *)0x0)) {
        uVar7 = FUN_02816430(*(long *)(lVar5 + 0x1a88) + *(long *)(lVar5 + 0x1a80));
        FUN_02648c90(param_1,uVar7,0);
      }
      else {
        uVar8 = (**(code **)*puVar6)();
        uVar7 = FUN_02816430(*(long *)(lVar5 + 0x1a88) + *(long *)(lVar5 + 0x1a80));
        FUN_02648c90(param_1,uVar7,0);
        if ((((uVar8 & 1) != 0) && (*(long *)(lVar5 + 0x1aa0) != 0)) &&
           (puVar6 = *(undefined8 **)(*(long *)(lVar5 + 0x1aa0) + 8), puVar6 != (undefined8 *)0x0))
        {
          (**(code **)*puVar6)();
        }
      }
    }
    puVar2 = PTR_DAT_04bb37e0;
    lVar5 = 0x3f28;
    lVar11 = 8;
    do {
      local_64[0] = *param_1;
      if (7 < local_64[0]) {
        local_64[0] = 0xff;
      }
      lVar9 = FUN_025830c0(*(undefined8 *)puVar3,local_64,1);
      if (lVar9 != 0) {
        if ((*(long **)(lVar9 + lVar5) == (long *)0x0) ||
           (puVar6 = (undefined8 *)**(long **)(lVar9 + lVar5), puVar6 == (undefined8 *)0x0)) {
          uVar8 = 0;
        }
        else {
          uVar8 = (**(code **)*puVar6)();
          uVar8 = uVar8 & 0xffffffff;
        }
        lVar1 = lVar9 + lVar5;
        uVar10 = FUN_026e9ac0(*(long *)(lVar1 + -0x18) + *(long *)(lVar1 + -0x20));
        if ((uVar10 & 1) != 0) {
          uVar7 = FUN_026e85f0(*(long *)(lVar1 + -0x18) + *(long *)(lVar1 + -0x20));
          FUN_02648c90(param_1,uVar7,0);
          uVar7 = FUN_026e88f0(*(long *)(lVar1 + -0x18) + *(long *)(lVar1 + -0x20));
          FUN_02648c90(param_1,uVar7,0);
          uVar7 = FUN_026e8b00(*(long *)(lVar1 + -0x18) + *(long *)(lVar1 + -0x20));
          FUN_02648c90(param_1,uVar7,0);
          FUN_02648c90(param_1,puVar2,0);
          uVar7 = FUN_026e8d10(*(long *)(lVar1 + -0x18) + *(long *)(lVar1 + -0x20));
          FUN_02648c90(param_1,uVar7,0);
          uVar7 = FUN_026e9010(*(long *)(lVar1 + -0x18) + *(long *)(lVar1 + -0x20));
          FUN_02648c90(param_1,uVar7,0);
          uVar7 = FUN_026e9240(*(long *)(lVar1 + -0x18) + *(long *)(lVar1 + -0x20));
          FUN_02648c90(param_1,uVar7,0);
          uVar7 = FUN_026e9470(*(long *)(lVar1 + -0x18) + *(long *)(lVar1 + -0x20));
          FUN_02648c90(param_1,uVar7,0);
          uVar7 = FUN_026e96a0(*(long *)(lVar1 + -0x18) + *(long *)(lVar1 + -0x20));
          FUN_02648c90(param_1,uVar7,0);
        }
        if ((((uVar8 & 1) != 0) && (*(long *)(lVar9 + lVar5) != 0)) &&
           (puVar6 = *(undefined8 **)(*(long *)(lVar9 + lVar5) + 8), puVar6 != (undefined8 *)0x0)) {
          (**(code **)*puVar6)();
        }
      }
      lVar5 = lVar5 + 0x2450;
      lVar11 = lVar11 + -1;
    } while (lVar11 != 0);
  }
  return;
}


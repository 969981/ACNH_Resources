
uint FUN_0267cc20(byte *param_1,undefined8 param_2)

{
  undefined *puVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  undefined8 *puVar5;
  ulong uVar6;
  long lVar7;
  byte local_48 [4];
  byte local_44 [4];
  
  if ((*param_1 < 8) &&
     ((((uVar2 = FUN_02582d8c(param_1,1), uVar2 < 8 &&
        (*(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar2 * 0x13f0 + 0x13d4) != '\0')) &&
       (*(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar2 * 0x13f0 + 0x13d6) != '\0')) ||
      (((*param_1 < 8 && (uVar2 = FUN_02582d8c(param_1,1), uVar2 < 8)) &&
       ((lVar4 = *(long *)PTR_DAT_04bb4fb8,
        *(char *)(lVar4 + (ulong)uVar2 * 0x13f0 + 0x13d4) != '\0' &&
        ((*(char *)(lVar4 + (ulong)uVar2 * 0x13f0 + 0x13d6) != '\0' &&
         (*(int *)(lVar4 + (ulong)uVar2 * 0x13f0 + 0x13d0) == 1)))))))))) {
    puVar1 = PTR_DAT_04bb4f78;
    local_44[0] = *param_1;
    if (7 < local_44[0]) {
      local_44[0] = 0xff;
    }
    lVar4 = FUN_025830c0(*(undefined8 *)PTR_DAT_04bb4f78,local_44,1);
    if (lVar4 != 0) {
      lVar7 = lVar4 + 0x194b0;
      if (*(long *)(lVar4 + 0x194b8) == 0) {
        lVar7 = *(long *)(DAT_05574040 + 0x20);
      }
      if ((*(long **)(lVar7 + 0x1e8) == (long *)0x0) ||
         (puVar5 = (undefined8 *)**(long **)(lVar7 + 0x1e8), puVar5 == (undefined8 *)0x0)) {
        uVar2 = 1;
      }
      else {
        uVar2 = (**(code **)*puVar5)();
        uVar2 = uVar2 ^ 1;
      }
      uVar6 = FUN_02805b60(*(long *)(lVar7 + 0x1d0) + *(long *)(lVar7 + 0x1c8),param_2);
      if ((((uVar2 & 1) == 0) && (*(long *)(lVar7 + 0x1e8) != 0)) &&
         (puVar5 = *(undefined8 **)(*(long *)(lVar7 + 0x1e8) + 8), puVar5 != (undefined8 *)0x0)) {
        (**(code **)*puVar5)();
      }
      if ((uVar6 & 1) != 0) goto LAB_0267ce20;
    }
    local_48[0] = *param_1;
    if (7 < local_48[0]) {
      local_48[0] = 0xff;
    }
    lVar4 = FUN_025830c0(*(undefined8 *)puVar1,local_48,1);
    if (lVar4 != 0) {
      lVar7 = lVar4 + 0x194b0;
      if (*(long *)(lVar4 + 0x194b8) == 0) {
        lVar7 = *(long *)(DAT_05574040 + 0x20);
      }
      if ((*(long **)(lVar7 + 0x178) == (long *)0x0) ||
         (puVar5 = (undefined8 *)**(long **)(lVar7 + 0x178), puVar5 == (undefined8 *)0x0)) {
        uVar2 = 1;
      }
      else {
        uVar2 = (**(code **)*puVar5)();
        uVar2 = uVar2 ^ 1;
      }
      uVar3 = FUN_02803260(*(long *)(lVar7 + 0x160) + *(long *)(lVar7 + 0x158),param_2);
      if ((((uVar2 & 1) == 0) && (*(long *)(lVar7 + 0x178) != 0)) &&
         (puVar5 = *(undefined8 **)(*(long *)(lVar7 + 0x178) + 8), puVar5 != (undefined8 *)0x0)) {
        (**(code **)*puVar5)();
      }
      goto LAB_0267ce24;
    }
  }
LAB_0267ce20:
  uVar3 = 0;
LAB_0267ce24:
  return uVar3 & 1;
}


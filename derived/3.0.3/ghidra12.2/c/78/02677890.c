
uint FUN_02677890(byte *param_1,undefined8 param_2)

{
  undefined *puVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  undefined8 *puVar5;
  ulong uVar6;
  long lVar7;
  byte local_4c [4];
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
    local_48[0] = *param_1;
    if (7 < local_48[0]) {
      local_48[0] = 0xff;
    }
    lVar4 = FUN_025830c0(*(undefined8 *)PTR_DAT_04bb4f78,local_48,1);
    if (lVar4 == 0) {
LAB_02677a90:
      local_4c[0] = *param_1;
      if (7 < local_4c[0]) {
        local_4c[0] = 0xff;
      }
      lVar4 = FUN_025830c0(*(undefined8 *)puVar1,local_4c,1);
      if (lVar4 == 0) goto LAB_02677afc;
      lVar7 = lVar4 + 0x194b0;
      if (*(long *)(lVar4 + 0x194b8) == 0) {
        lVar7 = *(long *)(DAT_05574040 + 0x20);
      }
      if ((*(long **)(lVar7 + 0x98) == (long *)0x0) ||
         (puVar5 = (undefined8 *)**(long **)(lVar7 + 0x98), puVar5 == (undefined8 *)0x0)) {
        uVar2 = 1;
      }
      else {
        uVar2 = (**(code **)*puVar5)();
        uVar2 = uVar2 ^ 1;
      }
      uVar3 = FUN_027fc440(*(long *)(lVar7 + 0x80) + *(long *)(lVar7 + 0x78),param_2);
      if ((uVar2 & 1) != 0) goto LAB_02677b00;
      lVar4 = *(long *)(lVar7 + 0x98);
    }
    else {
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
      if ((uVar6 & 1) == 0) goto LAB_02677a90;
      local_44[0] = *param_1;
      if (7 < local_44[0]) {
        local_44[0] = 0xff;
      }
      lVar4 = FUN_025830c0(*(undefined8 *)puVar1,local_44,1);
      if (lVar4 == 0) goto LAB_02677afc;
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
      uVar3 = FUN_02806344(*(long *)(lVar7 + 0x1d0) + *(long *)(lVar7 + 0x1c8),param_2);
      if ((uVar2 & 1) != 0) goto LAB_02677b00;
      lVar4 = *(long *)(lVar7 + 0x1e8);
    }
    if ((lVar4 != 0) && (*(undefined8 **)(lVar4 + 8) != (undefined8 *)0x0)) {
      (**(code **)**(undefined8 **)(lVar4 + 8))();
    }
  }
  else {
LAB_02677afc:
    uVar3 = 0;
  }
LAB_02677b00:
  return uVar3 & 1;
}


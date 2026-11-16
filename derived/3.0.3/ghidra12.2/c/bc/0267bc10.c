
void FUN_0267bc10(byte *param_1,undefined8 param_2)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  byte local_14 [4];
  
  if (7 < *param_1) {
    return;
  }
  uVar1 = FUN_02582d8c(param_1,1);
  if (((7 < uVar1) ||
      (*(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar1 * 0x13f0 + 0x13d4) == '\0')) ||
     (*(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar1 * 0x13f0 + 0x13d6) == '\0')) {
    if (7 < *param_1) {
      return;
    }
    uVar1 = FUN_02582d8c(param_1,1);
    if (7 < uVar1) {
      return;
    }
    lVar2 = *(long *)PTR_DAT_04bb4fb8;
    if (*(char *)(lVar2 + (ulong)uVar1 * 0x13f0 + 0x13d4) == '\0') {
      return;
    }
    if (*(char *)(lVar2 + (ulong)uVar1 * 0x13f0 + 0x13d6) == '\0') {
      return;
    }
    if (*(int *)(lVar2 + (ulong)uVar1 * 0x13f0 + 0x13d0) != 1) {
      return;
    }
  }
  local_14[0] = *param_1;
  if (7 < local_14[0]) {
    local_14[0] = 0xff;
  }
  lVar2 = FUN_02583354(DAT_055021a0,local_14,1);
  if (lVar2 == 0) {
    return;
  }
  lVar6 = lVar2 + 0x194b0;
  if (*(long *)(lVar2 + 0x194b8) == 0) {
    lVar6 = *(long *)(DAT_05574040 + 0x20);
  }
  lVar2 = *(long *)(lVar6 + 0x98);
  if (lVar2 == 0) {
    FUN_027fea44(*(long *)(lVar6 + 0x80) + *(long *)(lVar6 + 0x78),param_2);
    return;
  }
  if (*(undefined8 **)(lVar2 + 0x10) == (undefined8 *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = (**(code **)**(undefined8 **)(lVar2 + 0x10))();
    lVar2 = *(long *)(lVar6 + 0x98);
    uVar3 = uVar3 & 0xffffffff;
    if (lVar2 == 0) goto LAB_0267bdac;
  }
  plVar4 = *(long **)(lVar2 + 0x20);
  if (plVar4 != (long *)0x0) {
    local_48 = *(undefined8 *)(lVar6 + 0x78);
    uStack_40 = *(undefined8 *)(lVar6 + 0x80);
    local_38 = 0x17c;
    (**(code **)(*plVar4 + 0x20))(plVar4,&local_48);
  }
LAB_0267bdac:
  FUN_027fea44(*(long *)(lVar6 + 0x80) + *(long *)(lVar6 + 0x78),param_2);
  if ((((uVar3 & 1) != 0) && (*(long *)(lVar6 + 0x98) != 0)) &&
     (puVar5 = *(undefined8 **)(*(long *)(lVar6 + 0x98) + 0x18), puVar5 != (undefined8 *)0x0)) {
    (**(code **)*puVar5)();
  }
  return;
}


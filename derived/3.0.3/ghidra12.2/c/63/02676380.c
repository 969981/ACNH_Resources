
void FUN_02676380(byte *param_1)

{
  undefined *puVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  undefined8 *puVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  byte local_4c [4];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  local_4c[0] = *param_1;
  if (7 < local_4c[0]) {
    local_4c[0] = 0xff;
  }
  lVar4 = FUN_02583354(DAT_055021a0,local_4c,1);
  if ((((lVar4 != 0 && *param_1 < 8) &&
       (uVar2 = FUN_02582d8c(param_1,1), puVar1 = PTR_DAT_04bb4fb8, uVar2 < 8)) &&
      (*(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar2 * 0x13f0 + 0x13d4) != '\0')) &&
     (((*(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar2 * 0x13f0 + 0x13d6) != '\0' &&
       (uVar2 = FUN_02582d8c(param_1,1), uVar2 < 8)) &&
      (lVar8 = *(long *)puVar1, *(char *)(lVar8 + (ulong)uVar2 * 0x13f0 + 0x13d4) != '\0')))) {
    lVar7 = lVar4 + 0x194b0;
    if (*(long *)(lVar4 + 0x194b8) == 0) {
      lVar7 = *(long *)(DAT_05574040 + 0x20);
    }
    if ((*(long *)(lVar7 + 0x98) == 0) ||
       (puVar5 = *(undefined8 **)(*(long *)(lVar7 + 0x98) + 0x10), puVar5 == (undefined8 *)0x0)) {
      uVar3 = 1;
    }
    else {
      uVar3 = (**(code **)*puVar5)();
      uVar3 = uVar3 ^ 1;
    }
    lVar8 = lVar8 + (ulong)uVar2 * 0x13f0;
    if ((*(long **)(lVar8 + 0x12e8) == (long *)0x0) ||
       (puVar5 = (undefined8 *)**(long **)(lVar8 + 0x12e8), puVar5 == (undefined8 *)0x0)) {
      uVar2 = 1;
    }
    else {
      uVar2 = (**(code **)*puVar5)();
      uVar2 = uVar2 ^ 1;
    }
    if ((*(long *)(lVar7 + 0x98) != 0) &&
       (plVar6 = *(long **)(*(long *)(lVar7 + 0x98) + 0x20), plVar6 != (long *)0x0)) {
      local_48 = *(undefined8 *)(lVar7 + 0x78);
      uStack_40 = *(undefined8 *)(lVar7 + 0x80);
      local_38 = 0x17c;
      (**(code **)(*plVar6 + 0x20))(plVar6,&local_48);
    }
    memcpy((void *)(*(long *)(lVar7 + 0x80) + *(long *)(lVar7 + 0x78)),
           (void *)(*(long *)(lVar8 + 0x12d0) + *(long *)(lVar8 + 0x12c8)),0x17c);
    if ((((uVar2 & 1) == 0) && (*(long *)(lVar8 + 0x12e8) != 0)) &&
       (puVar5 = *(undefined8 **)(*(long *)(lVar8 + 0x12e8) + 8), puVar5 != (undefined8 *)0x0)) {
      (**(code **)*puVar5)();
    }
    if ((((uVar3 & 1) == 0) && (*(long *)(lVar7 + 0x98) != 0)) &&
       (puVar5 = *(undefined8 **)(*(long *)(lVar7 + 0x98) + 0x18), puVar5 != (undefined8 *)0x0)) {
      (**(code **)*puVar5)();
    }
  }
  return;
}


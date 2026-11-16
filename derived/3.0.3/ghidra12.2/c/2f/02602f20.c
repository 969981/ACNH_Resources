
void FUN_02602f20(long param_1)

{
  uint uVar1;
  undefined4 uVar2;
  long lVar3;
  undefined8 *puVar4;
  long *plVar5;
  long lVar6;
  undefined *local_40;
  char *pcStack_38;
  
  if (*(byte *)(param_1 + 0x18) < 8) {
    local_40 = (undefined *)CONCAT71(local_40._1_7_,*(byte *)(param_1 + 0x18));
    lVar3 = FUN_025830c0(*(undefined8 *)PTR_DAT_04bb4f78,&local_40,1);
  }
  else {
    if (*(int *)(param_1 + 0x1c) == -1) {
      return;
    }
    if (*(long *)PTR_DAT_04bb46b0 == 0) {
      return;
    }
    lVar3 = FUN_026eec4c();
  }
  if (lVar3 == 0) {
    return;
  }
  lVar6 = lVar3 + 0x194b0;
  if (*(long *)(lVar3 + 0x194b8) == 0) {
    lVar6 = *(long *)(*(long *)PTR_DAT_04bb46b0 + 0x20);
    plVar5 = *(long **)(lVar6 + 0x98);
  }
  else {
    plVar5 = *(long **)(lVar3 + 0x19548);
  }
  if ((plVar5 == (long *)0x0) || ((undefined8 *)*plVar5 == (undefined8 *)0x0)) {
    uVar1 = 1;
  }
  else {
    uVar1 = (*(code *)**(undefined8 **)*plVar5)();
    uVar1 = uVar1 ^ 1;
  }
  uVar2 = FUN_027fd4c0(*(long *)(lVar6 + 0x80) + *(long *)(lVar6 + 0x78));
  if ((((uVar1 & 1) == 0) && (*(long *)(lVar6 + 0x98) != 0)) &&
     (puVar4 = *(undefined8 **)(*(long *)(lVar6 + 0x98) + 8), puVar4 != (undefined8 *)0x0)) {
    (**(code **)*puVar4)();
  }
  local_40 = PTR_DAT_04bb2020 + 0x10;
  pcStack_38 = "CurHaveMoney";
  if (*(long *)(param_1 + 8) != 0) {
    FUN_026054d0(*(long *)(param_1 + 8),&local_40,uVar2);
  }
  return;
}


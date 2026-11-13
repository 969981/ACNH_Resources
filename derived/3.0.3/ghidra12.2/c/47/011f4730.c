
void FUN_011f4730(long param_1)

{
  long *plVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined *local_38;
  char *local_30;
  undefined8 uStack_28;
  
  if (*(char *)(param_1 + 0x28) == '\0') {
    return;
  }
  local_38 = PTR_DAT_04bb2020 + 0x10;
  local_30 = "VillageExtensionLevel2";
  iVar2 = FUN_0273ea30(&local_38);
  if (iVar2 == 1) {
    return;
  }
  lVar6 = *(long *)PTR_DAT_04bb46b0;
  if (lVar6 == 0) {
LAB_011f47c8:
    lVar6 = 0;
  }
  else {
    puVar7 = *(undefined8 **)(lVar6 + 0x10);
    if ((*(byte *)(lVar6 + 0x453) & 1) == 0) {
      lVar3 = (**(code **)(*(long *)*puVar7 + 0x38))();
      lVar6 = 0;
      if (lVar3 != 0) {
        lVar6 = lVar3 + 0x70;
      }
    }
    else {
      if (puVar7 == (undefined8 *)0x0) goto LAB_011f47c8;
      lVar6 = 0;
      if ((long *)puVar7[0x26] != (long *)0x0) {
        lVar6 = (**(code **)(*(long *)puVar7[0x26] + 0x38))();
      }
    }
  }
  plVar1 = (long *)(lVar6 + 0x1c24c8);
  lVar3 = *(long *)(lVar6 + 0x1c24e8);
  if (lVar3 == 0) {
    FUN_0275bb8c(*(long *)(lVar6 + 0x1c24d0) + *plVar1);
    return;
  }
  if (*(undefined8 **)(lVar3 + 0x10) == (undefined8 *)0x0) {
    uVar4 = 0;
    plVar5 = *(long **)(lVar3 + 0x20);
  }
  else {
    uVar4 = (**(code **)**(undefined8 **)(lVar3 + 0x10))();
    uVar4 = uVar4 & 0xffffffff;
    if (*(long *)(lVar6 + 0x1c24e8) == 0) goto LAB_011f4828;
    plVar5 = *(long **)(*(long *)(lVar6 + 0x1c24e8) + 0x20);
  }
  if (plVar5 != (long *)0x0) {
    local_38 = (undefined *)*plVar1;
    local_30 = *(char **)(lVar6 + 0x1c24d0);
    uStack_28 = 0x928;
    (**(code **)(*plVar5 + 0x20))(plVar5,&local_38);
  }
LAB_011f4828:
  FUN_0275bb8c(*(long *)(lVar6 + 0x1c24d0) + *plVar1);
  if ((((uVar4 & 1) != 0) && (*(long *)(lVar6 + 0x1c24e8) != 0)) &&
     (puVar7 = *(undefined8 **)(*(long *)(lVar6 + 0x1c24e8) + 0x18), puVar7 != (undefined8 *)0x0)) {
    (**(code **)*puVar7)();
  }
  return;
}


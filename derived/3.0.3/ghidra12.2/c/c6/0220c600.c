
uint FUN_0220c600(void)

{
  undefined *puVar1;
  undefined *puVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  long lVar6;
  undefined8 *puVar7;
  long *plVar8;
  long lVar9;
  undefined *local_50;
  char *pcStack_48;
  
  puVar7 = *(undefined8 **)(*(long *)PTR_DAT_04bb46b0 + 0x10);
  if ((*(byte *)(*(long *)PTR_DAT_04bb46b0 + 0x453) & 1) == 0) {
    lVar6 = (**(code **)(*(long *)*puVar7 + 0x38))();
    lVar9 = 0;
    if (lVar6 != 0) {
      lVar9 = lVar6 + 0x70;
    }
  }
  else {
    lVar9 = (**(code **)(*(long *)puVar7[0x26] + 0x38))();
  }
  plVar8 = *(long **)(lVar9 + 0x1bf260);
  if ((plVar8 == (long *)0x0) || (puVar7 = (undefined8 *)*plVar8, puVar7 == (undefined8 *)0x0)) {
    uVar3 = 1;
  }
  else {
    uVar3 = (**(code **)*puVar7)();
    uVar3 = uVar3 ^ 1;
  }
  puVar2 = PTR_DAT_04bb2020;
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  pcStack_48 = "IsVisitNpcTidyToday";
  local_50 = puVar1;
  iVar4 = FUN_0273ea30(&local_50);
  if (iVar4 != 1) {
    pcStack_48 = "IsCallNpcTidy";
    local_50 = puVar1;
    iVar4 = FUN_0273ea30(&local_50);
    if (iVar4 != 1) {
      uVar5 = 0;
      goto joined_r0x0220c714;
    }
  }
  pcStack_48 = "IsVisitNpcTidyToday";
  local_50 = puVar1;
  iVar4 = FUN_0273ea30(&local_50);
  if (iVar4 == 1) {
    local_50 = puVar2 + 0x10;
    pcStack_48 = "NpcTidyVisitType";
    uVar5 = FUN_0273ea30(&local_50);
    if (4 < uVar5) {
      uVar5 = 0;
    }
  }
  else {
    uVar5 = 4;
  }
joined_r0x0220c714:
  if ((((uVar3 & 1) == 0) && (lVar9 = *(long *)(lVar9 + 0x1bf260), lVar9 != 0)) &&
     (puVar7 = *(undefined8 **)(lVar9 + 8), puVar7 != (undefined8 *)0x0)) {
    (**(code **)*puVar7)();
  }
  return uVar5;
}


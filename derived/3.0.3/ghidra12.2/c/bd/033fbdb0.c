
bool FUN_033fbdb0(uint *param_1)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  long *plVar7;
  undefined **local_40;
  char *pcStack_38;
  
  lVar5 = *(long *)PTR_DAT_04bb46b0;
  if (lVar5 != 0) {
    puVar6 = *(undefined8 **)(lVar5 + 0x10);
    if ((*(byte *)(lVar5 + 0x453) & 1) == 0) {
      lVar4 = (**(code **)(*(long *)*puVar6 + 0x38))();
      lVar5 = 0;
      if (lVar4 != 0) {
        lVar5 = lVar4 + 0x70;
      }
      plVar7 = *(long **)(lVar5 + 0xd0);
      goto joined_r0x033fbe2c;
    }
    if ((puVar6 != (undefined8 *)0x0) && ((long *)puVar6[0x26] != (long *)0x0)) {
      lVar5 = (**(code **)(*(long *)puVar6[0x26] + 0x38))();
      plVar7 = *(long **)(lVar5 + 0xd0);
      goto joined_r0x033fbe2c;
    }
  }
  lVar5 = 0;
  plVar7 = plRam00000000000000d0;
joined_r0x033fbe2c:
  if ((plVar7 == (long *)0x0) || ((undefined8 *)*plVar7 == (undefined8 *)0x0)) {
    uVar2 = 1;
  }
  else {
    uVar2 = (*(code *)**(undefined8 **)*plVar7)();
    uVar2 = uVar2 ^ 1;
  }
  lVar4 = *(long *)(lVar5 + 0xb8) + *(long *)(lVar5 + 0xb0);
  lVar1 = lVar4 + (ulong)*param_1 * 0x13230;
  if (9 < *param_1) {
    lVar1 = lVar4;
  }
  local_40 = &PTR_LAB_048f9770;
  pcStack_38 = "MoveInCompletion";
  iVar3 = FUN_02749340(lVar1 + 0x1267c,&local_40);
  if ((((uVar2 & 1) == 0) && (*(long *)(lVar5 + 0xd0) != 0)) &&
     (puVar6 = *(undefined8 **)(*(long *)(lVar5 + 0xd0) + 8), puVar6 != (undefined8 *)0x0)) {
    (**(code **)*puVar6)();
  }
  return iVar3 != 0;
}


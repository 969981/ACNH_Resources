
void FUN_02674f70(long param_1,uint param_2,uint param_3)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  int iVar3;
  ulong uVar4;
  long *plVar5;
  undefined8 *puVar6;
  long lVar7;
  uint uVar8;
  long lVar9;
  undefined *local_48;
  char *pcStack_40;
  undefined8 local_38;
  
  if (param_1 == 0) {
    return;
  }
  if ((param_3 >> 7 & 1) == 0) {
    local_48 = PTR_DAT_04bb2020 + 0x10;
    pcStack_40 = "ItemRingEnable";
    iVar3 = FUN_0274b8d0(param_1,&local_48);
    if (iVar3 == 0) {
      return;
    }
  }
  lVar9 = param_1 + 0x194b0;
  if (*(long *)(param_1 + 0x194b8) == 0) {
    lVar9 = *(long *)(*(long *)PTR_DAT_04bb46b0 + 0x20);
    lVar7 = *(long *)(lVar9 + 0x98);
  }
  else {
    lVar7 = *(long *)(param_1 + 0x19548);
  }
  if (lVar7 == 0) {
    uVar4 = 0;
  }
  else {
    if (*(undefined8 **)(lVar7 + 0x10) == (undefined8 *)0x0) {
      uVar4 = 0;
      plVar5 = *(long **)(lVar7 + 0x20);
    }
    else {
      uVar4 = (**(code **)**(undefined8 **)(lVar7 + 0x10))();
      uVar4 = uVar4 & 0xffffffff;
      if (*(long *)(lVar9 + 0x98) == 0) goto LAB_02675050;
      plVar5 = *(long **)(*(long *)(lVar9 + 0x98) + 0x20);
    }
    if (plVar5 != (long *)0x0) {
      local_48 = *(undefined **)(lVar9 + 0x78);
      pcStack_40 = *(char **)(lVar9 + 0x80);
      local_38 = 0x17c;
      (**(code **)(*plVar5 + 0x20))(plVar5,&local_48);
    }
  }
LAB_02675050:
  if (param_2 < 0x28) {
    lVar7 = *(long *)(lVar9 + 0x80) + *(long *)(lVar9 + 0x78);
    uVar8 = *(uint *)(lVar7 + 0x158);
    if (0x13 < uVar8) {
      uVar8 = 0x14;
    }
    puVar1 = (undefined1 *)(lVar7 + 0xa4) + (param_2 - uVar8);
    if (0x13 < param_2 - uVar8) {
      puVar1 = (undefined1 *)(lVar7 + 0xa4);
    }
    puVar2 = (undefined1 *)(lVar7 + (ulong)param_2 + 0x15c);
    if (uVar8 <= param_2) {
      puVar2 = puVar1;
    }
    *puVar2 = (char)param_3;
  }
  if ((((uVar4 & 1) != 0) && (*(long *)(lVar9 + 0x98) != 0)) &&
     (puVar6 = *(undefined8 **)(*(long *)(lVar9 + 0x98) + 0x18), puVar6 != (undefined8 *)0x0)) {
    (**(code **)*puVar6)();
  }
  return;
}


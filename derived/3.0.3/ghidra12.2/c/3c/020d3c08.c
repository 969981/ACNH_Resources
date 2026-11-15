
void FUN_020d3c08(byte param_1,undefined8 param_2,ulong param_3)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  undefined8 *puVar9;
  long lVar10;
  char *pcVar11;
  undefined **local_78;
  char *local_70;
  undefined8 local_68;
  
  if (DAT_05574040 == 0) {
    return;
  }
  puVar9 = *(undefined8 **)(DAT_05574040 + 0x10);
  if ((*(byte *)(DAT_05574040 + 0x453) & 1) == 0) {
    lVar3 = (**(code **)(*(long *)*puVar9 + 0x38))();
    if (lVar3 == 0) {
      return;
    }
    lVar3 = lVar3 + 0x70;
  }
  else {
    if (puVar9 == (undefined8 *)0x0) {
      return;
    }
    if ((long *)puVar9[0x26] == (long *)0x0) {
      return;
    }
    lVar3 = (**(code **)(*(long *)puVar9[0x26] + 0x38))();
    if (lVar3 == 0) {
      return;
    }
  }
  lVar10 = *(long *)(lVar3 + 0xd0);
  uVar2 = (uint)(char)param_1;
  if (lVar10 == 0) {
    uVar4 = 0;
  }
  else {
    if (*(undefined8 **)(lVar10 + 0x10) == (undefined8 *)0x0) {
      uVar4 = 0;
      plVar5 = *(long **)(lVar10 + 0x20);
    }
    else {
      uVar4 = (**(code **)**(undefined8 **)(lVar10 + 0x10))();
      uVar4 = uVar4 & 0xffffffff;
      if (*(long *)(lVar3 + 0xd0) == 0) goto LAB_020d3cfc;
      plVar5 = *(long **)(*(long *)(lVar3 + 0xd0) + 0x20);
    }
    if (plVar5 != (long *)0x0) {
      local_78 = *(undefined ***)(lVar3 + 0xb0);
      local_70 = *(char **)(lVar3 + 0xb8);
      local_68 = 0x1e3388;
      (**(code **)(*plVar5 + 0x20))(plVar5,&local_78);
    }
  }
LAB_020d3cfc:
  lVar10 = *(long *)(lVar3 + 0xb8) + *(long *)(lVar3 + 0xb0);
  lVar1 = lVar10 + (ulong)uVar2 * 0x13230;
  if (9 < param_1) {
    lVar1 = lVar10;
  }
  if ((param_3 & 1) == 0) {
    FUN_026b036c(lVar1,0);
    local_78 = &PTR_LAB_048f9770;
    local_70 = "InducementAtMovingDay";
    FUN_0265d4e0(uVar2,param_2,&local_78,1,0);
  }
  local_78 = &PTR_LAB_048f9770;
  local_70 = "AbandonedHouse";
  FUN_02749650(lVar1 + 0x1267c,uVar2,&local_78,1,0);
  lVar10 = *(long *)(lVar3 + 0xd0);
  if ((lVar10 != 0) && (plVar5 = *(long **)(lVar10 + 0x20), plVar5 != (long *)0x0)) {
    local_78 = *(undefined ***)(lVar3 + 0xb0);
    local_70 = *(char **)(lVar3 + 0xb8);
    local_68 = 0x1e3388;
    (**(code **)(*plVar5 + 0x20))(plVar5,&local_78);
    lVar10 = *(long *)(lVar3 + 0xd0);
  }
  pcVar11 = *(char **)(lVar3 + 0xb8) + (long)*(undefined ***)(lVar3 + 0xb0);
  if (pcVar11[0x1e335d] == param_1) {
    if ((lVar10 != 0) && (plVar5 = *(long **)(lVar10 + 0x20), plVar5 != (long *)0x0)) {
      local_68 = 0x1e3388;
      local_78 = *(undefined ***)(lVar3 + 0xb0);
      local_70 = *(char **)(lVar3 + 0xb8);
      (**(code **)(*plVar5 + 0x20))(plVar5,&local_78);
      pcVar11 = (char *)(*(long *)(lVar3 + 0xb8) + *(long *)(lVar3 + 0xb0));
    }
    pcVar11[0x1e3360] = '\0';
    lVar10 = *(long *)(lVar3 + 0xd0);
  }
  if ((lVar10 != 0) && (plVar5 = *(long **)(lVar10 + 0x20), plVar5 != (long *)0x0)) {
    local_78 = *(undefined ***)(lVar3 + 0xb0);
    local_70 = *(char **)(lVar3 + 0xb8);
    local_68 = 0x1e3388;
    (**(code **)(*plVar5 + 0x20))(plVar5,&local_78);
  }
  FUN_027e0740(*(long *)(lVar3 + 0xb8) + *(long *)(lVar3 + 0xb0),lVar1,1);
  if (DAT_05574040 == 0) {
LAB_020d3e9c:
    lVar10 = 0;
  }
  else {
    puVar9 = *(undefined8 **)(DAT_05574040 + 0x10);
    if ((*(byte *)(DAT_05574040 + 0x453) & 1) == 0) {
      lVar6 = (**(code **)(*(long *)*puVar9 + 0x38))();
      lVar10 = 0;
      if (lVar6 != 0) {
        lVar10 = lVar6 + 0x70;
      }
    }
    else {
      if (puVar9 == (undefined8 *)0x0) goto LAB_020d3e9c;
      lVar10 = 0;
      if ((long *)puVar9[0x26] != (long *)0x0) {
        lVar10 = (**(code **)(*(long *)puVar9[0x26] + 0x38))();
      }
    }
  }
  plVar5 = (long *)(lVar10 + 0x1c2df8);
  lVar6 = *(long *)(lVar10 + 0x1c2e18);
  if (lVar6 == 0) {
    FUN_0285bfc0(*(long *)(lVar10 + 0x1c2e00) + *plVar5,lVar1);
    goto LAB_020d3f40;
  }
  if (*(undefined8 **)(lVar6 + 0x10) == (undefined8 *)0x0) {
    uVar7 = 0;
    plVar8 = *(long **)(lVar6 + 0x20);
joined_r0x020d3f88:
    if (plVar8 != (long *)0x0) {
      local_78 = (undefined **)*plVar5;
      local_70 = *(char **)(lVar10 + 0x1c2e00);
      local_68 = 0x2520;
      (**(code **)(*plVar8 + 0x20))(plVar8,&local_78);
    }
  }
  else {
    uVar7 = (**(code **)**(undefined8 **)(lVar6 + 0x10))();
    uVar7 = uVar7 & 0xffffffff;
    if (*(long *)(lVar10 + 0x1c2e18) != 0) {
      plVar8 = *(long **)(*(long *)(lVar10 + 0x1c2e18) + 0x20);
      goto joined_r0x020d3f88;
    }
  }
  FUN_0285bfc0(*(long *)(lVar10 + 0x1c2e00) + *plVar5,lVar1);
  if ((((uVar7 & 1) != 0) && (*(long *)(lVar10 + 0x1c2e18) != 0)) &&
     (puVar9 = *(undefined8 **)(*(long *)(lVar10 + 0x1c2e18) + 0x18), puVar9 != (undefined8 *)0x0))
  {
    (**(code **)*puVar9)();
  }
LAB_020d3f40:
  if ((((uVar4 & 1) != 0) && (*(long *)(lVar3 + 0xd0) != 0)) &&
     (puVar9 = *(undefined8 **)(*(long *)(lVar3 + 0xd0) + 0x18), puVar9 != (undefined8 *)0x0)) {
    (**(code **)*puVar9)();
  }
  return;
}


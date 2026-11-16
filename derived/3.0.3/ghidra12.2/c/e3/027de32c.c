
/* WARNING: Removing unreachable block (ram,0x027de440) */

void FUN_027de32c(void)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  undefined8 *puVar5;
  ulong local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  local_48 = CONCAT44(local_48._4_4_,5);
  lVar4 = *(long *)PTR_DAT_04bb46b0;
  if (lVar4 == 0) {
    return;
  }
  puVar5 = *(undefined8 **)(lVar4 + 0x10);
  if ((*(byte *)(lVar4 + 0x453) & 1) == 0) {
    lVar4 = (**(code **)(*(long *)*puVar5 + 0x38))();
    if (lVar4 == 0) {
      return;
    }
    lVar4 = lVar4 + 0x70;
  }
  else {
    if (puVar5 == (undefined8 *)0x0) {
      return;
    }
    if ((long *)puVar5[0x26] == (long *)0x0) {
      return;
    }
    lVar4 = (**(code **)(*(long *)puVar5[0x26] + 0x38))();
    if (lVar4 == 0) {
      return;
    }
  }
  if (9 < (uint)local_48) {
    return;
  }
  lVar1 = lVar4 + 0x1962d8 + (local_48 & 0xffffffff) * 0x10d8;
  if (9 < (uint)local_48) {
    lVar1 = lVar4 + 0x1962d8;
  }
  lVar4 = *(long *)(lVar1 + 0x28);
  if (lVar4 == 0) {
    uVar2 = 0;
  }
  else {
    if (*(undefined8 **)(lVar4 + 0x10) == (undefined8 *)0x0) {
      uVar2 = 0;
    }
    else {
      uVar2 = (**(code **)**(undefined8 **)(lVar4 + 0x10))();
      lVar4 = *(long *)(lVar1 + 0x28);
      uVar2 = uVar2 & 0xffffffff;
      if (lVar4 == 0) goto LAB_027de424;
    }
    plVar3 = *(long **)(lVar4 + 0x20);
    if (plVar3 != (long *)0x0) {
      local_48 = *(ulong *)(lVar1 + 8);
      uStack_40 = *(undefined8 *)(lVar1 + 0x10);
      local_38 = 0x12e8;
      (**(code **)(*plVar3 + 0x20))(plVar3,&local_48);
    }
  }
LAB_027de424:
  local_48 = local_48 & 0xffffffff00000000;
  *(undefined1 *)(*(long *)(lVar1 + 0x10) + *(long *)(lVar1 + 8) + 0x1c4) = 5;
  if ((*(long *)(lVar1 + 0x28) != 0) &&
     (plVar3 = *(long **)(*(long *)(lVar1 + 0x28) + 0x20), plVar3 != (long *)0x0)) {
    local_48 = *(ulong *)(lVar1 + 8);
    uStack_40 = *(undefined8 *)(lVar1 + 0x10);
    local_38 = 0x12e8;
    (**(code **)(*plVar3 + 0x20))(plVar3,&local_48);
  }
  FUN_027cdc30(*(long *)(lVar1 + 0x10) + *(long *)(lVar1 + 8));
  if ((((uVar2 & 1) != 0) && (*(long *)(lVar1 + 0x28) != 0)) &&
     (puVar5 = *(undefined8 **)(*(long *)(lVar1 + 0x28) + 0x18), puVar5 != (undefined8 *)0x0)) {
    (**(code **)*puVar5)();
  }
  return;
}



void FUN_02647c50(long param_1)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long local_48;
  long lStack_40;
  undefined8 local_38;
  
  lVar9 = *(long *)(param_1 + 8);
  lVar8 = *(long *)(lVar9 + 0x28);
  if (lVar8 == 0) {
    uVar5 = 0;
LAB_02647cd8:
    lVar10 = *(long *)(lVar9 + 0x10) + *(long *)(lVar9 + 8);
    lVar8 = local_48;
    lVar1 = lStack_40;
    goto LAB_02647d1c;
  }
  if (*(undefined8 **)(lVar8 + 0x10) == (undefined8 *)0x0) {
    uVar5 = 0;
    plVar6 = *(long **)(lVar8 + 0x20);
    if (plVar6 != (long *)0x0) goto LAB_02647c98;
LAB_02647cf0:
    lVar10 = *(long *)(lVar9 + 0x10) + *(long *)(lVar9 + 8);
    plVar6 = *(long **)(lVar8 + 0x20);
    lVar3 = *(long *)(lVar9 + 8);
    lVar4 = *(long *)(lVar9 + 0x10);
    lVar8 = local_48;
    lVar1 = lStack_40;
  }
  else {
    uVar5 = (**(code **)**(undefined8 **)(lVar8 + 0x10))();
    lVar8 = *(long *)(lVar9 + 0x28);
    uVar5 = uVar5 & 0xffffffff;
    if (lVar8 == 0) goto LAB_02647cd8;
    plVar6 = *(long **)(lVar8 + 0x20);
    if (plVar6 == (long *)0x0) goto LAB_02647cf0;
LAB_02647c98:
    local_48 = *(long *)(lVar9 + 8);
    lStack_40 = *(long *)(lVar9 + 0x10);
    local_38 = 0xb548;
    (**(code **)(*plVar6 + 0x20))(plVar6,&local_48);
    lVar10 = *(long *)(lVar9 + 0x10) + *(long *)(lVar9 + 8);
    lVar8 = local_48;
    lVar1 = lStack_40;
    if (*(long *)(lVar9 + 0x28) == 0) goto LAB_02647d1c;
    plVar6 = *(long **)(*(long *)(lVar9 + 0x28) + 0x20);
    lVar3 = *(long *)(lVar9 + 8);
    lVar4 = *(long *)(lVar9 + 0x10);
  }
  lStack_40 = lVar4;
  local_48 = lVar3;
  if (plVar6 != (long *)0x0) {
    local_38 = 0xb548;
    (**(code **)(*plVar6 + 0x20))(plVar6,&local_48);
    lVar8 = local_48;
    lVar1 = lStack_40;
  }
LAB_02647d1c:
  lStack_40 = lVar1;
  local_48 = lVar8;
  lVar8 = 0;
  do {
    uVar2 = *(uint *)(lVar10 + 0xaf00 + lVar8);
    lVar8 = lVar8 + 4;
    lVar1 = lVar10 + (ulong)uVar2 * 0x70;
    if (399 < uVar2) {
      lVar1 = lVar10;
    }
    *(byte *)(lVar1 + 0x6e) = *(byte *)(lVar1 + 0x6e) & 0xf7;
  } while (lVar8 != 0x640);
  if ((((uVar5 & 1) != 0) && (*(long *)(lVar9 + 0x28) != 0)) &&
     (puVar7 = *(undefined8 **)(*(long *)(lVar9 + 0x28) + 0x18), puVar7 != (undefined8 *)0x0)) {
    (**(code **)*puVar7)();
  }
  return;
}


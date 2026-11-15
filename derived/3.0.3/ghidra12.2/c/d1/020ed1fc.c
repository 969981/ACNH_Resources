
void FUN_020ed1fc(char *param_1)

{
  char cVar1;
  uint uVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  byte bVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  bVar8 = param_1[1];
  cVar1 = *param_1;
  if (7 < bVar8) {
    bVar8 = 0xff;
  }
  local_48 = CONCAT71(local_48._1_7_,bVar8);
  lVar3 = FUN_025830c0(DAT_055021a0,&local_48,1);
  if (lVar3 == 0) {
    return;
  }
  if ((*(long **)(lVar3 + 0x28) == (long *)0x0) ||
     (puVar4 = (undefined8 *)**(long **)(lVar3 + 0x28), puVar4 == (undefined8 *)0x0)) {
    uVar2 = 1;
  }
  else {
    uVar2 = (**(code **)*puVar4)();
    uVar2 = uVar2 ^ 1;
  }
  lVar5 = FUN_0265ca50((int)cVar1,*(long *)(lVar3 + 0x10) + *(long *)(lVar3 + 8) + 0xc154);
  if ((((uVar2 & 1) == 0) && (*(long *)(lVar3 + 0x28) != 0)) &&
     (puVar4 = *(undefined8 **)(*(long *)(lVar3 + 0x28) + 8), puVar4 != (undefined8 *)0x0)) {
    (**(code **)*puVar4)();
  }
  if (lVar5 == 0) {
    return;
  }
  lVar3 = *(long *)(lVar5 + 0x28);
  if (lVar3 == 0) {
    lVar3 = *(long *)(lVar5 + 0x10) + *(long *)(lVar5 + 8);
    uVar9 = *(undefined8 *)(param_1 + 4);
    uVar10 = *(undefined8 *)(param_1 + 0xc);
    uVar11 = *(undefined8 *)(param_1 + 0x14);
    *(undefined4 *)(lVar3 + 0x5dc) = *(undefined4 *)(param_1 + 0x1c);
    *(undefined8 *)(lVar3 + 0x5cc) = uVar10;
    *(undefined8 *)(lVar3 + 0x5d4) = uVar11;
    *(undefined8 *)(lVar3 + 0x5c4) = uVar9;
    return;
  }
  if (*(undefined8 **)(lVar3 + 0x10) == (undefined8 *)0x0) {
    uVar6 = 0;
    plVar7 = *(long **)(lVar3 + 0x20);
  }
  else {
    uVar6 = (**(code **)**(undefined8 **)(lVar3 + 0x10))();
    uVar6 = uVar6 & 0xffffffff;
    if (*(long *)(lVar5 + 0x28) == 0) goto LAB_020ed304;
    plVar7 = *(long **)(*(long *)(lVar5 + 0x28) + 0x20);
  }
  if (plVar7 != (long *)0x0) {
    local_48 = *(undefined8 *)(lVar5 + 8);
    uStack_40 = *(undefined8 *)(lVar5 + 0x10);
    local_38 = 0x5f0;
    (**(code **)(*plVar7 + 0x20))(plVar7,&local_48);
  }
LAB_020ed304:
  lVar3 = *(long *)(lVar5 + 0x10) + *(long *)(lVar5 + 8);
  uVar9 = *(undefined8 *)(param_1 + 4);
  uVar10 = *(undefined8 *)(param_1 + 0xc);
  uVar11 = *(undefined8 *)(param_1 + 0x14);
  *(undefined4 *)(lVar3 + 0x5dc) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined8 *)(lVar3 + 0x5cc) = uVar10;
  *(undefined8 *)(lVar3 + 0x5d4) = uVar11;
  *(undefined8 *)(lVar3 + 0x5c4) = uVar9;
  if ((((uVar6 & 1) != 0) && (*(long *)(lVar5 + 0x28) != 0)) &&
     (puVar4 = *(undefined8 **)(*(long *)(lVar5 + 0x28) + 0x18), puVar4 != (undefined8 *)0x0)) {
    (**(code **)*puVar4)();
  }
  return;
}


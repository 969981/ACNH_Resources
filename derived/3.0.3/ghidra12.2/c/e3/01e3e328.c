
void FUN_01e3e328(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  undefined8 *puVar7;
  ulong uVar8;
  ulong uVar9;
  long *plVar10;
  long lVar11;
  undefined4 local_58;
  int local_54;
  
  if ((*(int *)(param_1 + 0x500) != 0) || (*(int *)(param_1 + 0x508) == -1)) {
    return;
  }
  lVar11 = *(long *)(param_1 + 0x60);
  lVar6 = FUN_0265c3e0(*(int *)(param_1 + 0x508));
  if (lVar11 == 0) {
    return;
  }
  if (lVar6 == 0) {
    return;
  }
  if ((*(long **)(lVar6 + 0xf870) == (long *)0x0) ||
     (puVar7 = (undefined8 *)**(long **)(lVar6 + 0xf870), puVar7 == (undefined8 *)0x0)) {
    uVar8 = 0;
    plVar10 = *(long **)(lVar6 + 0xf8a8);
  }
  else {
    uVar8 = (**(code **)*puVar7)();
    uVar8 = uVar8 & 0xffffffff;
    plVar10 = *(long **)(lVar6 + 0xf8a8);
  }
  if ((plVar10 == (long *)0x0) || ((undefined8 *)*plVar10 == (undefined8 *)0x0)) {
    uVar4 = 1;
    plVar10 = *(long **)(lVar6 + 0xf8e0);
  }
  else {
    uVar4 = (*(code *)**(undefined8 **)*plVar10)();
    uVar4 = uVar4 ^ 1;
    plVar10 = *(long **)(lVar6 + 0xf8e0);
  }
  if ((plVar10 == (long *)0x0) || ((undefined8 *)*plVar10 == (undefined8 *)0x0)) {
    uVar5 = 1;
  }
  else {
    uVar5 = (*(code *)**(undefined8 **)*plVar10)();
    uVar5 = uVar5 ^ 1;
  }
  lVar1 = *(long *)(lVar6 + 0xf858) + *(long *)(lVar6 + 0xf850);
  lVar2 = *(long *)(lVar6 + 0xf890) + *(long *)(lVar6 + 0xf888);
  lVar3 = *(long *)(lVar6 + 0xf8c8) + *(long *)(lVar6 + 0xf8c0);
  FUN_0201a52c(&local_58,lVar11);
  uVar9 = FUN_0277d7b4(&local_58,lVar1);
  if ((((uVar9 & 1) == 0) || (local_58._3_1_ != *(char *)(lVar1 + 3))) ||
     (local_54 != *(int *)(lVar1 + 4))) {
    local_58 = 0;
    FUN_02015670(lVar11,lVar1,&local_58);
  }
  lVar1 = *(long *)(lVar11 + 0x60b0) +
          ((ulong)*(uint *)(*(long *)(lVar11 + 0x60b0) + 0x10) & 1) * 0x20;
  local_58 = *(undefined4 *)(lVar1 + 0x14);
  local_54 = *(int *)(lVar1 + 0x18);
  uVar9 = FUN_0277d7b4(&local_58,lVar2);
  if ((((uVar9 & 1) == 0) || (local_58._3_1_ != *(char *)(lVar2 + 3))) ||
     (local_54 != *(int *)(lVar2 + 4))) {
    local_58 = 0;
    FUN_02017350(lVar11,lVar2,&local_58);
  }
  lVar1 = *(long *)(lVar11 + 0x60a8) +
          ((ulong)*(uint *)(*(long *)(lVar11 + 0x60a8) + 0x10) & 1) * 0x20;
  local_58 = *(undefined4 *)(lVar1 + 0x14);
  local_54 = *(int *)(lVar1 + 0x18);
  uVar9 = FUN_0277d7b4(&local_58,lVar3);
  if ((((uVar9 & 1) == 0) || (local_58._3_1_ != *(char *)(lVar3 + 3))) ||
     (local_54 != *(int *)(lVar3 + 4))) {
    local_58 = 0;
    FUN_02016ab0(lVar11,lVar3,&local_58);
  }
  if ((((uVar5 & 1) == 0) && (*(long *)(lVar6 + 0xf8e0) != 0)) &&
     (puVar7 = *(undefined8 **)(*(long *)(lVar6 + 0xf8e0) + 8), puVar7 != (undefined8 *)0x0)) {
    (**(code **)*puVar7)();
  }
  if ((((uVar4 & 1) == 0) && (*(long *)(lVar6 + 0xf8a8) != 0)) &&
     (puVar7 = *(undefined8 **)(*(long *)(lVar6 + 0xf8a8) + 8), puVar7 != (undefined8 *)0x0)) {
    (**(code **)*puVar7)();
  }
  if ((((uVar8 & 1) != 0) && (*(long *)(lVar6 + 0xf870) != 0)) &&
     (puVar7 = *(undefined8 **)(*(long *)(lVar6 + 0xf870) + 8), puVar7 != (undefined8 *)0x0)) {
    (**(code **)*puVar7)();
  }
  return;
}



/* WARNING: Removing unreachable block (ram,0x02b9338c) */
/* WARNING: Removing unreachable block (ram,0x02b9339c) */

void FUN_02b93360(undefined4 param_1)

{
  undefined2 *puVar1;
  uint uVar2;
  ulong uVar3;
  undefined8 *puVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  undefined *local_70;
  undefined2 local_68;
  undefined *local_60;
  undefined1 local_58;
  int local_54;
  undefined *local_50;
  undefined8 uStack_48;
  undefined4 local_40;
  undefined2 local_3c;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  
  local_60 = (undefined *)((ulong)local_60 & 0xffffffff00000000);
  puVar4 = &DAT_05636dd8;
  if (*(long *)(*(long *)PTR_DAT_04bb27a8 + 0x1f8) != 0) {
    puVar4 = (undefined8 *)(*(long *)(*(long *)PTR_DAT_04bb27a8 + 0x1f8) + 0x148);
  }
  if (puVar4[1] == 0) {
    local_60 = PTR_DAT_04bc4608 + 0x10;
    local_58 = PTR_DAT_04bbc570[8];
    local_54 = *(int *)(PTR_DAT_04bbc570 + 0xc);
    uStack_48 = *(undefined8 *)(PTR_DAT_04bbc570 + 0x18);
    local_50 = PTR_DAT_04bb2010 + 0x10;
    local_40 = *(undefined4 *)(PTR_DAT_04bbc570 + 0x20);
    local_3c = *(undefined2 *)(PTR_DAT_04bbc570 + 0x24);
  }
  else {
    FUN_01360490(&local_60,puVar4[1],param_1);
  }
  if (local_54 == 0) {
    return;
  }
  uVar3 = FUN_02a8e7c0(&local_60);
  if ((uVar3 & 1) == 0) {
    return;
  }
  if (puVar4[1] != 0) {
    FUN_01361f00(puVar4[1],param_1);
  }
  local_70 = PTR_DAT_04bb7648 + 0x10;
  lVar6 = *(long *)PTR_DAT_04bb27f8;
  if ((((*(ushort **)PTR_DAT_04bc3a48 == (ushort *)0x0) ||
       ((**(ushort **)PTR_DAT_04bc3a48 & 1) == 0)) || (*(long *)PTR_DAT_04bc1530 == 0)) ||
     (lVar7 = *(long *)(*(long *)PTR_DAT_04bc1530 + 8), lVar7 == 0)) {
    puVar1 = (undefined2 *)(lVar6 + 0x2c);
    if ((*(ushort *)(lVar6 + 0x28) & 0x40) != 0) {
      puVar1 = (undefined2 *)(lVar6 + 0x2a);
    }
    local_68 = *puVar1;
  }
  else if ((*(long **)(lVar7 + 0x60) == (long *)0x0) ||
          (puVar4 = (undefined8 *)**(long **)(lVar7 + 0x60), puVar4 == (undefined8 *)0x0)) {
    local_68 = *(undefined2 *)(*(long *)(lVar7 + 0x48) + *(long *)(lVar7 + 0x40) + 2);
  }
  else {
    uVar3 = (**(code **)*puVar4)();
    local_68 = *(undefined2 *)(*(long *)(lVar7 + 0x48) + *(long *)(lVar7 + 0x40) + 2);
    if ((((uVar3 & 1) != 0) && (*(long *)(lVar7 + 0x60) != 0)) &&
       (puVar4 = *(undefined8 **)(*(long *)(lVar7 + 0x60) + 8), puVar4 != (undefined8 *)0x0)) {
      (**(code **)*puVar4)();
    }
  }
  lVar6 = FUN_03775a30(&local_70);
  if (lVar6 == 0) {
    return;
  }
  lVar7 = *(long *)(lVar6 + 0x1b0);
  if (lVar7 == 0) {
    *(undefined2 *)(*(long *)(lVar6 + 0x198) + *(long *)(lVar6 + 400) + 1) = 0;
    return;
  }
  if (*(undefined8 **)(lVar7 + 0x10) == (undefined8 *)0x0) {
    uVar2 = 1;
  }
  else {
    uVar2 = (**(code **)**(undefined8 **)(lVar7 + 0x10))();
    lVar7 = *(long *)(lVar6 + 0x1b0);
    uVar2 = uVar2 ^ 1;
    if (lVar7 == 0) goto LAB_02b9357c;
  }
  plVar5 = *(long **)(lVar7 + 0x20);
  if (plVar5 != (long *)0x0) {
    local_38 = *(undefined8 *)(lVar6 + 400);
    uStack_30 = *(undefined8 *)(lVar6 + 0x198);
    local_28 = 0x2acc;
    (**(code **)(*plVar5 + 0x20))(plVar5,&local_38);
  }
LAB_02b9357c:
  *(undefined2 *)(*(long *)(lVar6 + 0x198) + *(long *)(lVar6 + 400) + 1) = 0;
  if ((((uVar2 & 1) == 0) && (*(long *)(lVar6 + 0x1b0) != 0)) &&
     (puVar4 = *(undefined8 **)(*(long *)(lVar6 + 0x1b0) + 0x18), puVar4 != (undefined8 *)0x0)) {
    (**(code **)*puVar4)();
  }
  return;
}


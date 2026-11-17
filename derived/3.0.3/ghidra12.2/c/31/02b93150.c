
/* WARNING: Removing unreachable block (ram,0x02b93194) */
/* WARNING: Removing unreachable block (ram,0x02b931a4) */

void FUN_02b93150(long param_1,undefined4 param_2)

{
  undefined2 *puVar1;
  ulong uVar2;
  undefined8 *puVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  undefined *local_58;
  undefined2 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  if (*(int *)(param_1 + 0xc) == 0) {
    return;
  }
  uVar2 = FUN_02a8e7c0();
  if ((uVar2 & 1) == 0) {
    return;
  }
  local_48 = (ulong)local_48._4_4_ << 0x20;
  puVar3 = &DAT_05636dd8;
  if (*(long *)(*(long *)PTR_DAT_04bb27a8 + 0x1f8) != 0) {
    puVar3 = (undefined8 *)(*(long *)(*(long *)PTR_DAT_04bb27a8 + 0x1f8) + 0x148);
  }
  FUN_02a59660(puVar3,param_1,param_2);
  local_58 = PTR_DAT_04bb7648 + 0x10;
  lVar5 = *(long *)PTR_DAT_04bb27f8;
  if ((((*(ushort **)PTR_DAT_04bc3a48 == (ushort *)0x0) ||
       ((**(ushort **)PTR_DAT_04bc3a48 & 1) == 0)) || (*(long *)PTR_DAT_04bc1530 == 0)) ||
     (lVar6 = *(long *)(*(long *)PTR_DAT_04bc1530 + 8), lVar6 == 0)) {
    puVar1 = (undefined2 *)(lVar5 + 0x2c);
    if ((*(ushort *)(lVar5 + 0x28) & 0x40) != 0) {
      puVar1 = (undefined2 *)(lVar5 + 0x2a);
    }
    local_50 = *puVar1;
  }
  else if ((*(long **)(lVar6 + 0x60) == (long *)0x0) ||
          (puVar3 = (undefined8 *)**(long **)(lVar6 + 0x60), puVar3 == (undefined8 *)0x0)) {
    local_50 = *(undefined2 *)(*(long *)(lVar6 + 0x48) + *(long *)(lVar6 + 0x40) + 2);
  }
  else {
    uVar2 = (**(code **)*puVar3)();
    local_50 = *(undefined2 *)(*(long *)(lVar6 + 0x48) + *(long *)(lVar6 + 0x40) + 2);
    if ((((uVar2 & 1) != 0) && (*(long *)(lVar6 + 0x60) != 0)) &&
       (puVar3 = *(undefined8 **)(*(long *)(lVar6 + 0x60) + 8), puVar3 != (undefined8 *)0x0)) {
      (**(code **)*puVar3)();
    }
  }
  lVar5 = FUN_03775a30(&local_58);
  if (lVar5 == 0) {
    return;
  }
  lVar6 = *(long *)(lVar5 + 0x1b0);
  if (lVar6 == 0) {
    uVar2 = 0;
  }
  else {
    if (*(undefined8 **)(lVar6 + 0x10) == (undefined8 *)0x0) {
      uVar2 = 0;
    }
    else {
      uVar2 = (**(code **)**(undefined8 **)(lVar6 + 0x10))();
      lVar6 = *(long *)(lVar5 + 0x1b0);
      uVar2 = uVar2 & 0xffffffff;
      if (lVar6 == 0) goto LAB_02b932f8;
    }
    plVar4 = *(long **)(lVar6 + 0x20);
    if (plVar4 != (long *)0x0) {
      local_48 = *(long *)(lVar5 + 400);
      uStack_40 = *(undefined8 *)(lVar5 + 0x198);
      local_38 = 0x2acc;
      (**(code **)(*plVar4 + 0x20))(plVar4,&local_48);
    }
  }
LAB_02b932f8:
  lVar6 = *(long *)(lVar5 + 0x198) + *(long *)(lVar5 + 400);
  *(char *)(lVar6 + 1) = (char)*(undefined4 *)(param_1 + 0x18);
  *(char *)(lVar6 + 2) = (char)*(undefined4 *)(param_1 + 0x1c);
  if ((((uVar2 & 1) != 0) && (*(long *)(lVar5 + 0x1b0) != 0)) &&
     (puVar3 = *(undefined8 **)(*(long *)(lVar5 + 0x1b0) + 0x18), puVar3 != (undefined8 *)0x0)) {
    (**(code **)*puVar3)();
  }
  return;
}



void FUN_02b93b60(long *param_1)

{
  undefined2 *puVar1;
  char cVar2;
  undefined *puVar3;
  uint uVar4;
  undefined8 *puVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  undefined *local_40;
  undefined2 local_38;
  
  local_40 = PTR_DAT_04bb7648 + 0x10;
  lVar7 = *(long *)PTR_DAT_04bb27f8;
  if ((((*(ushort **)PTR_DAT_04bc3a48 == (ushort *)0x0) ||
       ((**(ushort **)PTR_DAT_04bc3a48 & 1) == 0)) || (*(long *)PTR_DAT_04bc1530 == 0)) ||
     (lVar8 = *(long *)(*(long *)PTR_DAT_04bc1530 + 8), lVar8 == 0)) {
    puVar1 = (undefined2 *)(lVar7 + 0x2c);
    if ((*(ushort *)(lVar7 + 0x28) & 0x40) != 0) {
      puVar1 = (undefined2 *)(lVar7 + 0x2a);
    }
    local_38 = *puVar1;
  }
  else if ((*(long **)(lVar8 + 0x60) == (long *)0x0) ||
          (puVar5 = (undefined8 *)**(long **)(lVar8 + 0x60), puVar5 == (undefined8 *)0x0)) {
    local_38 = *(undefined2 *)(*(long *)(lVar8 + 0x48) + *(long *)(lVar8 + 0x40) + 2);
  }
  else {
    uVar6 = (**(code **)*puVar5)();
    local_38 = *(undefined2 *)(*(long *)(lVar8 + 0x48) + *(long *)(lVar8 + 0x40) + 2);
    if ((((uVar6 & 1) != 0) && (*(long *)(lVar8 + 0x60) != 0)) &&
       (puVar5 = *(undefined8 **)(*(long *)(lVar8 + 0x60) + 8), puVar5 != (undefined8 *)0x0)) {
      (**(code **)*puVar5)();
    }
  }
  lVar7 = FUN_03775a30(&local_40);
  if (lVar7 == 0) {
    *param_1 = (long)(PTR_DAT_04bb2010 + 0x10);
    param_1[1] = 0;
  }
  else {
    if ((*(long **)(lVar7 + 0x1b0) == (long *)0x0) ||
       (puVar5 = (undefined8 *)**(long **)(lVar7 + 0x1b0), puVar5 == (undefined8 *)0x0)) {
      uVar4 = 1;
    }
    else {
      uVar4 = (**(code **)*puVar5)();
      uVar4 = uVar4 ^ 1;
    }
    puVar3 = PTR_DAT_04bb2010;
    lVar8 = *(long *)(lVar7 + 0x198) + *(long *)(lVar7 + 400);
    cVar2 = *(char *)(lVar8 + 2);
    *(int *)(param_1 + 1) = (int)*(char *)(lVar8 + 1);
    *(int *)((long)param_1 + 0xc) = (int)cVar2;
    *param_1 = (long)(puVar3 + 0x10);
    if ((((uVar4 & 1) == 0) && (*(long *)(lVar7 + 0x1b0) != 0)) &&
       (puVar5 = *(undefined8 **)(*(long *)(lVar7 + 0x1b0) + 8), puVar5 != (undefined8 *)0x0)) {
      (**(code **)*puVar5)();
    }
  }
  return;
}



void FUN_0281c0e0(int *param_1)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  long *plVar4;
  undefined8 *puVar5;
  long lVar6;
  int iVar7;
  long local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  
  if (DAT_05574040 != 0) {
    puVar5 = *(undefined8 **)(DAT_05574040 + 0x10);
    if ((*(byte *)(DAT_05574040 + 0x453) & 1) == 0) {
      lVar3 = (**(code **)(*(long *)*puVar5 + 0x38))();
      if (lVar3 == 0) {
        return;
      }
      lVar3 = lVar3 + 0x70;
    }
    else {
      if (puVar5 == (undefined8 *)0x0) {
        return;
      }
      if ((long *)puVar5[0x26] == (long *)0x0) {
        return;
      }
      lVar3 = (**(code **)(*(long *)puVar5[0x26] + 0x38))();
      if (lVar3 == 0) {
        return;
      }
    }
    if ((*(long *)(lVar3 + 0x1b9028) == 0) ||
       (puVar5 = *(undefined8 **)(*(long *)(lVar3 + 0x1b9028) + 0x10), puVar5 == (undefined8 *)0x0))
    {
      uVar2 = 1;
      iVar1 = *param_1;
    }
    else {
      uVar2 = (**(code **)*puVar5)();
      uVar2 = uVar2 ^ 1;
      iVar1 = *param_1;
    }
    if (iVar1 != 0) {
      lVar6 = *(long *)(param_1 + 2);
      iVar7 = 0;
      do {
        if ((*(long *)(lVar3 + 0x1b9028) != 0) &&
           (plVar4 = *(long **)(*(long *)(lVar3 + 0x1b9028) + 0x20), plVar4 != (long *)0x0)) {
          local_68 = *(long *)(lVar3 + 0x1b9008);
          local_60 = *(undefined8 *)(lVar3 + 0x1b9010);
          uStack_58 = 0x1ac;
          (**(code **)(*plVar4 + 0x20))(plVar4,&local_68);
        }
        FUN_02871e50(*(long *)(lVar3 + 0x1b9010) + *(long *)(lVar3 + 0x1b9008),
                     lVar6 + (long)iVar7 * 0x3c);
        iVar7 = iVar7 + 1;
      } while (iVar1 != iVar7);
    }
    if ((((uVar2 & 1) == 0) && (*(long *)(lVar3 + 0x1b9028) != 0)) &&
       (puVar5 = *(undefined8 **)(*(long *)(lVar3 + 0x1b9028) + 0x18), puVar5 != (undefined8 *)0x0))
    {
      (**(code **)*puVar5)();
    }
    if ((*(long *)(lVar3 + 0x1bd708) == 0) ||
       (puVar5 = *(undefined8 **)(*(long *)(lVar3 + 0x1bd708) + 0x10), puVar5 == (undefined8 *)0x0))
    {
      uVar2 = 1;
      iVar1 = *param_1;
    }
    else {
      uVar2 = (**(code **)*puVar5)();
      uVar2 = uVar2 ^ 1;
      iVar1 = *param_1;
    }
    if (iVar1 != 0) {
      lVar6 = *(long *)(param_1 + 2);
      iVar7 = 0;
      do {
        if ((*(long *)(lVar3 + 0x1bd708) != 0) &&
           (plVar4 = *(long **)(*(long *)(lVar3 + 0x1bd708) + 0x20), plVar4 != (long *)0x0)) {
          local_68 = *(long *)(FUN_001bd6e8 + lVar3);
          local_60 = *(undefined8 *)(lVar3 + 0x1bd6f0);
          uStack_58 = 0x84;
          (**(code **)(*plVar4 + 0x20))(plVar4,&local_68);
        }
        FUN_0287558c(*(long *)(lVar3 + 0x1bd6f0) + *(long *)(FUN_001bd6e8 + lVar3),
                     lVar6 + (long)iVar7 * 0x3c);
        iVar7 = iVar7 + 1;
      } while (iVar1 != iVar7);
    }
    if ((((uVar2 & 1) == 0) && (*(long *)(lVar3 + 0x1bd708) != 0)) &&
       (puVar5 = *(undefined8 **)(*(long *)(lVar3 + 0x1bd708) + 0x18), puVar5 != (undefined8 *)0x0))
    {
      (**(code **)*puVar5)();
    }
  }
  return;
}


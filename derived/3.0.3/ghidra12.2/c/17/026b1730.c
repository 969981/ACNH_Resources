
void FUN_026b1730(undefined8 *param_1,long param_2)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  undefined8 *puVar7;
  
  if (DAT_05574040 != 0) {
    puVar7 = *(undefined8 **)(DAT_05574040 + 0x10);
    if ((*(byte *)(DAT_05574040 + 0x453) & 1) == 0) {
      lVar4 = (**(code **)(*(long *)*puVar7 + 0x38))();
      lVar5 = 0;
      if (lVar4 != 0) {
        lVar5 = lVar4 + 0x70;
      }
      goto LAB_026b17a8;
    }
    if (puVar7 != (undefined8 *)0x0) {
      lVar5 = 0;
      if ((long *)puVar7[0x26] != (long *)0x0) {
        lVar5 = (**(code **)(*(long *)puVar7[0x26] + 0x38))();
      }
      goto LAB_026b17a8;
    }
  }
  lVar5 = 0;
LAB_026b17a8:
  if (*(long **)(lVar5 + 0x1a0b70) == (long *)0x0) {
    uVar6 = 0;
  }
  else {
    puVar7 = (undefined8 *)**(long **)(lVar5 + 0x1a0b70);
    uVar6 = 0;
    if (puVar7 != (undefined8 *)0x0) {
      uVar6 = (**(code **)*puVar7)();
    }
  }
  uVar3 = *(uint *)(*(long *)(lVar5 + 0x1a0b58) + *(long *)(lVar5 + 0x1a0b50));
  if (3 < uVar3) {
    uVar3 = 0;
  }
  if ((int)uVar3 < 2) {
    iVar2 = *(int *)(param_2 + 0x13180);
    if ((((uVar6 & 1) != 0) && (*(long *)(lVar5 + 0x1a0b70) != 0)) &&
       (puVar7 = *(undefined8 **)(*(long *)(lVar5 + 0x1a0b70) + 8), puVar7 != (undefined8 *)0x0)) {
      (**(code **)*puVar7)();
    }
    if (iVar2 == 7) {
      *param_1 = 0x1ab8;
      FUN_0277d4ac(param_1);
      return;
    }
  }
  else if ((((uVar6 & 1) != 0) && (*(long *)(lVar5 + 0x1a0b70) != 0)) &&
          (puVar7 = *(undefined8 **)(*(long *)(lVar5 + 0x1a0b70) + 8), puVar7 != (undefined8 *)0x0))
  {
    (**(code **)*puVar7)();
  }
  uVar1 = *(undefined4 *)(param_2 + 0x13160);
  *(undefined4 *)param_1 = *(undefined4 *)(param_2 + 0x1315c);
  *(undefined4 *)((long)param_1 + 4) = uVar1;
  return;
}


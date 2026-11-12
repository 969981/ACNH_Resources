
void FUN_007e30b0(void)

{
  long *plVar1;
  char *pcVar2;
  uint uVar3;
  uint uVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  undefined8 *puVar8;
  long *plVar9;
  long lVar10;
  long local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  if (DAT_05574040 == 0) {
    return;
  }
  if (*(long *)(DAT_05574040 + 0x4c0) == 0) {
    return;
  }
  plVar5 = *(long **)(*(long *)(DAT_05574040 + 0x10) + 0x180);
  if (plVar5 == (long *)0x0) {
    return;
  }
  lVar6 = (**(code **)(*plVar5 + 0x38))();
  if (lVar6 == 0) {
    return;
  }
  if (DAT_05574040 == 0) {
    return;
  }
  lVar7 = (**(code **)(*(long *)**(undefined8 **)(DAT_05574040 + 0x10) + 0x30))();
  if (lVar7 == 0) {
    return;
  }
  plVar5 = (long *)(lVar6 + 0xa8af8);
  plVar1 = (long *)(lVar7 + 0x27c898);
  if ((*(long **)(lVar6 + 0xa8b18) == (long *)0x0) ||
     (puVar8 = (undefined8 *)**(long **)(lVar6 + 0xa8b18), puVar8 == (undefined8 *)0x0)) {
    uVar3 = 1;
    lVar10 = *(long *)(lVar7 + 0x27c8b8);
  }
  else {
    uVar3 = (**(code **)*puVar8)();
    uVar3 = uVar3 ^ 1;
    lVar10 = *(long *)(lVar7 + 0x27c8b8);
  }
  if ((lVar10 == 0) || (*(undefined8 **)(lVar10 + 0x10) == (undefined8 *)0x0)) {
    uVar4 = 1;
  }
  else {
    uVar4 = (**(code **)**(undefined8 **)(lVar10 + 0x10))();
    uVar4 = uVar4 ^ 1;
  }
  pcVar2 = (char *)(*(long *)(lVar6 + 0xa8b00) + *plVar5);
  if (*pcVar2 == pcVar2[1]) {
    lVar10 = 0;
    do {
      if ((*(long *)(lVar7 + 0x27c8b8) != 0) &&
         (plVar5 = *(long **)(*(long *)(lVar7 + 0x27c8b8) + 0x20), plVar5 != (long *)0x0)) {
        local_58 = *plVar1;
        local_50 = *(undefined8 *)(lVar7 + 0x27c8a0);
        uStack_48 = 200;
        (**(code **)(*plVar5 + 0x20))(plVar5,&local_58);
      }
      *(char *)(*(long *)(lVar7 + 0x27c8a0) + *plVar1 + lVar10) = (char)lVar10;
      if ((*(long *)(lVar7 + 0x27c8b8) != 0) &&
         (plVar5 = *(long **)(*(long *)(lVar7 + 0x27c8b8) + 0x20), plVar5 != (long *)0x0)) {
        local_58 = *plVar1;
        local_50 = *(undefined8 *)(lVar7 + 0x27c8a0);
        uStack_48 = 200;
        (**(code **)(*plVar5 + 0x20))(plVar5,&local_58);
      }
      *(char *)(*(long *)(lVar7 + 0x27c8a0) + *plVar1 + lVar10 + 100) = (char)lVar10;
      lVar10 = lVar10 + 1;
    } while (lVar10 != 100);
  }
  else {
    lVar10 = 0;
    do {
      if ((*(long *)(lVar7 + 0x27c8b8) != 0) &&
         (plVar9 = *(long **)(*(long *)(lVar7 + 0x27c8b8) + 0x20), plVar9 != (long *)0x0)) {
        local_58 = *plVar1;
        local_50 = *(undefined8 *)(lVar7 + 0x27c8a0);
        uStack_48 = 200;
        (**(code **)(*plVar9 + 0x20))(plVar9,&local_58);
      }
      *(undefined1 *)(*(long *)(lVar7 + 0x27c8a0) + *plVar1 + lVar10) =
           *(undefined1 *)(*(long *)(lVar6 + 0xa8b00) + *plVar5 + lVar10);
      lVar10 = lVar10 + 1;
    } while (lVar10 != 100);
    lVar10 = 100;
    do {
      if ((*(long *)(lVar7 + 0x27c8b8) != 0) &&
         (plVar9 = *(long **)(*(long *)(lVar7 + 0x27c8b8) + 0x20), plVar9 != (long *)0x0)) {
        local_58 = *plVar1;
        local_50 = *(undefined8 *)(lVar7 + 0x27c8a0);
        uStack_48 = 200;
        (**(code **)(*plVar9 + 0x20))(plVar9,&local_58);
      }
      *(undefined1 *)(*(long *)(lVar7 + 0x27c8a0) + *plVar1 + lVar10) =
           *(undefined1 *)(*(long *)(lVar6 + 0xa8b00) + *plVar5 + lVar10);
      lVar10 = lVar10 + 1;
    } while (lVar10 != 200);
  }
  if ((((uVar4 & 1) == 0) && (*(long *)(lVar7 + 0x27c8b8) != 0)) &&
     (puVar8 = *(undefined8 **)(*(long *)(lVar7 + 0x27c8b8) + 0x18), puVar8 != (undefined8 *)0x0)) {
    (**(code **)*puVar8)();
  }
  if ((((uVar3 & 1) == 0) && (*(long *)(lVar6 + 0xa8b18) != 0)) &&
     (puVar8 = *(undefined8 **)(*(long *)(lVar6 + 0xa8b18) + 8), puVar8 != (undefined8 *)0x0)) {
    (**(code **)*puVar8)();
  }
  return;
}


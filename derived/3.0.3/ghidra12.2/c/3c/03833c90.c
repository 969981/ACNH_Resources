
void FUN_03833c90(long param_1)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  undefined8 *puVar4;
  long lVar5;
  
  if ((*(int *)(param_1 + 0x10) == 5) &&
     (plVar3 = *(long **)(param_1 + 0x20), plVar3 != (long *)0x0)) {
    if (((*(byte *)(plVar3 + 0x1b) >> 1 & 1) == 0) &&
       ((lVar2 = (**(code **)(**(long **)(plVar3[6] + 0x18) + 0x20))(), lVar2 != 0 &&
        (*(char *)(lVar2 + 0x78) != '\0')))) {
      plVar1 = plVar3 + 0x11 + *(uint *)(plVar3 + 0x10);
      if (1 < *(uint *)(plVar3 + 0x10)) {
        plVar1 = plVar3 + 0x11;
      }
      lVar2 = *plVar1;
      if ((lVar2 != 0) && (*(int *)(lVar2 + 0x68) != 0)) {
        lVar5 = (long)*(int *)(lVar2 + 0x68) << 3;
        puVar4 = *(undefined8 **)(lVar2 + 0x70);
        do {
          (*(code *)**(undefined8 **)*puVar4)();
          lVar5 = lVar5 + -8;
          puVar4 = puVar4 + 1;
        } while (lVar5 != 0);
      }
    }
    if ((((*(byte *)(plVar3 + 0x1b) >> 1 & 1) == 0) &&
        (lVar2 = (**(code **)(**(long **)(plVar3[6] + 0x18) + 0x20))(), lVar2 != 0)) &&
       (*(char *)(lVar2 + 0x78) != '\0')) {
      (**(code **)(*plVar3 + 0x28))(plVar3);
      plVar3[0xd] = 0;
      plVar3[0xe] = 0;
      *(byte *)(plVar3 + 0x1b) = *(byte *)(plVar3 + 0x1b) & 0xfb;
    }
  }
  return;
}


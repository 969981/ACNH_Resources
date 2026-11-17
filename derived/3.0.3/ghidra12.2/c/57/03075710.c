
void FUN_03075710(undefined8 param_1)

{
  char *pcVar1;
  char cVar2;
  long lVar3;
  undefined8 *puVar4;
  ulong uVar5;
  char *pcVar6;
  char cVar7;
  uint uVar8;
  
  lVar3 = FUN_033d0598(PTR_DAT_04bb32e0);
  cVar2 = *(char *)(lVar3 + 0xe2);
  FUN_007ef010(param_1,PTR_DAT_04bb3170);
  if (cVar2 == 'S') {
    uVar8 = (uint)*(char *)(lVar3 + 0xe0);
  }
  else if (cVar2 == 'R') {
    uVar8 = (uint)*(char *)(lVar3 + 0xde);
  }
  else {
    uVar8 = 0xffffffff;
  }
  if ((DAT_05574040 == 0) ||
     (lVar3 = (**(code **)(*(long *)**(undefined8 **)(DAT_05574040 + 0x10) + 0x38))(), lVar3 == 0))
  goto LAB_030758e4;
  if (*(long **)(lVar3 + 0x27c8b8) == (long *)0x0) {
    uVar5 = 0;
    if (cVar2 != 'S') goto LAB_030757c4;
LAB_030757e4:
    pcVar6 = (char *)(*(long *)(lVar3 + 0x27c8a0) + *(long *)(lVar3 + 0x27c898) + 100);
LAB_030757f0:
    pcVar1 = pcVar6 + uVar8;
    if (99 < uVar8) {
      pcVar1 = pcVar6;
    }
    cVar7 = *pcVar1;
    if ((((uVar5 & 1) != 0) && (*(long *)(lVar3 + 0x27c8b8) != 0)) &&
       (puVar4 = *(undefined8 **)(*(long *)(lVar3 + 0x27c8b8) + 8), puVar4 != (undefined8 *)0x0)) {
      (**(code **)*puVar4)();
    }
    if (cVar7 != -1) goto LAB_030758e8;
    if ((DAT_05574040 == 0) ||
       (lVar3 = (**(code **)(*(long *)**(undefined8 **)(DAT_05574040 + 0x10) + 0x38))(), lVar3 == 0)
       ) {
LAB_030758e4:
      cVar7 = '\0';
      goto LAB_030758e8;
    }
    if (*(long **)(lVar3 + 0x27c8b8) == (long *)0x0) {
      uVar5 = 0;
    }
    else {
      puVar4 = (undefined8 *)**(long **)(lVar3 + 0x27c8b8);
      uVar5 = 0;
      if (puVar4 != (undefined8 *)0x0) {
        uVar5 = (**(code **)*puVar4)();
      }
    }
    if (cVar2 == 'S') {
      pcVar6 = (char *)(*(long *)(lVar3 + 0x27c8a0) + *(long *)(lVar3 + 0x27c898) + 100);
    }
    else {
      if (cVar2 != 'R') {
        if (((uVar5 & 1) != 0) && (lVar3 = *(long *)(lVar3 + 0x27c8b8), lVar3 != 0))
        goto LAB_0307587c;
        goto LAB_030758e4;
      }
      pcVar6 = (char *)(*(long *)(lVar3 + 0x27c8a0) + *(long *)(lVar3 + 0x27c898));
    }
    cVar7 = *pcVar6;
    if (((uVar5 & 1) == 0) || (lVar3 = *(long *)(lVar3 + 0x27c8b8), lVar3 == 0)) goto LAB_030758e8;
  }
  else {
    puVar4 = (undefined8 *)**(long **)(lVar3 + 0x27c8b8);
    uVar5 = 0;
    if (puVar4 != (undefined8 *)0x0) {
      uVar5 = (**(code **)*puVar4)();
    }
    if (cVar2 == 'S') goto LAB_030757e4;
LAB_030757c4:
    if (cVar2 == 'R') {
      pcVar6 = (char *)(*(long *)(lVar3 + 0x27c8a0) + *(long *)(lVar3 + 0x27c898));
      goto LAB_030757f0;
    }
    if (((uVar5 & 1) == 0) || (lVar3 = *(long *)(lVar3 + 0x27c8b8), lVar3 == 0)) goto LAB_030758e4;
LAB_0307587c:
    cVar7 = '\0';
  }
  if (*(undefined8 **)(lVar3 + 8) != (undefined8 *)0x0) {
    (**(code **)**(undefined8 **)(lVar3 + 8))();
  }
LAB_030758e8:
  FUN_0344cd00(param_1,(int)cVar7,cVar2 == 'S');
  return;
}


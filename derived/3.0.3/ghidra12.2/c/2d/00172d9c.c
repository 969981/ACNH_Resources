
undefined8 FUN_00172d9c(long param_1)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  
  iVar1 = -*(int *)(param_1 + 0xd0);
  for (lVar6 = *(long *)(param_1 + 0x78); lVar6 != 0; lVar6 = *(long *)(lVar6 + 0x88)) {
    iVar2 = 0;
    if (*(int *)(param_1 + 0xd8) != 0) {
      iVar2 = (*(int *)(param_1 + 0xd0) * *(int *)(lVar6 + 0xd0)) / *(int *)(param_1 + 0xd8);
    }
    if (iVar2 < 2) {
      iVar2 = 1;
    }
    *(int *)(lVar6 + 0xd0) = iVar2;
    if ((*(char *)(lVar6 + 0xe6) != '\0') &&
       (uVar3 = FUN_00172c94(*(undefined8 *)(param_1 + 0x70),param_1,lVar6), (int)uVar3 != 0)) {
      return uVar3;
    }
    iVar1 = iVar2 + iVar1;
  }
  plVar7 = (long *)(param_1 + 0x70);
  *(int *)(*plVar7 + 0xd8) = *(int *)(*plVar7 + 0xd8) + iVar1;
  if (*(char *)(param_1 + 0xe6) != '\0') {
    FUN_00172f08(param_1);
  }
  lVar6 = *(long *)(param_1 + 0x80);
  if (lVar6 == 0) {
    lVar6 = *(long *)(param_1 + 0x70);
    lVar5 = *(long *)(param_1 + 0x78);
    if (lVar5 == 0) {
      lVar5 = *(long *)(param_1 + 0x88);
      if (lVar5 == 0) {
        *(undefined8 *)(lVar6 + 0x78) = 0;
      }
      else {
        *(undefined8 *)(lVar5 + 0x80) = 0;
        *(long *)(lVar6 + 0x78) = lVar5;
        *(long *)(lVar5 + 0x70) = lVar6;
      }
    }
    else {
      *(long *)(lVar6 + 0x78) = lVar5;
      *(long *)(lVar5 + 0x70) = lVar6;
      lVar4 = *plVar7;
      lVar6 = lVar5;
      do {
        *(long *)(lVar6 + 0x70) = lVar4;
        lVar6 = *(long *)(lVar6 + 0x88);
      } while (lVar6 != 0);
      lVar6 = *(long *)(param_1 + 0x88);
      if (lVar6 != 0) {
        do {
          lVar4 = lVar5;
          lVar5 = *(long *)(lVar4 + 0x88);
        } while (*(long *)(lVar4 + 0x88) != 0);
        *(long *)(lVar4 + 0x88) = lVar6;
        *(long *)(lVar6 + 0x80) = lVar4;
      }
    }
  }
  else {
    lVar5 = *(long *)(param_1 + 0x78);
    if (lVar5 == 0) {
      lVar4 = *(long *)(param_1 + 0x88);
      *(long *)(lVar6 + 0x88) = lVar4;
      if (lVar4 == 0) goto LAB_00172ec8;
    }
    else {
      *(long *)(lVar6 + 0x88) = lVar5;
      *(long *)(lVar5 + 0x80) = lVar6;
      lVar4 = *plVar7;
      lVar6 = lVar5;
      do {
        *(long *)(lVar6 + 0x70) = lVar4;
        lVar6 = *(long *)(lVar6 + 0x88);
      } while (lVar6 != 0);
      lVar4 = *(long *)(param_1 + 0x88);
      if (lVar4 == 0) goto LAB_00172ec8;
      do {
        lVar6 = lVar5;
        lVar5 = *(long *)(lVar6 + 0x88);
      } while (*(long *)(lVar6 + 0x88) != 0);
      *(long *)(lVar6 + 0x88) = lVar4;
    }
    *(long *)(lVar4 + 0x80) = lVar6;
  }
LAB_00172ec8:
  *(undefined4 *)(param_1 + 0xd8) = 0;
  *plVar7 = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x88) = 0;
  return 0;
}


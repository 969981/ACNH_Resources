
void FUN_03650710(long *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  char *__s;
  undefined8 uVar6;
  uint uVar7;
  long lVar8;
  
  uVar7 = *(uint *)((long)param_1 + (ulong)param_2 * 4 + 0x1c);
  if (3 < uVar7) {
    return;
  }
  uVar1 = param_2 * 0x400 + 0x2000;
  switch(uVar7) {
  case 0:
    lVar5 = *param_1 + 0x2a8;
    lVar8 = lVar5 + (ulong)(uVar1 >> 10) * 0x10;
    uVar6 = *(undefined8 *)(lVar8 + 0x18);
    bVar4 = *(char *)(lVar8 + 0x10) == '\0';
    break;
  case 1:
    lVar5 = *param_1 + 0x2a8;
    lVar8 = lVar5 + (ulong)(uVar1 >> 10) * 0x10;
    cVar3 = *(char *)(lVar8 + 0x10);
    iVar2 = *(int *)(lVar5 + (ulong)(uVar1 >> 10) * 4 + 0x410);
    uVar6 = *(undefined8 *)(lVar8 + 0x18);
    goto LAB_03650838;
  case 2:
    lVar8 = *param_1;
    if ((*(byte *)(param_1 + 3) >> 1 & 1) == 0) {
      lVar5 = lVar8 + 0x2a8;
      bVar4 = *(char *)(lVar8 + 0x428) == '\0';
      uVar6 = *(undefined8 *)(lVar8 + 0x430);
    }
    else {
      __s = (char *)(*(long *)(lVar8 + 0x1000) + 0x18);
      if (*__s != '\0') {
        memset(__s,0,0x400);
        lVar8 = *param_1;
      }
      lVar5 = lVar8 + 0x2a8;
      bVar4 = *(char *)(lVar8 + 0x3b8) == '\0';
      uVar6 = *(undefined8 *)(lVar8 + 0x3c0);
    }
    break;
  case 3:
    uVar7 = *(uint *)(param_1 + 6);
    lVar5 = *(long *)(*param_1 + 0x1040);
    if ((uint)*(byte *)(lVar5 + 0x18) != (*(uint *)((long)param_1 + 0x2c) & 0xff)) {
      memset((byte *)(lVar5 + 0x18),*(uint *)((long)param_1 + 0x2c),0x3c0);
    }
    if ((uint)*(byte *)(lVar5 + 0x3d8) != (uVar7 & 0xff)) {
      lVar8 = ((ulong)uVar7 & 0xff) * 0x101010101010101;
      *(long *)(lVar5 + 0x408) = lVar8;
      *(long *)(lVar5 + 0x410) = lVar8;
      *(long *)(lVar5 + 0x3f8) = lVar8;
      *(long *)(lVar5 + 0x400) = lVar8;
      *(long *)(lVar5 + 1000) = lVar8;
      *(long *)(lVar5 + 0x3f0) = lVar8;
      *(long *)(lVar5 + 0x3d8) = lVar8;
      *(long *)(lVar5 + 0x3e0) = lVar8;
    }
    lVar8 = *param_1;
    lVar5 = lVar8 + 0x2a8;
    cVar3 = *(char *)(lVar8 + 0x3b8);
    iVar2 = *(int *)(lVar8 + 0x6f8);
    uVar6 = *(undefined8 *)(lVar8 + 0x3c0);
LAB_03650838:
    bVar4 = cVar3 == '\0';
    uVar7 = iVar2 - 1U & 0x400;
    goto LAB_03650888;
  }
  uVar7 = 0;
LAB_03650888:
  FUN_03653cb0(lVar5,uVar1,uVar6,0x400,uVar7,bVar4);
  return;
}


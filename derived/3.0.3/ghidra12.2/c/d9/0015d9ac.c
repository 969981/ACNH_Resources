
undefined8 FUN_0015d9ac(long *param_1)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  long *plVar5;
  long lVar4;
  long lVar6;
  long lVar7;
  
  lVar6 = *param_1;
  if (*(long *)(lVar6 + 0x1e8) == 0) {
    return 0;
  }
  iVar1 = *(int *)(lVar6 + 0xa38);
  if (iVar1 == 1 || iVar1 == 6) {
    return 0;
  }
  uVar2 = *(uint *)((long)param_1 + 0x41c);
  lVar7 = *(long *)(lVar6 + 0x108);
  if ((uVar2 & 0x9000) == 0x1000) {
    if (iVar1 - 3U < 2) {
      plVar5 = (long *)(*(long *)(lVar6 + 0x1e8) + 8);
LAB_0015da3c:
      lVar4 = *plVar5;
      goto LAB_0015da40;
    }
    if ((iVar1 == 2) || (iVar1 == 5)) {
      plVar5 = (long *)(lVar6 + 0x1538);
      goto LAB_0015da3c;
    }
    *(uint *)((long)param_1 + 0x41c) = uVar2 & 0xfffeffff;
  }
  else {
    lVar4 = 0;
LAB_0015da40:
    *(uint *)((long)param_1 + 0x41c) = uVar2 & 0xfffeffff;
    if ((lVar4 != -1) && (lVar4 <= lVar7)) goto joined_r0x0015da58;
  }
  FUN_00158f30(param_1,2);
  *(undefined8 *)(lVar6 + 0xf0) = 0;
joined_r0x0015da58:
  if (lVar7 == 0) {
    return 0;
  }
  uVar3 = FUN_001601f4(param_1);
  return uVar3;
}


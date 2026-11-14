
bool FUN_01d4c158(long param_1,uint param_2,undefined8 *param_3)

{
  long *plVar1;
  int iVar2;
  undefined4 uVar3;
  long lVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  iVar2 = *(int *)(param_1 + 0x380);
  if (iVar2 != 3) goto LAB_01d4c260;
  *(uint *)(param_1 + 0xaa8) = param_2;
  if (param_2 == 1) {
    uVar3 = 0;
LAB_01d4c1cc:
    *(undefined4 *)(param_1 + 0xaa8) = uVar3;
LAB_01d4c1d0:
    uVar3 = 0;
  }
  else {
    if ((0xb < param_2) || ((1 << (ulong)(param_2 & 0x1f) & 0xe70U) == 0)) {
      if (param_2 - 7 < 5) goto LAB_01d4c1c0;
      goto LAB_01d4c1d0;
    }
    if (4 < param_2 - 7) {
      uVar3 = 2;
      goto LAB_01d4c1cc;
    }
    *(undefined4 *)(param_1 + 0xaa8) = 7;
LAB_01d4c1c0:
    uVar3 = 3;
  }
  plVar1 = (long *)(param_1 + 0x3f0);
  *(undefined4 *)(param_1 + 0xaa0) = uVar3;
  if (param_3 != (undefined8 *)0x0) {
    *plVar1 = (long)param_3;
    *param_3 = plVar1;
    lVar4 = *plVar1;
    *(undefined8 *)(lVar4 + 8) = 0;
    *(undefined8 *)(lVar4 + 0x10) = 0;
  }
  *(undefined4 *)(param_1 + 0x3e0) = 7;
  FUN_03ebb160(param_1 + 0x378,5);
  if (*(int *)(param_1 + 0x3e0) == 5) {
    lVar4 = *(long *)(param_1 + 0x3f0);
    if (*(int *)(param_1 + 1000) == 0) {
      if (lVar4 == 0) goto LAB_01d4c260;
      uVar3 = 0;
      uVar5 = 0;
      uVar6 = 1;
    }
    else {
      if (lVar4 == 0) goto LAB_01d4c260;
      uVar3 = *(undefined4 *)(param_1 + 1000);
      uVar6 = 0xffffffff;
      uVar5 = *(undefined4 *)(param_1 + 0x3ec);
    }
    *(undefined4 *)(lVar4 + 8) = uVar6;
    *(undefined4 *)(lVar4 + 0xc) = uVar3;
    *(undefined4 *)(lVar4 + 0x10) = uVar5;
    *(undefined4 *)(lVar4 + 0x14) = 0;
    if ((undefined8 *)*plVar1 != (undefined8 *)0x0) {
      *(undefined8 *)*plVar1 = 0;
      *plVar1 = 0;
    }
  }
LAB_01d4c260:
  return iVar2 == 3;
}


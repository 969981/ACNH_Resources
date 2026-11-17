
undefined8 FUN_02ee5294(long param_1)

{
  long *plVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar4 = *(long *)(param_1 + 0x210);
  if (*(long *)(lVar4 + 0x570) == 0) {
LAB_02ee52cc:
    if (*(long *)(lVar4 + 0x578) != 0) {
      plVar1 = *(long **)(*(long *)(lVar4 + 0x578) + 0x1b0);
      if (plVar1 == (long *)0x0) {
        return 0;
      }
      uVar2 = (**(code **)(*plVar1 + 0x50))();
      if ((uVar2 & 1) == 0) goto LAB_02ee5360;
      lVar4 = *(long *)(param_1 + 0x210);
    }
    if (*(long *)(lVar4 + 0x580) != 0) {
      plVar1 = *(long **)(*(long *)(lVar4 + 0x580) + 0x1b0);
      if (plVar1 == (long *)0x0) {
        return 0;
      }
      uVar2 = (**(code **)(*plVar1 + 0x50))();
      if ((uVar2 & 1) == 0) goto LAB_02ee5360;
      lVar4 = *(long *)(param_1 + 0x210);
    }
    if (*(long *)(lVar4 + 0x588) != 0) {
      plVar1 = *(long **)(*(long *)(lVar4 + 0x588) + 0x1b0);
      if (plVar1 == (long *)0x0) {
        return 0;
      }
      uVar2 = (**(code **)(*plVar1 + 0x50))();
      if ((uVar2 & 1) == 0) goto LAB_02ee5360;
      lVar4 = *(long *)(param_1 + 0x210);
    }
    if (*(long *)(lVar4 + 0x590) != 0) {
      plVar1 = *(long **)(*(long *)(lVar4 + 0x590) + 0x1b0);
      if (plVar1 == (long *)0x0) {
        return 0;
      }
      uVar2 = (**(code **)(*plVar1 + 0x50))();
      if ((uVar2 & 1) == 0) goto LAB_02ee5360;
    }
    uVar3 = 1;
  }
  else {
    plVar1 = *(long **)(*(long *)(lVar4 + 0x570) + 0x1b0);
    if (plVar1 == (long *)0x0) {
      return 0;
    }
    uVar2 = (**(code **)(*plVar1 + 0x50))();
    if ((uVar2 & 1) != 0) {
      lVar4 = *(long *)(param_1 + 0x210);
      goto LAB_02ee52cc;
    }
LAB_02ee5360:
    uVar3 = 0;
  }
  return uVar3;
}


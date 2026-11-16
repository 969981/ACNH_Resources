
undefined8 FUN_02837878(void)

{
  undefined4 uVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  
  if (DAT_05574040 == 0) {
    return 0;
  }
  if (*(long *)(DAT_05574040 + 0x10) == 0) {
    uVar4 = 0;
  }
  else {
    plVar2 = *(long **)(*(long *)(DAT_05574040 + 0x10) + 0xe8);
    uVar4 = 0;
    if ((plVar2 != (long *)0x0) && (lVar3 = (**(code **)(*plVar2 + 0x20))(), uVar4 = 0, lVar3 != 0))
    {
      uVar1 = FUN_006f6900(lVar3 + 0x104,0x6945c,0);
      *(undefined4 *)(lVar3 + 0x100) = uVar1;
      uVar4 = 1;
    }
  }
  return uVar4;
}


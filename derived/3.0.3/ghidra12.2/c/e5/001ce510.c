
long FUN_001ce510(long param_1,undefined8 param_2,undefined1 param_3)

{
  long *plVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  undefined1 auStack_b8 [144];
  undefined1 local_28;
  
  FUN_001e1500(auStack_b8);
  FUN_001e15a8(auStack_b8,param_2);
  plVar3 = (long *)(param_1 + 8);
  plVar6 = (long *)*plVar3;
  local_28 = param_3;
  if (plVar6 != (long *)0x0) {
    plVar5 = plVar3;
    do {
      uVar2 = FUN_001dc410(plVar6 + 4,auStack_b8);
      plVar1 = plVar6 + 1;
      if ((uVar2 & 1) == 0) {
        plVar5 = plVar6;
        plVar1 = plVar6;
      }
      plVar6 = (long *)*plVar1;
    } while (plVar6 != (long *)0x0);
    if ((plVar5 != plVar3) && (uVar2 = FUN_001dc410(auStack_b8,plVar5 + 4), (uVar2 & 1) == 0)) {
      lVar4 = plVar5[0x17];
      goto LAB_001ce598;
    }
  }
  lVar4 = 0;
LAB_001ce598:
  FUN_001e1868(auStack_b8);
  return lVar4;
}


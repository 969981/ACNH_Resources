
void FUN_005d6170(undefined8 param_1,ulong *param_2,undefined8 param_3)

{
  long *plVar1;
  ulong uVar2;
  long *plVar3;
  ulong *puVar4;
  ulong *puVar5;
  
  plVar1 = (long *)(*param_2 & 0xfffffffffffffffc);
  *param_2 = (ulong)plVar1 | 1;
  if (plVar1 == (long *)0x0) {
    uVar2 = 0;
  }
  else {
    puVar4 = param_2;
    do {
      while( true ) {
        puVar5 = (ulong *)(plVar1 + 1);
        uVar2 = *puVar5;
        plVar3 = (long *)(uVar2 & 0xfffffffffffffffc);
        if ((uVar2 & 3) == 0) break;
        (**(code **)(*plVar1 + 8))();
        *puVar4 = *puVar4 & 3 | (ulong)plVar3;
        plVar1 = plVar3;
        if (plVar3 == (long *)0x0) goto LAB_005d6208;
      }
      (**(code **)(*plVar1 + 0x18))(param_1,plVar1,param_3);
      plVar1 = plVar3;
      puVar4 = puVar5;
    } while (plVar3 != (long *)0x0);
LAB_005d6208:
    uVar2 = *param_2 & 0xfffffffffffffffc;
  }
  *param_2 = uVar2;
  return;
}


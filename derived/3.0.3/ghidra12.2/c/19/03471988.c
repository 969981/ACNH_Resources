
undefined8 FUN_03471988(long param_1)

{
  long *plVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar4 = *(long *)(param_1 + 0x210);
  if ((((lVar4 == 0) ||
       (((*(long *)(lVar4 + 0x570) != 0 &&
         (plVar1 = *(long **)(*(long *)(lVar4 + 0x570) + 0x1b0), plVar1 != (long *)0x0)) &&
        (uVar2 = (**(code **)(*plVar1 + 0x48))(), (uVar2 & 1) == 0)))) ||
      (((*(long *)(lVar4 + 0x578) != 0 &&
        (plVar1 = *(long **)(*(long *)(lVar4 + 0x578) + 0x1b0), plVar1 != (long *)0x0)) &&
       (uVar2 = (**(code **)(*plVar1 + 0x48))(), (uVar2 & 1) == 0)))) ||
     ((((*(long *)(lVar4 + 0x580) != 0 &&
        (plVar1 = *(long **)(*(long *)(lVar4 + 0x580) + 0x1b0), plVar1 != (long *)0x0)) &&
       (uVar2 = (**(code **)(*plVar1 + 0x48))(), (uVar2 & 1) == 0)) ||
      (((*(long *)(lVar4 + 0x588) != 0 &&
        (plVar1 = *(long **)(*(long *)(lVar4 + 0x588) + 0x1b0), plVar1 != (long *)0x0)) &&
       (uVar2 = (**(code **)(*plVar1 + 0x48))(), (uVar2 & 1) == 0)))))) {
    uVar3 = 0;
  }
  else {
    uVar3 = 1;
  }
  return uVar3;
}



undefined8 FUN_0031bf10(long param_1)

{
  ulong uVar1;
  long lVar2;
  code *pcVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  lVar2 = *(long *)(param_1 + 8);
  lVar6 = *(long *)(lVar2 + 0x480);
  lVar5 = *(long *)(lVar2 + 0x470);
  lVar4 = *(long *)(lVar2 + 0x478);
  if (((*(long *)(*(long *)(lVar2 + 0x240) + 0x290) != 0) &&
      (pcVar3 = *(code **)(*(long *)(**(long **)(lVar2 + 0x4d0) + 0x28) + 0x28),
      pcVar3 != (code *)0x0)) && (uVar1 = (*pcVar3)(param_1), (uVar1 & 1) != 0)) {
    return 1;
  }
  if (((lVar6 != 0) && (pcVar3 = *(code **)(lVar6 + 0x28), pcVar3 != (code *)0x0)) &&
     (uVar1 = (*pcVar3)(param_1), (uVar1 & 1) != 0)) {
    return 1;
  }
  if (((lVar5 != 0) && (pcVar3 = *(code **)(lVar5 + 0x28), pcVar3 != (code *)0x0)) &&
     (uVar1 = (*pcVar3)(param_1), (uVar1 & 1) != 0)) {
    return 1;
  }
  if (((lVar4 == 0) || (pcVar3 = *(code **)(lVar4 + 0x28), pcVar3 == (code *)0x0)) ||
     (uVar1 = (*pcVar3)(param_1), (uVar1 & 1) == 0)) {
    return 0;
  }
  return 1;
}


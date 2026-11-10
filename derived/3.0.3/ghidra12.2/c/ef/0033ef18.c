
undefined8
FUN_0033ef18(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
            undefined8 param_5)

{
  ulong uVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 local_50;
  long lStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  lVar5 = *(long *)(param_3 + 0x480);
  lVar4 = *(long *)(param_3 + 0x470);
  lVar3 = *(long *)(param_3 + 0x478);
  local_50 = param_2;
  lStack_48 = param_3;
  local_40 = param_4;
  uStack_38 = param_5;
  if (((((*(long *)(*(long *)(param_3 + 0x240) + 0x290) == 0) ||
        (pcVar2 = *(code **)(*(long *)(**(long **)(param_3 + 0x4d0) + 0x28) + 0x58),
        pcVar2 == (code *)0x0)) || (uVar1 = (*pcVar2)(&local_50), (uVar1 & 1) != 0)) &&
      ((((lVar5 == 0 || (pcVar2 = *(code **)(lVar5 + 0x58), pcVar2 == (code *)0x0)) ||
        (uVar1 = (*pcVar2)(&local_50), (uVar1 & 1) != 0)) &&
       (((lVar4 == 0 || (pcVar2 = *(code **)(lVar4 + 0x58), pcVar2 == (code *)0x0)) ||
        (uVar1 = (*pcVar2)(&local_50), (uVar1 & 1) != 0)))))) &&
     (((lVar3 == 0 || (pcVar2 = *(code **)(lVar3 + 0x58), pcVar2 == (code *)0x0)) ||
      (uVar1 = (*pcVar2)(&local_50), (uVar1 & 1) != 0)))) {
    return 1;
  }
  return 0;
}



void FUN_0031bdd0(long param_1)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long local_18;
  
  lVar4 = *(long *)(param_1 + 0x480);
  lVar3 = *(long *)(param_1 + 0x470);
  lVar2 = *(long *)(param_1 + 0x478);
  local_18 = param_1;
  if ((*(long *)(*(long *)(param_1 + 0x240) + 0x290) != 0) &&
     (pcVar1 = *(code **)(*(long *)(**(long **)(param_1 + 0x4d0) + 0x28) + 0x18),
     pcVar1 != (code *)0x0)) {
    (*pcVar1)(&local_18);
  }
  if ((lVar4 != 0) && (pcVar1 = *(code **)(lVar4 + 0x18), pcVar1 != (code *)0x0)) {
    (*pcVar1)(&local_18);
  }
  if ((lVar3 != 0) && (pcVar1 = *(code **)(lVar3 + 0x18), pcVar1 != (code *)0x0)) {
    (*pcVar1)(&local_18);
  }
  if ((lVar2 != 0) && (pcVar1 = *(code **)(lVar2 + 0x18), pcVar1 != (code *)0x0)) {
    (*pcVar1)(&local_18);
  }
  return;
}


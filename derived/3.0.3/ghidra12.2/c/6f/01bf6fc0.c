
void FUN_01bf6fc0(long param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  
  plVar2 = (long *)(param_1 + 8);
  if (*plVar2 != 0) {
    plVar2 = (long *)0x0;
  }
  plVar1 = (long *)(param_1 + 0x10);
  if (*(long *)(param_1 + 0x10) != 0) {
    plVar1 = plVar2;
  }
  plVar2 = (long *)(param_1 + 0x18);
  if (*(long *)(param_1 + 0x18) != 0) {
    plVar2 = plVar1;
  }
  plVar1 = (long *)(param_1 + 0x20);
  if (*(long *)(param_1 + 0x20) != 0) {
    plVar1 = plVar2;
  }
  plVar2 = (long *)(param_1 + 0x28);
  if (*(long *)(param_1 + 0x28) != 0) {
    plVar2 = plVar1;
  }
  plVar1 = (long *)(param_1 + 0x30);
  if (*(long *)(param_1 + 0x30) != 0) {
    plVar1 = plVar2;
  }
  plVar2 = (long *)(param_1 + 0x38);
  if (*(long *)(param_1 + 0x38) != 0) {
    plVar2 = plVar1;
  }
  plVar1 = (long *)(param_1 + 0x40);
  if (*(long *)(param_1 + 0x40) != 0) {
    plVar1 = plVar2;
  }
  plVar2 = (long *)(param_1 + 0x48);
  if (*(long *)(param_1 + 0x48) != 0) {
    plVar2 = plVar1;
  }
  plVar1 = (long *)(param_1 + 0x50);
  if (*(long *)(param_1 + 0x50) != 0) {
    plVar1 = plVar2;
  }
  plVar2 = (long *)(param_1 + 0x58);
  if (*(long *)(param_1 + 0x58) != 0) {
    plVar2 = plVar1;
  }
  plVar1 = (long *)(param_1 + 0x60);
  if (*(long *)(param_1 + 0x60) != 0) {
    plVar1 = plVar2;
  }
  plVar2 = (long *)(param_1 + 0x68);
  if (*(long *)(param_1 + 0x68) != 0) {
    plVar2 = plVar1;
  }
  plVar1 = (long *)(param_1 + 0x70);
  if (*(long *)(param_1 + 0x70) != 0) {
    plVar1 = plVar2;
  }
  plVar2 = (long *)(param_1 + 0x78);
  if (*(long *)(param_1 + 0x78) != 0) {
    plVar2 = plVar1;
  }
  plVar1 = (long *)(param_1 + 0x80);
  if (*(long *)(param_1 + 0x80) != 0) {
    plVar1 = plVar2;
  }
  plVar2 = (long *)(param_1 + 0x88);
  if (*(long *)(param_1 + 0x88) != 0) {
    plVar2 = plVar1;
  }
  plVar1 = (long *)(param_1 + 0x90);
  if (*(long *)(param_1 + 0x90) != 0) {
    plVar1 = plVar2;
  }
  plVar2 = (long *)(param_1 + 0x98);
  if (*(long *)(param_1 + 0x98) != 0) {
    plVar2 = plVar1;
  }
  plVar1 = (long *)(param_1 + 0xa0);
  if (*(long *)(param_1 + 0xa0) != 0) {
    plVar1 = plVar2;
  }
  if (plVar1 != (long *)0x0) {
    *plVar1 = param_2;
    *(long *)(param_2 + 0x20) = param_1;
  }
  return;
}


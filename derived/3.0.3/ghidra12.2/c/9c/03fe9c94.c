
uint FUN_03fe9c94(long param_1)

{
  uint uVar1;
  long *plVar2;
  ulong uVar3;
  
  if ((*(char *)(param_1 + 0x34e10e) == '\0') && (1 < *(uint *)(param_1 + 0x34e114))) {
    plVar2 = *(long **)(param_1 + 0x34e100);
    uVar3 = (**(code **)(*plVar2 + 0x10))(plVar2,2);
    plVar2 = *(long **)(param_1 + 0x34e100);
    if ((uVar3 & 1) == 0) {
      uVar1 = (**(code **)(*plVar2 + 8))(plVar2,2);
      uVar1 = uVar1 >> 8 & 0xff;
    }
    else {
      (**(code **)(*plVar2 + 0x18))(plVar2,2);
      uVar1 = 0;
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



void FUN_03c0109c(long param_1)

{
  ulong uVar1;
  undefined4 uVar2;
  long *plVar3;
  
  plVar3 = *(long **)(*(long *)PTR_DAT_04bcb7d8 + 0x30);
  uVar1 = (**(code **)(*plVar3 + 0x18))(plVar3);
  if (((uVar1 & 1) == 0) && (uVar1 = (**(code **)(*plVar3 + 0x10))(plVar3), (uVar1 & 1) == 0)) {
    return;
  }
  uVar2 = 0x1d;
  if (*(char *)(param_1 + 0x415) == '\0') {
    uVar2 = 0x1e;
  }
  FUN_03ebb160(param_1 + 0x30,uVar2);
  return;
}


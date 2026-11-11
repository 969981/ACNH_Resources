
void FUN_003b8458(long param_1,undefined4 param_2)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  
  plVar2 = *(long **)(param_1 + 0x10);
  if ((((plVar2 == (long *)0x0) || ((char)plVar2[1] == '\0')) ||
      (lVar3 = (**(code **)(*plVar2 + 0x18))(plVar2,param_2), lVar3 == 0)) ||
     ((plVar2 = *(long **)(param_1 + 0x10), (char)plVar2[1] == '\0' ||
      (iVar1 = (**(code **)(*plVar2 + 0x28))(plVar2,lVar3), iVar1 == 0)))) {
    FUN_003ba430(*(undefined8 *)(param_1 + 8),param_2);
    return;
  }
  return;
}


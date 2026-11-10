
void FUN_0019d550(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  
  puVar1 = PTR_DAT_04bcc1a8;
  plVar3 = *(long **)PTR_DAT_04bcc148;
  if (plVar3 == (long *)0x0) {
    *(undefined8 *)PTR_DAT_04bcc148 = param_2;
    *(undefined4 *)puVar1 = 1;
    return;
  }
  lVar2 = (**(code **)(*plVar3 + 0x28))(plVar3);
  while (lVar2 != 0) {
    plVar3 = (long *)(**(code **)(*plVar3 + 0x28))(plVar3);
    lVar2 = (**(code **)(*plVar3 + 0x28))();
  }
  (**(code **)(*plVar3 + 0x30))(plVar3,param_2);
  *(int *)puVar1 = *(int *)puVar1 + 1;
  return;
}


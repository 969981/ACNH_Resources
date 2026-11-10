
void FUN_0019d600(undefined8 param_1,long *param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long *plVar3;
  long *plVar4;
  
  puVar1 = PTR_DAT_04bcc148;
  plVar3 = *(long **)PTR_DAT_04bcc148;
  if (plVar3 == param_2) {
    uVar2 = (**(code **)(*param_2 + 0x28))(param_2);
    *(undefined8 *)puVar1 = uVar2;
  }
  else {
    if (plVar3 == (long *)0x0) {
      return;
    }
    if (plVar3 == param_2) {
      plVar4 = (long *)0x0;
    }
    else {
      do {
        plVar4 = plVar3;
        plVar3 = (long *)(**(code **)(*plVar4 + 0x28))(plVar4);
        if (plVar3 == (long *)0x0) {
          return;
        }
      } while (plVar3 != param_2);
    }
    uVar2 = (**(code **)(*param_2 + 0x28))(param_2);
    (**(code **)(*plVar4 + 0x30))(plVar4,uVar2);
  }
  (**(code **)(*param_2 + 0x30))(param_2,0);
  DAT_04c58c50 = DAT_04c58c50 + -1;
  return;
}


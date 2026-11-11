
void FUN_0038b500(long *param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  
  plVar2 = (long *)param_1[1];
  while (plVar2 != param_1) {
    if ((char)plVar2[0x13] != '\0') {
      (**(code **)(*(long *)plVar2[0x12] + 0x18))((long *)plVar2[0x12],param_2);
    }
    plVar3 = (long *)plVar2[0x12];
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 8))(plVar3);
      FUN_00367b50(plVar3);
    }
    plVar3 = (long *)plVar2[1];
    lVar1 = *plVar3;
    *(long **)(*plVar2 + 8) = plVar3;
    *plVar3 = *plVar2;
    *(long **)(lVar1 + 8) = plVar2;
    *plVar2 = lVar1;
    FUN_0038b4f8(plVar2);
    FUN_00367b50(plVar2);
    plVar2 = (long *)param_1[1];
  }
  return;
}


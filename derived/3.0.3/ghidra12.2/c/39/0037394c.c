
long * FUN_0037394c(long param_1,undefined8 param_2,undefined8 param_3,uint param_4)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  undefined1 auStack_60 [8];
  undefined8 local_58;
  
  lVar1 = FUN_00369da0(param_1,param_3);
  if (lVar1 == 0) {
    plVar2 = (long *)0x0;
  }
  else {
    FUN_00360020(auStack_60,lVar1);
    plVar2 = (long *)FUN_00367b30(0x70);
    FUN_00373cbc();
    plVar3 = plVar2 + 1;
    lVar1 = *plVar3;
    plVar4 = (long *)(param_1 + 8);
    *plVar3 = *plVar4;
    *(long **)(lVar1 + 8) = plVar4;
    *(long **)(*plVar4 + 8) = plVar3;
    *plVar4 = lVar1;
    (**(code **)(*plVar2 + 0x40))(plVar2,param_2,*(undefined8 *)(param_1 + 0x40),local_58);
    FUN_00373d90(plVar2,auStack_60,param_1,*(undefined8 *)(param_1 + 0x20),param_4 & 1);
  }
  return plVar2;
}



void FUN_001a4ff4(long param_1,long *param_2)

{
  long *plVar1;
  long lVar2;
  undefined1 auStack_38 [24];
  
  (**(code **)(*param_2 + 0xa8))(auStack_38,param_2,param_1);
  plVar1 = (long *)FUN_00187df4(0x18);
  plVar1[1] = param_1 + 0x110;
  plVar1[2] = (long)param_2;
  *plVar1 = 0;
  lVar2 = *(long *)(param_1 + 0x110);
  *plVar1 = lVar2;
  *(long **)(lVar2 + 8) = plVar1;
  *(long **)(param_1 + 0x110) = plVar1;
  *(long *)(param_1 + 0x120) = *(long *)(param_1 + 0x120) + 1;
  return;
}


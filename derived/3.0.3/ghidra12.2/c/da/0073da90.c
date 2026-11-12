
bool FUN_0073da90(long param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  undefined8 local_20;
  undefined8 uStack_18;
  
  if ((*(long *)(param_1 + 0x1138) == 0) ||
     (lVar2 = *(long *)(*(long *)(param_1 + 0x1138) + 0x78), lVar2 == 0)) {
    return false;
  }
  plVar1 = *(long **)(lVar2 + 0x50);
  local_20 = 0;
  uStack_18 = 0;
  lVar2 = (**(code **)(*plVar1 + 0x178))(plVar1,param_2,&uStack_18,&local_20);
  return lVar2 != 0;
}



undefined8 FUN_02c9b9e8(long param_1)

{
  long *plVar1;
  int iVar2;
  undefined8 uVar3;
  undefined **local_30;
  long lStack_28;
  
  plVar1 = (long *)(param_1 + 0xfd8);
  iVar2 = (**(code **)(*(long *)(param_1 + 0xfd8) + 0x10))(plVar1);
  if (iVar2 < 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = (**(code **)(*plVar1 + 0x10))(plVar1);
    if ((int)uVar3 != 0) {
      lStack_28 = *(long *)(param_1 + 0x210) + 0x5f8;
      local_30 = &PTR_LAB_04ab4f60;
      (**(code **)(*(long *)(param_1 + 0xfd8) + 0x18))(plVar1,0);
      FUN_02ca8da0(plVar1,&local_30);
      uVar3 = 1;
    }
  }
  return uVar3;
}


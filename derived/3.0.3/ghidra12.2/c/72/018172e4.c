
void FUN_018172e4(undefined4 param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  
  if ((*(long *)(param_2 + 0x48) != 0) &&
     (lVar1 = *(long *)(*(long *)(param_2 + 0x48) + 0x60), lVar1 != 0)) {
    FUN_0073d870(lVar1,param_3,10,0,0);
  }
  if (*(long *)(*(long *)(*(long *)(param_2 + 0x3d0) + 0x60) + 0x1138) == 0) {
    return;
  }
  FUN_03850760(param_1);
  return;
}


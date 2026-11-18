
void FUN_032fc764(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined **local_40;
  long *local_38;
  
  if ((*(int *)(param_1 + 0x38) != 0) || (lVar2 = *(long *)(param_1 + 0x28), lVar2 == 0)) {
    return;
  }
  if (*(int *)(lVar2 + 0x17a0) == 1) {
    lVar2 = lVar2 + 1000;
    uVar1 = 3;
  }
  else {
    lVar2 = lVar2 + 0x390;
    uVar1 = 8;
  }
  local_40 = &PTR_LAB_04b177d8;
  local_38 = (long *)0x0;
  FUN_032c7c30(lVar2,uVar1,0,&local_40,0,0);
  if (local_38 != (long *)0x0) {
    (**(code **)(*local_38 + 8))();
  }
  return;
}


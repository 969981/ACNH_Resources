
void FUN_032d3f8c(undefined8 *param_1)

{
  long *plVar1;
  long lVar2;
  
  lVar2 = param_1[0x1b];
  *param_1 = &PTR_FUN_04b1b898;
  if (lVar2 != 0) {
    plVar1 = (long *)FUN_038cb610(*(undefined8 *)PTR_DAT_04bb2698,lVar2);
    (**(code **)(*plVar1 + 0x38))(plVar1,lVar2);
  }
  param_1[0x1d] = 0;
  param_1[0x1b] = 0;
  FUN_0037bb6c(param_1);
  return;
}


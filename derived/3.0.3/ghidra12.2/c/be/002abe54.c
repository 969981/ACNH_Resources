
undefined8 FUN_002abe54(long param_1)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  
  if (*(int *)(param_1 + 0x68) == 0) {
    return 0;
  }
  plVar1 = (long *)FUN_002ba790(*(undefined8 *)PTR_DAT_04bc1510);
  lVar2 = (**(code **)(*plVar1 + 0x48))(plVar1,*(undefined4 *)(param_1 + 0x68));
  uVar3 = 0;
  if (lVar2 != 0) {
    uVar3 = *(undefined8 *)(lVar2 + 0x40);
  }
  return uVar3;
}


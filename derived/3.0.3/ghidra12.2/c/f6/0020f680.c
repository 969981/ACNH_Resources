
void FUN_0020f680(long param_1)

{
  long *plVar1;
  long lVar2;
  undefined *local_30;
  undefined *puStack_28;
  undefined8 local_20;
  undefined8 *puStack_18;
  
  plVar1 = *(long **)(*(long *)(param_1 + 0xa0) + 0xf8);
  if ((plVar1 == (long *)0x0) || ((int)plVar1[8] == 5)) {
    lVar2 = *(long *)(*(long *)(param_1 + 0xa0) + 0x100);
    if ((lVar2 != 0) && (*(int *)(lVar2 + 0x40) != 5)) {
      FUN_0019c910(param_1,1);
      *(undefined4 *)(param_1 + 0x44) = 100;
      return;
    }
    puStack_28 = PTR_LAB_04bccd30;
  }
  else {
    (**(code **)(*plVar1 + 0x48))();
    puStack_28 = PTR_LAB_04bccd38;
  }
  local_30 = PTR_DAT_04bcc0c0 + 0x10;
  local_20 = 0;
  puStack_18 = &DAT_0407ebb1;
  FUN_0019a704(param_1,&local_30);
  return;
}


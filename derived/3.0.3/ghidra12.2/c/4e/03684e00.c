
void FUN_03684e00(long param_1,long param_2,undefined4 *param_3)

{
  int iVar1;
  undefined1 local_1c;
  undefined1 local_1b;
  undefined2 local_1a;
  undefined4 local_18;
  undefined1 local_14;
  undefined1 local_13;
  undefined1 local_12;
  
  local_1a = *(undefined2 *)(param_2 + 0x28);
  local_1c = (undefined1)*param_3;
  local_1b = (undefined1)param_3[1];
  local_13 = **(undefined1 **)(param_1 + 8);
  local_18 = 0;
  local_12 = 0;
  local_14 = 4;
  iVar1 = *(int *)(*(long *)(*(long *)PTR_DAT_04bc1370 + 0x18) + 8);
  if (-1 < iVar1) {
    FUN_01db1df0(**(long **)PTR_DAT_04bb27d0 + 0x480,iVar1,&local_18,&local_1c,4,0);
  }
  return;
}


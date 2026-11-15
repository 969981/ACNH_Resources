
void FUN_01f3dd14(long param_1)

{
  ulong uVar1;
  long lVar2;
  undefined8 local_48;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 uStack_38;
  undefined1 local_34;
  undefined *local_30;
  undefined4 local_28;
  undefined4 uStack_24;
  
  uVar1 = (**(code **)(**(long **)(param_1 + 8) + 0x180))();
  if (((uVar1 & 1) != 0) &&
     ((*(int *)(param_1 + 0x77b0) == 0x3c || *(int *)(param_1 + 0x77f4) == 0x3c) &&
      *(char *)(param_1 + 0x789c) != '\0')) {
    lVar2 = *(long *)(*(long *)(param_1 + 8) + 0x68);
    local_28 = *(undefined4 *)(param_1 + 0x7818);
    uStack_24 = *(undefined4 *)(param_1 + 0x781c);
    local_3c = *(undefined4 *)(*(long *)(param_1 + 0x10) + 800);
    local_34 = 0;
    local_30 = PTR_DAT_04bb2010 + 0x10;
    local_40 = *(undefined4 *)(lVar2 + 0x280);
    local_48 = *(undefined8 *)(lVar2 + 0x278);
    uStack_38 = 0x41200000;
    FUN_01521d80(*(undefined8 *)PTR_DAT_04bb4c80,&local_48);
  }
  return;
}


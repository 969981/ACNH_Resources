
void FUN_03be1268(undefined8 *param_1,long param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  undefined *local_48;
  long local_40;
  undefined1 local_38;
  
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  lVar1 = (**(code **)(**(long **)(*(long *)(param_2 + 0x30) + 0x18) + 0x20))();
  if (((param_3 != 0) && (*(char *)(lVar1 + 0x78) != '\0')) &&
     (uVar2 = FUN_03bf46a8(param_2,"searchAndEmit(%s)",param_3), (uVar2 & 1) != 0)) {
    local_38 = 0;
    local_48 = PTR_DAT_04bcadf8 + 0x10;
    local_40 = FUN_03bf5ec0(*(undefined8 *)(*(long *)(param_2 + 0x30) + 0x18),param_3);
    if (local_40 != 0) {
      FUN_03bf47b0(param_2,&local_48,param_1);
    }
  }
  return;
}


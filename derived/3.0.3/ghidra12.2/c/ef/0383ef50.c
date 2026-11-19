
void FUN_0383ef50(undefined8 *param_1,long param_2,long param_3,ulong param_4)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  undefined *local_48;
  long local_40;
  undefined1 local_38;
  
  lVar3 = *(long *)(param_2 + 8);
  if (lVar3 == 0) {
    *param_1 = 0;
    *(undefined4 *)(param_1 + 1) = 0;
  }
  else {
    if ((param_4 & 1) != 0) {
      *param_1 = 0;
      *(undefined4 *)(param_1 + 1) = 0;
      lVar1 = (**(code **)(**(long **)(*(long *)(lVar3 + 0x30) + 0x18) + 0x20))();
      FUN_03be7150(*(undefined8 *)(lVar1 + 0x70),param_3,param_1,lVar3,1,0);
      return;
    }
    *param_1 = 0;
    *(undefined4 *)(param_1 + 1) = 0;
    lVar1 = (**(code **)(**(long **)(*(long *)(lVar3 + 0x30) + 0x18) + 0x20))();
    if (((param_3 != 0) && (*(char *)(lVar1 + 0x78) != '\0')) &&
       (uVar2 = FUN_03bf46a8(lVar3,"searchAndEmit(%s)",param_3), (uVar2 & 1) != 0)) {
      local_38 = 0;
      local_48 = PTR_DAT_04bcadf8 + 0x10;
      local_40 = FUN_03bf5ec0(*(undefined8 *)(*(long *)(lVar3 + 0x30) + 0x18),param_3);
      if (local_40 != 0) {
        FUN_03bf47b0(lVar3,&local_48,param_1);
      }
    }
  }
  return;
}


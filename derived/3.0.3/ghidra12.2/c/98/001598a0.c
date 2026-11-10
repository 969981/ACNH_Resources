
undefined4 FUN_001598a0(long *param_1)

{
  undefined4 uVar1;
  long lVar2;
  long lVar3;
  undefined4 local_24;
  
  local_24 = 0;
  uVar1 = 0;
  if ((undefined **)param_1[0x88] == &PTR_s_HTTPS_048364f8 ||
      (undefined **)param_1[0x88] == &PTR_DAT_04836580) {
    lVar3 = *(long *)(*param_1 + 0x1e8);
    if (*(long *)(lVar3 + 0x280) == 0) {
      uVar1 = 0;
    }
    else {
      lVar2 = param_1[0xae];
      *(undefined8 *)(lVar3 + 0x280) = 0;
      FUN_00171be8(lVar2,*(undefined4 *)(lVar3 + 0x218));
      FUN_0015992c(param_1,param_1 + 0xae,&local_24);
      uVar1 = local_24;
    }
  }
  return uVar1;
}


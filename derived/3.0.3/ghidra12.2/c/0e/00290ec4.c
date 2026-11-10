
void thunk_FUN_00290808(long *param_1)

{
  long lVar1;
  long lVar2;
  
  *param_1 = (long)(PTR_DAT_04bcddb8 + 0x10);
  lVar2 = DAT_04c60f30;
  if (DAT_04c60f30 != 0) {
    if (*(long **)(DAT_04c60f30 + 0x80) != param_1) {
      lVar1 = DAT_04c60f30 + 0x40;
      FUN_00290438(lVar1);
      if (param_1[0x14] != 0) {
        param_1[0x14] = 0;
        FUN_002860e8(param_1 + 0x11);
        *(int *)(lVar2 + 0x38) = *(int *)(lVar2 + 0x38) + -1;
      }
      FUN_00290440(lVar1);
      if (*(int *)((long)param_1 + 0xcc) - 2U < 2) {
        (**(code **)(*param_1 + 0x40))(param_1);
      }
      else if (*(int *)((long)param_1 + 0xcc) == 1) {
        (**(code **)(*param_1 + 0x50))(param_1,0);
      }
      nn::os::DestroyThread((ThreadType *)param_1[0x1a]);
      if (param_1[0x1a] != 0) {
        FUN_00285dc0();
      }
      lVar2 = param_1[0x1b];
      if (lVar2 != 0) {
        FUN_00285e00(lVar2);
        FUN_00285dc0(lVar2);
      }
    }
    FUN_00290dc4(param_1 + 6);
  }
  FUN_00290d1c(param_1 + 6);
  FUN_0028a004(param_1);
  return;
}


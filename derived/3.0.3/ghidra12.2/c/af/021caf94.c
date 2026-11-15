
void FUN_021caf94(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined1 local_40;
  undefined1 local_3f;
  undefined4 local_3c;
  undefined4 uStack_38;
  undefined2 local_34;
  undefined1 local_32;
  
  if (*(char *)(param_1 + 0x2c8) != '\0') {
    return;
  }
  if ((*(int *)(param_1 + 700) != 0) && (*(int *)(param_1 + 700) < 5)) {
    lVar3 = *(long *)PTR_DAT_04bb32e8;
    lVar1 = nn::time::ToPosixTimeFromUtc((CalendarTime *)(param_1 + 0x2c0));
    lVar2 = nn::time::ToPosixTimeFromUtc((CalendarTime *)(lVar3 + 0x4060));
    if (lVar1 <= lVar2) {
      nn::time::ToPosixTimeFromUtc((CalendarTime *)(lVar3 + 0x4060));
      *(undefined4 *)(param_1 + 700) = 0;
      *(undefined4 *)(param_1 + 0x2c2) = 0x101;
      *(undefined2 *)(param_1 + 0x2c0) = 0;
      *(undefined1 *)(param_1 + 0x2c6) = 0;
      *(undefined2 *)(param_1 + 0x2c8) = 0xff00;
      FUN_021cad10(param_1);
      local_3f = 0;
      local_3c = 0;
      uStack_38 = 0;
      local_32 = 0;
      local_34 = 0xff00;
      local_40 = (undefined1)*(undefined4 *)(param_1 + 4);
      if (-1 < DAT_053d15b0) {
        FUN_01db1df0(**(long **)PTR_DAT_04bb27d0 + 0x480,DAT_053d15b0,&uStack_38,&local_40,8,0);
      }
    }
  }
  return;
}


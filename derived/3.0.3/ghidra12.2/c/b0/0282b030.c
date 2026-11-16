
void FUN_0282b030(long param_1,undefined8 param_2,undefined1 *param_3,undefined8 param_4,
                 undefined8 param_5)

{
  byte bVar1;
  int iVar2;
  undefined1 uVar3;
  ulong uVar4;
  undefined4 local_4;
  
  if (*(char *)(param_1 + 0x2b5) == '\x01') {
    bVar1 = *(byte *)(param_1 + 0x2b9);
    if (((*PTR_DAT_04bb8aa8 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04f292d0), iVar2 != 0))
    {
      FUN_00dd5f80(&DAT_04f292c0,param_2);
      __cxa_guard_release(&DAT_04f292d0);
    }
    if (0 < (int)DAT_04f292c0) {
      uVar4 = 0;
      do {
        if (*(uint *)(DAT_04f292c8 + uVar4 * 4) == (uint)bVar1) goto LAB_0282b0bc;
        uVar4 = uVar4 + 1;
      } while (DAT_04f292c0 != uVar4);
    }
    uVar4 = 0;
LAB_0282b0bc:
    local_4 = (undefined4)uVar4;
    FUN_028285c8(param_1,param_2,&local_4,param_4);
    uVar3 = 0;
  }
  else {
    if (*(char *)(param_1 + 0x2b5) != '\0') {
      return;
    }
    FUN_02828240(param_1,param_2,param_1 + 0x2b6,param_5,param_4);
    uVar3 = 1;
  }
  *param_3 = uVar3;
  return;
}


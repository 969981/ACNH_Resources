
void FUN_01b46be0(undefined8 *param_1)

{
  int iVar1;
  ulong uVar2;
  
  *(undefined8 *)((long)param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 1) = 0xffffffff;
  *(undefined8 *)((long)param_1 + 0x14) = 0;
  *(undefined4 *)((long)param_1 + 0x1c) = 0;
  *param_1 = &PTR_FUN_04a38088;
  if (((DAT_04f292d0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04f292d0), iVar1 != 0)) {
    FUN_00dd5f80(&DAT_04f292c0);
    __cxa_guard_release(&DAT_04f292d0);
  }
  if (0 < (int)DAT_04f292c0) {
    uVar2 = 0;
    do {
      if (*(int *)(DAT_04f292c8 + uVar2 * 4) == 0) goto LAB_01b46c58;
      uVar2 = uVar2 + 1;
    } while (DAT_04f292c0 != uVar2);
  }
  uVar2 = 0;
LAB_01b46c58:
  *(undefined8 *)((long)param_1 + 0x2c) = 0xfffe;
  *(int *)(param_1 + 4) = (int)uVar2;
  *(undefined4 *)((long)param_1 + 0x24) = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  FUN_0277d4ac((undefined8 *)((long)param_1 + 0x2c));
  *(undefined2 *)((long)param_1 + 0x34) = 0;
  return;
}


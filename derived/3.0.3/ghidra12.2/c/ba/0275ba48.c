
void FUN_0275ba48(long param_1,undefined4 *param_2,undefined4 *param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = FUN_0275b5a8(param_1,param_4,*(undefined1 *)(param_1 + 0x925),
                       *(undefined1 *)(param_1 + 0x924),0xffffffff);
  iVar2 = FUN_0275b5a8(param_1,param_4,iVar1,*(undefined1 *)(param_1 + 0x925),
                       *(undefined1 *)(param_1 + 0x924));
  if (((DAT_0557ee20 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_0557ee20), iVar3 != 0)) {
    DAT_0557ede0 = 0x9a;
    DAT_0557ede4 = 0x81f;
    DAT_0557ede8 = 0x98;
    DAT_0557edec = 0xe;
    DAT_0557edf0 = 0x9b;
    DAT_0557edf4 = 0x3c;
    DAT_0557edf8 = 0x99;
    DAT_0557edfc = 0xe70;
    DAT_0557ee00 = 0x97;
    DAT_0557ee04 = 0x7c0;
    DAT_0557ee08 = 0x96;
    DAT_0557ee0c = 0x1e0;
    DAT_0557ee10 = 0x94;
    DAT_0557ee14 = 0xf81;
    DAT_0557ee18 = 0x9c;
    DAT_0557ee1c = 0xc0f;
    __cxa_guard_release(&DAT_0557ee20);
  }
  *param_2 = (&DAT_0557ede0)[(long)iVar1 * 2];
  *param_3 = (&DAT_0557ede0)[(long)iVar2 * 2];
  return;
}


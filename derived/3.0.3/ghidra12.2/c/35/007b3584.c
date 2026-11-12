
void FUN_007b3584(void)

{
  long *plVar1;
  int iVar2;
  ulong uVar3;
  long local_48;
  long lStack_40;
  long local_38;
  long local_30;
  long lStack_28;
  
  plVar1 = DAT_04ca9180;
  if (DAT_04ca9180 != (long *)0x0) {
    if (*DAT_04ca9180 != 0 || DAT_04ca9180[1] != 0) {
      nn::account::CloseUser((UserHandle *)(DAT_04ca9180 + 2));
      *plVar1 = 0;
      plVar1[1] = 0;
    }
    if (plVar1[5] != 0 || plVar1[6] != 0) {
      nn::account::CloseUser((UserHandle *)(plVar1 + 7));
      plVar1[5] = 0;
      plVar1[6] = 0;
    }
    if (plVar1[10] != 0 || plVar1[0xb] != 0) {
      nn::account::CloseUser((UserHandle *)(plVar1 + 0xc));
      plVar1[10] = 0;
      plVar1[0xb] = 0;
    }
    if (plVar1[0xf] != 0 || plVar1[0x10] != 0) {
      nn::account::CloseUser((UserHandle *)(plVar1 + 0x11));
      plVar1[0xf] = 0;
      plVar1[0x10] = 0;
    }
    if (plVar1[0x14] != 0 || plVar1[0x15] != 0) {
      nn::account::CloseUser((UserHandle *)(plVar1 + 0x16));
      plVar1[0x14] = 0;
      plVar1[0x15] = 0;
    }
    if (plVar1[0x19] != 0 || plVar1[0x1a] != 0) {
      nn::account::CloseUser((UserHandle *)(plVar1 + 0x1b));
      plVar1[0x19] = 0;
      plVar1[0x1a] = 0;
    }
    if (plVar1[0x1e] != 0 || plVar1[0x1f] != 0) {
      nn::account::CloseUser((UserHandle *)(plVar1 + 0x20));
      plVar1[0x1e] = 0;
      plVar1[0x1f] = 0;
    }
    if (plVar1[0x23] != 0 || plVar1[0x24] != 0) {
      nn::account::CloseUser((UserHandle *)(plVar1 + 0x25));
      plVar1[0x23] = 0;
      plVar1[0x24] = 0;
    }
    uVar3 = nn::account::TryOpenPreselectedUser((UserHandle *)&local_38);
    if (((uVar3 & 1) != 0) &&
       (iVar2 = nn::account::GetUserId((Uid *)&local_48,(UserHandle *)&local_38), iVar2 == 0)) {
      *plVar1 = local_48;
      plVar1[1] = lStack_40;
      plVar1[4] = lStack_28;
      plVar1[2] = local_38;
      plVar1[3] = local_30;
      plVar1[0x28] = local_48;
      plVar1[0x29] = lStack_40;
    }
  }
  return;
}


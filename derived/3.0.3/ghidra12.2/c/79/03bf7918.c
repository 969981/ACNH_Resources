
undefined1 FUN_03bf7918(long param_1)

{
  int *piVar1;
  int iVar2;
  undefined1 *puVar3;
  
  piVar1 = (int *)(param_1 + 0x25858);
  *piVar1 = 0;
  iVar2 = nn::friends::GetFriendList
                    (piVar1,(Friend *)(param_1 + 0x58),(Uid *)(param_1 + 0x40),
                     *(int *)(param_1 + 0x50),*(int *)(param_1 + 0x54),
                     (FriendFilter *)(param_1 + 0x30));
  if (iVar2 == 0) {
    if (*(long *)(param_1 + 0x28) != 0) {
      FUN_03bf71f0(*(long *)(param_1 + 0x28),(Friend *)(param_1 + 0x58),*piVar1);
    }
    puVar3 = &DAT_05ae6790;
  }
  else {
    puVar3 = &DAT_05ae6794;
  }
  return *puVar3;
}


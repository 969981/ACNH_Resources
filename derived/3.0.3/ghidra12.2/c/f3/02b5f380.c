
uint FUN_02b5f380(undefined4 *param_1,byte *param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 local_8;
  byte local_4 [4];
  
  if ((param_1 == (undefined4 *)0x0) || (local_4[0] = *param_2, 7 < local_4[0])) {
    return 0;
  }
  iVar1 = FUN_02582fe0(local_4);
  if (iVar1 == -1) {
    uVar2 = 0;
  }
  else {
    local_8 = 0;
    uVar2 = FUN_02b5e950(&local_8,iVar1);
    if ((uVar2 & 1) != 0) {
      *param_1 = local_8;
    }
  }
  return uVar2 & 1;
}


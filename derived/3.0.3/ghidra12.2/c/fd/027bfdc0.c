
undefined1 FUN_027bfdc0(long param_1,undefined8 param_2,byte *param_3)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  uint uVar6;
  byte local_48 [4];
  byte local_44 [4];
  
  lVar5 = 0;
  uVar6 = 0;
  while (uVar4 = FUN_0277d7b4(param_1 + 0x1004 + ((long)((ulong)uVar6 << 0x20) >> 0x1d),param_2),
        (uVar4 & 1) == 0) {
    uVar6 = uVar6 + 1;
    lVar5 = lVar5 + 1;
    if (uVar6 == 0x400) {
      return 3;
    }
  }
  pcVar1 = (char *)(param_1 + 0x3004) + lVar5;
  if (0x3ff < (uint)lVar5) {
    pcVar1 = (char *)(param_1 + 0x3004);
  }
  cVar2 = *pcVar1;
  if (cVar2 == -1) {
    return 3;
  }
  if ((cVar2 == -2) || (cVar2 < 0)) {
    return 2;
  }
  local_44[0] = *param_3;
  if (7 < local_44[0]) {
    local_44[0] = 0xff;
  }
  uVar4 = FUN_02669430(local_44);
  if ((uVar4 & 1) == 0) {
    return true;
  }
  local_48[0] = *param_3;
  if (7 < local_48[0]) {
    local_48[0] = 0xff;
  }
  iVar3 = FUN_02582fe0(local_48);
  return iVar3 != cVar2;
}


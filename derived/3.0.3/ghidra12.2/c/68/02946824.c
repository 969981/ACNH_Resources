
int FUN_02946824(long param_1)

{
  char *pcVar1;
  int iVar2;
  undefined1 *local_b8;
  char *pcStack_b0;
  undefined4 local_a8;
  char local_a4 [8];
  char local_9c [8];
  undefined2 local_94;
  undefined1 local_25;
  
  if (*(byte *)(*DAT_0537d558 + 0x476) < 2) {
    return 1;
  }
  local_a8 = 0x80;
  local_94 = 0x20;
  local_25 = 0;
  local_9c = (char  [8])s_SeafoodNetFlag___040cb3f2._8_8_;
  local_a4 = (char  [8])s_SeafoodNetFlag___040cb3f2._0_8_;
  pcStack_b0 = local_a4;
  local_b8 = &DAT_048fc708;
  FUN_038d13f0(&local_b8,"PacketIndex[%d]",*(undefined4 *)(param_1 + 0x3bc));
  pcVar1 = ": Permit [X]";
  if ((*(byte *)(param_1 + 0x275) & 4) != 0) {
    pcVar1 = ": Permit [O]";
  }
  FUN_038d13f0(&local_b8,pcVar1);
  pcVar1 = ": WCH [X]";
  if ((*(byte *)(param_1 + 0x275) & 2) != 0) {
    pcVar1 = ": WCH [O]";
  }
  FUN_038d13f0(&local_b8,pcVar1);
  pcVar1 = ": UnPermit [X]";
  if ((*(byte *)(param_1 + 0x275) & 8) != 0) {
    pcVar1 = ": UnPermit [O]";
  }
  FUN_038d13f0(&local_b8,pcVar1);
  iVar2 = (uint)((*(byte *)(param_1 + 0x275) & 10) == 8) << 1;
  if ((*(byte *)(param_1 + 0x275) & 4) != 0) {
    iVar2 = 1;
  }
  return iVar2;
}


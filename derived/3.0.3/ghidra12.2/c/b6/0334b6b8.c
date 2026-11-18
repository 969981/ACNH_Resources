
char * FUN_0334b6b8(void)

{
  char *pcVar1;
  ulong uVar2;
  
  uVar2 = (ulong)(uint)(**(int **)PTR_DAT_04bb3448 << 1) | 1;
  if (0x1f < (uint)uVar2) {
    uVar2 = 0;
  }
  pcVar1 = "T_Text_00_JP";
  if ((&DAT_04058440)[uVar2] != '\t' && (&DAT_04058440)[uVar2] != '\0') {
    pcVar1 = "T_Text_00";
  }
  return pcVar1;
}


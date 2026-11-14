
int FUN_01af06e0(undefined8 param_1,uint param_2,undefined1 *param_3)

{
  int iVar1;
  ulong uVar2;
  undefined *local_40;
  char *pcStack_38;
  
  iVar1 = FUN_01aed730();
  if ((param_2 & 1) == 0) {
    local_40 = PTR_DAT_04bb2020 + 0x10;
    pcStack_38 = "RegulationType4";
    uVar2 = FUN_0273f0a0(&local_40);
    if ((uVar2 & 1) != 0) {
      iVar1 = (iVar1 * 0xc) / 10;
      if (param_3 != (undefined1 *)0x0) {
        *param_3 = 1;
      }
    }
  }
  return iVar1;
}


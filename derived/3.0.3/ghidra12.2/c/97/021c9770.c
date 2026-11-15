
char * FUN_021c9770(uint param_1,ulong param_2)

{
  char *pcVar1;
  undefined8 uVar2;
  char *pcVar3;
  undefined *local_40;
  undefined1 *puStack_38;
  undefined4 local_30;
  undefined1 local_2c [7];
  undefined1 local_25;
  
  if (7 < (int)param_1) {
    local_25 = 0;
    local_30 = 8;
    puStack_38 = local_2c;
    local_2c[0] = 0;
    local_40 = PTR_DAT_04bb3768 + 0x10;
    FUN_021d62e0(&local_40,param_1);
    uVar2 = FUN_021d7e50(&local_40);
    if (((uint)uVar2 != 0xffffffff) && ((uint)uVar2 != param_1)) {
      pcVar3 = (char *)FUN_021c9770(uVar2,1);
      return pcVar3;
    }
  }
  if (param_1 < 0x11) {
    pcVar1 = &DAT_05454358 + (ulong)param_1 * 0x2d8;
    pcVar3 = pcVar1;
    if (((param_2 & 1) != 0) && (pcVar3 = (char *)0x0, *pcVar1 != '\0')) {
      pcVar3 = pcVar1;
    }
  }
  else {
    pcVar3 = (char *)0x0;
  }
  return pcVar3;
}


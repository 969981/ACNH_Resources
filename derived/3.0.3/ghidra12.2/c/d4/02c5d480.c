
uint FUN_02c5d480(long *param_1)

{
  char cVar1;
  ulong uVar2;
  ulong uVar3;
  char *pcVar4;
  undefined *local_78;
  char *local_70;
  undefined4 local_68;
  char local_64 [63];
  undefined1 local_25;
  
  local_25 = 0;
  local_68 = 0x40;
  local_70 = local_64;
  local_64[0] = '\0';
  local_78 = PTR_DAT_04bb2bc0 + 0x10;
  FUN_036ddfc0(DAT_05ab5ea8,&local_78);
  (**(code **)(*param_1 + 0x18))(param_1);
  (**(code **)(*param_1 + 0x18))(param_1);
  pcVar4 = (char *)param_1[1];
  (**(code **)(local_78 + 0x18))(&local_78);
  if (pcVar4 != local_70) {
    cVar1 = *(char *)param_1[1];
    if (cVar1 != *local_70) {
      return 0;
    }
    if (cVar1 != '\0') {
      pcVar4 = (char *)param_1[1] + 2;
      uVar2 = 0;
      do {
        uVar3 = uVar2;
        if (uVar3 == 0x80000) goto LAB_02c5d5a4;
        if (pcVar4[uVar3 - 1] != local_70[uVar3 + 1]) {
          pcVar4 = (char *)0x0;
          goto LAB_02c5d5a4;
        }
        if (pcVar4[uVar3 - 1] == '\0') goto LAB_02c5d578;
        if (pcVar4[uVar3] != local_70[uVar3 + 2]) {
          pcVar4 = (char *)0x0;
          uVar3 = uVar3 | 1;
          goto LAB_02c5d5a4;
        }
        uVar2 = uVar3 + 2;
      } while (pcVar4[uVar3] != '\0');
      uVar3 = uVar3 + 1;
LAB_02c5d578:
      pcVar4 = (char *)0x1;
LAB_02c5d5a4:
      return (uint)(uVar3 < 0x80000) & (uint)pcVar4;
    }
  }
  return 1;
}


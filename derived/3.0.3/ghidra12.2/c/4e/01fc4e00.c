
uint FUN_01fc4e00(long param_1)

{
  uint uVar1;
  char *pcVar2;
  ulong uVar3;
  ulong uVar4;
  long *plVar5;
  
  plVar5 = (long *)(param_1 + 0x48);
  (**(code **)(*plVar5 + 0x18))(plVar5);
  (**(code **)(*plVar5 + 0x18))(plVar5);
  pcVar2 = *(char **)(param_1 + 0x50);
  if (pcVar2 == "NpcRollDance") {
    uVar1 = 1;
  }
  else if (*pcVar2 == 'N') {
    uVar4 = 0;
    do {
      uVar3 = uVar4;
      uVar4 = uVar3;
      if (uVar3 == 0x80000) goto LAB_01fc4ea4;
      if (pcVar2[uVar3 + 1] != "NpcRollDance"[uVar3 + 1]) {
        uVar4 = 0;
        goto LAB_01fc4ea4;
      }
      uVar4 = uVar3 + 1;
    } while (pcVar2[uVar3 + 1] != '\0');
    uVar4 = 1;
LAB_01fc4ea4:
    uVar1 = (uint)(uVar3 < 0x80000) & (uint)uVar4;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}


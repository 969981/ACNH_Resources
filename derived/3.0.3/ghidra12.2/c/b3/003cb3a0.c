
void FUN_003cb3a0(char *param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  char *pcVar4;
  char *pcVar5;
  
  if (*param_1 != '\0') {
    while (pcVar5 = *(char **)(param_1 + 0x10), pcVar5 != param_1 + 8) {
      pcVar4 = pcVar5 + -0x288;
      FUN_003c0c30(pcVar4);
      if (*(code **)(pcVar5 + -0xc0) != (code *)0x0) {
        (**(code **)(pcVar5 + -0xc0))(pcVar4,1,*(undefined8 *)(pcVar5 + -0xb8));
      }
      FUN_003c0ba0(pcVar4);
    }
    plVar2 = *(long **)(param_1 + 0x20);
    while (plVar2 != (long *)(param_1 + 0x18)) {
      plVar1 = (long *)plVar2[1];
      lVar3 = *plVar1;
      *(long **)(*plVar2 + 8) = plVar1;
      *plVar1 = *plVar2;
      *(long **)(lVar3 + 8) = plVar2;
      *plVar2 = lVar3;
      FUN_003c0a10(plVar2 + -0x51);
      plVar2 = *(long **)(param_1 + 0x20);
    }
    *param_1 = '\0';
  }
  return;
}



void FUN_00829a90(long param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  char *pcVar3;
  long *plVar4;
  char *pcVar5;
  
  if ((*(char *)(param_1 + 0x34) != '\0') && (*(int *)(param_1 + 0x10) == *(int *)(param_2 + 8))) {
    plVar4 = (long *)(param_1 + 0x18);
    (**(code **)(*plVar4 + 0x18))(plVar4);
    (**(code **)(*plVar4 + 0x18))(plVar4);
    pcVar5 = *(char **)(param_1 + 0x20);
    (**(code **)(*(long *)(param_2 + 0x10) + 0x18))((long *)(param_2 + 0x10));
    pcVar3 = *(char **)(param_2 + 0x18);
    if (pcVar5 != pcVar3) {
      pcVar5 = *(char **)(param_1 + 0x20);
      if (*pcVar5 != *pcVar3) goto LAB_00829b80;
      if (*pcVar5 != '\0') {
        uVar1 = 0;
        do {
          uVar2 = uVar1;
          if ((uVar2 == 0x80000) || (pcVar5[uVar2 + 1] != pcVar3[uVar2 + 1])) goto LAB_00829b80;
          if (pcVar5[uVar2 + 1] == '\0') goto LAB_00829b70;
          if (pcVar5[uVar2 + 2] != pcVar3[uVar2 + 2]) goto LAB_00829b80;
          uVar1 = uVar2 + 2;
        } while (pcVar5[uVar2 + 2] != '\0');
        uVar2 = uVar2 + 1;
LAB_00829b70:
        if (uVar2 >> 0x13 != 0) goto LAB_00829b80;
      }
    }
    *(undefined1 *)(param_1 + 0xb1) = 1;
  }
LAB_00829b80:
  if ((*(char *)(param_1 + 100) != '\0') && (*(int *)(param_1 + 0x40) == *(int *)(param_2 + 8))) {
    plVar4 = (long *)(param_1 + 0x48);
    (**(code **)(*plVar4 + 0x18))(plVar4);
    (**(code **)(*plVar4 + 0x18))(plVar4);
    pcVar5 = *(char **)(param_1 + 0x50);
    (**(code **)(*(long *)(param_2 + 0x10) + 0x18))((long *)(param_2 + 0x10));
    pcVar3 = *(char **)(param_2 + 0x18);
    if (pcVar5 != pcVar3) {
      pcVar5 = *(char **)(param_1 + 0x50);
      if (*pcVar5 != *pcVar3) {
        return;
      }
      if (*pcVar5 != '\0') {
        uVar1 = 0;
        do {
          uVar2 = uVar1;
          if (uVar2 == 0x80000) {
            return;
          }
          if (pcVar5[uVar2 + 1] != pcVar3[uVar2 + 1]) {
            return;
          }
          if (pcVar5[uVar2 + 1] == '\0') goto LAB_00829c40;
          if (pcVar5[uVar2 + 2] != pcVar3[uVar2 + 2]) {
            return;
          }
          uVar1 = uVar2 + 2;
        } while (pcVar5[uVar2 + 2] != '\0');
        uVar2 = uVar2 + 1;
LAB_00829c40:
        if (uVar2 >> 0x13 != 0) {
          return;
        }
      }
    }
    *(undefined1 *)(param_1 + 100) = 0;
  }
  return;
}



undefined8 FUN_00323c20(long param_1,long param_2,long param_3)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  char *pcVar4;
  
  *(undefined8 *)(param_1 + 0x360) = 0;
  lVar3 = *(long *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x358) = 0;
  if (*(char *)(param_2 + 8) == '\0') {
    *(undefined8 *)(param_1 + 0x350) = 0;
    iVar1 = *(int *)(lVar3 + 0x95c);
  }
  else {
    pcVar4 = (char *)(*(long *)(param_2 + 0x28) + (long)*(int *)(lVar3 + 0x954) * 0x90);
    if (*pcVar4 == '\0') {
      lVar3 = *(long *)(*(long *)(param_2 + 0x20) + 0x88) + (long)*(int *)(lVar3 + 0x954) * 0x40;
      FUN_0039fb88(lVar3,*(undefined8 *)(param_2 + 0x10));
      uVar2 = FUN_0039fc8c(lVar3);
      FUN_003352dc(pcVar4,uVar2);
      lVar3 = *(long *)(param_1 + 0x10);
    }
    *(char **)(param_1 + 0x350) = pcVar4;
    iVar1 = *(int *)(lVar3 + 0x95c);
  }
  if (iVar1 == -1) {
    iVar1 = *(int *)(lVar3 + 0x960);
  }
  else {
    if (*(char *)(param_2 + 8) == '\0') {
      *(undefined8 *)(param_1 + 0x358) = 0;
      return 0;
    }
    pcVar4 = (char *)(*(long *)(param_2 + 0x28) + (long)iVar1 * 0x90);
    if (*pcVar4 == '\0') {
      lVar3 = *(long *)(*(long *)(param_2 + 0x20) + 0x88) + (long)iVar1 * 0x40;
      FUN_0039fb88(lVar3,*(undefined8 *)(param_2 + 0x10));
      uVar2 = FUN_0039fc8c(lVar3);
      FUN_003352dc(pcVar4,uVar2);
      lVar3 = *(long *)(param_1 + 0x10);
    }
    *(undefined8 *)(param_1 + 0x358) = pcVar4;
    iVar1 = *(int *)(lVar3 + 0x960);
  }
  if (iVar1 == -1) {
    iVar1 = *(int *)(lVar3 + 0x958);
  }
  else {
    if (*(char *)(param_2 + 8) == '\0') {
      *(undefined8 *)(param_1 + 0x360) = 0;
      return 0;
    }
    pcVar4 = (char *)(*(long *)(param_2 + 0x28) + (long)iVar1 * 0x90);
    if (*pcVar4 == '\0') {
      lVar3 = *(long *)(*(long *)(param_2 + 0x20) + 0x88) + (long)iVar1 * 0x40;
      FUN_0039fb88(lVar3,*(undefined8 *)(param_2 + 0x10));
      uVar2 = FUN_0039fc8c(lVar3);
      FUN_003352dc(pcVar4,uVar2);
      lVar3 = *(long *)(param_1 + 0x10);
    }
    *(char **)(param_1 + 0x360) = pcVar4;
    iVar1 = *(int *)(lVar3 + 0x958);
  }
  if ((iVar1 != -1) && (*(char *)(param_3 + 8) != '\0')) {
    pcVar4 = (char *)(*(long *)(param_3 + 0x28) + (long)iVar1 * 0x58);
    if (*pcVar4 == '\0') {
      lVar3 = *(long *)(*(long *)(param_3 + 0x20) + 0x88) + (long)iVar1 * 0x40;
      FUN_0039fb88(lVar3,*(undefined8 *)(param_3 + 0x10));
      uVar2 = FUN_0039fc8c(lVar3);
      FUN_0033595c(pcVar4,uVar2);
    }
    *(char **)(param_1 + 0x368) = pcVar4;
  }
  return 1;
}


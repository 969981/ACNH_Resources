
void FUN_038a3ed0(long param_1,char *param_2,uint param_3,uint param_4)

{
  ulong uVar1;
  char *pcVar2;
  uint uVar3;
  undefined8 *puVar4;
  
  uVar1 = (ulong)*(uint *)(param_1 + 0x10);
  if (0 < (int)*(uint *)(param_1 + 0x10)) {
    puVar4 = *(undefined8 **)(param_1 + 0x18);
    do {
      if (*param_2 == *(char *)*puVar4) {
        pcVar2 = (char *)*puVar4;
        if (pcVar2 != (char *)0x0) {
          uVar3 = 1 << (ulong)(param_3 & 0x1f);
          if ((param_4 & 1) == 0) {
            uVar3 = *(uint *)(pcVar2 + 4) & (uVar3 ^ 0xffffffff);
          }
          else {
            uVar3 = *(uint *)(pcVar2 + 4) | uVar3;
          }
          goto LAB_038a3f80;
        }
        break;
      }
      puVar4 = puVar4 + 1;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  if ((param_4 & 1) != 0) {
    pcVar2 = *(char **)(param_1 + 0x20);
    if (pcVar2 != (char *)0x0) {
      *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)pcVar2;
    }
    pcVar2[0] = '\0';
    pcVar2[1] = '\0';
    pcVar2[2] = '\0';
    pcVar2[3] = '\0';
    pcVar2[4] = '\0';
    pcVar2[5] = '\0';
    pcVar2[6] = '\0';
    pcVar2[7] = '\0';
    if (*(int *)(param_1 + 0x10) < *(int *)(param_1 + 0x14)) {
      *(char **)(*(long *)(param_1 + 0x18) + (long)*(int *)(param_1 + 0x10) * 8) = pcVar2;
      *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
      uVar3 = *(uint *)(pcVar2 + 4);
    }
    else {
      uVar3 = 0;
    }
    *pcVar2 = *param_2;
    uVar3 = uVar3 | 1 << (ulong)(param_3 & 0x1f);
LAB_038a3f80:
    *(uint *)(pcVar2 + 4) = uVar3;
  }
  return;
}


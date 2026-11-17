
void FUN_030522b0(long param_1,byte *param_2)

{
  char *pcVar1;
  byte bVar2;
  uint *puVar3;
  char *pcVar4;
  ulong uVar5;
  
  bVar2 = *param_2;
  if (bVar2 != 0) {
    puVar3 = *(uint **)(param_1 + 0x220);
    if (0 < (int)*puVar3) {
      pcVar4 = *(char **)(puVar3 + 2);
      uVar5 = 0;
      do {
        pcVar1 = pcVar4;
        if (*puVar3 <= uVar5) {
          pcVar1 = (char *)0x0;
        }
        if (bVar2 < 100) {
          if ((*pcVar1 == '\0') && (pcVar1[2] == bVar2)) goto LAB_03052348;
        }
        else if ((*pcVar1 != '\0') && ((uint)(byte)pcVar1[2] == bVar2 - 0x61)) {
LAB_03052348:
          (**(code **)(*(long *)(param_1 + 0x240) + 0x18))(param_1 + 0x240,uVar5 & 0xffffffff);
          *(int *)(param_1 + 600) = (int)uVar5;
          if (*(long *)(*(long *)(param_1 + 0x218) + 0x578) == 0) {
            return;
          }
          FUN_02bc30b0(param_1 + 0x240);
          return;
        }
        uVar5 = uVar5 + 1;
        pcVar4 = pcVar4 + 3;
      } while (*puVar3 != uVar5);
    }
  }
  return;
}


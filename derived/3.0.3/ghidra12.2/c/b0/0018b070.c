
void FUN_0018b070(long param_1,char *param_2,long param_3)

{
  char cVar1;
  size_t sVar2;
  undefined8 *puVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  code *pcVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  char local_24 [4];
  
  local_24[0] = '\0';
  pcVar6 = local_24;
  if (param_2 != (char *)0x0) {
    pcVar6 = param_2;
  }
  uVar9 = param_3 + 1;
  if (param_3 == -1) {
    uVar9 = 0xffffffffffffffff;
  }
  sVar2 = strlen(pcVar6);
  if (sVar2 + 1 <= uVar9) {
    uVar9 = sVar2 + 1;
  }
  pcVar4 = *(char **)(param_1 + 0x18);
  uVar10 = uVar9;
  if (uVar9 < 2) {
    uVar10 = 1;
  }
  if (*(ulong *)(param_1 + 0x20) < uVar10) {
    if ((pcVar4 != (char *)0x0) && (pcVar4 != (char *)(param_1 + 8))) {
      pcVar7 = *(code **)(pcVar4 + -0x14);
      if (pcVar7 == (code *)0x0) {
        free(pcVar4 + -0x14);
      }
      else {
        (*pcVar7)();
      }
    }
    if (DAT_04c57ea0 == (code *)0x0) {
      puVar3 = malloc((uVar10 + 0xb & 0xfffffffffffffff8) + 0x10);
    }
    else {
      puVar3 = (undefined8 *)(*DAT_04c57ea0)();
    }
    *(int *)(puVar3 + 2) = (int)uVar10;
    pcVar4 = (char *)((long)puVar3 + 0x14);
    *puVar3 = DAT_04c57ea8;
    *(char **)(param_1 + 0x18) = pcVar4;
    *(ulong *)(param_1 + 0x20) = uVar10;
  }
  pcVar5 = pcVar4;
  if (uVar9 < 2) {
    uVar10 = 1;
  }
  else {
    do {
      cVar1 = *pcVar6;
      if (cVar1 == '\0') {
        pcVar4 = pcVar5;
        if (uVar10 == 0) {
          return;
        }
        break;
      }
      uVar10 = uVar10 - 1;
      pcVar6 = pcVar6 + 1;
      pcVar4 = pcVar5 + 1;
      *pcVar5 = cVar1;
      pcVar5 = pcVar4;
    } while (uVar10 != 1);
  }
  uVar8 = uVar10 - 1;
  uVar9 = uVar10 & 3;
  if (uVar9 != 0) {
    uVar10 = uVar10 & 0xfffffffffffffffc;
    pcVar6 = pcVar4;
    do {
      uVar9 = uVar9 - 1;
      pcVar4 = pcVar6 + 1;
      *pcVar6 = '\0';
      pcVar6 = pcVar4;
    } while (uVar9 != 0);
  }
  if (2 < uVar8) {
    do {
      uVar10 = uVar10 - 4;
      pcVar4[0] = '\0';
      pcVar4[1] = '\0';
      pcVar4[2] = '\0';
      pcVar4[3] = '\0';
      pcVar4 = pcVar4 + 4;
    } while (uVar10 != 0);
  }
  return;
}


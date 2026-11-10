
void FUN_00189050(long param_1,undefined8 *param_2)

{
  char cVar1;
  undefined *puVar2;
  size_t sVar3;
  undefined8 *puVar4;
  char *pcVar5;
  char *pcVar6;
  ulong uVar7;
  ulong uVar8;
  char *pcVar9;
  ulong uVar10;
  
  pcVar9 = *(char **)(param_1 + 0x18);
  sVar3 = strlen(pcVar9);
  uVar10 = sVar3 + 1;
  if (DAT_04c57ea0 == (code *)0x0) {
    puVar4 = malloc((sVar3 + 0xc & 0xfffffffffffffff8) + 0x10);
  }
  else {
    puVar4 = (undefined8 *)(*DAT_04c57ea0)();
  }
  puVar2 = PTR_DAT_04bcba28;
  *(int *)(puVar4 + 2) = (int)uVar10;
  *puVar4 = *(undefined8 *)puVar2;
  pcVar5 = (char *)((long)puVar4 + 0x14);
  *param_2 = pcVar5;
  pcVar6 = pcVar5;
  if (uVar10 < 2) {
LAB_001890e0:
    if (uVar10 == 0) {
      return;
    }
  }
  else {
    do {
      cVar1 = *pcVar9;
      pcVar6 = pcVar5;
      if (cVar1 == '\0') goto LAB_001890e0;
      uVar10 = uVar10 - 1;
      pcVar9 = pcVar9 + 1;
      pcVar6 = pcVar5 + 1;
      *pcVar5 = cVar1;
      pcVar5 = pcVar6;
    } while (uVar10 != 1);
  }
  uVar7 = uVar10 - 1;
  uVar8 = uVar10 & 3;
  if (uVar8 != 0) {
    uVar10 = uVar10 & 0xfffffffffffffffc;
    pcVar9 = pcVar6;
    do {
      uVar8 = uVar8 - 1;
      pcVar6 = pcVar9 + 1;
      *pcVar9 = '\0';
      pcVar9 = pcVar6;
    } while (uVar8 != 0);
  }
  if (2 < uVar7) {
    do {
      uVar10 = uVar10 - 4;
      pcVar6[0] = '\0';
      pcVar6[1] = '\0';
      pcVar6[2] = '\0';
      pcVar6[3] = '\0';
      pcVar6 = pcVar6 + 4;
    } while (uVar10 != 0);
  }
  return;
}



void FUN_0018d9c0(undefined8 *param_1,char *param_2)

{
  char cVar1;
  undefined *puVar2;
  size_t sVar3;
  undefined8 *puVar4;
  char *pcVar5;
  char *pcVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  
  sVar3 = strlen(param_2);
  uVar9 = sVar3 + 1;
  if (DAT_04c57ea0 == (code *)0x0) {
    puVar4 = malloc((sVar3 + 0xc & 0xfffffffffffffff8) + 0x10);
  }
  else {
    puVar4 = (undefined8 *)(*DAT_04c57ea0)();
  }
  puVar2 = PTR_DAT_04bcba28;
  *(int *)(puVar4 + 2) = (int)uVar9;
  *puVar4 = *(undefined8 *)puVar2;
  pcVar6 = (char *)((long)puVar4 + 0x14);
  *param_1 = pcVar6;
  pcVar5 = pcVar6;
  if (uVar9 < 2) {
LAB_0018da50:
    if (uVar9 == 0) goto LAB_0018da8c;
  }
  else {
    do {
      cVar1 = *param_2;
      pcVar5 = pcVar6;
      if (cVar1 == '\0') goto LAB_0018da50;
      uVar9 = uVar9 - 1;
      param_2 = param_2 + 1;
      pcVar5 = pcVar6 + 1;
      *pcVar6 = cVar1;
      pcVar6 = pcVar5;
    } while (uVar9 != 1);
  }
  uVar7 = uVar9 - 1;
  uVar8 = uVar9 & 3;
  if (uVar8 != 0) {
    uVar9 = uVar9 & 0xfffffffffffffffc;
    pcVar6 = pcVar5;
    do {
      uVar8 = uVar8 - 1;
      pcVar5 = pcVar6 + 1;
      *pcVar6 = '\0';
      pcVar6 = pcVar5;
    } while (uVar8 != 0);
  }
  if (2 < uVar7) {
    do {
      uVar9 = uVar9 - 4;
      pcVar5[0] = '\0';
      pcVar5[1] = '\0';
      pcVar5[2] = '\0';
      pcVar5[3] = '\0';
      pcVar5 = pcVar5 + 4;
    } while (uVar9 != 0);
  }
LAB_0018da8c:
  *(undefined4 *)(param_1 + 1) = 4;
  return;
}


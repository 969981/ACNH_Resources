
ulonglong FUN_0018bf90(long param_1)

{
  char cVar1;
  undefined *puVar2;
  size_t sVar3;
  undefined8 *__ptr;
  char *__nptr;
  ulonglong uVar4;
  char *pcVar5;
  char *pcVar6;
  ulong uVar7;
  ulong uVar8;
  char *pcVar9;
  ulong uVar10;
  char *local_28;
  
  pcVar9 = *(char **)(param_1 + 0x18);
  sVar3 = strlen(pcVar9);
  uVar10 = sVar3 + 1;
  if (DAT_04c57ea0 == (code *)0x0) {
    __ptr = malloc((sVar3 + 0xc & 0xfffffffffffffff8) + 0x10);
  }
  else {
    __ptr = (undefined8 *)(*DAT_04c57ea0)();
  }
  puVar2 = PTR_DAT_04bcba28;
  *(int *)(__ptr + 2) = (int)uVar10;
  __nptr = (char *)((long)__ptr + 0x14);
  *__ptr = *(undefined8 *)puVar2;
  pcVar5 = __nptr;
  pcVar6 = __nptr;
  if (uVar10 < 2) {
LAB_0018c020:
    if (uVar10 == 0) goto LAB_0018c05c;
  }
  else {
    do {
      cVar1 = *pcVar9;
      pcVar6 = pcVar5;
      if (cVar1 == '\0') goto LAB_0018c020;
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
LAB_0018c05c:
  local_28 = (char *)0x0;
  uVar4 = strtoull(__nptr,&local_28,10);
  if ((code *)*__ptr == (code *)0x0) {
    free(__ptr);
    return uVar4;
  }
  (*(code *)*__ptr)(__ptr);
  return uVar4;
}


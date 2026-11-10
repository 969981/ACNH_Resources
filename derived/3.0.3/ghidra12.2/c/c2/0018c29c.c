
void FUN_0018c29c(long *param_1,char *param_2,ulong param_3)

{
  char *__dest;
  undefined *puVar1;
  undefined8 *puVar2;
  size_t sVar3;
  code *pcVar4;
  size_t __n;
  
  if (*param_1 != 0) {
    puVar2 = (undefined8 *)(*param_1 + -0x14);
    pcVar4 = (code *)*puVar2;
    if (pcVar4 == (code *)0x0) {
      free(puVar2);
    }
    else {
      (*pcVar4)();
    }
  }
  sVar3 = strlen(param_2);
  param_1[1] = sVar3 + 1;
  if (DAT_04c57ea0 == (code *)0x0) {
    puVar2 = malloc((sVar3 + 0xc & 0xfffffffffffffff8) + 0x10);
  }
  else {
    puVar2 = (undefined8 *)(*DAT_04c57ea0)();
  }
  puVar1 = PTR_DAT_04bcba28;
  __n = param_1[1];
  *(int *)(puVar2 + 2) = (int)(sVar3 + 1);
  __dest = (char *)((long)puVar2 + 0x14);
  *param_1 = (long)__dest;
  *puVar2 = *(undefined8 *)puVar1;
  strncpy(__dest,param_2,__n);
  __dest[__n - 1] = '\0';
  if ((param_3 & 1) != 0) {
    *(undefined1 *)(param_1[1] + *param_1 + -1) = 0;
  }
  return;
}


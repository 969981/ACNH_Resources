
long FUN_0018c5f0(long param_1,ulong param_2)

{
  char cVar1;
  undefined *puVar2;
  int iVar3;
  undefined8 *puVar4;
  char *__format;
  void *__src;
  long lVar5;
  ulong uVar6;
  
  uVar6 = *(ulong *)(param_1 + 0x10);
  __src = *(void **)(param_1 + 8);
  lVar5 = *(long *)(param_1 + 0x18) - (long)__src;
  if (uVar6 < lVar5 + 0x20U) {
    do {
      uVar6 = uVar6 + (uVar6 >> 1);
    } while (uVar6 < lVar5 + 0x20U);
    if (DAT_04c57ea0 == (code *)0x0) {
      puVar4 = malloc((uVar6 + 0xb & 0xfffffffffffffff8) + 0x10);
    }
    else {
      puVar4 = (undefined8 *)(*DAT_04c57ea0)();
    }
    puVar2 = PTR_DAT_04bcba28;
    *(int *)(puVar4 + 2) = (int)uVar6;
    *puVar4 = *(undefined8 *)puVar2;
    *(void **)(param_1 + 8) = (void *)((long)puVar4 + 0x14);
    *(ulong *)(param_1 + 0x10) = uVar6;
    memcpy((void *)((long)puVar4 + 0x14),__src,lVar5 + 1);
    *(long *)(param_1 + 0x18) = *(long *)(param_1 + 8) + lVar5;
    if ((void *)(param_1 + 0x20) != __src) {
      puVar4 = (undefined8 *)((long)__src + -0x14);
      if ((code *)*puVar4 == (code *)0x0) {
        free(puVar4);
        cVar1 = *(char *)(param_1 + 0x120);
        goto joined_r0x0018c6f8;
      }
      (*(code *)*puVar4)(puVar4);
    }
  }
  cVar1 = *(char *)(param_1 + 0x120);
joined_r0x0018c6f8:
  if (cVar1 == '\0') {
    __format = "%u";
  }
  else {
    if (*(char *)(param_1 + 0x121) != '\0') {
      strcat(*(char **)(param_1 + 0x18),"0x");
      *(long *)(param_1 + 0x18) = *(long *)(param_1 + 0x18) + 2;
    }
    __format = "%x";
    if (*(char *)(param_1 + 0x123) != '\0') {
      __format = "%08x";
    }
  }
  iVar3 = snprintf(*(char **)(param_1 + 0x18),0x20,__format,param_2 & 0xffffffff);
  *(long *)(param_1 + 0x18) = *(long *)(param_1 + 0x18) + (long)iVar3;
  return param_1;
}


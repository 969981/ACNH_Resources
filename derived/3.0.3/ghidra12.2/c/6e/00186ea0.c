
long FUN_00186ea0(long param_1,char *param_2)

{
  size_t sVar1;
  ulong uVar2;
  undefined *puVar3;
  size_t sVar4;
  undefined8 *puVar5;
  void *pvVar6;
  long lVar7;
  ulong uVar8;
  
  if (param_2 == (char *)0x0) {
    param_2 = "(null)";
    sVar4 = strlen("(null)");
    uVar8 = *(ulong *)(param_1 + 0x10);
    pvVar6 = *(void **)(param_1 + 8);
    lVar7 = *(long *)(param_1 + 0x18) - (long)pvVar6;
    sVar1 = lVar7 + 1;
    uVar2 = sVar1 + sVar4;
    if (uVar8 < uVar2) {
      do {
        uVar8 = uVar8 + (uVar8 >> 1);
      } while (uVar8 < uVar2);
      if (DAT_04c57ea0 == (code *)0x0) {
        puVar5 = malloc((uVar8 + 0xb & 0xfffffffffffffff8) + 0x10);
      }
      else {
        puVar5 = (undefined8 *)(*DAT_04c57ea0)();
      }
      puVar3 = PTR_DAT_04bcba28;
      *(int *)(puVar5 + 2) = (int)uVar8;
      *puVar5 = *(undefined8 *)puVar3;
      *(void **)(param_1 + 8) = (void *)((long)puVar5 + 0x14);
      *(ulong *)(param_1 + 0x10) = uVar8;
      memcpy((void *)((long)puVar5 + 0x14),pvVar6,sVar1);
      *(long *)(param_1 + 0x18) = *(long *)(param_1 + 8) + lVar7;
      if ((void *)(param_1 + 0x20) != pvVar6) {
        puVar5 = (undefined8 *)((long)pvVar6 + -0x14);
        if ((code *)*puVar5 == (code *)0x0) {
          free(puVar5);
        }
        else {
          (*(code *)*puVar5)(puVar5);
        }
      }
      param_2 = "(null)";
    }
  }
  else {
    sVar4 = strlen(param_2);
    uVar8 = *(ulong *)(param_1 + 0x10);
    pvVar6 = *(void **)(param_1 + 8);
    lVar7 = *(long *)(param_1 + 0x18) - (long)pvVar6;
    sVar1 = lVar7 + 1;
    uVar2 = sVar1 + sVar4;
    if (uVar8 < uVar2) {
      do {
        uVar8 = uVar8 + (uVar8 >> 1);
      } while (uVar8 < uVar2);
      if (DAT_04c57ea0 == (code *)0x0) {
        puVar5 = malloc((uVar8 + 0xb & 0xfffffffffffffff8) + 0x10);
      }
      else {
        puVar5 = (undefined8 *)(*DAT_04c57ea0)();
      }
      puVar3 = PTR_DAT_04bcba28;
      *(int *)(puVar5 + 2) = (int)uVar8;
      *puVar5 = *(undefined8 *)puVar3;
      *(void **)(param_1 + 8) = (void *)((long)puVar5 + 0x14);
      *(ulong *)(param_1 + 0x10) = uVar8;
      memcpy((void *)((long)puVar5 + 0x14),pvVar6,sVar1);
      *(long *)(param_1 + 0x18) = *(long *)(param_1 + 8) + lVar7;
      if ((void *)(param_1 + 0x20) != pvVar6) {
        puVar5 = (undefined8 *)((long)pvVar6 + -0x14);
        if ((code *)*puVar5 == (code *)0x0) {
          free(puVar5);
        }
        else {
          (*(code *)*puVar5)(puVar5);
        }
      }
    }
  }
  strcpy(*(char **)(param_1 + 0x18),param_2);
  *(size_t *)(param_1 + 0x18) = *(long *)(param_1 + 0x18) + sVar4;
  return param_1;
}


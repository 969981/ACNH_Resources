
void FUN_00332cc0(long param_1,long param_2,undefined8 param_3)

{
  uint *puVar1;
  bool bVar2;
  void *pvVar3;
  int iVar4;
  int *piVar5;
  long lVar6;
  ulong uVar7;
  
  if (*(uint *)(param_2 + 8) == 0xffffffff) {
    iVar4 = 0;
  }
  else {
    iVar4 = 0;
    piVar5 = (int *)(param_2 + (ulong)*(uint *)(param_2 + 8));
    do {
      puVar1 = (uint *)(piVar5 + 3);
      if (*piVar5 == 0x54455345) {
        iVar4 = iVar4 + 1;
      }
      piVar5 = (int *)((long)piVar5 + (ulong)*puVar1);
    } while (*puVar1 != 0xffffffff);
  }
  *(int *)(param_1 + 0x44) = iVar4;
  pvVar3 = (void *)(**(code **)(**(long **)(param_1 + 0x440) + 0x10))
                             (*(long **)(param_1 + 0x440),(long)iVar4 * 0x38,0x80);
  if (pvVar3 != (void *)0x0) {
    *(long *)(param_1 + 0x448) = *(long *)(param_1 + 0x448) + (long)iVar4 * 0x38;
    *(int *)(param_1 + 0x450) = *(int *)(param_1 + 0x450) + 1;
  }
  *(void **)(param_1 + 0x50) = pvVar3;
  memset(pvVar3,0,(long)*(int *)(param_1 + 0x44) * 0x38);
  lVar6 = (long)*(int *)(param_1 + 0x44) * 8;
  pvVar3 = (void *)(**(code **)(**(long **)(param_1 + 0x440) + 0x10))
                             (*(long **)(param_1 + 0x440),lVar6,0x80);
  if (pvVar3 != (void *)0x0) {
    *(long *)(param_1 + 0x448) = *(long *)(param_1 + 0x448) + lVar6;
    *(int *)(param_1 + 0x450) = *(int *)(param_1 + 0x450) + 1;
  }
  *(void **)(param_1 + 0x58) = pvVar3;
  memset(pvVar3,0,(long)*(int *)(param_1 + 0x44) << 3);
  if (*(uint *)(param_2 + 8) != 0xffffffff) {
    piVar5 = (int *)(param_2 + (ulong)*(uint *)(param_2 + 8));
    do {
      if (*piVar5 == 0x54455345) {
        uVar7 = 0;
        do {
          *(int **)(*(long *)(param_1 + 0x50) + uVar7 * 0x38 + 8) = piVar5;
          FUN_003335a0(param_1,*(long *)(param_1 + 0x50) + uVar7 * 0x38,param_3);
          puVar1 = (uint *)(piVar5 + 3);
          uVar7 = (ulong)((int)uVar7 + 1);
          bVar2 = piVar5 != (int *)0x0;
          piVar5 = (int *)((long)piVar5 + (ulong)*puVar1);
        } while (*puVar1 != 0xffffffff && bVar2);
        return;
      }
      puVar1 = (uint *)(piVar5 + 3);
      piVar5 = (int *)((long)piVar5 + (ulong)*puVar1);
    } while (*puVar1 != 0xffffffff);
  }
  return;
}


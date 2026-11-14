
void FUN_01947f50(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  ulong uVar5;
  float *pfVar6;
  long *plVar7;
  long lVar8;
  float fVar9;
  
  puVar3 = PTR_DAT_04bbe5c0;
  puVar2 = PTR_DAT_04bbe5b8;
  if (*(long *)(param_1 + 0xb0) != param_1 + 0xa8) {
    lVar8 = (long)*(int *)(param_1 + 0xbc);
    plVar7 = (long *)(*(long *)(param_1 + 0xb0) - lVar8);
    puVar1 = PTR_DAT_04bbe5c8 + 0x10;
    do {
      if (((*puVar3 & 1) == 0) && (iVar4 = __cxa_guard_acquire(puVar3), iVar4 != 0)) {
        *(undefined **)puVar2 = puVar1;
        __cxa_guard_release(puVar3);
      }
      if ((plVar7 != (long *)0x0) &&
         (uVar5 = (**(code **)(*plVar7 + 0x10))(plVar7,puVar2), (uVar5 & 1) != 0)) {
        lVar8 = plVar7[0x8c];
        if (lVar8 == 0) {
          return;
        }
        if (*(char *)((long)plVar7 + 0x495) == '\0') {
          *(undefined1 *)((long)plVar7 + 0x495) = 1;
          pfVar6 = (float *)(**(code **)(*(long *)(lVar8 + 0x1b0) + 0xf0))(lVar8 + 0x1b0);
          fVar9 = *pfVar6;
          pfVar6 = (float *)(**(code **)(*(long *)(plVar7[0x8c] + 0x1e0) + 0xf0))
                                      (plVar7[0x8c] + 0x1e0);
          *(int *)(plVar7 + 0x92) = (int)(fVar9 - *pfVar6);
          return;
        }
        return;
      }
      plVar7 = (long *)(*(long *)((long)plVar7 + lVar8 + 8) - lVar8);
    } while (plVar7 != (long *)((param_1 + 0xa8) - lVar8));
  }
  return;
}


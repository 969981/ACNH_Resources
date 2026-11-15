
void FUN_02228b48(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  long *plVar5;
  void *__ptr;
  
  *param_1 = (long)(PTR_DAT_04bc2cd8 + 0x10);
  puVar1 = PTR_DAT_04bb31d0;
  param_1[0x6c] = 0;
  param_1[0x66] = 0;
  param_1[0x60] = 0;
  puVar1 = puVar1 + 0x10;
  param_1[0x67] = (long)puVar1;
  param_1[0x61] = (long)puVar1;
  param_1[0x5b] = (long)puVar1;
  puVar2 = PTR_DAT_04bb3058;
  param_1[0x54] = (long)(PTR_DAT_04bb2fe8 + 0x10);
  uVar4 = (**(code **)(**(long **)(*(long *)puVar2 + 0x330) + 0x88))
                    (*(long **)(*(long *)puVar2 + 0x330),param_1[0x5a]);
  if (((uVar4 & 1) != 0) && (__ptr = (void *)param_1[0x5a], __ptr != (void *)0x0)) {
    if (*(long *)PTR_DAT_04bb2698 == 0) {
      free(__ptr);
    }
    else {
      plVar5 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,__ptr);
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 0x38))(plVar5,__ptr);
      }
    }
  }
  param_1[0x5a] = 0;
  param_1[0x4e] = (long)puVar1;
  param_1[0x53] = 0;
  param_1[0x48] = (long)puVar1;
  puVar2 = PTR_DAT_04bb62c0 + 0x10;
  param_1[0x4d] = 0;
  param_1[0x47] = 0;
  param_1[0x41] = 0;
  param_1[0x42] = (long)puVar2;
  param_1[0x3b] = 0;
  param_1[0x3c] = (long)puVar1;
  param_1[0x35] = 0;
  param_1[0x36] = (long)puVar2;
  puVar3 = PTR_DAT_04bb33a8;
  param_1[0x18] = (long)puVar1;
  param_1[0x2f] = 0;
  param_1[0x30] = (long)puVar2;
  param_1[0x29] = 0;
  param_1[0x2a] = (long)puVar1;
  param_1[0x23] = 0;
  param_1[0x24] = (long)(puVar3 + 0x10);
  param_1[0x1d] = 0;
  param_1[0x1e] = (long)(puVar3 + 0x10);
  return;
}


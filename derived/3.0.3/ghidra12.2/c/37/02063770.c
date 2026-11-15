
void FUN_02063770(undefined8 *param_1)

{
  undefined *puVar1;
  int *piVar2;
  undefined *puVar3;
  long *plVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  void *__ptr;
  uint uVar8;
  
  *param_1 = &PTR_FUN_04a6fc60;
  puVar1 = PTR_DAT_04bb2698;
  uVar8 = 0;
  do {
    piVar2 = (int *)((long)param_1 + ((long)((ulong)uVar8 << 0x20) >> 0x1b) + 0x178);
    if (*(long *)(piVar2 + 2) != 0) {
      if (0 < *piVar2) {
        lVar5 = 0;
        puVar6 = (undefined8 *)param_1[(long)(int)uVar8 * 4 + 0x31];
        do {
          puVar7 = *(undefined8 **)(*(long *)(piVar2 + 2) + lVar5 * 8);
          lVar5 = lVar5 + 1;
          *puVar7 = puVar6;
          param_1[(long)(int)uVar8 * 4 + 0x31] = puVar7;
          puVar6 = puVar7;
        } while (lVar5 < *piVar2);
      }
      __ptr = (void *)param_1[(long)(int)uVar8 * 4 + 0x32];
      *piVar2 = 0;
      if (__ptr != (void *)0x0) {
        if (*(long *)puVar1 == 0) {
          free(__ptr);
        }
        else {
          plVar4 = (long *)FUN_038cb610(*(long *)puVar1,__ptr);
          if (plVar4 != (long *)0x0) {
            (**(code **)(*plVar4 + 0x38))(plVar4,__ptr);
          }
        }
      }
      piVar2[7] = 0;
      piVar2[5] = 0;
      piVar2[6] = 0;
      piVar2[3] = 0;
      piVar2[4] = 0;
      piVar2[1] = 0;
      piVar2[2] = 0;
    }
    uVar8 = uVar8 + 1;
  } while (uVar8 != 0x15);
  puVar1 = PTR_DAT_04bc1558 + 0x10;
  param_1[0x1d] = puVar1;
  puVar3 = PTR_DAT_04bbc1a0;
  param_1[0xf] = puVar1;
  param_1[0x21] = puVar3 + 0x10;
  param_1[0x13] = puVar3 + 0x10;
  return;
}


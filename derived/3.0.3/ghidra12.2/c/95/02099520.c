
void FUN_02099520(long param_1)

{
  undefined *puVar1;
  int *piVar2;
  long lVar3;
  undefined *puVar4;
  long *plVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  void *__ptr;
  uint uVar10;
  
  puVar1 = PTR_DAT_04bb2698;
  uVar10 = 0;
  do {
    piVar2 = (int *)(param_1 + 0x180 + ((long)((ulong)uVar10 << 0x20) >> 0x1b));
    if (*(long *)(piVar2 + 2) != 0) {
      lVar3 = param_1 + 0x180 + (long)(int)uVar10 * 0x20;
      if (0 < *piVar2) {
        lVar6 = 0;
        puVar7 = (undefined8 *)(lVar3 + 0x10);
        puVar8 = (undefined8 *)*puVar7;
        do {
          puVar9 = *(undefined8 **)(*(long *)(piVar2 + 2) + lVar6 * 8);
          lVar6 = lVar6 + 1;
          *puVar9 = puVar8;
          *puVar7 = puVar9;
          puVar8 = puVar9;
        } while (lVar6 < *piVar2);
      }
      __ptr = *(void **)(lVar3 + 0x18);
      *piVar2 = 0;
      if (__ptr != (void *)0x0) {
        if (*(long *)puVar1 == 0) {
          free(__ptr);
        }
        else {
          plVar5 = (long *)FUN_038cb610(*(long *)puVar1,__ptr);
          if (plVar5 != (long *)0x0) {
            (**(code **)(*plVar5 + 0x38))(plVar5,__ptr);
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
    uVar10 = uVar10 + 1;
  } while (uVar10 != 0x15);
  puVar1 = PTR_DAT_04bc1558 + 0x10;
  *(undefined **)(param_1 + 0xf0) = puVar1;
  puVar4 = PTR_DAT_04bbc1a0;
  *(undefined **)(param_1 + 0x80) = puVar1;
  *(undefined **)(param_1 + 0x110) = puVar4 + 0x10;
  *(undefined **)(param_1 + 0xa0) = puVar4 + 0x10;
  return;
}



void FUN_02a74d50(long param_1)

{
  ulong uVar1;
  undefined *puVar2;
  long *plVar3;
  undefined4 uVar4;
  long lVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  undefined4 *puVar9;
  void *__ptr;
  
  puVar2 = PTR_DAT_04bb3238;
  uVar6 = 0;
  uVar4 = *(undefined4 *)PTR_DAT_04bb3238;
  do {
    uVar1 = (ulong)uVar6;
    uVar6 = uVar6 + 1;
    puVar9 = (undefined4 *)(param_1 + 0x10 + ((long)(uVar1 << 0x20) >> 0x1d));
    *puVar9 = uVar4;
    puVar9[1] = 0xffffffff;
  } while (uVar6 != 0x36);
  iVar7 = 0;
  do {
    puVar9 = (undefined4 *)(param_1 + 0x1c8 + (long)iVar7 * 0x14);
    iVar7 = iVar7 + 1;
    *puVar9 = uVar4;
    *(undefined2 *)(puVar9 + 1) = 0;
    *(undefined8 *)(puVar9 + 2) = 0;
    puVar9[4] = 0;
  } while (iVar7 != 0x24);
  uVar6 = *(uint *)(param_1 + 0x498);
  if (uVar6 != 0) {
    lVar5 = *(long *)(param_1 + 0x4a0);
    uVar8 = 0;
    do {
      *(undefined4 *)(lVar5 + ((long)((ulong)uVar8 << 0x20) >> 0x1c) + 8) = 0;
      uVar8 = uVar8 + 1;
    } while (uVar6 != uVar8);
    uVar4 = *(undefined4 *)puVar2;
  }
  __ptr = *(void **)(param_1 + 0x4b8);
  *(undefined4 *)(param_1 + 0x4c8) = uVar4;
  *(undefined4 *)(param_1 + 0x4cc) = uVar4;
  *(undefined8 *)(param_1 + 0x4b0) = 0;
  if (__ptr != (void *)0x0) {
    if (DAT_05ae7600 == 0) {
      free(__ptr);
    }
    else {
      plVar3 = (long *)FUN_038cb610(DAT_05ae7600,__ptr);
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x38))(plVar3,__ptr);
      }
    }
    *(undefined8 *)(param_1 + 0x4b8) = 0;
    *(undefined4 *)(param_1 + 0x4c0) = 0;
  }
  return;
}


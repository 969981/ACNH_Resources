
void FUN_03b683a0(char *param_1,long *param_2,uint param_3)

{
  undefined1 auVar1 [16];
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  void *pvVar5;
  ulong *puVar6;
  size_t sVar7;
  ulong *puVar8;
  long lVar9;
  ulong uVar10;
  
  if (*param_1 != '\0') {
    return;
  }
  *(uint *)(param_1 + 0x20) = param_3;
  puVar2 = PTR_DAT_04bb2698;
  sVar7 = (ulong)param_3 << 1;
  lVar9 = *(long *)PTR_DAT_04bb2698;
  if ((int)param_3 < 0) {
    sVar7 = 0xffffffffffffffff;
  }
  if (lVar9 == 0) {
    pvVar5 = malloc(sVar7);
  }
  else {
    plVar4 = param_2;
    if (param_2 == (long *)0x0) {
      lVar3 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      plVar4 = (long *)(lVar9 + 8);
      if (lVar3 != 0) {
        plVar4 = (long *)(lVar3 + 0xa8);
      }
      plVar4 = (long *)*plVar4;
      pvVar5 = (void *)0x0;
      if (plVar4 == (long *)0x0) goto LAB_03b68444;
    }
    pvVar5 = (void *)(**(code **)(*plVar4 + 0x30))(plVar4,sVar7,8);
  }
LAB_03b68444:
  *(void **)(param_1 + 0x28) = pvVar5;
  param_1[0x30] = '\0';
  param_1[0x31] = '\0';
  param_1[0x32] = '\0';
  param_1[0x33] = '\0';
  if (0 < *(int *)(param_1 + 0x20)) {
    lVar9 = 0;
    do {
      lVar3 = lVar9 + 1;
      *(short *)(*(long *)(param_1 + 0x28) + lVar9 * 2) = (short)lVar3;
      lVar9 = lVar3;
    } while (lVar3 < *(int *)(param_1 + 0x20));
    pvVar5 = *(void **)(param_1 + 0x28);
  }
  uVar10 = (ulong)(int)param_3;
  *(undefined2 *)((long)pvVar5 + (long)(int)(param_3 - 1) * 2) = 0xffff;
  auVar1._8_8_ = 0;
  auVar1._0_8_ = uVar10;
  *(uint *)(param_1 + 0x10) = param_3;
  *(uint *)(param_1 + 0x14) = param_3;
  lVar9 = *(long *)puVar2;
  sVar7 = (uVar10 + (long)(int)param_3 * 8) * 0x20 | 8;
  if (SUB168(auVar1 * ZEXT816(0x120),8) != 0) {
    sVar7 = 0xffffffffffffffff;
  }
  if (lVar9 == 0) {
    puVar6 = malloc(sVar7);
  }
  else {
    if (param_2 == (long *)0x0) {
      lVar3 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      param_2 = (long *)(lVar9 + 8);
      if (lVar3 != 0) {
        param_2 = (long *)(lVar3 + 0xa8);
      }
      param_2 = (long *)*param_2;
    }
    puVar6 = (ulong *)(**(code **)(*param_2 + 0x30))(param_2,sVar7,0x20);
  }
  *puVar6 = uVar10;
  if (param_3 != 0) {
    lVar9 = uVar10 * 0x120;
    puVar8 = puVar6 + 1;
    do {
      FUN_03b612d0(puVar8);
      puVar8 = puVar8 + 0x24;
      lVar9 = lVar9 + -0x120;
    } while (lVar9 != 0);
  }
  *(ulong **)(param_1 + 8) = puVar6 + 1;
  *param_1 = '\x01';
  return;
}


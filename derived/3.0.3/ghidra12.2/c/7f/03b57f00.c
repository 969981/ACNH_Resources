
void FUN_03b57f00(long param_1,long *param_2,uint param_3)

{
  undefined8 *puVar1;
  undefined1 auVar2 [16];
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  void *pvVar6;
  undefined4 *puVar7;
  size_t sVar8;
  undefined4 *puVar9;
  long lVar10;
  
  if (*(char *)(param_1 + 0x40) != '\0') {
    return;
  }
  if (*(char *)(param_1 + 8) != '\0') goto LAB_03b580dc;
  *(uint *)(param_1 + 0x28) = param_3;
  puVar3 = PTR_DAT_04bb2698;
  sVar8 = (ulong)param_3 << 1;
  lVar10 = *(long *)PTR_DAT_04bb2698;
  if ((int)param_3 < 0) {
    sVar8 = 0xffffffffffffffff;
  }
  if (lVar10 == 0) {
    pvVar6 = malloc(sVar8);
  }
  else {
    plVar5 = param_2;
    if (param_2 == (long *)0x0) {
      lVar4 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      plVar5 = (long *)(lVar10 + 8);
      if (lVar4 != 0) {
        plVar5 = (long *)(lVar4 + 0xa8);
      }
      plVar5 = (long *)*plVar5;
      pvVar6 = (void *)0x0;
      if (plVar5 == (long *)0x0) goto LAB_03b57fac;
    }
    pvVar6 = (void *)(**(code **)(*plVar5 + 0x30))(plVar5,sVar8,8);
  }
LAB_03b57fac:
  *(void **)(param_1 + 0x30) = pvVar6;
  *(undefined4 *)(param_1 + 0x38) = 0;
  if (0 < *(int *)(param_1 + 0x28)) {
    lVar10 = 0;
    do {
      lVar4 = lVar10 + 1;
      *(short *)(*(long *)(param_1 + 0x30) + lVar10 * 2) = (short)lVar4;
      lVar10 = lVar4;
    } while (lVar4 < *(int *)(param_1 + 0x28));
    pvVar6 = *(void **)(param_1 + 0x30);
  }
  *(undefined2 *)((long)pvVar6 + (long)(int)param_3 * 2 + -2) = 0xffff;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = (long)(int)param_3;
  *(uint *)(param_1 + 0x18) = param_3;
  *(uint *)(param_1 + 0x1c) = param_3;
  lVar10 = *(long *)puVar3;
  sVar8 = ((long)(int)param_3 + (long)(int)param_3 * 8) * 8;
  if (SUB168(auVar2 * ZEXT816(0x48),8) != 0) {
    sVar8 = 0xffffffffffffffff;
  }
  if (lVar10 == 0) {
    puVar7 = malloc(sVar8);
  }
  else {
    if (param_2 == (long *)0x0) {
      lVar4 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      puVar1 = (undefined8 *)(lVar10 + 8);
      if (lVar4 != 0) {
        puVar1 = (undefined8 *)(lVar4 + 0xa8);
      }
      param_2 = (long *)*puVar1;
      if (param_2 == (long *)0x0) {
        puVar7 = (undefined4 *)0x0;
        goto joined_r0x03b580fc;
      }
    }
    puVar7 = (undefined4 *)(**(code **)(*param_2 + 0x30))(param_2,sVar8,0x20);
  }
joined_r0x03b580fc:
  if (param_3 != 0) {
    puVar9 = puVar7;
    do {
      *puVar9 = 0;
      *(undefined1 *)(puVar9 + 2) = 0;
      *(undefined8 *)(puVar9 + 0xe) = 0;
      *(undefined2 *)(puVar9 + 0x10) = 0;
      *(undefined2 *)(puVar9 + 0xc) = 0;
      *(undefined1 *)((long)puVar9 + 0x42) = 1;
      *(undefined2 *)(puVar9 + 0x11) = 0xffff;
      *(undefined8 *)(puVar9 + 4) = 0;
      *(undefined8 *)(puVar9 + 6) = 0;
      *(undefined8 *)(puVar9 + 8) = 0;
      *(undefined8 *)(puVar9 + 10) = 0;
      puVar9 = puVar9 + 0x12;
    } while (puVar9 != puVar7 + (long)(int)param_3 * 0x12);
  }
  *(undefined4 **)(param_1 + 0x10) = puVar7;
  *(undefined1 *)(param_1 + 8) = 1;
LAB_03b580dc:
  *(undefined1 *)(param_1 + 0x40) = 1;
  return;
}


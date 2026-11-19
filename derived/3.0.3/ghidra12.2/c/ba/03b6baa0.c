
void FUN_03b6baa0(long param_1,long *param_2,uint param_3)

{
  undefined8 *puVar1;
  undefined1 auVar2 [16];
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  void *pvVar6;
  size_t sVar7;
  long lVar8;
  
  if (*(char *)(param_1 + 8) != '\0') {
    return;
  }
  if (*(char *)(param_1 + 0x10) != '\0') goto LAB_03b6bc34;
  *(uint *)(param_1 + 0x30) = param_3;
  puVar3 = PTR_DAT_04bb2698;
  sVar7 = (ulong)param_3 << 1;
  lVar8 = *(long *)PTR_DAT_04bb2698;
  if ((int)param_3 < 0) {
    sVar7 = 0xffffffffffffffff;
  }
  if (lVar8 == 0) {
    pvVar6 = malloc(sVar7);
  }
  else {
    plVar5 = param_2;
    if (param_2 == (long *)0x0) {
      lVar4 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      plVar5 = (long *)(lVar8 + 8);
      if (lVar4 != 0) {
        plVar5 = (long *)(lVar4 + 0xa8);
      }
      plVar5 = (long *)*plVar5;
      pvVar6 = (void *)0x0;
      if (plVar5 == (long *)0x0) goto LAB_03b6bb4c;
    }
    pvVar6 = (void *)(**(code **)(*plVar5 + 0x30))(plVar5,sVar7,8);
  }
LAB_03b6bb4c:
  *(void **)(param_1 + 0x38) = pvVar6;
  *(undefined4 *)(param_1 + 0x40) = 0;
  if (0 < *(int *)(param_1 + 0x30)) {
    lVar8 = 0;
    do {
      lVar4 = lVar8 + 1;
      *(short *)(*(long *)(param_1 + 0x38) + lVar8 * 2) = (short)lVar4;
      lVar8 = lVar4;
    } while (lVar4 < *(int *)(param_1 + 0x30));
    pvVar6 = *(void **)(param_1 + 0x38);
  }
  *(undefined2 *)((long)pvVar6 + (long)(int)(param_3 - 1) * 2) = 0xffff;
  *(uint *)(param_1 + 0x14) = param_3;
  *(undefined4 *)(param_1 + 0x18) = 0;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = (long)(int)param_3;
  lVar8 = *(long *)puVar3;
  sVar7 = ((long)(int)param_3 + (long)(int)param_3 * 4) * 0x10;
  if (SUB168(auVar2 * ZEXT816(0x50),8) != 0) {
    sVar7 = 0xffffffffffffffff;
  }
  if (lVar8 == 0) {
    pvVar6 = malloc(sVar7);
  }
  else {
    if (param_2 == (long *)0x0) {
      lVar4 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      puVar1 = (undefined8 *)(lVar8 + 8);
      if (lVar4 != 0) {
        puVar1 = (undefined8 *)(lVar4 + 0xa8);
      }
      param_2 = (long *)*puVar1;
      if (param_2 == (long *)0x0) {
        pvVar6 = (void *)0x0;
        goto LAB_03b6bc28;
      }
    }
    pvVar6 = (void *)(**(code **)(*param_2 + 0x30))(param_2,sVar7,8);
  }
LAB_03b6bc28:
  *(void **)(param_1 + 0x20) = pvVar6;
  *(undefined1 *)(param_1 + 0x10) = 1;
LAB_03b6bc34:
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined1 *)(param_1 + 8) = 1;
  return;
}


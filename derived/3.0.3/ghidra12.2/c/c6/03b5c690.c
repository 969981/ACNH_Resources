
void FUN_03b5c690(long param_1,long *param_2,uint param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  void *pvVar5;
  size_t sVar6;
  long lVar7;
  
  *(uint *)(param_1 + 0x44) = param_3;
  *(uint *)(param_1 + 0x40) = param_3;
  if (*(char *)(param_1 + 8) != '\0') {
    return;
  }
  *(uint *)(param_1 + 0x28) = param_3;
  puVar2 = PTR_DAT_04bb2698;
  sVar6 = (ulong)param_3 << 1;
  lVar7 = *(long *)PTR_DAT_04bb2698;
  if ((int)param_3 < 0) {
    sVar6 = 0xffffffffffffffff;
  }
  if (lVar7 == 0) {
    pvVar5 = malloc(sVar6);
  }
  else {
    plVar4 = param_2;
    if (param_2 == (long *)0x0) {
      lVar3 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      plVar4 = (long *)(lVar7 + 8);
      if (lVar3 != 0) {
        plVar4 = (long *)(lVar3 + 0xa8);
      }
      plVar4 = (long *)*plVar4;
      pvVar5 = (void *)0x0;
      if (plVar4 == (long *)0x0) goto LAB_03b5c744;
    }
    pvVar5 = (void *)(**(code **)(*plVar4 + 0x30))(plVar4,sVar6,8);
  }
LAB_03b5c744:
  *(void **)(param_1 + 0x30) = pvVar5;
  *(undefined4 *)(param_1 + 0x38) = 0;
  if (0 < *(int *)(param_1 + 0x28)) {
    lVar7 = 0;
    do {
      lVar3 = lVar7 + 1;
      *(short *)(*(long *)(param_1 + 0x30) + lVar7 * 2) = (short)lVar3;
      lVar7 = lVar3;
    } while (lVar3 < *(int *)(param_1 + 0x28));
    pvVar5 = *(void **)(param_1 + 0x30);
  }
  *(undefined2 *)((long)pvVar5 + (long)(int)(param_3 - 1) * 2) = 0xffff;
  *(uint *)(param_1 + 0xc) = param_3;
  *(undefined4 *)(param_1 + 0x10) = 0;
  sVar6 = (ulong)param_3 << 6;
  lVar7 = *(long *)puVar2;
  if ((int)param_3 < 0) {
    sVar6 = 0xffffffffffffffff;
  }
  if (lVar7 == 0) {
    pvVar5 = malloc(sVar6);
  }
  else {
    if (param_2 == (long *)0x0) {
      lVar3 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      puVar1 = (undefined8 *)(lVar7 + 8);
      if (lVar3 != 0) {
        puVar1 = (undefined8 *)(lVar3 + 0xa8);
      }
      param_2 = (long *)*puVar1;
      if (param_2 == (long *)0x0) {
        pvVar5 = (void *)0x0;
        goto LAB_03b5c808;
      }
    }
    pvVar5 = (void *)(**(code **)(*param_2 + 0x30))(param_2,sVar6,0x40);
  }
LAB_03b5c808:
  *(void **)(param_1 + 0x18) = pvVar5;
  *(undefined1 *)(param_1 + 8) = 1;
  return;
}


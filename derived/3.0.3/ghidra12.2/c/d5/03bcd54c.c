
undefined8 FUN_03bcd54c(long param_1)

{
  long lVar1;
  undefined *puVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  void *pvVar6;
  long lVar7;
  
  if (*(char *)(param_1 + 0x648) != '\0') {
    *(undefined1 *)(param_1 + 0x379) = 1;
  }
  lVar1 = param_1 + 0x10;
  FUN_003e4a70(lVar1);
  uVar3 = FUN_003b8e74(param_1 + 0x2b0);
  puVar2 = PTR_DAT_04bb2698;
  uVar3 = uVar3 & 0xffffffff;
  lVar7 = *(long *)PTR_DAT_04bb2698;
  if (lVar7 == 0) {
    pvVar6 = malloc(uVar3);
  }
  else {
    plVar4 = *(long **)(param_1 + 0x620);
    if (plVar4 == (long *)0x0) {
      lVar5 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      plVar4 = (long *)(lVar7 + 8);
      if (lVar5 != 0) {
        plVar4 = (long *)(lVar5 + 0xa8);
      }
      plVar4 = (long *)*plVar4;
      if (plVar4 == (long *)0x0) {
        pvVar6 = (void *)0x0;
        goto LAB_03bcd5f8;
      }
    }
    pvVar6 = (void *)(**(code **)(*plVar4 + 0x30))(plVar4,uVar3,0x1000);
  }
LAB_03bcd5f8:
  *(void **)(param_1 + 0x628) = pvVar6;
  FUN_003e4d10(lVar1,pvVar6,uVar3);
  if (*(char *)(param_1 + 0x638) == '\0') {
    return 1;
  }
  uVar3 = FUN_003b8e40(param_1 + 0x2b0);
  lVar7 = *(long *)puVar2;
  uVar3 = uVar3 & 0xffffffff;
  if (lVar7 == 0) {
    pvVar6 = malloc(uVar3);
  }
  else {
    plVar4 = *(long **)(param_1 + 0x620);
    if (plVar4 == (long *)0x0) {
      lVar5 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      plVar4 = (long *)(lVar7 + 8);
      if (lVar5 != 0) {
        plVar4 = (long *)(lVar5 + 0xa8);
      }
      plVar4 = (long *)*plVar4;
      if (plVar4 == (long *)0x0) {
        pvVar6 = (void *)0x0;
        goto LAB_03bcd67c;
      }
    }
    pvVar6 = (void *)(**(code **)(*plVar4 + 0x30))(plVar4,uVar3,0x1000);
  }
LAB_03bcd67c:
  *(void **)(param_1 + 0x630) = pvVar6;
  FUN_003e4de8(lVar1,pvVar6,uVar3);
  return 1;
}


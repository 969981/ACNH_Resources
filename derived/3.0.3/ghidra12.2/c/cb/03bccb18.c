
void FUN_03bccb18(long param_1,undefined8 param_2,long *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  void *pvVar8;
  long lVar9;
  undefined8 *puVar10;
  long lVar11;
  
  puVar3 = PTR_DAT_04bd2340;
  puVar2 = PTR_DAT_04bd2308;
  puVar10 = *(undefined8 **)(*(long *)PTR_DAT_04bd2340 + 8);
  if (((*PTR_DAT_04bd2308 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_04bd2308), iVar4 != 0))
  {
    *(undefined **)PTR_DAT_04bd2300 = PTR_DAT_04bd2310 + 0x10;
    __cxa_guard_release(PTR_DAT_04bd2308);
  }
  puVar1 = PTR_DAT_04bd2300;
  uVar5 = (**(code **)*puVar10)(puVar10,PTR_DAT_04bd2300);
  if ((uVar5 & 1) == 0) {
    puVar10 = (undefined8 *)0x0;
  }
  if (*(char *)(puVar10 + 0x33) == '\0') {
    return;
  }
  lVar11 = *(long *)PTR_DAT_04bb2698;
  if (lVar11 == 0) {
    pvVar8 = malloc(0x68);
  }
  else {
    plVar7 = param_3;
    if (param_3 == (long *)0x0) {
      lVar6 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar7 = (long *)(lVar11 + 8);
      if (lVar6 != 0) {
        plVar7 = (long *)(lVar6 + 0xa8);
      }
      plVar7 = (long *)*plVar7;
      if (plVar7 == (long *)0x0) {
        pvVar8 = (void *)0x0;
        goto LAB_03bccbf0;
      }
    }
    pvVar8 = (void *)(**(code **)(*plVar7 + 0x30))(plVar7,0x68,0x20);
  }
LAB_03bccbf0:
  FUN_03bce6f8(pvVar8,param_2,param_3);
  lVar11 = *(long *)puVar3;
  *(void **)(param_1 + 0x350) = pvVar8;
  lVar6 = *(long *)(param_1 + 0x348);
  puVar10 = *(undefined8 **)(lVar11 + 8);
  if (((*puVar2 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_04bd2308), iVar4 != 0)) {
    *(undefined **)puVar1 = PTR_DAT_04bd2310 + 0x10;
    __cxa_guard_release(PTR_DAT_04bd2308);
  }
  uVar5 = (**(code **)*puVar10)(puVar10,PTR_DAT_04bd2300);
  if ((uVar5 & 1) == 0) {
    puVar10 = (undefined8 *)0x0;
  }
  if (*(char *)(puVar10 + 0x33) != '\0') {
    *(void **)(lVar6 + 0x250) = pvVar8;
    lVar11 = FUN_03bcda68(lVar6);
    if (lVar11 != 0) {
      lVar9 = *(long *)(lVar6 + 0x250);
      *(long *)(lVar9 + 0x58) = lVar6;
      *(long *)(lVar9 + 0x60) = lVar11;
    }
  }
  return;
}


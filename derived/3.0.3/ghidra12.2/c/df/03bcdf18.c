
uint FUN_03bcdf18(long param_1,undefined8 param_2,long *param_3)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  void *pvVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  undefined8 *puVar8;
  long lVar9;
  
  puVar8 = *(undefined8 **)(*(long *)PTR_DAT_04bd2340 + 8);
  if (((*PTR_DAT_04bd2308 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_DAT_04bd2308), iVar2 != 0))
  {
    *(undefined **)PTR_DAT_04bd2300 = PTR_DAT_04bd2310 + 0x10;
    __cxa_guard_release(PTR_DAT_04bd2308);
  }
  uVar5 = (**(code **)*puVar8)(puVar8,PTR_DAT_04bd2300);
  if ((uVar5 & 1) == 0) {
    puVar8 = (undefined8 *)0x0;
  }
  if (*(char *)(puVar8 + 0x33) == '\0') {
    return 0;
  }
  lVar9 = *(long *)PTR_DAT_04bb2698;
  if (lVar9 == 0) {
    plVar7 = malloc(0x300);
  }
  else {
    plVar7 = param_3;
    if (param_3 == (long *)0x0) {
      lVar6 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar7 = (long *)(lVar9 + 8);
      if (lVar6 != 0) {
        plVar7 = (long *)(lVar6 + 0xa8);
      }
      plVar7 = (long *)*plVar7;
      if (plVar7 == (long *)0x0) {
        plVar7 = (long *)0x0;
        goto LAB_03bcddb8;
      }
    }
    plVar7 = (long *)(**(code **)(*plVar7 + 0x30))(plVar7,0x300,0x1000);
  }
LAB_03bcddb8:
  *plVar7 = (long)&PTR_LAB_04b7b068;
  *(undefined4 *)(plVar7 + 1) = 1;
  FUN_003e6124(plVar7 + 2);
  *plVar7 = (long)&PTR_LAB_04b7af58;
  plVar7[2] = (long)&PTR_LAB_04b7af98;
  *(long **)(param_1 + 0x240) = plVar7;
  (**(code **)(*plVar7 + 0x20))(plVar7,param_2);
  puVar8 = *(undefined8 **)(*(long *)PTR_DAT_04bd2340 + 8);
  if (((*PTR_DAT_04bd2308 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_DAT_04bd2308), iVar2 != 0))
  {
    *(undefined **)PTR_DAT_04bd2300 = PTR_DAT_04bd2310 + 0x10;
    __cxa_guard_release(PTR_DAT_04bd2308);
  }
  uVar5 = (**(code **)*puVar8)(puVar8,PTR_DAT_04bd2300);
  if ((uVar5 & 1) == 0) {
    puVar8 = (undefined8 *)0x0;
  }
  if (*(char *)(puVar8 + 0x33) == '\0') {
    return 0;
  }
  uVar3 = FUN_03bcda68(param_1);
  uVar5 = FUN_003e004c(param_1,uVar3);
  uVar5 = uVar5 & 0xffffffff;
  lVar9 = *(long *)PTR_DAT_04bb2698;
  if (lVar9 == 0) {
    pvVar4 = malloc(uVar5);
  }
  else {
    if (param_3 == (long *)0x0) {
      lVar6 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      puVar8 = (undefined8 *)(lVar9 + 8);
      if (lVar6 != 0) {
        puVar8 = (undefined8 *)(lVar6 + 0xa8);
      }
      param_3 = (long *)*puVar8;
      if (param_3 == (long *)0x0) {
        pvVar4 = (void *)0x0;
        goto LAB_03bcde9c;
      }
    }
    pvVar4 = (void *)(**(code **)(*param_3 + 0x30))(param_3,uVar5,0x1000);
  }
LAB_03bcde9c:
  *(void **)(param_1 + 0x248) = pvVar4;
  uVar3 = FUN_03bcda68(param_1);
  uVar1 = FUN_003e0070(param_1,uVar3,*(undefined8 *)(param_1 + 0x248),uVar5);
  *(undefined1 *)(param_1 + 0x260) = 1;
  return uVar1 & 1;
}


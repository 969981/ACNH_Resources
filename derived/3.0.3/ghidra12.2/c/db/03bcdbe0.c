
uint FUN_03bcdbe0(long param_1,long *param_2,long *param_3,byte param_4,byte param_5)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  void *pvVar7;
  undefined8 *puVar8;
  long lVar9;
  
  puVar8 = *(undefined8 **)(*(long *)PTR_DAT_04bd2340 + 8);
  if (((*PTR_DAT_04bd2308 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_DAT_04bd2308), iVar2 != 0))
  {
    *(undefined **)PTR_DAT_04bd2300 = PTR_DAT_04bd2310 + 0x10;
    __cxa_guard_release(PTR_DAT_04bd2308);
  }
  uVar3 = (**(code **)*puVar8)(puVar8,PTR_DAT_04bd2300);
  if ((uVar3 & 1) == 0) {
    puVar8 = (undefined8 *)0x0;
  }
  if (*(char *)(puVar8 + 0x33) == '\0') {
    return 0;
  }
  lVar9 = *(long *)PTR_DAT_04bb2698;
  if (lVar9 == 0) {
    plVar5 = malloc(0x650);
  }
  else {
    plVar5 = param_3;
    if (param_3 == (long *)0x0) {
      lVar4 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar5 = (long *)(lVar9 + 8);
      if (lVar4 != 0) {
        plVar5 = (long *)(lVar4 + 0xa8);
      }
      plVar5 = (long *)*plVar5;
      if (plVar5 == (long *)0x0) {
        plVar5 = (long *)0x0;
        goto LAB_03bcdcd0;
      }
    }
    plVar5 = (long *)(**(code **)(*plVar5 + 0x30))(plVar5,0x650,0x1000);
  }
LAB_03bcdcd0:
  *(undefined4 *)(plVar5 + 1) = 0;
  *plVar5 = (long)&PTR_LAB_04b7b068;
  FUN_003e4908(plVar5 + 2);
  plVar5[0xc4] = (long)param_3;
  *plVar5 = (long)&PTR_LAB_04b7aec0;
  plVar5[0xc5] = 0;
  plVar5[2] = (long)&PTR_LAB_04b7af00;
  plVar5[200] = (long)"/vol/content";
  plVar5[0xc6] = 0;
  *(undefined1 *)(plVar5 + 0xc9) = 0;
  *(long **)(param_1 + 0x240) = plVar5;
  *(byte *)(plVar5 + 199) = param_5 & 1;
  if (*(long *)(param_1 + 600) != 0) {
    plVar5[200] = *(long *)(param_1 + 600);
  }
  *(byte *)(plVar5 + 0xc9) = param_4 & 1;
  (**(code **)(*param_2 + 0x18))(param_2);
  (**(code **)(*plVar5 + 0x20))(plVar5,param_2[1]);
  puVar8 = *(undefined8 **)(*(long *)PTR_DAT_04bd2340 + 8);
  if (((*PTR_DAT_04bd2308 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_DAT_04bd2308), iVar2 != 0))
  {
    *(undefined **)PTR_DAT_04bd2300 = PTR_DAT_04bd2310 + 0x10;
    __cxa_guard_release(PTR_DAT_04bd2308);
  }
  uVar3 = (**(code **)*puVar8)(puVar8,PTR_DAT_04bd2300);
  if ((uVar3 & 1) == 0) {
    puVar8 = (undefined8 *)0x0;
  }
  if (*(char *)(puVar8 + 0x33) == '\0') {
    return 0;
  }
  uVar6 = FUN_03bcda68(param_1);
  uVar3 = FUN_003e004c(param_1,uVar6);
  uVar3 = uVar3 & 0xffffffff;
  lVar9 = *(long *)PTR_DAT_04bb2698;
  if (lVar9 == 0) {
    pvVar7 = malloc(uVar3);
  }
  else {
    if (param_3 == (long *)0x0) {
      lVar4 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      puVar8 = (undefined8 *)(lVar9 + 8);
      if (lVar4 != 0) {
        puVar8 = (undefined8 *)(lVar4 + 0xa8);
      }
      param_3 = (long *)*puVar8;
      if (param_3 == (long *)0x0) {
        pvVar7 = (void *)0x0;
        goto LAB_03bcde9c;
      }
    }
    pvVar7 = (void *)(**(code **)(*param_3 + 0x30))(param_3,uVar3,0x1000);
  }
LAB_03bcde9c:
  *(void **)(param_1 + 0x248) = pvVar7;
  uVar6 = FUN_03bcda68(param_1);
  uVar1 = FUN_003e0070(param_1,uVar6,*(undefined8 *)(param_1 + 0x248),uVar3);
  *(undefined1 *)(param_1 + 0x260) = 1;
  return uVar1 & 1;
}


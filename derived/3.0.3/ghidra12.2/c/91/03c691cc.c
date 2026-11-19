
void FUN_03c691cc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  undefined8 *puVar6;
  long lVar7;
  
  uVar3 = FUN_03c68d44();
  lVar7 = *(long *)PTR_DAT_04bb2698;
  if (lVar7 == 0) {
    puVar6 = malloc(0xa8);
  }
  else {
    lVar4 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    plVar5 = (long *)(lVar7 + 8);
    if (lVar4 != 0) {
      plVar5 = (long *)(lVar4 + 0xa8);
    }
    plVar5 = (long *)*plVar5;
    if (plVar5 == (long *)0x0) {
      puVar6 = (undefined8 *)0x0;
    }
    else {
      puVar6 = (undefined8 *)(**(code **)(*plVar5 + 0x30))(plVar5,0xa8,8);
    }
  }
  if ((*PTR_DAT_04bd3488 & 1) == 0) {
    iVar2 = __cxa_guard_acquire(PTR_DAT_04bd3488);
    puVar1 = PTR_DAT_04bd3480;
    if (iVar2 != 0) {
      FUN_03c75c20(PTR_DAT_04bd3480,0);
      FUN_001001d0(PTR_FUN_04bd2f60,puVar1,&__DT_FINI_ARRAY);
      __cxa_guard_release(PTR_DAT_04bd3488);
    }
  }
  FUN_03c67d50(puVar6,param_4,0);
  *(undefined1 *)(puVar6 + 0x10) = 0;
  puVar6[0xe] = 0;
  puVar6[0xf] = 0;
  *puVar6 = &PTR_LAB_04b83758;
  puVar1 = PTR_DAT_04bd3480;
  puVar6[0x14] = 0;
  puVar6[0xc] = 0;
  puVar6[0xd] = 0;
  puVar6[0x11] = puVar1;
  puVar6[0x12] = uVar3;
  lVar7 = *(long *)(param_1 + 0x18);
  lVar4 = *(long *)(lVar7 + 0x150);
  plVar5 = (long *)((long)*(int *)(lVar7 + 0x164) + (long)puVar6);
  *(long **)(lVar7 + 0x150) = plVar5;
  *plVar5 = lVar4;
  plVar5[1] = lVar7 + 0x150;
  if (lVar4 != 0) {
    *(long **)(lVar4 + 8) = plVar5;
  }
  *(int *)(lVar7 + 0x160) = *(int *)(lVar7 + 0x160) + 1;
  return;
}



void FUN_03c69330(long param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  
  lVar5 = *(long *)PTR_DAT_04bb2698;
  if (lVar5 == 0) {
    plVar4 = malloc(0xa0);
  }
  else {
    lVar3 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    plVar4 = (long *)(lVar5 + 8);
    if (lVar3 != 0) {
      plVar4 = (long *)(lVar3 + 0xa8);
    }
    plVar4 = (long *)*plVar4;
    if (plVar4 == (long *)0x0) {
      plVar4 = (long *)0x0;
    }
    else {
      plVar4 = (long *)(**(code **)(*plVar4 + 0x30))(plVar4,0xa0,8);
    }
  }
  if ((*PTR_DAT_04bd3308 & 1) == 0) {
    iVar2 = __cxa_guard_acquire(PTR_DAT_04bd3308);
    puVar1 = PTR_DAT_04bd3300;
    if (iVar2 != 0) {
      FUN_03c7d4c4(PTR_DAT_04bd3300,0);
      FUN_001001d0(PTR_FUN_04bd2f60,puVar1,&__DT_FINI_ARRAY);
      __cxa_guard_release(PTR_DAT_04bd3308);
    }
  }
  FUN_03c67d50(plVar4,param_3,0);
  *(undefined1 *)(plVar4 + 0x10) = 0;
  plVar4[0xe] = 0;
  plVar4[0xf] = 0;
  plVar4[0xc] = 0;
  plVar4[0xd] = 0;
  *plVar4 = (long)(PTR_DAT_04bd38a8 + 0x10);
  plVar4[0x11] = (long)PTR_DAT_04bd3300;
  plVar4[0x12] = param_2;
  *(undefined1 *)(plVar4 + 0x13) = 1;
  lVar5 = *(long *)(param_1 + 0x18);
  lVar3 = *(long *)(lVar5 + 0x150);
  plVar4 = (long *)((long)*(int *)(lVar5 + 0x164) + (long)plVar4);
  *(long **)(lVar5 + 0x150) = plVar4;
  *plVar4 = lVar3;
  plVar4[1] = lVar5 + 0x150;
  if (lVar3 != 0) {
    *(long **)(lVar3 + 8) = plVar4;
  }
  *(int *)(lVar5 + 0x160) = *(int *)(lVar5 + 0x160) + 1;
  return;
}


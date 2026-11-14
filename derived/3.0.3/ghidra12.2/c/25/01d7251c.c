
void FUN_01d7251c(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long *plVar6;
  void *__s;
  long lVar7;
  
  *param_1 = &PTR_LAB_04a5a040;
  param_1[1] = 0;
  param_1[2] = 0;
  puVar4 = PTR_DAT_04bb3350;
  puVar3 = PTR_DAT_04bb2698;
  lVar7 = *(long *)PTR_DAT_04bb2698;
  if (lVar7 == 0) {
    plVar6 = malloc(0x30);
  }
  else {
    lVar5 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    puVar1 = (undefined8 *)(lVar7 + 8);
    if (lVar5 != 0) {
      puVar1 = (undefined8 *)(lVar5 + 0xa8);
    }
    plVar6 = (long *)(**(code **)(*(long *)*puVar1 + 0x30))((long *)*puVar1,0x30,8);
  }
  *(undefined4 *)(plVar6 + 1) = 0xffffffff;
  *plVar6 = (long)(PTR_DAT_04bb5830 + 0x10);
  lVar7 = *(long *)puVar3;
  plVar6[2] = (long)(PTR_DAT_04bb5838 + 0x10);
  param_1[4] = plVar6;
  *(undefined1 *)(param_1 + 5) = 0xff;
  if (lVar7 == 0) {
    __s = malloc(0x77d0);
  }
  else {
    lVar5 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar4 + 0x68));
    plVar6 = (long *)(lVar7 + 8);
    if (lVar5 != 0) {
      plVar6 = (long *)(lVar5 + 0xa8);
    }
    plVar6 = (long *)*plVar6;
    if (plVar6 == (long *)0x0) {
      __s = (void *)0x0;
    }
    else {
      __s = (void *)(**(code **)(*plVar6 + 0x30))(plVar6,0x77d0,8);
    }
  }
  memset(__s,0,0x7780);
  *(undefined8 *)((long)__s + 0x7780) = 0;
  *(undefined8 *)((long)__s + 0x7788) = 0;
  *(undefined1 *)((long)__s + 0x7794) = 2;
  *(undefined4 *)((long)__s + 0x7790) = 0;
  *(undefined2 *)((long)__s + 0x77b4) = 0xffff;
  lVar7 = *(long *)puVar3;
  *(undefined8 *)((long)__s + 0x7798) = 0;
  *(undefined8 *)((long)__s + 0x77a0) = 0;
  *(undefined8 *)((long)__s + 0x77a8) = 0;
  *(undefined4 *)((long)__s + 0x77b0) = 0;
  *(undefined8 *)((long)__s + 0x77b6) = 0;
  *(undefined8 *)((long)__s + 0x77be) = 0;
  *(undefined8 *)((long)__s + 0x77c4) = 0;
  param_1[6] = __s;
  if (lVar7 == 0) {
    plVar6 = malloc(0x68);
  }
  else {
    lVar5 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar4 + 0x68));
    puVar1 = (undefined8 *)(lVar7 + 8);
    if (lVar5 != 0) {
      puVar1 = (undefined8 *)(lVar5 + 0xa8);
    }
    plVar6 = (long *)(**(code **)(*(long *)*puVar1 + 0x30))((long *)*puVar1,0x68,8);
  }
  *(undefined2 *)((long)plVar6 + 0xc) = 0xff00;
  puVar4 = PTR_DAT_04bc13f8;
  plVar6[6] = 0;
  plVar6[7] = -0x100000000;
  puVar3 = PTR_DAT_04bc1290;
  *(undefined4 *)(plVar6 + 1) = 0;
  *(undefined1 *)((long)plVar6 + 0xe) = 0;
  plVar6[2] = 0;
  plVar6[3] = 0;
  *(undefined2 *)(plVar6 + 8) = 0;
  *plVar6 = (long)(puVar4 + 0x10);
  plVar6[9] = (long)(puVar3 + 0x10);
  plVar6[4] = 0;
  plVar6[5] = 0;
  lVar7 = param_1[4];
  param_1[7] = plVar6;
  *(undefined **)(lVar7 + 0x10) = &DAT_04a5a0a0;
  *(undefined8 **)(lVar7 + 0x18) = param_1;
  *(undefined1 **)(lVar7 + 0x20) = &LAB_01d72780;
  *(undefined8 *)(lVar7 + 0x28) = 0;
  uVar2 = param_1[6];
  lVar7 = param_1[7];
  *(undefined4 *)(lVar7 + 0x28) = 0x77d0;
  *(undefined ***)(lVar7 + 0x48) = &PTR_LAB_04a5a0c8;
  *(undefined8 **)(lVar7 + 0x50) = param_1;
  *(undefined8 *)(lVar7 + 0x20) = uVar2;
  *(undefined1 **)(lVar7 + 0x58) = &LAB_01d72a34;
  *(undefined8 *)(lVar7 + 0x60) = 0;
  return;
}


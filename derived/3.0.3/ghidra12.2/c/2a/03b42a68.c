
void FUN_03b42a68(long param_1,long *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  undefined8 *puVar5;
  long lVar6;
  
  puVar1 = PTR_DAT_04bb2698;
  if (*(char *)(param_1 + 8) != '\0') {
    return;
  }
  lVar6 = *(long *)PTR_DAT_04bb2698;
  if (lVar6 == 0) {
    plVar4 = malloc(0x68);
  }
  else {
    plVar4 = param_2;
    if (param_2 == (long *)0x0) {
      lVar3 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      plVar4 = (long *)(lVar6 + 8);
      if (lVar3 != 0) {
        plVar4 = (long *)(lVar3 + 0xa8);
      }
      plVar4 = (long *)*plVar4;
      if (plVar4 == (long *)0x0) {
        plVar4 = (long *)0x0;
        goto LAB_03b42af4;
      }
    }
    plVar4 = (long *)(**(code **)(*plVar4 + 0x30))(plVar4,0x68,8);
  }
LAB_03b42af4:
  puVar2 = PTR_DAT_04bd1e98;
  *(undefined1 *)(plVar4 + 3) = 0;
  *(undefined8 *)((long)plVar4 + 0x1c) = 0;
  plVar4[1] = 0;
  plVar4[2] = 0x100000000;
  *(undefined4 *)((long)plVar4 + 0x24) = 0;
  *plVar4 = (long)(puVar2 + 0x10);
  FUN_038e18e4(plVar4 + 5);
  *(long **)(param_1 + 0x120) = plVar4;
  FUN_03b47908(plVar4,param_2);
  lVar6 = *(long *)puVar1;
  if (lVar6 == 0) {
    plVar4 = malloc(0x60);
  }
  else {
    plVar4 = param_2;
    if (param_2 == (long *)0x0) {
      lVar3 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      plVar4 = (long *)(lVar6 + 8);
      if (lVar3 != 0) {
        plVar4 = (long *)(lVar3 + 0xa8);
      }
      plVar4 = (long *)*plVar4;
    }
    plVar4 = (long *)(**(code **)(*plVar4 + 0x30))(plVar4,0x60,0x20);
  }
  *(long **)(param_1 + 0xe0) = plVar4;
  puVar2 = PTR_DAT_04bd1eb0;
  plVar4[8] = 0;
  *(undefined4 *)(plVar4 + 6) = 0;
  *(undefined8 *)((long)plVar4 + 0x34) = 0;
  *(undefined4 *)(plVar4 + 9) = 0;
  *plVar4 = (long)(puVar2 + 0x10);
  lVar6 = *(long *)puVar1;
  *(undefined4 *)(plVar4 + 1) = 0x3f800000;
  plVar4[4] = 0x3f800000;
  plVar4[5] = -0x100000000;
  *(undefined8 *)((long)plVar4 + 0xc) = 0xbf800000bf800000;
  *(undefined8 *)((long)plVar4 + 0x14) = 0xbf800000bf800000;
  *(undefined4 *)((long)plVar4 + 0x1c) = 0xbf800000;
  *(long **)(param_1 + 0xd8) = plVar4;
  if (lVar6 == 0) {
    plVar4 = malloc(0x18);
  }
  else {
    plVar4 = param_2;
    if (param_2 == (long *)0x0) {
      lVar3 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      plVar4 = (long *)(lVar6 + 8);
      if (lVar3 != 0) {
        plVar4 = (long *)(lVar3 + 0xa8);
      }
      plVar4 = (long *)*plVar4;
    }
    plVar4 = (long *)(**(code **)(*plVar4 + 0x30))(plVar4,0x18,8);
  }
  puVar2 = PTR_DAT_04bd20d0;
  plVar4[1] = (long)&DAT_3f8000003f800000;
  plVar4[2] = 0x3f800000;
  *plVar4 = (long)(puVar2 + 0x10);
  *(long **)(param_1 + 0x128) = plVar4;
  lVar6 = *(long *)puVar1;
  if (lVar6 == 0) {
    puVar5 = malloc(0x30);
  }
  else {
    plVar4 = param_2;
    if (param_2 == (long *)0x0) {
      lVar3 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      plVar4 = (long *)(lVar6 + 8);
      if (lVar3 != 0) {
        plVar4 = (long *)(lVar3 + 0xa8);
      }
      plVar4 = (long *)*plVar4;
    }
    puVar5 = (undefined8 *)(**(code **)(*plVar4 + 0x30))(plVar4,0x30,8);
  }
  *(undefined4 *)(puVar5 + 3) = 0;
  puVar5[1] = 0;
  puVar5[2] = 0;
  *puVar5 = 0;
  puVar5[4] = 0;
  puVar5[5] = 0xffffffff;
  *(undefined8 **)(param_1 + 0x1f8) = puVar5;
  puVar1 = PTR_DAT_04bc3ee8;
  FUN_03b3c120(*(undefined8 *)(*(long *)PTR_DAT_04bc3ee8 + 0x90),param_2,param_1 + 0x38);
  FUN_03b3c120(*(undefined8 *)(*(long *)puVar1 + 0x90),param_2,param_1 + 0x88);
  FUN_03b3c120(*(undefined8 *)(*(long *)puVar1 + 0x90),param_2,*(undefined8 *)(param_1 + 0xd8));
  FUN_03b42d30(param_1);
  *(undefined1 *)(param_1 + 8) = 1;
  return;
}


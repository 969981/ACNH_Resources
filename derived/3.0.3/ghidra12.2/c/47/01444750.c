
void FUN_01444750(long *param_1)

{
  void *pvVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  long lVar9;
  void *pvVar10;
  
  FUN_00705c50();
  puVar2 = PTR_DAT_04bbcbe0;
  *(undefined2 *)(param_1 + 0x53) = 0;
  puVar3 = PTR_DAT_04bd4738;
  *(undefined4 *)(param_1 + 0x54) = 0;
  param_1[0x50] = 0xffffffff;
  param_1[0x51] = 0xffffffff;
  param_1[0x52] = 0xffffffff;
  param_1[0x55] = 0;
  *param_1 = (long)(puVar2 + 0x10);
  *(undefined4 *)(param_1 + 0x56) = 0;
  param_1[0x57] = 0;
  *(undefined4 *)(param_1 + 0x58) = 0;
  *(undefined1 *)((long)param_1 + 0x2c4) = 0xff;
  param_1[0x4f] = (long)(puVar3 + 0x10);
  param_1[0x59] = 0xfffe;
  FUN_0277d4ac(param_1 + 0x59);
  param_1[0x60] = 0;
  param_1[0x5b] = 0x22;
  puVar2 = PTR_DAT_04bb3ea8;
  *(undefined4 *)((long)param_1 + 0x307) = 0;
  param_1[0x62] = (long)(puVar2 + 0x10);
  puVar2 = PTR_DAT_04bb3eb8;
  param_1[0x6d] = 0xffffffff;
  param_1[0x6e] = 0xffffffff;
  param_1[0x6f] = 0xffffffff;
  param_1[0x5a] = 0;
  *(undefined4 *)(param_1 + 0x5c) = 0;
  uVar5 = *(undefined8 *)puVar2;
  uVar6 = *(undefined8 *)(puVar2 + 8);
  param_1[0x5d] = 0;
  param_1[0x5e] = 0;
  param_1[0x5f] = 0;
  param_1[99] = 0;
  *(undefined4 *)(param_1 + 100) = 0;
  *(undefined4 *)(param_1 + 0x6a) = 0;
  param_1[0x69] = 0;
  param_1[0x6c] = (long)(puVar3 + 0x10);
  *(undefined2 *)(param_1 + 0x70) = 0;
  *(undefined4 *)(param_1 + 0x71) = 0;
  param_1[0x72] = 0;
  *(undefined4 *)(param_1 + 0x73) = 0;
  param_1[0x74] = 0;
  *(undefined4 *)(param_1 + 0x75) = 0;
  *(undefined1 *)((long)param_1 + 0x3ac) = 0xff;
  *(undefined4 *)(param_1 + 0x78) = 0x40;
  *(undefined8 *)((long)param_1 + 0x32c) = uVar6;
  uVar6 = *(undefined8 *)(puVar2 + 0x10);
  uVar7 = *(undefined8 *)(puVar2 + 0x18);
  uVar8 = *(undefined4 *)(puVar2 + 0x20);
  *(undefined8 *)((long)param_1 + 0x324) = uVar5;
  *(undefined4 *)((long)param_1 + 0x344) = uVar8;
  *(undefined8 *)((long)param_1 + 0x334) = uVar6;
  *(undefined8 *)((long)param_1 + 0x33c) = uVar7;
  *(undefined4 *)(param_1 + 0x6b) = 0x3dcccccd;
  pvVar1 = (void *)((long)param_1 + 0x3c4);
  *param_1 = (long)&PTR_LAB_0499ed70;
  param_1[0x77] = (long)pvVar1;
  lVar9 = DAT_051c49d8;
  puVar2 = PTR_DAT_04bb2f70 + 0x10;
  *(undefined1 *)((long)param_1 + 0x403) = 0;
  param_1[0x76] = (long)puVar2;
  (**(code **)(lVar9 + 0x18))(&DAT_051c49d8);
  pvVar10 = DAT_051c49e0;
  if (pvVar1 != DAT_051c49e0) {
    (**(code **)(DAT_051c49d8 + 0x18))(&DAT_051c49d8);
    lVar9 = 0;
    do {
      if (*(char *)((long)DAT_051c49e0 + lVar9) == '\0') goto LAB_01444930;
      if (*(char *)((long)DAT_051c49e0 + lVar9 + 1) == '\0') {
        lVar9 = lVar9 + 1;
        goto LAB_01444930;
      }
      if (*(char *)((long)DAT_051c49e0 + lVar9 + 2) == '\0') {
        lVar9 = lVar9 + 2;
        goto LAB_01444930;
      }
      lVar9 = lVar9 + 3;
    } while (lVar9 != 0x80001);
    lVar9 = 0;
LAB_01444930:
    iVar4 = (int)lVar9;
    if ((int)param_1[0x78] <= (int)lVar9) {
      iVar4 = (int)param_1[0x78] + -1;
    }
    memcpy(pvVar1,pvVar10,(long)iVar4);
    *(undefined1 *)((long)pvVar1 + (long)iVar4) = 0;
  }
  puVar3 = PTR_DAT_04bb2bc0;
  *(undefined4 *)(param_1 + 0x83) = 0x40;
  pvVar10 = (void *)((long)param_1 + 0x41c);
  param_1[0x81] = (long)puVar2;
  param_1[0x82] = (long)pvVar10;
  *(undefined1 *)((long)param_1 + 0x45b) = 0;
  lVar9 = DAT_051c4a30;
  puVar3 = puVar3 + 0x10;
  param_1[0x76] = (long)puVar3;
  (**(code **)(lVar9 + 0x18))(&DAT_051c4a30);
  pvVar1 = DAT_051c4a38;
  if (pvVar10 != DAT_051c4a38) {
    (**(code **)(DAT_051c4a30 + 0x18))(&DAT_051c4a30);
    lVar9 = 0;
    do {
      if (*(char *)((long)DAT_051c4a38 + lVar9) == '\0') goto LAB_014449fc;
      if (*(char *)((long)DAT_051c4a38 + lVar9 + 1) == '\0') {
        lVar9 = lVar9 + 1;
        goto LAB_014449fc;
      }
      if (*(char *)((long)DAT_051c4a38 + lVar9 + 2) == '\0') {
        lVar9 = lVar9 + 2;
        goto LAB_014449fc;
      }
      lVar9 = lVar9 + 3;
    } while (lVar9 != 0x80001);
    lVar9 = 0;
LAB_014449fc:
    iVar4 = (int)lVar9;
    if ((int)param_1[0x83] <= (int)lVar9) {
      iVar4 = (int)param_1[0x83] + -1;
    }
    memcpy(pvVar10,pvVar1,(long)iVar4);
    *(undefined1 *)((long)pvVar10 + (long)iVar4) = 0;
  }
  *(undefined1 *)((long)param_1 + 0x48c) = 0;
  param_1[0x90] = (long)param_1 + 0x48c;
  puVar2 = PTR_DAT_04bbb868;
  param_1[0x81] = (long)puVar3;
  *(undefined4 *)(param_1 + 0x8d) = 0;
  param_1[0x8c] = (long)(puVar2 + 0x10);
  puVar2 = PTR_DAT_04bbb848;
  *(undefined1 *)((long)param_1 + 0x4e4) = 0;
  *(undefined1 *)((long)param_1 + 0x4cb) = 0;
  param_1[0x8f] = (long)puVar3;
  *(undefined1 *)((long)param_1 + 0x523) = 0;
  param_1[0x9a] = (long)puVar3;
  param_1[0xa5] = 0;
  param_1[0x9b] = (long)param_1 + 0x4e4;
  *(undefined2 *)(param_1 + 0xa6) = 0xff;
  param_1[0xa7] = 0;
  *(undefined4 *)(param_1 + 0x75) = 0;
  param_1[0x8e] = (long)(puVar2 + 0x10);
  *(undefined4 *)(param_1 + 0x91) = 0x40;
  *(undefined4 *)(param_1 + 0x9c) = 0x40;
  return;
}


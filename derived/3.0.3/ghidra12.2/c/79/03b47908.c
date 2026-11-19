
void FUN_03b47908(long param_1,long *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  char cVar4;
  undefined8 *puVar5;
  long lVar6;
  long *plVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  long lVar10;
  
  lVar10 = *(long *)PTR_DAT_04bb2698;
  if (lVar10 == 0) {
    puVar8 = malloc(0x138);
  }
  else {
    plVar7 = param_2;
    if (param_2 == (long *)0x0) {
      lVar6 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar7 = (long *)(lVar10 + 8);
      if (lVar6 != 0) {
        plVar7 = (long *)(lVar6 + 0xa8);
      }
      plVar7 = (long *)*plVar7;
      if (plVar7 == (long *)0x0) {
        puVar8 = (undefined8 *)0x0;
        goto LAB_03b47988;
      }
    }
    puVar8 = (undefined8 *)(**(code **)(*plVar7 + 0x30))(plVar7,0x138,8);
  }
LAB_03b47988:
  puVar8[2] = 0;
  puVar3 = PTR_DAT_04bd1ea8;
  *(undefined4 *)(puVar8 + 3) = 0;
  puVar8[4] = 0;
  puVar8[5] = 0;
  puVar8[1] = puVar3 + 0x10;
  puVar3 = PTR_DAT_04bd2010;
  *puVar8 = &PTR_FUN_04b76318;
  puVar8[6] = 0x7f3f800000;
  puVar8[7] = 0;
  *(undefined1 *)(puVar8 + 0xb) = 0;
  puVar8[8] = 0;
  puVar8[9] = 0;
  *(undefined8 *)((long)puVar8 + 0x5c) = 0;
  *(undefined8 *)((long)puVar8 + 100) = 0;
  *(undefined4 *)((long)puVar8 + 0x6c) = 0;
  puVar8[10] = puVar3 + 0x10;
  puVar3 = PTR_DAT_04bd2018;
  *(undefined1 *)(puVar8 + 0x14) = 0;
  uVar9 = *(undefined8 *)puVar3;
  uVar1 = *(undefined8 *)(puVar3 + 8);
  *(undefined8 *)((long)puVar8 + 0xaa) = 0;
  *(undefined8 *)((long)puVar8 + 0xa4) = 0;
  *(undefined8 *)((long)puVar8 + 0xba) = 0;
  *(undefined8 *)((long)puVar8 + 0xb4) = 0;
  *(undefined8 *)((long)puVar8 + 0xca) = 0;
  *(undefined8 *)((long)puVar8 + 0xc4) = 0;
  *(undefined8 *)((long)puVar8 + 0xda) = 0;
  *(undefined8 *)((long)puVar8 + 0xd4) = 0;
  *(undefined8 *)((long)puVar8 + 0xea) = 0;
  *(undefined8 *)((long)puVar8 + 0xe4) = 0;
  *(undefined8 *)((long)puVar8 + 0xfa) = 0;
  *(undefined8 *)((long)puVar8 + 0xf4) = 0;
  *(undefined8 *)((long)puVar8 + 0x10a) = 0;
  *(undefined8 *)((long)puVar8 + 0x104) = 0;
  *(undefined8 *)((long)puVar8 + 0x11a) = 0;
  *(undefined8 *)((long)puVar8 + 0x114) = 0;
  puVar8[0x25] = 0;
  puVar8[0x26] = 0;
  puVar8[0xe] = uVar9;
  puVar8[0xf] = uVar1;
  uVar9 = *(undefined8 *)(puVar3 + 0x10);
  uVar1 = *(undefined8 *)(puVar3 + 0x18);
  uVar2 = *(undefined8 *)(puVar3 + 0x28);
  puVar8[0x12] = *(undefined8 *)(puVar3 + 0x20);
  puVar8[0x13] = uVar2;
  cVar4 = DAT_05aebc00;
  puVar8[0x10] = uVar9;
  puVar8[0x11] = uVar1;
  *(undefined8 **)(param_1 + 8) = puVar8;
  lVar10 = DAT_05ae7600;
  if (cVar4 != '\0') {
    if (*(char *)(puVar8 + 0xb) == '\0') {
      uVar9 = 0;
      if (*(long *)(*(long *)PTR_DAT_04bd1e70 + 0x180) != 0) {
        uVar9 = FUN_03b58110();
      }
      puVar8[0x26] = uVar9;
      *(undefined1 *)(puVar8 + 0xb) = 1;
    }
    return;
  }
  if (puVar8[7] != 0) {
    lVar6 = puVar8[8];
    goto joined_r0x03b468f0;
  }
  if (DAT_05ae7600 == 0) {
    puVar5 = malloc(0x30);
  }
  else {
    plVar7 = param_2;
    if (param_2 == (long *)0x0) {
      lVar6 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      plVar7 = (long *)(lVar10 + 8);
      if (lVar6 != 0) {
        plVar7 = (long *)(lVar6 + 0xa8);
      }
      plVar7 = (long *)*plVar7;
      puVar5 = (undefined8 *)0x0;
      if (plVar7 == (long *)0x0) goto LAB_03b468d4;
    }
    puVar5 = (undefined8 *)(**(code **)(*plVar7 + 0x30))(plVar7,0x30,8);
  }
LAB_03b468d4:
  *puVar5 = 0;
  puVar5[1] = 0;
  *(undefined2 *)(puVar5 + 2) = 0xff;
  puVar5[5] = 0;
  puVar5[3] = 0;
  puVar5[4] = 0;
  puVar8[7] = puVar5;
  lVar6 = puVar8[8];
  lVar10 = DAT_05ae7600;
joined_r0x03b468f0:
  if (lVar6 == 0) {
    DAT_05ae7600 = lVar10;
    if (lVar10 == 0) {
      plVar7 = malloc(0x18);
    }
    else {
      plVar7 = param_2;
      if (param_2 == (long *)0x0) {
        lVar6 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
        plVar7 = (long *)(lVar10 + 8);
        if (lVar6 != 0) {
          plVar7 = (long *)(lVar6 + 0xa8);
        }
        plVar7 = (long *)*plVar7;
      }
      plVar7 = (long *)(**(code **)(*plVar7 + 0x30))(plVar7,0x18,8);
    }
    puVar3 = PTR_DAT_04bd20d0;
    plVar7[1] = (long)&DAT_3f8000003f800000;
    plVar7[2] = 0x3f800000;
    *plVar7 = (long)(puVar3 + 0x10);
    puVar8[8] = plVar7;
    lVar6 = puVar8[9];
    lVar10 = DAT_05ae7600;
  }
  else {
    lVar6 = puVar8[9];
  }
  DAT_05ae7600 = lVar10;
  if (lVar6 == 0) {
    if (lVar10 == 0) {
      puVar5 = malloc(8);
    }
    else {
      if (param_2 == (long *)0x0) {
        lVar6 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
        param_2 = (long *)(lVar10 + 8);
        if (lVar6 != 0) {
          param_2 = (long *)(lVar6 + 0xa8);
        }
        param_2 = (long *)*param_2;
      }
      puVar5 = (undefined8 *)(**(code **)(*param_2 + 0x30))(param_2,8,8);
    }
    *puVar5 = 0;
    puVar8[9] = puVar5;
  }
  return;
}



void FUN_02f62168(long *param_1,undefined8 param_2,long param_3)

{
  long *plVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  void *pvVar6;
  long *plVar7;
  byte bVar8;
  undefined8 *puVar9;
  long *plVar10;
  long *plVar11;
  long lVar12;
  
  FUN_03868244();
  *(undefined2 *)(param_1 + 0x39) = 0;
  puVar2 = PTR_DAT_04bc5668;
  *(undefined4 *)(param_1 + 0x3a) = 0;
  puVar3 = PTR_DAT_04bd4738;
  param_1[0x37] = 0xffffffff;
  param_1[0x38] = 0xffffffff;
  param_1[0x3b] = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(undefined4 *)((long)param_1 + 0x1fc) = 0xffffffff;
  *(undefined2 *)(param_1 + 0x40) = 0;
  *(undefined1 *)((long)param_1 + 0x202) = 0;
  param_1[0x41] = 0;
  *param_1 = (long)(puVar2 + 0x10);
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  param_1[0x35] = (long)(puVar3 + 0x10);
  param_1[0x36] = 0xffffffff;
  *(undefined1 *)(param_1 + 0x3f) = 0xff;
  if (param_3 != 0) {
    bVar8 = *(byte *)(param_3 + 0xe);
    if (7 < bVar8) {
      bVar8 = 0xff;
    }
    *(byte *)(param_1 + 0x3f) = bVar8;
    *(undefined4 *)((long)param_1 + 0x1fc) = *(undefined4 *)(param_3 + 0x10);
  }
  param_1[0x3e] = -1;
  param_1[0x42] = 0;
  *param_1 = (long)&PTR_LAB_04ae5500;
  param_1[0x43] = 0;
  param_1[0x44] = 0x2ffffffff;
  *(undefined4 *)(param_1 + 0x45) = 0;
  *(undefined1 *)(param_1 + 0x4d) = 0;
  param_1[0x46] = 0;
  param_1[0x47] = 0;
  param_1[0x48] = 0;
  param_1[0x49] = 0;
  param_1[0x4a] = 0;
  param_1[0x4b] = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0;
  param_1[0x4e] = 0;
  param_1[0x4f] = 0;
  param_1[0x50] = 0;
  param_1[0x51] = 0;
  param_1[0x52] = 0;
  param_1[0x53] = 0;
  param_1[0x54] = 0;
  param_1[0x55] = 0;
  param_1[0x56] = 0;
  puVar2 = PTR_DAT_04bb2698;
  lVar12 = *(long *)PTR_DAT_04bb2698;
  param_1[0x57] = 0;
  param_1[0x58] = 0;
  puVar3 = PTR_DAT_04bb3350;
  param_1[0x59] = 0;
  if (lVar12 == 0) {
    pvVar6 = malloc(0x18);
joined_r0x02f622d0:
    if (pvVar6 != (void *)0x0) {
      param_1[0x59] = (long)pvVar6;
      param_1[0x58] = 0x300000000;
    }
  }
  else {
    lVar4 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar3 + 0x68));
    plVar5 = (long *)(lVar12 + 8);
    if (lVar4 != 0) {
      plVar5 = (long *)(lVar4 + 0xa8);
    }
    plVar5 = (long *)*plVar5;
    if (plVar5 != (long *)0x0) {
      pvVar6 = (void *)(**(code **)(*plVar5 + 0x30))(plVar5,0x18,8);
      goto joined_r0x02f622d0;
    }
  }
  lVar12 = *(long *)puVar2;
  plVar5 = param_1 + 0x54;
  param_1[0x5f] = 0;
  param_1[0x5e] = 0;
  param_1[0x5d] = 0;
  param_1[0x5c] = 0;
  param_1[0x5b] = 0;
  param_1[0x5a] = 0;
  if (lVar12 == 0) {
    pvVar6 = malloc(0x10);
joined_r0x02f6234c:
    if (pvVar6 != (void *)0x0) {
      param_1[0x5f] = (long)pvVar6;
      param_1[0x5e] = 0x200000000;
    }
  }
  else {
    lVar4 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar3 + 0x68));
    plVar7 = (long *)(lVar12 + 8);
    if (lVar4 != 0) {
      plVar7 = (long *)(lVar4 + 0xa8);
    }
    plVar7 = (long *)*plVar7;
    if (plVar7 != (long *)0x0) {
      pvVar6 = (void *)(**(code **)(*plVar7 + 0x30))(plVar7,0x10,8);
      goto joined_r0x02f6234c;
    }
  }
  lVar12 = param_1[0x54];
  plVar7 = param_1 + 0x4e;
  plVar1 = param_1 + 0x5a;
  param_1[0x60] = 0;
  *(undefined4 *)(param_1 + 0x61) = 0;
  param_1[0x62] = 0;
  *(undefined4 *)(param_1 + 99) = 0;
  param_1[100] = 0;
  *(undefined4 *)(param_1 + 0x65) = 0;
  param_1[0x42] = 0;
  param_1[0x66] = 0;
  param_1[0x67] = 0;
  param_1[0x68] = 0;
  *(undefined4 *)(param_1 + 0x69) = 0;
  if ((lVar12 == 0) || (*(long **)(lVar12 + 8) != plVar5)) {
    if (param_1[0x57] != 0) {
      *(long *)(param_1[0x57] + 0x10) = param_1[0x56];
    }
    lVar12 = param_1[0x56];
    if (lVar12 != 0) goto LAB_02f623e4;
    if (*plVar5 != 0) {
      *(long *)(*(long *)(*plVar5 + 8) + 0x18) = param_1[0x57];
    }
  }
  else {
    *(long *)(lVar12 + 8) = param_1[0x56];
    lVar12 = param_1[0x56];
    if (lVar12 != 0) {
LAB_02f623e4:
      *(long *)(lVar12 + 0x18) = param_1[0x57];
      param_1[0x56] = 0;
    }
  }
  param_1[0x57] = 0;
  param_1[0x54] = 0;
  if (param_1[0x4f] == 0) {
    plVar11 = param_1 + 0x57;
    param_1[0x4f] = (long)plVar5;
    plVar10 = plVar7;
  }
  else {
    plVar10 = *(long **)(param_1[0x4f] + 0x18);
    plVar10[2] = (long)plVar5;
    param_1[0x57] = (long)plVar10;
    plVar11 = (long *)(param_1[0x4f] + 0x18);
    plVar10 = (long *)*plVar10;
  }
  *plVar5 = (long)plVar10;
  *plVar11 = (long)plVar5;
  lVar12 = *plVar1;
  if ((lVar12 == 0) || (*(long **)(lVar12 + 8) != plVar1)) {
    if (param_1[0x5d] != 0) {
      *(long *)(param_1[0x5d] + 0x10) = param_1[0x5c];
    }
    lVar12 = param_1[0x5c];
    if (lVar12 == 0) {
      if (*plVar1 != 0) {
        *(long *)(*(long *)(*plVar1 + 8) + 0x18) = param_1[0x5d];
      }
      goto LAB_02f62490;
    }
  }
  else {
    *(long *)(lVar12 + 8) = param_1[0x5c];
    lVar12 = param_1[0x5c];
    if (lVar12 == 0) goto LAB_02f62490;
  }
  *(long *)(lVar12 + 0x18) = param_1[0x5d];
  param_1[0x5c] = 0;
LAB_02f62490:
  param_1[0x5d] = 0;
  param_1[0x5a] = 0;
  if (param_1[0x4f] == 0) {
    plVar5 = param_1 + 0x5d;
    param_1[0x4f] = (long)plVar1;
  }
  else {
    puVar9 = *(undefined8 **)(param_1[0x4f] + 0x18);
    puVar9[2] = plVar1;
    param_1[0x5d] = (long)puVar9;
    plVar7 = (long *)*puVar9;
    plVar5 = (long *)(param_1[0x4f] + 0x18);
  }
  *plVar1 = (long)plVar7;
  *plVar5 = (long)plVar1;
  return;
}


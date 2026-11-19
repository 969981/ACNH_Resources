
void FUN_0399c164(long param_1,long *param_2)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long *plVar7;
  void *pvVar8;
  long lVar9;
  
  *(undefined4 *)(param_1 + 0x48) = 1;
  puVar3 = PTR_DAT_04bb2698;
  lVar9 = *(long *)PTR_DAT_04bb2698;
  if (lVar9 == 0) {
    plVar7 = malloc(0xc0);
  }
  else {
    plVar7 = param_2;
    if (param_2 == (long *)0x0) {
      lVar6 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar7 = (long *)(lVar9 + 8);
      if (lVar6 != 0) {
        plVar7 = (long *)(lVar6 + 0xa8);
      }
      plVar7 = (long *)*plVar7;
      if (plVar7 == (long *)0x0) {
        plVar7 = (long *)0x0;
        goto LAB_0399c1f0;
      }
    }
    plVar7 = (long *)(**(code **)(*plVar7 + 0x30))(plVar7,0xc0,8);
  }
LAB_0399c1f0:
  plVar7[0x16] = 0;
  plVar7[0x17] = 0;
  plVar7[0x14] = 0;
  plVar7[0x15] = 0;
  plVar7[0x12] = 0;
  plVar7[0x13] = 0;
  plVar7[0x10] = 0;
  plVar7[0x11] = 0;
  plVar7[0xe] = 0;
  plVar7[0xf] = 0;
  plVar7[0xc] = 0;
  plVar7[0xd] = 0;
  plVar7[10] = 0;
  plVar7[0xb] = 0;
  plVar7[8] = 0;
  plVar7[9] = 0;
  plVar7[6] = 0;
  plVar7[7] = 0;
  plVar7[4] = 0;
  plVar7[5] = 0;
  plVar7[2] = 0;
  plVar7[3] = 0;
  puVar5 = PTR_DAT_04bd1410;
  puVar1 = PTR_DAT_04bd1410 + 0x10;
  plVar7[2] = 0;
  *plVar7 = (long)puVar1;
  plVar7[1] = 0;
  *(undefined4 *)(plVar7 + 3) = 0;
  *(undefined4 *)(plVar7 + 4) = 0;
  plVar7[5] = 0;
  *(undefined4 *)(plVar7 + 6) = 0;
  *(undefined4 *)(plVar7 + 7) = 0;
  plVar7[8] = 0;
  *(undefined4 *)(plVar7 + 9) = 0;
  plVar7[0x10] = 0;
  *(undefined2 *)((long)plVar7 + 0x7a) = 0;
  plVar7[0xe] = 0;
  plVar7[0xc] = 0;
  plVar7[0xd] = 0;
  puVar4 = PTR_DAT_04bd1030;
  puVar1 = PTR_DAT_04bd1030 + 0x10;
  *(undefined1 *)(plVar7 + 0xf) = 0;
  *(undefined4 *)(plVar7 + 0x17) = 0;
  plVar7[10] = (long)puVar1;
  plVar7[0xb] = 0;
  *(long **)(param_1 + 0x58) = plVar7;
  FUN_0399cb50(plVar7,1,param_2);
  *(undefined4 *)(plVar7 + 0x17) = 0;
  lVar9 = *(long *)puVar3;
  if (lVar9 == 0) {
    plVar7 = malloc(0xc0);
  }
  else {
    plVar7 = param_2;
    if (param_2 == (long *)0x0) {
      lVar6 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar7 = (long *)(lVar9 + 8);
      if (lVar6 != 0) {
        plVar7 = (long *)(lVar6 + 0xa8);
      }
      plVar7 = (long *)*plVar7;
      if (plVar7 == (long *)0x0) {
        plVar7 = (long *)0x0;
        goto LAB_0399c2ec;
      }
    }
    plVar7 = (long *)(**(code **)(*plVar7 + 0x30))(plVar7,0xc0,8);
  }
LAB_0399c2ec:
  *plVar7 = (long)(puVar5 + 0x10);
  plVar7[1] = 0;
  plVar7[0x16] = 0;
  plVar7[0x17] = 0;
  plVar7[0x14] = 0;
  plVar7[0x15] = 0;
  plVar7[0x12] = 0;
  plVar7[0x13] = 0;
  plVar7[0x10] = 0;
  plVar7[0x11] = 0;
  plVar7[0xe] = 0;
  plVar7[0xf] = 0;
  plVar7[0xc] = 0;
  plVar7[0xd] = 0;
  plVar7[10] = 0;
  plVar7[0xb] = 0;
  plVar7[8] = 0;
  plVar7[9] = 0;
  plVar7[6] = 0;
  plVar7[7] = 0;
  plVar7[4] = 0;
  plVar7[5] = 0;
  plVar7[2] = 0;
  plVar7[3] = 0;
  plVar7[2] = 0;
  *(undefined4 *)(plVar7 + 3) = 0;
  *(undefined4 *)(plVar7 + 4) = 0;
  plVar7[5] = 0;
  *(undefined4 *)(plVar7 + 6) = 0;
  *(undefined4 *)(plVar7 + 7) = 0;
  plVar7[8] = 0;
  *(undefined4 *)(plVar7 + 9) = 0;
  plVar7[0x10] = 0;
  *(undefined2 *)((long)plVar7 + 0x7a) = 0;
  plVar7[0xe] = 0;
  *(undefined1 *)(plVar7 + 0xf) = 0;
  *(undefined4 *)(plVar7 + 0x17) = 0;
  plVar7[0xc] = 0;
  plVar7[0xd] = 0;
  plVar7[10] = (long)(puVar4 + 0x10);
  plVar7[0xb] = 0;
  *(long **)(param_1 + 0x60) = plVar7;
  FUN_0399cb50(plVar7,1,param_2);
  *(undefined4 *)(plVar7 + 0x17) = 0;
  lVar9 = *(long *)puVar3;
  if (lVar9 == 0) {
    plVar7 = malloc(0xc0);
  }
  else {
    plVar7 = param_2;
    if (param_2 == (long *)0x0) {
      lVar6 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar7 = (long *)(lVar9 + 8);
      if (lVar6 != 0) {
        plVar7 = (long *)(lVar6 + 0xa8);
      }
      plVar7 = (long *)*plVar7;
      if (plVar7 == (long *)0x0) {
        plVar7 = (long *)0x0;
        goto LAB_0399c3d8;
      }
    }
    plVar7 = (long *)(**(code **)(*plVar7 + 0x30))(plVar7,0xc0,8);
  }
LAB_0399c3d8:
  *plVar7 = (long)(puVar5 + 0x10);
  plVar7[1] = 0;
  plVar7[0x16] = 0;
  plVar7[0x17] = 0;
  plVar7[0x14] = 0;
  plVar7[0x15] = 0;
  plVar7[0x12] = 0;
  plVar7[0x13] = 0;
  plVar7[0x10] = 0;
  plVar7[0x11] = 0;
  plVar7[0xe] = 0;
  plVar7[0xf] = 0;
  plVar7[0xc] = 0;
  plVar7[0xd] = 0;
  plVar7[10] = 0;
  plVar7[0xb] = 0;
  plVar7[8] = 0;
  plVar7[9] = 0;
  plVar7[6] = 0;
  plVar7[7] = 0;
  plVar7[4] = 0;
  plVar7[5] = 0;
  plVar7[2] = 0;
  plVar7[3] = 0;
  plVar7[2] = 0;
  *(undefined4 *)(plVar7 + 3) = 0;
  *(undefined4 *)(plVar7 + 4) = 0;
  plVar7[5] = 0;
  *(undefined4 *)(plVar7 + 6) = 0;
  *(undefined4 *)(plVar7 + 7) = 0;
  plVar7[8] = 0;
  *(undefined4 *)(plVar7 + 9) = 0;
  plVar7[0x10] = 0;
  *(undefined2 *)((long)plVar7 + 0x7a) = 0;
  plVar7[0xe] = 0;
  *(undefined1 *)(plVar7 + 0xf) = 0;
  *(undefined4 *)(plVar7 + 0x17) = 0;
  plVar7[0xc] = 0;
  plVar7[0xd] = 0;
  plVar7[10] = (long)(puVar4 + 0x10);
  plVar7[0xb] = 0;
  *(long **)(param_1 + 0x68) = plVar7;
  FUN_0399cb50(plVar7,1,param_2);
  lVar9 = *(long *)puVar3;
  *(undefined4 *)(plVar7 + 0x17) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  if (lVar9 == 0) {
    pvVar8 = malloc(0x1e0);
joined_r0x0399c54c:
    if (pvVar8 != (void *)0x0) {
      *(void **)(param_1 + 0x10) = pvVar8;
      *(undefined4 *)(param_1 + 0x18) = 0x14;
    }
  }
  else {
    plVar7 = param_2;
    if (param_2 != (long *)0x0) {
LAB_0399c4a8:
      pvVar8 = (void *)(**(code **)(*plVar7 + 0x30))(plVar7,0x1e0,8);
      goto joined_r0x0399c54c;
    }
    lVar6 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    plVar7 = (long *)(lVar9 + 8);
    if (lVar6 != 0) {
      plVar7 = (long *)(lVar6 + 0xa8);
    }
    plVar7 = (long *)*plVar7;
    if (plVar7 != (long *)0x0) goto LAB_0399c4a8;
  }
  lVar9 = *(long *)puVar3;
  *(undefined8 *)(param_1 + 0x1c) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  if (lVar9 == 0) {
    pvVar8 = malloc(0x1e0);
  }
  else {
    if (param_2 == (long *)0x0) {
      lVar6 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      puVar2 = (undefined8 *)(lVar9 + 8);
      if (lVar6 != 0) {
        puVar2 = (undefined8 *)(lVar6 + 0xa8);
      }
      param_2 = (long *)*puVar2;
      if (param_2 == (long *)0x0) goto LAB_0399c52c;
    }
    pvVar8 = (void *)(**(code **)(*param_2 + 0x30))(param_2,0x1e0,8);
  }
  if (pvVar8 != (void *)0x0) {
    *(void **)(param_1 + 0x30) = pvVar8;
    *(undefined4 *)(param_1 + 0x38) = 0x14;
  }
LAB_0399c52c:
  *(undefined8 *)(param_1 + 0x3c) = 0;
  return;
}


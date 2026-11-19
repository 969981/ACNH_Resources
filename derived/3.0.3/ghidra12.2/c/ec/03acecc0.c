
void FUN_03acecc0(uint *param_1,long *param_2)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  void *pvVar6;
  undefined4 *puVar7;
  uint uVar8;
  long lVar9;
  
  puVar3 = PTR_DAT_04bb3350;
  puVar2 = PTR_DAT_04bb2698;
  lVar9 = *(long *)PTR_DAT_04bb2698;
  if (lVar9 == 0) {
    pvVar6 = malloc(0x80);
joined_r0x03acf138:
    if (pvVar6 != (void *)0x0) {
      *(void **)(param_1 + 8) = pvVar6;
      param_1[6] = 0x10;
    }
  }
  else {
    plVar5 = param_2;
    if (param_2 != (long *)0x0) {
LAB_03aced24:
      pvVar6 = (void *)(**(code **)(*plVar5 + 0x30))(plVar5,0x80,8);
      goto joined_r0x03acf138;
    }
    lVar4 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    plVar5 = (long *)(lVar9 + 8);
    if (lVar4 != 0) {
      plVar5 = (long *)(lVar4 + 0xa8);
    }
    plVar5 = (long *)*plVar5;
    if (plVar5 != (long *)0x0) goto LAB_03aced24;
  }
  uVar8 = 0;
  do {
    lVar9 = *(long *)puVar2;
    if (lVar9 == 0) {
      puVar7 = malloc(0x18);
    }
    else {
      plVar5 = param_2;
      if (param_2 == (long *)0x0) {
        lVar4 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar3 + 0x68));
        plVar5 = (long *)(lVar9 + 8);
        if (lVar4 != 0) {
          plVar5 = (long *)(lVar4 + 0xa8);
        }
        plVar5 = (long *)*plVar5;
      }
      puVar7 = (undefined4 *)(**(code **)(*plVar5 + 0x30))(plVar5,0x18,8);
    }
    *puVar7 = 0;
    *(undefined8 *)(puVar7 + 2) = 0;
    puVar7[4] = 0;
    uVar1 = uVar8;
    if (param_1[6] <= uVar8) {
      uVar1 = 0;
    }
    *(undefined4 **)(*(long *)(param_1 + 8) + (ulong)uVar1 * 8) = puVar7;
    lVar9 = *(long *)puVar2;
    uVar1 = uVar8;
    if (param_1[6] <= uVar8) {
      uVar1 = 0;
    }
    puVar7 = *(undefined4 **)(*(long *)(param_1 + 8) + (ulong)uVar1 * 8);
    if (lVar9 == 0) {
      pvVar6 = malloc(0xc0);
joined_r0x03acee48:
      if (pvVar6 != (void *)0x0) {
        *puVar7 = 0x10;
        *(void **)(puVar7 + 2) = pvVar6;
      }
    }
    else {
      plVar5 = param_2;
      if (param_2 != (long *)0x0) {
LAB_03acee20:
        pvVar6 = (void *)(**(code **)(*plVar5 + 0x30))(plVar5,0xc0,0x20);
        goto joined_r0x03acee48;
      }
      lVar4 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar3 + 0x68));
      plVar5 = (long *)(lVar9 + 8);
      if (lVar4 != 0) {
        plVar5 = (long *)(lVar4 + 0xa8);
      }
      plVar5 = (long *)*plVar5;
      if (plVar5 != (long *)0x0) goto LAB_03acee20;
    }
    uVar8 = uVar8 + 1;
  } while (uVar8 != 0x10);
  lVar9 = *(long *)puVar2;
  if (lVar9 == 0) {
    pvVar6 = malloc(0x80);
joined_r0x03acf148:
    if (pvVar6 != (void *)0x0) {
      *(void **)(param_1 + 0xe) = pvVar6;
      param_1[0xc] = 0x10;
    }
  }
  else {
    plVar5 = param_2;
    if (param_2 != (long *)0x0) {
LAB_03acee8c:
      pvVar6 = (void *)(**(code **)(*plVar5 + 0x30))(plVar5,0x80,8);
      goto joined_r0x03acf148;
    }
    lVar4 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar3 + 0x68));
    plVar5 = (long *)(lVar9 + 8);
    if (lVar4 != 0) {
      plVar5 = (long *)(lVar4 + 0xa8);
    }
    plVar5 = (long *)*plVar5;
    if (plVar5 != (long *)0x0) goto LAB_03acee8c;
  }
  uVar8 = 0;
  do {
    lVar9 = *(long *)puVar2;
    if (lVar9 == 0) {
      puVar7 = malloc(0x18);
    }
    else {
      plVar5 = param_2;
      if (param_2 == (long *)0x0) {
        lVar4 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar3 + 0x68));
        plVar5 = (long *)(lVar9 + 8);
        if (lVar4 != 0) {
          plVar5 = (long *)(lVar4 + 0xa8);
        }
        plVar5 = (long *)*plVar5;
      }
      puVar7 = (undefined4 *)(**(code **)(*plVar5 + 0x30))(plVar5,0x18,8);
    }
    *puVar7 = 0;
    *(undefined8 *)(puVar7 + 2) = 0;
    puVar7[4] = 0;
    uVar1 = uVar8;
    if (param_1[0xc] <= uVar8) {
      uVar1 = 0;
    }
    *(undefined4 **)(*(long *)(param_1 + 0xe) + (ulong)uVar1 * 8) = puVar7;
    lVar9 = *(long *)puVar2;
    uVar1 = uVar8;
    if (param_1[0xc] <= uVar8) {
      uVar1 = 0;
    }
    puVar7 = *(undefined4 **)(*(long *)(param_1 + 0xe) + (ulong)uVar1 * 8);
    if (lVar9 == 0) {
      pvVar6 = malloc(0xc0);
joined_r0x03acefa8:
      if (pvVar6 != (void *)0x0) {
        *puVar7 = 0x10;
        *(void **)(puVar7 + 2) = pvVar6;
      }
    }
    else {
      plVar5 = param_2;
      if (param_2 != (long *)0x0) {
LAB_03acef84:
        pvVar6 = (void *)(**(code **)(*plVar5 + 0x30))(plVar5,0xc0,0x20);
        goto joined_r0x03acefa8;
      }
      lVar4 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar3 + 0x68));
      plVar5 = (long *)(lVar9 + 8);
      if (lVar4 != 0) {
        plVar5 = (long *)(lVar4 + 0xa8);
      }
      plVar5 = (long *)*plVar5;
      if (plVar5 != (long *)0x0) goto LAB_03acef84;
    }
    uVar8 = uVar8 + 1;
  } while (uVar8 != 0x10);
  lVar9 = *(long *)puVar2;
  if (lVar9 == 0) {
    pvVar6 = malloc(0x80);
  }
  else {
    plVar5 = param_2;
    if (param_2 == (long *)0x0) {
      lVar4 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar3 + 0x68));
      plVar5 = (long *)(lVar9 + 8);
      if (lVar4 != 0) {
        plVar5 = (long *)(lVar4 + 0xa8);
      }
      plVar5 = (long *)*plVar5;
      if (plVar5 == (long *)0x0) goto LAB_03acf010;
    }
    pvVar6 = (void *)(**(code **)(*plVar5 + 0x30))(plVar5,0x80,8);
  }
  if (pvVar6 != (void *)0x0) {
    *(void **)(param_1 + 2) = pvVar6;
    *param_1 = 0x10;
  }
LAB_03acf010:
  uVar8 = 0;
  do {
    lVar9 = *(long *)puVar2;
    if (lVar9 == 0) {
      puVar7 = malloc(0x18);
    }
    else {
      plVar5 = param_2;
      if (param_2 == (long *)0x0) {
        lVar4 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar3 + 0x68));
        plVar5 = (long *)(lVar9 + 8);
        if (lVar4 != 0) {
          plVar5 = (long *)(lVar4 + 0xa8);
        }
        plVar5 = (long *)*plVar5;
      }
      puVar7 = (undefined4 *)(**(code **)(*plVar5 + 0x30))(plVar5,0x18,8);
    }
    *puVar7 = 0;
    *(undefined8 *)(puVar7 + 2) = 0;
    puVar7[4] = 0;
    uVar1 = uVar8;
    if (*param_1 <= uVar8) {
      uVar1 = 0;
    }
    *(undefined4 **)(*(long *)(param_1 + 2) + (ulong)uVar1 * 8) = puVar7;
    lVar9 = *(long *)puVar2;
    uVar1 = uVar8;
    if (*param_1 <= uVar8) {
      uVar1 = 0;
    }
    puVar7 = *(undefined4 **)(*(long *)(param_1 + 2) + (ulong)uVar1 * 8);
    if (lVar9 == 0) {
      pvVar6 = malloc(0xc0);
joined_r0x03acf108:
      if (pvVar6 != (void *)0x0) {
        *puVar7 = 0x10;
        *(void **)(puVar7 + 2) = pvVar6;
      }
    }
    else {
      plVar5 = param_2;
      if (param_2 != (long *)0x0) {
LAB_03acf0e4:
        pvVar6 = (void *)(**(code **)(*plVar5 + 0x30))(plVar5,0xc0,0x20);
        goto joined_r0x03acf108;
      }
      lVar4 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar3 + 0x68));
      plVar5 = (long *)(lVar9 + 8);
      if (lVar4 != 0) {
        plVar5 = (long *)(lVar4 + 0xa8);
      }
      plVar5 = (long *)*plVar5;
      if (plVar5 != (long *)0x0) goto LAB_03acf0e4;
    }
    uVar8 = uVar8 + 1;
    if (uVar8 == 0x10) {
      return;
    }
  } while( true );
}


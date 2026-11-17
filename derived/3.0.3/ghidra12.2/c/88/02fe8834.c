
void FUN_02fe8834(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  void *pvVar5;
  
  if (*(long **)(param_1 + 0x18) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x18) + 8))();
  }
  *(undefined8 *)(param_1 + 0x18) = 0;
  FUN_02feb9a0(param_1 + 0x3328);
  FUN_02feb9a0(param_1 + 0x32b8);
  FUN_02feb9a0(param_1 + 0x3248);
  FUN_02feb9a0(param_1 + 0x31d8);
  FUN_02feb9a0(param_1 + 0x3168);
  FUN_02feb9a0(param_1 + 0x30f0);
  FUN_02feb9a0(param_1 + 0x3080);
  FUN_02feb9a0(param_1 + 0x3010);
  FUN_02feb9a0(param_1 + 0x2fa0);
  FUN_02feb9a0(param_1 + 0x2f30);
  FUN_02feb9a0(param_1 + 0x2ec0);
  FUN_02feb9a0(param_1 + 0x2e50);
  FUN_02feb9a0(param_1 + 0x2de0);
  FUN_02feb9a0(param_1 + 0x2d70);
  FUN_02feb9a0(param_1 + 0x2d00);
  FUN_02feb9a0(param_1 + 0x2c90);
  FUN_02feb9a0(param_1 + 0x2c20);
  FUN_02feb9a0(param_1 + 0x2bb0);
  FUN_02feb9a0(param_1 + 0x2b40);
  FUN_02feb9a0(param_1 + 0x2ad0);
  FUN_02feb9a0(param_1 + 0x2a60);
  FUN_02feb9a0(param_1 + 0x29f0);
  FUN_02feb9a0(param_1 + 0x2980);
  FUN_02feb9a0(param_1 + 0x2908);
  FUN_02feb9a0(param_1 + 0x2898);
  FUN_02feb9a0(param_1 + 0x2828);
  FUN_02feb9a0(param_1 + 0x27b8);
  FUN_02feb9a0(param_1 + 0x2748);
  FUN_02feb9a0(param_1 + 0x26d8);
  FUN_02feb9a0(param_1 + 0x2668);
  FUN_02feb9a0(param_1 + 0x25f8);
  FUN_02feb9a0(param_1 + 0x2588);
  FUN_02feb9a0(param_1 + 0x2518);
  FUN_02feb9a0(param_1 + 0x24a8);
  FUN_02feb9a0(param_1 + 0x2438);
  FUN_02feb9a0(param_1 + 0x23c8);
  pvVar5 = *(void **)(param_1 + 0x23c0);
  *(undefined **)(param_1 + 0x2270) = PTR_DAT_04bc7b48 + 0x10;
  puVar2 = PTR_DAT_04bb2698;
  if (pvVar5 != (void *)0x0) {
    if (*(long *)PTR_DAT_04bb2698 == 0) {
      free(pvVar5);
    }
    else {
      plVar4 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,pvVar5);
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 0x38))(plVar4,pvVar5);
      }
    }
    *(undefined8 *)(param_1 + 0x23b8) = 0;
    *(undefined8 *)(param_1 + 0x23c0) = 0;
  }
  puVar3 = PTR_DAT_04bc7ae0;
  puVar1 = PTR_DAT_04bc7ae0 + 0x10;
  *(undefined **)(param_1 + 9000) = puVar1;
  FUN_02fee4f0(param_1 + 0x2390);
  FUN_02ff5b7c(param_1 + 0x2340);
  *(undefined **)(param_1 + 0x2298) = puVar1;
  FUN_02fee4f0(param_1 + 0x2300);
  FUN_02ff5b7c(param_1 + 0x22b0);
  pvVar5 = *(void **)(param_1 + 0x2268);
  *(undefined **)(param_1 + 0x2088) = PTR_DAT_04bc7b40 + 0x10;
  if (pvVar5 != (void *)0x0) {
    if (*(long *)puVar2 == 0) {
      free(pvVar5);
    }
    else {
      plVar4 = (long *)FUN_038cb610(*(long *)puVar2,pvVar5);
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 0x38))(plVar4,pvVar5);
      }
    }
    *(undefined8 *)(param_1 + 0x2260) = 0;
    *(undefined8 *)(param_1 + 0x2268) = 0;
  }
  *(undefined **)(param_1 + 0x21d0) = puVar1;
  FUN_02fee4f0(param_1 + 0x2238);
  FUN_02ff5b7c(param_1 + 0x21e8);
  *(undefined **)(&DAT_00002140 + param_1) = puVar1;
  FUN_02fee4f0(param_1 + 0x21a8);
  FUN_02ff5b7c(param_1 + 0x2158);
  *(undefined **)(param_1 + 0x20b0) = puVar1;
  FUN_02fee4f0(param_1 + 0x2118);
  FUN_02ff5b7c(param_1 + 0x20c8);
  pvVar5 = *(void **)(param_1 + 0x2080);
  *(undefined ***)(param_1 + 0x1fc0) = &PTR_LAB_04aef998;
  if (pvVar5 != (void *)0x0) {
    if (*(long *)puVar2 == 0) {
      free(pvVar5);
    }
    else {
      plVar4 = (long *)FUN_038cb610(*(long *)puVar2,pvVar5);
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 0x38))(plVar4,pvVar5);
      }
    }
    *(undefined8 *)(param_1 + 0x2078) = 0;
    *(undefined8 *)(param_1 + 0x2080) = 0;
  }
  *(undefined **)(param_1 + 0x1fe8) = puVar3 + 0x10;
  FUN_02fee4f0(param_1 + 0x2050);
  FUN_02ff5b7c(param_1 + 0x2000);
  pvVar5 = *(void **)(param_1 + 0x1fb8);
  *(undefined ***)(param_1 + 0x1ef8) = &PTR_LAB_04aef8c0;
  if (pvVar5 != (void *)0x0) {
    if (*(long *)puVar2 == 0) {
      free(pvVar5);
    }
    else {
      plVar4 = (long *)FUN_038cb610(*(long *)puVar2,pvVar5);
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 0x38))(plVar4,pvVar5);
      }
    }
    *(undefined8 *)(param_1 + 0x1fb0) = 0;
    *(undefined8 *)(param_1 + 0x1fb8) = 0;
  }
  *(undefined **)(param_1 + 0x1f20) = puVar3 + 0x10;
  FUN_02fee4f0(param_1 + 0x1f88);
  FUN_02ff5b7c(param_1 + 0x1f38);
  pvVar5 = *(void **)(param_1 + 0x1ef0);
  *(undefined **)(param_1 + 0x1d10) = PTR_DAT_04bc7b38 + 0x10;
  if (pvVar5 != (void *)0x0) {
    if (*(long *)puVar2 == 0) {
      free(pvVar5);
    }
    else {
      plVar4 = (long *)FUN_038cb610(*(long *)puVar2,pvVar5);
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 0x38))(plVar4,pvVar5);
      }
    }
    *(undefined8 *)(param_1 + 0x1ee8) = 0;
    *(undefined8 *)(param_1 + 0x1ef0) = 0;
  }
  puVar1 = puVar3 + 0x10;
  *(undefined **)(param_1 + 0x1e58) = puVar1;
  FUN_02fee4f0(param_1 + 0x1ec0);
  FUN_02ff5b7c(param_1 + 0x1e70);
  *(undefined **)(param_1 + 0x1dc8) = puVar1;
  FUN_02fee4f0(param_1 + 0x1e30);
  FUN_02ff5b7c(param_1 + 0x1de0);
  *(undefined **)(param_1 + 0x1d38) = puVar1;
  FUN_02fee4f0(param_1 + 0x1da0);
  FUN_02ff5b7c(param_1 + 0x1d50);
  pvVar5 = *(void **)(param_1 + 0x1d08);
  *(undefined ***)(param_1 + 0x1c48) = &PTR_LAB_04aef7e8;
  if (pvVar5 != (void *)0x0) {
    if (*(long *)puVar2 == 0) {
      free(pvVar5);
    }
    else {
      plVar4 = (long *)FUN_038cb610(*(long *)puVar2,pvVar5);
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 0x38))(plVar4,pvVar5);
      }
    }
    *(undefined8 *)(param_1 + 0x1d00) = 0;
    *(undefined8 *)(param_1 + 0x1d08) = 0;
  }
  *(undefined **)(param_1 + 0x1c70) = puVar1;
  FUN_02fee4f0(param_1 + 0x1cd8);
  FUN_02ff5b7c(param_1 + 0x1c88);
  pvVar5 = *(void **)(param_1 + 0x1c40);
  *(undefined **)(param_1 + 0x1a60) = PTR_DAT_04bc7b20 + 0x10;
  if (pvVar5 != (void *)0x0) {
    if (*(long *)puVar2 == 0) {
      free(pvVar5);
    }
    else {
      plVar4 = (long *)FUN_038cb610(*(long *)puVar2,pvVar5);
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 0x38))(plVar4,pvVar5);
      }
    }
    *(undefined8 *)(param_1 + 0x1c38) = 0;
    *(undefined8 *)(param_1 + 0x1c40) = 0;
  }
  puVar1 = puVar3 + 0x10;
  *(undefined **)(param_1 + 0x1ba8) = puVar1;
  FUN_02fee4f0(param_1 + 0x1c10);
  FUN_02ff5b7c(param_1 + 0x1bc0);
  *(undefined **)(param_1 + 0x1b18) = puVar1;
  FUN_02fee4f0(param_1 + 0x1b80);
  FUN_02ff5b7c(param_1 + 0x1b30);
  *(undefined **)(param_1 + 0x1a88) = puVar1;
  FUN_02fee4f0(param_1 + 0x1af0);
  FUN_02ff5b7c(param_1 + 0x1aa0);
  pvVar5 = *(void **)(param_1 + 0x1a58);
  *(undefined ***)(param_1 + 0x17e8) = &PTR_LAB_04aef710;
  if (pvVar5 != (void *)0x0) {
    if (*(long *)puVar2 == 0) {
      free(pvVar5);
    }
    else {
      plVar4 = (long *)FUN_038cb610(*(long *)puVar2,pvVar5);
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 0x38))(plVar4,pvVar5);
      }
    }
    *(undefined8 *)(param_1 + 0x1a50) = 0;
    *(undefined8 *)(param_1 + 0x1a58) = 0;
  }
  *(undefined **)(param_1 + 0x19c0) = puVar1;
  FUN_02fee4f0(param_1 + 0x1a28);
  FUN_02ff5b7c(param_1 + 0x19d8);
  *(undefined **)(param_1 + 0x1930) = puVar1;
  FUN_02fee4f0(param_1 + 0x1998);
  FUN_02ff5b7c(param_1 + 0x1948);
  *(undefined **)(param_1 + 0x18a0) = puVar1;
  FUN_02fee4f0(param_1 + 0x1908);
  FUN_02ff5b7c(param_1 + 0x18b8);
  *(undefined **)(param_1 + 0x1810) = puVar1;
  FUN_02fee4f0(param_1 + 0x1878);
  FUN_02ff5b7c(param_1 + 0x1828);
  pvVar5 = *(void **)(param_1 + 0x17e0);
  *(undefined ***)(param_1 + 0x1570) = &PTR_LAB_04aef488;
  if (pvVar5 != (void *)0x0) {
    if (*(long *)puVar2 == 0) {
      free(pvVar5);
    }
    else {
      plVar4 = (long *)FUN_038cb610(*(long *)puVar2,pvVar5);
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 0x38))(plVar4,pvVar5);
      }
    }
    *(undefined8 *)(param_1 + 0x17d8) = 0;
    *(undefined8 *)(param_1 + 0x17e0) = 0;
  }
  puVar1 = puVar3 + 0x10;
  *(undefined **)(param_1 + 0x1748) = puVar1;
  FUN_02fee4f0(param_1 + 0x17b0);
  FUN_02ff5b7c(param_1 + 0x1760);
  *(undefined **)(param_1 + 0x16b8) = puVar1;
  FUN_02fee4f0(param_1 + 0x1720);
  FUN_02ff5b7c(param_1 + 0x16d0);
  *(undefined **)(param_1 + 0x1628) = puVar1;
  FUN_02fee4f0(param_1 + 0x1690);
  FUN_02ff5b7c(param_1 + 0x1640);
  *(undefined **)(param_1 + 0x1598) = puVar1;
  FUN_02fee4f0(param_1 + 0x1600);
  FUN_02ff5b7c(param_1 + 0x15b0);
  pvVar5 = *(void **)(param_1 + 0x1568);
  *(undefined ***)(param_1 + 0x1418) = &PTR_LAB_04aef3b0;
  if (pvVar5 != (void *)0x0) {
    if (*(long *)puVar2 == 0) {
      free(pvVar5);
    }
    else {
      plVar4 = (long *)FUN_038cb610(*(long *)puVar2,pvVar5);
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 0x38))(plVar4,pvVar5);
      }
    }
    *(undefined8 *)(param_1 + 0x1560) = 0;
    *(undefined8 *)(param_1 + 0x1568) = 0;
  }
  *(undefined **)(param_1 + 0x14d0) = puVar1;
  FUN_02fee4f0(param_1 + 0x1538);
  FUN_02ff5b7c(param_1 + 0x14e8);
  *(undefined **)(param_1 + 0x1440) = puVar1;
  FUN_02fee4f0(param_1 + 0x14a8);
  FUN_02ff5b7c(param_1 + 0x1458);
  pvVar5 = *(void **)(param_1 + 0x1410);
  *(undefined ***)(param_1 + 0x11a0) = &PTR_LAB_04aef2d8;
  if (pvVar5 != (void *)0x0) {
    if (*(long *)puVar2 == 0) {
      free(pvVar5);
    }
    else {
      plVar4 = (long *)FUN_038cb610(*(long *)puVar2,pvVar5);
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 0x38))(plVar4,pvVar5);
      }
    }
    *(undefined8 *)(param_1 + 0x1408) = 0;
    *(undefined8 *)(param_1 + 0x1410) = 0;
  }
  puVar1 = puVar3 + 0x10;
  *(undefined **)(param_1 + 0x1378) = puVar1;
  FUN_02fee4f0(param_1 + 0x13e0);
  FUN_02ff5b7c(param_1 + 0x1390);
  *(undefined **)(param_1 + 0x12e8) = puVar1;
  FUN_02fee4f0(param_1 + 0x1350);
  FUN_02ff5b7c(param_1 + 0x1300);
  *(undefined **)(param_1 + 0x1258) = puVar1;
  FUN_02fee4f0(param_1 + 0x12c0);
  FUN_02ff5b7c(param_1 + 0x1270);
  *(undefined **)(param_1 + 0x11c8) = puVar1;
  FUN_02fee4f0(&DAT_00001230 + param_1);
  FUN_02ff5b7c(param_1 + 0x11e0);
  pvVar5 = *(void **)(param_1 + 0x1198);
  *(undefined ***)(param_1 + 0xf28) = &PTR_LAB_04aef488;
  if (pvVar5 != (void *)0x0) {
    if (*(long *)puVar2 == 0) {
      free(pvVar5);
    }
    else {
      plVar4 = (long *)FUN_038cb610(*(long *)puVar2,pvVar5);
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 0x38))(plVar4,pvVar5);
      }
    }
    *(undefined8 *)(param_1 + 0x1190) = 0;
    *(undefined8 *)(param_1 + 0x1198) = 0;
  }
  *(undefined **)(param_1 + 0x1100) = puVar1;
  FUN_02fee4f0(param_1 + 0x1168);
  FUN_02ff5b7c(param_1 + 0x1118);
  *(undefined **)(param_1 + 0x1070) = puVar1;
  FUN_02fee4f0(param_1 + 0x10d8);
  FUN_02ff5b7c(param_1 + 0x1088);
  *(undefined **)(param_1 + 0xfe0) = puVar1;
  FUN_02fee4f0(param_1 + 0x1048);
  FUN_02ff5b7c(param_1 + 0xff8);
  *(undefined **)(param_1 + 0xf50) = puVar1;
  FUN_02fee4f0(param_1 + 0xfb8);
  FUN_02ff5b7c(param_1 + 0xf68);
  pvVar5 = *(void **)(param_1 + 0xf20);
  *(undefined ***)(param_1 + 0xdd0) = &PTR_LAB_04aef3b0;
  if (pvVar5 != (void *)0x0) {
    if (*(long *)puVar2 == 0) {
      free(pvVar5);
    }
    else {
      plVar4 = (long *)FUN_038cb610(*(long *)puVar2,pvVar5);
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 0x38))(plVar4,pvVar5);
      }
    }
    *(undefined8 *)(param_1 + 0xf18) = 0;
    *(undefined8 *)(param_1 + 0xf20) = 0;
  }
  puVar1 = puVar3 + 0x10;
  *(undefined **)(param_1 + 0xe88) = puVar1;
  FUN_02fee4f0(param_1 + 0xef0);
  FUN_02ff5b7c(param_1 + 0xea0);
  *(undefined **)(param_1 + 0xdf8) = puVar1;
  FUN_02fee4f0(param_1 + 0xe60);
  FUN_02ff5b7c(param_1 + 0xe10);
  pvVar5 = *(void **)(param_1 + 0xdc8);
  *(undefined ***)(param_1 + 0xb58) = &PTR_LAB_04aef2d8;
  if (pvVar5 != (void *)0x0) {
    if (*(long *)puVar2 == 0) {
      free(pvVar5);
    }
    else {
      plVar4 = (long *)FUN_038cb610(*(long *)puVar2,pvVar5);
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 0x38))(plVar4,pvVar5);
      }
    }
    *(undefined8 *)(param_1 + 0xdc0) = 0;
    *(undefined8 *)(param_1 + 0xdc8) = 0;
  }
  *(undefined **)(param_1 + 0xd30) = puVar1;
  FUN_02fee4f0(param_1 + 0xd98);
  FUN_02ff5b7c(param_1 + 0xd48);
  *(undefined **)(param_1 + 0xca0) = puVar1;
  FUN_02fee4f0(param_1 + 0xd08);
  FUN_02ff5b7c(param_1 + 0xcb8);
  *(undefined **)(param_1 + 0xc10) = puVar1;
  FUN_02fee4f0(param_1 + 0xc78);
  FUN_02ff5b7c(param_1 + 0xc28);
  *(undefined **)(param_1 + 0xb80) = puVar1;
  FUN_02fee4f0(param_1 + 0xbe8);
  FUN_02ff5b7c(param_1 + 0xb98);
  pvVar5 = *(void **)(param_1 + 0xb50);
  *(undefined ***)(param_1 + 0x8e0) = &PTR_LAB_04aeef78;
  if (pvVar5 != (void *)0x0) {
    if (*(long *)puVar2 == 0) {
      free(pvVar5);
    }
    else {
      plVar4 = (long *)FUN_038cb610(*(long *)puVar2,pvVar5);
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 0x38))(plVar4,pvVar5);
      }
    }
    *(undefined8 *)(param_1 + 0xb48) = 0;
    *(undefined8 *)(param_1 + 0xb50) = 0;
  }
  puVar1 = puVar3 + 0x10;
  *(undefined **)(param_1 + 0xab8) = puVar1;
  FUN_02fee4f0(param_1 + 0xb20);
  FUN_02ff5b7c(param_1 + 0xad0);
  *(undefined **)(param_1 + 0xa28) = puVar1;
  FUN_02fee4f0(param_1 + 0xa90);
  FUN_02ff5b7c(param_1 + 0xa40);
  *(undefined **)(param_1 + 0x998) = puVar1;
  FUN_02fee4f0(param_1 + 0xa00);
  FUN_02ff5b7c(param_1 + 0x9b0);
  *(undefined **)(param_1 + 0x908) = puVar1;
  FUN_02fee4f0(param_1 + 0x970);
  FUN_02ff5b7c(param_1 + 0x920);
  pvVar5 = *(void **)(param_1 + 0x8d8);
  *(undefined ***)(param_1 + 0x668) = &PTR_LAB_04aeef78;
  if (pvVar5 != (void *)0x0) {
    if (*(long *)puVar2 == 0) {
      free(pvVar5);
    }
    else {
      plVar4 = (long *)FUN_038cb610(*(long *)puVar2,pvVar5);
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 0x38))(plVar4,pvVar5);
      }
    }
    *(undefined8 *)(param_1 + 0x8d0) = 0;
    *(undefined8 *)(param_1 + 0x8d8) = 0;
  }
  *(undefined **)(param_1 + 0x840) = puVar1;
  FUN_02fee4f0(param_1 + 0x8a8);
  FUN_02ff5b7c(param_1 + 0x858);
  *(undefined **)(param_1 + 0x7b0) = puVar1;
  FUN_02fee4f0(param_1 + 0x818);
  FUN_02ff5b7c(param_1 + 0x7c8);
  *(undefined **)(param_1 + 0x720) = puVar1;
  FUN_02fee4f0(param_1 + 0x788);
  FUN_02ff5b7c(param_1 + 0x738);
  *(undefined **)(param_1 + 0x690) = puVar1;
  FUN_02fee4f0(param_1 + 0x6f8);
  FUN_02ff5b7c(param_1 + 0x6a8);
  pvVar5 = *(void **)(param_1 + 0x660);
  *(undefined ***)(param_1 + 0x3f0) = &PTR_LAB_04aeef78;
  if (pvVar5 != (void *)0x0) {
    if (*(long *)puVar2 == 0) {
      free(pvVar5);
    }
    else {
      plVar4 = (long *)FUN_038cb610(*(long *)puVar2,pvVar5);
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 0x38))(plVar4,pvVar5);
      }
    }
    *(undefined8 *)(param_1 + 0x658) = 0;
    *(undefined8 *)(param_1 + 0x660) = 0;
  }
  puVar1 = puVar3 + 0x10;
  *(undefined **)(param_1 + 0x5c8) = puVar1;
  FUN_02fee4f0(param_1 + 0x630);
  FUN_02ff5b7c(param_1 + 0x5e0);
  *(undefined **)(param_1 + 0x538) = puVar1;
  FUN_02fee4f0(param_1 + 0x5a0);
  FUN_02ff5b7c(param_1 + 0x550);
  *(undefined **)(param_1 + 0x4a8) = puVar1;
  FUN_02fee4f0(param_1 + 0x510);
  FUN_02ff5b7c(param_1 + 0x4c0);
  *(undefined **)(param_1 + 0x418) = puVar1;
  FUN_02fee4f0(param_1 + 0x480);
  FUN_02ff5b7c(param_1 + 0x430);
  pvVar5 = *(void **)(param_1 + 1000);
  *(undefined ***)(param_1 + 0x178) = &PTR_LAB_04aeedc8;
  if (pvVar5 != (void *)0x0) {
    if (*(long *)puVar2 == 0) {
      free(pvVar5);
    }
    else {
      plVar4 = (long *)FUN_038cb610(*(long *)puVar2,pvVar5);
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 0x38))(plVar4,pvVar5);
      }
    }
    *(undefined8 *)(param_1 + 0x3e0) = 0;
    *(undefined8 *)(param_1 + 1000) = 0;
  }
  *(undefined **)(param_1 + 0x350) = puVar1;
  FUN_02fee4f0(param_1 + 0x3b8);
  FUN_02ff5b7c(param_1 + 0x368);
  *(undefined **)(param_1 + 0x2c0) = puVar1;
  FUN_02fee4f0(param_1 + 0x328);
  FUN_02ff5b7c(param_1 + 0x2d8);
  *(undefined **)(param_1 + 0x230) = puVar1;
  FUN_02fee4f0(param_1 + 0x298);
  FUN_02ff5b7c(param_1 + 0x248);
  *(undefined **)(param_1 + 0x1a0) = puVar1;
  FUN_02fee4f0(param_1 + 0x208);
  FUN_02ff5b7c(param_1 + 0x1b8);
  pvVar5 = *(void **)(param_1 + 0x170);
  *(undefined ***)(param_1 + 0x20) = &PTR_LAB_04aeec18;
  if (pvVar5 != (void *)0x0) {
    if (*(long *)puVar2 == 0) {
      free(pvVar5);
    }
    else {
      plVar4 = (long *)FUN_038cb610(*(long *)puVar2,pvVar5);
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 0x38))(plVar4,pvVar5);
      }
    }
    *(undefined8 *)(param_1 + 0x168) = 0;
    *(undefined8 *)(param_1 + 0x170) = 0;
  }
  *(undefined **)(param_1 + 0xd8) = puVar3 + 0x10;
  FUN_02fee4f0(param_1 + 0x140);
  FUN_02ff5b7c(param_1 + 0xf0);
  *(undefined **)(param_1 + 0x48) = puVar3 + 0x10;
  FUN_02fee4f0(param_1 + 0xb0);
  FUN_02ff5b7c(param_1 + 0x60);
  return;
}


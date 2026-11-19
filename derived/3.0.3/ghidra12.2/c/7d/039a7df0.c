
undefined8 FUN_039a7df0(long param_1,uint param_2,undefined1 param_3,long *param_4)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  void *pvVar5;
  void *pvVar6;
  ulong uVar7;
  size_t sVar8;
  long lVar9;
  long local_c98;
  undefined8 local_c90;
  long local_880;
  undefined8 local_878;
  undefined **local_468;
  undefined1 *local_460;
  undefined4 local_458;
  undefined1 local_454 [1023];
  undefined1 local_55;
  
  puVar2 = PTR_DAT_04bb2698;
  if ((int)param_2 < 1) goto LAB_039a8034;
  sVar8 = (ulong)param_2 * 0x40 + (ulong)param_2 * -8;
  lVar9 = *(long *)PTR_DAT_04bb2698;
  if (lVar9 == 0) {
    pvVar5 = malloc(sVar8);
joined_r0x039a7e94:
    if (pvVar5 != (void *)0x0) {
      lVar9 = (ulong)param_2 * 0x38;
      uVar7 = lVar9 - 0x38;
      pvVar6 = pvVar5;
      if ((uVar7 / 0x38 & 1) == 0) {
        *(undefined1 *)((long)pvVar5 + 0x1e) = 0;
        *(undefined4 *)((long)pvVar5 + 0x18) = 0xffffffff;
        pvVar6 = (void *)((long)pvVar5 + 0x38);
        *(long *)((long)pvVar5 + 0x28) = (long)pvVar5 + 0x20;
        *(undefined8 *)((long)pvVar5 + 0x30) = 0xffffffff00000000;
        *(long *)((long)pvVar5 + 0x20) = (long)pvVar5 + 0x20;
      }
      if (0x37 < uVar7) {
        do {
          *(undefined4 *)((long)pvVar6 + 0x18) = 0xffffffff;
          *(undefined1 *)((long)pvVar6 + 0x1e) = 0;
          *(long *)((long)pvVar6 + 0x20) = (long)pvVar6 + 0x20;
          *(undefined4 *)((long)pvVar6 + 0x50) = 0xffffffff;
          *(undefined1 *)((long)pvVar6 + 0x56) = 0;
          *(long *)((long)pvVar6 + 0x28) = (long)pvVar6 + 0x20;
          *(undefined8 *)((long)pvVar6 + 0x30) = 0xffffffff00000000;
          *(long *)((long)pvVar6 + 0x58) = (long)pvVar6 + 0x58;
          *(long *)((long)pvVar6 + 0x60) = (long)pvVar6 + 0x58;
          *(undefined8 *)((long)pvVar6 + 0x68) = 0xffffffff00000000;
          pvVar6 = (void *)((long)pvVar6 + 0x70);
        } while (pvVar6 != (void *)((long)pvVar5 + lVar9));
      }
      *(uint *)(param_1 + 0x20) = param_2;
      *(void **)(param_1 + 0x28) = pvVar5;
    }
    lVar9 = *(long *)puVar2;
    sVar8 = (size_t)(int)(param_2 << 3);
    if (lVar9 == 0) goto LAB_039a7fc8;
    if (param_4 != (long *)0x0) {
      plVar4 = param_4;
LAB_039a7f94:
      pvVar5 = (void *)(**(code **)(*plVar4 + 0x30))(plVar4,sVar8,8);
      goto joined_r0x039a7fa8;
    }
LAB_039a7f68:
    lVar3 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
    plVar4 = (long *)(lVar9 + 8);
    if (lVar3 != 0) {
      plVar4 = (long *)(lVar3 + 0xa8);
    }
    plVar4 = (long *)*plVar4;
    if (plVar4 != (long *)0x0) goto LAB_039a7f94;
    lVar9 = *(long *)puVar2;
    if (lVar9 != 0) goto LAB_039a7fe4;
LAB_039a8108:
    pvVar5 = malloc(sVar8);
  }
  else {
    plVar4 = param_4;
    if (param_4 != (long *)0x0) {
LAB_039a7e70:
      pvVar5 = (void *)(**(code **)(*plVar4 + 0x30))(plVar4,sVar8,8);
      goto joined_r0x039a7e94;
    }
    lVar3 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
    plVar4 = (long *)(lVar9 + 8);
    if (lVar3 != 0) {
      plVar4 = (long *)(lVar3 + 0xa8);
    }
    plVar4 = (long *)*plVar4;
    if (plVar4 != (long *)0x0) goto LAB_039a7e70;
    lVar9 = *(long *)puVar2;
    sVar8 = (size_t)(int)(param_2 << 3);
    if (lVar9 != 0) goto LAB_039a7f68;
LAB_039a7fc8:
    pvVar5 = malloc(sVar8);
joined_r0x039a7fa8:
    if (pvVar5 != (void *)0x0) {
      *(void **)(param_1 + 0x38) = pvVar5;
      *(undefined4 *)(param_1 + 0x30) = 0;
      *(uint *)(param_1 + 0x34) = param_2;
    }
    lVar9 = *(long *)puVar2;
    if (lVar9 == 0) goto LAB_039a8108;
    if (param_4 == (long *)0x0) {
LAB_039a7fe4:
      lVar3 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      puVar1 = (undefined8 *)(lVar9 + 8);
      if (lVar3 != 0) {
        puVar1 = (undefined8 *)(lVar3 + 0xa8);
      }
      param_4 = (long *)*puVar1;
      if (param_4 == (long *)0x0) goto LAB_039a8034;
    }
    pvVar5 = (void *)(**(code **)(*param_4 + 0x30))(param_4,sVar8,8);
  }
  if (pvVar5 != (void *)0x0) {
    *(void **)(param_1 + 0x48) = pvVar5;
    *(undefined4 *)(param_1 + 0x40) = 0;
    *(uint *)(param_1 + 0x44) = param_2;
  }
LAB_039a8034:
  *(undefined1 *)(param_1 + 0x282) = param_3;
  if (*(long *)(DAT_05ae92f0 + 0x58) != 0) {
    FUN_006e9454(&local_c98,"%s_%s","model","debug");
    local_55 = 0;
    local_460 = local_454;
    local_458 = 0x400;
    local_454[0] = 0;
    local_468 = &PTR_LAB_048fcfa0;
    (**(code **)(local_c98 + 0x18))(&local_c98);
    FUN_006e9454(&local_880,"%s\\%s","model",local_c90);
    (**(code **)(local_880 + 0x18))(&local_880);
    FUN_038d1270(&local_468,"Icon=%%AGL_ROOT%%\\..\\gsys\\tools\\icons\\%s.png",local_878);
  }
  return 1;
}


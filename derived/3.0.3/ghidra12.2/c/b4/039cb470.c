
void FUN_039cb470(long param_1,long *param_2,long *param_3)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  void *pvVar6;
  int iVar7;
  uint uVar8;
  long lVar9;
  uint uVar10;
  long local_890;
  undefined8 local_888;
  undefined *local_478;
  undefined1 *local_470;
  undefined4 local_468;
  undefined1 local_464 [1023];
  undefined1 local_65;
  
  puVar3 = PTR_DAT_04bb2698;
  lVar9 = *(long *)PTR_DAT_04bb2698;
  if (lVar9 == 0) {
    pvVar6 = malloc(0x40);
joined_r0x039cb520:
    if (pvVar6 != (void *)0x0) {
      *(undefined8 *)(param_1 + 0x10) = 0x800000000;
      *(void **)(param_1 + 0x18) = pvVar6;
    }
    lVar9 = *(long *)puVar3;
    if (lVar9 == 0) goto LAB_039cb598;
    if (param_2 != (long *)0x0) {
      plVar5 = param_2;
LAB_039cb560:
      pvVar6 = (void *)(**(code **)(*plVar5 + 0x30))(plVar5,0x40,8);
      goto joined_r0x039cb574;
    }
LAB_039cb534:
    lVar4 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
    plVar5 = (long *)(lVar9 + 8);
    if (lVar4 != 0) {
      plVar5 = (long *)(lVar4 + 0xa8);
    }
    plVar5 = (long *)*plVar5;
    if (plVar5 != (long *)0x0) goto LAB_039cb560;
    lVar9 = *(long *)puVar3;
    if (lVar9 != 0) goto LAB_039cb5b4;
LAB_039cb708:
    pvVar6 = malloc(0x40);
    if (pvVar6 != (void *)0x0) {
LAB_039cb5f8:
      *(undefined8 *)(param_1 + 0x30) = 0x800000000;
      *(void **)(param_1 + 0x38) = pvVar6;
    }
  }
  else {
    plVar5 = param_2;
    if (param_2 != (long *)0x0) {
LAB_039cb4e0:
      pvVar6 = (void *)(**(code **)(*plVar5 + 0x30))(plVar5,0x40,8);
      goto joined_r0x039cb520;
    }
    lVar4 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
    plVar5 = (long *)(lVar9 + 8);
    if (lVar4 != 0) {
      plVar5 = (long *)(lVar4 + 0xa8);
    }
    plVar5 = (long *)*plVar5;
    if (plVar5 != (long *)0x0) goto LAB_039cb4e0;
    lVar9 = *(long *)puVar3;
    if (lVar9 != 0) goto LAB_039cb534;
LAB_039cb598:
    pvVar6 = malloc(0x40);
joined_r0x039cb574:
    if (pvVar6 != (void *)0x0) {
      *(undefined8 *)(param_1 + 0x20) = 0x800000000;
      *(void **)(param_1 + 0x28) = pvVar6;
    }
    lVar9 = *(long *)puVar3;
    if (lVar9 == 0) goto LAB_039cb708;
    if (param_2 != (long *)0x0) {
      plVar5 = param_2;
LAB_039cb5e0:
      pvVar6 = (void *)(**(code **)(*plVar5 + 0x30))(plVar5,0x40,8);
      if (pvVar6 == (void *)0x0) goto LAB_039cb600;
      goto LAB_039cb5f8;
    }
LAB_039cb5b4:
    lVar4 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
    plVar5 = (long *)(lVar9 + 8);
    if (lVar4 != 0) {
      plVar5 = (long *)(lVar4 + 0xa8);
    }
    plVar5 = (long *)*plVar5;
    if (plVar5 != (long *)0x0) goto LAB_039cb5e0;
  }
LAB_039cb600:
  FUN_039cd280(param_1 + 0x50,param_2);
  lVar9 = *(long *)puVar3;
  if (param_3 == (long *)0x0) {
    if (lVar9 == 0) goto LAB_039cb774;
    lVar4 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
    plVar5 = (long *)(lVar9 + 8);
    if (lVar4 != 0) {
      plVar5 = (long *)(lVar4 + 0xa8);
    }
    plVar5 = (long *)*plVar5;
    if (plVar5 != (long *)0x0) goto LAB_039cb74c;
LAB_039cb780:
    uVar10 = *(uint *)(param_1 + 0x200);
    if ((int)uVar10 < 1) goto LAB_039cb86c;
  }
  else {
    if (lVar9 == 0) {
      pvVar6 = malloc(0x4000);
    }
    else {
      pvVar6 = (void *)(**(code **)(*param_3 + 0x30))(param_3,0x4000,8);
    }
    if (pvVar6 != (void *)0x0) {
      *(undefined8 *)(param_1 + 0x1b0) = 0x80000000000;
      *(void **)(param_1 + 0x1b8) = pvVar6;
    }
    local_65 = 0;
    local_468 = 0x400;
    local_464[0] = 0;
    puVar1 = PTR_DAT_04bb2f40 + 0x10;
    local_478 = puVar1;
    local_470 = local_464;
    FUN_006e9454(&local_890,"top\\top_%s","scene");
    (**(code **)(local_890 + 0x18))(&local_890);
    FUN_038d1270(&local_478,"Icon=%%AGL_ROOT%%\\..\\gsys\\tools\\icons\\%s.png",local_888);
    local_468 = 0x400;
    local_65 = 0;
    local_464[0] = 0;
    local_478 = puVar1;
    local_470 = local_464;
    FUN_006e9454(&local_890,"top\\top_%s","model");
    (**(code **)(local_890 + 0x18))(&local_890);
    FUN_038d1270(&local_478,"Icon=%%AGL_ROOT%%\\..\\gsys\\tools\\icons\\%s.png",local_888);
    plVar5 = param_3;
    if (*(long *)puVar3 == 0) {
LAB_039cb774:
      pvVar6 = malloc(0x4000);
    }
    else {
LAB_039cb74c:
      pvVar6 = (void *)(**(code **)(*plVar5 + 0x30))(plVar5,0x4000,8);
    }
    if (pvVar6 == (void *)0x0) goto LAB_039cb780;
    uVar10 = 0x400;
    *(void **)(param_1 + 0x208) = pvVar6;
    *(undefined4 *)(param_1 + 0x200) = 0x400;
  }
  lVar9 = *(long *)puVar3;
  if (lVar9 == 0) {
    pvVar6 = malloc((long)(int)(uVar10 << 3));
joined_r0x039cb8f4:
    if (pvVar6 != (void *)0x0) {
      *(void **)(param_1 + 0x218) = pvVar6;
      *(undefined4 *)(param_1 + 0x210) = 0;
      *(uint *)(param_1 + 0x214) = uVar10;
    }
  }
  else {
    plVar5 = param_3;
    if (param_3 != (long *)0x0) {
LAB_039cb7d0:
      pvVar6 = (void *)(**(code **)(*plVar5 + 0x30))(plVar5,(long)(int)(uVar10 << 3),8);
      goto joined_r0x039cb8f4;
    }
    lVar4 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
    plVar5 = (long *)(lVar9 + 8);
    if (lVar4 != 0) {
      plVar5 = (long *)(lVar4 + 0xa8);
    }
    plVar5 = (long *)*plVar5;
    if (plVar5 != (long *)0x0) goto LAB_039cb7d0;
  }
  uVar10 = *(uint *)(param_1 + 0x200);
  if ((int)uVar10 < 1) goto LAB_039cb86c;
  lVar9 = *(long *)puVar3;
  if (lVar9 == 0) {
    pvVar6 = malloc((long)(int)uVar10 << 3);
joined_r0x039cb914:
    if (pvVar6 != (void *)0x0) {
      *(void **)(param_1 + 0x228) = pvVar6;
      *(undefined4 *)(param_1 + 0x220) = 0;
      *(uint *)(param_1 + 0x224) = uVar10;
    }
  }
  else {
    if (param_3 != (long *)0x0) {
LAB_039cb840:
      pvVar6 = (void *)(**(code **)(*param_3 + 0x30))(param_3,(long)(int)uVar10 << 3,8);
      goto joined_r0x039cb914;
    }
    lVar4 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
    puVar2 = (undefined8 *)(lVar9 + 8);
    if (lVar4 != 0) {
      puVar2 = (undefined8 *)(lVar4 + 0xa8);
    }
    param_3 = (long *)*puVar2;
    if (param_3 != (long *)0x0) goto LAB_039cb840;
  }
  uVar10 = *(uint *)(param_1 + 0x200);
LAB_039cb86c:
  if ((uVar10 != 0) && (iVar7 = *(int *)(param_1 + 0x210), iVar7 < *(int *)(param_1 + 0x214))) {
    lVar9 = *(long *)(param_1 + 0x208);
    uVar8 = 0;
    do {
      if (iVar7 < *(int *)(param_1 + 0x214)) {
        *(long *)(*(long *)(param_1 + 0x218) + (long)iVar7 * 8) =
             lVar9 + ((long)((ulong)uVar8 << 0x20) >> 0x1c);
        iVar7 = *(int *)(param_1 + 0x210) + 1;
        *(int *)(param_1 + 0x210) = iVar7;
      }
      uVar8 = uVar8 + 1;
    } while (uVar10 != uVar8);
  }
  return;
}


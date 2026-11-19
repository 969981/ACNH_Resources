
void FUN_03af4200(long param_1,long *param_2,long *param_3)

{
  long lVar1;
  undefined *puVar2;
  size_t __size;
  undefined8 *puVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  void *pvVar7;
  ulong uVar8;
  ulong uVar9;
  size_t __n;
  long local_cb0;
  undefined8 local_ca8;
  long local_898;
  undefined8 local_890;
  undefined **local_480;
  undefined1 *local_478;
  undefined4 local_470;
  undefined1 local_46c [1023];
  undefined1 local_6d;
  
  if (param_3 == (long *)0x0) {
    *(undefined4 *)(param_1 + 0x90) = 1;
  }
  uVar8 = 0;
  uVar9 = 0;
  lVar1 = param_1 + 8;
  puVar2 = PTR_DAT_04bb2020 + 0x10;
  do {
    *(undefined8 *)(lVar1 + (-(uVar9 >> 0x1f) & 0xfffffff800000000 | uVar9 << 3)) = 0;
    lVar6 = DAT_05ae7600;
    if (*(int *)(param_1 + 0x90) == 0) {
      FUN_006e9528(&local_480,"GSys(%d)");
      (*(code *)local_480[3])(&local_480);
      lVar4 = DAT_05ae7600;
      lVar6 = 0;
      do {
        if (*(char *)((long)local_478 + lVar6) == '\0') goto LAB_03af437c;
        if (*(char *)((long)local_478 + lVar6 + 1) == '\0') {
          lVar6 = lVar6 + 1;
          goto LAB_03af437c;
        }
        if (*(char *)((long)local_478 + lVar6 + 2) == '\0') {
          lVar6 = lVar6 + 2;
          goto LAB_03af437c;
        }
        lVar6 = lVar6 + 3;
      } while (lVar6 != 0x80001);
      lVar6 = 0;
LAB_03af437c:
      __n = (size_t)((int)lVar6 + 1);
      __size = __n + 0x140010;
      if (DAT_05ae7600 == 0) {
        plVar5 = malloc(__size);
      }
      else {
        plVar5 = param_3;
        if (param_3 == (long *)0x0) {
          lVar6 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
          plVar5 = (long *)(lVar4 + 8);
          if (lVar6 != 0) {
            plVar5 = (long *)(lVar6 + 0xa8);
          }
          plVar5 = (long *)*plVar5;
          if (plVar5 == (long *)0x0) {
            plVar5 = (long *)0x0;
            goto LAB_03af43f4;
          }
        }
        plVar5 = (long *)(**(code **)(*plVar5 + 0x30))(plVar5,__size,8);
      }
LAB_03af43f4:
      (*(code *)local_480[3])(&local_480);
      memcpy(plVar5 + 0x28002,local_478,__n);
      *plVar5 = (long)puVar2;
      plVar5[1] = (long)&DAT_0407ebb1;
      *(long **)(lVar1 + (long)(int)uVar9 * 8) = plVar5;
    }
    else if ((*(int *)(param_1 + 0x90) == 1) && ((int)uVar8 == 0)) {
      if (DAT_05ae7600 == 0) {
        puVar3 = malloc(0x1410);
      }
      else {
        plVar5 = param_2;
        if (param_2 == (long *)0x0) {
          lVar4 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
          plVar5 = (long *)(lVar6 + 8);
          if (lVar4 != 0) {
            plVar5 = (long *)(lVar4 + 0xa8);
          }
          plVar5 = (long *)*plVar5;
        }
        puVar3 = (undefined8 *)(**(code **)(*plVar5 + 0x30))(plVar5,0x1410,8);
      }
      *puVar3 = &PTR_LAB_048f9770;
      puVar3[1] = &DAT_0407ebb1;
      *(undefined8 **)(lVar1 + (long)(int)uVar9 * 8) = puVar3;
    }
    uVar8 = uVar9 + 1;
    uVar9 = uVar8 & 0xffffffff;
  } while ((int)uVar8 != 8);
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(undefined4 *)(param_1 + 0x6c) = *(undefined4 *)(param_1 + 0x68);
  lVar1 = DAT_05ae7600;
  if (*(int *)(param_1 + 0x90) != 0) goto LAB_03af4554;
  if (DAT_05ae7600 == 0) {
    pvVar7 = malloc(0x20000);
joined_r0x03af44e8:
    if (pvVar7 != (void *)0x0) {
      *(void **)(param_1 + 0x50) = pvVar7;
      *(undefined4 *)(param_1 + 0x48) = 0x4000;
    }
    if (DAT_05ae7600 == 0) goto LAB_03af4618;
    plVar5 = param_3;
    if (param_3 != (long *)0x0) {
LAB_03af452c:
      pvVar7 = (void *)(**(code **)(*plVar5 + 0x30))(plVar5,0x20000,8);
      if (pvVar7 == (void *)0x0) goto LAB_03af4550;
      goto LAB_03af4544;
    }
LAB_03af4500:
    lVar1 = DAT_05ae7600;
    lVar6 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
    plVar5 = (long *)(lVar1 + 8);
    if (lVar6 != 0) {
      plVar5 = (long *)(lVar6 + 0xa8);
    }
    plVar5 = (long *)*plVar5;
    if (plVar5 != (long *)0x0) goto LAB_03af452c;
  }
  else {
    plVar5 = param_3;
    if (param_3 != (long *)0x0) {
LAB_03af449c:
      pvVar7 = (void *)(**(code **)(*plVar5 + 0x30))(plVar5,0x20000,8);
      goto joined_r0x03af44e8;
    }
    lVar6 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
    plVar5 = (long *)(lVar1 + 8);
    if (lVar6 != 0) {
      plVar5 = (long *)(lVar6 + 0xa8);
    }
    plVar5 = (long *)*plVar5;
    if (plVar5 != (long *)0x0) goto LAB_03af449c;
    if (DAT_05ae7600 != 0) goto LAB_03af4500;
LAB_03af4618:
    pvVar7 = malloc(0x20000);
    if (pvVar7 != (void *)0x0) {
LAB_03af4544:
      *(void **)(param_1 + 0x60) = pvVar7;
      *(undefined4 *)(param_1 + 0x58) = 0x4000;
    }
  }
LAB_03af4550:
  *(undefined8 *)(param_1 + 0x78) = 0;
LAB_03af4554:
  if (param_3 != (long *)0x0) {
    FUN_006e9454(&local_cb0,"%s_%s","detail","debug");
    local_6d = 0;
    local_478 = local_46c;
    local_470 = 0x400;
    local_46c[0] = 0;
    local_480 = &PTR_LAB_048fcfa0;
    (**(code **)(local_cb0 + 0x18))(&local_cb0);
    FUN_006e9454(&local_898,"%s\\%s","detail",local_ca8);
    (**(code **)(local_898 + 0x18))(&local_898);
    FUN_038d1270(&local_480,"Icon=%%AGL_ROOT%%\\..\\gsys\\tools\\icons\\%s.png",local_890);
  }
  return;
}


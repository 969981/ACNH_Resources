
void FUN_03b6e000(long param_1,undefined4 *param_2,undefined8 param_3,long *param_4)

{
  char cVar1;
  uint uVar2;
  undefined *puVar3;
  int iVar4;
  long lVar5;
  long *plVar6;
  undefined8 *puVar7;
  void *pvVar8;
  undefined8 uVar9;
  size_t __size;
  long lVar10;
  long *plVar11;
  ulong __size_00;
  
  *(undefined4 *)(param_1 + 0x78) = *param_2;
  cVar1 = *(char *)(param_2 + 1);
  *(char *)(param_1 + 0x80) = cVar1;
  puVar3 = PTR_DAT_04bd1eb8;
  *(undefined4 *)(param_1 + 0x98) = param_2[2];
  lVar10 = *(long *)puVar3;
  *(undefined4 *)(param_1 + 0x9c) = param_2[3];
  *(undefined4 *)(param_1 + 0xb0) = *(undefined4 *)(lVar10 + 0x10);
  puVar3 = PTR_DAT_04bb2698;
  lVar10 = *(long *)PTR_DAT_04bb2698;
  if (cVar1 != '\0') {
    if (lVar10 == 0) {
      puVar7 = malloc(0x30);
    }
    else {
      plVar6 = param_4;
      if (param_4 == (long *)0x0) {
        lVar5 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        plVar6 = (long *)(lVar10 + 8);
        if (lVar5 != 0) {
          plVar6 = (long *)(lVar5 + 0xa8);
        }
        plVar6 = (long *)*plVar6;
        if (plVar6 == (long *)0x0) {
          puVar7 = (undefined8 *)0x0;
          goto LAB_03b6e0c8;
        }
      }
      puVar7 = (undefined8 *)(**(code **)(*plVar6 + 0x30))(plVar6,0x30,8);
    }
LAB_03b6e0c8:
    *(undefined8 **)(param_1 + 0x90) = puVar7;
    uVar2 = *(int *)(param_1 + 0x98) * *(int *)(param_1 + 0xb0);
    lVar10 = *(long *)puVar3;
    __size = -(ulong)(uVar2 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar2 << 2;
    if ((int)uVar2 < 0) {
      __size = 0xffffffffffffffff;
    }
    if (lVar10 == 0) {
      pvVar8 = malloc(__size);
LAB_03b6e144:
      *puVar7 = pvVar8;
      lVar10 = *(long *)puVar3;
      if (lVar10 == 0) goto LAB_03b6e238;
      plVar6 = param_4;
      if (param_4 == (long *)0x0) {
LAB_03b6e158:
        lVar5 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        plVar6 = (long *)(lVar10 + 8);
        if (lVar5 != 0) {
          plVar6 = (long *)(lVar5 + 0xa8);
        }
        plVar6 = (long *)*plVar6;
        if (plVar6 != (long *)0x0) goto LAB_03b6e184;
        *(undefined8 *)(*(long *)(param_1 + 0x90) + 8) = 0;
        lVar10 = *(long *)puVar3;
        if (lVar10 != 0) {
LAB_03b6e1c4:
          lVar5 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
          plVar6 = (long *)(lVar10 + 8);
          if (lVar5 != 0) {
            plVar6 = (long *)(lVar5 + 0xa8);
          }
          plVar6 = (long *)*plVar6;
          if (plVar6 != (long *)0x0) goto LAB_03b6e1f0;
          *(undefined8 *)(*(long *)(param_1 + 0x90) + 0x10) = 0;
          lVar10 = *(long *)puVar3;
          if (lVar10 != 0) goto LAB_03b6e4c8;
          goto LAB_03b6e258;
        }
        goto LAB_03b6e248;
      }
LAB_03b6e184:
      uVar9 = (**(code **)(*plVar6 + 0x30))(plVar6,__size,0x40);
      lVar10 = *(long *)puVar3;
      *(undefined8 *)(*(long *)(param_1 + 0x90) + 8) = uVar9;
      if (lVar10 == 0) goto LAB_03b6e248;
      plVar6 = param_4;
      if (param_4 == (long *)0x0) goto LAB_03b6e1c4;
LAB_03b6e1f0:
      uVar9 = (**(code **)(*plVar6 + 0x30))(plVar6,__size,0x40);
      lVar10 = *(long *)puVar3;
      *(undefined8 *)(*(long *)(param_1 + 0x90) + 0x10) = uVar9;
      if (lVar10 == 0) goto LAB_03b6e258;
      plVar6 = param_4;
      if (param_4 == (long *)0x0) {
LAB_03b6e4c8:
        lVar5 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        plVar6 = (long *)(lVar10 + 8);
        if (lVar5 != 0) {
          plVar6 = (long *)(lVar5 + 0xa8);
        }
        plVar6 = (long *)*plVar6;
        if (plVar6 != (long *)0x0) goto LAB_03b6e4f4;
        *(undefined8 *)(*(long *)(param_1 + 0x90) + 0x18) = 0;
        lVar10 = *(long *)puVar3;
        if (lVar10 != 0) {
LAB_03b6e534:
          lVar5 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
          plVar6 = (long *)(lVar10 + 8);
          if (lVar5 != 0) {
            plVar6 = (long *)(lVar5 + 0xa8);
          }
          plVar6 = (long *)*plVar6;
          if (plVar6 != (long *)0x0) goto LAB_03b6e560;
          *(undefined8 *)(*(long *)(param_1 + 0x90) + 0x20) = 0;
          lVar10 = *(long *)puVar3;
          if (lVar10 != 0) goto LAB_03b6e5a0;
          goto LAB_03b6e278;
        }
        goto LAB_03b6e268;
      }
LAB_03b6e4f4:
      uVar9 = (**(code **)(*plVar6 + 0x30))(plVar6,__size,0x40);
      lVar10 = *(long *)puVar3;
      *(undefined8 *)(*(long *)(param_1 + 0x90) + 0x18) = uVar9;
      if (lVar10 == 0) goto LAB_03b6e268;
      plVar6 = param_4;
      if (param_4 == (long *)0x0) goto LAB_03b6e534;
LAB_03b6e560:
      uVar9 = (**(code **)(*plVar6 + 0x30))(plVar6,__size,0x40);
      lVar10 = *(long *)puVar3;
      *(undefined8 *)(*(long *)(param_1 + 0x90) + 0x20) = uVar9;
      if (lVar10 == 0) goto LAB_03b6e278;
      plVar6 = param_4;
      if (param_4 == (long *)0x0) {
LAB_03b6e5a0:
        lVar5 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        plVar6 = (long *)(lVar10 + 8);
        if (lVar5 != 0) {
          plVar6 = (long *)(lVar5 + 0xa8);
        }
        plVar6 = (long *)*plVar6;
        pvVar8 = (void *)0x0;
        if (plVar6 != (long *)0x0) goto LAB_03b6e5cc;
      }
      else {
LAB_03b6e5cc:
        pvVar8 = (void *)(**(code **)(*plVar6 + 0x30))(plVar6,__size,0x40);
      }
    }
    else {
      plVar6 = param_4;
      if (param_4 != (long *)0x0) {
LAB_03b6e120:
        pvVar8 = (void *)(**(code **)(*plVar6 + 0x30))(plVar6,__size,0x40);
        puVar7 = *(undefined8 **)(param_1 + 0x90);
        goto LAB_03b6e144;
      }
      lVar5 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar6 = (long *)(lVar10 + 8);
      if (lVar5 != 0) {
        plVar6 = (long *)(lVar5 + 0xa8);
      }
      plVar6 = (long *)*plVar6;
      if (plVar6 != (long *)0x0) goto LAB_03b6e120;
      **(undefined8 **)(param_1 + 0x90) = 0;
      lVar10 = *(long *)puVar3;
      if (lVar10 != 0) goto LAB_03b6e158;
LAB_03b6e238:
      pvVar8 = malloc(__size);
      *(void **)(*(long *)(param_1 + 0x90) + 8) = pvVar8;
LAB_03b6e248:
      pvVar8 = malloc(__size);
      *(void **)(*(long *)(param_1 + 0x90) + 0x10) = pvVar8;
LAB_03b6e258:
      pvVar8 = malloc(__size);
      *(void **)(*(long *)(param_1 + 0x90) + 0x18) = pvVar8;
LAB_03b6e268:
      pvVar8 = malloc(__size);
      *(void **)(*(long *)(param_1 + 0x90) + 0x20) = pvVar8;
LAB_03b6e278:
      pvVar8 = malloc(__size);
    }
    *(void **)(*(long *)(param_1 + 0x90) + 0x28) = pvVar8;
    lVar10 = *(long *)puVar3;
  }
  *(undefined8 *)(param_1 + 0xc0) = param_3;
  if (lVar10 == 0) {
    puVar7 = malloc(0x48);
  }
  else {
    plVar6 = param_4;
    if (param_4 == (long *)0x0) {
      lVar5 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar6 = (long *)(lVar10 + 8);
      if (lVar5 != 0) {
        plVar6 = (long *)(lVar5 + 0xa8);
      }
      plVar6 = (long *)*plVar6;
      if (plVar6 == (long *)0x0) {
        puVar7 = (undefined8 *)0x0;
        goto LAB_03b6e2ec;
      }
    }
    puVar7 = (undefined8 *)(**(code **)(*plVar6 + 0x30))(plVar6,0x48,8);
  }
LAB_03b6e2ec:
  uVar9 = nn::os::GetSystemTick();
  *(undefined4 *)(puVar7 + 2) = 0x4b7e502b;
  *puVar7 = uVar9;
  puVar7[1] = 0;
  uVar9 = nn::os::GetSystemTick();
  *(undefined4 *)(puVar7 + 5) = 0x4b7e502b;
  puVar7[3] = uVar9;
  puVar7[4] = 0;
  uVar9 = nn::os::GetSystemTick();
  *(undefined4 *)(puVar7 + 8) = 0x4b7e502b;
  puVar7[6] = uVar9;
  puVar7[7] = 0;
  *(undefined8 **)(param_1 + 0x1a0) = puVar7;
  *(undefined4 *)(puVar7 + 5) = 0x4a989680;
  *(undefined4 *)(*(long *)(param_1 + 0x1a0) + 0x40) = 0x4a989680;
  FUN_003dde74(param_1,5);
  FUN_003dddf8(param_1,6);
  *(undefined1 *)(param_1 + 0x120) = *(undefined1 *)((long)param_2 + 5);
  if (DAT_05aebc00 == '\0') {
    iVar4 = FUN_003cd778(param_1);
  }
  else {
    iVar4 = nn::audio::GetRequiredBufferSizeForAuxSendReturnBuffer
                      ((AudioRendererParameter *)(*(long *)PTR_DAT_04bd1e70 + 0x50),5,6);
    iVar4 = iVar4 * 3;
  }
  lVar10 = *(long *)puVar3;
  __size_00 = (ulong)(iVar4 + 0xfff) & 0xfffff000;
  *(ulong *)(param_1 + 0x130) = __size_00;
  if (lVar10 == 0) {
    pvVar8 = malloc(__size_00);
  }
  else {
    if (param_4 == (long *)0x0) {
      lVar5 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      puVar7 = (undefined8 *)(lVar10 + 8);
      if (lVar5 != 0) {
        puVar7 = (undefined8 *)(lVar5 + 0xa8);
      }
      param_4 = (long *)*puVar7;
      if (param_4 == (long *)0x0) {
        pvVar8 = (void *)0x0;
        goto LAB_03b6e3f0;
      }
    }
    pvVar8 = (void *)(**(code **)(*param_4 + 0x30))(param_4,__size_00,0x1000);
  }
LAB_03b6e3f0:
  *(void **)(param_1 + 0x128) = pvVar8;
  memset(pvVar8,0,*(size_t *)(param_1 + 0x130));
  if (*(uint *)(param_1 + 0xb8) < 4) {
    puVar7 = *(undefined8 **)(PTR_DAT_04bd2068 + (ulong)*(uint *)(param_1 + 0xb8) * 8 + 0x18);
  }
  else {
    puVar7 = &DAT_0407ebb1;
  }
  FUN_038d1270(param_1 + 0x138,"AuxBus %s",puVar7);
  *(undefined8 *)(param_1 + 0x178) = *(undefined8 *)(param_1 + 0x128);
  *(undefined8 *)(param_1 + 0x180) = *(undefined8 *)(param_1 + 0x130);
  lVar5 = *(long *)(*(long *)PTR_DAT_04bc3ee8 + 0x78);
  nn::os::LockMutex((MutexType *)(lVar5 + 0x58));
  plVar6 = (long *)((long)*(int *)(lVar5 + 0x1c) + param_1 + 0x138);
  plVar11 = (long *)(lVar5 + 8);
  lVar10 = *plVar11;
  *plVar11 = (long)plVar6;
  *plVar6 = lVar10;
  plVar6[1] = (long)plVar11;
  if (lVar10 != 0) {
    *(long **)(lVar10 + 8) = plVar6;
  }
  *(int *)(lVar5 + 0x18) = *(int *)(lVar5 + 0x18) + 1;
  nn::os::UnlockMutex((MutexType *)(lVar5 + 0x58));
  return;
}


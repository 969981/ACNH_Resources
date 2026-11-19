
void FUN_03908404(long param_1,int param_2,int param_3,long *param_4)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  void *pvVar5;
  size_t sVar6;
  long lVar7;
  
  puVar2 = PTR_DAT_04bb2698;
  if (0 < param_2) {
    lVar7 = *(long *)PTR_DAT_04bb2698;
    sVar6 = (size_t)(param_2 << 3);
    if (lVar7 == 0) {
      pvVar5 = malloc(sVar6);
joined_r0x039084c0:
      if (pvVar5 != (void *)0x0) {
        *(void **)(param_1 + 0x30) = pvVar5;
        *(undefined4 *)(param_1 + 0x28) = 0;
        *(int *)(param_1 + 0x2c) = param_2;
      }
      lVar7 = *(long *)puVar2;
      if (lVar7 == 0) goto LAB_039085a0;
      if (param_4 == (long *)0x0) {
LAB_039084d4:
        lVar3 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
        plVar4 = (long *)(lVar7 + 8);
        if (lVar3 != 0) {
          plVar4 = (long *)(lVar3 + 0xa8);
        }
        plVar4 = (long *)*plVar4;
        if (plVar4 == (long *)0x0) goto LAB_03908520;
      }
      else {
        plVar4 = param_4;
      }
      pvVar5 = (void *)(**(code **)(*plVar4 + 0x30))(plVar4,sVar6,8);
    }
    else {
      plVar4 = param_4;
      if (param_4 != (long *)0x0) {
LAB_03908480:
        pvVar5 = (void *)(**(code **)(*plVar4 + 0x30))(plVar4,sVar6,8);
        goto joined_r0x039084c0;
      }
      lVar3 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      plVar4 = (long *)(lVar7 + 8);
      if (lVar3 != 0) {
        plVar4 = (long *)(lVar3 + 0xa8);
      }
      plVar4 = (long *)*plVar4;
      if (plVar4 != (long *)0x0) goto LAB_03908480;
      lVar7 = *(long *)puVar2;
      if (lVar7 != 0) goto LAB_039084d4;
LAB_039085a0:
      pvVar5 = malloc(sVar6);
    }
    if (pvVar5 != (void *)0x0) {
      *(void **)(param_1 + 0x40) = pvVar5;
      *(undefined4 *)(param_1 + 0x38) = 0;
      *(int *)(param_1 + 0x3c) = param_2;
    }
  }
LAB_03908520:
  if (param_3 < 1) {
    return;
  }
  lVar7 = *(long *)puVar2;
  sVar6 = (size_t)(param_3 << 3);
  if (lVar7 == 0) {
    pvVar5 = malloc(sVar6);
joined_r0x039085b8:
    if (pvVar5 != (void *)0x0) {
      *(void **)(param_1 + 0x50) = pvVar5;
      *(undefined4 *)(param_1 + 0x48) = 0;
      *(int *)(param_1 + 0x4c) = param_3;
    }
    lVar7 = *(long *)puVar2;
    if (lVar7 != 0) {
      if (param_4 == (long *)0x0) {
LAB_039085cc:
        lVar3 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
        puVar1 = (undefined8 *)(lVar7 + 8);
        if (lVar3 != 0) {
          puVar1 = (undefined8 *)(lVar3 + 0xa8);
        }
        param_4 = (long *)*puVar1;
        if (param_4 == (long *)0x0) {
          return;
        }
      }
      pvVar5 = (void *)(**(code **)(*param_4 + 0x30))(param_4,sVar6,8);
      goto joined_r0x03908610;
    }
  }
  else {
    plVar4 = param_4;
    if (param_4 != (long *)0x0) {
LAB_0390856c:
      pvVar5 = (void *)(**(code **)(*plVar4 + 0x30))(plVar4,sVar6,8);
      goto joined_r0x039085b8;
    }
    lVar3 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
    plVar4 = (long *)(lVar7 + 8);
    if (lVar3 != 0) {
      plVar4 = (long *)(lVar3 + 0xa8);
    }
    plVar4 = (long *)*plVar4;
    if (plVar4 != (long *)0x0) goto LAB_0390856c;
    lVar7 = *(long *)puVar2;
    if (lVar7 != 0) goto LAB_039085cc;
  }
  pvVar5 = malloc(sVar6);
joined_r0x03908610:
  if (pvVar5 != (void *)0x0) {
    *(void **)(param_1 + 0x60) = pvVar5;
    *(undefined4 *)(param_1 + 0x58) = 0;
    *(int *)(param_1 + 0x5c) = param_3;
  }
  return;
}


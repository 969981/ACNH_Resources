
void FUN_03bf3190(long param_1,ulong param_2)

{
  size_t __size;
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  void *pvVar5;
  ulong uVar6;
  long lVar7;
  
  puVar1 = PTR_DAT_04bb2698;
  if ((int)param_2 == 0) {
    return;
  }
  lVar7 = *(long *)PTR_DAT_04bb2698;
  __size = (param_2 & 0xffffffff) << 3;
  if (lVar7 == 0) {
    pvVar5 = malloc(__size);
    *(void **)(param_1 + 0x48) = pvVar5;
  }
  else {
    plVar2 = *(long **)(param_1 + 0x38);
    if (plVar2 == (long *)0x0) {
      lVar3 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      plVar2 = (long *)(lVar7 + 8);
      if (lVar3 != 0) {
        plVar2 = (long *)(lVar3 + 0xa8);
      }
      plVar2 = (long *)*plVar2;
      uVar4 = 0;
      if (plVar2 != (long *)0x0) goto LAB_03bf31fc;
    }
    else {
LAB_03bf31fc:
      uVar4 = (**(code **)(*plVar2 + 0x30))(plVar2,__size,8);
    }
    lVar7 = *(long *)puVar1;
    *(undefined8 *)(param_1 + 0x48) = uVar4;
    if (lVar7 != 0) {
      plVar2 = *(long **)(param_1 + 0x38);
      if (plVar2 == (long *)0x0) {
        lVar3 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
        plVar2 = (long *)(lVar7 + 8);
        if (lVar3 != 0) {
          plVar2 = (long *)(lVar3 + 0xa8);
        }
        plVar2 = (long *)*plVar2;
        pvVar5 = (void *)0x0;
        if (plVar2 == (long *)0x0) goto LAB_03bf3284;
      }
      pvVar5 = (void *)(**(code **)(*plVar2 + 0x30))(plVar2,(param_2 & 0xffffffff) << 2,8);
      goto LAB_03bf3284;
    }
  }
  pvVar5 = malloc((param_2 & 0xffffffff) << 2);
LAB_03bf3284:
  *(void **)(param_1 + 0x50) = pvVar5;
  if ((int)param_2 == 1) {
    uVar6 = 0;
  }
  else {
    uVar6 = 0;
    do {
      lVar7 = uVar6 * 8;
      lVar3 = uVar6 * 4;
      uVar6 = uVar6 + 2;
      *(undefined8 *)(*(long *)(param_1 + 0x48) + lVar7) = 0;
      *(undefined4 *)(*(long *)(param_1 + 0x50) + lVar3) = 0;
      *(undefined8 *)(*(long *)(param_1 + 0x48) + lVar7 + 8) = 0;
      *(undefined4 *)(*(long *)(param_1 + 0x50) + lVar3 + 4) = 0;
    } while ((param_2 & 0xfffffffe) != uVar6);
  }
  if ((param_2 & 1) != 0) {
    *(undefined8 *)(*(long *)(param_1 + 0x48) + uVar6 * 8) = 0;
    *(undefined4 *)(*(long *)(param_1 + 0x50) + uVar6 * 4) = 0;
  }
  *(short *)(param_1 + 0x44) = (short)param_2;
  return;
}


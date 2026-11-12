
void FUN_0070fcd0(long param_1,undefined8 param_2,long *param_3)

{
  undefined4 *puVar1;
  uint uVar2;
  int *piVar3;
  uint *puVar4;
  undefined *puVar5;
  long lVar6;
  long *plVar7;
  void *pvVar8;
  undefined8 uVar9;
  uint uVar10;
  uint uVar11;
  long lVar12;
  long local_60;
  undefined4 local_58;
  
  puVar5 = PTR_DAT_04bb2698;
  uVar10 = *(uint *)(param_1 + 0x278);
  if (DAT_04c8dfd8 <= uVar10) {
    uVar10 = 0;
  }
  uVar11 = *(uint *)(DAT_04c8dfe0 + (long)(int)uVar10 * 4);
  uVar10 = *(uint *)(param_1 + 0x278);
  if (DAT_04c8dfe8 <= uVar10) {
    uVar10 = 0;
  }
  uVar10 = *(uint *)(DAT_04c8dff0 + (long)(int)uVar10 * 4);
  if (0 < (int)uVar11) {
    lVar12 = *(long *)PTR_DAT_04bb2698;
    if (lVar12 == 0) {
      pvVar8 = malloc((ulong)uVar11 << 3);
joined_r0x00710000:
      if (pvVar8 != (void *)0x0) {
        *(uint *)(param_1 + 0x2c8) = uVar11;
        *(void **)(param_1 + 0x2d0) = pvVar8;
      }
    }
    else {
      plVar7 = param_3;
      if (param_3 != (long *)0x0) {
LAB_0070fd88:
        pvVar8 = (void *)(**(code **)(*plVar7 + 0x30))(plVar7,(ulong)uVar11 << 3,8);
        goto joined_r0x00710000;
      }
      lVar6 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar7 = (long *)(lVar12 + 8);
      if (lVar6 != 0) {
        plVar7 = (long *)(lVar6 + 0xa8);
      }
      plVar7 = (long *)*plVar7;
      if (plVar7 != (long *)0x0) goto LAB_0070fd88;
    }
    piVar3 = &DAT_04c8def8 + (ulong)*(uint *)(param_1 + 0x278) * 4;
    if (6 < *(uint *)(param_1 + 0x278)) {
      piVar3 = &DAT_04c8def8;
    }
    if (0 < *piVar3) {
      uVar11 = 0;
      do {
        puVar4 = &DAT_04c8def8 + (ulong)*(uint *)(param_1 + 0x278) * 4;
        if (6 < *(uint *)(param_1 + 0x278)) {
          puVar4 = &DAT_04c8def8;
        }
        uVar2 = uVar11;
        if (*puVar4 <= uVar11) {
          uVar2 = 0;
        }
        uVar2 = *(uint *)(*(long *)(puVar4 + 2) + (ulong)uVar2 * 4);
        if (DAT_04c8ded8 <= uVar2) {
          uVar2 = 0;
        }
        puVar1 = (undefined4 *)(DAT_04c8dee0 + (long)(int)uVar2 * 0x10);
        local_58 = *puVar1;
        local_60 = param_1;
        uVar9 = (**(code **)(puVar1 + 2))(&local_60,param_3);
        uVar2 = uVar11;
        if (*(uint *)(param_1 + 0x2c8) <= uVar11) {
          uVar2 = 0;
        }
        *(undefined8 *)(*(long *)(param_1 + 0x2d0) + (ulong)uVar2 * 8) = uVar9;
        uVar2 = uVar11;
        if (*(uint *)(param_1 + 0x2c8) <= uVar11) {
          uVar2 = 0;
        }
        plVar7 = *(long **)(*(long *)(param_1 + 0x2d0) + (ulong)uVar2 * 8);
        (**(code **)(*plVar7 + 0x20))(plVar7,param_3);
        uVar11 = uVar11 + 1;
        piVar3 = &DAT_04c8def8 + (ulong)*(uint *)(param_1 + 0x278) * 4;
        if (6 < *(uint *)(param_1 + 0x278)) {
          piVar3 = &DAT_04c8def8;
        }
      } while ((int)uVar11 < *piVar3);
    }
  }
  if ((int)uVar10 < 1) {
    return;
  }
  lVar12 = *(long *)puVar5;
  if (lVar12 == 0) {
    pvVar8 = malloc((ulong)uVar10 << 3);
  }
  else {
    plVar7 = param_3;
    if (param_3 == (long *)0x0) {
      lVar6 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar7 = (long *)(lVar12 + 8);
      if (lVar6 != 0) {
        plVar7 = (long *)(lVar6 + 0xa8);
      }
      plVar7 = (long *)*plVar7;
      if (plVar7 == (long *)0x0) goto LAB_0070fef8;
    }
    pvVar8 = (void *)(**(code **)(*plVar7 + 0x30))(plVar7,(ulong)uVar10 << 3,8);
  }
  if (pvVar8 != (void *)0x0) {
    *(uint *)(param_1 + 0x2d8) = uVar10;
    *(void **)(param_1 + 0x2e0) = pvVar8;
  }
LAB_0070fef8:
  piVar3 = &DAT_04c8df68 + (ulong)*(uint *)(param_1 + 0x278) * 4;
  if (6 < *(uint *)(param_1 + 0x278)) {
    piVar3 = &DAT_04c8df68;
  }
  if (0 < *piVar3) {
    uVar10 = 0;
    do {
      puVar4 = &DAT_04c8df68 + (ulong)*(uint *)(param_1 + 0x278) * 4;
      if (6 < *(uint *)(param_1 + 0x278)) {
        puVar4 = &DAT_04c8df68;
      }
      uVar11 = uVar10;
      if (*puVar4 <= uVar10) {
        uVar11 = 0;
      }
      uVar11 = *(uint *)(*(long *)(puVar4 + 2) + (ulong)uVar11 * 4);
      if (DAT_04c8dee8 <= uVar11) {
        uVar11 = 0;
      }
      puVar1 = (undefined4 *)(DAT_04c8def0 + (long)(int)uVar11 * 0x10);
      local_58 = *puVar1;
      local_60 = param_1;
      uVar9 = (**(code **)(puVar1 + 2))(&local_60,param_3);
      uVar11 = uVar10;
      if (*(uint *)(param_1 + 0x2d8) <= uVar10) {
        uVar11 = 0;
      }
      *(undefined8 *)(*(long *)(param_1 + 0x2e0) + (ulong)uVar11 * 8) = uVar9;
      uVar11 = uVar10;
      if (*(uint *)(param_1 + 0x2d8) <= uVar10) {
        uVar11 = 0;
      }
      plVar7 = *(long **)(*(long *)(param_1 + 0x2e0) + (ulong)uVar11 * 8);
      (**(code **)(*plVar7 + 0x20))(plVar7,param_3);
      uVar10 = uVar10 + 1;
      piVar3 = &DAT_04c8df68 + (ulong)*(uint *)(param_1 + 0x278) * 4;
      if (6 < *(uint *)(param_1 + 0x278)) {
        piVar3 = &DAT_04c8df68;
      }
    } while ((int)uVar10 < *piVar3);
  }
  return;
}


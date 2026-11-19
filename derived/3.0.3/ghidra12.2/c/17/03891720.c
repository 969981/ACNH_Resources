
void FUN_03891720(long param_1,ulong param_2,ulong param_3)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  undefined8 *puVar6;
  void *pvVar7;
  undefined8 *puVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  
  puVar3 = PTR_DAT_04bb3350;
  puVar2 = PTR_DAT_04bb2698;
  uVar1 = (uint)param_2 & 0xffff;
  if ((param_2 & 0xffff) == 0) goto LAB_03891878;
  lVar11 = *(long *)PTR_DAT_04bb2698;
  uVar10 = param_2 & 0xffff;
  if (lVar11 == 0) {
    puVar6 = malloc(uVar10 << 4);
joined_r0x038917b0:
    if (puVar6 != (undefined8 *)0x0) {
      param_2 = param_2 & 3;
      puVar8 = puVar6;
      if (param_2 != 0) {
        do {
          *puVar8 = 0;
          param_2 = param_2 - 1;
          *(undefined2 *)(puVar8 + 1) = 0;
          puVar8 = puVar8 + 2;
        } while (param_2 != 0);
      }
      if (2 < (uVar10 - 1 & 0xfffffffffffffff)) {
        do {
          *puVar8 = 0;
          *(undefined2 *)(puVar8 + 1) = 0;
          puVar8[2] = 0;
          *(undefined2 *)(puVar8 + 3) = 0;
          puVar8[4] = 0;
          *(undefined2 *)(puVar8 + 5) = 0;
          puVar8[6] = 0;
          *(undefined2 *)(puVar8 + 7) = 0;
          puVar8 = puVar8 + 8;
        } while (puVar8 != puVar6 + uVar10 * 2);
      }
      *(uint *)(param_1 + 0x30) = uVar1;
      *(undefined8 **)(param_1 + 0x38) = puVar6;
    }
  }
  else {
    lVar4 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    plVar5 = (long *)(lVar11 + 8);
    if (lVar4 != 0) {
      plVar5 = (long *)(lVar4 + 0xa8);
    }
    plVar5 = (long *)*plVar5;
    if (plVar5 != (long *)0x0) {
      puVar6 = (undefined8 *)(**(code **)(*plVar5 + 0x30))(plVar5,uVar10 << 4,8);
      goto joined_r0x038917b0;
    }
  }
  lVar11 = *(long *)puVar2;
  uVar1 = uVar1 + 1 >> 1;
  if (lVar11 == 0) {
    pvVar7 = malloc((ulong)uVar1);
  }
  else {
    lVar4 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar3 + 0x68));
    plVar5 = (long *)(lVar11 + 8);
    if (lVar4 != 0) {
      plVar5 = (long *)(lVar4 + 0xa8);
    }
    plVar5 = (long *)*plVar5;
    if (plVar5 == (long *)0x0) goto LAB_03891878;
    pvVar7 = (void *)(**(code **)(*plVar5 + 0x30))(plVar5,(ulong)uVar1,8);
  }
  if (pvVar7 != (void *)0x0) {
    *(uint *)(param_1 + 0x58) = uVar1;
    *(void **)(param_1 + 0x60) = pvVar7;
  }
LAB_03891878:
  if ((param_3 & 0xff) != 0) {
    lVar11 = *(long *)puVar2;
    uVar10 = param_3 & 0xff;
    if (lVar11 == 0) {
      puVar6 = malloc(uVar10 << 4);
    }
    else {
      lVar4 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar3 + 0x68));
      plVar5 = (long *)(lVar11 + 8);
      if (lVar4 != 0) {
        plVar5 = (long *)(lVar4 + 0xa8);
      }
      plVar5 = (long *)*plVar5;
      if (plVar5 == (long *)0x0) {
        return;
      }
      puVar6 = (undefined8 *)(**(code **)(*plVar5 + 0x30))(plVar5,uVar10 << 4,8);
    }
    if (puVar6 != (undefined8 *)0x0) {
      uVar9 = param_3 & 3;
      puVar8 = puVar6;
      if (uVar9 != 0) {
        do {
          *puVar8 = 0;
          uVar9 = uVar9 - 1;
          *(undefined2 *)(puVar8 + 1) = 0;
          puVar8 = puVar8 + 2;
        } while (uVar9 != 0);
      }
      if (2 < (uVar10 - 1 & 0xfffffffffffffff)) {
        do {
          *puVar8 = 0;
          *(undefined2 *)(puVar8 + 1) = 0;
          puVar8[2] = 0;
          *(undefined2 *)(puVar8 + 3) = 0;
          puVar8[4] = 0;
          *(undefined2 *)(puVar8 + 5) = 0;
          puVar8[6] = 0;
          *(undefined2 *)(puVar8 + 7) = 0;
          puVar8 = puVar8 + 8;
        } while (puVar8 != puVar6 + uVar10 * 2);
      }
      *(uint *)(param_1 + 0x40) = (uint)param_3 & 0xff;
      *(undefined8 **)(param_1 + 0x48) = puVar6;
    }
  }
  return;
}


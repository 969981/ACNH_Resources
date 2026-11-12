
void FUN_006db044(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  void *pvVar6;
  uint *puVar7;
  uint uVar8;
  uint uVar9;
  long lVar10;
  
  puVar4 = PTR_DAT_04bb3350;
  puVar3 = PTR_DAT_04bb2698;
  lVar10 = *(long *)PTR_DAT_04bb2698;
  if (lVar10 == 0) {
    pvVar6 = malloc(0x20);
  }
  else {
    lVar5 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    puVar2 = (undefined8 *)(lVar10 + 8);
    if (lVar5 != 0) {
      puVar2 = (undefined8 *)(lVar5 + 0xa8);
    }
    pvVar6 = (void *)(**(code **)(*(long *)*puVar2 + 0x30))((long *)*puVar2,0x20,8);
  }
  FUN_006db2b0(pvVar6,param_2,param_3);
  *param_1 = pvVar6;
  lVar10 = *(long *)puVar3;
  if (lVar10 == 0) {
    pvVar6 = malloc(0x20);
  }
  else {
    lVar5 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar4 + 0x68));
    puVar2 = (undefined8 *)(lVar10 + 8);
    if (lVar5 != 0) {
      puVar2 = (undefined8 *)(lVar5 + 0xa8);
    }
    pvVar6 = (void *)(**(code **)(*(long *)*puVar2 + 0x30))((long *)*puVar2,0x20,8);
  }
  FUN_006db2b0(pvVar6,param_2,param_3);
  param_1[1] = pvVar6;
  puVar7 = (uint *)*param_1;
  uVar9 = *puVar7;
  if (0 < (int)uVar9) {
    uVar8 = 0;
    do {
      uVar1 = uVar8;
      if (uVar9 <= uVar8) {
        uVar1 = 0;
      }
      *(undefined8 *)(*(long *)(puVar7 + 2) + (ulong)uVar1 * 0xa8) = 0;
      uVar9 = uVar8;
      if (*puVar7 <= uVar8) {
        uVar9 = 0;
      }
      *(undefined1 *)(*(long *)(puVar7 + 2) + (ulong)uVar9 * 0xa8 + 8) = 0;
      uVar9 = uVar8;
      if (*puVar7 <= uVar8) {
        uVar9 = 0;
      }
      *(undefined1 *)(*(long *)(puVar7 + 2) + (ulong)uVar9 * 0xa8 + 0x59) = 0;
      uVar9 = uVar8;
      if (*puVar7 <= uVar8) {
        uVar9 = 0;
      }
      *(undefined1 *)(*(long *)(puVar7 + 2) + (ulong)uVar9 * 0xa8 + 0x7a) = 0;
      uVar9 = uVar8;
      if (*puVar7 <= uVar8) {
        uVar9 = 0;
      }
      uVar8 = uVar8 + 1;
      *(undefined8 *)(*(long *)(puVar7 + 2) + (ulong)uVar9 * 0xa8 + 0xa0) = 0;
      uVar9 = *puVar7;
    } while ((int)uVar8 < (int)uVar9);
  }
  puVar7[6] = 0;
  puVar7[7] = 0;
  puVar7 = (uint *)param_1[1];
  uVar9 = *puVar7;
  if (0 < (int)uVar9) {
    uVar8 = 0;
    do {
      uVar1 = uVar8;
      if (uVar9 <= uVar8) {
        uVar1 = 0;
      }
      *(undefined8 *)(*(long *)(puVar7 + 2) + (ulong)uVar1 * 0xa8) = 0;
      uVar9 = uVar8;
      if (*puVar7 <= uVar8) {
        uVar9 = 0;
      }
      *(undefined1 *)(*(long *)(puVar7 + 2) + (ulong)uVar9 * 0xa8 + 8) = 0;
      uVar9 = uVar8;
      if (*puVar7 <= uVar8) {
        uVar9 = 0;
      }
      *(undefined1 *)(*(long *)(puVar7 + 2) + (ulong)uVar9 * 0xa8 + 0x59) = 0;
      uVar9 = uVar8;
      if (*puVar7 <= uVar8) {
        uVar9 = 0;
      }
      *(undefined1 *)(*(long *)(puVar7 + 2) + (ulong)uVar9 * 0xa8 + 0x7a) = 0;
      uVar9 = uVar8;
      if (*puVar7 <= uVar8) {
        uVar9 = 0;
      }
      uVar8 = uVar8 + 1;
      *(undefined8 *)(*(long *)(puVar7 + 2) + (ulong)uVar9 * 0xa8 + 0xa0) = 0;
      uVar9 = *puVar7;
    } while ((int)uVar8 < (int)uVar9);
  }
  puVar7[6] = 0;
  puVar7[7] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  param_1[2] = 1;
  return;
}


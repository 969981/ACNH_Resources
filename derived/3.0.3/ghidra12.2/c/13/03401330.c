
void FUN_03401330(uint *param_1,long param_2)

{
  uint uVar1;
  bool bVar2;
  ulong uVar3;
  long *plVar4;
  void *pvVar5;
  ulong uVar6;
  undefined8 uVar7;
  ulong uVar8;
  long lVar9;
  size_t sVar10;
  long lVar11;
  undefined **local_208;
  ulong local_200;
  undefined1 *local_1f8;
  undefined1 auStack_1f0 [128];
  ulong local_170;
  undefined1 *local_168;
  undefined1 auStack_160 [128];
  ulong local_e0;
  undefined1 *local_d8;
  undefined1 auStack_d0 [128];
  undefined **local_50;
  undefined ***pppuStack_48;
  
  pppuStack_48 = &local_208;
  local_208 = &PTR_FUN_04b29618;
  local_200 = 0x1000000000;
  local_1f8 = auStack_1f0;
  local_168 = auStack_160;
  local_d8 = auStack_d0;
  local_170 = 0x1000000000;
  local_e0 = 0x1000000000;
  local_50 = &PTR_FUN_04aab480;
  if (*(long *)(param_2 + 0x40) != param_2 + 0x38) {
    lVar11 = (long)*(int *)(param_2 + 0x4c);
    lVar9 = *(long *)(param_2 + 0x40) - lVar11;
    do {
      uVar3 = (*(code *)*local_50)(&local_50,lVar9);
      if ((uVar3 & 1) != 0) break;
      lVar9 = *(long *)(lVar9 + lVar11 + 8) - lVar11;
    } while (lVar9 != (param_2 + 0x38) - lVar11);
    uVar1 = (uint)local_200;
    uVar3 = local_200 & 0xffffffff;
    if (0 < (int)(uint)local_200) {
      sVar10 = uVar3 << 3;
      lVar9 = *(long *)PTR_DAT_04bb2698;
      if (lVar9 == 0) {
        pvVar5 = malloc(sVar10);
joined_r0x0340144c:
        if (pvVar5 != (void *)0x0) {
          *param_1 = uVar1;
          *(void **)(param_1 + 2) = pvVar5;
        }
      }
      else {
        lVar11 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
        plVar4 = (long *)(lVar9 + 8);
        if (lVar11 != 0) {
          plVar4 = (long *)(lVar11 + 0xa8);
        }
        plVar4 = (long *)*plVar4;
        if (plVar4 != (long *)0x0) {
          pvVar5 = (void *)(**(code **)(*plVar4 + 0x30))(plVar4,sVar10,8);
          goto joined_r0x0340144c;
        }
      }
      uVar6 = 0;
      do {
        if (uVar6 < (local_200 & 0xffffffff)) {
          uVar7 = *(undefined8 *)(local_1f8 + uVar6 * 8);
        }
        else {
          uVar7 = 0;
        }
        uVar8 = uVar6 & 0xffffffff;
        bVar2 = *param_1 <= uVar6;
        uVar6 = uVar6 + 1;
        if (bVar2) {
          uVar8 = 0;
        }
        *(undefined8 *)(*(long *)(param_1 + 2) + uVar8 * 8) = uVar7;
      } while (uVar3 != uVar6);
    }
  }
  uVar1 = (uint)local_170;
  uVar3 = local_170 & 0xffffffff;
  if (((uint)local_170 != 0) && (0 < (int)(uint)local_170)) {
    sVar10 = uVar3 << 3;
    lVar9 = *(long *)PTR_DAT_04bb2698;
    if (lVar9 == 0) {
      pvVar5 = malloc(sVar10);
joined_r0x03401514:
      if (pvVar5 != (void *)0x0) {
        param_1[4] = uVar1;
        *(void **)(param_1 + 6) = pvVar5;
      }
    }
    else {
      lVar11 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      plVar4 = (long *)(lVar9 + 8);
      if (lVar11 != 0) {
        plVar4 = (long *)(lVar11 + 0xa8);
      }
      plVar4 = (long *)*plVar4;
      if (plVar4 != (long *)0x0) {
        pvVar5 = (void *)(**(code **)(*plVar4 + 0x30))(plVar4,sVar10,8);
        goto joined_r0x03401514;
      }
    }
    uVar6 = 0;
    do {
      if (uVar6 < (local_170 & 0xffffffff)) {
        uVar7 = *(undefined8 *)(local_168 + uVar6 * 8);
      }
      else {
        uVar7 = 0;
      }
      uVar8 = uVar6 & 0xffffffff;
      bVar2 = param_1[4] <= uVar6;
      uVar6 = uVar6 + 1;
      if (bVar2) {
        uVar8 = 0;
      }
      *(undefined8 *)(*(long *)(param_1 + 6) + uVar8 * 8) = uVar7;
    } while (uVar3 != uVar6);
  }
  uVar1 = (uint)local_e0;
  uVar3 = local_e0 & 0xffffffff;
  if ((uint)local_e0 == 0) {
    return;
  }
  if ((int)(uint)local_e0 < 1) {
    return;
  }
  sVar10 = uVar3 << 3;
  lVar9 = *(long *)PTR_DAT_04bb2698;
  if (lVar9 == 0) {
    pvVar5 = malloc(sVar10);
  }
  else {
    lVar11 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
    plVar4 = (long *)(lVar9 + 8);
    if (lVar11 != 0) {
      plVar4 = (long *)(lVar11 + 0xa8);
    }
    plVar4 = (long *)*plVar4;
    if (plVar4 == (long *)0x0) goto LAB_034015f0;
    pvVar5 = (void *)(**(code **)(*plVar4 + 0x30))(plVar4,sVar10,8);
  }
  if (pvVar5 != (void *)0x0) {
    param_1[8] = uVar1;
    *(void **)(param_1 + 10) = pvVar5;
  }
LAB_034015f0:
  uVar6 = 0;
  do {
    if (uVar6 < (local_e0 & 0xffffffff)) {
      uVar7 = *(undefined8 *)(local_d8 + uVar6 * 8);
    }
    else {
      uVar7 = 0;
    }
    uVar8 = uVar6 & 0xffffffff;
    bVar2 = param_1[8] <= uVar6;
    uVar6 = uVar6 + 1;
    if (bVar2) {
      uVar8 = 0;
    }
    *(undefined8 *)(*(long *)(param_1 + 10) + uVar8 * 8) = uVar7;
  } while (uVar3 != uVar6);
  return;
}


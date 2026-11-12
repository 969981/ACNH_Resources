
undefined8 FUN_00a71d50(byte *param_1)

{
  uint *puVar1;
  long lVar2;
  char cVar3;
  int iVar4;
  long *plVar5;
  ulong uVar6;
  uint uVar7;
  uint *puVar8;
  long lVar9;
  byte local_18 [4];
  byte local_14 [4];
  
  if (-1 < (int)*(uint *)PTR_DAT_04bb6260) {
    uVar6 = 0;
    puVar8 = (uint *)PTR_DAT_04bb6258;
    do {
      puVar1 = puVar8;
      if (999 < uVar6) {
        puVar1 = (uint *)PTR_DAT_04bb6258;
      }
      if ((*puVar1 != 0) && (*(long *)(puVar1 + 2) == *(long *)(param_1 + 8))) {
        if ((uint)uVar6 != 0xffffffff) {
          if (999 < (uint)uVar6) {
            puVar8 = (uint *)PTR_DAT_04bb6258;
          }
          uVar7 = *puVar8;
          goto LAB_00a71dd8;
        }
        break;
      }
      uVar6 = uVar6 + 1;
      puVar8 = puVar8 + 4;
    } while ((ulong)*(uint *)PTR_DAT_04bb6260 + 1 != uVar6);
  }
  uVar7 = 0;
LAB_00a71dd8:
  if (DAT_04c93e08 == 0) {
    return 0;
  }
  if ((((uVar7 == 0) ||
       (lVar9 = *(long *)(*(long *)(*(long *)(DAT_04c93e08 + 0x1c0) + 8) +
                         (ulong)(uVar7 >> 0x14) * 8), lVar9 == 0)) ||
      ((*(uint *)(lVar9 + 0x248) >> 1 & 1) != 0)) || (*(uint *)(lVar9 + 0x230) != uVar7)) {
    lVar9 = 0;
  }
  if (*(int *)(DAT_04c93e08 + 0x288) == 1 || *(int *)(DAT_04c93e08 + 0x288) == -1) {
    plVar5 = (long *)nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
    lVar2 = DAT_04c93e08;
    iVar4 = (**(code **)(*plVar5 + 0x60))();
    if (iVar4 < 0x11) {
      uVar7 = 1;
      goto joined_r0x00a71e78;
    }
    if (*(uint *)(lVar2 + 0x5e8) < 5) {
      uVar7 = 0x1aU >> (ulong)(*(uint *)(lVar2 + 0x5e8) & 0x1f) & 1;
      goto joined_r0x00a71e78;
    }
  }
  uVar7 = 0;
joined_r0x00a71e78:
  if (lVar9 != 0) {
    uVar7 = uVar7 ^ 1;
    if (*(int *)(lVar9 + 0x150) != 1) {
      uVar7 = 1;
    }
    if (uVar7 != 0) {
      return 0;
    }
    if ((*(uint *)(lVar9 + 0x248) >> 4 & 1) == 0) {
      return 0;
    }
    local_18[0] = *param_1;
    if (7 < local_18[0]) {
      local_18[0] = 0xff;
    }
    if ((*(byte *)(lVar9 + 0x286) >> 2 & 1) == 0) {
      local_14[0] = local_18[0];
      cVar3 = FUN_00a7cb44(local_14,*(undefined8 *)(param_1 + 8));
    }
    else {
      cVar3 = FUN_00a7d3ac(local_18,*(undefined8 *)(param_1 + 8),*(undefined4 *)(param_1 + 0x10));
    }
    if (cVar3 != '\x01') {
      if (cVar3 == '\x02') {
        param_1[0x1c] = 6;
        param_1[0x1d] = 0;
        param_1[0x1e] = 0;
        param_1[0x1f] = 0;
        return 1;
      }
      return 1;
    }
  }
  return 0;
}


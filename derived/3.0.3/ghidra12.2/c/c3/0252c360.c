
bool FUN_0252c360(byte *param_1)

{
  uint *puVar1;
  long lVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  long *plVar6;
  ulong uVar7;
  uint *puVar8;
  
  uVar3 = FUN_00a74b78();
  if (3 < uVar3) {
    return false;
  }
  if (uVar3 == 1) {
    return false;
  }
  if (7 < *param_1) {
    return false;
  }
  uVar3 = FUN_02582d8c(param_1,1);
  if (7 < uVar3) {
    return false;
  }
  if (*(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar3 * 0x13f0 + 0x13d4) == '\0') {
    return false;
  }
  if (*(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar3 * 0x13f0 + 0x13d6) == '\0') {
    return false;
  }
  lVar5 = FUN_00a77090(param_1);
  if ((lVar5 != 0) && (-1 < (int)DAT_04c47dc0)) {
    uVar7 = 0;
    puVar8 = (uint *)PTR_DAT_04bb6258;
    do {
      puVar1 = puVar8;
      if (999 < uVar7) {
        puVar1 = (uint *)PTR_DAT_04bb6258;
      }
      if ((*puVar1 != 0) && (*(long *)(puVar1 + 2) == *(long *)(lVar5 + 0x10))) {
        if ((uint)uVar7 != 0xffffffff) {
          if (999 < (uint)uVar7) {
            puVar8 = (uint *)PTR_DAT_04bb6258;
          }
          uVar3 = *puVar8;
          goto LAB_0252c468;
        }
        break;
      }
      uVar7 = uVar7 + 1;
      puVar8 = puVar8 + 4;
    } while ((ulong)DAT_04c47dc0 + 1 != uVar7);
  }
  uVar3 = 0;
LAB_0252c468:
  if (DAT_04c93e08 == 0) {
    return false;
  }
  if ((((uVar3 == 0) ||
       (lVar5 = *(long *)(*(long *)(*(long *)(DAT_04c93e08 + 0x1c0) + 8) +
                         (ulong)(uVar3 >> 0x14) * 8), lVar5 == 0)) ||
      ((*(uint *)(lVar5 + 0x248) >> 1 & 1) != 0)) || (*(uint *)(lVar5 + 0x230) != uVar3)) {
    lVar5 = 0;
  }
  if (*(int *)(DAT_04c93e08 + 0x288) == 1 || *(int *)(DAT_04c93e08 + 0x288) == -1) {
    plVar6 = (long *)nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
    lVar2 = DAT_04c93e08;
    iVar4 = (**(code **)(*plVar6 + 0x60))();
    if (iVar4 < 0x11) {
      uVar3 = 1;
      goto LAB_0252c50c;
    }
    if (*(uint *)(lVar2 + 0x5e8) < 5) {
      uVar3 = 0x1aU >> (ulong)(*(uint *)(lVar2 + 0x5e8) & 0x1f) & 1;
      goto LAB_0252c50c;
    }
  }
  uVar3 = 0;
LAB_0252c50c:
  if (lVar5 != 0) {
    uVar3 = uVar3 ^ 1;
    if (*(int *)(lVar5 + 0x150) != 1) {
      uVar3 = 1;
    }
    if (uVar3 == 0) {
      return *(int *)(lVar5 + 0x15c) == 10;
    }
  }
  return false;
}


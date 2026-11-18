
void FUN_035af324(uint *param_1)

{
  uint uVar1;
  undefined *puVar2;
  int iVar3;
  long *plVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  
  puVar2 = PTR_DAT_04bb27c0;
  uVar5 = *param_1;
  lVar6 = *(long *)PTR_DAT_04bb27c0;
  if (uVar5 != 0 && lVar6 == 0) {
    *(undefined1 *)(param_1 + 0x2c) = 1;
  }
  if (param_1[2] != 2) {
    return;
  }
  if ((uVar5 == 0) && ((char)param_1[0x2c] == '\0')) {
    return;
  }
  if (lVar6 == 0) goto LAB_035af430;
  if ((((uVar5 == 0) ||
       (lVar7 = *(long *)(*(long *)(*(long *)(lVar6 + 0x1c0) + 8) +
                         ((ulong)(uVar5 >> 0x11) & 0x7ff8)), lVar7 == 0)) ||
      ((*(uint *)(lVar7 + 0x248) >> 1 & 1) != 0)) || (*(uint *)(lVar7 + 0x230) != uVar5)) {
    lVar7 = 0;
  }
  if (*(int *)(lVar6 + 0x288) == 1 || *(int *)(lVar6 + 0x288) == -1) {
    plVar4 = (long *)nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
    lVar6 = *(long *)puVar2;
    iVar3 = (**(code **)(*plVar4 + 0x60))();
    if (iVar3 < 0x11) {
      uVar5 = 1;
    }
    else {
      if (4 < *(uint *)(lVar6 + 0x5e8)) goto LAB_035af408;
      uVar5 = 0x1aU >> (ulong)(*(uint *)(lVar6 + 0x5e8) & 0x1f) & 1;
    }
  }
  else {
LAB_035af408:
    uVar5 = 0;
  }
  if (lVar7 != 0) {
    uVar1 = 0;
    if ((char)param_1[0x2c] == '\0') {
      uVar1 = uVar5;
    }
    if (uVar1 != 0) {
      return;
    }
  }
LAB_035af430:
  *param_1 = 0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 0x2c) = 0;
  return;
}


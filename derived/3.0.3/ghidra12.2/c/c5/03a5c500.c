
void FUN_03a5c500(long param_1)

{
  uint uVar1;
  int iVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  uint uVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  uint uVar11;
  uint uVar12;
  undefined1 auStack_158 [280];
  
  if (*(char *)(param_1 + 0x984) == '\0') {
    return;
  }
  lVar4 = nn::os::GetSystemTick();
  lVar4 = lVar4 - *(long *)(param_1 + 0x9a8);
  if (lVar4 + 0x20c49ba5e353f7U < 0x4189374bc6a7ee) {
    lVar9 = 0;
    if (*(long *)PTR_DAT_04bb29d0 != 0) {
      lVar9 = (lVar4 * 1000) / *(long *)PTR_DAT_04bb29d0;
    }
  }
  else {
    lVar9 = 0;
    if (DAT_05ae7888 != 0) {
      lVar9 = lVar4 / DAT_05ae7888;
    }
    lVar9 = lVar9 * 1000;
  }
  if (lVar9 <= (long)(ulong)*(uint *)(param_1 + 0x9a0)) {
    return;
  }
  uVar5 = nn::os::GetSystemTick();
  uVar11 = *(uint *)(param_1 + 0x998);
  *(undefined8 *)(param_1 + 0x9a8) = uVar5;
  if (uVar11 == 0) {
    return;
  }
  uVar6 = *(uint *)(param_1 + 0x9b0);
  lVar4 = param_1 + 0x988;
  if ((int)uVar6 < (int)uVar11) {
    if (uVar11 <= uVar6) {
      lVar9 = 0;
      goto LAB_03a5c61c;
    }
  }
  else {
    uVar6 = 0;
    *(undefined4 *)(param_1 + 0x9b0) = 0;
  }
  uVar1 = uVar6 & ((int)uVar6 >> 0x1f ^ 0xffffffffU);
  uVar11 = uVar1 + 1;
  uVar12 = uVar11 & 3;
  lVar9 = lVar4;
  if (2 < uVar1) {
    uVar11 = uVar11 & 0xfffffffc;
    do {
      uVar11 = uVar11 - 4;
      lVar9 = *(long *)(*(long *)(*(long *)(*(long *)(lVar9 + 8) + 8) + 8) + 8);
    } while (uVar11 != 0);
  }
  for (; uVar12 != 0; uVar12 = uVar12 - 1) {
    lVar9 = *(long *)(lVar9 + 8);
  }
LAB_03a5c61c:
  lVar7 = (long)*(int *)(param_1 + 0x99c);
  lVar10 = 0;
  if (lVar9 != 0) {
    lVar10 = lVar9 - lVar7;
  }
  if (lVar10 == lVar4 - lVar7 || *(uint *)(param_1 + 0x9a4) == 0) {
    uVar12 = 1;
  }
  else {
    uVar11 = 1;
    do {
      lVar9 = *(long *)(lVar10 + 0x38);
      if (((**(char **)(lVar9 + 0x5d8) != '\0') && (*(char *)(lVar10 + 0x30) != '\0')) &&
         (*(long *)(lVar10 + 0x28) != -1)) {
        *(undefined8 *)(lVar10 + 0x28) = 0xffffffffffffffff;
        *(uint *)(param_1 + 0x9b0) = *(int *)(param_1 + 0x9b0) + uVar11;
        FUN_038fb9b0(DAT_05ae78f0);
        uVar11 = *(uint *)(param_1 + 0x7c8);
        if ((int)uVar11 < 1) {
          uVar6 = 0xffffffff;
          goto LAB_03a5c71c;
        }
        uVar8 = 0;
        lVar4 = *(long *)(param_1 + 2000) + -0x600;
        uVar6 = 0xffffffff;
        goto LAB_03a5c6f4;
      }
      uVar12 = uVar11 + 1;
      lVar10 = *(long *)(lVar10 + lVar7 + 8) - lVar7;
      bVar3 = uVar11 < *(uint *)(param_1 + 0x9a4);
      uVar11 = uVar12;
    } while (lVar10 != lVar4 - lVar7 && bVar3);
  }
  *(uint *)(param_1 + 0x9b0) = uVar12 + uVar6;
  return;
  while (uVar8 = uVar8 + 1, uVar11 != uVar8) {
LAB_03a5c6f4:
    lVar4 = lVar4 + 0x600;
    if (lVar4 == lVar9) {
      uVar6 = (uint)uVar8;
      break;
    }
  }
LAB_03a5c71c:
  uVar12 = uVar6;
  if (uVar11 <= uVar6) {
    uVar12 = 0;
  }
  lVar4 = *(long *)(param_1 + 2000) + (long)(int)uVar12 * 0x600;
  iVar2 = *(int *)(lVar4 + 0x4a0);
  (**(code **)(*(long *)(lVar4 + 0x5d0) + 0x18))(lVar4 + 0x5d0);
  uVar5 = *(undefined8 *)(lVar4 + 0x5d8);
  (**(code **)(*(long *)(lVar4 + 0x5e0) + 0x18))(lVar4 + 0x5e0);
  FUN_03916884(auStack_158,"%s/%s",uVar5,*(undefined8 *)(lVar4 + 0x5e8));
  FUN_03a5c130(param_1,lVar4,auStack_158,auStack_158,1);
  if (iVar2 < 0) {
    return;
  }
  FUN_03a5bbf0(param_1,iVar2,1,uVar6);
  return;
}


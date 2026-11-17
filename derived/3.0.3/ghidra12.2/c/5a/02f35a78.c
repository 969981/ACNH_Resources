
void FUN_02f35a78(long param_1)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined *puVar5;
  uint uVar6;
  ulong uVar7;
  long *plVar8;
  uint uVar9;
  long lVar10;
  undefined4 uVar11;
  undefined **local_50;
  undefined4 local_48;
  
  uVar7 = (**(code **)(**(long **)(param_1 + 0x210) + 0x60))();
  if ((uVar7 & 1) != 0) {
    return;
  }
  uVar7 = (**(code **)(**(long **)(param_1 + 0x210) + 0x68))();
  if ((uVar7 & 1) != 0) {
    return;
  }
  plVar8 = *(long **)(*(long *)(param_1 + 0x210) + 0x1b0);
  if ((plVar8 != (long *)0x0) && (uVar7 = (**(code **)(*plVar8 + 0x50))(), (uVar7 & 1) != 0)) {
    return;
  }
  lVar1 = param_1 + 0x1f8;
  if (((((*(byte *)(param_1 + 0x1f8) < 8) &&
        (uVar6 = FUN_02582d8c(lVar1,1), puVar5 = PTR_DAT_04bb4fb8, uVar6 < 8)) &&
       (*(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar6 * 0x13f0 + 0x13d4) != '\0')) &&
      ((*(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar6 * 0x13f0 + 0x13d6) != '\0' &&
       (uVar6 = FUN_02582d8c(lVar1,1), uVar6 < 8)))) &&
     (*(char *)(*(long *)puVar5 + (ulong)uVar6 * 0x13f0 + 0x13d4) != '\0')) {
    uVar6 = *(uint *)(*(long *)puVar5 + (ulong)uVar6 * 0x13f0 + 8);
    if (9 < (int)uVar6) {
      uVar6 = 10;
    }
    uVar6 = uVar6 & ((int)uVar6 >> 0x1f ^ 0xffffffffU);
  }
  else {
    uVar6 = 0;
  }
  uVar9 = *(uint *)(param_1 + 0x218);
  if (uVar6 == uVar9) {
    if ((uVar6 != 10) && (*(char *)(param_1 + 0x220) != '\0')) {
      return;
    }
    goto LAB_02f35d38;
  }
  uVar3 = uVar9 - 1;
  if (uVar9 <= uVar6) {
    uVar3 = uVar6;
  }
  lVar10 = *(long *)(param_1 + 0x210);
  if ((*(char *)(lVar10 + 0x290) == '\0') &&
     ((uVar6 = *(uint *)(lVar10 + 0x260), uVar6 != uVar3 || (uVar6 != *(uint *)(lVar10 + 0x264)))))
  {
    *(uint *)(lVar10 + 0x294) = uVar6;
    *(uint *)(lVar10 + 0x298) = uVar3;
    *(undefined1 *)(lVar10 + 0x290) = 1;
    *(undefined1 *)(lVar10 + 0x29c) = 1;
    uVar9 = *(uint *)(param_1 + 0x218);
  }
  iVar4 = uVar3 - uVar9;
  iVar2 = -iVar4;
  if (-1 < iVar4) {
    iVar2 = iVar4;
  }
  if (iVar2 == 1) {
    lVar10 = *(long *)(param_1 + 0x210);
    if (iVar4 < 1) {
      plVar8 = *(long **)(*(long *)(lVar10 + 0x230) + (ulong)(1 < *(uint *)(lVar10 + 0x228)) * 8);
    }
    else {
      plVar8 = (long *)**(undefined8 **)(lVar10 + 0x230);
    }
    local_50 = (undefined **)(PTR_DAT_04bc4e68 + 0x10);
    local_48 = 1;
    (**(code **)(*plVar8 + 0x18))(plVar8,&local_50);
    uVar11 = 0x3f800000;
    (**(code **)(plVar8[3] + 400))(0x3f800000,plVar8[1]);
    if (uVar3 == 10) {
      plVar8 = *(long **)(*(long *)(*(long *)(param_1 + 0x210) + 0x230) +
                         (ulong)(2 < *(uint *)(*(long *)(param_1 + 0x210) + 0x228)) * 0x10);
      local_50 = &PTR_FUN_04aa77b8;
      local_48 = 1;
      (**(code **)(*plVar8 + 0x18))(plVar8,&local_50);
    }
    else {
      if ((9 < uVar3) || (*(int *)(param_1 + 0x218) != 10)) goto LAB_02f35d34;
      plVar8 = *(long **)(*(long *)(*(long *)(param_1 + 0x210) + 0x230) +
                         (ulong)(2 < *(uint *)(*(long *)(param_1 + 0x210) + 0x228)) * 0x10);
      local_50 = &PTR_FUN_04aa77b8;
      local_48 = 1;
      (**(code **)(*plVar8 + 0x18))(plVar8,&local_50);
      uVar11 = 0xbf800000;
    }
    (**(code **)(plVar8[3] + 400))(uVar11,plVar8[1]);
  }
LAB_02f35d34:
  *(uint *)(param_1 + 0x218) = uVar3;
  uVar6 = uVar3;
LAB_02f35d38:
  *(undefined1 *)(param_1 + 0x220) = 0;
  if (uVar6 == 0) {
    uVar7 = FUN_02532880(lVar1,PTR_DAT_04bb3238);
    if ((uVar7 & 1) != 0) {
      if (*(int *)(param_1 + 0x224) < 10) {
        *(int *)(param_1 + 0x224) = *(int *)(param_1 + 0x224) + 1;
        return;
      }
      *(undefined4 *)(param_1 + 0x224) = 0;
    }
    if (*(int *)(param_1 + 0x1f0 + (ulong)*(byte *)(param_1 + 0x200) * 4) == -1) {
      *(undefined4 *)(param_1 + 0x1f0 + (ulong)*(byte *)(param_1 + 0x200) * 4) = 1;
    }
  }
  return;
}


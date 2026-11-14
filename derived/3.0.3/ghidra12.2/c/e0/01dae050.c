
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01dae050(void)

{
  undefined *puVar1;
  uint *puVar2;
  byte bVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  undefined8 *puVar7;
  long *plVar8;
  long lVar9;
  byte *pbVar10;
  long lVar11;
  undefined **local_80;
  undefined *puStack_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined *local_60 [4];
  int local_3c;
  undefined4 local_38;
  byte local_18 [4];
  undefined4 local_14;
  
  FUN_0081686c(DAT_04ccdcc0);
  FUN_00a81c00(DAT_04da6480);
  lVar11 = DAT_04da7238;
  if (DAT_05574040 == 0) {
LAB_01dae0fc:
    lVar9 = 0;
    plVar8 = _DAT_00000028;
    if (_DAT_00000028 != (long *)0x0) goto LAB_01dae108;
LAB_01dae160:
    FUN_00930750(lVar11 + 0x651f0,*(long *)(lVar9 + 0x10) + *(long *)(lVar9 + 8) + 0x1e35f0);
  }
  else {
    puVar7 = *(undefined8 **)(DAT_05574040 + 0x10);
    if ((*(byte *)(DAT_05574040 + 0x453) & 1) == 0) {
      lVar5 = (**(code **)(*(long *)*puVar7 + 0x38))();
      lVar9 = 0;
      if (lVar5 != 0) {
        lVar9 = lVar5 + 0x70;
      }
      plVar8 = *(long **)(lVar9 + 0x28);
    }
    else {
      if ((puVar7 == (undefined8 *)0x0) || ((long *)puVar7[0x26] == (long *)0x0)) goto LAB_01dae0fc;
      lVar9 = (**(code **)(*(long *)puVar7[0x26] + 0x38))();
      plVar8 = *(long **)(lVar9 + 0x28);
    }
    if (plVar8 == (long *)0x0) goto LAB_01dae160;
LAB_01dae108:
    if ((undefined8 *)*plVar8 == (undefined8 *)0x0) goto LAB_01dae160;
    uVar6 = (*(code *)**(undefined8 **)*plVar8)();
    FUN_00930750(lVar11 + 0x651f0,*(long *)(lVar9 + 0x10) + *(long *)(lVar9 + 8) + 0x1e35f0);
    if ((((uVar6 & 1) != 0) && (*(long *)(lVar9 + 0x28) != 0)) &&
       (puVar7 = *(undefined8 **)(*(long *)(lVar9 + 0x28) + 8), puVar7 != (undefined8 *)0x0)) {
      (**(code **)*puVar7)();
    }
  }
  *(uint *)(*(long *)PTR_DAT_04bb26a8 + 0xb389c) =
       *(uint *)(*(long *)PTR_DAT_04bb26a8 + 0xb389c) | 2;
  FUN_01b35b90();
  FUN_01525810(DAT_0520f098);
  lVar11 = *(long *)((*(long **)PTR_DAT_04bb27d0)[5] + 0x100);
  if (0xfffffffe < lVar11) {
    lVar11 = 0xffffffff;
  }
  if (DAT_04cd19d8 == 0) {
    pbVar10 = &DAT_0548e140;
LAB_01dae230:
    if (7 < *pbVar10) {
LAB_01dae23c:
      lVar9 = **(long **)PTR_DAT_04bb27d0;
      bVar3 = *(byte *)(lVar9 + 0x473);
      pbVar10 = PTR_DAT_04bb5038;
      if ((long)(char)bVar3 != 0xffffffffffffffff) {
        puVar2 = (uint *)(lVar9 + 0x48) + ((long)(char)bVar3 & 0xffffffffU) * 0x20;
        if (7 < bVar3) {
          puVar2 = (uint *)(lVar9 + 0x48);
        }
        if ((*puVar2 & 8) != 0) {
          pbVar10 = (byte *)(lVar9 + 0x471);
        }
      }
      local_18[0] = *pbVar10;
      if (local_18[0] < 8) goto LAB_01dae2ac;
      pbVar10 = &DAT_0548e168;
    }
  }
  else {
    pbVar10 = PTR_DAT_04bb32e0;
    if (*(int *)(DAT_04cd19d8 + 0x15c) != 0) {
      pbVar10 = (byte *)(DAT_04cd19d8 + 0x158);
    }
    if (7 < *pbVar10) {
      if ((*(int *)(DAT_04cd19d8 + 0x15c) != 0) && (DAT_054f5738 != 0)) {
        pbVar10 = (byte *)(DAT_054f5738 + 0x11a5);
        goto LAB_01dae230;
      }
      goto LAB_01dae23c;
    }
  }
  local_18[0] = *pbVar10;
  if (7 < local_18[0]) {
    local_18[0] = 0xff;
  }
LAB_01dae2ac:
  local_14 = 2;
  puStack_78 = PTR_s_dream_land_watch_04a85660;
  local_80 = &PTR_LAB_048f9770;
  FUN_025ffac8(local_60,&local_80,local_18);
  local_70 = 0;
  local_68 = 0;
  puVar1 = PTR_DAT_04bc3280 + 0x10;
  local_38 = local_14;
  local_60[0] = puVar1;
  local_80._0_4_ = (int)lVar11;
  FUN_025970dc(local_60,&local_80);
  local_60[0] = puVar1;
  iVar4 = FUN_025974d4(local_60);
  if (((iVar4 == -1) ||
      (local_80._0_4_ = (**(code **)(local_60[0] + 0x20))(local_60), 0xc < (int)local_80)) &&
     (local_3c == 0)) {
    local_3c = 1;
  }
  FUN_02601530(local_60);
  return;
}


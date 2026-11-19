
void FUN_0396d4d0(long param_1,long *param_2,int param_3)

{
  long *plVar1;
  uint *puVar2;
  uint uVar3;
  byte bVar4;
  uint uVar5;
  char cVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  ulong uVar10;
  long lVar11;
  undefined4 uVar12;
  long lVar13;
  undefined8 uVar14;
  undefined *local_278;
  undefined *puStack_270;
  undefined *local_268;
  undefined1 local_260 [8];
  undefined8 local_258;
  undefined8 local_1b0;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined1 local_170;
  undefined2 local_16f;
  undefined8 local_168;
  undefined *local_c0;
  undefined8 local_b8;
  long local_b0;
  long lStack_a8;
  long *local_a0;
  undefined4 local_98;
  undefined *local_90;
  undefined *local_88;
  long *local_80;
  byte local_78;
  undefined **local_70;
  
  local_268 = PTR_DAT_04bd0d18 + 0x10;
  FUN_00347d68(local_260);
  local_258 = *(undefined8 *)(*(long *)PTR_DAT_04bbd7c0 + 0x48);
  local_170 = 0;
  local_168 = 0;
  local_180 = 0;
  uStack_178 = 0;
  uVar3 = *(uint *)(param_1 + 0x6b0);
  local_260[0] = 2;
  local_268 = PTR_DAT_04bd0f88 + 0x10;
  local_16f = 4;
  local_1b0 = *(undefined8 *)(*(long *)PTR_DAT_04bbd7c0 + 0x40);
  if ((uVar3 >> 0xc & 1) == 0) {
    local_b8 = *(undefined8 *)(PTR_PTR_04bb2238 + 8);
    local_278 = PTR_DAT_04bb2020 + 0x10;
    puStack_270 = &DAT_040c428a;
    local_c0 = local_278;
    iVar9 = FUN_0396f9a0(*(undefined8 *)(param_1 + 0x678),&local_268,&local_c0,&local_278,param_3);
    uVar12 = 6;
    iVar8 = -1;
  }
  else {
    uVar12 = 6;
    if ((uVar3 & 0x40) != 0) {
      uVar12 = 2;
    }
    local_b8 = *(undefined8 *)(PTR_PTR_04bb2238 + 8);
    local_278 = PTR_DAT_04bb2020 + 0x10;
    puStack_270 = &DAT_040fe327;
    local_c0 = local_278;
    iVar8 = FUN_0396f9a0(*(undefined8 *)(param_1 + 0x678),&local_268,&local_c0,&local_278,param_3);
    iVar9 = -1;
  }
  local_98 = *(undefined4 *)((long)param_2 + 0x94);
  lVar11 = param_1 + 0x10;
  local_c0 = (undefined *)0xffffffff;
  local_70 = &local_268;
  lStack_a8 = 0;
  local_b8 = CONCAT71(local_b8._1_7_,*(undefined1 *)(param_1 + 8));
  if ((((*(ushort *)((long)param_2 + 0x8a) & 0x21) == 0) ||
      ((*(ushort *)((long)param_2 + 0x8a) >> 1 & 1) == 0)) || (lVar13 = param_2[0x3f], lVar13 == 0))
  {
    local_90 = PTR_DAT_04bd13c0;
    if ((undefined *)param_2[0xf] != (undefined *)0x0) {
      local_90 = (undefined *)param_2[0xf];
    }
    local_88 = PTR_DAT_04bd13c8;
    if ((undefined *)param_2[0x10] != (undefined *)0x0) {
      local_88 = (undefined *)param_2[0x10];
    }
  }
  else {
    local_90 = (undefined *)(lVar13 + 8);
    local_88 = *(undefined **)(lVar13 + 0x100);
  }
  plVar1 = param_2 + 10;
  local_78 = (*(ushort *)(param_2 + 0x11) & 4) == 0 & (byte)(*(uint *)(param_1 + 0x6b0) >> 3);
  local_b0 = lVar11;
  local_a0 = param_2;
  local_80 = plVar1;
  FUN_038e77e4(plVar1,&local_268,lVar11);
  (**(code **)(*param_2 + 0x48))(param_2,&local_c0);
  uVar10 = (**(code **)(*param_2 + 0x90))(param_2);
  if (((uVar10 & 1) == 0) && (bVar4 = *(byte *)((long)param_2 + 0x93), bVar4 != 0)) {
    lVar13 = local_b0;
    if (lStack_a8 != 0) {
      lVar13 = lStack_a8;
    }
    if (lVar13 != 0) {
      FUN_039025b0(*(undefined4 *)((long)param_2 + 0xac),lVar13,local_70,0,
                   bVar4 & 1 | (bVar4 >> 2 & 1) << 1,(long)param_2 + 0x9c,0,local_80,1);
    }
  }
  if ((iVar8 != -1) &&
     (lVar13 = FUN_0396fb50(*(undefined8 *)(param_1 + 0x678),iVar8),
     (*(byte *)(lVar13 + 600) & 1) != 0)) {
    if (*(uint *)(param_2 + 0x18) < *(uint *)(lVar13 + 0x24)) {
      *(uint *)(param_2 + 0x18) = *(uint *)(lVar13 + 0x24);
    }
    *(long **)(lVar13 + 0x260) = param_2;
    if ((*(ushort *)(param_2 + 0x11) >> 10 & 1) != 0) {
      puVar2 = (uint *)(param_1 + 0xbc8);
      do {
        uVar5 = *puVar2;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(puVar2,0x10);
        if (bVar7) {
          *puVar2 = uVar5 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      *(long *)(*(long *)(param_1 + 0xbd0) +
               (-(ulong)(uVar5 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar5 << 3)) = lVar13;
    }
  }
  FUN_0396d190(param_1,&local_268,param_2,uVar12,0,uVar3 >> 0xc & 1,param_3 + 1);
  if ((uVar3 >> 0xc & 1) == 0) {
    iVar8 = -1;
  }
  else {
    uVar14 = *(undefined8 *)(param_1 + 0x678);
    local_278 = PTR_DAT_04bb2020 + 0x10;
    local_b8 = *(undefined8 *)(PTR_PTR_04bb2238 + 8);
    puStack_270 = &DAT_040a02ee;
    local_c0 = local_278;
    iVar8 = (**(code **)(*param_2 + 0x20))(param_2);
    iVar8 = FUN_0396f9a0(uVar14,&local_268,&local_c0,&local_278,iVar8 + param_3 + 1);
  }
  local_c0 = (undefined *)0xffffffff;
  local_98 = *(undefined4 *)((long)param_2 + 0x94);
  local_b8 = CONCAT71(local_b8._1_7_,*(undefined1 *)(param_1 + 8));
  lStack_a8 = 0;
  if ((((*(ushort *)((long)param_2 + 0x8a) & 0x21) == 0) ||
      ((*(ushort *)((long)param_2 + 0x8a) >> 1 & 1) == 0)) || (lVar13 = param_2[0x3f], lVar13 == 0))
  {
    local_90 = PTR_DAT_04bd13c0;
    if ((undefined *)param_2[0xf] != (undefined *)0x0) {
      local_90 = (undefined *)param_2[0xf];
    }
    local_88 = PTR_DAT_04bd13c8;
    if ((undefined *)param_2[0x10] != (undefined *)0x0) {
      local_88 = (undefined *)param_2[0x10];
    }
  }
  else {
    local_90 = (undefined *)(lVar13 + 8);
    local_88 = *(undefined **)(lVar13 + 0x100);
  }
  local_78 = (*(ushort *)(param_2 + 0x11) & 4) == 0 & (byte)(*(uint *)(param_1 + 0x6b0) >> 3);
  local_b0 = lVar11;
  local_a0 = param_2;
  local_80 = plVar1;
  local_70 = &local_268;
  if (((*(uint *)(param_1 + 0x6b0) ^ 0xffffffff) & 0x28) == 0) {
    FUN_0396ad68(param_2,&local_c0);
  }
  (**(code **)(*param_2 + 0x70))(param_2,&local_c0);
  if ((iVar8 != -1) &&
     (lVar11 = FUN_0396fb50(*(undefined8 *)(param_1 + 0x678),iVar8),
     (*(byte *)(lVar11 + 600) & 1) != 0)) {
    if (*(uint *)(param_2 + 0x18) < *(uint *)(lVar11 + 0x24)) {
      *(uint *)(param_2 + 0x18) = *(uint *)(lVar11 + 0x24);
    }
    *(long **)(lVar11 + 0x260) = param_2;
    if ((*(ushort *)(param_2 + 0x11) >> 10 & 1) != 0) {
      puVar2 = (uint *)(param_1 + 0xbc8);
      do {
        uVar3 = *puVar2;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(puVar2,0x10);
        if (bVar7) {
          *puVar2 = uVar3 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      *(long *)(*(long *)(param_1 + 0xbd0) +
               (-(ulong)(uVar3 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar3 << 3)) = lVar11;
    }
  }
  if ((iVar9 != -1) &&
     (lVar11 = FUN_0396fb50(*(undefined8 *)(param_1 + 0x678),iVar9),
     (*(byte *)(lVar11 + 600) & 1) != 0)) {
    if (*(uint *)(param_2 + 0x18) < *(uint *)(lVar11 + 0x24)) {
      *(uint *)(param_2 + 0x18) = *(uint *)(lVar11 + 0x24);
    }
    *(long **)(lVar11 + 0x260) = param_2;
    if ((*(ushort *)(param_2 + 0x11) >> 10 & 1) != 0) {
      puVar2 = (uint *)(param_1 + 0xbc8);
      do {
        uVar3 = *puVar2;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(puVar2,0x10);
        if (bVar7) {
          *puVar2 = uVar3 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      *(long *)(*(long *)(param_1 + 0xbd0) +
               (-(ulong)(uVar3 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar3 << 3)) = lVar11;
    }
  }
  FUN_038f43d0(&local_268);
  return;
}


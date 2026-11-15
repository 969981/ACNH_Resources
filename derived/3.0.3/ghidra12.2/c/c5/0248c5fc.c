
/* WARNING: Removing unreachable block (ram,0x0248c690) */
/* WARNING: Removing unreachable block (ram,0x0248c794) */
/* WARNING: Removing unreachable block (ram,0x0248c830) */

void FUN_0248c5fc(long param_1)

{
  undefined *puVar1;
  short sVar2;
  undefined6 uVar3;
  undefined8 uVar4;
  bool bVar5;
  int iVar6;
  ulong uVar7;
  long lVar8;
  uint uVar9;
  undefined8 *puVar10;
  uint local_48 [2];
  undefined8 local_40;
  undefined8 local_38;
  undefined1 local_18 [4];
  byte local_14 [4];
  
  local_40 = (undefined *)0xfffe;
  FUN_0277d4ac(&local_40);
  if (*(short *)(param_1 + 0x190c) == -2) {
    puVar10 = *(undefined8 **)(param_1 + 0x60);
    if (puVar10 == (undefined8 *)0x0) {
      if ((DAT_052461c0 & 1) == 0) {
        iVar6 = __cxa_guard_acquire(&DAT_052461c0);
        puVar10 = &DAT_05240280;
        if (iVar6 != 0) {
          FUN_016fcf10(&DAT_05240280);
          FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
          __cxa_guard_release(&DAT_052461c0);
        }
      }
      else {
        puVar10 = &DAT_05240280;
      }
    }
    if (puVar10[0x227] == 0) {
      local_48[0] = 0;
    }
    else {
      local_48[0] = *(uint *)(puVar10 + 0x2d3) >> 1 & 1;
      local_40 = (undefined *)CONCAT44(local_40._4_4_,0x14);
      uVar7 = FUN_03850890(puVar10[0x227],0x14,0,local_48[0]);
      if ((uVar7 & 1) != 0) {
        FUN_02472404(0,param_1);
      }
    }
  }
  if (*(int *)(param_1 + 0x178) == 0) {
    puVar10 = *(undefined8 **)(param_1 + 0x60);
    if (puVar10 == (undefined8 *)0x0) {
      if ((DAT_052461c0 & 1) == 0) {
        iVar6 = __cxa_guard_acquire(&DAT_052461c0);
        if (iVar6 != 0) {
          FUN_016fcf10(&DAT_05240280);
          FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
          __cxa_guard_release(&DAT_052461c0);
        }
        puVar10 = &DAT_05240280;
        lVar8 = DAT_052413b8;
      }
      else {
        puVar10 = &DAT_05240280;
        lVar8 = DAT_052413b8;
      }
    }
    else {
      lVar8 = puVar10[0x227];
    }
    if (lVar8 != 0) {
      local_40._4_4_ = (undefined4)((ulong)local_40 >> 0x20);
      local_48[0] = *(uint *)(puVar10 + 0x2d3) >> 1 & 1;
      local_40 = (undefined *)CONCAT44(local_40._4_4_,0x22);
      uVar7 = FUN_03850890(lVar8,0x22,0,local_48[0]);
      if ((uVar7 & 1) != 0) {
        lVar8 = *(long *)PTR_DAT_04bb4f78 + 0x20 + (ulong)(uint)*(byte *)(param_1 + 0x1ee8) * 0x740;
        if (7 < *(byte *)(param_1 + 0x1ee8)) {
          lVar8 = *(long *)PTR_DAT_04bb4f78 + 0x20;
        }
        FUN_022be970(lVar8 + 0xb0);
      }
      goto LAB_0248c7e4;
    }
    local_48[0] = 0;
    puVar10 = *(undefined8 **)(param_1 + 0x60);
joined_r0x0248c78c:
    if (puVar10 == (undefined8 *)0x0) goto LAB_0248c7ec;
LAB_0248c804:
    lVar8 = puVar10[0x227];
    if (puVar10[0x227] == 0) goto LAB_0248ca68;
LAB_0248c80c:
    local_48[0] = *(uint *)(puVar10 + 0x2d3) >> 1 & 1;
    local_40 = (undefined *)CONCAT44(local_40._4_4_,0x2d);
    uVar7 = FUN_03850890(lVar8,0x2d,0,local_48[0]);
    if (((uVar7 & 1) != 0) &&
       (uVar9 = *(uint *)(param_1 + 0x17cc), *(uint *)(param_1 + 0x17cc) = uVar9 & 0xfffffffe,
       (uVar9 & 1) != 0)) {
      uVar9 = (uint)*(byte *)(param_1 + 0x1ee8);
      bVar5 = 7 < uVar9;
      if (bVar5) {
        uVar9 = 0xff;
      }
      local_18[0] = (undefined1)uVar9;
      lVar8 = *(long *)PTR_DAT_04bb4f78 + 0x20 + (ulong)uVar9 * 0x740;
      if (bVar5) {
        lVar8 = *(long *)PTR_DAT_04bb4f78 + 0x20;
      }
      if (*(short *)(param_1 + 0x18e1) == *(short *)PTR_DAT_04bb6298) {
        *(undefined4 *)(lVar8 + 0xc) = 3;
        FUN_01393458(lVar8 + 0xb0);
      }
      else {
        *(undefined4 *)(lVar8 + 0xc) = 4;
      }
      local_40 = (undefined *)0xfffe;
      FUN_0277d4ac(&local_40);
      local_40 = *(undefined **)(param_1 + 0x190c);
      FUN_02326130(local_18,&local_40,1);
      local_38 = (char *)CONCAT44(local_38._4_4_,6);
      uVar4 = local_38;
      local_40 = (undefined *)((ulong)local_40 & 0xffffff0000000000);
      local_38._0_6_ = (undefined6)uVar4;
      uVar3 = (undefined6)local_38;
      local_38 = (char *)((ulong)local_38._7_1_ << 0x38);
      local_38 = (char *)(CONCAT26(local_38._6_2_,uVar3) & 0xffff0000ffffffff);
      FUN_02321e44(local_48,param_1,&local_40);
      if (*(int *)(param_1 + 0x178) == 0) {
        local_14[0] = *(byte *)(param_1 + 0x1ee8);
        local_40 = PTR_DAT_04bb2020 + 0x10;
        local_38 = "FenceEditCount";
        if (7 < local_14[0]) {
          local_14[0] = 0xff;
        }
        local_48[0] = FUN_02582fe0(local_14);
        FUN_021294b0(&local_40,1,local_48);
      }
    }
  }
  else {
    sVar2 = *(short *)PTR_DAT_04bb6298;
    if (sVar2 != -1) {
      local_40 = (undefined *)CONCAT44(local_40._4_4_,0x20);
      puVar1 = PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar2 * 8;
      if (0xff < (uint)(int)sVar2) {
        puVar1 = PTR_DAT_04bc39f8;
      }
      if ((*(uint *)(puVar1 + 4) & 1) != 0) {
        FUN_0248cba4(param_1);
        puVar10 = *(undefined8 **)(param_1 + 0x60);
        goto joined_r0x0248c78c;
      }
    }
LAB_0248c7e4:
    puVar10 = *(undefined8 **)(param_1 + 0x60);
    if (puVar10 != (undefined8 *)0x0) goto LAB_0248c804;
LAB_0248c7ec:
    if ((DAT_052461c0 & 1) != 0) {
      puVar10 = &DAT_05240280;
      goto LAB_0248c804;
    }
    iVar6 = __cxa_guard_acquire(&DAT_052461c0);
    if (iVar6 != 0) {
      FUN_016fcf10(&DAT_05240280);
      FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
      __cxa_guard_release(&DAT_052461c0);
    }
    puVar10 = &DAT_05240280;
    lVar8 = DAT_052413b8;
    if (DAT_052413b8 != 0) goto LAB_0248c80c;
LAB_0248ca68:
    local_48[0] = 0;
  }
  puVar10 = *(undefined8 **)(param_1 + 0x60);
  if (puVar10 == (undefined8 *)0x0) {
    if (((DAT_052461c0 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_052461c0), iVar6 != 0)) {
      FUN_016fcf10(&DAT_05240280);
      FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
      __cxa_guard_release(&DAT_052461c0);
      puVar10 = &DAT_05240280;
      lVar8 = DAT_052413b8;
      goto joined_r0x0248ca94;
    }
    puVar10 = &DAT_05240280;
  }
  lVar8 = puVar10[0x227];
joined_r0x0248ca94:
  if (lVar8 == 0) {
    uVar7 = FUN_0170a6d0(puVar10,0);
  }
  else {
    local_40._4_4_ = (undefined4)((ulong)local_40 >> 0x20);
    local_40 = (undefined *)CONCAT44(local_40._4_4_,1);
    uVar7 = FUN_0170a6d0(puVar10,*(uint *)(puVar10 + 0x2d3) >> 1 & 1);
  }
  if ((uVar7 & 1) != 0) {
    if (*(int *)(param_1 + 0x178) == 0) {
      uVar7 = FUN_02546f34(param_1 + 0x1ee8,*(undefined4 *)(param_1 + 0x230));
      if ((uVar7 & 1) == 0) {
        local_38 = (char *)((ulong)local_38 & 0xffffffff00000000);
        local_40 = (undefined *)CONCAT35(local_40._5_3_,0x100000006);
        FUN_02374e74(param_1,&local_40);
      }
    }
    else {
      *(uint *)(param_1 + 0x17cc) = *(uint *)(param_1 + 0x17cc) | 8;
      FUN_023164ec(param_1,6);
    }
  }
  return;
}


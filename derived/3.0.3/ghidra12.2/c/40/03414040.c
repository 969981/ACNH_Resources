
void FUN_03414040(undefined4 *param_1,int *param_2,byte *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  bool bVar4;
  byte bVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  long *plVar10;
  ulong uVar11;
  long lVar12;
  long *plVar13;
  undefined8 *puVar14;
  long lVar15;
  uint uVar16;
  undefined8 local_80;
  uint *puStack_78;
  int *local_70;
  int local_48;
  uint local_44;
  
  puVar2 = PTR_DAT_04bb2e18;
  *(undefined2 *)(param_1 + 1) = 0;
  *param_1 = 0;
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined1 *)(param_1 + 4) = 0;
  *(undefined **)(param_1 + 6) = puVar2 + 0x10;
  *(undefined8 *)(param_1 + 8) = 0;
  if (*param_2 == 1) {
    if (**(char **)(param_2 + 4) == '\0') {
      return;
    }
  }
  else {
    if (*param_2 != 0) {
      return;
    }
    if (param_2[1] == -1) {
      return;
    }
  }
  *(undefined1 *)param_1 = 1;
  if (*(long *)PTR_DAT_04bbbc38 == 0) {
    local_80 = (undefined **)((ulong)local_80._4_4_ << 0x20);
LAB_03414100:
    uVar16 = 0;
  }
  else {
    iVar6 = (int)*(undefined8 *)(*(long *)PTR_DAT_04bbbc38 + 0xc);
    local_80 = (undefined **)CONCAT44(local_80._4_4_,iVar6);
    if (iVar6 == 0) goto LAB_03414100;
    iVar6 = FUN_014e4978();
    uVar16 = (uint)(iVar6 == 1);
  }
  *(char *)((long)param_1 + 1) = (char)uVar16;
  param_1[2] = uVar16 ^ 1;
  *(undefined1 *)((long)param_1 + 5) = 1;
  puVar3 = PTR_DAT_04bb3968;
  puVar2 = PTR_DAT_04bb3238;
  lVar12 = *(long *)PTR_DAT_04bb3968;
  if (((lVar12 == 0) || (lVar15 = *(long *)(lVar12 + 0x175a0), lVar15 == 0)) ||
     (*(int *)(lVar15 + 0x1ec) <= *(int *)(lVar15 + 0x1e8))) {
    if (*param_2 == 0) {
      bVar5 = *param_3;
      iVar6 = param_2[1];
      if (7 < bVar5) {
        bVar5 = 0xff;
      }
      local_80 = (undefined **)CONCAT71(local_80._1_7_,bVar5);
      iVar7 = FUN_02582fe0(&local_80);
      lVar12 = *(long *)puVar3;
      bVar4 = iVar6 == iVar7;
    }
    else {
      bVar4 = false;
    }
    if ((lVar12 != 0) && (lVar15 = *(long *)(lVar12 + 0x175a0), lVar15 != 0)) goto LAB_034141ac;
LAB_03414294:
    bVar5 = 0;
    goto LAB_03414298;
  }
  bVar4 = true;
LAB_034141ac:
  if (*param_2 != 0) {
    bVar5 = FUN_02123780(lVar15,param_2 + 2,0);
    goto LAB_03414298;
  }
  bVar5 = *param_3;
  iVar6 = param_2[1];
  if (7 < bVar5) {
    bVar5 = 0xff;
  }
  local_80 = (undefined **)CONCAT71(local_80._1_7_,bVar5);
  iVar7 = FUN_02582fe0(&local_80);
  if (iVar6 != iVar7) {
    if (*(int *)(lVar15 + 0x1e8) != 0) {
      plVar13 = *(long **)(lVar15 + 0x1f0);
      iVar6 = *(int *)(*plVar13 + 0x130);
      local_80 = (undefined **)CONCAT44(local_80._4_4_,iVar6);
      if (*(int *)(*plVar13 + 0xf0) == param_2[1] && iVar6 == 2) {
        bVar5 = 1;
      }
      else {
        lVar12 = (long)*(int *)(lVar15 + 0x1e8) * 8;
        do {
          lVar12 = lVar12 + -8;
          plVar13 = plVar13 + 1;
          bVar5 = lVar12 != 0;
          if (lVar12 == 0) break;
          iVar6 = *(int *)(*plVar13 + 0x130);
          local_80 = (undefined **)CONCAT44(local_80._4_4_,iVar6);
        } while (*(int *)(*plVar13 + 0xf0) != param_2[1] || iVar6 != 2);
      }
      goto LAB_03414298;
    }
    goto LAB_03414294;
  }
  local_44 = *(uint *)puVar2;
  lVar12 = *(long *)puVar3;
  uVar8 = local_44;
  if (lVar12 != 0) {
    if (*param_2 == 0) {
      local_48 = param_2[1];
      puStack_78 = &local_44;
      local_80 = &PTR_FUN_04b2b1e0;
      local_70 = &local_48;
      if (*(int *)(lVar12 + 0xb88) != 0) {
        lVar15 = (long)*(int *)(lVar12 + 0xb88) << 3;
        puVar14 = *(undefined8 **)(lVar12 + 0xb90);
        do {
          (*(code *)*local_80)(&local_80,*puVar14);
          lVar15 = lVar15 + -8;
          puVar14 = puVar14 + 1;
        } while (lVar15 != 0);
        uVar8 = local_44;
      }
    }
    else {
      uVar8 = FUN_020a4f40(lVar12,param_2 + 2,PTR_DAT_04bb3238,1);
    }
  }
  puVar1 = PTR_DAT_04bb27c0;
  bVar5 = 0;
  if (uVar8 == 0) goto LAB_03414298;
  lVar12 = *(long *)PTR_DAT_04bb27c0;
  if (lVar12 == 0) {
LAB_034144f8:
    bVar5 = 0;
  }
  else {
    plVar13 = *(long **)(*(long *)(*(long *)(lVar12 + 0x1c0) + 8) + (ulong)(uVar8 >> 0x14) * 8);
    if (((plVar13 == (long *)0x0) || ((*(uint *)(plVar13 + 0x49) >> 1 & 1) != 0)) ||
       (*(uint *)(plVar13 + 0x46) != uVar8)) {
      plVar13 = (long *)0x0;
    }
    if (*(int *)(lVar12 + 0x288) == 1 || *(int *)(lVar12 + 0x288) == -1) {
      plVar10 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      lVar12 = *(long *)puVar1;
      iVar6 = (**(code **)(*plVar10 + 0x60))();
      if (iVar6 < 0x11) {
        uVar16 = 1;
      }
      else {
        if (4 < *(uint *)(lVar12 + 0x5e8)) goto LAB_03414458;
        uVar16 = 0x1aU >> (ulong)(*(uint *)(lVar12 + 0x5e8) & 0x1f) & 1;
      }
    }
    else {
LAB_03414458:
      uVar16 = 0;
    }
    if (plVar13 == (long *)0x0) goto LAB_034144f8;
    lVar12 = plVar13[0x2a];
    uVar8 = *(uint *)(plVar13 + 0x49);
    if (((*PTR_DAT_04bb37d8 & 1) == 0) &&
       (iVar6 = __cxa_guard_acquire(PTR_DAT_04bb37d8), iVar6 != 0)) {
      *(undefined **)PTR_DAT_04bb37d0 = PTR_DAT_04bb3750 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb37d8);
    }
    uVar9 = (**(code **)(*plVar13 + 0x20))(plVar13,PTR_DAT_04bb37d0);
    bVar5 = 0;
    if ((((int)lVar12 == 1) && ((uVar9 & uVar16) != 0)) && ((uVar8 >> 4 & 1) != 0)) {
      puVar14 = (undefined8 *)plVar13[0x77];
      if (((*PTR_DAT_04bc2280 & 1) == 0) &&
         (iVar6 = __cxa_guard_acquire(PTR_DAT_04bc2280), iVar6 != 0)) {
        *(undefined **)PTR_DAT_04bc2278 = PTR_DAT_04bb6718 + 0x10;
        __cxa_guard_release(PTR_DAT_04bc2280);
      }
      if ((puVar14 == (undefined8 *)0x0) ||
         (uVar11 = (**(code **)*puVar14)(puVar14,PTR_DAT_04bc2278), (uVar11 & 1) == 0))
      goto LAB_034144f8;
      bVar5 = (byte)((ushort)*(undefined2 *)((long)puVar14 + 0xaf64) >> 9) & 1;
    }
  }
  uVar16 = (uint)(*(char *)((long)param_1 + 1) != '\0');
LAB_03414298:
  local_44 = *(uint *)puVar2;
  bVar5 = bVar4 & (bVar5 ^ 1);
  *(byte *)((long)param_1 + 2) = (byte)uVar16 & bVar5;
  lVar12 = *(long *)puVar3;
  if (lVar12 != 0) {
    if (*param_2 == 0) {
      local_48 = param_2[1];
      puStack_78 = &local_44;
      local_80 = &PTR_FUN_04b2b1e0;
      local_70 = &local_48;
      if (*(int *)(lVar12 + 0xb88) != 0) {
        lVar15 = (long)*(int *)(lVar12 + 0xb88) << 3;
        puVar14 = *(undefined8 **)(lVar12 + 0xb90);
        do {
          (*(code *)*local_80)(&local_80,*puVar14);
          lVar15 = lVar15 + -8;
          puVar14 = puVar14 + 1;
        } while (lVar15 != 0);
      }
    }
    else {
      local_44 = FUN_020a4f40(lVar12,param_2 + 2,PTR_DAT_04bb3238,1);
    }
  }
  *(byte *)(param_1 + 1) = bVar5;
  *(bool *)((long)param_1 + 3) = local_44 != 0;
  return;
}


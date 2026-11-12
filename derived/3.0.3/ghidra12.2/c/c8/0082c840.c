
undefined8 FUN_0082c840(long param_1,long *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint uVar4;
  ushort uVar5;
  long *plVar6;
  long lVar7;
  void *pvVar8;
  ulong uVar9;
  uint *puVar10;
  uint uVar11;
  long lVar12;
  uint uVar13;
  uint uVar14;
  ulong uVar15;
  int iVar16;
  undefined *local_d0;
  char *local_c8;
  undefined *local_c0;
  char *local_b8;
  undefined8 local_b0;
  long *local_a8;
  undefined *local_a0;
  ulong local_98;
  undefined *local_90;
  undefined8 local_88;
  long local_80;
  uint local_78;
  ulong local_74;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  
  puVar3 = PTR_DAT_04bb2698;
  local_b8 = (char *)param_2[2];
  local_c0 = PTR_DAT_04bb2020 + 0x10;
  if (*local_b8 == '\0') {
    local_b8 = (char *)param_2[4];
  }
  lVar12 = *(long *)PTR_DAT_04bb2698;
  if (lVar12 == 0) {
    plVar6 = malloc(0xc0);
  }
  else {
    plVar6 = (long *)*param_2;
    if (plVar6 == (long *)0x0) {
      lVar7 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar6 = (long *)(lVar12 + 8);
      if (lVar7 != 0) {
        plVar6 = (long *)(lVar7 + 0xa8);
      }
      plVar6 = (long *)*plVar6;
      if (plVar6 == (long *)0x0) {
        plVar6 = (long *)0x0;
        goto LAB_0082c8f4;
      }
    }
    plVar6 = (long *)(**(code **)(*plVar6 + 0x30))(plVar6,0xc0,8);
  }
LAB_0082c8f4:
  lVar12 = *param_2;
  FUN_03f41cf0(plVar6,lVar12);
  *plVar6 = (long)(PTR_DAT_04bdf178 + 0x10);
  FUN_038e19ac(plVar6 + 0x10,lVar12);
  local_88 = PTR_DAT_04bb2120;
  *(long **)(param_1 + 8) = plVar6;
  uVar15 = (ulong)local_b0 >> 0x30;
  uVar5 = (ushort)local_b0;
  local_a8 = (long *)*param_2;
  local_98 = CONCAT44(local_98._4_4_,0xffffffff);
  local_90 = PTR_DAT_04bb2020 + 0x10;
  local_a0 = (undefined *)0x0;
  local_b0._0_6_ = CONCAT42(0x30003,uVar5 & 0xff00);
  local_b0 = (undefined *)CONCAT26((short)uVar15,(undefined6)local_b0);
  FUN_03f41f00(plVar6,&local_b0);
  uVar15 = (ulong)(*(char *)param_2[4] != '\0');
  if ((int *)param_2[5] != (int *)0x0) {
    uVar15 = (ulong)(*(int *)param_2[5] + (uint)(*(char *)param_2[4] != '\0'));
  }
  uVar14 = (uint)uVar15;
  if (0 < (int)uVar14) {
    lVar12 = *(long *)puVar3;
    if (lVar12 == 0) {
      pvVar8 = malloc(uVar15 << 3);
    }
    else {
      plVar6 = (long *)*param_2;
      if (plVar6 == (long *)0x0) {
        lVar7 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        plVar6 = (long *)(lVar12 + 8);
        if (lVar7 != 0) {
          plVar6 = (long *)(lVar7 + 0xa8);
        }
        plVar6 = (long *)*plVar6;
        if (plVar6 == (long *)0x0) goto LAB_0082c9e8;
      }
      pvVar8 = (void *)(**(code **)(*plVar6 + 0x30))(plVar6,uVar15 << 3,8);
    }
    if (pvVar8 != (void *)0x0) {
      *(uint *)(param_1 + 0x10) = uVar14;
      *(void **)(param_1 + 0x18) = pvVar8;
    }
  }
LAB_0082c9e8:
  puVar3 = PTR_DAT_04bb2630;
  iVar16 = -1;
  if (*(char *)param_2[4] != '\0') {
    lVar12 = *param_2;
    local_74 = 0;
    local_d0 = PTR_DAT_04bb2020 + 0x10;
    uVar11 = *(uint *)(param_2 + 6);
    uVar15 = (ulong)uVar11;
    plVar6 = *(long **)PTR_DAT_04bb2630;
    if (plVar6 == (long *)0x0) {
      return 0;
    }
    local_c8 = (char *)param_2[4];
    uVar9 = (**(code **)(*plVar6 + 0x10))(plVar6,&local_d0,&local_78);
    if ((uVar9 & 1) == 0) {
      return 0;
    }
    local_90 = (undefined *)0x7fffffff;
    if (1 < uVar11) {
      uVar15 = 0;
    }
    puVar1 = PTR_DAT_04bb2020 + 0x10;
    local_a8 = (long *)local_c8;
    local_98 = (ulong)local_78;
    local_88 = (undefined *)CONCAT44(0x20,local_6c);
    local_b0 = puVar1;
    local_a0 = (undefined *)lVar12;
    local_80 = lVar12;
    lVar12 = (*(code *)(&PTR_FUN_04916730)[uVar15])(&local_b0);
    local_64 = (undefined4)local_74;
    uVar15 = 1L << (local_74 & 0x3f);
    *(int *)(lVar12 + 0xd0) = (int)uVar15;
    nn::os::GetThreadAvailableCoreMask();
    nn::os::SetThreadCoreMask(*(ThreadType **)(lVar12 + 0xe8),-1,uVar15);
    local_98 = CONCAT44(local_98._4_4_,0xffffffff);
    local_a8 = (long *)*param_2;
    local_a0 = *(undefined **)(param_1 + 8);
    local_b0 = (undefined *)CONCAT44(1,(undefined4)local_b0);
    local_88 = PTR_DAT_04bb2120;
    local_b0 = (undefined *)CONCAT62(local_b0._2_6_,3);
    local_90 = puVar1;
    FUN_03f4388c(lVar12,&local_b0);
    iVar16 = 0;
    **(long **)(param_1 + 0x18) = lVar12;
  }
  puVar10 = (uint *)param_2[5];
  if ((puVar10 != (uint *)0x0) && (uVar11 = *puVar10, 0 < (int)uVar11)) {
    uVar13 = 0;
    puVar1 = PTR_DAT_04bb2020 + 0x10;
    do {
      uVar4 = uVar13;
      if (uVar11 <= uVar13) {
        uVar4 = 0;
      }
      lVar12 = *param_2;
      uVar11 = *(uint *)(param_2 + 6);
      uVar15 = (ulong)uVar11;
      plVar6 = *(long **)puVar3;
      local_c8 = *(char **)(*(long *)(puVar10 + 2) + (ulong)uVar4 * 0x10 + 8);
      local_74 = 0;
      if (plVar6 == (long *)0x0) {
        return 0;
      }
      local_d0 = puVar1;
      uVar9 = (**(code **)(*plVar6 + 0x10))(plVar6,&local_d0,&local_78);
      if ((uVar9 & 1) == 0) {
        return 0;
      }
      puVar2 = PTR_DAT_04bb2020 + 0x10;
      local_a8 = (long *)local_c8;
      local_98 = (ulong)local_78;
      local_90 = (undefined *)0x7fffffff;
      local_88 = (undefined *)CONCAT44(0x20,local_6c);
      if (1 < uVar11) {
        uVar15 = 0;
      }
      local_b0 = puVar2;
      local_a0 = (undefined *)lVar12;
      local_80 = lVar12;
      lVar12 = (*(code *)(&PTR_FUN_04916730)[uVar15])(&local_b0);
      local_64 = (undefined4)local_74;
      uVar15 = 1L << (local_74 & 0x3f);
      *(int *)(lVar12 + 0xd0) = (int)uVar15;
      nn::os::GetThreadAvailableCoreMask();
      nn::os::SetThreadCoreMask(*(ThreadType **)(lVar12 + 0xe8),-1,uVar15);
      local_98 = CONCAT44(local_98._4_4_,0xffffffff);
      local_a0 = *(undefined **)(param_1 + 8);
      local_b0 = (undefined *)CONCAT44(1,(undefined4)local_b0);
      local_88 = PTR_DAT_04bb2120;
      local_a8 = (long *)*param_2;
      local_b0 = (undefined *)CONCAT62(local_b0._2_6_,3);
      local_90 = puVar2;
      FUN_03f4388c(lVar12,&local_b0);
      uVar11 = iVar16 + 1 + uVar13;
      uVar13 = uVar13 + 1;
      if (*(uint *)(param_1 + 0x10) <= uVar11) {
        uVar11 = 0;
      }
      *(long *)(*(long *)(param_1 + 0x18) + (long)(int)uVar11 * 8) = lVar12;
      puVar10 = (uint *)param_2[5];
      uVar11 = *puVar10;
    } while ((int)uVar13 < (int)uVar11);
  }
  if (0 < (int)uVar14) {
    uVar11 = 0;
    do {
      uVar13 = uVar11;
      if (*(uint *)(param_1 + 0x10) <= uVar11) {
        uVar13 = 0;
      }
      (**(code **)(**(long **)(*(long *)(param_1 + 0x18) + (ulong)uVar13 * 8) + 0x30))();
      uVar11 = uVar11 + 1;
    } while (uVar14 != uVar11);
  }
  puVar1 = PTR_DAT_04bb2698;
  local_74 = 0;
  plVar6 = *(long **)puVar3;
  if ((plVar6 == (long *)0x0) ||
     (uVar15 = (**(code **)(*plVar6 + 0x10))(plVar6,&local_c0,&local_78), (uVar15 & 1) == 0)) {
    return 0;
  }
  lVar12 = *(long *)puVar1;
  if (lVar12 == 0) {
    plVar6 = malloc(0x138);
  }
  else {
    plVar6 = (long *)*param_2;
    if (plVar6 == (long *)0x0) {
      lVar7 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar6 = (long *)(lVar12 + 8);
      if (lVar7 != 0) {
        plVar6 = (long *)(lVar7 + 0xa8);
      }
      plVar6 = (long *)*plVar6;
      if (plVar6 == (long *)0x0) {
        plVar6 = (long *)0x0;
        goto LAB_0082cd88;
      }
    }
    plVar6 = (long *)(**(code **)(*plVar6 + 0x30))(plVar6,0x138,8);
  }
LAB_0082cd88:
  puVar1 = PTR_DAT_04bdf1d0;
  *(undefined2 *)(plVar6 + 1) = 0;
  puVar3 = PTR_DAT_04bd0e50;
  plVar6[6] = 0;
  plVar6[4] = 0;
  plVar6[5] = 0;
  *plVar6 = (long)(puVar1 + 0x10);
  plVar6[2] = 0;
  plVar6[3] = (long)(puVar3 + 0x10);
  nn::os::InitializeMutex((MutexType *)(plVar6 + 7),true,0);
  plVar6[0xd] = 0;
  plVar6[0xe] = 0;
  plVar6[0xb] = (long)(puVar3 + 0x10);
  plVar6[0xc] = 0;
  nn::os::InitializeMutex((MutexType *)(plVar6 + 0xf),true,0);
  plVar6[0x15] = 0;
  plVar6[0x16] = 0;
  puVar3 = PTR_DAT_04bd0e58 + 0x10;
  plVar6[0x13] = (long)puVar3;
  plVar6[0x14] = 0;
  nn::os::InitializeLightEvent((LightEventType *)(plVar6 + 0x17),0,0);
  plVar6[0x1b] = 0;
  plVar6[0x1c] = 0;
  plVar6[0x19] = (long)puVar3;
  plVar6[0x1a] = 0;
  nn::os::InitializeLightEvent(plVar6 + 0x1d,0,0);
  *(undefined4 *)(plVar6 + 0x24) = 0;
  plVar6[0x21] = 0x4800000000;
  plVar6[0x1f] = (long)(plVar6 + 0x1f);
  plVar6[0x20] = (long)(plVar6 + 0x1f);
  plVar6[0x26] = 0;
  *(undefined8 *)((long)plVar6 + 0x124) = 0x48;
  plVar6[0x22] = (long)(plVar6 + 0x22);
  plVar6[0x23] = (long)(plVar6 + 0x22);
  nn::os::ClearLightEvent((LightEventType *)(plVar6 + 0x17));
  *(long **)(param_1 + 0x20) = plVar6;
  local_a0 = PTR_LAB_04bb5050;
  local_98 = 0;
  local_b0 = PTR_DAT_04bb5068 + 0x10;
  local_a8 = plVar6;
  FUN_03f45490(plVar6,local_68,*param_2,&local_b0);
  return 1;
}


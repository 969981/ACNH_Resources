
undefined8 FUN_03830f70(byte *param_1,uint *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint uVar4;
  uint uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  void *pvVar11;
  ulong uVar12;
  long *plVar13;
  long lVar14;
  long lVar15;
  undefined2 local_b0;
  undefined2 uStack_ae;
  undefined4 uStack_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  ulong local_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined *local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined4 local_78;
  ulong local_74;
  undefined4 local_6c;
  undefined4 local_64;
  
  *param_1 = *param_1 & 0xfe;
  lVar15 = *(long *)(param_1 + 8);
  lVar14 = *(long *)(*(long *)PTR_DAT_04bc3ee8 + 0x78);
  uVar7 = (**(code **)(**(long **)(param_1 + 0x10) + 0x60))();
  lVar8 = (**(code **)(**(long **)(param_1 + 0x10) + 0x68))();
  lVar9 = (**(code **)(**(long **)(param_1 + 0x10) + 0x60))();
  if (lVar15 != 0) {
    *(undefined8 *)(lVar15 + 0x40) = uVar7;
    *(long *)(lVar15 + 0x48) = lVar8 - lVar9;
    nn::os::LockMutex((MutexType *)(lVar14 + 0x58));
    plVar13 = (long *)(lVar14 + 8);
    lVar8 = *plVar13;
    plVar10 = (long *)(*(int *)(lVar14 + 0x1c) + lVar15);
    *plVar13 = (long)plVar10;
    *plVar10 = lVar8;
    plVar10[1] = (long)plVar13;
    if (lVar8 != 0) {
      *(long **)(lVar8 + 8) = plVar10;
    }
    *(int *)(lVar14 + 0x18) = *(int *)(lVar14 + 0x18) + 1;
    nn::os::UnlockMutex((MutexType *)(lVar14 + 0x58));
  }
  puVar6 = PTR_DAT_04bb2020;
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  local_b0 = SUB82(puVar1,0);
  uStack_ae = (undefined2)((ulong)puVar1 >> 0x10);
  uStack_ac = (undefined4)((ulong)puVar1 >> 0x20);
  local_a8 = 0x40e1578;
  uStack_a4 = 0;
  uVar7 = FUN_038c9744(0,&local_b0,*(undefined8 *)(param_2 + 2),8,1,0);
  *(undefined8 *)(param_1 + 0x18) = uVar7;
  local_a8 = (undefined4)uVar7;
  uStack_a4 = (undefined4)((ulong)uVar7 >> 0x20);
  local_b0 = (undefined2)*param_2;
  uStack_ae = (undefined2)(*param_2 >> 0x10);
  FUN_03832e10(param_1 + 0x40,&local_b0);
  uVar4 = *param_2;
  uVar5 = uVar4 - 1;
  if (0 < (int)uVar4) {
    lVar15 = *(long *)PTR_DAT_04bb2698;
    if (lVar15 == 0) {
      pvVar11 = malloc((long)(int)uVar4 * 0x38);
    }
    else {
      plVar10 = *(long **)(param_1 + 0x18);
      if (plVar10 == (long *)0x0) {
        lVar8 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        plVar10 = (long *)(lVar15 + 8);
        if (lVar8 != 0) {
          plVar10 = (long *)(lVar8 + 0xa8);
        }
        plVar10 = (long *)*plVar10;
        if (plVar10 == (long *)0x0) goto LAB_0383117c;
      }
      pvVar11 = (void *)(**(code **)(*plVar10 + 0x30))(plVar10,(long)(int)uVar4 * 0x38,8);
    }
    if (pvVar11 != (void *)0x0) {
      *(uint *)(param_1 + 0x3c) = uVar4;
      *(void **)(param_1 + 0x28) = pvVar11;
      if (1 < uVar4) {
        if (uVar5 == 1) {
          uVar12 = 0;
        }
        else {
          uVar12 = 0;
          plVar10 = (long *)((long)pvVar11 + 0x38);
          do {
            uVar12 = uVar12 + 2;
            plVar10[-7] = (long)plVar10;
            *plVar10 = (long)(plVar10 + 7);
            plVar10 = plVar10 + 0xe;
          } while (((ulong)uVar5 & 0xfffffffe) != uVar12);
        }
        if ((uVar5 & 1) != 0) {
          plVar10 = (long *)((long)pvVar11 + uVar12 * 0x38);
          *plVar10 = (long)(plVar10 + 7);
        }
      }
      *(undefined8 *)((long)pvVar11 + (long)(int)(uVar5 * 7) * 8) = 0;
      *(void **)(param_1 + 0x30) = pvVar11;
    }
  }
LAB_0383117c:
  puVar1 = PTR_DAT_04bb2630;
  uVar7 = *(undefined8 *)(param_1 + 0x18);
  local_74 = 0;
  plVar10 = *(long **)PTR_DAT_04bb2630;
  if ((plVar10 == (long *)0x0) ||
     (uVar12 = (**(code **)(*plVar10 + 0x10))(plVar10,&DAT_05ae04d8,&local_78), (uVar12 & 1) == 0))
  {
    lVar15 = 0;
  }
  else {
    local_90 = (undefined *)0x7fffffff;
    puVar2 = puVar6 + 0x10;
    local_b0 = SUB82(puVar2,0);
    uStack_ae = (undefined2)((ulong)puVar2 >> 0x10);
    uStack_ac = (undefined4)((ulong)puVar2 >> 0x20);
    local_88 = (undefined *)CONCAT44(0x20,local_6c);
    local_98 = local_78;
    uStack_94 = 0;
    local_a8 = (undefined4)DAT_05ae04e0;
    uStack_a4 = (undefined4)((ulong)DAT_05ae04e0 >> 0x20);
    local_a0 = uVar7;
    local_80 = uVar7;
    lVar15 = FUN_007d3f04(&local_b0);
    local_64 = (undefined4)local_74;
    uVar12 = 1L << (local_74 & 0x3f);
    *(int *)(lVar15 + 0xd0) = (int)uVar12;
    nn::os::GetThreadAvailableCoreMask();
    nn::os::SetThreadCoreMask(*(ThreadType **)(lVar15 + 0xe8),-1,uVar12);
  }
  puVar2 = PTR_DAT_04bb2120;
  *(long *)(param_1 + 0xb0) = lVar15;
  local_98 = 0xffffffff;
  uStack_ac = 1;
  local_b0 = 2;
  local_a8 = (undefined4)*(undefined8 *)(param_1 + 0x18);
  uStack_a4 = (undefined4)((ulong)*(undefined8 *)(param_1 + 0x18) >> 0x20);
  local_a0 = 0;
  local_88 = puVar2;
  local_90 = puVar6 + 0x10;
  FUN_03f4388c(lVar15,&local_b0);
  local_78 = 2;
  lVar15 = *(long *)(param_1 + 0xb0);
  *(undefined4 *)(lVar15 + 0xd0) = 4;
  nn::os::GetThreadAvailableCoreMask();
  nn::os::SetThreadCoreMask(*(ThreadType **)(lVar15 + 0xe8),-1,4);
  (**(code **)(**(long **)(param_1 + 0xb0) + 0x30))();
  uVar7 = *(undefined8 *)(param_1 + 0x18);
  local_74 = 0;
  plVar10 = *(long **)puVar1;
  if ((plVar10 == (long *)0x0) ||
     (uVar12 = (**(code **)(*plVar10 + 0x10))(plVar10,&DAT_05ae04e8,&local_78), (uVar12 & 1) == 0))
  {
    lVar15 = 0;
  }
  else {
    local_90 = (undefined *)0x7fffffff;
    puVar3 = puVar6 + 0x10;
    local_b0 = SUB82(puVar3,0);
    uStack_ae = (undefined2)((ulong)puVar3 >> 0x10);
    uStack_ac = (undefined4)((ulong)puVar3 >> 0x20);
    local_88 = (undefined *)CONCAT44(0x20,local_6c);
    local_98 = local_78;
    uStack_94 = 0;
    local_a8 = (undefined4)DAT_05ae04f0;
    uStack_a4 = (undefined4)((ulong)DAT_05ae04f0 >> 0x20);
    local_a0 = uVar7;
    local_80 = uVar7;
    lVar15 = FUN_007d3f04(&local_b0);
    local_64 = (undefined4)local_74;
    uVar12 = 1L << (local_74 & 0x3f);
    *(int *)(lVar15 + 0xd0) = (int)uVar12;
    nn::os::GetThreadAvailableCoreMask();
    nn::os::SetThreadCoreMask(*(ThreadType **)(lVar15 + 0xe8),-1,uVar12);
  }
  *(long *)(param_1 + 0xb8) = lVar15;
  local_98 = 0xffffffff;
  uStack_ac = 1;
  local_b0 = 2;
  local_88 = puVar2;
  local_a8 = (undefined4)*(undefined8 *)(param_1 + 0x18);
  uStack_a4 = (undefined4)((ulong)*(undefined8 *)(param_1 + 0x18) >> 0x20);
  local_a0 = 0;
  local_90 = puVar6 + 0x10;
  FUN_03f4388c(lVar15,&local_b0);
  local_78 = 2;
  lVar15 = *(long *)(param_1 + 0xb8);
  *(undefined4 *)(lVar15 + 0xd0) = 4;
  nn::os::GetThreadAvailableCoreMask();
  nn::os::SetThreadCoreMask(*(ThreadType **)(lVar15 + 0xe8),-1,4);
  nn::os::ClearLightEvent((LightEventType *)(param_1 + 0x350));
  (**(code **)(**(long **)(param_1 + 0xb8) + 0x30))();
  uVar7 = *(undefined8 *)(param_1 + 0x18);
  uStack_ac = 0;
  local_a8 = 0;
  plVar10 = *(long **)puVar1;
  if ((plVar10 != (long *)0x0) &&
     (uVar12 = (**(code **)(*plVar10 + 0x10))(plVar10,&DAT_05ae04d8,&local_b0), (uVar12 & 1) != 0))
  {
    FUN_03831b80(param_1 + 0xc0,local_a0 & 0xffffffff,uVar7);
  }
  uVar7 = *(undefined8 *)(param_1 + 0x18);
  uStack_ac = 0;
  local_a8 = 0;
  plVar10 = *(long **)puVar1;
  if ((plVar10 != (long *)0x0) &&
     (uVar12 = (**(code **)(*plVar10 + 0x10))(plVar10,&DAT_05ae04e8,&local_b0), (uVar12 & 1) != 0))
  {
    FUN_03831b80(param_1 + 0x1f8,local_a0 & 0xffffffff,uVar7);
  }
  (**(code **)(**(long **)(param_1 + 0x18) + 0x28))();
  lVar15 = *(long *)PTR_DAT_04bc3ee8;
  if ((lVar15 != 0) && (*(char *)(lVar15 + 1) != '\0')) {
    FUN_03b4c5b0(lVar15,1);
  }
  return 1;
}


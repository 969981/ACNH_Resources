
void FUN_02049104(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  undefined8 *puVar11;
  long lVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined *local_118;
  undefined *puStack_110;
  undefined8 local_108;
  undefined *puStack_100;
  undefined8 local_f8;
  undefined *local_f0;
  undefined *puStack_e8;
  undefined8 local_e0;
  undefined *local_d8;
  undefined8 uStack_d0;
  undefined *local_c8;
  undefined *puStack_c0;
  undefined8 local_b8;
  undefined *local_b0;
  undefined8 uStack_a8;
  undefined *local_a0;
  undefined *puStack_98;
  undefined8 local_90;
  undefined *local_88;
  undefined8 local_80;
  undefined1 local_78 [4];
  undefined1 local_74 [4];
  undefined1 local_38 [4];
  char local_34 [4];
  
  puVar4 = PTR_DAT_04bb3350;
  lVar10 = *(long *)(param_1 + 0x2b8);
  if (lVar10 == 0) {
    lVar12 = 1;
    iVar5 = *(int *)(param_1 + 0x2c0);
    puVar2 = PTR_DAT_04bbc1a0;
    puVar3 = PTR_DAT_04bb2010;
  }
  else {
    lVar6 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar12 = *(long *)(lVar6 + 0xa8);
    *(long *)(lVar6 + 0xa8) = lVar10;
    iVar5 = *(int *)(param_1 + 0x2c0);
    puVar2 = PTR_DAT_04bbc1a0;
    puVar3 = PTR_DAT_04bb2010;
  }
  PTR_DAT_04bb2010 = puVar3;
  PTR_DAT_04bbc1a0 = puVar2;
  if (iVar5 == 0) {
    local_34[0] = '\0';
    local_38[0] = 0;
    local_74[0] = 0;
    local_78[0] = 0;
    local_118 = puVar2 + 0x10;
    puStack_110 = puVar3 + 0x10;
    local_90 = 0;
    local_b8 = 0;
    local_e0 = 0;
    local_f8 = 0;
    local_80 = 0;
    uStack_a8 = 0;
    uStack_d0 = 0;
    lVar10 = *(long *)PTR_DAT_04bb2720;
    local_108 = 0;
    puStack_100 = puStack_110;
    local_f0 = local_118;
    puStack_e8 = puStack_110;
    local_d8 = puStack_110;
    local_c8 = local_118;
    puStack_c0 = puStack_110;
    local_b0 = puStack_110;
    local_a0 = local_118;
    puStack_98 = puStack_110;
    local_88 = puStack_110;
    if (lVar10 == 0) {
      puVar11 = &DAT_055c04a0;
    }
    else {
      puVar11 = &DAT_055c04a0;
      if (*(long *)(lVar10 + 0x330) != 0) {
        puVar11 = (undefined8 *)
                  (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                            (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar10 + 0x338));
        iVar5 = FUN_006bd550(*puVar11,0);
        puVar11 = (undefined8 *)PTR_DAT_04bc3a80;
        if (iVar5 != 0x758f7eaf) {
          puVar11 = &DAT_055c04a0;
        }
      }
    }
    uVar7 = FUN_0180ff90(*(undefined4 *)(puVar11 + 7),local_34,&local_a0,local_38,&local_c8,local_74
                         ,&local_f0,local_78,&local_118);
    if (((uVar7 & 1) != 0) && (local_34[0] != '\0')) {
      lVar10 = *(long *)PTR_DAT_04bb2698;
      fVar13 = (float)(int)local_90;
      fVar14 = (float)local_90._4_4_;
      fVar16 = (float)(int)local_80 * 5.0 + 5.0;
      fVar15 = (float)local_80._4_4_ * 5.0 + 5.0;
      if (lVar10 == 0) {
        plVar8 = malloc(0x1f0);
      }
      else {
        lVar6 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar4 + 0x68));
        plVar8 = (long *)(lVar10 + 8);
        if (lVar6 != 0) {
          plVar8 = (long *)(lVar6 + 0xa8);
        }
        plVar8 = (long *)*plVar8;
        if (plVar8 == (long *)0x0) {
          plVar8 = (long *)0x0;
        }
        else {
          plVar8 = (long *)(**(code **)(*plVar8 + 0x30))(plVar8,0x1f0,8);
        }
      }
      *plVar8 = (long)(PTR_DAT_04bb5cb0 + 0x10);
      plVar8[1] = 0;
      puVar1 = PTR_DAT_04bb5bb8;
      *(undefined8 *)((long)plVar8 + 0x1d) = 0;
      plVar8[10] = (long)(puVar1 + 0x10);
      puVar1 = PTR_DAT_04bb5ba8;
      plVar8[2] = 0;
      plVar8[3] = 0;
      plVar8[0x10] = 0;
      plVar8[0x11] = 0;
      puVar1 = puVar1 + 0x10;
      plVar8[0x16] = 0;
      plVar8[0x17] = 0;
      plVar8[0x1c] = 0;
      plVar8[0x1d] = 0;
      plVar8[0x22] = 0;
      plVar8[0x23] = 0;
      plVar8[0x28] = 0;
      plVar8[0x29] = 0;
      plVar8[0x2e] = 0;
      plVar8[0x2f] = 0;
      plVar8[0x34] = 0;
      plVar8[0x35] = 0;
      plVar8[0xc] = (long)puVar1;
      plVar8[0xd] = 0;
      plVar8[0xe] = 0;
      plVar8[0xf] = (long)puVar1;
      plVar8[0x12] = (long)puVar1;
      plVar8[0x13] = 0;
      plVar8[0x14] = 0;
      plVar8[0x15] = (long)puVar1;
      plVar8[0x18] = (long)puVar1;
      plVar8[0x19] = 0;
      plVar8[0x1a] = 0;
      plVar8[0x1b] = (long)puVar1;
      plVar8[0x1e] = (long)puVar1;
      plVar8[0x1f] = 0;
      plVar8[0x20] = 0;
      plVar8[0x21] = (long)puVar1;
      plVar8[0x24] = (long)puVar1;
      plVar8[0x25] = 0;
      plVar8[0x26] = 0;
      plVar8[0x27] = (long)puVar1;
      plVar8[0x2a] = (long)puVar1;
      plVar8[0x2b] = 0;
      plVar8[0x2c] = 0;
      plVar8[0x2d] = (long)puVar1;
      plVar8[0x30] = (long)puVar1;
      plVar8[0x31] = 0;
      plVar8[0x32] = 0;
      plVar8[0x33] = (long)puVar1;
      *(undefined4 *)(plVar8 + 0x36) = 0;
      *(undefined1 *)(plVar8 + 0x37) = 0;
      plVar8[0x3a] = 0;
      *(undefined4 *)(plVar8 + 0x3d) = 0;
      *(float *)(plVar8 + 5) = fVar16 - fVar13 * 5.0;
      *(float *)(plVar8 + 6) = fVar15 - fVar14 * 5.0;
      *(undefined8 *)((long)plVar8 + 0x34) = 0;
      *(undefined4 *)((long)plVar8 + 0x3c) = 0;
      *(float *)(plVar8 + 8) = (fVar13 * 5.0 + fVar16) * 0.5;
      *(undefined4 *)((long)plVar8 + 0x44) = 0;
      *(float *)(plVar8 + 9) = (fVar14 * 5.0 + fVar15) * 0.5;
      *(undefined4 *)(plVar8 + 0xb) = 0;
      *(undefined1 *)((long)plVar8 + 0x1ec) = 0;
      plVar8[0x38] = (long)(puVar2 + 0x10);
      plVar8[0x39] = (long)(puVar3 + 0x10);
      *(undefined4 *)((long)plVar8 + 0x2c) = 0x41a00000;
      *(undefined4 *)((long)plVar8 + 0x1c) = 0x1000;
      plVar8[0x3b] = (long)(puVar3 + 0x10);
      plVar8[0x3c] = 0;
      *(undefined4 *)((long)plVar8 + 0x4c) = 0x200000;
      if (*(int *)(param_1 + 0x2c0) < *(int *)(param_1 + 0x2c4)) {
        *(long **)(*(long *)(param_1 + 0x2c8) + (long)*(int *)(param_1 + 0x2c0) * 8) = plVar8;
        *(int *)(param_1 + 0x2c0) = *(int *)(param_1 + 0x2c0) + 1;
      }
      lVar10 = *(long *)PTR_DAT_04bb27c8;
      if ((lVar10 != 0) && (plVar8[2] == 0 && plVar8[1] == 0)) {
        nn::os::LockMutex((MutexType *)(lVar10 + 0x50));
        plVar9 = (long *)(lVar10 + 0x70);
        lVar6 = *plVar9;
        plVar8 = (long *)((long)*(int *)(lVar10 + 0x84) + (long)plVar8);
        *plVar9 = (long)plVar8;
        *plVar8 = lVar6;
        plVar8[1] = (long)plVar9;
        if (lVar6 != 0) {
          *(long **)(lVar6 + 8) = plVar8;
        }
        *(int *)(lVar10 + 0x80) = *(int *)(lVar10 + 0x80) + 1;
        nn::os::UnlockMutex((MutexType *)(lVar10 + 0x50));
      }
    }
  }
  if (lVar12 != 1) {
    lVar10 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar4 + 0x68));
    *(long *)(lVar10 + 0xa8) = lVar12;
  }
  return;
}


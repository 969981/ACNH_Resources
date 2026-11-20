
void FUN_03ec24c0(long param_1,int *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  uint uVar3;
  int iVar4;
  long *plVar5;
  long lVar6;
  void *pvVar7;
  ulong uVar8;
  uint uVar9;
  long *plVar10;
  undefined8 *puVar11;
  uint uVar12;
  long lVar13;
  long *local_f8;
  undefined8 uStack_f0;
  long local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  long *local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  int local_b0;
  int iStack_ac;
  undefined8 local_a8;
  long lStack_a0;
  int local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  uint local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  *(undefined8 *)(param_1 + 0x78) = *(undefined8 *)(param_2 + 6);
  iVar4 = param_2[0x28];
  *(char *)(param_1 + 0x1d08) = (char)iVar4;
  if ((char)iVar4 != '\0') {
    iVar4 = param_2[0x24];
    if (0 < iVar4) {
      lVar13 = *(long *)PTR_DAT_04bb2698;
      if (lVar13 == 0) {
        pvVar7 = malloc((long)iVar4 << 3);
      }
      else {
        plVar5 = *(long **)(param_2 + 2);
        if (plVar5 == (long *)0x0) {
          lVar6 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
          plVar5 = (long *)(lVar13 + 8);
          if (lVar6 != 0) {
            plVar5 = (long *)(lVar6 + 0xa8);
          }
          plVar5 = (long *)*plVar5;
          if (plVar5 == (long *)0x0) goto LAB_03ec258c;
        }
        pvVar7 = (void *)(**(code **)(*plVar5 + 0x30))(plVar5,(long)iVar4 << 3,8);
      }
      if (pvVar7 != (void *)0x0) {
        *(void **)(param_1 + 0x1d00) = pvVar7;
        *(undefined4 *)(param_1 + 0x1cf8) = 0;
        *(int *)(param_1 + 0x1cfc) = iVar4;
      }
    }
LAB_03ec258c:
    if ((int *)(param_1 + 0x1cf8) != param_2 + 0x24) {
      iVar4 = *(int *)(param_1 + 0x1cfc);
      if (param_2[0x24] <= *(int *)(param_1 + 0x1cfc)) {
        iVar4 = param_2[0x24];
      }
      *(int *)(param_1 + 0x1cf8) = iVar4;
      memcpy(*(void **)(param_1 + 0x1d00),*(void **)(param_2 + 0x26),(long)(iVar4 << 3));
    }
  }
  if (*param_2 == 1) {
    uVar12 = param_2[0xd];
    if (0 < (int)uVar12) {
      lVar13 = *(long *)PTR_DAT_04bb2698;
      if (lVar13 == 0) {
        pvVar7 = malloc((ulong)uVar12 << 4);
      }
      else {
        plVar5 = *(long **)(param_2 + 2);
        if (plVar5 == (long *)0x0) {
          lVar6 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
          plVar5 = (long *)(lVar13 + 8);
          if (lVar6 != 0) {
            plVar5 = (long *)(lVar6 + 0xa8);
          }
          plVar5 = (long *)*plVar5;
          if (plVar5 == (long *)0x0) goto LAB_03ec2e50;
        }
        pvVar7 = (void *)(**(code **)(*plVar5 + 0x30))(plVar5,(ulong)uVar12 << 4,8);
      }
      if (pvVar7 != (void *)0x0) {
        *(uint *)(param_1 + 0x18) = uVar12;
        *(void **)(param_1 + 0x20) = pvVar7;
      }
    }
    goto LAB_03ec2e50;
  }
  if (*(long *)(param_2 + 0x12) == 0) {
    plVar5 = *(long **)(param_2 + 0x10);
  }
  else {
    lVar13 = *(long *)PTR_DAT_04bb2698;
    if (lVar13 == 0) {
      plVar5 = malloc(0x90);
    }
    else {
      plVar5 = *(long **)(param_2 + 2);
      if (plVar5 == (long *)0x0) {
        lVar6 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        plVar5 = (long *)(lVar13 + 8);
        if (lVar6 != 0) {
          plVar5 = (long *)(lVar6 + 0xa8);
        }
        plVar5 = (long *)*plVar5;
        if (plVar5 == (long *)0x0) {
          plVar5 = (long *)0x0;
          goto LAB_03ec26d8;
        }
      }
      plVar5 = (long *)(**(code **)(*plVar5 + 0x30))(plVar5,0x90,8);
    }
LAB_03ec26d8:
    *(undefined4 *)(plVar5 + 1) = 0;
    puVar1 = PTR_DAT_04bd48b0;
    plVar5[2] = 0;
    *(undefined4 *)(plVar5 + 3) = 0;
    plVar5[4] = 0;
    plVar5[6] = 0;
    plVar5[7] = 0;
    *plVar5 = (long)(puVar1 + 0x10);
    plVar5[8] = 0;
    plVar5[9] = 0;
    plVar5[10] = 0;
    plVar5[0xb] = 0;
    plVar5[0xc] = 0;
    plVar5[0xd] = 0;
    plVar5[0xe] = 0;
    plVar5[0xf] = 0;
    plVar5[0x10] = 0;
    plVar5[0x11] = 0;
    local_f8 = *(long **)(param_2 + 2);
    uStack_f0 = *(undefined8 *)(param_2 + 0x12);
    FUN_03ecb7d0(plVar5,&local_f8);
  }
  *(long **)(param_1 + 0x50) = plVar5;
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0xe);
  if ((char)param_2[0x21] != '\0') {
    local_f8 = (long *)CONCAT44(local_f8._4_4_,1);
    *(byte *)(param_1 + 0x1d09) = *(byte *)(param_1 + 0x1d09) | 2;
  }
  uVar12 = *(uint *)(*(long *)(plVar5[2] + 8) + 0x18);
  if ((int)uVar12 < 2) {
    uVar12 = 1;
  }
  lVar13 = *(long *)PTR_DAT_04bb2698;
  if (lVar13 == 0) {
    pvVar7 = malloc((ulong)uVar12 << 4);
joined_r0x03ec2834:
    if (pvVar7 != (void *)0x0) {
      *(uint *)(param_1 + 0x18) = uVar12;
      *(void **)(param_1 + 0x20) = pvVar7;
    }
  }
  else {
    plVar5 = *(long **)(param_2 + 2);
    if (plVar5 != (long *)0x0) {
LAB_03ec27b4:
      pvVar7 = (void *)(**(code **)(*plVar5 + 0x30))(plVar5,(ulong)uVar12 << 4,8);
      goto joined_r0x03ec2834;
    }
    lVar6 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    plVar5 = (long *)(lVar13 + 8);
    if (lVar6 != 0) {
      plVar5 = (long *)(lVar6 + 0xa8);
    }
    plVar5 = (long *)*plVar5;
    if (plVar5 != (long *)0x0) goto LAB_03ec27b4;
  }
  plVar5 = (long *)PTR_DAT_04bb2698;
  lVar13 = *(long *)PTR_DAT_04bb2698;
  if (lVar13 == 0) {
    plVar10 = malloc(0x20);
  }
  else {
    plVar10 = *(long **)(param_2 + 2);
    if (plVar10 == (long *)0x0) {
      lVar6 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar10 = (long *)(lVar13 + 8);
      if (lVar6 != 0) {
        plVar10 = (long *)(lVar6 + 0xa8);
      }
      plVar10 = (long *)*plVar10;
    }
    plVar10 = (long *)(**(code **)(*plVar10 + 0x30))(plVar10,0x20,8);
  }
  puVar1 = PTR_DAT_04bd47a0;
  *(undefined4 *)(plVar10 + 1) = 0;
  plVar10[2] = 0;
  *(undefined1 *)(plVar10 + 3) = 0;
  *plVar10 = (long)(puVar1 + 0x10);
  local_70 = *(undefined8 *)(param_2 + 2);
  uStack_68 = *(undefined8 *)(param_2 + 0xe);
  FUN_03ec54e0(plVar10,&local_70);
  local_e8 = *(long *)(param_1 + 0x50);
  *(long **)(param_1 + 0x30) = plVar10;
  if (0 < *(int *)(*(long *)(*(long *)(local_e8 + 0x10) + 8) + 0x4c)) {
    lVar13 = *plVar5;
    if (lVar13 == 0) {
      pvVar7 = malloc(0x94);
    }
    else {
      plVar10 = *(long **)(param_2 + 2);
      if (plVar10 == (long *)0x0) {
        lVar6 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        plVar10 = (long *)(lVar13 + 8);
        if (lVar6 != 0) {
          plVar10 = (long *)(lVar6 + 0xa8);
        }
        plVar10 = (long *)*plVar10;
      }
      pvVar7 = (void *)(**(code **)(*plVar10 + 0x30))(plVar10,0x94,8);
    }
    *(undefined4 *)((long)pvVar7 + 0x90) = 0;
    local_e8 = *(long *)(param_1 + 0x50);
    *(void **)(param_1 + 0x68) = pvVar7;
  }
  plVar10 = *(long **)(param_2 + 2);
  uStack_f0 = *(undefined8 *)(param_2 + 4);
  uStack_e0 = *(undefined8 *)(param_2 + 8);
  iVar4 = param_2[0x20];
  local_b8 = CONCAT44(local_b8._4_4_,iVar4);
  if ((((0 < iVar4) && (local_d8 = *(undefined8 *)(param_2 + 0x18), iVar4 != 1)) &&
      (local_d0 = *(long **)(param_2 + 0x1a), iVar4 != 2)) &&
     (local_c8 = *(undefined8 *)(param_2 + 0x1c), iVar4 != 3)) {
    local_c0 = *(undefined8 *)(param_2 + 0x1e);
  }
  lVar13 = *plVar5;
  local_f8 = plVar10;
  if (lVar13 == 0) {
    plVar10 = malloc(0xe8);
  }
  else {
    if (plVar10 == (long *)0x0) {
      lVar6 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar10 = (long *)(lVar13 + 8);
      if (lVar6 != 0) {
        plVar10 = (long *)(lVar6 + 0xa8);
      }
      plVar10 = (long *)*plVar10;
    }
    plVar10 = (long *)(**(code **)(*plVar10 + 0x30))(plVar10,0xe8,8);
  }
  *(undefined4 *)(plVar10 + 2) = 0;
  plVar10[3] = 0;
  puVar1 = PTR_DAT_04bcb430;
  *(undefined4 *)(plVar10 + 4) = 0;
  plVar10[5] = 0;
  *(undefined4 *)(plVar10 + 6) = 0;
  plVar10[7] = 0;
  *(undefined4 *)(plVar10 + 8) = 0;
  plVar10[9] = 0;
  *(undefined4 *)(plVar10 + 10) = 0;
  plVar10[0xb] = 0;
  *(undefined4 *)(plVar10 + 0xc) = 0;
  plVar10[0xd] = 0;
  *(undefined4 *)(plVar10 + 0xe) = 0;
  plVar10[0xf] = 0;
  *(undefined4 *)(plVar10 + 0x10) = 0;
  plVar10[0x11] = 0;
  *(undefined4 *)(plVar10 + 0x12) = 0;
  plVar10[0x13] = 0;
  *(undefined4 *)(plVar10 + 0x14) = 0;
  plVar10[0x15] = 0;
  plVar10[0x1a] = 0;
  *plVar10 = (long)(puVar1 + 0x10);
  plVar10[1] = (long)&DAT_0407ebb1;
  plVar10[0x1b] = 0;
  plVar10[0x1c] = 0;
  FUN_03ebb3e0(plVar10,&local_f8);
  *(long **)(param_1 + 0x48) = plVar10;
  if (0 < *(int *)(param_1 + 0x18)) {
    uVar12 = 0;
    puVar1 = PTR_DAT_04bd47a8 + 0x10;
    puVar2 = PTR_DAT_04bd4780 + 0x10;
    do {
      lVar13 = *plVar5;
      if (lVar13 == 0) {
        plVar10 = malloc(0x30);
      }
      else {
        plVar10 = *(long **)(param_2 + 2);
        if (plVar10 == (long *)0x0) {
          lVar6 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
          plVar10 = (long *)(lVar13 + 8);
          if (lVar6 != 0) {
            plVar10 = (long *)(lVar6 + 0xa8);
          }
          plVar10 = (long *)*plVar10;
        }
        plVar10 = (long *)(**(code **)(*plVar10 + 0x30))(plVar10,0x30,8);
      }
      *plVar10 = (long)puVar1;
      *(undefined4 *)(plVar10 + 1) = 0;
      *(undefined4 *)(plVar10 + 4) = 0xffffffff;
      *(undefined2 *)((long)plVar10 + 0x24) = 0;
      plVar10[5] = 0;
      plVar10[2] = 0;
      plVar10[3] = 0;
      local_90 = *(undefined8 *)(param_2 + 2);
      uStack_88 = *(undefined8 *)(param_2 + 0xe);
      local_80 = *(undefined8 *)(param_1 + 0x50);
      local_78 = uVar12;
      FUN_03ec62d0(plVar10,&local_90);
      lVar13 = *plVar5;
      if (lVar13 == 0) {
        plVar5 = malloc(0x168);
      }
      else {
        plVar5 = *(long **)(param_2 + 2);
        if (plVar5 == (long *)0x0) {
          lVar6 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
          plVar5 = (long *)(lVar13 + 8);
          if (lVar6 != 0) {
            plVar5 = (long *)(lVar6 + 0xa8);
          }
          plVar5 = (long *)*plVar5;
          if (plVar5 == (long *)0x0) {
            plVar5 = (long *)0x0;
            goto LAB_03ec2b5c;
          }
        }
        plVar5 = (long *)(**(code **)(*plVar5 + 0x30))(plVar5,0x168,8);
      }
LAB_03ec2b5c:
      *plVar5 = (long)puVar2;
      plVar5[1] = 0;
      *(undefined4 *)(plVar5 + 0xf) = 1;
      *(undefined8 *)((long)plVar5 + 0x84) = 0x3f80000000000000;
      *(undefined4 *)(plVar5 + 0x15) = 0x41200000;
      plVar5[10] = 0;
      *(undefined4 *)((long)plVar5 + 0xae) = 0xffff0000;
      *(undefined4 *)(plVar5 + 0xb) = 0;
      plVar5[0xc] = 0;
      *(undefined4 *)(plVar5 + 0xd) = 0;
      *(undefined8 *)((long)plVar5 + 0xf4) = 0x200000001;
      plVar5[0xe] = 0;
      *(undefined8 *)((long)plVar5 + 0xfc) = 0;
      plVar5[8] = 0;
      *(undefined4 *)(plVar5 + 9) = 0;
      *(undefined1 **)((long)plVar5 + 0x7c) = &DAT_3f8000003f800000;
      *(undefined2 *)((long)plVar5 + 0x8c) = 0;
      plVar5[0x14] = (long)&DAT_3f8000003f800000;
      *(undefined1 *)((long)plVar5 + 0xac) = 0;
      *(undefined8 *)((long)plVar5 + 0xb4) = 0;
      *(undefined8 *)((long)plVar5 + 0xbc) = 0;
      *(undefined8 *)((long)plVar5 + 0xc4) = 0;
      *(undefined8 *)((long)plVar5 + 0xcc) = 0;
      *(undefined8 *)((long)plVar5 + 0xd4) = 0;
      *(undefined8 *)((long)plVar5 + 0xdc) = 0;
      *(undefined8 *)((long)plVar5 + 0xe4) = 0;
      *(undefined8 *)((long)plVar5 + 0xec) = 0;
      plVar5[0x22] = 0;
      *(undefined4 *)(plVar5 + 0x23) = 0;
      plVar5[0x26] = (long)&DAT_0407ebb1;
      *(undefined4 *)(plVar5 + 0x27) = 0;
      plVar5[0x2c] = 0;
      *(undefined8 *)((long)plVar5 + 0x104) = 0;
      plVar5[2] = (long)&DAT_0407ebb1;
      plVar5[3] = 0;
      plVar5[4] = 0;
      plVar5[5] = 0;
      plVar5[6] = 0;
      plVar5[7] = 0;
      local_d8 = CONCAT44(local_d8._4_4_,uVar12);
      plVar5[0x12] = 0;
      plVar5[0x13] = 0;
      plVar5[0x24] = 0;
      plVar5[0x25] = 0;
      plVar5[0x28] = 0;
      plVar5[0x29] = -1;
      plVar5[0x2a] = 0;
      plVar5[0x2b] = 0;
      local_f8 = *(long **)(param_2 + 2);
      uStack_f0 = *(undefined8 *)(param_2 + 4);
      local_e8 = *(long *)(param_1 + 0x50);
      uStack_e0 = *(undefined8 *)(param_2 + 0xe);
      local_c8 = *(undefined8 *)(param_2 + 10);
      local_c0 = CONCAT44(local_c0._4_4_,param_2[0xc]);
      local_b8 = *(undefined8 *)(param_2 + 0x14);
      local_b0 = param_2[0x16];
      iStack_ac = param_2[0x17];
      local_a8 = *(undefined8 *)(param_2 + 6);
      local_98 = param_2[0x22];
      local_d0 = plVar10;
      lStack_a0 = param_1;
      FUN_03ebe330(plVar5,&local_f8);
      plVar5[4] = *(long *)(param_1 + 0x48);
      uVar9 = uVar12;
      if (*(uint *)(param_1 + 0x18) <= uVar12) {
        uVar9 = 0;
      }
      *(long **)(*(long *)(param_1 + 0x20) + (ulong)uVar9 * 0x10) = plVar5;
      uVar9 = uVar12;
      if (*(uint *)(param_1 + 0x18) <= uVar12) {
        uVar9 = 0;
      }
      uVar12 = uVar12 + 1;
      *(long **)(*(long *)(param_1 + 0x20) + (ulong)uVar9 * 0x10 + 8) = plVar10;
      plVar5 = (long *)PTR_DAT_04bb2698;
    } while ((int)uVar12 < *(int *)(param_1 + 0x18));
  }
  lVar13 = *plVar5;
  if (lVar13 == 0) {
    plVar10 = malloc(0xb8);
  }
  else {
    plVar10 = *(long **)(param_2 + 2);
    if (plVar10 == (long *)0x0) {
      lVar6 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar10 = (long *)(lVar13 + 8);
      if (lVar6 != 0) {
        plVar10 = (long *)(lVar6 + 0xa8);
      }
      plVar10 = (long *)*plVar10;
    }
    plVar10 = (long *)(**(code **)(*plVar10 + 0x30))(plVar10,0xb8,8);
  }
  *(undefined4 *)(plVar10 + 1) = 0;
  puVar1 = PTR_DAT_04bd48b8;
  plVar10[2] = 0;
  *(undefined4 *)(plVar10 + 3) = 0;
  *(undefined4 *)(plVar10 + 4) = 0;
  plVar10[5] = 0;
  *(undefined4 *)(plVar10 + 6) = 0;
  *(undefined4 *)(plVar10 + 7) = 0;
  *(undefined4 *)((long)plVar10 + 0x54) = 0;
  *(undefined1 *)(plVar10 + 0xb) = 0;
  plVar10[0x15] = 0;
  *(undefined4 *)(plVar10 + 0x16) = 0;
  *(undefined4 *)(plVar10 + 0x14) = 0;
  *plVar10 = (long)(puVar1 + 0x10);
  *(undefined2 *)(plVar10 + 10) = 0xffff;
  plVar10[8] = 0;
  plVar10[9] = 0;
  plVar10[0xc] = 0;
  plVar10[0xd] = 0;
  plVar10[0xe] = 0;
  plVar10[0xf] = 0;
  plVar10[0x10] = 0;
  plVar10[0x11] = 0;
  plVar10[0x12] = 0;
  plVar10[0x13] = 0;
  local_f8 = *(long **)(param_2 + 2);
  FUN_03ecebd0(plVar10,&local_f8);
  *(long **)(param_1 + 0x38) = plVar10;
  plVar10 = *(long **)(param_2 + 4);
  if (plVar10 != (long *)0x0) {
    if (*plVar5 == 0) {
      pvVar7 = malloc(0x180);
    }
    else {
      pvVar7 = (void *)(**(code **)(*plVar10 + 0x30))(plVar10,0x180,8);
    }
    FUN_03edfa00(pvVar7,param_1,plVar10);
    *(void **)(param_1 + 0x40) = pvVar7;
    puVar11 = *(undefined8 **)(param_1 + 0x48);
    if (((*PTR_DAT_04bd4778 & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(PTR_DAT_04bd4778), iVar4 != 0)) {
      *(undefined **)PTR_DAT_04bd4770 = PTR_DAT_04bd4740 + 0x10;
      __cxa_guard_release(PTR_DAT_04bd4778);
    }
    if ((puVar11 != (undefined8 *)0x0) &&
       (uVar8 = (**(code **)*puVar11)(puVar11,PTR_DAT_04bd4770), (uVar8 & 1) != 0)) {
      puVar11[0x1b] = *(undefined8 *)(param_1 + 0x40);
    }
    uVar12 = *(uint *)(param_1 + 0x18);
    if (0 < (int)uVar12) {
      uVar9 = 0;
      do {
        uVar3 = uVar9;
        if (uVar12 <= uVar9) {
          uVar3 = 0;
        }
        uVar9 = uVar9 + 1;
        *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + (ulong)uVar3 * 0x10) + 0x38) =
             *(undefined8 *)(param_1 + 0x40);
        uVar12 = *(uint *)(param_1 + 0x18);
      } while ((int)uVar9 < (int)uVar12);
    }
  }
LAB_03ec2e50:
  iVar4 = (**(code **)(**(long **)(param_1 + 0x50) + 0x1c0))();
  if (0 < iVar4) {
    *(undefined1 *)(param_1 + 0x70) = 1;
  }
  lVar6 = *(long *)PTR_DAT_04bb4a70;
  nn::os::LockMutex((MutexType *)(lVar6 + 0x40));
  plVar5 = (long *)(*(int *)(lVar6 + 0x1c) + param_1);
  plVar10 = (long *)(lVar6 + 8);
  lVar13 = *plVar10;
  *plVar10 = (long)plVar5;
  *plVar5 = lVar13;
  plVar5[1] = (long)plVar10;
  if (lVar13 != 0) {
    *(long **)(lVar13 + 8) = plVar5;
  }
  *(int *)(lVar6 + 0x18) = *(int *)(lVar6 + 0x18) + 1;
  nn::os::UnlockMutex((MutexType *)(lVar6 + 0x40));
  return;
}


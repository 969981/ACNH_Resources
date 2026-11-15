
/* WARNING: Removing unreachable block (ram,0x01e895c0) */
/* WARNING: Removing unreachable block (ram,0x01e89790) */
/* WARNING: Removing unreachable block (ram,0x01e89550) */
/* WARNING: Removing unreachable block (ram,0x01e89560) */
/* WARNING: Removing unreachable block (ram,0x01e89900) */
/* WARNING: Removing unreachable block (ram,0x01e89580) */
/* WARNING: Removing unreachable block (ram,0x01e89590) */
/* WARNING: Removing unreachable block (ram,0x01e8960c) */
/* WARNING: Removing unreachable block (ram,0x01e89520) */
/* WARNING: Removing unreachable block (ram,0x01e89530) */
/* WARNING: Removing unreachable block (ram,0x01e895b0) */
/* WARNING: Removing unreachable block (ram,0x01e89a68) */

void FUN_01e89470(long param_1,float *param_2)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  float fVar11;
  undefined *local_c0;
  undefined1 local_b8;
  int local_b4;
  undefined *local_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 local_a0;
  undefined2 local_9c;
  undefined *local_98;
  int local_90;
  undefined **local_88;
  undefined **ppuStack_80;
  undefined1 *local_78;
  float local_68 [2];
  float local_60;
  
  if (4 < *(int *)(param_1 + 0x12700) - 1U) {
    return;
  }
  switch(*(int *)(param_1 + 0x12700)) {
  case 1:
    local_c0 = (undefined *)((ulong)local_c0 & 0xffffffff00000000);
    uVar6 = FUN_02b67a30(&local_c0,*(undefined4 *)(*(long *)(param_1 + 8) + 0x508));
    if ((uVar6 & 1) == 0) {
      return;
    }
    uVar6 = FUN_021d92a0(local_68,*(long *)(param_1 + 8) + 0x508);
    if ((uVar6 & 1) == 0) {
      return;
    }
    local_60 = local_60 + 10.0;
    goto LAB_01e89bcc;
  case 2:
    local_68[0] = 0.0;
    local_98 = PTR_DAT_04bc43f8 + 0x10;
    local_c0 = PTR_DAT_04bc4608 + 0x10;
    local_b0 = PTR_DAT_04bb2010 + 0x10;
    local_90 = DAT_05636e58;
    local_b8 = PTR_DAT_04bbc570[8];
    local_b4 = *(int *)(PTR_DAT_04bbc570 + 0xc);
    local_a8 = *(undefined4 *)(PTR_DAT_04bbc570 + 0x18);
    uStack_a4 = *(undefined4 *)(PTR_DAT_04bbc570 + 0x1c);
    local_a0 = *(undefined4 *)(PTR_DAT_04bbc570 + 0x20);
    local_9c = *(undefined2 *)(PTR_DAT_04bbc570 + 0x24);
    if (DAT_05636e58 != 0) {
      ppuStack_80 = &local_98;
      local_88 = &PTR_FUN_04a9b150;
      puVar1 = &DAT_05636dd8;
      if (*(long *)(*(long *)PTR_DAT_04bb27a8 + 0x1f8) != 0) {
        puVar1 = (undefined8 *)(*(long *)(*(long *)PTR_DAT_04bb27a8 + 0x1f8) + 0x148);
      }
      local_78 = (undefined1 *)&local_c0;
      if (puVar1[1] != 0) {
        local_78 = (undefined1 *)&local_c0;
        plVar5 = (long *)(*(code *)**(undefined8 **)(puVar1[1] + 0x10))();
        iVar4 = (**(code **)(*plVar5 + 0x18))();
        if (0 < iVar4) {
          iVar10 = 0;
          do {
            FUN_01360490(local_68,puVar1[1],iVar10);
            uVar6 = (*(code *)*local_88)(&local_88,local_68);
            if ((uVar6 & 1) != 0) break;
            bVar3 = iVar4 + -1 != iVar10;
            iVar10 = iVar10 + 1;
          } while (bVar3);
        }
      }
    }
    if (local_b4 == 0) {
      return;
    }
    uVar6 = FUN_02a8f1dc(&local_c0,local_68);
    if ((uVar6 & 1) == 0) {
      return;
    }
    lVar7 = *(long *)(param_1 + 8);
    uVar9 = *(uint *)(lVar7 + 0x294);
    uVar8 = *(uint *)(lVar7 + 0x288) ^ *(uint *)(lVar7 + 0x288) << 0xb;
    uVar8 = uVar8 >> 8 ^ uVar9 >> 0x13 ^ uVar8 ^ uVar9;
    fVar11 = (float)((int)((ulong)uVar8 * 3 >> 0x20) + -1);
    local_68[0] = local_68[0] + (fVar11 + fVar11) * 5.0;
    fVar11 = 25.0;
    goto LAB_01e89ba0;
  case 3:
    local_68[0] = 1.4013e-45;
    local_98 = PTR_DAT_04bc43f8 + 0x10;
    local_c0 = PTR_DAT_04bc4608 + 0x10;
    local_b0 = PTR_DAT_04bb2010 + 0x10;
    local_90 = DAT_05636e5c;
    local_b8 = PTR_DAT_04bbc570[8];
    local_b4 = *(int *)(PTR_DAT_04bbc570 + 0xc);
    local_a8 = *(undefined4 *)(PTR_DAT_04bbc570 + 0x18);
    uStack_a4 = *(undefined4 *)(PTR_DAT_04bbc570 + 0x1c);
    local_a0 = *(undefined4 *)(PTR_DAT_04bbc570 + 0x20);
    local_9c = *(undefined2 *)(PTR_DAT_04bbc570 + 0x24);
    if (DAT_05636e5c != 0) {
      ppuStack_80 = &local_98;
      local_88 = &PTR_FUN_04a9b150;
      puVar1 = &DAT_05636dd8;
      if (*(long *)(*(long *)PTR_DAT_04bb27a8 + 0x1f8) != 0) {
        puVar1 = (undefined8 *)(*(long *)(*(long *)PTR_DAT_04bb27a8 + 0x1f8) + 0x148);
      }
      local_78 = (undefined1 *)&local_c0;
      if (puVar1[1] != 0) {
        local_78 = (undefined1 *)&local_c0;
        plVar5 = (long *)(*(code *)**(undefined8 **)(puVar1[1] + 0x10))();
        iVar4 = (**(code **)(*plVar5 + 0x18))();
        if (0 < iVar4) {
          iVar10 = 0;
          do {
            FUN_01360490(local_68,puVar1[1],iVar10);
            uVar6 = (*(code *)*local_88)(&local_88,local_68);
            if ((uVar6 & 1) != 0) break;
            bVar3 = iVar4 + -1 != iVar10;
            iVar10 = iVar10 + 1;
          } while (bVar3);
        }
      }
    }
    if (local_b4 == 0) {
      return;
    }
    uVar6 = FUN_02a8f1dc(&local_c0,local_68);
    if ((uVar6 & 1) == 0) {
      return;
    }
    lVar7 = *(long *)(param_1 + 8);
    uVar9 = *(uint *)(lVar7 + 0x294);
    uVar8 = *(uint *)(lVar7 + 0x288) ^ *(uint *)(lVar7 + 0x288) << 0xb;
    uVar8 = uVar8 >> 8 ^ uVar9 >> 0x13 ^ uVar8 ^ uVar9;
    fVar11 = (float)((int)((ulong)uVar8 * 3 >> 0x20) + -1);
    fVar11 = fVar11 + fVar11;
    break;
  case 4:
    local_68[0] = 4.2039e-45;
    local_98 = PTR_DAT_04bc43f8 + 0x10;
    local_c0 = PTR_DAT_04bc4608 + 0x10;
    local_b0 = PTR_DAT_04bb2010 + 0x10;
    local_90 = DAT_05636e64;
    local_b8 = PTR_DAT_04bbc570[8];
    local_b4 = *(int *)(PTR_DAT_04bbc570 + 0xc);
    local_a8 = *(undefined4 *)(PTR_DAT_04bbc570 + 0x18);
    uStack_a4 = *(undefined4 *)(PTR_DAT_04bbc570 + 0x1c);
    local_a0 = *(undefined4 *)(PTR_DAT_04bbc570 + 0x20);
    local_9c = *(undefined2 *)(PTR_DAT_04bbc570 + 0x24);
    if (DAT_05636e64 != 0) {
      ppuStack_80 = &local_98;
      local_88 = &PTR_FUN_04a9b150;
      puVar1 = &DAT_05636dd8;
      if (*(long *)(*(long *)PTR_DAT_04bb27a8 + 0x1f8) != 0) {
        puVar1 = (undefined8 *)(*(long *)(*(long *)PTR_DAT_04bb27a8 + 0x1f8) + 0x148);
      }
      local_78 = (undefined1 *)&local_c0;
      if (puVar1[1] != 0) {
        local_78 = (undefined1 *)&local_c0;
        plVar5 = (long *)(*(code *)**(undefined8 **)(puVar1[1] + 0x10))();
        iVar4 = (**(code **)(*plVar5 + 0x18))();
        if (0 < iVar4) {
          iVar10 = 0;
          do {
            FUN_01360490(local_68,puVar1[1],iVar10);
            uVar6 = (*(code *)*local_88)(&local_88,local_68);
            if ((uVar6 & 1) != 0) break;
            bVar3 = iVar4 + -1 != iVar10;
            iVar10 = iVar10 + 1;
          } while (bVar3);
        }
      }
    }
    if (local_b4 == 0) {
      return;
    }
    uVar6 = FUN_02a8f1dc(&local_c0,local_68);
    if ((uVar6 & 1) == 0) {
      return;
    }
    local_68[0] = local_68[0] + -20.0;
    local_60 = local_60 + -60.0;
    goto LAB_01e89bcc;
  case 5:
    local_68[0] = 2.8026e-45;
    local_98 = PTR_DAT_04bc43f8 + 0x10;
    local_c0 = PTR_DAT_04bc4608 + 0x10;
    local_b0 = PTR_DAT_04bb2010 + 0x10;
    local_90 = DAT_05636e60;
    local_b8 = PTR_DAT_04bbc570[8];
    local_b4 = *(int *)(PTR_DAT_04bbc570 + 0xc);
    local_a8 = *(undefined4 *)(PTR_DAT_04bbc570 + 0x18);
    uStack_a4 = *(undefined4 *)(PTR_DAT_04bbc570 + 0x1c);
    local_a0 = *(undefined4 *)(PTR_DAT_04bbc570 + 0x20);
    local_9c = *(undefined2 *)(PTR_DAT_04bbc570 + 0x24);
    if (DAT_05636e60 != 0) {
      ppuStack_80 = &local_98;
      local_88 = &PTR_FUN_04a9b150;
      puVar1 = &DAT_05636dd8;
      if (*(long *)(*(long *)PTR_DAT_04bb27a8 + 0x1f8) != 0) {
        puVar1 = (undefined8 *)(*(long *)(*(long *)PTR_DAT_04bb27a8 + 0x1f8) + 0x148);
      }
      local_78 = (undefined1 *)&local_c0;
      if (puVar1[1] != 0) {
        local_78 = (undefined1 *)&local_c0;
        plVar5 = (long *)(*(code *)**(undefined8 **)(puVar1[1] + 0x10))();
        iVar4 = (**(code **)(*plVar5 + 0x18))();
        if (0 < iVar4) {
          iVar10 = 0;
          do {
            FUN_01360490(local_68,puVar1[1],iVar10);
            uVar6 = (*(code *)*local_88)(&local_88,local_68);
            if ((uVar6 & 1) != 0) break;
            bVar3 = iVar4 + -1 != iVar10;
            iVar10 = iVar10 + 1;
          } while (bVar3);
        }
      }
    }
    if (local_b4 == 0) {
      return;
    }
    uVar6 = FUN_02a8f1dc(&local_c0,local_68);
    if ((uVar6 & 1) == 0) {
      return;
    }
    lVar7 = *(long *)(param_1 + 8);
    uVar9 = *(uint *)(lVar7 + 0x294);
    uVar8 = *(uint *)(lVar7 + 0x288) ^ *(uint *)(lVar7 + 0x288) << 0xb;
    uVar8 = uVar8 >> 8 ^ uVar9 >> 0x13 ^ uVar8 ^ uVar9;
    fVar11 = (float)((int)((ulong)uVar8 * 3 >> 0x20) + -1);
  }
  local_68[0] = local_68[0] + fVar11 * 5.0;
  fVar11 = 20.0;
LAB_01e89ba0:
  local_60 = local_60 + fVar11;
  *(uint *)(lVar7 + 0x294) = uVar8;
  *(undefined4 *)(lVar7 + 0x288) = *(undefined4 *)(lVar7 + 0x28c);
  uVar2 = *(undefined4 *)(lVar7 + 0x290);
  *(uint *)(lVar7 + 0x290) = uVar9;
  *(undefined4 *)(lVar7 + 0x28c) = uVar2;
LAB_01e89bcc:
  fVar11 = (float)FUN_0093a950(*(long *)PTR_DAT_04bb27c8 + 0x28,local_68,0);
  *param_2 = local_68[0];
  param_2[1] = fVar11;
  param_2[2] = local_60;
  return;
}


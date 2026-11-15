
/* WARNING: Removing unreachable block (ram,0x01f03a08) */
/* WARNING: Removing unreachable block (ram,0x01f03be8) */
/* WARNING: Removing unreachable block (ram,0x01f03998) */
/* WARNING: Removing unreachable block (ram,0x01f039a8) */
/* WARNING: Removing unreachable block (ram,0x01f039d8) */
/* WARNING: Removing unreachable block (ram,0x01f039c8) */
/* WARNING: Removing unreachable block (ram,0x01f03d64) */
/* WARNING: Removing unreachable block (ram,0x01f03968) */
/* WARNING: Removing unreachable block (ram,0x01f03978) */
/* WARNING: Removing unreachable block (ram,0x01f039f8) */
/* WARNING: Removing unreachable block (ram,0x01f03edc) */
/* WARNING: Removing unreachable block (ram,0x01f03a54) */

void FUN_01f03900(long param_1,undefined4 *param_2)

{
  undefined8 *puVar1;
  bool bVar2;
  int iVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  float fVar10;
  undefined4 uVar11;
  float fVar12;
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
  undefined8 local_68;
  float local_60;
  
  if (3 < *(int *)(param_1 + 0x12898) - 1U) {
    return;
  }
  switch(*(int *)(param_1 + 0x12898)) {
  case 1:
    local_68 = (ulong)local_68._4_4_ << 0x20;
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
        plVar4 = (long *)(*(code *)**(undefined8 **)(puVar1[1] + 0x10))();
        iVar3 = (**(code **)(*plVar4 + 0x18))();
        if (0 < iVar3) {
          iVar9 = 0;
          do {
            FUN_01360490(&local_68,puVar1[1],iVar9);
            uVar5 = (*(code *)*local_88)(&local_88,&local_68);
            if ((uVar5 & 1) != 0) break;
            bVar2 = iVar3 + -1 != iVar9;
            iVar9 = iVar9 + 1;
          } while (bVar2);
        }
      }
    }
    local_60 = 0.0;
    local_68 = 0;
    if (local_b4 == 0) {
      return;
    }
    uVar5 = FUN_02a8f1dc(&local_c0,&local_68);
    if ((uVar5 & 1) == 0) {
      return;
    }
    lVar6 = *(long *)(param_1 + 8);
    uVar8 = *(uint *)(lVar6 + 0x294);
    uVar7 = *(uint *)(lVar6 + 0x288) ^ *(uint *)(lVar6 + 0x288) << 0xb;
    uVar7 = uVar7 >> 8 ^ uVar8 >> 0x13 ^ uVar7 ^ uVar8;
    fVar10 = (float)((int)((ulong)uVar7 * 3 >> 0x20) + -1);
    fVar10 = (float)local_68 + (fVar10 + fVar10) * 5.0;
    fVar12 = 25.0;
    goto LAB_01f04010;
  case 2:
    local_68 = CONCAT44(local_68._4_4_,1);
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
        plVar4 = (long *)(*(code *)**(undefined8 **)(puVar1[1] + 0x10))();
        iVar3 = (**(code **)(*plVar4 + 0x18))();
        if (0 < iVar3) {
          iVar9 = 0;
          do {
            FUN_01360490(&local_68,puVar1[1],iVar9);
            uVar5 = (*(code *)*local_88)(&local_88,&local_68);
            if ((uVar5 & 1) != 0) break;
            bVar2 = iVar3 + -1 != iVar9;
            iVar9 = iVar9 + 1;
          } while (bVar2);
        }
      }
    }
    local_60 = 0.0;
    local_68 = 0;
    if (local_b4 == 0) {
      return;
    }
    uVar5 = FUN_02a8f1dc(&local_c0,&local_68);
    if ((uVar5 & 1) == 0) {
      return;
    }
    lVar6 = *(long *)(param_1 + 8);
    uVar8 = *(uint *)(lVar6 + 0x294);
    uVar7 = *(uint *)(lVar6 + 0x288) ^ *(uint *)(lVar6 + 0x288) << 0xb;
    uVar7 = uVar7 >> 8 ^ uVar8 >> 0x13 ^ uVar7 ^ uVar8;
    fVar10 = (float)((int)((ulong)uVar7 * 3 >> 0x20) + -1);
    fVar10 = fVar10 + fVar10;
    break;
  case 3:
    local_68 = CONCAT44(local_68._4_4_,3);
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
        plVar4 = (long *)(*(code *)**(undefined8 **)(puVar1[1] + 0x10))();
        iVar3 = (**(code **)(*plVar4 + 0x18))();
        if (0 < iVar3) {
          iVar9 = 0;
          do {
            FUN_01360490(&local_68,puVar1[1],iVar9);
            uVar5 = (*(code *)*local_88)(&local_88,&local_68);
            if ((uVar5 & 1) != 0) break;
            bVar2 = iVar3 + -1 != iVar9;
            iVar9 = iVar9 + 1;
          } while (bVar2);
        }
      }
    }
    local_60 = 0.0;
    local_68 = 0;
    if (local_b4 == 0) {
      return;
    }
    uVar5 = FUN_02a8f1dc(&local_c0,&local_68);
    if ((uVar5 & 1) == 0) {
      return;
    }
    local_60 = local_60 + -60.0;
    local_68 = CONCAT44(local_68._4_4_,(float)local_68 + -20.0);
    goto LAB_01f0403c;
  case 4:
    local_68 = CONCAT44(local_68._4_4_,2);
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
        plVar4 = (long *)(*(code *)**(undefined8 **)(puVar1[1] + 0x10))();
        iVar3 = (**(code **)(*plVar4 + 0x18))();
        if (0 < iVar3) {
          iVar9 = 0;
          do {
            FUN_01360490(&local_68,puVar1[1],iVar9);
            uVar5 = (*(code *)*local_88)(&local_88,&local_68);
            if ((uVar5 & 1) != 0) break;
            bVar2 = iVar3 + -1 != iVar9;
            iVar9 = iVar9 + 1;
          } while (bVar2);
        }
      }
    }
    if (local_b4 == 0) {
      return;
    }
    uVar5 = FUN_02a8f1dc(&local_c0,&local_68);
    if ((uVar5 & 1) == 0) {
      return;
    }
    lVar6 = *(long *)(param_1 + 8);
    uVar8 = *(uint *)(lVar6 + 0x294);
    uVar7 = *(uint *)(lVar6 + 0x288) ^ *(uint *)(lVar6 + 0x288) << 0xb;
    uVar7 = uVar7 >> 8 ^ uVar8 >> 0x13 ^ uVar7 ^ uVar8;
    fVar10 = (float)((int)((ulong)uVar7 * 3 >> 0x20) + -1);
  }
  fVar10 = (float)local_68 + fVar10 * 5.0;
  fVar12 = 20.0;
LAB_01f04010:
  local_60 = local_60 + fVar12;
  *(uint *)(lVar6 + 0x294) = uVar7;
  *(undefined4 *)(lVar6 + 0x288) = *(undefined4 *)(lVar6 + 0x28c);
  uVar11 = *(undefined4 *)(lVar6 + 0x290);
  *(uint *)(lVar6 + 0x290) = uVar8;
  *(undefined4 *)(lVar6 + 0x28c) = uVar11;
  local_68 = CONCAT44(local_68._4_4_,fVar10);
LAB_01f0403c:
  uVar11 = FUN_0093a950(*(long *)PTR_DAT_04bb27c8 + 0x28,&local_68,0);
  *param_2 = (float)local_68;
  param_2[1] = uVar11;
  param_2[2] = local_60;
  return;
}


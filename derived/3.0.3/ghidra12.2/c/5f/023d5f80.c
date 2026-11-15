
/* WARNING: Restarted to delay deadcode elimination for space: stack */

bool FUN_023d5f80(float param_1,long param_2,undefined8 param_3,undefined4 param_4)

{
  ulong uVar1;
  undefined *puVar2;
  uint uVar3;
  undefined *puVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  ulong uVar9;
  undefined8 *puVar10;
  ulong uVar11;
  uint uVar12;
  uint uVar13;
  undefined8 *puVar14;
  int iVar15;
  int iVar16;
  float fVar17;
  float fVar18;
  undefined8 local_b8;
  ulong local_b0;
  undefined *local_a8;
  uint local_a0;
  uint local_9c;
  undefined4 local_94;
  undefined8 local_90;
  float local_88;
  int iStack_84;
  
  puVar4 = PTR_DAT_04bb27c8;
  uVar3 = *(uint *)(param_2 + 0x10);
  local_9c = *(uint *)(param_2 + 0x14);
  uVar11 = param_2 + 8;
  uVar1 = param_2 + 0x18;
  local_a8 = PTR_DAT_04bb2010 + 0x10;
  uVar12 = *(int *)(param_2 + 0x24) + 1;
  local_b8 = uVar11;
  local_b0 = uVar1;
  local_a0 = uVar3;
  if (uVar12 != local_9c) {
    puVar2 = PTR_DAT_04bb2018 + 0x10;
    do {
      local_88 = 0.0;
      local_90 = (undefined *)0x0;
      local_94 = 1;
      local_90 = (undefined *)0x2;
      local_88 = 0.0;
      lVar8 = *(long *)puVar4;
      if (((lVar8 != 0) && (*(long *)(lVar8 + 0xa8) != 0)) &&
         (uVar9 = FUN_00949898(lVar8 + 0x28,&local_a8,&local_90), (uVar9 & 1) != 0)) {
        return false;
      }
      local_88 = 0.0;
      local_90 = (undefined *)0x0;
      local_94 = 0xc;
      local_90 = (undefined *)0x1000;
      local_88 = 0.0;
      lVar8 = *(long *)puVar4;
      if (((lVar8 != 0) && (*(long *)(lVar8 + 0xa8) != 0)) &&
         (uVar9 = FUN_00949898(lVar8 + 0x28,&local_a8,&local_90), (uVar9 & 1) != 0)) {
        return false;
      }
      fVar18 = (float)(int)local_a0 * 0.5;
      uVar13 = 0;
      if (fVar18 != (float)(int)fVar18) {
        uVar13 = (uint)(fVar18 < 0.0);
      }
      local_88 = (float)((int)fVar18 - uVar13);
      fVar18 = (float)(int)local_9c * 0.5;
      uVar13 = 0;
      if (fVar18 != (float)(int)fVar18) {
        uVar13 = (uint)(fVar18 < 0.0);
      }
      iStack_84 = (int)fVar18 - uVar13;
      local_90 = puVar2;
      uVar9 = FUN_01318220(&local_90);
      if ((uVar9 & 1) != 0) {
        return false;
      }
      if (((*(long *)puVar4 != 0) && (lVar8 = *(long *)(*(long *)puVar4 + 0xa8), lVar8 != 0)) &&
         ((-1 < (int)local_a0 &&
          (((-1 < (int)local_9c && (local_a0 < *(uint *)(lVar8 + 0x38))) &&
           (local_9c < *(uint *)(lVar8 + 0x3c))))))) {
        uVar13 = local_a0 + *(uint *)(lVar8 + 0x38) * local_9c;
        if (((uVar13 < *(uint *)(lVar8 + 0x68)) && (*(long *)(lVar8 + 0x70) != 0)) &&
           ((*(uint *)(*(long *)(lVar8 + 0x70) + (long)(int)uVar13 * 4) >> 3 & 1) != 0)) {
          return false;
        }
        if (((uVar13 < *(uint *)(lVar8 + 0x68)) && (*(long *)(lVar8 + 0x70) != 0)) &&
           ((*(uint *)(*(long *)(lVar8 + 0x70) + (long)(int)uVar13 * 4) >> 5 & 1) != 0)) {
          return false;
        }
      }
      local_88 = (float)(int)local_9c * 5.0 + 2.5;
      local_90 = (undefined *)(ulong)(uint)((float)(int)local_a0 * 5.0 + 2.5);
      uVar9 = FUN_02b60610(&local_90);
      if ((uVar9 & 1) != 0) {
        return false;
      }
      if ((int)local_a0 < *(int *)(local_b0 + 8)) {
        local_a0 = local_a0 + 1;
      }
      else {
        local_9c = local_9c + 1;
        local_a0 = *(uint *)(local_b8 + 8);
      }
    } while ((uVar3 != local_a0) || (uVar12 != local_9c));
  }
  if (*(long *)puVar4 != 0) {
    lVar8 = *(long *)(*(long *)puVar4 + 0xa8);
    if (lVar8 == 0) {
      return false;
    }
    uVar9 = FUN_00971f80(lVar8,param_2,0);
    if ((uVar9 & 1) == 0) {
      return false;
    }
    if (((*(long *)puVar4 != 0) && (lVar8 = *(long *)(*(long *)puVar4 + 0xa8), lVar8 != 0)) &&
       (uVar9 = FUN_009721a0(lVar8,param_2,0), (uVar9 & 1) != 0)) {
      return false;
    }
    iVar7 = *(int *)(param_2 + 0x24) + 1;
    iVar16 = *(int *)(param_2 + 0x10);
    iVar6 = *(int *)(param_2 + 0x14);
    iVar5 = iVar16;
    if (iVar7 != iVar6) {
      iVar15 = iVar16;
      do {
        local_b8 = (ulong)(uint)((float)iVar15 * 5.0 + 2.5);
        local_b0 = CONCAT44(local_b0._4_4_,(float)iVar6 * 5.0 + 2.5);
        iVar5 = FUN_01317b90(&local_b8,1);
        if (iVar5 - 3U < 2) {
          return false;
        }
        iVar5 = *(int *)(param_2 + 0x10);
        if (iVar15 < *(int *)(param_2 + 0x20)) {
          iVar15 = iVar15 + 1;
        }
        else {
          iVar6 = iVar6 + 1;
          iVar15 = iVar5;
        }
      } while ((iVar16 != iVar15) || (iVar7 != iVar6));
      iVar7 = *(int *)(param_2 + 0x24) + 1;
      iVar6 = *(int *)(param_2 + 0x14);
    }
    puVar2 = PTR_DAT_04bc3a80;
    puVar4 = PTR_DAT_04bb2720;
    local_a8 = PTR_DAT_04bb2010 + 0x10;
    local_b8 = uVar11;
    local_b0 = uVar1;
    local_a0 = iVar5;
    local_9c = iVar6;
    if (iVar7 != iVar6) {
      do {
        lVar8 = *(long *)puVar4;
        if ((lVar8 == 0) || (*(long *)(lVar8 + 0x330) == 0)) {
          puVar10 = &DAT_055c04a0;
        }
        else {
          puVar10 = (undefined8 *)
                    (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                              (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar8 + 0x338));
          iVar6 = FUN_006bd550(*puVar10,0);
          puVar10 = (undefined8 *)puVar2;
          if (iVar6 != 0x758f7eaf) {
            puVar10 = &DAT_055c04a0;
          }
        }
        if (DAT_055c1b60 != &DAT_055c1b58) {
          uVar12 = 0;
          puVar14 = DAT_055c1b60;
          do {
            if (*(int *)(puVar14 + -1) == *(int *)(puVar10 + 7)) {
              if (((uVar12 ^ 0xffffffff) & 0xffff) != 0) goto LAB_023d61c4;
              break;
            }
            puVar14 = (undefined8 *)puVar14[1];
            uVar12 = uVar12 + 1;
          } while (puVar14 != &DAT_055c1b58);
        }
        uVar12 = 0;
LAB_023d61c4:
        local_90 = (undefined *)(CONCAT44(local_90._4_4_,uVar12) & 0xffffffff0000ffff);
        local_90._0_5_ = CONCAT14(1,(undefined4)local_90);
        uVar11 = FUN_016e8b30(&local_a8,&local_90);
        if ((uVar11 & 1) != 0) {
          return false;
        }
        if ((int)local_a0 < *(int *)(local_b0 + 8)) {
          local_a0 = local_a0 + 1;
        }
        else {
          local_9c = local_9c + 1;
          local_a0 = *(int *)(local_b8 + 8);
        }
      } while ((iVar5 != local_a0) || (iVar7 != local_9c));
      iVar7 = *(int *)(param_2 + 0x24) + 1;
      iVar5 = *(int *)(param_2 + 0x10);
      iVar6 = *(int *)(param_2 + 0x14);
    }
    fVar18 = -500.0;
    if (iVar7 != iVar6) {
      iVar16 = iVar5;
      do {
        local_b8 = (ulong)(uint)((float)iVar16 * 5.0 + 2.5);
        local_b0 = CONCAT44(local_b0._4_4_,(float)iVar6 * 5.0 + 2.5);
        fVar17 = (float)FUN_016e026c(0,&local_b8,0,0);
        if (fVar17 <= fVar18) {
          fVar17 = fVar18;
        }
        fVar18 = fVar17;
        if (iVar16 < *(int *)(param_2 + 0x20)) {
          iVar16 = iVar16 + 1;
        }
        else {
          iVar6 = iVar6 + 1;
          iVar16 = *(int *)(param_2 + 0x10);
        }
      } while ((iVar5 != iVar16) || (iVar7 != iVar6));
    }
    fVar18 = fVar18 - param_1;
    fVar17 = -fVar18;
    if (0.0 <= fVar18) {
      fVar17 = fVar18;
    }
    if (((fVar17 < 0.1) && (uVar11 = FUN_023d5b10(param_2), (uVar11 & 1) == 0)) &&
       (uVar11 = FUN_023d5ec0(param_2,param_3,param_4), (uVar11 & 1) == 0)) {
      local_b0 = local_b0 & 0xffffffff00000000;
      local_b8 = 0;
      FUN_012e20a8(param_2,&local_b8);
      local_b8 = CONCAT44(param_1,(undefined4)local_b8);
      iVar7 = FUN_02917c70(&local_b8,0);
      return iVar7 == -1;
    }
  }
  return false;
}


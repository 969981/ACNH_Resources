
/* WARNING: Removing unreachable block (ram,0x023f94b0) */
/* WARNING: Removing unreachable block (ram,0x023f95a4) */
/* WARNING: Removing unreachable block (ram,0x023f9620) */
/* WARNING: Removing unreachable block (ram,0x023f9530) */

void FUN_023f91dc(long param_1)

{
  int iVar1;
  byte bVar2;
  ushort uVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  float *pfVar7;
  undefined4 *puVar8;
  ulong uVar9;
  int iVar10;
  long *plVar11;
  undefined8 *puVar12;
  float fVar13;
  uint uVar14;
  undefined4 uVar15;
  uint local_6c [3];
  undefined8 local_60;
  undefined4 local_58;
  
  uVar3 = *(ushort *)(param_1 + 0x190b);
  lVar6 = FUN_0251e98c(1);
  pfVar7 = (float *)(**(code **)(*(long *)(lVar6 + 0x13b0) + 0xf0))(lVar6 + 0x13b0);
  fVar13 = *pfVar7;
  if (*(int *)(param_1 + 0x178) == 0) {
    local_6c[0] = 10;
    local_60 = CONCAT44(local_60._4_4_,10);
    if ((*(byte *)(param_1 + 0x18f5) >> 2 & 1) == 0) goto LAB_023f9290;
  }
  else {
LAB_023f9290:
    iVar5 = (uint)uVar3 * 0x10000;
    plVar11 = &DAT_054e9a58;
    if (*(long **)(param_1 + 0x4c8) != (long *)0x0) {
      plVar11 = *(long **)(param_1 + 0x4c8);
    }
    lVar6 = (**(code **)(*plVar11 + 0x148))();
    iVar10 = iVar5 - *(int *)(lVar6 + 4);
    if (0xb60b5e < iVar10 + 0x5b05afU) {
      iVar4 = 0x15555560;
      iVar5 = -0x15555560;
      iVar10 = (int)(fVar13 * (float)iVar10);
      if (iVar10 < 1) {
        iVar4 = -0x5b05b0;
      }
      else {
        iVar5 = 0x5b05b0;
      }
      iVar1 = iVar10;
      if (iVar4 <= iVar10) {
        iVar1 = iVar4;
      }
      if (iVar5 <= iVar10) {
        iVar5 = iVar1;
      }
      iVar5 = iVar5 + *(int *)(lVar6 + 4);
    }
    *(int *)(lVar6 + 4) = iVar5;
  }
  uVar14 = *(uint *)(param_1 + 0x1901);
  uVar15 = *(undefined4 *)(param_1 + 0x1907);
  lVar6 = FUN_0251e98c(1);
  puVar8 = (undefined4 *)(**(code **)(*(long *)(lVar6 + 0x1440) + 0xf0))(lVar6 + 0x1440);
  local_6c[1] = 0;
  puVar12 = &DAT_054e9a58;
  if (*(undefined8 **)(param_1 + 0x4c8) != (undefined8 *)0x0) {
    puVar12 = *(undefined8 **)(param_1 + 0x4c8);
  }
  local_58 = *(undefined4 *)(puVar12 + 0x50);
  local_60 = puVar12[0x4f] & 0xffffffff;
  local_6c[0] = uVar14;
  local_6c[2] = uVar15;
  FUN_03eb4b60(*puVar8,0x41200000,0x3e4ccccc,&local_60,local_6c);
  *(undefined4 *)(puVar12 + 0x4f) = (undefined4)local_60;
  *(undefined4 *)(puVar12 + 0x50) = local_58;
  plVar11 = *(long **)(param_1 + 0x68);
  FUN_016e026c(0,plVar11 + 0x4f,0,0);
  (**(code **)(*plVar11 + 0x110))(plVar11);
  bVar2 = *(byte *)(param_1 + 0x1900);
  if (3 < bVar2) {
    bVar2 = 0;
  }
  if (*(char *)(param_1 + 0x190d) == '\0') {
    if (bVar2 == 3) {
      if (*(uint *)(param_1 + 0x1c04) < 6) {
        return;
      }
    }
    else {
      puVar12 = *(undefined8 **)(param_1 + 0x60);
      if (puVar12 == (undefined8 *)0x0) {
        if ((DAT_052461c0 & 1) == 0) {
          iVar5 = __cxa_guard_acquire(&DAT_052461c0);
          puVar12 = &DAT_05240280;
          if (iVar5 != 0) {
            FUN_016fcf10(&DAT_05240280);
            FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
            __cxa_guard_release(&DAT_052461c0);
          }
        }
        else {
          puVar12 = &DAT_05240280;
        }
      }
      if (puVar12[0x227] == 0) {
        local_60 = (ulong)local_60._4_4_ << 0x20;
      }
      else {
        local_60 = CONCAT44(local_60._4_4_,*(uint *)(puVar12 + 0x2d3) >> 1) & 0xffffffff00000001;
        uVar9 = FUN_03850368(puVar12[0x227],*(uint *)(puVar12 + 0x2d3) >> 1 & 1);
        if ((uVar9 & 1) != 0) {
          return;
        }
      }
      puVar12 = *(undefined8 **)(param_1 + 0x60);
      if (puVar12 == (undefined8 *)0x0) {
        if ((DAT_052461c0 & 1) == 0) {
          iVar5 = __cxa_guard_acquire(&DAT_052461c0);
          puVar12 = &DAT_05240280;
          if (iVar5 != 0) {
            FUN_016fcf10(&DAT_05240280);
            FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
            __cxa_guard_release(&DAT_052461c0);
          }
        }
        else {
          puVar12 = &DAT_05240280;
        }
      }
      if (puVar12[0x227] == 0) {
        local_6c[0] = 0;
        local_60 = (ulong)local_60._4_4_ << 0x20;
      }
      else {
        local_6c[0] = *(uint *)(puVar12 + 0x2d3) >> 1 & 1;
        local_60 = CONCAT44(local_60._4_4_,*(uint *)(puVar12 + 0x2d3) >> 1) & 0xffffffff00000001;
        uVar9 = FUN_03850368(puVar12[0x227],local_6c[0]);
        uVar14 = local_6c[0];
        if (((((uVar9 & 1) == 0) && (puVar12[0x227] != 0)) &&
            (uVar9 = FUN_03850368(puVar12[0x227],local_6c[0]), (uVar9 & 1) == 0)) &&
           (uVar9 = FUN_0384fca4(puVar12[0x227],uVar14), (uVar9 & 1) == 0)) {
          return;
        }
      }
    }
    if (*(int *)(param_1 + 0x178) == 0) {
      FUN_0237432c(param_1,0xc);
      return;
    }
    *(uint *)(param_1 + 0x17cc) = *(uint *)(param_1 + 0x17cc) | 8;
    FUN_023164ec(param_1,0xc);
    return;
  }
  if (*(int *)(param_1 + 0x178) != 0) {
    return;
  }
  if (bVar2 == 3) {
    if (*(uint *)(param_1 + 0x1c04) < 6) {
      return;
    }
  }
  else {
    puVar12 = *(undefined8 **)(param_1 + 0x60);
    if (puVar12 == (undefined8 *)0x0) {
      if ((DAT_052461c0 & 1) == 0) {
        iVar5 = __cxa_guard_acquire(&DAT_052461c0);
        puVar12 = &DAT_05240280;
        if (iVar5 != 0) {
          FUN_016fcf10(&DAT_05240280);
          FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
          __cxa_guard_release(&DAT_052461c0);
        }
      }
      else {
        puVar12 = &DAT_05240280;
      }
    }
    if (puVar12[0x227] == 0) {
      local_6c[0] = 0;
    }
    else {
      local_6c[0] = *(uint *)(puVar12 + 0x2d3) >> 1 & 1;
      local_60 = CONCAT44(local_60._4_4_,0xe);
      uVar9 = FUN_03850a90(puVar12[0x227],0xe,0,local_6c[0]);
      if ((uVar9 & 1) != 0) goto LAB_023f9640;
    }
    puVar12 = *(undefined8 **)(param_1 + 0x60);
    if (puVar12 == (undefined8 *)0x0) {
      if ((DAT_052461c0 & 1) == 0) {
        iVar5 = __cxa_guard_acquire(&DAT_052461c0);
        puVar12 = &DAT_05240280;
        if (iVar5 != 0) {
          FUN_016fcf10(&DAT_05240280);
          FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
          __cxa_guard_release(&DAT_052461c0);
        }
      }
      else {
        puVar12 = &DAT_05240280;
      }
    }
    if (puVar12[0x227] == 0) {
      return;
    }
    local_6c[0] = *(uint *)(puVar12 + 0x2d3) >> 1 & 1;
    local_60 = local_60 & 0xffffffff00000000;
    uVar9 = FUN_03850a90(puVar12[0x227],0,0,local_6c[0]);
    if ((uVar9 & 1) == 0) {
      return;
    }
  }
LAB_023f9640:
  FUN_023203ac(param_1,0,0);
  *(undefined1 *)(param_1 + 0x190e) = 1;
  return;
}


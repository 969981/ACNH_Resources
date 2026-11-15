
/* WARNING: Removing unreachable block (ram,0x023f1224) */

void FUN_023f0ba0(long param_1)

{
  bool bVar1;
  ushort *puVar2;
  uint uVar3;
  ushort uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  uint uVar8;
  undefined8 *puVar9;
  ulong uVar10;
  long *plVar11;
  long lVar12;
  uint *puVar13;
  int iVar14;
  int *piVar15;
  long *plVar16;
  uint *puVar17;
  char cVar18;
  long lVar19;
  float fVar20;
  float fVar21;
  undefined *local_b8;
  undefined8 *puStack_b0;
  undefined8 local_a8;
  char *local_a0;
  float local_94;
  float fStack_90;
  float local_8c;
  long *local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined4 local_68;
  int local_64;
  
  iVar14 = *(int *)(param_1 + 0x178);
  if (iVar14 == 0) {
    if (((float)*(int *)(param_1 + 0x1902) * 0.001 == 0.0) &&
       ((float)*(int *)(param_1 + 0x1908) * 0.001 == 0.0)) {
      lVar12 = *(long *)(param_1 + 0x68);
      *(undefined2 *)(param_1 + 0x1900) = *(undefined2 *)(lVar12 + 0x2b6);
      *(int *)(param_1 + 0x1902) = (int)(*(float *)(lVar12 + 0x278) * 999.99994);
      iVar14 = (int)(*(float *)(lVar12 + 0x27c) * 4.0);
      if (0x7ffe < iVar14) {
        iVar14 = 0x7fff;
      }
      if (iVar14 < -0x7fff) {
        iVar14 = -0x8000;
      }
      *(short *)(param_1 + 0x1906) = (short)iVar14;
      *(int *)(param_1 + 0x1908) = (int)(*(float *)(lVar12 + 0x280) * 999.99994);
    }
    else {
      lVar12 = *(long *)(param_1 + 0x68);
    }
    *(undefined4 *)(param_1 + 0xb3c) = *(undefined4 *)(lVar12 + 0x278);
    *(undefined4 *)(param_1 + 0xb40) = *(undefined4 *)(lVar12 + 0x27c);
    *(undefined4 *)(param_1 + 0xb44) = *(undefined4 *)(lVar12 + 0x280);
    local_a8 = *(undefined **)(lVar12 + 0x278);
    local_a0 = (char *)CONCAT44(local_a0._4_4_,*(undefined4 *)(lVar12 + 0x280));
    puVar9 = (undefined8 *)FUN_016e1014(&local_a8,0,0);
    puVar7 = PTR_DAT_04bb43c0;
    uVar5 = *puVar9;
    local_b8 = (undefined *)*puVar9;
    lVar19 = *(long *)PTR_DAT_04bb43c0;
    uVar8 = FUN_0277d6c4(&local_b8);
    lVar12 = *(long *)puVar7;
    if (lVar12 != 0) {
      lVar19 = *(long *)(lVar19 + 0x57e58);
      uVar8 = (uVar8 & 0xffff) - (uint)*(ushort *)(lVar19 + 0x1f8);
      if ((uVar8 < *(uint *)(lVar19 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar19 + 0x1e0) + (long)(int)uVar8 * 8) != 0)) {
        local_88 = (long *)(PTR_DAT_04bc0510 + 0x10);
        local_78 = 0;
        local_80 = (char *)uVar5;
        uVar8 = FUN_0277d6c4(&local_80);
        fVar21 = 0.0;
        if (*(long *)puVar7 != 0) {
          lVar12 = *(long *)(lVar12 + 0x57e58);
          uVar8 = (uVar8 & 0xffff) - (uint)*(ushort *)(lVar12 + 0x1f8);
          if ((uVar8 < *(uint *)(lVar12 + 0x1d8)) &&
             (*(long *)(*(long *)(lVar12 + 0x1e0) + (long)(int)uVar8 * 8) != 0)) {
            lVar12 = *(long *)PTR_DAT_04bc0428;
            uVar8 = FUN_0277d6c4(&local_b8);
            puVar6 = PTR_DAT_04bbfe90;
            puVar7 = PTR_DAT_04bbfe88;
            uVar8 = (uVar8 & 0xffff) - (uint)*(ushort *)(lVar12 + 0x1f8);
            if ((uVar8 < *(uint *)(lVar12 + 0x1d8)) &&
               ((puVar17 = *(uint **)(*(long *)(lVar12 + 0x1e0) + (long)(int)uVar8 * 8),
                puVar17 != (uint *)0x0 && (uVar8 = *puVar17, uVar8 != 0)))) {
              cVar18 = *PTR_DAT_04bbfe88;
              do {
                if (cVar18 == '\0') {
                  cVar18 = '\x01';
                  *puVar7 = 1;
                  memset(puVar6,0xff,0x1ac);
                  uVar8 = *puVar17;
                }
                else {
                  uVar3 = *(uint *)(puVar6 + 0xf0);
                  if (-1 < (int)uVar3) {
                    if ((float *)((ulong)uVar3 + (long)puVar17) != (float *)0x0) {
                      fVar21 = *(float *)((ulong)uVar3 + (long)puVar17);
                    }
                    break;
                  }
                  if (uVar3 != 0xffffffff) break;
                }
                puVar13 = (uint *)(ulong)uVar8;
                if ((puVar13 == (uint *)0x0) || (puVar17 == puVar13)) break;
                lVar12 = 0xc;
                if (*(char *)((long)puVar17 + (10 - (long)puVar13)) != '\0') {
                  lVar12 = 0x1c;
                }
                lVar12 = (long)puVar17 + (lVar12 - (long)puVar13);
                if (lVar12 == 0) break;
                uVar10 = (ulong)*(ushort *)((long)puVar17 + (8 - (long)puVar13));
                *(undefined4 *)(puVar6 + 0xf0) = 0xfffffffe;
                if (uVar10 == 0) break;
                piVar15 = (int *)(lVar12 + 4);
                while (piVar15[-1] != -0x499d99d4) {
                  piVar15 = piVar15 + 2;
                  uVar10 = uVar10 - 1;
                  if (uVar10 == 0) goto LAB_023f0e98;
                }
                iVar14 = 0;
                if (*piVar15 != -1) {
                  iVar14 = *piVar15;
                }
                *(int *)(puVar6 + 0xf0) = iVar14;
                uVar8 = *puVar17;
                if (uVar8 == 0) break;
              } while( true );
            }
          }
        }
LAB_023f0e98:
        fVar20 = (float)FUN_016e026c(0,&local_a8,0,0);
        fVar21 = fVar21 + fVar20;
        local_a8 = (undefined *)CONCAT44(fVar21,(float)local_a8);
        iVar14 = (int)(fVar21 * 4.0);
        *(float *)(param_1 + 0xb40) = fVar21;
        if (0x7ffe < iVar14) {
          iVar14 = 0x7fff;
        }
        if (iVar14 < -0x7fff) {
          iVar14 = -0x8000;
        }
        *(short *)(param_1 + 0x1906) = (short)iVar14;
        *(int *)(param_1 + 0x1902) = (int)((float)local_a8 * 999.99994);
        *(int *)(param_1 + 0x1908) = (int)(local_a0._0_4_ * 999.99994);
      }
    }
    iVar14 = *(int *)(param_1 + 0x178);
  }
  piVar15 = (int *)(param_1 + 0x1902);
  if (iVar14 != 0) {
    piVar15 = (int *)(param_1 + 0x18e5);
  }
  fStack_90 = (float)(int)(short)piVar15[1] * 0.25;
  local_94 = (float)*piVar15 * 0.001;
  puVar2 = (ushort *)(param_1 + 0x1900);
  if (iVar14 != 0) {
    puVar2 = (ushort *)(param_1 + 0x18ef);
  }
  local_8c = (float)*(int *)((long)piVar15 + 6) * 0.001;
  uVar4 = *puVar2;
  *(undefined4 *)(param_1 + 0x21b0) = 4;
  local_88 = (long *)CONCAT44(local_88._4_4_,4);
  local_64 = (uint)uVar4 << 0x10;
  *(undefined1 *)(param_1 + 0x18f7) = 4;
  FUN_016da530(param_1,&local_94,&local_64);
  FUN_0231b5b4(param_1,6);
  uVar10 = FUN_023ebc20(*(long *)(param_1 + 0x68) + 0x278);
  puVar7 = PTR_DAT_04bb4718;
  if (*(long *)PTR_DAT_04bb4718 == 0) {
    if ((DAT_054f08c8 & 1) == 0) {
      iVar14 = __cxa_guard_acquire(&DAT_054f08c8);
      puVar17 = &DAT_054f08c0;
      if (iVar14 != 0) {
        DAT_054f08c0 = 0;
        __cxa_guard_release(&DAT_054f08c8);
      }
    }
    else {
      puVar17 = &DAT_054f08c0;
    }
  }
  else {
    puVar17 = (uint *)(*(long *)PTR_DAT_04bb4718 + 0x1fc);
  }
  if ((uVar10 & 1) == 0) {
    uVar8 = *puVar17 & 0xffffbfff;
  }
  else {
    uVar8 = *puVar17 | 0x4000;
  }
  *puVar17 = uVar8;
  local_88 = (long *)CONCAT44(local_88._4_4_,0xe);
  uVar10 = FUN_023ebe70(*(long *)(param_1 + 0x68) + 0x278);
  lVar12 = *(long *)puVar7;
  if (lVar12 == 0) {
    if ((DAT_054f08c8 & 1) == 0) {
      iVar14 = __cxa_guard_acquire(&DAT_054f08c8);
      puVar17 = &DAT_054f08c0;
      if (iVar14 != 0) {
        DAT_054f08c0 = 0;
        __cxa_guard_release(&DAT_054f08c8);
      }
    }
    else {
      puVar17 = &DAT_054f08c0;
    }
  }
  else {
    puVar17 = (uint *)(lVar12 + 0x1fc);
  }
  puVar6 = PTR_DAT_04bb2020;
  bVar1 = (uVar10 & 1) == 0;
  if (bVar1) {
    *puVar17 = *puVar17 & 0xffffdfff;
  }
  else {
    *puVar17 = *puVar17 | 0x2000;
  }
  local_88 = (long *)(puVar6 + 0x10);
  local_80 = "IsBedWaitRightSideCloudIsland";
  FUN_0274bfe8(param_1 + 0x1ee8,&local_88,!bVar1);
  local_a8 = (undefined *)CONCAT44(local_a8._4_4_,*(undefined4 *)(param_1 + 0x230));
  FUN_0071c8d0(&local_88,PTR_DAT_04bb32f8,&local_a8,0);
  plVar16 = local_88;
  if (local_88 != (long *)0x0) {
    if (((*PTR_DAT_04bb3280 & 1) == 0) &&
       (iVar14 = __cxa_guard_acquire(PTR_DAT_04bb3280), iVar14 != 0)) {
      *(undefined **)PTR_DAT_04bb3278 = PTR_DAT_04bb2e50 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb3280);
    }
    uVar10 = (**(code **)(*plVar16 + 0x20))(plVar16,PTR_DAT_04bb3278);
    if ((uVar10 & 1) == 0) {
      local_80._0_2_ = (ushort)(byte)local_80;
    }
  }
  if (local_88 == (long *)0x0) {
    return;
  }
  if ((byte)local_80 == '\0') {
    return;
  }
  if (local_80._1_1_ == '\0') {
    return;
  }
  lVar12 = *(long *)puVar7;
  if (lVar12 == 0) {
    if ((DAT_054f08c8 & 1) == 0) {
      iVar14 = __cxa_guard_acquire(&DAT_054f08c8);
      puVar17 = &DAT_054f08c0;
      if (iVar14 != 0) {
        DAT_054f08c0 = 0;
        __cxa_guard_release(&DAT_054f08c8);
      }
    }
    else {
      puVar17 = &DAT_054f08c0;
    }
  }
  else {
    puVar17 = (uint *)(lVar12 + 0x1fc);
  }
  if ((*puVar17 >> 0xe & 1) != 0) {
    local_b8 = puVar6 + 0x10;
    local_a0 = "ToDreamZoomOutLow";
    puStack_b0 = &DAT_0407ebb1;
    local_68 = *(undefined4 *)(param_1 + 0x230);
    local_a8 = local_b8;
    FUN_008f993c(local_88,&local_a8,&local_b8,&local_68,0,0,0);
    return;
  }
  local_b8 = puVar6 + 0x10;
  local_a0 = "ToDreamZoomOut";
  puStack_b0 = &DAT_0407ebb1;
  local_68 = *(undefined4 *)(param_1 + 0x230);
  local_a8 = local_b8;
  FUN_008f993c(local_88,&local_a8,&local_b8,&local_68,0,0,0);
  puVar7 = PTR_DAT_04bb27c0;
  lVar12 = *(long *)PTR_DAT_04bb27c0;
  if (lVar12 == 0) {
    return;
  }
  uVar8 = *(uint *)(*(long *)PTR_DAT_04bb4c80 + 0x10);
  if ((((uVar8 == 0) ||
       (plVar16 = *(long **)(*(long *)(*(long *)(lVar12 + 0x1c0) + 8) +
                            ((ulong)(uVar8 >> 0x11) & 0x7ff8)), plVar16 == (long *)0x0)) ||
      ((*(uint *)(plVar16 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar16 + 0x46) != uVar8)) {
    plVar16 = (long *)0x0;
  }
  if ((*(int *)(lVar12 + 0x288) == 1) || (*(int *)(lVar12 + 0x288) == -1)) {
    plVar11 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar12 = *(long *)puVar7;
    iVar14 = (**(code **)(*plVar11 + 0x60))();
    if (iVar14 < 0x11) {
      uVar8 = 1;
      goto joined_r0x023f132c;
    }
    if (*(uint *)(lVar12 + 0x5e8) < 5) {
      uVar8 = 0x1aU >> (ulong)(*(uint *)(lVar12 + 0x5e8) & 0x1f) & 1;
      goto joined_r0x023f132c;
    }
  }
  uVar8 = 0;
joined_r0x023f132c:
  if (plVar16 != (long *)0x0) {
    lVar12 = plVar16[0x2a];
    if (((*PTR_DAT_04bb7d58 & 1) == 0) &&
       (iVar14 = __cxa_guard_acquire(PTR_DAT_04bb7d58), iVar14 != 0)) {
      *(undefined **)PTR_DAT_04bb7d50 = PTR_DAT_04bb2e50 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb7d58);
    }
    uVar10 = (**(code **)(*plVar16 + 0x20))(plVar16,PTR_DAT_04bb7d50);
    uVar3 = 0;
    if ((int)lVar12 == 1) {
      uVar3 = uVar8;
    }
    if (((uVar10 & 1) != 0) && (uVar3 != 0)) {
      FUN_014937a0(plVar16,1);
    }
  }
  return;
}


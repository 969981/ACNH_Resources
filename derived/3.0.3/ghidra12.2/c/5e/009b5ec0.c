
/* WARNING: Removing unreachable block (ram,0x009b5f58) */
/* WARNING: Removing unreachable block (ram,0x009b60f8) */

undefined4 FUN_009b5ec0(long param_1,int param_2)

{
  ushort *puVar1;
  int *piVar2;
  uint uVar3;
  int *piVar4;
  uint uVar5;
  ushort uVar6;
  undefined *puVar7;
  undefined4 uVar8;
  int iVar9;
  ulong uVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  long *plVar14;
  undefined8 *puVar15;
  uint uVar16;
  ulong uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  ulong uVar21;
  undefined *puVar22;
  int *piVar23;
  undefined8 local_a0;
  long local_90 [5];
  uint local_68;
  uint local_64;
  
  puVar7 = PTR_DAT_04bb2648;
  puVar1 = (ushort *)(param_1 + 0xf5b62);
  local_a0 = 0x500000000;
  puVar22 = &DAT_04917a08;
  uVar18 = 0;
  do {
    lVar12 = *(long *)puVar7;
    local_64 = 0;
    uVar3 = uVar18;
    if (*(uint *)(lVar12 + 0x330) <= uVar18) {
      uVar3 = 0;
    }
    lVar12 = *(long *)(*(long *)(lVar12 + 0x338) + (ulong)uVar3 * 8);
    if (lVar12 == 0) {
LAB_009b5fb0:
      lVar13 = 0;
    }
    else {
      puVar15 = *(undefined8 **)(lVar12 + 0xc20);
      if (((DAT_04ccf5f8 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_04ccf5f8), iVar9 != 0)) {
        DAT_04ccf5f0 = &PTR_LAB_04917a18;
        __cxa_guard_release(&DAT_04ccf5f8);
      }
      if ((puVar15 == (undefined8 *)0x0) ||
         (uVar10 = (**(code **)*puVar15)(puVar15,&DAT_04ccf5f0), (uVar10 & 1) == 0))
      goto LAB_009b5fb0;
      lVar13 = 0;
      if ((*(byte *)((long)puVar15 + 0x17c) & 6) != 0) {
        lVar13 = lVar12;
      }
    }
    iVar9 = local_a0._4_4_;
    uVar3 = (uint)local_a0;
    if ((int)(uint)local_a0 < local_a0._4_4_) {
      local_90[(int)(uint)local_a0] = lVar13;
      uVar3 = (uint)local_a0 + 1;
      local_a0 = CONCAT44(local_a0._4_4_,uVar3);
    }
    uVar10 = (ulong)uVar3;
    uVar18 = uVar18 + 1;
  } while ((int)uVar18 < iVar9 + -1);
  if ((0 < param_2) && (0 < (int)uVar3)) {
    plVar14 = local_90;
    uVar21 = uVar10;
    do {
      if ((*plVar14 != 0) && ((*(byte *)(*plVar14 + 0x8d) & 6) != 0)) goto LAB_009b6034;
      uVar21 = uVar21 - 1;
      plVar14 = plVar14 + 1;
    } while (uVar21 != 0);
  }
  if (*(long *)(DAT_05ae7798 + 0x178) != DAT_05ae7798 + 0x170) {
    lVar13 = (long)*(int *)(DAT_05ae7798 + 0x184);
    lVar12 = *(long *)(DAT_05ae7798 + 0x178) - lVar13;
    do {
      if (*(int *)(lVar12 + 0x18) == 0xd) goto LAB_009b6094;
      lVar12 = *(long *)(lVar12 + lVar13 + 8) - lVar13;
    } while (lVar12 != (DAT_05ae7798 + 0x170) - lVar13);
  }
  lVar12 = 0;
LAB_009b6094:
  uVar18 = (*puVar1 & 0x1f) - (*puVar1 >> 1 & 5);
  uVar18 = (uVar18 >> 2 & 0x33333333) + (uVar18 & 0x33333333);
  uVar18 = uVar18 + (uVar18 >> 4) & 0xf0f0f0f;
  uVar18 = uVar18 + (uVar18 >> 8);
  uVar18 = uVar18 + (uVar18 >> 0x10);
  uVar3 = uVar18 & 0x3f;
  if (uVar3 != 0) {
    uVar19 = 0;
    do {
      lVar13 = *(long *)puVar7;
      local_64 = 0;
      uVar20 = uVar19;
      if (*(uint *)(lVar13 + 0x330) <= uVar19) {
        uVar20 = 0;
      }
      lVar13 = *(long *)(*(long *)(lVar13 + 0x338) + (ulong)uVar20 * 8);
      if (lVar13 == 0) goto LAB_009b6034;
      plVar14 = *(long **)(lVar13 + 0xc20);
      if (((DAT_04ccf5f8 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_04ccf5f8), iVar9 != 0)) {
        DAT_04ccf5f0 = &PTR_LAB_04917a18;
        __cxa_guard_release(&DAT_04ccf5f8);
      }
      if (((plVar14 == (long *)0x0) ||
          (uVar10 = (**(code **)*plVar14)(plVar14,&DAT_04ccf5f0), (uVar10 & 1) == 0)) ||
         (uVar10 = (**(code **)(*plVar14 + 0x30))(plVar14), (uVar10 & 1) == 0)) goto LAB_009b6034;
      uVar19 = uVar19 + 1;
    } while (uVar3 != uVar19);
    uVar10 = local_a0 & 0xffffffff;
  }
  if (0 < (int)uVar10) {
    uVar21 = 0;
    piVar2 = (int *)(lVar12 + 0x30);
    uVar19 = 0xffffffff;
    do {
      if ((((uVar10 & 0xffffffff) <= uVar21) ||
          (uVar20 = (uint)uVar21, (1 << (ulong)(uVar20 & 0x1f) & (uint)*puVar1) != 0)) ||
         (lVar12 = local_90[uVar21], lVar12 == 0)) goto LAB_009b61b4;
      uVar16 = *(uint *)(lVar12 + 8);
      uVar5 = *(uint *)(lVar12 + 0x8c);
      if (((uVar16 ^ 0xffffffff) & 0x6000) == 0 && (uVar5 & 0x6000) != 0) {
LAB_009b643c:
        if (((int)uVar3 < (int)uVar20) && ((uVar20 | uVar3) < 8)) {
          local_68 = uVar20;
          local_64 = uVar3;
          nn::hid::SwapNpadAssignment(&local_64,&local_68);
        }
        uVar6 = *puVar1;
        uVar8 = 1;
        uVar18 = 1 << (ulong)(uVar18 & 0x1f);
        *(undefined1 *)(param_1 + 0xf5b70) = 1;
        uVar3 = uVar6 | uVar18;
        *puVar1 = (ushort)uVar3;
        uVar18 = ((uint)uVar6 | uVar18 & 0xffff) - (uVar3 >> 1 & 0x5555);
        uVar18 = (uVar18 >> 2 & 0x33333333) + (uVar18 & 0x33333333);
        uVar18 = uVar18 + (uVar18 >> 4) & 0xf0f0f0f;
        uVar18 = uVar18 + (uVar18 >> 8);
        *(uint *)(param_1 + 0xf5b74) = uVar18 + (uVar18 >> 0x10) & 0x3f;
        goto LAB_009b6038;
      }
      local_64 = uVar20;
      if (((uVar16 ^ 0xffffffff) & 0x1800) == 0 && (uVar5 & 0x1800) != 0) {
        if (uVar20 < 8) {
          uVar11 = 0;
LAB_009b6430:
          nn::hid::SetNpadJoyAssignmentModeSingle(&local_64,uVar11);
        }
        goto LAB_009b643c;
      }
      if ((((uVar16 ^ 0xffffffff) & 0x30000000) == 0) && ((uVar5 & 0x30000000) != 0)) {
        if (uVar20 < 8) {
          uVar11 = 1;
          goto LAB_009b6430;
        }
        goto LAB_009b643c;
      }
      uVar17 = uVar21;
      if (8 < uVar21) {
        uVar17 = 0;
      }
      if (((uVar16 >> 0xd & 1) == 0) || (piVar2[uVar17] != 2)) {
        if (((uVar16 >> 6 & 1) != 0) &&
           (iVar9 = nn::hid::GetNpadJoyAssignment(&local_64), iVar9 == 1)) {
          puVar15 = *(undefined8 **)(lVar12 + 0xc20);
          if (((DAT_04ccf5f8 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_04ccf5f8), iVar9 != 0))
          {
            DAT_04ccf5f0 = (undefined **)(puVar22 + 0x10);
            __cxa_guard_release(&DAT_04ccf5f8);
          }
          uVar10 = (**(code **)*puVar15)(puVar15,&DAT_04ccf5f0);
          if ((uVar10 & 1) == 0) {
            puVar15 = (undefined8 *)0x0;
          }
          if ((*(byte *)((long)puVar15 + 0x17c) >> 1 & 1) != 0) {
            uVar10 = local_a0 & 0xffffffff;
            iVar9 = (uint)local_a0;
            goto joined_r0x009b6250;
          }
        }
      }
      else {
        iVar9 = (int)uVar10;
joined_r0x009b6250:
        if (0 < iVar9) {
          uVar17 = 0;
          piVar23 = piVar2;
          do {
            if ((((uVar21 != uVar17) && (uVar17 < (uVar10 & 0xffffffff))) &&
                (uVar16 = (uint)uVar17, (1 << (ulong)(uVar16 & 0x1f) & (uint)*puVar1) == 0)) &&
               (lVar12 = local_90[uVar17], lVar12 != 0)) {
              piVar4 = piVar23;
              if (8 < uVar17) {
                piVar4 = piVar2;
              }
              if ((*piVar4 == 2) && ((*(uint *)(lVar12 + 8) >> 0xe & 1) != 0)) {
LAB_009b6384:
                if (uVar20 < 8) {
                  local_64 = uVar20;
                  nn::hid::SetNpadJoyAssignmentModeSingle(&local_64);
                }
                puVar22 = PTR_DAT_04bb4f40;
                if (uVar16 < 8) {
                  local_64 = uVar16;
                  nn::hid::SetNpadJoyAssignmentModeSingle(&local_64);
                }
                if ((uVar16 | uVar20) < 8) {
                  local_68 = uVar16;
                  local_64 = uVar20;
                  nn::hid::MergeSingleJoyAsDualJoy(&local_64,&local_68);
                  goto LAB_009b643c;
                }
                uVar19 = uVar20;
                goto LAB_009b61b0;
              }
              if ((*(uint *)(lVar12 + 8) >> 6 & 1) != 0) {
                local_64 = uVar16;
                iVar9 = nn::hid::GetNpadJoyAssignment(&local_64);
                if (iVar9 == 1) {
                  puVar15 = *(undefined8 **)(lVar12 + 0xc20);
                  if (((DAT_04ccf5f8 & 1) == 0) &&
                     (iVar9 = __cxa_guard_acquire(&DAT_04ccf5f8), iVar9 != 0)) {
                    DAT_04ccf5f0 = &PTR_LAB_04917a18;
                    __cxa_guard_release(&DAT_04ccf5f8);
                  }
                  uVar10 = (**(code **)*puVar15)(puVar15,&DAT_04ccf5f0);
                  if ((uVar10 & 1) == 0) {
                    puVar15 = (undefined8 *)0x0;
                  }
                  if ((*(byte *)((long)puVar15 + 0x17c) >> 2 & 1) != 0) goto LAB_009b6384;
                }
              }
            }
            uVar10 = (ulong)(int)(uint)local_a0;
            uVar17 = uVar17 + 1;
            piVar23 = piVar23 + 1;
          } while ((long)uVar17 < (long)uVar10);
          puVar22 = &DAT_04917a08;
        }
LAB_009b61b0:
        uVar20 = uVar19;
        if (-1 < (int)uVar19) goto LAB_009b643c;
      }
LAB_009b61b4:
      uVar10 = (ulong)(int)(uint)local_a0;
      uVar21 = uVar21 + 1;
    } while ((long)uVar21 < (long)uVar10);
  }
  return 0;
LAB_009b6034:
  uVar8 = 3;
LAB_009b6038:
  *(undefined4 *)(param_1 + 0xf5b64) = uVar8;
  return uVar8;
}



/* WARNING: Removing unreachable block (ram,0x0369bfd4) */

void FUN_0369bbfc(long param_1,uint *param_2)

{
  uint uVar1;
  short sVar2;
  undefined *puVar3;
  int iVar4;
  uint uVar5;
  long *plVar6;
  ulong uVar7;
  undefined8 *puVar8;
  long lVar9;
  int *piVar10;
  int iVar11;
  bool bVar12;
  long lVar13;
  long lVar14;
  long *plVar15;
  uint uVar16;
  ushort uVar17;
  short sVar18;
  undefined4 uVar19;
  float fVar20;
  float fVar21;
  undefined8 local_98;
  undefined8 *puStack_90;
  float local_88;
  undefined4 local_84;
  float local_80;
  undefined8 local_7c;
  float local_74;
  
  puVar3 = PTR_DAT_04bb27c0;
  lVar9 = *(long *)PTR_DAT_04bb27c0;
  if (lVar9 == 0) {
    return;
  }
  uVar16 = *param_2;
  if ((((uVar16 == 0) ||
       (plVar15 = *(long **)(*(long *)(*(long *)(lVar9 + 0x1c0) + 8) +
                            ((ulong)(uVar16 >> 0x11) & 0x7ff8)), plVar15 == (long *)0x0)) ||
      ((*(uint *)(plVar15 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar15 + 0x46) != uVar16)) {
    plVar15 = (long *)0x0;
  }
  if (*(int *)(lVar9 + 0x288) == 1 || *(int *)(lVar9 + 0x288) == -1) {
    plVar6 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar9 = *(long *)puVar3;
    iVar4 = (**(code **)(*plVar6 + 0x60))();
    if (iVar4 < 0x11) {
      uVar16 = 1;
    }
    else {
      if (4 < *(uint *)(lVar9 + 0x5e8)) goto LAB_0369bcc8;
      uVar16 = 0x1aU >> (ulong)(*(uint *)(lVar9 + 0x5e8) & 0x1f) & 1;
    }
  }
  else {
LAB_0369bcc8:
    uVar16 = 0;
  }
  if (plVar15 == (long *)0x0) {
    return;
  }
  lVar9 = plVar15[0x2a];
  uVar1 = *(uint *)(plVar15 + 0x49);
  if (((*PTR_DAT_04bb37d8 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_04bb37d8), iVar4 != 0))
  {
    *(undefined **)PTR_DAT_04bb37d0 = PTR_DAT_04bb3750 + 0x10;
    __cxa_guard_release(PTR_DAT_04bb37d8);
  }
  uVar5 = (**(code **)(*plVar15 + 0x20))(plVar15,PTR_DAT_04bb37d0);
  if ((int)lVar9 != 1) {
    return;
  }
  if ((uVar5 & uVar16) == 0) {
    return;
  }
  if ((uVar1 >> 4 & 1) == 0) {
    return;
  }
  plVar6 = (long *)plVar15[0x77];
  if (((*PTR_DAT_04bb6710 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_04bb6710), iVar4 != 0))
  {
    *(undefined **)PTR_DAT_04bb6708 = PTR_DAT_04bb6718 + 0x10;
    __cxa_guard_release(PTR_DAT_04bb6710);
  }
  if (plVar6 == (long *)0x0) {
    return;
  }
  uVar7 = (**(code **)*plVar6)(plVar6,PTR_DAT_04bb6708);
  if ((uVar7 & 1) == 0) {
    return;
  }
  uVar7 = FUN_02b81a4c(0x4079999a,**(undefined8 **)(param_1 + 8),plVar15[0xd] + 0x278);
  if ((uVar7 & 1) == 0) {
    return;
  }
  iVar4 = *(int *)((long)plVar6 + 0x77f4);
  uVar17 = *(ushort *)((long)plVar6 + 0xaf64);
  iVar11 = (int)plVar6[0xef6];
  if (iVar4 == 0x10) {
    bVar12 = false;
LAB_0369bdcc:
    if ((uVar17 & 0x40) == 0) {
      bVar12 = true;
    }
    if ((iVar11 != 0x4b) && (bVar12)) {
      return;
    }
  }
  else {
    bVar12 = iVar11 != 0x10 && (iVar4 != 0x4c && iVar11 != 0x4c);
    if (iVar4 != 0x4b) goto LAB_0369bdcc;
  }
  if (*(long *)PTR_DAT_04bb27f8 != 0) {
    sVar18 = *(short *)((long)plVar6 + 0x12184);
    if (sVar18 != -1) {
      iVar4 = *(int *)(*(long *)PTR_DAT_04bb4e28 + 0xe0);
      if (iVar4 != 0) {
        lVar13 = *(long *)(*(long *)PTR_DAT_04bb4e28 + 0xe8);
        lVar9 = 0;
        lVar14 = (long)iVar4 << 3;
        do {
          if (*(short *)(*(long *)(lVar13 + lVar9 * 8) + 0x38) == sVar18) {
            uVar17 = *(ushort *)(*(long *)(lVar13 + lVar9 * 8) + 0x114) >> 5 & 1;
            goto LAB_0369be48;
          }
          lVar9 = lVar9 + 1;
          lVar14 = lVar14 + -8;
        } while (lVar14 != 0);
      }
    }
    uVar17 = 0;
LAB_0369be48:
    if ((((*(ushort **)PTR_DAT_04bc3a48 == (ushort *)0x0) ||
         ((**(ushort **)PTR_DAT_04bc3a48 & 1) == 0)) || (*(long *)PTR_DAT_04bc1530 == 0)) ||
       (lVar9 = *(long *)(*(long *)PTR_DAT_04bc1530 + 8), lVar9 == 0)) {
      sVar18 = *(short *)(*(long *)PTR_DAT_04bb27f8 + 0x2a);
    }
    else if ((*(long **)(lVar9 + 0x60) == (long *)0x0) ||
            (puVar8 = (undefined8 *)**(long **)(lVar9 + 0x60), puVar8 == (undefined8 *)0x0)) {
      sVar18 = *(short *)(*(long *)(lVar9 + 0x48) + *(long *)(lVar9 + 0x40) + 2);
    }
    else {
      uVar7 = (**(code **)*puVar8)();
      sVar18 = *(short *)(*(long *)(lVar9 + 0x48) + *(long *)(lVar9 + 0x40) + 2);
      if ((((uVar7 & 1) != 0) && (*(long *)(lVar9 + 0x60) != 0)) &&
         (puVar8 = *(undefined8 **)(*(long *)(lVar9 + 0x60) + 8), puVar8 != (undefined8 *)0x0)) {
        (**(code **)*puVar8)();
      }
    }
    sVar2 = *(short *)((long)plVar6 + 0x12184);
    local_7c = 0;
    local_74 = 0.0;
    local_84 = 0;
    lVar9 = *(long *)PTR_DAT_04bb59d8;
    fVar21 = (float)*(int *)(lVar9 + 0x60) * 5.0 + 5.0;
    fVar20 = ((float)*(int *)(lVar9 + 0x54) * 5.0 + (float)*(int *)(lVar9 + 100) * 5.0 + 5.0) * 0.5;
    local_88 = ((float)*(int *)(lVar9 + 0x50) * 5.0 + fVar21) * 0.5;
    local_80 = fVar20;
    uVar7 = FUN_02b81a4c(0,**(undefined8 **)(param_1 + 8),&local_88);
    if ((uVar7 & 1) == 0) {
      if (**(uint **)(param_1 + 0x18) < 4) {
        lVar9 = **(long **)(param_1 + 8);
        if ((*(byte *)(lVar9 + 0x560) >> 1 & 1) == 0) {
          lVar9 = lVar9 + 0x570;
        }
        else {
          lVar9 = lVar9 + 0x8a8;
        }
        fVar20 = ((float)*(int *)(lVar9 + 0x10) * 5.0 + (float)*(int *)(lVar9 + 0x20) * 5.0 + 5.0) *
                 0.5;
        local_74 = ((float)*(int *)(lVar9 + 0x14) * 5.0 + (float)*(int *)(lVar9 + 0x24) * 5.0 + 5.0)
                   * 0.5;
        local_7c = (ulong)(uint)fVar20;
        uVar16 = **(uint **)(param_1 + 0x18);
        if (uVar16 == 2) {
          piVar10 = *(int **)(param_1 + 0x10);
          local_74 = local_74 + 0.0;
          if (*piVar10 == 0) {
            local_7c = (ulong)(uint)(fVar20 + 5.0);
            *piVar10 = *piVar10 + 1;
            goto LAB_0369c0ec;
          }
          fVar20 = fVar20 + -5.0;
        }
        else {
          if (uVar16 != 3) goto LAB_0369c0ec;
          if (uVar17 == 0) {
            if (sVar18 == sVar2) {
              fVar21 = 5.5;
              goto LAB_0369c0a0;
            }
            fVar21 = -4.7;
            fVar20 = fVar20 + 0.0;
          }
          else {
            fVar21 = -5.5;
LAB_0369c0a0:
            fVar20 = fVar20 + fVar21;
            fVar21 = 4.7;
          }
          local_74 = local_74 + fVar21;
        }
        local_7c = (ulong)(uint)fVar20;
      }
    }
    else {
      if (uVar17 == 0) {
        local_98 = PTR_DAT_04bb2020 + 0x10;
        puStack_90 = &DAT_0407ebb1;
        uVar19 = FUN_03771b40(sVar18 != sVar2,&local_98);
      }
      else {
        uVar19 = FUN_037715a0();
      }
      local_7c = CONCAT44(fVar20,uVar19);
      local_74 = fVar21;
    }
LAB_0369c0ec:
    local_98 = (undefined *)((ulong)local_98._4_4_ << 0x20);
    FUN_01e39778(plVar15,&local_7c,&local_98,0);
    uVar17 = *(ushort *)((long)plVar6 + 0xaf64);
    iVar4 = *(int *)((long)plVar6 + 0x77f4);
    iVar11 = (int)plVar6[0xef6];
  }
  if (iVar4 == 0x10) {
    bVar12 = false;
  }
  else {
    bVar12 = iVar11 != 0x10 && (iVar4 != 0x4c && iVar11 != 0x4c);
    if (iVar4 == 0x4b) goto LAB_0369c15c;
  }
  if ((uVar17 & 0x40) == 0) {
    bVar12 = true;
  }
  if ((iVar11 != 0x4b) && (bVar12)) {
    return;
  }
LAB_0369c15c:
  (**(code **)(*plVar6 + 0x38))(plVar6,0x4c,0,0);
  return;
}


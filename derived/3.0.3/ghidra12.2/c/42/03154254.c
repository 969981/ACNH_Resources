
void FUN_03154254(long *param_1,int *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  uint uVar6;
  ulong uVar7;
  long *plVar8;
  long lVar9;
  undefined8 *puVar10;
  long *plVar11;
  long *plVar12;
  long lVar13;
  uint uVar14;
  float fVar15;
  undefined8 uVar16;
  float fVar17;
  undefined8 uVar18;
  undefined *local_80;
  undefined4 local_78;
  
  puVar2 = PTR_DAT_04bc4e60;
  lVar13 = *param_1;
  puVar10 = (undefined8 *)**(long **)(*(long *)(lVar13 + 0x210) + 0x3f8);
  if (((*PTR_DAT_04bc4e60 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_04bc4e60), iVar5 != 0))
  {
    *(undefined **)PTR_DAT_04bc4e58 = PTR_DAT_04bc4d38 + 0x10;
    __cxa_guard_release(PTR_DAT_04bc4e60);
  }
  puVar3 = PTR_DAT_04bc4e58;
  uVar7 = (**(code **)*puVar10)(puVar10,PTR_DAT_04bc4e58);
  puVar4 = PTR_DAT_04bc4f00;
  if ((uVar7 & 1) == 0) {
    puVar10 = (undefined8 *)0x0;
  }
  lVar9 = 0x58;
  if (*(uint *)(puVar10 + 0x44) < 0xc) {
    lVar9 = 0;
  }
  plVar11 = *(long **)(puVar10[0x45] + lVar9);
  if (plVar11 != (long *)0x0) {
    uVar16 = 0x3f800000;
    if (*param_2 != 1) {
      uVar16 = 0x40000000;
    }
    local_80 = PTR_DAT_04bc4f00 + 0x10;
    local_78 = 0x14;
    uVar18 = 0;
    if (*param_2 != 0) {
      uVar18 = uVar16;
    }
    (**(code **)(*plVar11 + 0x18))(plVar11,&local_80);
    (**(code **)(plVar11[3] + 0x158))(uVar18,plVar11[1]);
  }
  puVar10 = (undefined8 *)**(long **)(*(long *)(lVar13 + 0x210) + 0x3f8);
  if (((*puVar2 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_04bc4e60), iVar5 != 0)) {
    *(undefined **)puVar3 = PTR_DAT_04bc4d38 + 0x10;
    __cxa_guard_release(PTR_DAT_04bc4e60);
  }
  uVar7 = (**(code **)*puVar10)(puVar10,puVar3);
  puVar1 = PTR_DAT_04bb27c0;
  if ((uVar7 & 1) == 0) {
    puVar10 = (undefined8 *)0x0;
  }
  plVar11 = *(long **)puVar10[0x45];
  if (plVar11 != (long *)0x0) {
    fVar17 = 0.0;
    lVar9 = *(long *)PTR_DAT_04bb27c0;
    if (lVar9 != 0) {
      uVar14 = *(uint *)PTR_DAT_04bb32f8;
      if ((((uVar14 == 0) ||
           (plVar12 = *(long **)(*(long *)(*(long *)(lVar9 + 0x1c0) + 8) +
                                ((ulong)(uVar14 >> 0x11) & 0x7ff8)), plVar12 == (long *)0x0)) ||
          ((*(uint *)(plVar12 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar12 + 0x46) != uVar14)) {
        plVar12 = (long *)0x0;
      }
      if ((*(int *)(lVar9 + 0x288) == 1) || (*(int *)(lVar9 + 0x288) == -1)) {
        plVar8 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        lVar9 = *(long *)puVar1;
        iVar5 = (**(code **)(*plVar8 + 0x60))();
        if (iVar5 < 0x11) {
          uVar14 = 1;
        }
        else {
          uVar14 = *(uint *)(lVar9 + 0x5e8);
          if (4 < uVar14) goto LAB_0315442c;
          uVar14 = 0x1aU >> (ulong)(uVar14 & 0x1f) & 1;
        }
      }
      else {
LAB_0315442c:
        uVar14 = 0;
      }
      if (plVar12 != (long *)0x0) {
        if (((*PTR_DAT_04bb3280 & 1) == 0) &&
           (iVar5 = __cxa_guard_acquire(PTR_DAT_04bb3280), iVar5 != 0)) {
          *(undefined **)PTR_DAT_04bb3278 = PTR_DAT_04bb2e50 + 0x10;
          __cxa_guard_release(PTR_DAT_04bb3280);
        }
        uVar6 = (**(code **)(*plVar12 + 0x20))(plVar12,PTR_DAT_04bb3278);
        if ((uVar14 & uVar6) == 1) {
          fVar15 = (float)FUN_008f9514(plVar12);
          uVar7 = FUN_00901910(plVar12);
          if ((uVar7 & 1) == 0) {
            fVar17 = fVar15;
          }
          else {
            lVar9 = *(long *)puVar1;
            if ((((lVar9 != 0) && (uVar14 = *(uint *)((long)plVar12 + 0x274), uVar14 != 0)) &&
                (plVar12 = *(long **)(*(long *)(*(long *)(lVar9 + 0x1c0) + 8) +
                                     ((ulong)(uVar14 >> 0x11) & 0x7ff8)), plVar12 != (long *)0x0))
               && (((*(uint *)(plVar12 + 0x49) >> 1 & 1) == 0 &&
                   (*(uint *)(plVar12 + 0x46) == uVar14)))) {
              if (((*PTR_DAT_04bb32c0 & 1) == 0) &&
                 (iVar5 = __cxa_guard_acquire(PTR_DAT_04bb32c0), iVar5 != 0)) {
                *(undefined **)PTR_DAT_04bb32b8 = PTR_DAT_04bb32c8 + 0x10;
                __cxa_guard_release(PTR_DAT_04bb32c0);
              }
              uVar7 = (**(code **)(*plVar12 + 0x20))(plVar12,PTR_DAT_04bb32b8);
              if ((uVar7 & 1) != 0) {
                fVar17 = *(float *)((long)plVar12 + 0x317bc) / 15.0;
              }
            }
          }
        }
      }
    }
    local_80 = puVar4 + 0x10;
    local_78 = 0x15;
    (**(code **)(*plVar11 + 0x18))(plVar11,&local_80);
    (**(code **)(plVar11[3] + 0x168))(fVar17,plVar11[1]);
  }
  if (*param_2 != 1) {
    return;
  }
  puVar10 = (undefined8 *)**(long **)(*(long *)(lVar13 + 0x210) + 0x3f8);
  if (((*puVar2 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_04bc4e60), iVar5 != 0)) {
    *(undefined **)puVar3 = PTR_DAT_04bc4d38 + 0x10;
    __cxa_guard_release(PTR_DAT_04bc4e60);
  }
  uVar7 = (**(code **)*puVar10)(puVar10,PTR_DAT_04bc4e58);
  puVar2 = PTR_DAT_04bb27c0;
  if ((uVar7 & 1) == 0) {
    puVar10 = (undefined8 *)0x0;
  }
  lVar13 = 0x78;
  if (*(uint *)(puVar10 + 0x44) < 0x10) {
    lVar13 = 0;
  }
  plVar11 = *(long **)(puVar10[0x45] + lVar13);
  if (plVar11 == (long *)0x0) {
    return;
  }
  uVar16 = 0x3f800000;
  lVar13 = *(long *)PTR_DAT_04bb27c0;
  if (lVar13 == 0) goto LAB_031546c4;
  uVar14 = *(uint *)PTR_DAT_04bb32f8;
  if ((((uVar14 == 0) ||
       (plVar12 = *(long **)(*(long *)(*(long *)(lVar13 + 0x1c0) + 8) +
                            ((ulong)(uVar14 >> 0x11) & 0x7ff8)), plVar12 == (long *)0x0)) ||
      ((*(uint *)(plVar12 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar12 + 0x46) != uVar14)) {
    plVar12 = (long *)0x0;
  }
  if ((*(int *)(lVar13 + 0x288) == 1) || (*(int *)(lVar13 + 0x288) == -1)) {
    plVar8 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar13 = *(long *)puVar2;
    iVar5 = (**(code **)(*plVar8 + 0x60))();
    if (iVar5 < 0x11) {
      uVar14 = 1;
    }
    else {
      if (4 < *(uint *)(lVar13 + 0x5e8)) goto LAB_03154660;
      uVar14 = 0x1aU >> (ulong)(*(uint *)(lVar13 + 0x5e8) & 0x1f) & 1;
    }
  }
  else {
LAB_03154660:
    uVar14 = 0;
  }
  if (plVar12 != (long *)0x0) {
    if (((*PTR_DAT_04bb3280 & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(PTR_DAT_04bb3280), iVar5 != 0)) {
      *(undefined **)PTR_DAT_04bb3278 = PTR_DAT_04bb2e50 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb3280);
    }
    uVar6 = (**(code **)(*plVar12 + 0x20))(plVar12,PTR_DAT_04bb3278);
    if ((uVar14 & uVar6) == 1) {
      iVar5 = FUN_008fde44(plVar12);
      uVar16 = 0x3f800000;
      if (iVar5 != 0) {
        uVar16 = 0;
      }
    }
  }
LAB_031546c4:
  local_80 = puVar4 + 0x10;
  local_78 = 0x14;
  (**(code **)(*plVar11 + 0x18))(plVar11,&local_80);
  (**(code **)(plVar11[3] + 0x158))(uVar16,plVar11[1]);
  return;
}


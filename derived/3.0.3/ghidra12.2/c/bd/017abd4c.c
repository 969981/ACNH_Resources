
void FUN_017abd4c(uint *param_1)

{
  int *piVar1;
  uint uVar2;
  ushort uVar3;
  byte *pbVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  uint uVar8;
  long *plVar9;
  ulong uVar10;
  uint uVar11;
  long lVar12;
  long *plVar13;
  
  puVar5 = PTR_DAT_04bb27c0;
  uVar11 = *param_1;
  if (uVar11 == 0) {
    return;
  }
  lVar12 = *(long *)PTR_DAT_04bb27c0;
  if (lVar12 == 0) {
    return;
  }
  plVar13 = *(long **)(*(long *)(*(long *)(lVar12 + 0x1c0) + 8) + ((ulong)(uVar11 >> 0x11) & 0x7ff8)
                      );
  if (((plVar13 == (long *)0x0) || ((*(uint *)(plVar13 + 0x49) >> 1 & 1) != 0)) ||
     (*(uint *)(plVar13 + 0x46) != uVar11)) {
    plVar13 = (long *)0x0;
  }
  if (*(int *)(lVar12 + 0x288) == 1 || *(int *)(lVar12 + 0x288) == -1) {
    plVar9 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar12 = *(long *)puVar5;
    iVar7 = (**(code **)(*plVar9 + 0x60))();
    pbVar4 = PTR_DAT_04bbe300;
    if (iVar7 < 0x11) {
      uVar11 = 1;
    }
    else {
      if (4 < *(uint *)(lVar12 + 0x5e8)) goto LAB_017abe04;
      uVar11 = 0x1aU >> (ulong)(*(uint *)(lVar12 + 0x5e8) & 0x1f) & 1;
    }
  }
  else {
LAB_017abe04:
    uVar11 = 0;
    pbVar4 = PTR_DAT_04bbe300;
  }
  if (plVar13 == (long *)0x0) {
    PTR_DAT_04bbe300 = pbVar4;
    return;
  }
  lVar12 = plVar13[0x2a];
  PTR_DAT_04bbe300 = pbVar4;
  if (((*pbVar4 & 1) == 0) && (iVar7 = __cxa_guard_acquire(pbVar4), iVar7 != 0)) {
    *(undefined **)PTR_DAT_04bbe2f8 = PTR_DAT_04bb2e50 + 0x10;
    __cxa_guard_release(PTR_DAT_04bbe300);
  }
  puVar6 = PTR_DAT_04bbe2f8;
  uVar10 = (**(code **)(*plVar13 + 0x20))(plVar13,PTR_DAT_04bbe2f8);
  uVar2 = 0;
  if ((int)lVar12 == 1) {
    uVar2 = uVar11;
  }
  if ((uVar10 & 1) == 0) {
    return;
  }
  if (uVar2 == 0) {
    return;
  }
  uVar11 = *(uint *)((long)plVar13 + 0xae4);
  if (uVar11 == 0) {
    return;
  }
  lVar12 = *(long *)puVar5;
  if (lVar12 == 0) {
    return;
  }
  plVar13 = *(long **)(*(long *)(*(long *)(lVar12 + 0x1c0) + 8) + ((ulong)(uVar11 >> 0x11) & 0x7ff8)
                      );
  if (((plVar13 == (long *)0x0) || ((*(uint *)(plVar13 + 0x49) >> 1 & 1) != 0)) ||
     (*(uint *)(plVar13 + 0x46) != uVar11)) {
    plVar13 = (long *)0x0;
  }
  if ((*(int *)(lVar12 + 0x288) == 1) || (*(int *)(lVar12 + 0x288) == -1)) {
    plVar9 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar12 = *(long *)puVar5;
    iVar7 = (**(code **)(*plVar9 + 0x60))();
    if (iVar7 < 0x11) {
      uVar11 = 1;
    }
    else {
      if (4 < *(uint *)(lVar12 + 0x5e8)) goto LAB_017abef8;
      uVar11 = 0x1aU >> (ulong)(*(uint *)(lVar12 + 0x5e8) & 0x1f) & 1;
    }
  }
  else {
LAB_017abef8:
    uVar11 = 0;
  }
  if (plVar13 == (long *)0x0) {
    return;
  }
  lVar12 = plVar13[0x2a];
  if (((*pbVar4 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_04bbe300), iVar7 != 0)) {
    *(undefined **)puVar6 = PTR_DAT_04bb2e50 + 0x10;
    __cxa_guard_release(PTR_DAT_04bbe300);
  }
  uVar10 = (**(code **)(*plVar13 + 0x20))(plVar13,PTR_DAT_04bbe2f8);
  uVar2 = 0;
  if ((int)lVar12 == 1) {
    uVar2 = uVar11;
  }
  if ((uVar10 & 1) == 0) {
    return;
  }
  if (uVar2 == 0) {
    return;
  }
  uVar11 = *(uint *)((long)plVar13 + 0x6fc);
  if (uVar11 == 0) {
    return;
  }
  lVar12 = *(long *)puVar5;
  if (lVar12 == 0) {
    return;
  }
  plVar13 = *(long **)(*(long *)(*(long *)(lVar12 + 0x1c0) + 8) + ((ulong)(uVar11 >> 0x11) & 0x7ff8)
                      );
  if (((plVar13 == (long *)0x0) || ((*(uint *)(plVar13 + 0x49) >> 1 & 1) != 0)) ||
     (*(uint *)(plVar13 + 0x46) != uVar11)) {
    plVar13 = (long *)0x0;
  }
  if ((*(int *)(lVar12 + 0x288) == 1) || (*(int *)(lVar12 + 0x288) == -1)) {
    plVar9 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar12 = *(long *)puVar5;
    iVar7 = (**(code **)(*plVar9 + 0x60))();
    if (iVar7 < 0x11) {
      uVar11 = 1;
      goto LAB_017abfe8;
    }
    if (*(uint *)(lVar12 + 0x5e8) < 5) {
      uVar11 = 0x1aU >> (ulong)(*(uint *)(lVar12 + 0x5e8) & 0x1f) & 1;
      goto LAB_017abfe8;
    }
  }
  uVar11 = 0;
LAB_017abfe8:
  if (plVar13 != (long *)0x0) {
    lVar12 = plVar13[0x2a];
    uVar2 = *(uint *)(plVar13 + 0x49);
    if (((*PTR_DAT_04bbe2f0 & 1) == 0) &&
       (iVar7 = __cxa_guard_acquire(PTR_DAT_04bbe2f0), iVar7 != 0)) {
      *(undefined **)PTR_DAT_04bbe2e8 = PTR_DAT_04bb3290 + 0x10;
      __cxa_guard_release(PTR_DAT_04bbe2f0);
    }
    uVar8 = (**(code **)(*plVar13 + 0x20))(plVar13,PTR_DAT_04bbe2e8);
    puVar5 = PTR_DAT_04bb6258;
    if ((((int)lVar12 == 1) && ((uVar8 & uVar11) != 0)) && ((uVar2 >> 4 & 1) != 0)) {
      uVar3 = *(ushort *)((long)plVar13 + 0x284);
      uVar10 = (ulong)uVar3;
      if ((uVar10 < 1000) &&
         (piVar1 = (int *)(PTR_DAT_04bb6258 + uVar10 * 0x10), *piVar1 == (int)plVar13[0x46])) {
        *piVar1 = 0;
        puVar6 = PTR_DAT_04bb6260;
        piVar1[2] = -1;
        piVar1[3] = -1;
        if (*(uint *)puVar6 == (uint)uVar3) {
          do {
            uVar11 = (uint)uVar10;
            piVar1 = (int *)(puVar5 + uVar10 * 0x10);
            if (999 < uVar11) {
              piVar1 = (int *)puVar5;
            }
            if (*piVar1 != 0) {
              return;
            }
            uVar10 = (ulong)(uVar11 - 1);
            *(uint *)puVar6 = uVar11 - 1;
          } while (0 < (int)uVar11);
          *(undefined4 *)puVar6 = 0xffffffff;
        }
      }
    }
  }
  return;
}


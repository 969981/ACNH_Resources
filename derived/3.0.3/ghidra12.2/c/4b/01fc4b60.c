
void FUN_01fc4b60(long param_1)

{
  uint uVar1;
  int *piVar2;
  undefined *puVar3;
  int iVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  uint uVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined8 *puVar11;
  long *plVar12;
  undefined8 *puVar13;
  
  puVar3 = PTR_DAT_04bb27c0;
  uVar8 = *(uint *)(param_1 + 0x12088);
  if ((uVar8 == 0) || (lVar7 = *(long *)PTR_DAT_04bb27c0, lVar7 == 0)) goto LAB_01fc4d6c;
  plVar12 = *(long **)(*(long *)(*(long *)(lVar7 + 0x1c0) + 8) + ((ulong)(uVar8 >> 0x11) & 0x7ff8));
  if ((plVar12 == (long *)0x0) ||
     (((*(uint *)(plVar12 + 0x49) >> 1 & 1) != 0 || (*(uint *)(plVar12 + 0x46) != uVar8)))) {
    plVar12 = (long *)0x0;
  }
  if (*(int *)(lVar7 + 0x288) == 1 || *(int *)(lVar7 + 0x288) == -1) {
    plVar5 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar7 = *(long *)puVar3;
    iVar4 = (**(code **)(*plVar5 + 0x60))();
    if (iVar4 < 0x11) {
      uVar8 = 1;
    }
    else {
      if (4 < *(uint *)(lVar7 + 0x5e8)) goto LAB_01fc4c24;
      uVar8 = 0x1aU >> (ulong)(*(uint *)(lVar7 + 0x5e8) & 0x1f) & 1;
    }
  }
  else {
LAB_01fc4c24:
    uVar8 = 0;
  }
  if (plVar12 != (long *)0x0) {
    lVar7 = plVar12[0x2a];
    if (((*PTR_DAT_04bb37d8 & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(PTR_DAT_04bb37d8), iVar4 != 0)) {
      *(undefined **)PTR_DAT_04bb37d0 = PTR_DAT_04bb3750 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb37d8);
    }
    uVar6 = (**(code **)(*plVar12 + 0x20))(plVar12,PTR_DAT_04bb37d0);
    uVar1 = 0;
    if ((int)lVar7 == 1) {
      uVar1 = uVar8;
    }
    if (((uVar6 & 1) != 0) && (uVar1 != 0)) {
      puVar13 = (undefined8 *)plVar12[0x77];
      if (((*PTR_DAT_04bb6710 & 1) == 0) &&
         (iVar4 = __cxa_guard_acquire(PTR_DAT_04bb6710), iVar4 != 0)) {
        *(undefined **)PTR_DAT_04bb6708 = PTR_DAT_04bb6718 + 0x10;
        __cxa_guard_release(PTR_DAT_04bb6710);
      }
      if ((puVar13 != (undefined8 *)0x0) &&
         (uVar6 = (**(code **)*puVar13)(puVar13,PTR_DAT_04bb6708), (uVar6 & 1) != 0)) {
        piVar2 = (int *)(puVar13 + 0x2412);
        iVar4 = *piVar2;
        if (iVar4 != 0) {
          lVar7 = 0;
          lVar10 = (long)iVar4 << 3;
          uVar8 = iVar4 - 1;
          do {
            if (**(int **)(puVar13[0x2413] + lVar7 * 8) == *(int *)(*(long *)(param_1 + 8) + 0x230))
            {
              uVar8 = (uint)lVar7;
              break;
            }
            lVar7 = lVar7 + 1;
            lVar10 = lVar10 + -8;
          } while (lVar10 != 0);
          if ((-1 < (int)uVar8) && ((int)uVar8 < iVar4)) {
            uVar1 = uVar8 + 1;
            uVar6 = (ulong)uVar8;
            puVar9 = (undefined8 *)puVar13[0x2414];
            do {
              puVar11 = *(undefined8 **)(puVar13[0x2413] + uVar6 * 8);
              uVar6 = uVar6 + 1;
              *puVar11 = puVar9;
              puVar13[0x2414] = puVar11;
              puVar9 = puVar11;
            } while (uVar6 < uVar1);
            iVar4 = *piVar2;
            if ((int)uVar8 < iVar4) {
              if ((int)uVar1 < iVar4) {
                memmove((void *)(puVar13[0x2413] + (ulong)uVar8 * 8),
                        (void *)(puVar13[0x2413] + (long)(int)uVar1 * 8),
                        -(ulong)(iVar4 - uVar1 >> 0x1f) & 0xfffffff800000000 |
                        (ulong)(iVar4 - uVar1) << 3);
                iVar4 = *piVar2;
              }
              *piVar2 = iVar4 + -1;
            }
          }
        }
      }
    }
  }
LAB_01fc4d6c:
  *(uint *)(param_1 + 0x12088) = 0;
  return;
}


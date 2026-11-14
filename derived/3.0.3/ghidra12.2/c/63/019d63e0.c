
undefined4 FUN_019d63e0(long param_1,uint param_2,int *param_3)

{
  undefined *puVar1;
  ulong uVar2;
  int iVar3;
  uint uVar4;
  undefined *puVar5;
  int iVar6;
  uint uVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  uint uVar11;
  long *plVar12;
  long *plVar13;
  ulong uVar14;
  
  plVar13 = (long *)PTR_DAT_04bb3238;
  puVar5 = PTR_DAT_04bb27c0;
  lVar9 = *(long *)(param_1 + 0x278);
  if (lVar9 != 0) {
    lVar10 = (long)(int)param_2;
    if (*(uint *)(lVar9 + 0x290) <= param_2 || *(long *)(lVar9 + 0x298) == 0) {
      lVar10 = 0;
    }
    lVar9 = *(long *)(lVar9 + 0x298) + lVar10 * 0x18;
    iVar3 = *(int *)(lVar9 + 8);
    if (iVar3 != 0) {
      uVar14 = 0;
      lVar9 = *(long *)(lVar9 + 0x10);
      puVar1 = PTR_DAT_04bb3fd0 + 0x10;
      do {
        uVar11 = *(uint *)(lVar9 + (-(uVar14 >> 0x1f) & 0xfffffffc00000000 | uVar14 << 2));
        if ((uVar11 != 0) && (lVar10 = *(long *)puVar5, lVar10 != 0)) {
          plVar12 = *(long **)(*(long *)(*(long *)(lVar10 + 0x1c0) + 8) +
                              ((ulong)(uVar11 >> 0x11) & 0x7ff8));
          if ((plVar12 == (long *)0x0) ||
             (((*(uint *)(plVar12 + 0x49) >> 1 & 1) != 0 || (*(uint *)(plVar12 + 0x46) != uVar11))))
          {
            plVar12 = (long *)0x0;
          }
          if (*(int *)(lVar10 + 0x288) == 1 || *(int *)(lVar10 + 0x288) == -1) {
            plVar8 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
            lVar10 = *(long *)puVar5;
            iVar6 = (**(code **)(*plVar8 + 0x60))();
            if (iVar6 < 0x11) {
              uVar11 = 1;
            }
            else {
              uVar11 = *(uint *)(lVar10 + 0x5e8);
              if (4 < uVar11) goto LAB_019d6510;
              uVar11 = 0x1aU >> (ulong)(uVar11 & 0x1f) & 1;
            }
          }
          else {
LAB_019d6510:
            uVar11 = 0;
          }
          if (plVar12 != (long *)0x0) {
            lVar10 = plVar12[0x2a];
            uVar4 = *(uint *)(plVar12 + 0x49);
            if (((*PTR_DAT_04bb3fc8 & 1) == 0) &&
               (iVar6 = __cxa_guard_acquire(PTR_DAT_04bb3fc8), iVar6 != 0)) {
              *(undefined **)PTR_DAT_04bb3fc0 = puVar1;
              __cxa_guard_release(PTR_DAT_04bb3fc8);
            }
            uVar7 = (**(code **)(*plVar12 + 0x20))(plVar12,PTR_DAT_04bb3fc0);
            if (((((int)lVar10 == 1) && ((uVar7 & uVar11) != 0)) && ((uVar4 >> 4 & 1) != 0)) &&
               (*(int *)((long)plVar12 + 0x17c) == *param_3)) {
              plVar13 = plVar12 + 0x46;
              break;
            }
          }
        }
        uVar2 = uVar14 + 1;
        uVar14 = uVar2 & 0xffffffff;
      } while (iVar3 != (int)uVar2);
    }
  }
  return (int)*plVar13;
}


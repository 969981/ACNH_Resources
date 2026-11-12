
undefined8 FUN_00a702e0(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  uint uVar2;
  uint *puVar3;
  undefined *puVar4;
  int iVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  uint uVar10;
  long *plVar11;
  uint *puVar12;
  
  puVar4 = PTR_DAT_04bb27c0;
  if (-1 < DAT_04c47dc0) {
    uVar9 = 0xffffffffffffffff;
    puVar12 = &DAT_04d9fe90;
    puVar1 = PTR_DAT_04bb2e50 + 0x10;
    iVar5 = DAT_04c47dc0;
    do {
      uVar9 = uVar9 + 1;
      puVar3 = puVar12;
      if (999 < uVar9) {
        puVar3 = &DAT_04d9fe90;
      }
      if (*(long *)(puVar3 + 2) != param_2) {
        lVar8 = *(long *)puVar4;
        if (lVar8 != 0) {
          uVar10 = *puVar3;
          if ((((uVar10 == 0) ||
               (plVar11 = *(long **)(*(long *)(*(long *)(lVar8 + 0x1c0) + 8) +
                                    ((ulong)(uVar10 >> 0x11) & 0x7ff8)), plVar11 == (long *)0x0)) ||
              ((*(uint *)(plVar11 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar11 + 0x46) != uVar10))
          {
            plVar11 = (long *)0x0;
          }
          if (*(int *)(lVar8 + 0x288) == 1 || *(int *)(lVar8 + 0x288) == -1) {
            plVar6 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
            lVar8 = *(long *)puVar4;
            iVar5 = (**(code **)(*plVar6 + 0x60))();
            if (iVar5 < 0x11) {
              uVar10 = 1;
            }
            else {
              uVar10 = *(uint *)(lVar8 + 0x5e8);
              if (4 < uVar10) goto LAB_00a70404;
              uVar10 = 0x1aU >> (ulong)(uVar10 & 0x1f) & 1;
            }
          }
          else {
LAB_00a70404:
            uVar10 = 0;
          }
          if (plVar11 != (long *)0x0) {
            lVar8 = plVar11[0x2a];
            if (((*PTR_DAT_04bb32a0 & 1) == 0) &&
               (iVar5 = __cxa_guard_acquire(PTR_DAT_04bb32a0), iVar5 != 0)) {
              *(undefined **)PTR_DAT_04bb3298 = puVar1;
              __cxa_guard_release(PTR_DAT_04bb32a0);
            }
            uVar7 = (**(code **)(*plVar11 + 0x20))(plVar11,PTR_DAT_04bb3298);
            uVar2 = 0;
            if ((int)lVar8 == 1) {
              uVar2 = uVar10;
            }
            if ((((uVar7 & 1) != 0) && (uVar2 != 0)) &&
               (uVar7 = (**(code **)(*plVar11 + 0x138))(plVar11,param_1,param_2), (uVar7 & 1) != 0))
            {
              return *(undefined8 *)(puVar3 + 2);
            }
          }
        }
        iVar5 = DAT_04c47dc0;
      }
      puVar12 = puVar12 + 4;
    } while ((long)uVar9 < (long)iVar5);
  }
  return 0xffffffffffffffff;
}


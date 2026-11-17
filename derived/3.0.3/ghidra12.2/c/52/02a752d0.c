
uint FUN_02a752d0(long param_1,int param_2)

{
  undefined *puVar1;
  uint *puVar2;
  uint uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  long *plVar9;
  ulong uVar10;
  long lVar11;
  long *plVar12;
  uint uVar13;
  uint uVar14;
  
  puVar7 = PTR_DAT_04bb59a0;
  puVar6 = PTR_DAT_04bb5998;
  puVar5 = PTR_DAT_04bb3350;
  puVar4 = PTR_DAT_04bb27c0;
  if (*(int *)(PTR_DAT_04bc3a80 + 0x38) == -0x17df00c3) {
    uVar13 = 0;
    puVar1 = PTR_DAT_04bb2e50 + 0x10;
    do {
      puVar2 = (uint *)(param_1 + 0x10 + ((long)((ulong)uVar13 << 0x20) >> 0x1d));
      if (((puVar2[1] != 0xffffffff) && (uVar14 = *puVar2, uVar14 != 0)) &&
         (lVar11 = *(long *)puVar4, lVar11 != 0)) {
        plVar12 = *(long **)(*(long *)(*(long *)(lVar11 + 0x1c0) + 8) +
                            ((ulong)(uVar14 >> 0x11) & 0x7ff8));
        if (((plVar12 == (long *)0x0) || ((*(uint *)(plVar12 + 0x49) >> 1 & 1) != 0)) ||
           (*(uint *)(plVar12 + 0x46) != uVar14)) {
          plVar12 = (long *)0x0;
        }
        if (*(int *)(lVar11 + 0x288) == 1 || *(int *)(lVar11 + 0x288) == -1) {
          plVar9 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar5 + 0x68));
          lVar11 = *(long *)puVar4;
          iVar8 = (**(code **)(*plVar9 + 0x60))();
          if (iVar8 < 0x11) {
            uVar14 = 1;
          }
          else {
            uVar14 = *(uint *)(lVar11 + 0x5e8);
            if (4 < uVar14) goto LAB_02a75408;
            uVar14 = 0x1aU >> (ulong)(uVar14 & 0x1f) & 1;
          }
        }
        else {
LAB_02a75408:
          uVar14 = 0;
        }
        if (plVar12 != (long *)0x0) {
          lVar11 = plVar12[0x2a];
          if (((*puVar7 & 1) == 0) && (iVar8 = __cxa_guard_acquire(puVar7), iVar8 != 0)) {
            *(undefined **)puVar6 = puVar1;
            __cxa_guard_release(puVar7);
          }
          uVar10 = (**(code **)(*plVar12 + 0x20))(plVar12,puVar6);
          uVar3 = 0;
          if ((int)lVar11 == 1) {
            uVar3 = uVar14;
          }
          if ((((uVar10 & 1) != 0) && (uVar3 != 0)) && ((int)plVar12[0xaa] == param_2)) {
            return *puVar2;
          }
        }
      }
      uVar13 = uVar13 + 1;
    } while (uVar13 != 0x36);
  }
  return *(uint *)PTR_DAT_04bb3238;
}


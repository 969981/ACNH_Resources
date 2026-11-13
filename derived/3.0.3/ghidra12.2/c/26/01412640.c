
undefined4 FUN_01412640(long param_1,int param_2)

{
  undefined *puVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  uint uVar8;
  long *plVar9;
  long lVar10;
  ulong uVar11;
  long *plVar12;
  ulong uVar13;
  uint uVar14;
  
  puVar6 = PTR_DAT_04bb4048;
  puVar5 = PTR_DAT_04bb3350;
  puVar4 = PTR_DAT_04bb27c0;
  uVar13 = 0;
  uVar2 = *(undefined4 *)PTR_DAT_04bb3238;
  puVar1 = PTR_DAT_04bb2e50 + 0x10;
  do {
    uVar11 = *(ulong *)(param_1 + 0xa10 + (-(uVar13 >> 0x1f) & 0xfffffff800000000 | uVar13 << 3));
    iVar7 = (int)uVar11;
    if ((iVar7 != 0) && (lVar10 = *(long *)puVar4, lVar10 != 0)) {
      if ((iVar7 == 0) ||
         (((plVar12 = *(long **)(*(long *)(*(long *)(lVar10 + 0x1c0) + 8) +
                                (uVar11 >> 0x14 & 0xfff) * 8), plVar12 == (long *)0x0 ||
           ((*(uint *)(plVar12 + 0x49) >> 1 & 1) != 0)) || ((int)plVar12[0x46] != iVar7)))) {
        plVar12 = (long *)0x0;
      }
      if (*(int *)(lVar10 + 0x288) == 1 || *(int *)(lVar10 + 0x288) == -1) {
        plVar9 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar5 + 0x68));
        lVar10 = *(long *)puVar4;
        iVar7 = (**(code **)(*plVar9 + 0x60))();
        if (iVar7 < 0x11) {
          uVar14 = 1;
        }
        else {
          uVar14 = *(uint *)(lVar10 + 0x5e8);
          if (4 < uVar14) goto LAB_01412758;
          uVar14 = 0x1aU >> (ulong)(uVar14 & 0x1f) & 1;
        }
      }
      else {
LAB_01412758:
        uVar14 = 0;
      }
      if (plVar12 != (long *)0x0) {
        lVar10 = plVar12[0x2a];
        uVar3 = *(uint *)(plVar12 + 0x49);
        if (((*PTR_DAT_04bb4050 & 1) == 0) &&
           (iVar7 = __cxa_guard_acquire(PTR_DAT_04bb4050), iVar7 != 0)) {
          *(undefined **)puVar6 = puVar1;
          __cxa_guard_release(PTR_DAT_04bb4050);
        }
        uVar8 = (**(code **)(*plVar12 + 0x20))(plVar12,puVar6);
        if ((((int)lVar10 == 1) && ((uVar8 & uVar14) != 0)) &&
           (((uVar3 >> 4 & 1) != 0 && ((int)plVar12[0x4f] == param_2)))) {
          return (int)plVar12[0x46];
        }
      }
    }
    uVar14 = (int)uVar13 + 1;
    uVar13 = (ulong)uVar14;
    if (uVar14 == 100) {
      return uVar2;
    }
  } while( true );
}


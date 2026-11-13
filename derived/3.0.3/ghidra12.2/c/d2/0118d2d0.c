
uint FUN_0118d2d0(long param_1,int param_2)

{
  undefined *puVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  long *plVar10;
  uint uVar11;
  uint *puVar12;
  uint uVar13;
  
  puVar5 = PTR_DAT_04bbb900;
  puVar4 = PTR_DAT_04bb3350;
  puVar3 = PTR_DAT_04bb27c0;
  uVar11 = 0;
  puVar1 = PTR_DAT_04bb3290 + 0x10;
  do {
    lVar9 = *(long *)puVar3;
    if (lVar9 != 0) {
      puVar12 = (uint *)(param_1 + 0xc + ((long)((ulong)uVar11 << 0x20) >> 0x1e));
      uVar13 = *puVar12;
      if ((((uVar13 == 0) ||
           (plVar10 = *(long **)(*(long *)(*(long *)(lVar9 + 0x1c0) + 8) +
                                ((ulong)(uVar13 >> 0x11) & 0x7ff8)), plVar10 == (long *)0x0)) ||
          ((*(uint *)(plVar10 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar10 + 0x46) != uVar13)) {
        plVar10 = (long *)0x0;
      }
      if (*(int *)(lVar9 + 0x288) == 1 || *(int *)(lVar9 + 0x288) == -1) {
        plVar7 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar4 + 0x68));
        lVar9 = *(long *)puVar3;
        iVar6 = (**(code **)(*plVar7 + 0x60))();
        if (iVar6 < 0x11) {
          uVar13 = 1;
        }
        else {
          uVar13 = *(uint *)(lVar9 + 0x5e8);
          if (4 < uVar13) goto LAB_0118d3e0;
          uVar13 = 0x1aU >> (ulong)(uVar13 & 0x1f) & 1;
        }
      }
      else {
LAB_0118d3e0:
        uVar13 = 0;
      }
      if (plVar10 != (long *)0x0) {
        lVar9 = plVar10[0x2a];
        if (((*PTR_DAT_04bbb908 & 1) == 0) &&
           (iVar6 = __cxa_guard_acquire(PTR_DAT_04bbb908), iVar6 != 0)) {
          *(undefined **)puVar5 = puVar1;
          __cxa_guard_release(PTR_DAT_04bbb908);
        }
        uVar8 = (**(code **)(*plVar10 + 0x20))(plVar10,puVar5);
        uVar2 = 0;
        if ((int)lVar9 == 1) {
          uVar2 = uVar13;
        }
        if ((((uVar8 & 1) != 0) && (uVar2 != 0)) && (*(int *)((long)plVar10 + 0x174) == param_2))
        goto LAB_0118d474;
      }
    }
    uVar11 = uVar11 + 1;
  } while (uVar11 != 0x14);
  puVar12 = (uint *)PTR_DAT_04bb3238;
LAB_0118d474:
  return *puVar12;
}


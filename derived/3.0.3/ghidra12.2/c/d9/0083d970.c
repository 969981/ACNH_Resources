
void FUN_0083d970(long param_1)

{
  undefined *puVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  long *plVar9;
  ulong uVar10;
  uint uVar11;
  long lVar12;
  long *plVar13;
  ulong uVar14;
  
  puVar7 = PTR_DAT_04bb5198;
  puVar6 = PTR_DAT_04bb5190;
  puVar5 = PTR_DAT_04bb3350;
  puVar4 = PTR_DAT_04bb3238;
  puVar3 = PTR_DAT_04bb27c0;
  uVar14 = 0;
  uVar11 = *(uint *)PTR_DAT_04bb3238;
  puVar1 = PTR_DAT_04bb2e50 + 0x10;
  do {
    uVar2 = *(uint *)(param_1 + 0x2b8 + (-(uVar14 >> 0x1f) & 0xfffffffc00000000 | uVar14 << 2));
    if (uVar2 != uVar11) {
      lVar12 = *(long *)puVar3;
      if (lVar12 != 0) {
        if ((((uVar2 == 0) ||
             (plVar13 = *(long **)(*(long *)(*(long *)(lVar12 + 0x1c0) + 8) +
                                  ((ulong)(uVar2 >> 0x11) & 0x7ff8)), plVar13 == (long *)0x0)) ||
            ((*(uint *)(plVar13 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar13 + 0x46) != uVar2)) {
          plVar13 = (long *)0x0;
        }
        if (*(int *)(lVar12 + 0x288) == 1 || *(int *)(lVar12 + 0x288) == -1) {
          plVar9 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar5 + 0x68));
          lVar12 = *(long *)puVar3;
          iVar8 = (**(code **)(*plVar9 + 0x60))();
          if (iVar8 < 0x11) {
            uVar11 = 1;
          }
          else {
            uVar11 = *(uint *)(lVar12 + 0x5e8);
            if (4 < uVar11) goto LAB_0083da98;
            uVar11 = 0x1aU >> (ulong)(uVar11 & 0x1f) & 1;
          }
        }
        else {
LAB_0083da98:
          uVar11 = 0;
        }
        if (plVar13 != (long *)0x0) {
          lVar12 = plVar13[0x2a];
          if (((*puVar7 & 1) == 0) && (iVar8 = __cxa_guard_acquire(puVar7), iVar8 != 0)) {
            *(undefined **)puVar6 = puVar1;
            __cxa_guard_release(puVar7);
          }
          uVar10 = (**(code **)(*plVar13 + 0x20))(plVar13,puVar6);
          uVar2 = 0;
          if ((int)lVar12 == 1) {
            uVar2 = uVar11;
          }
          if ((((uVar10 & 1) != 0) && (uVar2 != 0)) &&
             ((*(int *)((long)plVar13 + 0x274) != DAT_04cd5b80 &&
              ((*(int *)((long)plVar13 + 0x274) != DAT_04cd5b84 &&
               (*(int *)((long)plVar13 + 0x274) != DAT_04cd5b88)))))) {
            FUN_00834c4c(plVar13,*(undefined1 *)(param_1 + 0x278));
            *(undefined1 *)(param_1 + 0x278) = 0;
          }
        }
      }
      uVar11 = *(uint *)puVar4;
    }
    uVar2 = (int)uVar14 + 1;
    uVar14 = (ulong)uVar2;
    if (uVar2 == 10) {
      return;
    }
  } while( true );
}


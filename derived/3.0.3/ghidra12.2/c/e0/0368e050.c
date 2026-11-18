
void FUN_0368e050(long param_1,uint param_2,uint param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  uint uVar8;
  long *plVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  uint uVar13;
  long *plVar14;
  ulong uVar15;
  
  puVar6 = PTR_DAT_04bb3748;
  puVar5 = PTR_DAT_04bb3740;
  puVar4 = PTR_DAT_04bb3350;
  puVar3 = PTR_DAT_04bb27c0;
  uVar15 = 0;
  puVar1 = PTR_DAT_04bb3750 + 0x10;
  puVar2 = PTR_DAT_04bb3070 + 0x10;
  do {
    if (((1 << (ulong)((uint)uVar15 & 0x1f) & param_2 & 0xff) != 0) &&
       ((long)uVar15 < (long)(int)*(uint *)(param_1 + 0x278))) {
      if (uVar15 < *(uint *)(param_1 + 0x278)) {
        lVar12 = *(long *)(*(long *)(param_1 + 0x280) + uVar15 * 8);
        lVar11 = *(long *)puVar3;
      }
      else {
        lVar12 = 0;
        lVar11 = *(long *)puVar3;
      }
      if (lVar11 != 0) {
        uVar13 = *(uint *)(lVar12 + 0x40);
        if ((((uVar13 == 0) ||
             (plVar14 = *(long **)(*(long *)(*(long *)(lVar11 + 0x1c0) + 8) +
                                  ((ulong)(uVar13 >> 0x11) & 0x7ff8)), plVar14 == (long *)0x0)) ||
            ((*(uint *)(plVar14 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar14 + 0x46) != uVar13)) {
          plVar14 = (long *)0x0;
        }
        if (*(int *)(lVar11 + 0x288) == 1 || *(int *)(lVar11 + 0x288) == -1) {
          plVar9 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar4 + 0x68));
          lVar12 = *(long *)puVar3;
          iVar7 = (**(code **)(*plVar9 + 0x60))();
          if (iVar7 < 0x11) {
            uVar13 = 1;
          }
          else {
            if (4 < *(uint *)(lVar12 + 0x5e8)) goto LAB_0368e1ac;
            uVar13 = 0x1aU >> (ulong)(*(uint *)(lVar12 + 0x5e8) & 0x1f) & 1;
          }
        }
        else {
LAB_0368e1ac:
          uVar13 = 0;
        }
        if (plVar14 != (long *)0x0) {
          if (((*puVar6 & 1) == 0) && (iVar7 = __cxa_guard_acquire(puVar6), iVar7 != 0)) {
            *(undefined **)puVar5 = puVar1;
            __cxa_guard_release(puVar6);
          }
          uVar8 = (**(code **)(*plVar14 + 0x20))(plVar14,puVar5);
          if (((uVar13 & uVar8) == 1) && (plVar14 = (long *)plVar14[0xc], plVar14 != (long *)0x0)) {
            if (((*PTR_DAT_04bb37b8 & 1) == 0) &&
               (iVar7 = __cxa_guard_acquire(PTR_DAT_04bb37b8), iVar7 != 0)) {
              *(undefined **)PTR_DAT_04bb37b0 = puVar2;
              __cxa_guard_release(PTR_DAT_04bb37b8);
            }
            uVar10 = (**(code **)(*plVar14 + 0x10))(plVar14,PTR_DAT_04bb37b0);
            if ((uVar10 & 1) != 0) {
              (**(code **)(*plVar14 + 0x4e8))(plVar14,param_3 & 1);
            }
          }
        }
      }
    }
    uVar15 = uVar15 + 1;
    if (uVar15 == 7) {
      return;
    }
  } while( true );
}


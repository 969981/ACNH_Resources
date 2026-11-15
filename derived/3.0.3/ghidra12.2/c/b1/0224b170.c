
undefined4 FUN_0224b170(long param_1,long *param_2)

{
  undefined *puVar1;
  long lVar2;
  uint uVar3;
  char cVar4;
  undefined *puVar5;
  int iVar6;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  char *pcVar10;
  char *pcVar11;
  long *plVar12;
  uint uVar13;
  undefined4 *puVar14;
  long lVar15;
  long lVar16;
  
  puVar14 = (undefined4 *)PTR_DAT_04bb3238;
  puVar5 = PTR_DAT_04bb27c0;
  if (*(int *)(param_1 + 0x10) != 0) {
    lVar16 = *(long *)(param_1 + 0x18);
    lVar15 = 0;
    lVar2 = lVar16 + (long)*(int *)(param_1 + 0x10) * 8;
    puVar1 = PTR_DAT_04bb2e50 + 0x10;
    do {
      lVar9 = *(long *)puVar5;
      if (lVar9 != 0) {
        uVar13 = **(uint **)(*(long *)(param_1 + 0x18) + lVar15 * 8);
        if ((((uVar13 == 0) ||
             (plVar12 = *(long **)(*(long *)(*(long *)(lVar9 + 0x1c0) + 8) +
                                  ((ulong)(uVar13 >> 0x11) & 0x7ff8)), plVar12 == (long *)0x0)) ||
            ((*(uint *)(plVar12 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar12 + 0x46) != uVar13)) {
          plVar12 = (long *)0x0;
        }
        if (*(int *)(lVar9 + 0x288) == 1 || *(int *)(lVar9 + 0x288) == -1) {
          plVar7 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
          lVar9 = *(long *)puVar5;
          iVar6 = (**(code **)(*plVar7 + 0x60))();
          if (iVar6 < 0x11) {
            uVar13 = 1;
          }
          else {
            uVar13 = *(uint *)(lVar9 + 0x5e8);
            if (4 < uVar13) goto LAB_0224b284;
            uVar13 = 0x1aU >> (ulong)(uVar13 & 0x1f) & 1;
          }
        }
        else {
LAB_0224b284:
          uVar13 = 0;
        }
        if (plVar12 != (long *)0x0) {
          lVar9 = plVar12[0x2a];
          if (((*PTR_DAT_04bb3b60 & 1) == 0) &&
             (iVar6 = __cxa_guard_acquire(PTR_DAT_04bb3b60), iVar6 != 0)) {
            *(undefined **)PTR_DAT_04bb3b58 = puVar1;
            __cxa_guard_release(PTR_DAT_04bb3b60);
          }
          uVar8 = (**(code **)(*plVar12 + 0x20))(plVar12,PTR_DAT_04bb3b58);
          uVar3 = 0;
          if ((int)lVar9 == 1) {
            uVar3 = uVar13;
          }
          if (((uVar8 & 1) != 0) && (uVar3 != 0)) {
            (**(code **)(*param_2 + 0x18))(param_2);
            (**(code **)(*param_2 + 0x18))(param_2);
            pcVar11 = (char *)param_2[1];
            (**(code **)(plVar12[0x70] + 0x18))(plVar12 + 0x70);
            pcVar10 = (char *)plVar12[0x71];
            if (pcVar11 == pcVar10) {
LAB_0224b3c0:
              puVar14 = *(undefined4 **)(*(long *)(param_1 + 0x18) + lVar15 * 8);
              break;
            }
            cVar4 = *(char *)param_2[1];
            if (cVar4 == *pcVar10) {
              if (cVar4 == '\0') goto LAB_0224b3c0;
              lVar9 = 0x7fffe;
              pcVar11 = (char *)param_2[1];
              while( true ) {
                if (pcVar11[1] != pcVar10[1]) break;
                if (pcVar11[1] == '\0') goto LAB_0224b3c0;
                if (pcVar11[2] != pcVar10[2]) break;
                if (pcVar11[2] == '\0') goto LAB_0224b3c0;
                if ((lVar9 == 0) || (cVar4 = pcVar11[3], cVar4 != pcVar10[3])) break;
                lVar9 = lVar9 + -3;
                pcVar10 = pcVar10 + 3;
                pcVar11 = pcVar11 + 3;
                if (cVar4 == '\0') goto LAB_0224b3c0;
              }
            }
          }
        }
      }
      lVar16 = lVar16 + 8;
      lVar15 = lVar15 + 1;
    } while (lVar16 != lVar2);
  }
  return *puVar14;
}


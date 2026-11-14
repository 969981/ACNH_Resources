
uint FUN_018db4f8(byte param_1,char param_2)

{
  uint uVar1;
  undefined *puVar2;
  int iVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  uint *puVar8;
  char cVar9;
  long *plVar10;
  uint uVar11;
  uint local_44;
  
  puVar2 = PTR_DAT_04bb27c0;
  lVar6 = *(long *)PTR_DAT_04bb27c0;
  if (lVar6 != 0) {
    uVar11 = *(uint *)PTR_DAT_04bb4b88;
    if ((((uVar11 == 0) ||
         (plVar10 = *(long **)(*(long *)(*(long *)(lVar6 + 0x1c0) + 8) +
                              ((ulong)(uVar11 >> 0x11) & 0x7ff8)), plVar10 == (long *)0x0)) ||
        ((*(uint *)(plVar10 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar10 + 0x46) != uVar11)) {
      plVar10 = (long *)0x0;
    }
    if (*(int *)(lVar6 + 0x288) == 1 || *(int *)(lVar6 + 0x288) == -1) {
      plVar4 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      lVar6 = *(long *)puVar2;
      iVar3 = (**(code **)(*plVar4 + 0x60))();
      if (iVar3 < 0x11) {
        uVar11 = 1;
      }
      else {
        if (4 < *(uint *)(lVar6 + 0x5e8)) goto LAB_018db5c4;
        uVar11 = 0x1aU >> (ulong)(*(uint *)(lVar6 + 0x5e8) & 0x1f) & 1;
      }
    }
    else {
LAB_018db5c4:
      uVar11 = 0;
    }
    if (plVar10 != (long *)0x0) {
      lVar6 = plVar10[0x2a];
      if (((*PTR_DAT_04bb4b78 & 1) == 0) &&
         (iVar3 = __cxa_guard_acquire(PTR_DAT_04bb4b78), iVar3 != 0)) {
        *(undefined **)PTR_DAT_04bb4b70 = PTR_DAT_04bb2e50 + 0x10;
        __cxa_guard_release(PTR_DAT_04bb4b78);
      }
      uVar5 = (**(code **)(*plVar10 + 0x20))(plVar10,PTR_DAT_04bb4b70);
      uVar1 = 0;
      if ((int)lVar6 == 1) {
        uVar1 = uVar11;
      }
      if (((uVar5 & 1) != 0) && (uVar1 != 0)) {
        lVar6 = plVar10[0x54];
        if (lVar6 == 0) {
          if (param_2 != '\0') goto LAB_018db7ac;
LAB_018db68c:
          puVar8 = (uint *)PTR_DAT_04bb3238;
        }
        else {
          lVar7 = *(long *)(lVar6 + 0x290);
          cVar9 = '\0';
          if (*(long *)(lVar7 + 0x28) == 0) {
LAB_018db648:
            if (cVar9 != param_2) goto LAB_018db7ac;
          }
          else {
            if ((uint)param_1 < *(uint *)(lVar7 + 0x20)) {
              cVar9 = *(char *)(*(long *)(lVar7 + 0x28) + (ulong)param_1);
              goto LAB_018db648;
            }
            if (param_2 != '\0') goto LAB_018db7ac;
          }
          if ((*(int *)(lVar6 + 0x288) < 1) || (*(int *)(lVar7 + 0x10) <= (int)(uint)param_1))
          goto LAB_018db68c;
          puVar8 = (uint *)(*(long *)(lVar7 + 0x18) + (ulong)param_1 * 4);
        }
        local_44 = *puVar8;
        if ((local_44 != 0) && (lVar6 = *(long *)puVar2, lVar6 != 0)) {
          plVar10 = *(long **)(*(long *)(*(long *)(lVar6 + 0x1c0) + 8) +
                              ((ulong)(local_44 >> 0x11) & 0x7ff8));
          if ((plVar10 == (long *)0x0) ||
             (((*(uint *)(plVar10 + 0x49) >> 1 & 1) != 0 || (*(uint *)(plVar10 + 0x46) != local_44))
             )) {
            plVar10 = (long *)0x0;
          }
          if ((*(int *)(lVar6 + 0x288) == 1) || (*(int *)(lVar6 + 0x288) == -1)) {
            plVar4 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
            lVar6 = *(long *)puVar2;
            iVar3 = (**(code **)(*plVar4 + 0x60))();
            if (iVar3 < 0x11) {
              uVar11 = 1;
            }
            else {
              if (4 < *(uint *)(lVar6 + 0x5e8)) goto LAB_018db734;
              uVar11 = 0x1aU >> (ulong)(*(uint *)(lVar6 + 0x5e8) & 0x1f) & 1;
            }
          }
          else {
LAB_018db734:
            uVar11 = 0;
          }
          if (plVar10 != (long *)0x0) {
            lVar6 = plVar10[0x2a];
            if (((*PTR_DAT_04bb3ff0 & 1) == 0) &&
               (iVar3 = __cxa_guard_acquire(PTR_DAT_04bb3ff0), iVar3 != 0)) {
              *(undefined **)PTR_DAT_04bb3fe8 = PTR_DAT_04bb3fd0 + 0x10;
              __cxa_guard_release(PTR_DAT_04bb3ff0);
            }
            uVar5 = (**(code **)(*plVar10 + 0x20))(plVar10,PTR_DAT_04bb3fe8);
            uVar1 = 0;
            if ((int)lVar6 == 1) {
              uVar1 = uVar11;
            }
            puVar8 = (uint *)PTR_DAT_04bb3238;
            if (((((uVar5 & 1) != 0) && (uVar1 != 0)) && ((int)plVar10[0x5a] != 2)) &&
               (*(char *)((long)plVar10 + 0x32d) != '\0')) {
              puVar8 = &local_44;
            }
            goto LAB_018db7b4;
          }
        }
      }
    }
  }
LAB_018db7ac:
  puVar8 = (uint *)PTR_DAT_04bb3238;
LAB_018db7b4:
  return *puVar8;
}


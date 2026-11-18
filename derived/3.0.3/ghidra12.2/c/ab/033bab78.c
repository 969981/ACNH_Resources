
uint FUN_033bab78(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  
  puVar2 = PTR_DAT_04bb43c0;
  puVar1 = PTR_DAT_04bb27c0;
  uVar5 = 0;
  switch(*(undefined4 *)(param_1 + 0x70)) {
  case 1:
    lVar9 = *(long *)PTR_DAT_04bb27c0;
    if (lVar9 != 0) {
      uVar5 = *(uint *)(param_1 + 0x6c);
      if (((uVar5 == 0) ||
          (plVar10 = *(long **)(*(long *)(*(long *)(lVar9 + 0x1c0) + 8) +
                               ((ulong)(uVar5 >> 0x11) & 0x7ff8)), plVar10 == (long *)0x0)) ||
         (((*(uint *)(plVar10 + 0x49) >> 1 & 1) != 0 || (*(uint *)(plVar10 + 0x46) != uVar5)))) {
        plVar10 = (long *)0x0;
      }
      if (*(int *)(lVar9 + 0x288) == 1 || *(int *)(lVar9 + 0x288) == -1) {
        plVar7 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        lVar9 = *(long *)puVar1;
        iVar4 = (**(code **)(*plVar7 + 0x60))();
        if (iVar4 < 0x11) {
          uVar5 = 1;
        }
        else {
          if (4 < *(uint *)(lVar9 + 0x5e8)) goto LAB_033bad08;
          uVar5 = 0x1aU >> (ulong)(*(uint *)(lVar9 + 0x5e8) & 0x1f) & 1;
        }
      }
      else {
LAB_033bad08:
        uVar5 = 0;
      }
      if (plVar10 != (long *)0x0) {
        lVar9 = plVar10[0x2a];
        if (((*PTR_DAT_04bb3748 & 1) == 0) &&
           (iVar4 = __cxa_guard_acquire(PTR_DAT_04bb3748), iVar4 != 0)) {
          *(undefined **)PTR_DAT_04bb3740 = PTR_DAT_04bb3750 + 0x10;
          __cxa_guard_release(PTR_DAT_04bb3748);
        }
        uVar8 = (**(code **)(*plVar10 + 0x20))(plVar10,PTR_DAT_04bb3740);
        uVar6 = 0;
        if ((int)lVar9 == 1) {
          uVar6 = uVar5;
        }
        if ((uVar8 & 1) == 0) {
          return 1;
        }
        if (uVar6 == 0) {
          return 1;
        }
        return (uint)(*(char *)((long)plVar10 + 0x469) != '\0');
      }
    }
  default:
switchD_033babb8_caseD_2:
    uVar5 = 1;
    break;
  case 3:
  case 5:
  case 6:
  case 7:
  case 8:
    break;
  case 4:
    lVar9 = param_1 + 0x94;
    lVar11 = *(long *)PTR_DAT_04bb43c0;
    uVar5 = FUN_0277d6c4(lVar9);
    if (*(long *)puVar2 != 0) {
      lVar11 = *(long *)(lVar11 + 0x57e58);
      uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
      if (((uVar5 < *(uint *)(lVar11 + 0x1d8)) &&
          (*(long *)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar5 * 8) != 0)) &&
         ((*(byte *)(param_1 + 0x74) >> 2 & 1) == 0)) {
        uVar5 = *(uint *)(param_1 + 0x50);
        if (uVar5 < 0x12) {
          uVar6 = 1 << (ulong)(uVar5 & 0x1f);
          if ((uVar6 & 0x22828) != 0) {
            uVar6 = FUN_01a35d2c(lVar9);
            uVar5 = 0x93df06;
            bVar3 = 0x17 < uVar6;
LAB_033bacf8:
            return (uint)!bVar3 & uVar5 >> (ulong)(uVar6 & 0x1f);
          }
          if ((uVar6 & 0x140) != 0) goto LAB_033bad80;
          if (uVar5 == 2) {
            uVar6 = FUN_01a35a40(lVar9);
            uVar5 = 0x1ff050;
            bVar3 = 0x15 < uVar6;
            goto LAB_033bacf8;
          }
        }
        goto switchD_033babb8_caseD_2;
      }
    }
LAB_033bad80:
    uVar5 = 0;
  }
  return uVar5;
}


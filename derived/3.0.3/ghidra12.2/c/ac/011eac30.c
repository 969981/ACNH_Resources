
bool FUN_011eac30(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  int iVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  uint uVar8;
  long *local_48;
  char local_40;
  char local_3e;
  uint local_34;
  
  puVar2 = PTR_DAT_04bb27c0;
  if (**(char **)(PTR_DAT_04bc3a88 + 8) != '\0') {
    return true;
  }
  local_34 = DAT_050dfb28;
  if (DAT_050dfb28 == 0) {
    return true;
  }
  lVar6 = *(long *)PTR_DAT_04bb27c0;
  if (lVar6 == 0) {
    return true;
  }
  plVar7 = *(long **)(*(long *)(*(long *)(lVar6 + 0x1c0) + 8) +
                     ((ulong)(DAT_050dfb28 >> 0x11) & 0x7ff8));
  if (((plVar7 == (long *)0x0) || ((*(uint *)(plVar7 + 0x49) >> 1 & 1) != 0)) ||
     (*(uint *)(plVar7 + 0x46) != DAT_050dfb28)) {
    plVar7 = (long *)0x0;
  }
  if (*(int *)(lVar6 + 0x288) == 1 || *(int *)(lVar6 + 0x288) == -1) {
    plVar4 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar6 = *(long *)puVar2;
    iVar3 = (**(code **)(*plVar4 + 0x60))();
    if (iVar3 < 0x11) {
      uVar8 = 1;
      goto joined_r0x011eae54;
    }
    if (*(uint *)(lVar6 + 0x5e8) < 5) {
      uVar8 = 0x1aU >> (ulong)(*(uint *)(lVar6 + 0x5e8) & 0x1f) & 1;
      goto joined_r0x011eae54;
    }
  }
  uVar8 = 0;
joined_r0x011eae54:
  if (plVar7 == (long *)0x0) {
    return true;
  }
  lVar6 = plVar7[0x2a];
  if (((*PTR_DAT_04bbbb10 & 1) == 0) && (iVar3 = __cxa_guard_acquire(PTR_DAT_04bbbb10), iVar3 != 0))
  {
    *(undefined **)PTR_DAT_04bbbb08 = PTR_DAT_04bb2e50 + 0x10;
    __cxa_guard_release(PTR_DAT_04bbbb10);
  }
  uVar5 = (**(code **)(*plVar7 + 0x20))(plVar7,PTR_DAT_04bbbb08);
  uVar1 = 0;
  if ((int)lVar6 == 1) {
    uVar1 = uVar8;
  }
  if ((uVar5 & 1) == 0) {
    return true;
  }
  if (uVar1 == 0) {
    return true;
  }
  iVar3 = (int)plVar7[0x49ef];
  if (0 < iVar3) {
    do {
      if ((((*(ushort *)(plVar7 + 0x5c) >> 3 & 1) != 0) && (*(char *)((long)plVar7 + 0x2e6) < '\0'))
         && ((*(int *)(param_1 + 8) == (int)plVar7[0x52] &&
             (*(int *)(param_1 + 0xc) == *(int *)((long)plVar7 + 0x294))))) {
        if ((int)plVar7[0x5b] == 0) {
          return false;
        }
        FUN_0071cb58(&local_48,plVar7 + 0x50,&local_34,0);
        plVar4 = local_48;
        if (local_48 != (long *)0x0) {
          if (((*PTR_DAT_04bbbb50 & 1) == 0) &&
             (iVar3 = __cxa_guard_acquire(PTR_DAT_04bbbb50), iVar3 != 0)) {
            *(undefined **)PTR_DAT_04bbbb48 = PTR_DAT_04bbbaf0 + 0x10;
            __cxa_guard_release(PTR_DAT_04bbbb50);
          }
          uVar5 = (**(code **)(*plVar4 + 0x20))(plVar4,PTR_DAT_04bbbb48);
          if ((uVar5 & 1) == 0) {
            local_3e = '\0';
          }
        }
        if (local_48 == (long *)0x0) {
          return false;
        }
        if (local_40 == '\0') {
          return false;
        }
        if (local_3e == '\0') {
          return false;
        }
        plVar4 = local_48 + 0x4f + (ulong)*(uint *)(plVar7 + 0x5a) * 0x24;
        if (999 < *(uint *)(plVar7 + 0x5a)) {
          plVar4 = local_48 + 0x4f;
        }
        if (*(int *)((long)plVar4 + 0xfc) == 4) {
          return false;
        }
        return (int)plVar4[0x20] == 0;
      }
      iVar3 = iVar3 + -1;
      plVar7 = plVar7 + 0xf;
    } while (iVar3 != 0);
  }
  return false;
}



undefined8 FUN_011eb1b0(long param_1,byte *param_2)

{
  long *plVar1;
  int iVar2;
  ulong uVar3;
  int *piVar4;
  long *plVar5;
  long *local_48;
  char local_40;
  char local_3f;
  long *local_38;
  char local_30;
  char local_2f;
  int local_28;
  int local_24;
  
  if (**(char **)(PTR_DAT_04bc3a88 + 8) != '\0') {
    return 0;
  }
  local_24 = DAT_050dfb28;
  if (DAT_050dfb28 != 0) {
    if (((ulong)*param_2 < 8) && (*(long *)PTR_DAT_04bb4718 != 0)) {
      piVar4 = (int *)(*(long *)PTR_DAT_04bb4718 + (ulong)*param_2 * 4 + 0xde8);
    }
    else {
      piVar4 = (int *)PTR_DAT_04bb3238;
    }
    local_28 = *piVar4;
    if (local_28 != 0) {
      FUN_0071c8d0(&local_38,&local_24,&local_28,0);
      plVar5 = local_38;
      if (local_38 != (long *)0x0) {
        if (((*PTR_DAT_04bbbb10 & 1) == 0) &&
           (iVar2 = __cxa_guard_acquire(PTR_DAT_04bbbb10), iVar2 != 0)) {
          *(undefined **)PTR_DAT_04bbbb08 = PTR_DAT_04bb2e50 + 0x10;
          __cxa_guard_release(PTR_DAT_04bbbb10);
        }
        uVar3 = (**(code **)(*plVar5 + 0x20))(plVar5,PTR_DAT_04bbbb08);
        if ((uVar3 & 1) == 0) {
          local_2f = '\0';
        }
      }
      if (local_38 == (long *)0x0) {
        return 0;
      }
      if (local_30 == '\0') {
        return 0;
      }
      if (local_2f == '\0') {
        return 0;
      }
      iVar2 = (int)local_38[0x49ef];
      if (0 < iVar2) {
        plVar5 = local_38;
        do {
          if (((((*(ushort *)(plVar5 + 0x5c) >> 3 & 1) != 0) &&
               (*(char *)((long)plVar5 + 0x2e6) < '\0')) &&
              (*(int *)(param_1 + 8) == (int)plVar5[0x52])) &&
             (*(int *)(param_1 + 0xc) == *(int *)((long)plVar5 + 0x294))) {
            if ((int)plVar5[0x5b] == 0) {
              return 0;
            }
            FUN_0071c8d0(&local_48,plVar5 + 0x50,&local_24,0);
            plVar1 = local_48;
            if (local_48 != (long *)0x0) {
              if (((*PTR_DAT_04bbbb50 & 1) == 0) &&
                 (iVar2 = __cxa_guard_acquire(PTR_DAT_04bbbb50), iVar2 != 0)) {
                *(undefined **)PTR_DAT_04bbbb48 = PTR_DAT_04bbbaf0 + 0x10;
                __cxa_guard_release(PTR_DAT_04bbbb50);
              }
              uVar3 = (**(code **)(*plVar1 + 0x20))(plVar1,PTR_DAT_04bbbb48);
              if ((uVar3 & 1) == 0) {
                local_3f = '\0';
              }
            }
            if (local_48 == (long *)0x0) {
              return 0;
            }
            if (local_40 == '\0') {
              return 0;
            }
            if (local_3f == '\0') {
              return 0;
            }
            uVar3 = FUN_011cc664(local_48,(int)plVar5[0x5a]);
            if ((uVar3 & 1) == 0) {
              return 0;
            }
            *(ushort *)(plVar5 + 0x5c) = *(ushort *)(plVar5 + 0x5c) | 4;
            return 1;
          }
          iVar2 = iVar2 + -1;
          plVar5 = plVar5 + 0xf;
        } while (iVar2 != 0);
      }
    }
  }
  return 0;
}


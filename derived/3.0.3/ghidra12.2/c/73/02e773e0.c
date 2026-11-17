
void FUN_02e773e0(long param_1)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  int local_54;
  undefined *local_50;
  undefined4 local_48;
  int local_28 [2];
  
  puVar1 = PTR_DAT_04bb4b48;
  lVar3 = *(long *)(DAT_05231900 + 0x148);
  if (lVar3 != 0) {
    if (((*(uint *)(lVar3 + 0xfc) >> 1 & 1) != 0) || ((*(uint *)(lVar3 + 0xfc) & 1) != 0)) {
      local_28[0] = *(int *)PTR_DAT_04bb4b48;
      FUN_033fb3f0(local_28);
      local_28[1] = 0;
      lVar3 = *(long *)(param_1 + 0x1c540);
      while (lVar3 != 0) {
        if (*(int *)(lVar3 + 0x20) < 1) {
          if (-1 < *(int *)(lVar3 + 0x20)) {
            if (local_28[0] != *(int *)puVar1) {
              *(int *)(lVar3 + 0x58) = local_28[0];
              iVar2 = FUN_03411f40(param_1 + 0x1c210,(int *)(lVar3 + 0x58));
              *(int *)(lVar3 + 0x5c) = iVar2;
              if (iVar2 != -1) {
                plVar4 = *(long **)(lVar3 + 0x50);
                *(undefined4 *)(lVar3 + 0x60) = 1;
                if ((plVar4 != (long *)0x0) && (plVar4[1] != 0)) {
                  local_50 = PTR_DAT_04bc0cb8 + 0x10;
                  local_48 = 0x14;
                  (**(code **)(*plVar4 + 0x18))(plVar4,&local_50);
                  (**(code **)(plVar4[3] + 0x158))(plVar4[1],0);
                }
              }
            }
            break;
          }
          plVar4 = (long *)(lVar3 + 0x10);
        }
        else {
          plVar4 = (long *)(lVar3 + 8);
        }
        lVar3 = *plVar4;
      }
      lVar3 = *(long *)(DAT_05231900 + 0x148);
      if (lVar3 == 0) {
        return;
      }
    }
    if (*(char *)(lVar3 + 0x518) != '\0') {
      local_28[0] = *(int *)puVar1;
      iVar2 = FUN_01586ec0(0);
      local_54 = 0;
      if (iVar2 != -1) {
        local_54 = iVar2;
      }
      FUN_007d69f0(local_28,&local_54);
      local_28[1] = 1;
      lVar3 = *(long *)(param_1 + 0x1c540);
      while (lVar3 != 0) {
        if (*(int *)(lVar3 + 0x20) < 2) {
          if (0 < *(int *)(lVar3 + 0x20)) {
            if (local_28[0] == *(int *)puVar1) {
              return;
            }
            *(int *)(lVar3 + 0x58) = local_28[0];
            iVar2 = FUN_03411f40(param_1 + 0x1c210,(int *)(lVar3 + 0x58));
            *(int *)(lVar3 + 0x5c) = iVar2;
            if (iVar2 == -1) {
              return;
            }
            plVar4 = *(long **)(lVar3 + 0x50);
            *(undefined4 *)(lVar3 + 0x60) = 1;
            if (plVar4 == (long *)0x0) {
              return;
            }
            if (plVar4[1] == 0) {
              return;
            }
            local_50 = PTR_DAT_04bc0cb8 + 0x10;
            local_48 = 0x14;
            (**(code **)(*plVar4 + 0x18))(plVar4,&local_50);
            (**(code **)(plVar4[3] + 0x158))(plVar4[1],0);
            return;
          }
          plVar4 = (long *)(lVar3 + 0x10);
        }
        else {
          plVar4 = (long *)(lVar3 + 8);
        }
        lVar3 = *plVar4;
      }
    }
  }
  return;
}



void FUN_020c92d0(long param_1,uint *param_2)

{
  uint *puVar1;
  uint uVar2;
  char cVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  bool bVar6;
  int iVar7;
  long *plVar8;
  ulong uVar9;
  long lVar10;
  long *plVar11;
  uint uVar12;
  undefined *local_68;
  undefined1 *local_60;
  undefined4 local_58;
  undefined1 local_54 [31];
  undefined1 local_35;
  
  puVar4 = PTR_DAT_04bb27c0;
  lVar10 = *(long *)PTR_DAT_04bb27c0;
  if (lVar10 == 0) {
    return;
  }
  uVar12 = *param_2;
  if ((((uVar12 == 0) ||
       (plVar11 = *(long **)(*(long *)(*(long *)(lVar10 + 0x1c0) + 8) +
                            ((ulong)(uVar12 >> 0x11) & 0x7ff8)), plVar11 == (long *)0x0)) ||
      ((*(uint *)(plVar11 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar11 + 0x46) != uVar12)) {
    plVar11 = (long *)0x0;
  }
  if (*(int *)(lVar10 + 0x288) == 1 || *(int *)(lVar10 + 0x288) == -1) {
    plVar8 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar10 = *(long *)puVar4;
    iVar7 = (**(code **)(*plVar8 + 0x60))();
    if (iVar7 < 0x11) {
      uVar12 = 1;
      goto joined_r0x020c9390;
    }
    if (*(uint *)(lVar10 + 0x5e8) < 5) {
      uVar12 = 0x1aU >> (ulong)(*(uint *)(lVar10 + 0x5e8) & 0x1f) & 1;
      goto joined_r0x020c9390;
    }
  }
  uVar12 = 0;
joined_r0x020c9390:
  if (plVar11 != (long *)0x0) {
    lVar10 = plVar11[0x2a];
    if (((*PTR_DAT_04bb37d8 & 1) == 0) &&
       (iVar7 = __cxa_guard_acquire(PTR_DAT_04bb37d8), iVar7 != 0)) {
      *(undefined **)PTR_DAT_04bb37d0 = PTR_DAT_04bb3750 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb37d8);
    }
    uVar9 = (**(code **)(*plVar11 + 0x20))(plVar11,PTR_DAT_04bb37d0);
    uVar2 = 0;
    if ((int)lVar10 == 1) {
      uVar2 = uVar12;
    }
    if (((uVar9 & 1) != 0) && (uVar2 != 0)) {
      local_35 = 0;
      local_58 = 0x20;
      local_60 = local_54;
      local_54[0] = 0;
      local_68 = PTR_DAT_04bb2028 + 0x10;
      FUN_021d7aa0(&local_68,plVar11 + 0x7c);
      (**(code **)(local_68 + 0x18))(&local_68);
      (**(code **)(local_68 + 0x18))(&local_68);
      puVar5 = local_60;
      (**(code **)(*(long *)(param_1 + 8) + 0x18))(param_1 + 8);
      if (puVar5 != *(undefined1 **)(param_1 + 0x10)) {
        uVar9 = 0;
        puVar1 = (uint *)(plVar11 + 0x49);
        bVar6 = true;
        do {
          if (local_60[uVar9] != (*(undefined1 **)(param_1 + 0x10))[uVar9]) break;
          if (local_60[uVar9] == '\0') {
            if (bVar6) {
              return;
            }
            break;
          }
          bVar6 = uVar9 < 0x80000;
          uVar9 = uVar9 + 1;
        } while (uVar9 != 0x80001);
        if ((((*puVar1 >> 9 & 1) == 0) && ((*puVar1 >> 1 & 1) == 0)) && ((*puVar1 >> 8 & 1) == 0)) {
          do {
            cVar3 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar6) {
              *puVar1 = *puVar1 | 0x200;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if ((long *)plVar11[0x16] != plVar11 + 0x15) {
            lVar10 = (long)*(int *)((long)plVar11 + 0xbc);
            plVar8 = (long *)(plVar11[0x16] - lVar10);
            do {
              (**(code **)(*plVar8 + 0xb0))(plVar8);
              plVar8 = (long *)(*(long *)((long)plVar8 + lVar10 + 8) - lVar10);
            } while (plVar8 != (long *)((long)(plVar11 + 0x15) - lVar10));
          }
        }
      }
    }
  }
  return;
}


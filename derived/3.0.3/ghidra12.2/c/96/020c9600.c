
void FUN_020c9600(undefined8 param_1,uint *param_2)

{
  uint *puVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  int iVar6;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  long *plVar10;
  uint uVar11;
  
  puVar5 = PTR_DAT_04bb27c0;
  lVar9 = *(long *)PTR_DAT_04bb27c0;
  if (lVar9 == 0) {
    return;
  }
  uVar11 = *param_2;
  if ((((uVar11 == 0) ||
       (plVar10 = *(long **)(*(long *)(*(long *)(lVar9 + 0x1c0) + 8) +
                            ((ulong)(uVar11 >> 0x11) & 0x7ff8)), plVar10 == (long *)0x0)) ||
      ((*(uint *)(plVar10 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar10 + 0x46) != uVar11)) {
    plVar10 = (long *)0x0;
  }
  if (*(int *)(lVar9 + 0x288) == 1 || *(int *)(lVar9 + 0x288) == -1) {
    plVar7 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar9 = *(long *)puVar5;
    iVar6 = (**(code **)(*plVar7 + 0x60))();
    if (iVar6 < 0x11) {
      uVar11 = 1;
      goto joined_r0x020c96b8;
    }
    if (*(uint *)(lVar9 + 0x5e8) < 5) {
      uVar11 = 0x1aU >> (ulong)(*(uint *)(lVar9 + 0x5e8) & 0x1f) & 1;
      goto joined_r0x020c96b8;
    }
  }
  uVar11 = 0;
joined_r0x020c96b8:
  if (plVar10 != (long *)0x0) {
    lVar9 = plVar10[0x2a];
    if (((*PTR_DAT_04bb37d8 & 1) == 0) &&
       (iVar6 = __cxa_guard_acquire(PTR_DAT_04bb37d8), iVar6 != 0)) {
      *(undefined **)PTR_DAT_04bb37d0 = PTR_DAT_04bb3750 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb37d8);
    }
    uVar8 = (**(code **)(*plVar10 + 0x20))(plVar10,PTR_DAT_04bb37d0);
    uVar2 = 0;
    if ((int)lVar9 == 1) {
      uVar2 = uVar11;
    }
    if ((((((uVar8 & 1) != 0) && (uVar2 != 0)) &&
         ((puVar1 = (uint *)(plVar10 + 0x49), (*puVar1 >> 9 & 1) != 0 || ((*puVar1 >> 8 & 1) != 0)))
         ) && (((*puVar1 >> 10 & 1) == 0 && ((*puVar1 >> 1 & 1) == 0)))) &&
       (((*puVar1 >> 9 & 1) != 0 || ((*puVar1 >> 8 & 1) != 0)))) {
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar4) {
          *puVar1 = *puVar1 | 0x400;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if ((long *)plVar10[0x16] != plVar10 + 0x15) {
        lVar9 = (long)*(int *)((long)plVar10 + 0xbc);
        plVar7 = (long *)(plVar10[0x16] - lVar9);
        do {
          (**(code **)(*plVar7 + 0xb8))(plVar7);
          plVar7 = (long *)(*(long *)((long)plVar7 + lVar9 + 8) - lVar9);
        } while (plVar7 != (long *)((long)(plVar10 + 0x15) - lVar9));
      }
    }
  }
  return;
}


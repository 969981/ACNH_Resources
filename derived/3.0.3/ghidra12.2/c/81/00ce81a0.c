
void FUN_00ce81a0(undefined8 param_1,uint *param_2)

{
  uint *puVar1;
  char cVar2;
  long lVar3;
  undefined *puVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  long *plVar8;
  long lVar9;
  ulong uVar10;
  char *pcVar11;
  long *plVar12;
  uint uVar13;
  
  puVar4 = PTR_DAT_04bb27c0;
  lVar9 = *(long *)PTR_DAT_04bb27c0;
  if (lVar9 == 0) {
    return;
  }
  uVar13 = *param_2;
  if ((((uVar13 == 0) ||
       (plVar12 = *(long **)(*(long *)(*(long *)(lVar9 + 0x1c0) + 8) +
                            ((ulong)(uVar13 >> 0x11) & 0x7ff8)), plVar12 == (long *)0x0)) ||
      ((*(uint *)(plVar12 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar12 + 0x46) != uVar13)) {
    plVar12 = (long *)0x0;
  }
  if (*(int *)(lVar9 + 0x288) == 1 || *(int *)(lVar9 + 0x288) == -1) {
    plVar8 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar9 = *(long *)puVar4;
    iVar6 = (**(code **)(*plVar8 + 0x60))();
    if (iVar6 < 0x11) {
      uVar13 = 1;
      goto joined_r0x00ce8258;
    }
    if (*(uint *)(lVar9 + 0x5e8) < 5) {
      uVar13 = 0x1aU >> (ulong)(*(uint *)(lVar9 + 0x5e8) & 0x1f) & 1;
      goto joined_r0x00ce8258;
    }
  }
  uVar13 = 0;
joined_r0x00ce8258:
  if (plVar12 != (long *)0x0) {
    lVar9 = plVar12[0x2a];
    if (((*PTR_DAT_04bb37d8 & 1) == 0) &&
       (iVar6 = __cxa_guard_acquire(PTR_DAT_04bb37d8), iVar6 != 0)) {
      *(undefined **)PTR_DAT_04bb37d0 = PTR_DAT_04bb3750 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb37d8);
    }
    uVar7 = (**(code **)(*plVar12 + 0x20))(plVar12,PTR_DAT_04bb37d0);
    if ((((int)lVar9 == 1) && ((uVar13 & uVar7) == 1)) && (plVar12[0x77] != 0)) {
      plVar8 = plVar12 + 0x7c;
      (**(code **)(plVar12[0x7c] + 0x18))(plVar8);
      (**(code **)(plVar12[0x7c] + 0x18))(plVar8);
      if ((undefined1 *)plVar12[0x7d] != &DAT_0409b647) {
        uVar10 = 0;
        bVar5 = true;
        do {
          cVar2 = ((undefined1 *)plVar12[0x7d])[uVar10];
          if (cVar2 != (&DAT_0409b647)[uVar10]) break;
          if (cVar2 == '\0') {
            if (bVar5) goto LAB_00ce839c;
            break;
          }
          bVar5 = uVar10 < 0x80000;
          uVar10 = uVar10 + 1;
        } while (uVar10 != 0x80001);
        (**(code **)(plVar12[0x7c] + 0x18))(plVar8);
        (**(code **)(plVar12[0x7c] + 0x18))(plVar8);
        pcVar11 = (char *)plVar12[0x7d];
        if (pcVar11 != "man") {
          if (*pcVar11 != 'm') {
            return;
          }
          lVar9 = 0;
          do {
            if (lVar9 == 0x80000) {
              return;
            }
            lVar3 = lVar9 + 1;
            if (pcVar11[lVar3] != (&DAT_040ee9d8)[lVar9]) {
              return;
            }
            lVar9 = lVar9 + 1;
          } while (pcVar11[lVar3] != '\0');
        }
      }
LAB_00ce839c:
      *(undefined4 *)(*(long *)(plVar12[0x12] + 0x278) + 0x40) = 0;
      if ((((*(uint *)(plVar12 + 0x49) >> 9 & 1) == 0) &&
          (puVar1 = (uint *)(plVar12 + 0x49), (*puVar1 >> 1 & 1) == 0)) && ((*puVar1 >> 8 & 1) == 0)
         ) {
        do {
          cVar2 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar5) {
            *puVar1 = *puVar1 | 0x200;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if ((long *)plVar12[0x16] != plVar12 + 0x15) {
          lVar9 = (long)*(int *)((long)plVar12 + 0xbc);
          plVar8 = (long *)(plVar12[0x16] - lVar9);
          do {
            (**(code **)(*plVar8 + 0xb0))(plVar8);
            plVar8 = (long *)(*(long *)((long)plVar8 + lVar9 + 8) - lVar9);
          } while (plVar8 != (long *)((long)(plVar12 + 0x15) - lVar9));
        }
      }
    }
  }
  return;
}


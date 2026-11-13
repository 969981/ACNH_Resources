
void FUN_013cf9c0(long param_1,ulong param_2)

{
  undefined *puVar1;
  uint *puVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  undefined *puVar6;
  int iVar7;
  long *plVar8;
  ulong uVar9;
  byte bVar10;
  long lVar11;
  uint uVar12;
  long *plVar13;
  uint uVar14;
  
  if ((param_2 & 1) == 0) {
    bVar10 = *(byte *)(param_1 + 0x5a9) & 0xfd;
  }
  else {
    bVar10 = *(byte *)(param_1 + 0x5a9) | 2;
  }
  *(byte *)(param_1 + 0x5a9) = bVar10;
  puVar6 = PTR_DAT_04bb27c0;
  bVar10 = 0;
  uVar14 = 0;
  puVar1 = PTR_DAT_04bb2e50 + 0x10;
  do {
    if (bVar10 < 0x14) {
      if (((int)(char)bVar10 < (int)(uint)*(byte *)(param_1 + 0x59a)) ||
         ((int)(char)bVar10 <
          (int)((uint)*(byte *)(param_1 + 0x59b) + (uint)*(byte *)(param_1 + 0x59a)))) {
        lVar11 = *(long *)puVar6;
        if (lVar11 != 0) {
          uVar12 = *(uint *)(param_1 + 0x4f8 + ((long)((ulong)uVar14 << 0x20) >> 0x1d));
          if ((((uVar12 == 0) ||
               (plVar13 = *(long **)(*(long *)(*(long *)(lVar11 + 0x1c0) + 8) +
                                    ((ulong)(uVar12 >> 0x11) & 0x7ff8)), plVar13 == (long *)0x0)) ||
              ((*(uint *)(plVar13 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar13 + 0x46) != uVar12))
          {
            plVar13 = (long *)0x0;
          }
          if (*(int *)(lVar11 + 0x288) == 1 || *(int *)(lVar11 + 0x288) == -1) {
            plVar8 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
            lVar11 = *(long *)puVar6;
            iVar7 = (**(code **)(*plVar8 + 0x60))();
            if (iVar7 < 0x11) {
              uVar12 = 1;
            }
            else {
              uVar12 = *(uint *)(lVar11 + 0x5e8);
              if (4 < uVar12) goto LAB_013cfb84;
              uVar12 = 0x1aU >> (ulong)(uVar12 & 0x1f) & 1;
            }
          }
          else {
LAB_013cfb84:
            uVar12 = 0;
          }
          if (plVar13 != (long *)0x0) {
            lVar11 = plVar13[0x2a];
            if (((*PTR_DAT_04bbc7b8 & 1) == 0) &&
               (iVar7 = __cxa_guard_acquire(PTR_DAT_04bbc7b8), iVar7 != 0)) {
              *(undefined **)PTR_DAT_04bbc7b0 = puVar1;
              __cxa_guard_release(PTR_DAT_04bbc7b8);
            }
            uVar9 = (**(code **)(*plVar13 + 0x20))(plVar13,PTR_DAT_04bbc7b0);
            uVar3 = 0;
            if ((int)lVar11 == 1) {
              uVar3 = uVar12;
            }
            if (((uVar9 & 1) != 0) && (uVar3 != 0)) {
              puVar2 = (uint *)(plVar13 + 0x49);
              if ((param_2 & 1) == 0) {
                if ((((*puVar2 >> 9 & 1) == 0) && ((*puVar2 >> 1 & 1) == 0)) &&
                   ((*puVar2 >> 8 & 1) == 0)) {
                  do {
                    cVar4 = '\x01';
                    bVar5 = (bool)ExclusiveMonitorPass(puVar2,0x10);
                    if (bVar5) {
                      *puVar2 = *puVar2 & 0xfffffdff | 0x200;
                      cVar4 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar4 != '\0');
                  if ((long *)plVar13[0x16] != plVar13 + 0x15) {
                    lVar11 = (long)*(int *)((long)plVar13 + 0xbc);
                    plVar8 = (long *)(plVar13[0x16] - lVar11);
                    do {
                      (**(code **)(*plVar8 + 0xb0))(plVar8);
                      plVar8 = (long *)(*(long *)((long)plVar8 + lVar11 + 8) - lVar11);
                    } while (plVar8 != (long *)((long)(plVar13 + 0x15) - lVar11));
                  }
                }
              }
              else if ((((*puVar2 >> 10 & 1) == 0) && ((*puVar2 >> 1 & 1) == 0)) &&
                      (((*puVar2 >> 9 & 1) != 0 || ((*puVar2 >> 8 & 1) != 0)))) {
                do {
                  cVar4 = '\x01';
                  bVar5 = (bool)ExclusiveMonitorPass(puVar2,0x10);
                  if (bVar5) {
                    *puVar2 = *puVar2 & 0xfffffbff | 0x400;
                    cVar4 = ExclusiveMonitorsStatus();
                  }
                } while (cVar4 != '\0');
                if ((long *)plVar13[0x16] != plVar13 + 0x15) {
                  lVar11 = (long)*(int *)((long)plVar13 + 0xbc);
                  plVar8 = (long *)(plVar13[0x16] - lVar11);
                  do {
                    (**(code **)(*plVar8 + 0xb8))(plVar8);
                    plVar8 = (long *)(*(long *)((long)plVar8 + lVar11 + 8) - lVar11);
                  } while (plVar8 != (long *)((long)(plVar13 + 0x15) - lVar11));
                }
              }
            }
          }
        }
        bVar10 = bVar10 + 1;
      }
    }
    uVar14 = uVar14 + 1;
    if (uVar14 == 0x14) {
      return;
    }
  } while( true );
}


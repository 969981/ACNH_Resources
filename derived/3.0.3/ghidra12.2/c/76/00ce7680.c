
void FUN_00ce7680(long param_1,uint *param_2)

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
  undefined4 uVar13;
  uint uVar14;
  float fVar15;
  float fVar16;
  undefined4 local_54;
  undefined8 local_50;
  float local_48;
  
  puVar4 = PTR_DAT_04bb27c0;
  lVar9 = *(long *)PTR_DAT_04bb27c0;
  if (lVar9 == 0) {
    return;
  }
  uVar14 = *param_2;
  if ((((uVar14 == 0) ||
       (plVar12 = *(long **)(*(long *)(*(long *)(lVar9 + 0x1c0) + 8) +
                            ((ulong)(uVar14 >> 0x11) & 0x7ff8)), plVar12 == (long *)0x0)) ||
      ((*(uint *)(plVar12 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar12 + 0x46) != uVar14)) {
    plVar12 = (long *)0x0;
  }
  if (*(int *)(lVar9 + 0x288) == 1 || *(int *)(lVar9 + 0x288) == -1) {
    plVar8 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar9 = *(long *)puVar4;
    iVar6 = (**(code **)(*plVar8 + 0x60))();
    if (iVar6 < 0x11) {
      uVar14 = 1;
      goto joined_r0x00ce7744;
    }
    if (*(uint *)(lVar9 + 0x5e8) < 5) {
      uVar14 = 0x1aU >> (ulong)(*(uint *)(lVar9 + 0x5e8) & 0x1f) & 1;
      goto joined_r0x00ce7744;
    }
  }
  uVar14 = 0;
joined_r0x00ce7744:
  if (plVar12 != (long *)0x0) {
    lVar9 = plVar12[0x2a];
    if (((*PTR_DAT_04bb37d8 & 1) == 0) &&
       (iVar6 = __cxa_guard_acquire(PTR_DAT_04bb37d8), iVar6 != 0)) {
      *(undefined **)PTR_DAT_04bb37d0 = PTR_DAT_04bb3750 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb37d8);
    }
    uVar7 = (**(code **)(*plVar12 + 0x20))(plVar12,PTR_DAT_04bb37d0);
    if ((((int)lVar9 == 1) && ((uVar14 & uVar7) == 1)) && (plVar12[0x77] != 0)) {
      plVar8 = plVar12 + 0x7c;
      (**(code **)(plVar12[0x7c] + 0x18))(plVar8);
      (**(code **)(plVar12[0x7c] + 0x18))(plVar8);
      if ((undefined1 *)plVar12[0x7d] != &DAT_04066e12) {
        uVar10 = 0;
        puVar1 = (uint *)(plVar12 + 0x49);
        bVar5 = true;
        do {
          cVar2 = ((undefined1 *)plVar12[0x7d])[uVar10];
          if (cVar2 != (&DAT_04066e12)[uVar10]) break;
          if (cVar2 == '\0') {
            if (bVar5) goto LAB_00ce78fc;
            break;
          }
          bVar5 = uVar10 < 0x80000;
          uVar10 = uVar10 + 1;
        } while (uVar10 != 0x80001);
        (**(code **)(plVar12[0x7c] + 0x18))(plVar8);
        (**(code **)(plVar12[0x7c] + 0x18))(plVar8);
        if ((undefined1 *)plVar12[0x7d] != &DAT_040bf969) {
          uVar10 = 0;
          bVar5 = true;
          do {
            cVar2 = ((undefined1 *)plVar12[0x7d])[uVar10];
            if (cVar2 != (&DAT_040bf969)[uVar10]) break;
            if (cVar2 == '\0') {
              if (bVar5) goto LAB_00ce78fc;
              break;
            }
            bVar5 = uVar10 < 0x80000;
            uVar10 = uVar10 + 1;
          } while (uVar10 != 0x80001);
          (**(code **)(plVar12[0x7c] + 0x18))(plVar8);
          (**(code **)(plVar12[0x7c] + 0x18))(plVar8);
          pcVar11 = (char *)plVar12[0x7d];
          if (pcVar11 != "rct") {
            if (*pcVar11 != 'r') {
LAB_00ce79fc:
              *(undefined4 *)(*(long *)(plVar12[0x12] + 0x278) + 0x40) = 0;
              if ((*(uint *)(plVar12 + 0x49) >> 9 & 1) != 0) {
                return;
              }
              if ((*puVar1 >> 1 & 1) != 0) {
                return;
              }
              if ((*puVar1 >> 8 & 1) != 0) {
                return;
              }
              do {
                cVar2 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                if (bVar5) {
                  *puVar1 = *puVar1 | 0x200;
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
              if ((long *)plVar12[0x16] == plVar12 + 0x15) {
                return;
              }
              lVar9 = (long)*(int *)((long)plVar12 + 0xbc);
              plVar8 = (long *)(plVar12[0x16] - lVar9);
              do {
                (**(code **)(*plVar8 + 0xb0))(plVar8);
                plVar8 = (long *)(*(long *)((long)plVar8 + lVar9 + 8) - lVar9);
              } while (plVar8 != (long *)((long)(plVar12 + 0x15) - lVar9));
              return;
            }
            lVar9 = 0;
            do {
              if ((lVar9 == 0x80000) ||
                 (lVar3 = lVar9 + 1, pcVar11[lVar3] != (&DAT_040dedda)[lVar9])) goto LAB_00ce79fc;
              lVar9 = lVar9 + 1;
            } while (pcVar11[lVar3] != '\0');
          }
        }
      }
LAB_00ce78fc:
      local_48 = *(float *)(*(undefined8 **)(param_1 + 8) + 1);
      local_50 = **(undefined8 **)(param_1 + 8);
      (**(code **)(plVar12[0x7c] + 0x18))(plVar8);
      (**(code **)(plVar12[0x7c] + 0x18))(plVar8);
      fVar16 = 7.5;
      fVar15 = 15.0;
      if ((undefined1 *)plVar12[0x7d] == &DAT_04066e12) {
LAB_00ce7980:
        uVar13 = 0xc0000000;
      }
      else {
        uVar10 = 0;
        bVar5 = true;
        do {
          cVar2 = ((undefined1 *)plVar12[0x7d])[uVar10];
          if (cVar2 != (&DAT_04066e12)[uVar10]) break;
          if (cVar2 == '\0') {
            if (bVar5) goto LAB_00ce7980;
            break;
          }
          bVar5 = uVar10 < 0x80000;
          uVar10 = uVar10 + 1;
        } while (uVar10 != 0x80001);
        (**(code **)(plVar12[0x7c] + 0x18))(plVar8);
        (**(code **)(plVar12[0x7c] + 0x18))(plVar8);
        fVar16 = 15.0;
        if ((undefined1 *)plVar12[0x7d] != &DAT_040bf969) {
          uVar10 = 0;
          bVar5 = true;
          do {
            cVar2 = ((undefined1 *)plVar12[0x7d])[uVar10];
            if (cVar2 != (&DAT_040bf969)[uVar10]) break;
            if (cVar2 == '\0') {
              if (bVar5) goto LAB_00ce7aa4;
              break;
            }
            bVar5 = uVar10 < 0x80000;
            uVar10 = uVar10 + 1;
          } while (uVar10 != 0x80001);
          (**(code **)(*plVar8 + 0x18))(plVar8);
          (**(code **)(*plVar8 + 0x18))(plVar8);
          fVar16 = 0.0;
        }
LAB_00ce7aa4:
        fVar15 = 0.0;
        uVar13 = 0;
      }
      local_48 = fVar15 + local_48;
      local_50 = CONCAT44(local_50._4_4_ + 0.0,fVar16 + (float)local_50);
      local_54 = uVar13;
      FUN_01e39778(plVar12,&local_50,&local_54,0);
      lVar9 = plVar12[0x76];
      *(undefined4 *)(lVar9 + 0x4e4) = uVar13;
      if (*(int *)(lVar9 + 0x378) < 0x23) {
        *(undefined4 *)(lVar9 + 0x3a4) = uVar13;
      }
    }
  }
  return;
}


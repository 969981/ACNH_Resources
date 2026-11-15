
void FUN_0212d200(long param_1,uint *param_2)

{
  long lVar1;
  uint uVar2;
  uint *puVar3;
  undefined4 *puVar4;
  uint uVar5;
  undefined *puVar6;
  undefined *puVar7;
  bool bVar8;
  int iVar9;
  long *plVar10;
  ulong uVar11;
  long lVar12;
  long *plVar13;
  uint uVar14;
  void *__dest;
  char *pcVar15;
  void *__src;
  long lVar16;
  undefined *local_b8;
  char *local_b0;
  undefined *local_a8;
  char *local_a0;
  undefined *local_98;
  char *local_90;
  int local_88;
  char local_84 [31];
  undefined1 local_65;
  
  puVar6 = PTR_DAT_04bb27c0;
  lVar12 = *(long *)PTR_DAT_04bb27c0;
  if (lVar12 == 0) {
    return;
  }
  uVar5 = *param_2;
  lVar16 = *(long *)(param_1 + 8);
  if ((((uVar5 == 0) ||
       (plVar13 = *(long **)(*(long *)(*(long *)(lVar12 + 0x1c0) + 8) +
                            ((ulong)(uVar5 >> 0x11) & 0x7ff8)), plVar13 == (long *)0x0)) ||
      ((*(uint *)(plVar13 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar13 + 0x46) != uVar5)) {
    plVar13 = (long *)0x0;
  }
  if (*(int *)(lVar12 + 0x288) == 1 || *(int *)(lVar12 + 0x288) == -1) {
    plVar10 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar12 = *(long *)puVar6;
    iVar9 = (**(code **)(*plVar10 + 0x60))();
    if (iVar9 < 0x11) {
      uVar14 = 1;
      goto joined_r0x0212d2d0;
    }
    if (*(uint *)(lVar12 + 0x5e8) < 5) {
      uVar14 = 0x1aU >> (ulong)(*(uint *)(lVar12 + 0x5e8) & 0x1f) & 1;
      goto joined_r0x0212d2d0;
    }
  }
  uVar14 = 0;
joined_r0x0212d2d0:
  if (plVar13 != (long *)0x0) {
    lVar12 = plVar13[0x2a];
    if (((*PTR_DAT_04bb37d8 & 1) == 0) &&
       (iVar9 = __cxa_guard_acquire(PTR_DAT_04bb37d8), iVar9 != 0)) {
      *(undefined **)PTR_DAT_04bb37d0 = PTR_DAT_04bb3750 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb37d8);
    }
    uVar11 = (**(code **)(*plVar13 + 0x20))(plVar13,PTR_DAT_04bb37d0);
    uVar2 = 0;
    if ((int)lVar12 == 1) {
      uVar2 = uVar14;
    }
    if (((uVar11 & 1) != 0) && (uVar2 != 0)) {
      plVar10 = plVar13 + 0x7c;
      local_88 = 0x20;
      local_65 = 0;
      local_98 = PTR_DAT_04bb2a08 + 0x10;
      local_90 = local_84;
      (**(code **)(plVar13[0x7c] + 0x18))(plVar10);
      pcVar15 = (char *)plVar13[0x7d];
      if (local_84 != pcVar15) {
        (**(code **)(plVar13[0x7c] + 0x18))(plVar10);
        lVar12 = 0;
        do {
          if (*(char *)(plVar13[0x7d] + lVar12) == '\0') goto LAB_0212d3c0;
          lVar1 = plVar13[0x7d] + lVar12;
          if (*(char *)(lVar1 + 1) == '\0') {
            lVar12 = lVar12 + 1;
            goto LAB_0212d3c0;
          }
          if (*(char *)(lVar1 + 2) == '\0') {
            lVar12 = lVar12 + 2;
            goto LAB_0212d3c0;
          }
          lVar12 = lVar12 + 3;
        } while (lVar12 != 0x80001);
        lVar12 = 0;
LAB_0212d3c0:
        iVar9 = (int)lVar12;
        if (local_88 <= (int)lVar12) {
          iVar9 = local_88 + -1;
        }
        memcpy(local_84,pcVar15,(long)iVar9);
        local_84[iVar9] = '\0';
      }
      puVar7 = PTR_DAT_04bb2028;
      puVar6 = PTR_DAT_04bb2020;
      local_98 = PTR_DAT_04bb2028 + 0x10;
      local_a8 = PTR_DAT_04bb2020 + 0x10;
      local_a0 = "rco";
      local_90[(long)local_88 + -1] = '\0';
      (**(code **)(puVar7 + 0x28))(&local_98);
      pcVar15 = local_90;
      (**(code **)(local_a8 + 0x18))(&local_a8);
      if (pcVar15 != local_a0) {
        uVar11 = 0;
        bVar8 = true;
        do {
          if (local_90[uVar11] != local_a0[uVar11]) break;
          if (local_90[uVar11] == '\0') {
            if (bVar8) goto LAB_0212d5fc;
            break;
          }
          bVar8 = uVar11 < 0x80000;
          uVar11 = uVar11 + 1;
        } while (uVar11 != 0x80001);
        local_b8 = puVar6 + 0x10;
        local_b0 = "sza";
        (**(code **)(local_98 + 0x18))(&local_98);
        (**(code **)(local_98 + 0x18))(&local_98);
        pcVar15 = local_90;
        (**(code **)(local_b8 + 0x18))(&local_b8);
        if (pcVar15 != local_b0) {
          uVar11 = 0;
          bVar8 = true;
          do {
            if (local_90[uVar11] != local_b0[uVar11]) break;
            if (local_90[uVar11] == '\0') {
              if (bVar8) goto LAB_0212d5fc;
              break;
            }
            bVar8 = uVar11 < 0x80000;
            uVar11 = uVar11 + 1;
          } while (uVar11 != 0x80001);
          (**(code **)(local_98 + 0x18))(&local_98);
          (**(code **)(local_98 + 0x18))(&local_98);
          if (local_90 != "rcm") {
            uVar11 = 0;
            bVar8 = true;
            do {
              if (local_90[uVar11] != (&DAT_040bf969)[uVar11]) break;
              if (local_90[uVar11] == '\0') {
                if (bVar8) goto LAB_0212d5fc;
                break;
              }
              bVar8 = uVar11 < 0x80000;
              uVar11 = uVar11 + 1;
            } while (uVar11 != 0x80001);
            (**(code **)(local_98 + 0x18))(&local_98);
            (**(code **)(local_98 + 0x18))(&local_98);
            if (local_90 != "rct") {
              if (*local_90 != 'r') {
                return;
              }
              lVar12 = 0;
              do {
                if (lVar12 == 0x80000) {
                  return;
                }
                lVar1 = lVar12 + 1;
                if (local_90[lVar1] != (&DAT_040dedda)[lVar12]) {
                  return;
                }
                lVar12 = lVar12 + 1;
              } while (local_90[lVar1] != '\0');
            }
          }
        }
      }
LAB_0212d5fc:
      puVar3 = (uint *)(lVar16 + 0x398) + **(uint **)(param_1 + 0x10);
      if (1 < **(uint **)(param_1 + 0x10)) {
        puVar3 = (uint *)(lVar16 + 0x398);
      }
      *puVar3 = uVar5;
      lVar12 = plVar13[0xd];
      puVar4 = (undefined4 *)(lVar16 + 0x3a0) + (ulong)**(uint **)(param_1 + 0x10) * 3;
      if (1 < **(uint **)(param_1 + 0x10)) {
        puVar4 = (undefined4 *)(lVar16 + 0x3a0);
      }
      *puVar4 = *(undefined4 *)(lVar12 + 0x278);
      puVar4[1] = *(undefined4 *)(lVar12 + 0x27c);
      puVar4[2] = *(undefined4 *)(lVar12 + 0x280);
      __dest = *(void **)(lVar16 + 0x368);
      (**(code **)(plVar13[0x7c] + 0x18))(plVar10);
      __src = (void *)plVar13[0x7d];
      if (__dest != __src) {
        (**(code **)(plVar13[0x7c] + 0x18))(plVar10);
        lVar12 = 0;
        do {
          if (*(char *)(plVar13[0x7d] + lVar12) == '\0') goto LAB_0212d6cc;
          lVar1 = plVar13[0x7d] + lVar12;
          if (*(char *)(lVar1 + 1) == '\0') {
            lVar12 = lVar12 + 1;
            goto LAB_0212d6cc;
          }
          if (*(char *)(lVar1 + 2) == '\0') {
            lVar12 = lVar12 + 2;
            goto LAB_0212d6cc;
          }
          lVar12 = lVar12 + 3;
        } while (lVar12 != 0x80001);
        lVar12 = 0;
LAB_0212d6cc:
        iVar9 = (int)lVar12;
        if (*(int *)(lVar16 + 0x370) <= (int)lVar12) {
          iVar9 = *(int *)(lVar16 + 0x370) + -1;
        }
        memcpy(__dest,__src,(long)iVar9);
        *(undefined1 *)((long)__dest + (long)iVar9) = 0;
      }
      **(int **)(param_1 + 0x10) = **(int **)(param_1 + 0x10) + 1;
    }
  }
  return;
}


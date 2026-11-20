
void FUN_03f36e30(long param_1,long param_2,char *param_3)

{
  char *pcVar1;
  int *piVar2;
  undefined *puVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  char cVar7;
  bool bVar8;
  byte bVar9;
  ulong uVar10;
  long lVar11;
  long *plVar12;
  int iVar13;
  int iVar14;
  long *plVar15;
  long lVar16;
  undefined *puVar17;
  long lVar18;
  undefined8 local_148;
  int local_140 [2];
  undefined *local_138;
  long lStack_130;
  long *local_128;
  undefined4 local_11c;
  undefined *local_118;
  long lStack_110;
  int local_108;
  undefined1 local_104;
  long *local_100;
  undefined *local_f8;
  undefined8 local_f0;
  undefined *puStack_e8;
  undefined8 local_e0;
  int *local_d8;
  long local_d0;
  undefined1 local_6d;
  
  if (param_2 == 0) {
    return;
  }
  if (param_3 == (char *)0x0) {
    return;
  }
  iVar13 = *(int *)(param_3 + 0x28);
  pcVar1 = param_3 + 0x40;
  lVar16 = *(long *)(param_3 + 0x18);
  local_108 = 0;
  local_104 = 0;
  iVar14 = -iVar13;
  if (-1 < iVar13) {
    iVar14 = iVar13;
  }
  if (iVar14 < 0x21) {
    iVar14 = 0x20;
  }
  iVar5 = -iVar14;
  if (-1 < iVar13) {
    iVar5 = iVar14;
  }
  if (iVar13 < 0x21) {
    iVar13 = 0x20;
  }
  if (*(int *)(param_3 + 4) != 0) {
    iVar5 = iVar13;
  }
  if (lVar16 != 0) {
    piVar2 = (int *)(param_1 + 0x8c0);
    FUN_038e2e80(piVar2);
    if (*(long *)(param_1 + 0x8b0) != param_1 + 0x8a8) {
      lVar11 = (long)*(int *)(param_1 + 0x8bc);
      lVar18 = *(long *)(param_1 + 0x8b0) - lVar11;
      do {
        if (*(long *)(lVar18 + 0x10) == lVar16) {
          local_6d = 0;
          plVar15 = (long *)(lVar18 + 0x18);
          puVar3 = (undefined *)((long)&local_f0 + 4);
          local_f0 = (long *)CONCAT44(local_f0._4_4_,0x80);
          local_100 = (long *)(PTR_DAT_04bb2e90 + 0x10);
          local_f8 = puVar3;
          (**(code **)(*plVar15 + 0x18))(plVar15);
          puVar17 = *(undefined **)(lVar18 + 0x20);
          if (puVar3 == puVar17) goto LAB_03f3705c;
          (**(code **)(*(long *)(lVar18 + 0x18) + 0x18))(plVar15);
          lVar16 = 0;
          goto LAB_03f36fe0;
        }
        lVar18 = *(long *)(lVar18 + lVar11 + 8) - lVar11;
      } while (lVar18 != (param_1 + 0x8a8) - lVar11);
    }
    do {
      iVar14 = *piVar2;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar8) {
        *piVar2 = iVar14 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (iVar14 == 1) {
      piVar2 = (int *)(param_1 + 0x960);
      do {
        iVar14 = *piVar2;
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar8) {
          *piVar2 = iVar14 + -1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (iVar14 != 1) {
        nn::os::ReleaseSemaphore((SemaphoreType *)(param_1 + 0x938));
      }
    }
  }
  bVar9 = FUN_03f3cad0(param_1 + 0x820,&local_108,pcVar1);
  goto LAB_03f36f54;
LAB_03f37480:
  local_100 = (long *)((ulong)local_100 & 0xffffffff00000000);
  if (((char)plVar15[0xf] == '\0') ||
     (uVar10 = (**(code **)(*plVar15 + 0xb0))(plVar15,&local_100,&local_118), (uVar10 & 1) == 0))
  goto LAB_03f37574;
  lVar16 = *(long *)(param_3 + 8);
  goto LAB_03f374ac;
  while( true ) {
    lVar11 = *(long *)(lVar18 + 0x20) + lVar16;
    if (*(char *)(lVar11 + 1) == '\0') {
      lVar16 = lVar16 + 1;
      goto LAB_03f37034;
    }
    if (*(char *)(lVar11 + 2) == '\0') {
      lVar16 = lVar16 + 2;
      goto LAB_03f37034;
    }
    lVar16 = lVar16 + 3;
    if (lVar16 == 0x80001) break;
LAB_03f36fe0:
    if (*(char *)(*(long *)(lVar18 + 0x20) + lVar16) == '\0') goto LAB_03f37034;
  }
  lVar16 = 0;
LAB_03f37034:
  iVar14 = (int)lVar16;
  if ((int)local_f0 <= (int)lVar16) {
    iVar14 = (int)local_f0 + -1;
  }
  memcpy(puVar3,puVar17,(long)iVar14);
  puVar3[iVar14] = 0;
LAB_03f3705c:
  puVar3 = local_f8;
  lVar16 = 0;
  local_100 = (long *)(PTR_DAT_04bb2d88 + 0x10);
  local_f8[(long)(int)local_f0 + -1] = 0;
  do {
    if (local_f8[lVar16] == '\0') goto LAB_03f370c0;
    if (local_f8[lVar16 + 1] == '\0') {
      lVar16 = lVar16 + 1;
      goto LAB_03f370c0;
    }
    if (local_f8[lVar16 + 2] == '\0') {
      lVar16 = lVar16 + 2;
      goto LAB_03f370c0;
    }
    lVar16 = lVar16 + 3;
  } while (lVar16 != 0x80001);
  lVar16 = 0;
LAB_03f370c0:
  uVar4 = (uint)lVar16 & ((int)(uint)lVar16 >> 0x1f ^ 0xffffffffU);
  (**(code **)(*(long *)(param_3 + 0x40) + 0x18))(pcVar1);
  lVar16 = 0;
  do {
    if (*(char *)(*(long *)(param_3 + 0x48) + lVar16) == '\0') goto LAB_03f3711c;
    lVar18 = *(long *)(param_3 + 0x48) + lVar16;
    if (*(char *)(lVar18 + 1) == '\0') {
      lVar16 = lVar16 + 1;
      goto LAB_03f3711c;
    }
    if (*(char *)(lVar18 + 2) == '\0') {
      lVar16 = lVar16 + 2;
      goto LAB_03f3711c;
    }
    lVar16 = lVar16 + 3;
  } while (lVar16 != 0x80001);
  lVar16 = 0;
LAB_03f3711c:
  uVar6 = (uint)lVar16;
  if ((int)((int)local_f0 - uVar4) <= (int)(uint)lVar16) {
    uVar6 = (int)local_f0 + ~uVar4;
  }
  if (0 < (int)uVar6) {
    (**(code **)(*(long *)(param_3 + 0x40) + 0x18))(pcVar1);
    memcpy(puVar3 + uVar4,*(void **)(param_3 + 0x48),(ulong)uVar6);
    puVar3[(int)(uVar6 + uVar4)] = 0;
  }
  bVar9 = FUN_03f3cad0(param_1 + 0x820,&local_108,&local_100);
  do {
    iVar14 = *piVar2;
    cVar7 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(piVar2,0x10);
    if (bVar8) {
      *piVar2 = iVar14 + -1;
      cVar7 = ExclusiveMonitorsStatus();
    }
  } while (cVar7 != '\0');
  if (iVar14 == 1) {
    piVar2 = (int *)(param_1 + 0x960);
    do {
      iVar14 = *piVar2;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar8) {
        *piVar2 = iVar14 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (iVar14 != 1) {
      nn::os::ReleaseSemaphore((SemaphoreType *)(param_1 + 0x938));
    }
  }
LAB_03f36f54:
  puVar3 = PTR_DAT_04bb2020;
  if (*param_3 == '\0') {
    if (param_3[1] == '\0') {
      plVar15 = *(long **)(param_3 + 0x18);
      if (plVar15 == (long *)0x0) {
        if (*(long *)(param_3 + 0x10) == 0) {
          if (((bVar9 & 1) == 0) || ((*(byte *)(param_1 + 0xc) & 1) == 0)) {
            plVar15 = *(long **)(param_1 + 0x5e0);
          }
          else {
            local_f8 = PTR_DAT_04bb2020 + 0x10;
            local_d0 = CONCAT71(local_d0._1_7_,1);
            local_100 = *(long **)(param_1 + 0x5e0);
            local_d8 = &local_108;
            local_f0 = *(long **)(param_3 + 0x48);
            local_e0 = *(undefined8 *)(param_3 + 0x38);
            puStack_e8 = local_f8;
            plVar12 = (long *)(**(code **)(**(long **)(param_1 + 0x128) + 0x68))
                                        (*(long **)(param_1 + 0x128),&local_100);
            plVar15 = local_100;
            if (plVar12 != (long *)0x0) {
              plVar15 = plVar12;
            }
          }
        }
        else {
          plVar15 = (long *)(param_1 + 0x678);
        }
      }
    }
    else {
      plVar15 = (long *)0x0;
    }
    puVar17 = PTR_DAT_04bd0bf0;
    if (((*PTR_DAT_04bd0bf0 & 1) == 0) &&
       (iVar14 = __cxa_guard_acquire(PTR_DAT_04bd0bf0), iVar14 != 0)) {
      *(undefined **)PTR_DAT_04bd0be8 = PTR_DAT_04bc3650 + 0x10;
      __cxa_guard_release(PTR_DAT_04bd0bf0);
    }
    if (((plVar15 != (long *)0x0) &&
        (uVar10 = (**(code **)(*plVar15 + 0x10))(plVar15,PTR_DAT_04bd0be8), (uVar10 & 1) != 0)) &&
       (*(long *)(param_3 + 0x10) != 0)) {
      plVar15[0x10] = *(long *)(param_3 + 0x10);
    }
    if (((*puVar17 & 1) == 0) && (iVar14 = __cxa_guard_acquire(PTR_DAT_04bd0bf0), iVar14 != 0)) {
      *(undefined **)PTR_DAT_04bd0be8 = PTR_DAT_04bc3650 + 0x10;
      __cxa_guard_release(PTR_DAT_04bd0bf0);
    }
    if (plVar15 == (long *)0x0) {
      plVar12 = (long *)0x0;
    }
    else {
      uVar10 = (**(code **)(*plVar15 + 0x10))(plVar15,PTR_DAT_04bd0be8);
      plVar12 = plVar15;
      if ((uVar10 & 1) == 0) {
        plVar12 = (long *)0x0;
      }
    }
    iVar14 = local_108;
    *(long **)(param_2 + 8) = plVar15;
    local_118 = puVar3 + 0x10;
    *(bool *)param_2 = plVar12 == (long *)(param_1 + 0x678);
    lStack_110 = *(long *)(param_3 + 0x38);
    lVar16 = *(long *)(param_3 + 8);
    if (lVar16 == 0) {
      if ((bVar9 & local_108 != 0) == 1) {
        lVar16 = 0;
        do {
          if (*(char *)(lStack_110 + lVar16) == '\0') {
LAB_03f374dc:
            if (((3 < (int)lVar16) &&
                (uVar10 = (ulong)((int)lVar16 - 4), *(char *)(lStack_110 + uVar10) == 'b')) &&
               ((lVar16 = uVar10 + lStack_110, *(char *)(lVar16 + 1) == 'y' &&
                ((*(char *)(lVar16 + 2) == 'm' && (*(char *)(lVar16 + 3) == 'l'))))))
            goto LAB_03f3753c;
            break;
          }
          if (*(char *)(lStack_110 + lVar16 + 1) == '\0') {
            lVar16 = lVar16 + 1;
            goto LAB_03f374dc;
          }
          if (*(char *)(lStack_110 + lVar16 + 2) == '\0') {
            lVar16 = lVar16 + 2;
            goto LAB_03f374dc;
          }
          lVar16 = lVar16 + 3;
        } while (lVar16 != 0x80001);
        local_100 = (long *)(puVar3 + 0x10);
        local_f8 = &DAT_040ee613;
        uVar10 = FUN_0298e760(&local_118,&local_100);
        if ((uVar10 & 1) != 0) {
LAB_03f3753c:
          local_100 = (long *)((ulong)local_100 & 0xffffffff00000000);
          if (((char)plVar15[0xf] == '\0') ||
             (uVar10 = (**(code **)(*plVar15 + 0xb0))(plVar15,&local_100,&local_118),
             (uVar10 & 1) == 0)) {
LAB_03f37574:
            *(undefined4 *)(param_2 + 4) = 0;
            return;
          }
        }
        *(int *)(param_2 + 4) = iVar5 + iVar14 + 8;
      }
      else {
        local_100 = (long *)&local_11c;
        local_d8 = (int *)(puVar3 + 0x10);
        local_11c = 0;
        puStack_e8 = *(undefined **)(param_3 + 0x20);
        local_f8 = (undefined *)((ulong)local_f8 & 0xffffffff00000000);
        local_e0 = CONCAT44(local_e0._4_4_,iVar5);
        local_f0 = plVar15;
        local_d0 = lStack_110;
        if (*(int *)(param_3 + 4) != 0) {
          local_148 = 0;
          local_140[0] = *(int *)(param_3 + 4);
          local_138 = (undefined *)local_d8;
          lStack_130 = lStack_110;
          local_128 = plVar15;
          FUN_03f36560(param_1,&local_148,local_140);
          local_f8 = (undefined *)CONCAT44(local_f8._4_4_,(int)local_148);
        }
        iVar14 = FUN_03f375ec(&local_100);
        if (iVar14 != 0) {
          *(int *)(param_2 + 4) = iVar14;
        }
      }
    }
    else {
      lVar18 = 0;
      do {
        if (*(char *)(lStack_110 + lVar18) == '\0') {
LAB_03f373ac:
          iVar14 = (int)lVar18;
joined_r0x03f373b0:
          if ((((3 < iVar14) && (*(char *)(lStack_110 + (ulong)(iVar14 - 4)) == 'b')) &&
              (lVar18 = (ulong)(iVar14 - 4) + lStack_110, *(char *)(lVar18 + 1) == 'y')) &&
             ((*(char *)(lVar18 + 2) == 'm' && (*(char *)(lVar18 + 3) == 'l')))) goto LAB_03f37480;
          break;
        }
        if (*(char *)(lStack_110 + lVar18 + 1) == '\0') {
          lVar18 = lVar18 + 1;
          goto LAB_03f373ac;
        }
        if (*(char *)(lStack_110 + lVar18 + 2) == '\0') {
          iVar14 = (int)lVar18 + 2;
          goto joined_r0x03f373b0;
        }
        lVar18 = lVar18 + 3;
      } while (lVar18 != 0x80001);
      lVar18 = 0;
      do {
        if (*(char *)(lStack_110 + lVar18) == '\0') {
LAB_03f37430:
          iVar14 = (int)lVar18;
joined_r0x03f37434:
          if (((3 < iVar14) && (*(char *)(lStack_110 + (ulong)(iVar14 - 4)) == 's')) &&
             ((lVar18 = (ulong)(iVar14 - 4) + lStack_110, *(char *)(lVar18 + 1) == 'a' &&
              ((*(char *)(lVar18 + 2) == 'r' && (*(char *)(lVar18 + 3) == 'c'))))))
          goto LAB_03f37480;
          break;
        }
        if (*(char *)(lStack_110 + lVar18 + 1) == '\0') {
          lVar18 = lVar18 + 1;
          goto LAB_03f37430;
        }
        if (*(char *)(lStack_110 + lVar18 + 2) == '\0') {
          iVar14 = (int)lVar18 + 2;
          goto joined_r0x03f37434;
        }
        lVar18 = lVar18 + 3;
      } while (lVar18 != 0x80001);
LAB_03f374ac:
      *(int *)(param_2 + 4) = (int)lVar16;
    }
  }
  return;
}


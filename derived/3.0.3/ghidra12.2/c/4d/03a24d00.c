
void FUN_03a24d00(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 uint param_5)

{
  undefined *puVar1;
  long *plVar2;
  uint *puVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  int iVar11;
  undefined4 uVar12;
  int iVar13;
  char cVar14;
  undefined *puVar15;
  undefined *puVar16;
  bool bVar17;
  int iVar18;
  ulong uVar19;
  uint uVar20;
  long lVar21;
  long lVar22;
  undefined8 uVar23;
  long lVar24;
  undefined4 *puVar25;
  long lVar26;
  long lVar27;
  void *pvVar28;
  ulong uVar29;
  void *pvVar30;
  long *plVar31;
  long lVar32;
  long *plVar33;
  undefined8 local_68;
  
  if ((int)param_1[0x1bb] != 0) {
    plVar33 = (long *)param_1[0x1bc];
    plVar31 = plVar33 + (int)param_1[0x1bb];
    do {
      puVar15 = PTR_PTR_04bb2238;
      lVar27 = *plVar33;
      pvVar28 = *(void **)(lVar27 + 0x260);
      (**(code **)(*(long *)PTR_PTR_04bb2238 + 0x18))(PTR_PTR_04bb2238);
      pvVar30 = *(void **)(puVar15 + 8);
      if (pvVar28 != pvVar30) {
        (**(code **)(*(long *)puVar15 + 0x18))(puVar15);
        lVar21 = 0;
        do {
          if (*(char *)(*(long *)(puVar15 + 8) + lVar21) == '\0') goto LAB_03a24d4c;
          lVar24 = *(long *)(puVar15 + 8) + lVar21;
          if (*(char *)(lVar24 + 1) == '\0') {
            lVar21 = lVar21 + 1;
            goto LAB_03a24d4c;
          }
          if (*(char *)(lVar24 + 2) == '\0') {
            lVar21 = lVar21 + 2;
            goto LAB_03a24d4c;
          }
          lVar21 = lVar21 + 3;
        } while (lVar21 != 0x80001);
        lVar21 = 0;
LAB_03a24d4c:
        iVar18 = (int)lVar21;
        if (*(int *)(lVar27 + 0x268) <= (int)lVar21) {
          iVar18 = *(int *)(lVar27 + 0x268) + -1;
        }
        memcpy(pvVar28,pvVar30,(long)iVar18);
        *(undefined1 *)((long)pvVar28 + (long)iVar18) = 0;
      }
      plVar33 = plVar33 + 1;
      *(undefined4 *)(lVar27 + 0x23c) = 0xffffffff;
    } while (plVar33 != plVar31);
  }
  if ((param_5 & 1) == 0) {
    FUN_03964240(&local_68,param_2);
    (**(code **)(*param_1 + 0x50))(param_1,local_68);
  }
  else {
    FUN_03955be0(param_1,param_4,0);
  }
  puVar16 = PTR_DAT_04bd1500;
  puVar15 = PTR_DAT_04bd14f8;
  iVar18 = (int)param_1[0x61];
  if (0 < iVar18) {
    uVar29 = 0;
    puVar1 = PTR_DAT_04bb2000 + 0x10;
    do {
      uVar8 = uVar29;
      if (0x7f < uVar29) {
        uVar8 = 0;
      }
      if (0 < *(int *)((long)param_1 + uVar8 * 4 + 0x714)) {
        lVar27 = 0;
        puVar3 = (uint *)((long)param_1 + 0x314) + uVar29;
        if (0x7f < uVar29) {
          puVar3 = (uint *)((long)param_1 + 0x314);
        }
        do {
          lVar21 = param_1[0x60];
          uVar20 = *puVar3;
          if (*(uint *)(lVar21 + 0x18) <= uVar20) {
            uVar20 = 0;
          }
          if ((uint)lVar27 < (uint)*(ushort *)(*(long *)(lVar21 + 0x20) + (long)(int)uVar20 * 4 + 2)
             ) {
            plVar33 = *(long **)(*(long *)(lVar21 + 0x30) +
                                (lVar27 + (ulong)*(ushort *)
                                                  (*(long *)(lVar21 + 0x20) + (long)(int)uVar20 * 4)
                                ) * 8);
          }
          else {
            plVar33 = (long *)0x0;
          }
          if (((*puVar16 & 1) == 0) && (iVar18 = __cxa_guard_acquire(puVar16), iVar18 != 0)) {
            *(undefined **)puVar15 = puVar1;
            __cxa_guard_release(puVar16);
          }
          uVar19 = (**(code **)(*plVar33 + 0x48))(plVar33,puVar15);
          lVar27 = lVar27 + 1;
          if ((uVar19 & 1) == 0) {
            plVar33 = (long *)0x0;
          }
          *(ushort *)(plVar33 + 0x198) = *(ushort *)(plVar33 + 0x198) | 0x20;
        } while ((int)lVar27 < *(int *)((long)param_1 + uVar8 * 4 + 0x714));
        iVar18 = (int)param_1[0x61];
      }
      uVar29 = uVar29 + 1;
    } while ((long)uVar29 < (long)iVar18);
  }
  *(uint *)(param_1 + 0x172) = *(uint *)(param_1 + 0x172) | 3;
  if ((int)param_1[0x41e] == 2) {
    plVar33 = param_1 + 0x229;
    iVar18 = (int)param_1[0x1bb];
  }
  else {
    plVar33 = param_1 + 0x1bd;
    iVar18 = (int)param_1[0x1bb];
  }
  if (iVar18 != 0) {
    plVar31 = (long *)param_1[0x1bc];
    plVar5 = plVar31 + iVar18;
    do {
      lVar27 = *plVar31;
      *(undefined1 *)(lVar27 + 0x230) = 0;
      if ((int)plVar33[0x44] <= *(int *)(lVar27 + 0x23c)) {
        pvVar28 = *(void **)(lVar27 + 0x260);
        *(undefined4 *)(lVar27 + 0x23c) = 0xffffffff;
        puVar15 = PTR_PTR_04bb2238;
        (**(code **)(*(long *)PTR_PTR_04bb2238 + 0x18))(PTR_PTR_04bb2238);
        pvVar30 = *(void **)(puVar15 + 8);
        if (pvVar28 != pvVar30) {
          (**(code **)(*(long *)puVar15 + 0x18))(puVar15);
          lVar21 = 0;
          do {
            if (*(char *)(*(long *)(puVar15 + 8) + lVar21) == '\0') goto LAB_03a2509c;
            lVar24 = *(long *)(puVar15 + 8) + lVar21;
            if (*(char *)(lVar24 + 1) == '\0') {
              lVar21 = lVar21 + 1;
              goto LAB_03a2509c;
            }
            if (*(char *)(lVar24 + 2) == '\0') {
              lVar21 = lVar21 + 2;
              goto LAB_03a2509c;
            }
            lVar21 = lVar21 + 3;
          } while (lVar21 != 0x80001);
          lVar21 = 0;
LAB_03a2509c:
          iVar18 = (int)lVar21;
          if (*(int *)(lVar27 + 0x268) <= (int)lVar21) {
            iVar18 = *(int *)(lVar27 + 0x268) + -1;
          }
          memcpy(pvVar28,pvVar30,(long)iVar18);
          *(undefined1 *)((long)pvVar28 + (long)iVar18) = 0;
        }
        *(undefined1 *)(*plVar31 + 0x230) = 0;
      }
      lVar21 = lVar27 + 600;
      (**(code **)(*(long *)(lVar27 + 600) + 0x18))(lVar21);
      (**(code **)(*(long *)(lVar27 + 600) + 0x18))(lVar21);
      puVar15 = PTR_PTR_04bb2238;
      lVar24 = *(long *)(lVar27 + 0x260);
      (**(code **)(*(long *)PTR_PTR_04bb2238 + 0x18))(PTR_PTR_04bb2238);
      if (lVar24 == *(long *)(puVar15 + 8)) {
LAB_03a25190:
        uVar20 = *(uint *)(lVar27 + 0x23c);
        if (uVar20 == 0xffffffff) {
          FUN_038d1270(*plVar31 + 0x38,&DAT_04101015,*(undefined4 *)(*plVar31 + 0x30));
        }
        else {
LAB_03a251cc:
          lVar21 = *plVar31;
          pvVar28 = *(void **)(lVar21 + 0x40);
          if (*(uint *)(plVar33 + 0x45) <= uVar20) {
            uVar20 = 0;
          }
          lVar24 = plVar33[0x46] + (long)(int)uVar20 * 0x298;
          plVar2 = (long *)(lVar24 + 0x180);
          (**(code **)(*(long *)(lVar24 + 0x180) + 0x18))(plVar2);
          pvVar30 = *(void **)(lVar24 + 0x188);
          if (pvVar28 != pvVar30) {
            (**(code **)(*plVar2 + 0x18))(plVar2);
            lVar22 = 0;
            do {
              if (*(char *)(*(long *)(lVar24 + 0x188) + lVar22) == '\0') goto LAB_03a25280;
              lVar26 = *(long *)(lVar24 + 0x188) + lVar22;
              if (*(char *)(lVar26 + 1) == '\0') {
                lVar22 = lVar22 + 1;
                goto LAB_03a25280;
              }
              if (*(char *)(lVar26 + 2) == '\0') {
                lVar22 = lVar22 + 2;
                goto LAB_03a25280;
              }
              lVar22 = lVar22 + 3;
            } while (lVar22 != 0x80001);
            lVar22 = 0;
LAB_03a25280:
            iVar11 = *(int *)(lVar21 + 0x48);
            iVar18 = (int)lVar22;
            if (iVar11 <= (int)lVar22) {
              iVar18 = iVar11 + -1;
            }
            memcpy(pvVar28,pvVar30,(long)iVar18);
            *(undefined1 *)((long)pvVar28 + (long)iVar18) = 0;
          }
          uVar20 = *(uint *)(lVar27 + 0x23c);
          lVar21 = *plVar31;
          if (*(uint *)(plVar33 + 0x45) <= uVar20) {
            uVar20 = 0;
          }
          puVar25 = (undefined4 *)(plVar33[0x46] + (long)(int)uVar20 * 0x298);
          *(undefined4 *)(lVar21 + 0x150) = *puVar25;
          *(undefined4 *)(lVar21 + 0x154) = puVar25[1];
          *(undefined8 *)(lVar21 + 0x158) = *(undefined8 *)(puVar25 + 2);
          *(undefined8 *)(lVar21 + 0x160) = *(undefined8 *)(puVar25 + 4);
          *(undefined4 *)(lVar21 + 0x168) = puVar25[6];
          *(undefined4 *)(lVar21 + 0x16c) = puVar25[7];
          *(undefined8 *)(lVar21 + 0x170) = *(undefined8 *)(puVar25 + 8);
          *(undefined8 *)(lVar21 + 0x178) = *(undefined8 *)(puVar25 + 10);
          uVar9 = *(undefined8 *)(puVar25 + 0xc);
          uVar10 = *(undefined8 *)(puVar25 + 0xe);
          uVar23 = *(undefined8 *)(puVar25 + 0x10);
          *(undefined8 *)(lVar21 + 0x197) = *(undefined8 *)((long)puVar25 + 0x47);
          *(undefined8 *)(lVar21 + 0x188) = uVar10;
          *(undefined8 *)(lVar21 + 400) = uVar23;
          *(undefined8 *)(lVar21 + 0x180) = uVar9;
          FUN_038fd1e0(lVar21 + 0x1a0);
          FUN_038fd2f0(lVar21 + 0x1a0,puVar25 + 0x14);
          uVar12 = puVar25[0x26];
          *(undefined8 *)(lVar21 + 0x1e0) = *(undefined8 *)(puVar25 + 0x24);
          puVar3 = (uint *)(lVar21 + 0x224);
          *(undefined4 *)(lVar21 + 0x1e8) = uVar12;
          do {
            cVar14 = '\x01';
            bVar17 = (bool)ExclusiveMonitorPass(puVar3,0x10);
            if (bVar17) {
              *puVar3 = *puVar3 | 1;
              cVar14 = ExclusiveMonitorsStatus();
            }
          } while (cVar14 != '\0');
          lVar21 = *plVar31;
          puVar3 = (uint *)(lVar21 + 0x224);
          if (*(char *)(lVar21 + 0x2c8) == '\0') {
            *(undefined2 *)(lVar21 + 0x217) = 0x707;
            *(undefined1 *)(lVar21 + 0x219) = 7;
            do {
              cVar14 = '\x01';
              bVar17 = (bool)ExclusiveMonitorPass(puVar3,0x10);
              if (bVar17) {
                *puVar3 = *puVar3 & 0xfffffffd | 2;
                cVar14 = ExclusiveMonitorsStatus();
              }
            } while (cVar14 != '\0');
          }
          else {
            *(undefined2 *)(lVar21 + 0x217) = 0x606;
            *(undefined1 *)(lVar21 + 0x219) = 6;
            do {
              cVar14 = '\x01';
              bVar17 = (bool)ExclusiveMonitorPass(puVar3,0x10);
              if (bVar17) {
                *puVar3 = *puVar3 & 0xfffffffd | 2;
                cVar14 = ExclusiveMonitorsStatus();
              }
            } while (cVar14 != '\0');
          }
          *(undefined1 *)(*plVar31 + 0x230) = 1;
          uVar20 = *(uint *)(lVar27 + 0x23c);
          pvVar28 = *(void **)(lVar27 + 0x260);
          if (*(uint *)(plVar33 + 0x45) <= uVar20) {
            uVar20 = 0;
          }
          lVar21 = plVar33[0x46] + (long)(int)uVar20 * 0x298;
          plVar2 = (long *)(lVar21 + 0x180);
          (**(code **)(*(long *)(lVar21 + 0x180) + 0x18))(plVar2);
          pvVar30 = *(void **)(lVar21 + 0x188);
          if (pvVar28 != pvVar30) {
            (**(code **)(*plVar2 + 0x18))(plVar2);
            lVar24 = 0;
            do {
              if (*(char *)(*(long *)(lVar21 + 0x188) + lVar24) == '\0') goto LAB_03a24fc0;
              lVar22 = *(long *)(lVar21 + 0x188) + lVar24;
              if (*(char *)(lVar22 + 1) == '\0') {
                lVar24 = lVar24 + 1;
                goto LAB_03a24fc0;
              }
              if (*(char *)(lVar22 + 2) == '\0') {
                lVar24 = lVar24 + 2;
                goto LAB_03a24fc0;
              }
              lVar24 = lVar24 + 3;
            } while (lVar24 != 0x80001);
            lVar24 = 0;
LAB_03a24fc0:
            iVar18 = (int)lVar24;
            if (*(int *)(lVar27 + 0x268) <= (int)lVar24) {
              iVar18 = *(int *)(lVar27 + 0x268) + -1;
            }
            memcpy(pvVar28,pvVar30,(long)iVar18);
            *(undefined1 *)((long)pvVar28 + (long)iVar18) = 0;
          }
        }
      }
      else {
        uVar29 = 0;
        lVar24 = *(long *)(puVar15 + 8) + 1;
        bVar17 = true;
        lVar22 = *(long *)(lVar27 + 0x260) + 1;
        do {
          lVar26 = lVar22 + uVar29;
          lVar32 = lVar24 + uVar29;
          cVar14 = *(char *)(lVar26 + -1);
          if (cVar14 != *(char *)(lVar32 + -1)) break;
          if (cVar14 == '\0') {
            if (bVar17) goto LAB_03a25190;
            break;
          }
          cVar14 = *(char *)(lVar22 + uVar29);
          if (cVar14 != *(char *)(lVar24 + uVar29)) break;
          if (cVar14 == '\0') goto LAB_03a25190;
          cVar14 = *(char *)(lVar26 + 1);
          if (cVar14 != *(char *)(lVar32 + 1)) break;
          if (cVar14 == '\0') goto LAB_03a25190;
          bVar17 = uVar29 < 0x7fffe;
          uVar29 = uVar29 + 3;
        } while (uVar29 != 0x80001);
        uVar20 = *(uint *)(lVar27 + 0x23c);
        if (uVar20 != 0xffffffff) goto LAB_03a251cc;
        lVar24 = plVar33[0x45];
        if ((int)lVar24 != 0) {
          lVar22 = plVar33[0x46];
          iVar18 = 0;
LAB_03a25490:
          lVar26 = lVar22 + (long)iVar18 * 0x298;
          plVar2 = (long *)(lVar26 + 0x180);
          (**(code **)(*(long *)(lVar27 + 600) + 0x18))(lVar21);
          (**(code **)(*(long *)(lVar27 + 600) + 0x18))(lVar21);
          lVar32 = *(long *)(lVar27 + 0x260);
          (**(code **)(*(long *)(lVar26 + 0x180) + 0x18))(plVar2);
          if (lVar32 != *(long *)(lVar26 + 0x188)) goto code_r0x03a254ec;
LAB_03a2555c:
          lVar21 = *plVar31;
          puVar25 = (undefined4 *)(lVar22 + (long)iVar18 * 0x298);
          *(undefined4 *)(lVar21 + 0x150) = *puVar25;
          *(undefined4 *)(lVar21 + 0x154) = puVar25[1];
          *(undefined8 *)(lVar21 + 0x158) = *(undefined8 *)(puVar25 + 2);
          *(undefined8 *)(lVar21 + 0x160) = *(undefined8 *)(puVar25 + 4);
          *(undefined4 *)(lVar21 + 0x168) = puVar25[6];
          *(undefined4 *)(lVar21 + 0x16c) = puVar25[7];
          *(undefined8 *)(lVar21 + 0x170) = *(undefined8 *)(puVar25 + 8);
          *(undefined8 *)(lVar21 + 0x178) = *(undefined8 *)(puVar25 + 10);
          uVar9 = *(undefined8 *)(puVar25 + 0xc);
          uVar10 = *(undefined8 *)(puVar25 + 0xe);
          uVar23 = *(undefined8 *)(puVar25 + 0x10);
          *(undefined8 *)(lVar21 + 0x197) = *(undefined8 *)((long)puVar25 + 0x47);
          *(undefined8 *)(lVar21 + 0x188) = uVar10;
          *(undefined8 *)(lVar21 + 400) = uVar23;
          *(undefined8 *)(lVar21 + 0x180) = uVar9;
          FUN_038fd1e0(lVar21 + 0x1a0);
          FUN_038fd2f0(lVar21 + 0x1a0,puVar25 + 0x14);
          uVar12 = puVar25[0x26];
          *(undefined8 *)(lVar21 + 0x1e0) = *(undefined8 *)(puVar25 + 0x24);
          puVar3 = (uint *)(lVar21 + 0x224);
          *(undefined4 *)(lVar21 + 0x1e8) = uVar12;
          do {
            cVar14 = '\x01';
            bVar17 = (bool)ExclusiveMonitorPass(puVar3,0x10);
            if (bVar17) {
              *puVar3 = *puVar3 | 1;
              cVar14 = ExclusiveMonitorsStatus();
            }
          } while (cVar14 != '\0');
          lVar21 = *plVar31;
          puVar3 = (uint *)(lVar21 + 0x224);
          if (*(char *)(lVar21 + 0x2c8) == '\0') {
            *(undefined2 *)(lVar21 + 0x217) = 0x707;
            *(undefined1 *)(lVar21 + 0x219) = 7;
            do {
              cVar14 = '\x01';
              bVar17 = (bool)ExclusiveMonitorPass(puVar3,0x10);
              if (bVar17) {
                *puVar3 = *puVar3 & 0xfffffffd | 2;
                cVar14 = ExclusiveMonitorsStatus();
              }
            } while (cVar14 != '\0');
          }
          else {
            *(undefined2 *)(lVar21 + 0x217) = 0x606;
            *(undefined1 *)(lVar21 + 0x219) = 6;
            do {
              cVar14 = '\x01';
              bVar17 = (bool)ExclusiveMonitorPass(puVar3,0x10);
              if (bVar17) {
                *puVar3 = *puVar3 & 0xfffffffd | 2;
                cVar14 = ExclusiveMonitorsStatus();
              }
            } while (cVar14 != '\0');
          }
          lVar21 = *plVar31;
          pvVar28 = *(void **)(lVar21 + 0x40);
          (**(code **)(*plVar2 + 0x18))(plVar2);
          pvVar30 = *(void **)(lVar26 + 0x188);
          if (pvVar28 != pvVar30) {
            (**(code **)(*plVar2 + 0x18))(plVar2);
            lVar24 = 0;
            do {
              if (*(char *)(*(long *)(lVar26 + 0x188) + lVar24) == '\0') goto LAB_03a25700;
              lVar22 = *(long *)(lVar26 + 0x188) + lVar24;
              if (*(char *)(lVar22 + 1) == '\0') {
                lVar24 = lVar24 + 1;
                goto LAB_03a25700;
              }
              if (*(char *)(lVar22 + 2) == '\0') {
                lVar24 = lVar24 + 2;
                goto LAB_03a25700;
              }
              lVar24 = lVar24 + 3;
            } while (lVar24 != 0x80001);
            lVar24 = 0;
LAB_03a25700:
            iVar13 = *(int *)(lVar21 + 0x48);
            iVar11 = (int)lVar24;
            if (iVar13 <= (int)lVar24) {
              iVar11 = iVar13 + -1;
            }
            memcpy(pvVar28,pvVar30,(long)iVar11);
            *(undefined1 *)((long)pvVar28 + (long)iVar11) = 0;
          }
          *(undefined1 *)(*plVar31 + 0x230) = 1;
          *(int *)(lVar27 + 0x23c) = iVar18;
        }
      }
LAB_03a24fe8:
      plVar31 = plVar31 + 1;
    } while (plVar31 != plVar5);
  }
  return;
code_r0x03a254ec:
  uVar29 = 0;
  lVar32 = *(long *)(lVar26 + 0x188) + 1;
  bVar17 = true;
  lVar4 = *(long *)(lVar27 + 0x260) + 1;
  do {
    lVar6 = lVar4 + uVar29;
    lVar7 = lVar32 + uVar29;
    cVar14 = *(char *)(lVar6 + -1);
    if (cVar14 != *(char *)(lVar7 + -1)) break;
    if (cVar14 == '\0') {
      if (bVar17) goto LAB_03a2555c;
      break;
    }
    cVar14 = *(char *)(lVar4 + uVar29);
    if (cVar14 != *(char *)(lVar32 + uVar29)) break;
    if (cVar14 == '\0') goto LAB_03a2555c;
    cVar14 = *(char *)(lVar6 + 1);
    if (cVar14 != *(char *)(lVar7 + 1)) break;
    if (cVar14 == '\0') goto LAB_03a2555c;
    bVar17 = uVar29 < 0x7fffe;
    uVar29 = uVar29 + 3;
  } while (uVar29 != 0x80001);
  iVar18 = iVar18 + 1;
  if ((int)lVar24 == iVar18) goto LAB_03a24fe8;
  goto LAB_03a25490;
}


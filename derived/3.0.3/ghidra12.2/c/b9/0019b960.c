
void FUN_0019b960(long param_1,undefined4 param_2,ulong param_3)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  byte bVar5;
  char cVar6;
  undefined *puVar7;
  bool bVar8;
  ulong uVar9;
  undefined8 uVar10;
  long *plVar11;
  ulong uVar12;
  int iVar13;
  long lVar14;
  long lVar15;
  long *plVar16;
  int iVar17;
  long lVar18;
  long *plVar19;
  long *plVar20;
  long lVar21;
  long *local_c8;
  long *local_c0;
  long *local_b8;
  undefined1 auStack_b0 [56];
  undefined1 auStack_78 [16];
  undefined8 local_68;
  undefined8 local_58;
  
  if ((param_3 & 1) != 0) {
    plVar19 = (long *)(param_1 + 0xc0);
    (**(code **)(*plVar19 + 0x10))(plVar19);
    puVar7 = PTR_DAT_04bcbd30;
    plVar1 = (long *)(param_1 + 0x160);
    if (*(long **)(param_1 + 0x158) != plVar1) {
      plVar20 = *(long **)(param_1 + 0x158);
      do {
        lVar21 = plVar20[5];
        *(undefined4 *)(lVar21 + 0x40) = 3;
        if (*puVar7 == '\0') {
          FUN_0019eaa0(param_1,lVar21,0);
          plVar16 = (long *)plVar20[1];
          if ((long *)plVar20[1] != (long *)0x0) goto LAB_0019ba60;
LAB_0019ba70:
          do {
            plVar11 = (long *)plVar20[2];
            bVar8 = (long *)*plVar11 != plVar20;
            plVar20 = plVar11;
          } while (bVar8);
        }
        else {
          (**(code **)(*(long *)(param_1 + 0xc0) + 0x10))(plVar19);
          (**(code **)(*(long *)(param_1 + 0x30) + 0x10))(param_1 + 0x30);
          FUN_0019eaa0(param_1,lVar21,0);
          (**(code **)(*(long *)(param_1 + 0x30) + 0x20))(param_1 + 0x30);
          (**(code **)(*(long *)(param_1 + 0xc0) + 0x20))(plVar19);
          plVar16 = (long *)plVar20[1];
          if ((long *)plVar20[1] == (long *)0x0) goto LAB_0019ba70;
LAB_0019ba60:
          do {
            plVar11 = plVar16;
            plVar16 = (long *)*plVar11;
          } while ((long *)*plVar11 != (long *)0x0);
        }
        plVar20 = plVar11;
      } while (plVar11 != plVar1);
    }
    FUN_001a2d24(param_1 + 0x158,*(undefined8 *)(param_1 + 0x160));
    *(undefined8 *)(param_1 + 0x160) = 0;
    *(undefined8 *)(param_1 + 0x168) = 0;
    *(long **)(param_1 + 0x158) = plVar1;
    (**(code **)(*(long *)(param_1 + 0xc0) + 0x20))(plVar19);
  }
  FUN_0018af38(auStack_b0,10,param_2);
  FUN_00189428(auStack_b0);
  plVar1 = (long *)(param_1 + 0xc0);
  do {
    (**(code **)(*(long *)(param_1 + 0xc0) + 0x10))(plVar1);
    (**(code **)(*(long *)(param_1 + 0xc0) + 0x10))(plVar1);
    lVar21 = *(long *)(param_1 + 0x128);
    lVar14 = *(long *)(param_1 + 0x168);
    lVar15 = *(long *)(param_1 + 0x150);
    (**(code **)(*(long *)(param_1 + 0xc0) + 0x20))(plVar1);
    bVar5 = *(byte *)(param_1 + 0x10);
    (**(code **)(*(long *)(param_1 + 0xc0) + 0x20))(plVar1);
    if (lVar14 + lVar21 + lVar15 + (ulong)bVar5 == 0) break;
    FUN_0018aff4(auStack_b0);
    FUN_00198f30();
    uVar9 = FUN_00189434(auStack_b0,
                         "C:/home/ws/Master/Pack/7923402a/OnlineCore/src/Core/Scheduler.cpp",0x26e,
                         "GetTotalNumberOfJobs() != 0");
  } while ((uVar9 & 1) != 0);
  (**(code **)(*(long *)(param_1 + 0xc0) + 0x10))(plVar1);
  (**(code **)(*(long *)(param_1 + 0xc0) + 0x10))(plVar1);
  lVar21 = *(long *)(param_1 + 0x128);
  lVar14 = *(long *)(param_1 + 0x168);
  lVar15 = *(long *)(param_1 + 0x150);
  (**(code **)(*(long *)(param_1 + 0xc0) + 0x20))(plVar1);
  bVar5 = *(byte *)(param_1 + 0x10);
  (**(code **)(*(long *)(param_1 + 0xc0) + 0x20))(plVar1);
  if (lVar14 + lVar21 + lVar15 + (ulong)bVar5 != 0) {
    plVar20 = (long *)(param_1 + 0x78);
    (**(code **)(*plVar20 + 0x10))(plVar20);
    (**(code **)(*(long *)(param_1 + 0xc0) + 0x10))(plVar1);
    plVar19 = *(long **)(param_1 + 0x158);
    local_b8 = (long *)0x0;
    local_c8 = (long *)0x0;
    local_c0 = (long *)0x0;
    while (plVar19 != (long *)(param_1 + 0x160)) {
      if (local_c0 == local_b8) {
        uVar12 = (long)local_c0 - (long)local_c8;
        uVar9 = ((long)uVar12 >> 3) + 1;
        if (uVar9 >> 0x3d != 0) {
          uVar10 = FUN_001a3490(&local_c8);
          FUN_0019b430();
          FUN_00185ac4(uVar10);
          return;
        }
        uVar2 = (long)uVar12 >> 2;
        if ((ulong)((long)uVar12 >> 2) <= uVar9) {
          uVar2 = uVar9;
        }
        if (0x7ffffffffffffff7 < uVar12) {
          uVar2 = 0x1fffffffffffffff;
        }
        if (uVar2 == 0) {
          lVar21 = 0;
        }
        else {
          lVar21 = FUN_00187df4(uVar2 << 3);
        }
        plVar16 = (long *)(lVar21 + ((long)uVar12 >> 3) * 8);
        plVar11 = plVar16 + 1;
        *plVar16 = plVar19[5];
        if (local_c0 != local_c8) {
          do {
            local_c0 = local_c0 + -1;
            plVar16 = plVar16 + -1;
            *plVar16 = *local_c0;
          } while (local_c0 != local_c8);
          local_c0 = local_c8;
        }
        local_b8 = (long *)(lVar21 + uVar2 * 8);
        local_c8 = plVar16;
        if (local_c0 != (long *)0x0) {
          plVar16 = local_c0;
          local_c0 = plVar11;
          FUN_00187e4c(plVar16);
          plVar11 = local_c0;
        }
      }
      else {
        *local_c0 = plVar19[5];
        plVar11 = local_c0 + 1;
      }
      local_c0 = plVar11;
      plVar16 = (long *)plVar19[1];
      plVar11 = plVar19;
      if ((long *)plVar19[1] == (long *)0x0) {
        do {
          plVar19 = (long *)plVar11[2];
          bVar8 = (long *)*plVar19 != plVar11;
          plVar11 = plVar19;
        } while (bVar8);
      }
      else {
        do {
          plVar19 = plVar16;
          plVar16 = (long *)*plVar19;
        } while ((long *)*plVar19 != (long *)0x0);
      }
    }
    FUN_001a2d24(param_1 + 0x158,*(undefined8 *)(param_1 + 0x160));
    local_58 = *(undefined8 *)(param_1 + 0x110);
    local_68 = *(undefined8 *)(param_1 + 0x120);
    *(long **)(param_1 + 0x158) = (long *)(param_1 + 0x160);
    *(undefined8 *)(param_1 + 0x160) = 0;
    *(undefined8 *)(param_1 + 0x168) = 0;
    FUN_001a34a0(auStack_78,&local_58,&local_68,&local_c8);
    lVar21 = *(long *)(param_1 + 0x120);
    if (*(long *)(param_1 + 0x110) != lVar21) {
      lVar15 = *(long *)(param_1 + 0x128);
      lVar14 = *(long *)(param_1 + 0x110);
      do {
        lVar3 = *(long *)(lVar14 + 0x10);
        lVar4 = *(long *)(lVar14 + 0x18);
        if (lVar4 != 0) {
          *(long *)(lVar4 + 0x10) = lVar3;
        }
        *(undefined8 *)(lVar14 + 0x18) = 0;
        if (lVar3 != 0) {
          *(long *)(lVar3 + 0x18) = lVar4;
        }
        *(undefined8 *)(lVar14 + 0x10) = 0;
        if (*(long *)(param_1 + 0x110) == lVar14) {
          *(long *)(param_1 + 0x110) = lVar3;
          lVar18 = *(long *)(param_1 + 0x118);
        }
        else {
          lVar18 = *(long *)(param_1 + 0x118);
        }
        if (lVar18 == lVar14) {
          *(long *)(param_1 + 0x118) = lVar4;
        }
        lVar15 = lVar15 + -1;
        lVar14 = lVar3;
      } while (lVar3 != lVar21);
      *(long *)(param_1 + 0x128) = lVar15;
    }
    local_58 = *(undefined8 *)(param_1 + 0x138);
    local_68 = *(undefined8 *)(param_1 + 0x148);
    FUN_001a34a0(auStack_78,&local_58,&local_68,&local_c8);
    lVar21 = *(long *)(param_1 + 0x148);
    if (*(long *)(param_1 + 0x138) != lVar21) {
      lVar15 = *(long *)(param_1 + 0x150);
      lVar14 = *(long *)(param_1 + 0x138);
      do {
        lVar3 = *(long *)(lVar14 + 0x10);
        lVar4 = *(long *)(lVar14 + 0x18);
        if (lVar4 != 0) {
          *(long *)(lVar4 + 0x10) = lVar3;
        }
        *(undefined8 *)(lVar14 + 0x18) = 0;
        if (lVar3 != 0) {
          *(long *)(lVar3 + 0x18) = lVar4;
        }
        *(undefined8 *)(lVar14 + 0x10) = 0;
        if (*(long *)(param_1 + 0x138) == lVar14) {
          *(long *)(param_1 + 0x138) = lVar3;
          lVar18 = *(long *)(param_1 + 0x140);
        }
        else {
          lVar18 = *(long *)(param_1 + 0x140);
        }
        if (lVar18 == lVar14) {
          *(long *)(param_1 + 0x140) = lVar4;
        }
        lVar15 = lVar15 + -1;
        lVar14 = lVar3;
      } while (lVar3 != lVar21);
      *(long *)(param_1 + 0x150) = lVar15;
    }
    plVar19 = local_c8;
    if (local_c8 != local_c0) {
      do {
        plVar11 = (long *)*plVar19;
        plVar16 = plVar11 + 1;
        iVar17 = (int)*plVar16;
        iVar13 = (int)*plVar16 + -1;
        if (iVar17 != (int)*plVar16) {
          ClearExclusiveLocal();
LAB_0019bf00:
          do {
            lVar21 = *plVar16;
            iVar13 = iVar17 + -1;
            if ((int)lVar21 == iVar17) {
              cVar6 = '\x01';
              bVar8 = (bool)ExclusiveMonitorPass(plVar16,0x10);
              if (bVar8) {
                *(int *)plVar16 = iVar13;
                cVar6 = ExclusiveMonitorsStatus();
              }
              if (cVar6 == '\0') goto LAB_0019becc;
            }
            else {
              ClearExclusiveLocal();
            }
            iVar17 = (int)lVar21;
          } while( true );
        }
        cVar6 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(plVar16,0x10);
        if (bVar8) {
          *(int *)plVar16 = iVar13;
          cVar6 = ExclusiveMonitorsStatus();
        }
        if (cVar6 != '\0') goto LAB_0019bf00;
LAB_0019becc:
        if ((iVar13 == 0) && (*(char *)((long)plVar11 + 0xc) == '\0')) {
          *(undefined1 *)((long)plVar11 + 0xc) = 1;
          (**(code **)(*plVar11 + 8))();
        }
        plVar19 = plVar19 + 1;
      } while (plVar19 != local_c0);
    }
    if (local_c8 != (long *)0x0) {
      local_c0 = local_c8;
      FUN_00187e4c(local_c8);
    }
    (**(code **)(*plVar1 + 0x20))(plVar1);
    (**(code **)(*plVar20 + 0x20))(plVar20);
  }
  (**(code **)(*(long *)(param_1 + 0xc0) + 0x10))(plVar1);
  (**(code **)(*(long *)(param_1 + 0xc0) + 0x10))(plVar1);
  lVar21 = *(long *)(param_1 + 0x128);
  lVar14 = *(long *)(param_1 + 0x168);
  lVar15 = *(long *)(param_1 + 0x150);
  (**(code **)(*(long *)(param_1 + 0xc0) + 0x20))(plVar1);
  bVar5 = *(byte *)(param_1 + 0x10);
  (**(code **)(*(long *)(param_1 + 0xc0) + 0x20))(plVar1);
  if (lVar14 + lVar21 + lVar15 + (ulong)bVar5 != 0) {
    (**(code **)(*(long *)(param_1 + 0xc0) + 0x10))(plVar1);
    (**(code **)(*(long *)(param_1 + 0xc0) + 0x10))(plVar1);
    (**(code **)(*(long *)(param_1 + 0xc0) + 0x20))(plVar1);
    (**(code **)(*(long *)(param_1 + 0xc0) + 0x20))(plVar1);
  }
  FUN_0018afc4(auStack_b0);
  return;
}


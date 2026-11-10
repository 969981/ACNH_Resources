
/* WARNING: Removing unreachable block (ram,0x0021248c) */
/* WARNING: Removing unreachable block (ram,0x00212338) */
/* WARNING: Removing unreachable block (ram,0x002122f0) */
/* WARNING: Removing unreachable block (ram,0x002124e8) */
/* WARNING: Removing unreachable block (ram,0x00211eec) */

void FUN_00211e74(long param_1)

{
  undefined *puVar1;
  long *plVar2;
  int iVar3;
  char cVar4;
  short sVar5;
  undefined4 uVar6;
  long lVar7;
  long ******pppppplVar8;
  long *plVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined *puVar12;
  long *plVar13;
  int iVar14;
  bool bVar15;
  int iVar16;
  long *plVar17;
  long *****ppppplVar18;
  undefined8 uVar19;
  long ******pppppplVar20;
  long lVar21;
  int *piVar22;
  undefined8 uVar23;
  undefined *local_138;
  undefined1 local_130;
  undefined1 auStack_128 [72];
  long *local_e0;
  undefined4 local_d4;
  undefined8 local_d0;
  long ******local_c8;
  long ******local_c0;
  long local_b8;
  undefined8 local_b0;
  int local_64;
  undefined1 local_60 [8];
  char local_58;
  long local_50 [2];
  
  switch(*(undefined4 *)(param_1 + 100)) {
  case 0:
    lVar21 = param_1 + 0x350;
    uVar6 = FUN_001ab32c(lVar21);
    *(undefined4 *)(param_1 + 1000) = uVar6;
    uVar19 = FUN_001b7ba4(lVar21);
    *(undefined8 *)(param_1 + 0x3e0) = uVar19;
    FUN_001b7f58(&local_138,lVar21);
    lVar7 = FUN_0018b798(&local_138);
    if ((lVar7 == 0) || (sVar5 = FUN_001ab2fc(lVar21), sVar5 == 0)) {
      local_138 = PTR_DAT_04bc0ec8 + 0x10;
      FUN_0018b1a0(&local_138);
      lVar21 = *(long *)(param_1 + 0x3e0);
    }
    else {
      cVar4 = FUN_001b90f8(lVar21);
      puVar12 = PTR_DAT_04bc0ec8 + 0x10;
      local_138 = puVar12;
      FUN_0018b1a0(&local_138);
      if (cVar4 != '\0') {
        FUN_001b8014(&local_b0);
        uVar19 = FUN_001a4fac(lVar21);
        FUN_001a5774(&local_b0,uVar19);
        uVar6 = FUN_001b90f8(lVar21);
        FUN_001b567c(&local_b0,uVar6);
        FUN_001b9300(&local_138,lVar21);
        FUN_001b9258(&local_b0,&local_138);
        local_138 = puVar12;
        FUN_0018b1a0(&local_138);
        local_130 = 0;
        puVar12 = PTR_DAT_04bccb60 + 0x10;
        local_138 = puVar12;
        FUN_001b8014(auStack_128);
        puVar1 = PTR_DAT_04bccb68 + 0x10;
        local_138 = puVar1;
        FUN_001b3d58(auStack_128,&local_b0);
        local_b8 = CONCAT44(local_b8._4_4_,*(undefined4 *)(param_1 + 1000));
        plVar9 = (long *)FUN_00187df4(0x98);
        *plVar9 = 0;
        plVar9[2] = (long)puVar12;
        *(undefined1 *)(plVar9 + 3) = local_130;
        FUN_001b8358(plVar9 + 4,auStack_128);
        plVar9[1] = param_1 + 0x2b0;
        plVar9[2] = (long)puVar1;
        *(undefined4 *)(plVar9 + 0x12) = (undefined4)local_b8;
        lVar21 = *(long *)(param_1 + 0x2b0);
        *plVar9 = lVar21;
        *(long **)(lVar21 + 8) = plVar9;
        *(long **)(param_1 + 0x2b0) = plVar9;
        *(long *)(param_1 + 0x2c0) = *(long *)(param_1 + 0x2c0) + 1;
        local_138 = puVar12;
        FUN_001b8504(auStack_128);
        FUN_001b8504(&local_b0);
      }
      lVar21 = *(long *)(param_1 + 0x3e0);
    }
    if ((lVar21 == 0) && (*(int *)(param_1 + 1000) == 0)) {
      local_b0 = CONCAT44(local_b0._4_4_,0x80050003);
      FUN_0018aa70(&local_138,&local_b0);
      FUN_0018ab44(param_1 + 0x338,&local_138);
      *(undefined4 *)(param_1 + 100) = 5;
      FUN_00194970(param_1);
      return;
    }
    *(undefined4 *)(param_1 + 100) = 2;
    return;
  case 1:
    break;
  case 2:
    if ((*(long *)(param_1 + 0x3e0) == 0) || (*(long *)(param_1 + 0x2c0) == 0)) {
LAB_00211f00:
      uVar6 = 1;
    }
    else {
      if (*(long *)(param_1 + 0x130) == 0) {
        puVar12 = (undefined *)0x0;
      }
      else {
        puVar12 = (undefined *)0x0;
        if (*(long *)(*(long *)(param_1 + 0x130) + 0x10) != 0) {
          puVar12 = PTR_LAB_04bccbd8;
        }
      }
      uVar6 = 3;
      if (puVar12 == (undefined *)0x0) goto LAB_00211f00;
    }
    *(undefined4 *)(param_1 + 100) = uVar6;
switchD_00211e94_default:
    return;
  case 3:
    if (*(long *)(param_1 + 0x2c0) == 0) {
      local_c8 = (long ******)CONCAT44(local_c8._4_4_,0x80050003);
      FUN_0018aa70(&local_b0,&local_c8);
      FUN_0018ab44(param_1 + 0x338,&local_b0);
      *(undefined4 *)(param_1 + 100) = 5;
      FUN_00194970(param_1);
      return;
    }
    lVar21 = *(long *)(*(long *)(param_1 + 0x2a0) + 8);
    uVar19 = *(undefined8 *)(*(long *)(*(long *)(lVar21 + 0x60) + 0x78) + 0x30);
    if (*(long **)(param_1 + 0x138) != (long *)0x0) {
      (**(code **)(**(long **)(param_1 + 0x138) + 8))();
    }
    lVar7 = FUN_00185a6c(0x30);
    if (lVar7 != 0) {
      FUN_00195a88(lVar7);
    }
    *(long *)(param_1 + 0x138) = lVar7;
    lVar21 = *(long *)(lVar21 + 0x48);
    if (lVar21 == 0) {
      uVar11 = 0;
      lVar21 = *(long *)(param_1 + 0x130);
      if (lVar21 == 0) goto LAB_00212954;
LAB_00212748:
      FUN_00206bd8(lVar7,uVar11,*(undefined8 *)(lVar21 + 0x10),param_1 + 0x148);
      plVar9 = *(long **)(param_1 + 0x140);
    }
    else {
      uVar11 = *(undefined8 *)(lVar21 + 0x10);
      lVar21 = *(long *)(param_1 + 0x130);
      if (lVar21 != 0) goto LAB_00212748;
LAB_00212954:
      FUN_00206bd8(lVar7,uVar11,0,param_1 + 0x148);
      plVar9 = *(long **)(param_1 + 0x140);
    }
    if (plVar9 != (long *)0x0) {
      (**(code **)(*plVar9 + 8))();
    }
    lVar21 = FUN_00185a6c(0x30);
    if (lVar21 != 0) {
      FUN_00195a88(lVar21);
    }
    lVar7 = *(long *)(param_1 + 0x2b8);
    *(long *)(param_1 + 0x140) = lVar21;
    local_b8 = 0;
    local_c8 = (long ******)&local_c8;
    local_c0 = (long ******)&local_c8;
    while (lVar7 != param_1 + 0x2b0) {
      FUN_001b8358(&local_b0,lVar7 + 0x20);
      FUN_001b9114(&local_b0,*(undefined4 *)(lVar7 + 0x90));
      pppppplVar8 = (long ******)FUN_00187df4(0x80);
      *pppppplVar8 = (long *****)0x0;
      FUN_001b8358(pppppplVar8 + 2,&local_b0);
      *pppppplVar8 = (long *****)local_c8;
      pppppplVar8[1] = (long *****)&local_c8;
      local_c8[1] = (long *****)pppppplVar8;
      local_b8 = local_b8 + 1;
      lVar7 = *(long *)(lVar7 + 8);
      local_c8 = pppppplVar8;
      FUN_001b8504(&local_b0);
    }
    local_b0 = param_1;
    FUN_00198814(param_1 + 0x210,PTR_LAB_04bccda8,&local_b0,0);
    uVar11 = *(undefined8 *)(*(long *)(param_1 + 0x138) + 0x10);
    local_d0 = *(undefined8 *)(param_1 + 0x3d8);
    uVar23 = *(undefined8 *)(*(long *)(param_1 + 0x140) + 0x10);
    uVar6 = FUN_0018d548(&local_d0);
    local_e0 = (long *)(param_1 + 0x3f0);
    uVar10 = FUN_001a5070(uVar19,param_1 + 0x210,uVar11,uVar23,&local_c8,param_1 + 0x2a8,uVar6,0);
    if ((uVar10 & 1) == 0) {
      local_d4 = 0x8001000d;
      FUN_0018aa70(&local_b0,&local_d4);
      FUN_0018ab44(param_1 + 0x338,&local_b0);
      *(undefined4 *)(param_1 + 100) = 4;
      FUN_0019c910(param_1,4);
joined_r0x00212994:
      if (local_b8 != 0) {
        ppppplVar18 = *local_c0;
        ppppplVar18[1] = (long ****)local_c8[1];
        *local_c8[1] = (long ****)ppppplVar18;
        local_b8 = 0;
        pppppplVar8 = local_c0;
        while ((long *******)pppppplVar8 != &local_c8) {
          pppppplVar20 = (long ******)pppppplVar8[1];
          (*(code *)*pppppplVar8[2])();
          FUN_00187e4c(pppppplVar8);
          pppppplVar8 = pppppplVar20;
        }
      }
      return;
    }
    piVar22 = (int *)(*(long *)(param_1 + 0x3f0) + 8);
    iVar16 = *piVar22;
    if (iVar16 == *piVar22) {
      cVar4 = '\x01';
      bVar15 = (bool)ExclusiveMonitorPass(piVar22,0x10);
      if (bVar15) {
        *piVar22 = *piVar22 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
      if (cVar4 == '\0') {
LAB_0021297c:
        *(undefined4 *)(param_1 + 100) = 4;
        FUN_0019c910(param_1,2);
        goto joined_r0x00212994;
      }
    }
    else {
      ClearExclusiveLocal();
    }
    do {
      iVar14 = *piVar22;
      if (iVar14 == iVar16) {
        cVar4 = '\x01';
        bVar15 = (bool)ExclusiveMonitorPass(piVar22,0x10);
        if (bVar15) {
          *piVar22 = iVar16 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
        if (cVar4 == '\0') goto LAB_0021297c;
      }
      else {
        ClearExclusiveLocal();
      }
      iVar16 = iVar14;
    } while( true );
  case 4:
    plVar9 = *(long **)(param_1 + 0x3f0);
    if (plVar9 != (long *)0x0) {
      plVar13 = plVar9 + 1;
      iVar16 = (int)*plVar13;
      iVar14 = (int)*plVar13 + -1;
      if (iVar16 != (int)*plVar13) {
        ClearExclusiveLocal();
LAB_00212b70:
        do {
          lVar21 = *plVar13;
          iVar14 = iVar16 + -1;
          if ((int)lVar21 == iVar16) {
            cVar4 = '\x01';
            bVar15 = (bool)ExclusiveMonitorPass(plVar13,0x10);
            if (bVar15) {
              *(int *)plVar13 = iVar14;
              cVar4 = ExclusiveMonitorsStatus();
            }
            if (cVar4 == '\0') goto LAB_00212a84;
          }
          else {
            ClearExclusiveLocal();
          }
          iVar16 = (int)lVar21;
        } while( true );
      }
      cVar4 = '\x01';
      bVar15 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar15) {
        *(int *)plVar13 = iVar14;
        cVar4 = ExclusiveMonitorsStatus();
      }
      if (cVar4 != '\0') goto LAB_00212b70;
LAB_00212a84:
      if ((iVar14 == 0) && (*(char *)((long)plVar9 + 0xc) == '\0')) {
        *(undefined1 *)((long)plVar9 + 0xc) = 1;
        (**(code **)(*plVar9 + 8))();
      }
      *(undefined8 *)(param_1 + 0x3f0) = 0;
    }
    local_60[0] = 1;
    uVar10 = FUN_0018aad8(param_1 + 0x338,local_60);
    if ((uVar10 & 1) == 0) goto LAB_00212b3c;
    FUN_00195bd8(*(undefined8 *)(param_1 + 0x140));
    lVar21 = *(long *)(param_1 + 0x140);
    iVar16 = *(int *)(param_1 + 0x148);
    FUN_00195a88(local_60);
    FUN_001969e4(lVar21,local_60);
    if (*(char *)(lVar21 + 8) == '\0') {
      FUN_001967bc(local_60,&local_64,4,1);
      iVar14 = local_64;
      FUN_00195bf0(local_60);
      if ((local_58 != '\0') || (iVar14 != iVar16 + 1)) goto LAB_00212af8;
    }
    else {
      FUN_00195bf0(local_60);
LAB_00212af8:
      local_64 = -0x7ffafff6;
      FUN_0018aa70(local_60,&local_64);
      FUN_0018ab44(param_1 + 0x338,local_60);
    }
    plVar9 = *(long **)(param_1 + 0x2a0);
    if (plVar9 != (long *)0x0) {
      (**(code **)(*plVar9 + 0x118))(plVar9,*(long *)(*(long *)(param_1 + 0x130) + 0x10) + 0x58);
    }
LAB_00212b3c:
    *(undefined4 *)(param_1 + 100) = 5;
    FUN_00194970(param_1);
    return;
  default:
    goto switchD_00211e94_default;
  }
  lVar21 = *(long *)(*(long *)(param_1 + 0x2a0) + 8);
  plVar13 = (long *)(*(long *)(*(long *)(*(long *)(lVar21 + 0x48) + 0x10) + 0x30) + 0x10);
  plVar9 = (long *)*plVar13;
  if (plVar9 == (long *)0x0) {
LAB_002121b0:
    plVar9 = (long *)0x0;
  }
  else {
    plVar17 = plVar13;
    do {
      plVar2 = plVar9;
      if ((ulong)plVar9[4] < *(ulong *)(param_1 + 0x3e0)) {
        plVar2 = plVar17;
        plVar9 = plVar9 + 1;
      }
      plVar9 = (long *)*plVar9;
      plVar17 = plVar2;
    } while (plVar9 != (long *)0x0);
    if ((plVar2 == plVar13) || (*(ulong *)(param_1 + 0x3e0) < (ulong)plVar2[4])) goto LAB_002121b0;
    plVar9 = (long *)plVar2[6];
    if ((plVar9 != (long *)0x0) && (plVar13 = plVar9 + 1, (int)*plVar13 != 0)) {
      lVar7 = *plVar13;
      if ((int)lVar7 == (int)*plVar13) {
        cVar4 = '\x01';
        bVar15 = (bool)ExclusiveMonitorPass(plVar13,0x10);
        if (bVar15) {
          *(int *)plVar13 = (int)*plVar13 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
        if (cVar4 != '\0') goto LAB_00212680;
        bVar15 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_00212680:
        bVar15 = false;
      }
      iVar16 = (int)lVar7;
      if (!bVar15) {
        do {
          lVar7 = *plVar13;
          if ((int)lVar7 == iVar16) {
            cVar4 = '\x01';
            bVar15 = (bool)ExclusiveMonitorPass(plVar13,0x10);
            if (bVar15) {
              *(int *)plVar13 = iVar16 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
            if (cVar4 == '\0') break;
          }
          else {
            ClearExclusiveLocal();
          }
          iVar16 = (int)lVar7;
        } while( true );
      }
    }
  }
  plVar13 = *(long **)(param_1 + 0x130);
  if (plVar13 == plVar9) {
LAB_00212398:
    if (plVar9 == (long *)0x0) goto LAB_00212458;
LAB_0021239c:
    plVar13 = plVar9 + 1;
    iVar16 = (int)*plVar13;
    iVar14 = (int)*plVar13 + -1;
    if (iVar16 != (int)*plVar13) {
      ClearExclusiveLocal();
LAB_00212420:
      do {
        lVar7 = *plVar13;
        iVar14 = iVar16 + -1;
        if ((int)lVar7 == iVar16) {
          cVar4 = '\x01';
          bVar15 = (bool)ExclusiveMonitorPass(plVar13,0x10);
          if (bVar15) {
            *(int *)plVar13 = iVar14;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') goto LAB_002123d4;
        }
        else {
          ClearExclusiveLocal();
        }
        iVar16 = (int)lVar7;
      } while( true );
    }
    cVar4 = '\x01';
    bVar15 = (bool)ExclusiveMonitorPass(plVar13,0x10);
    if (bVar15) {
      *(int *)plVar13 = iVar14;
      cVar4 = ExclusiveMonitorsStatus();
    }
    if (cVar4 != '\0') goto LAB_00212420;
LAB_002123d4:
    if (iVar14 != 0) goto LAB_00212458;
    piVar22 = (int *)((long)plVar9 + 0xc);
    (**(code **)(*plVar9 + 0x10))(plVar9);
    iVar14 = *piVar22 + -1;
    iVar16 = *piVar22;
    if (iVar16 == *piVar22) {
      cVar4 = '\x01';
      bVar15 = (bool)ExclusiveMonitorPass(piVar22,0x10);
      if (bVar15) {
        *piVar22 = iVar14;
        cVar4 = ExclusiveMonitorsStatus();
      }
      if (cVar4 != '\0') goto LAB_0021244c;
      bVar15 = true;
    }
    else {
      ClearExclusiveLocal();
LAB_0021244c:
      bVar15 = false;
    }
    if (!bVar15) {
      do {
        iVar3 = *piVar22;
        iVar14 = iVar16 + -1;
        if (iVar3 == iVar16) {
          cVar4 = '\x01';
          bVar15 = (bool)ExclusiveMonitorPass(piVar22,0x10);
          if (bVar15) {
            *piVar22 = iVar14;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') break;
        }
        else {
          ClearExclusiveLocal();
        }
        iVar16 = iVar3;
      } while( true );
    }
    if (iVar14 != 0) goto LAB_00212458;
    (**(code **)(*plVar9 + 8))(plVar9);
    lVar7 = *(long *)(param_1 + 0x3e0);
  }
  else {
    if (plVar13 == (long *)0x0) {
LAB_002122b8:
      *(long **)(param_1 + 0x130) = plVar9;
    }
    else {
      plVar17 = plVar13 + 1;
      iVar16 = (int)*plVar17;
      iVar14 = (int)*plVar17 + -1;
      if (iVar16 != (int)*plVar17) {
        ClearExclusiveLocal();
LAB_00212280:
        do {
          lVar7 = *plVar17;
          iVar14 = iVar16 + -1;
          if ((int)lVar7 == iVar16) {
            cVar4 = '\x01';
            bVar15 = (bool)ExclusiveMonitorPass(plVar17,0x10);
            if (bVar15) {
              *(int *)plVar17 = iVar14;
              cVar4 = ExclusiveMonitorsStatus();
            }
            if (cVar4 == '\0') goto LAB_00212234;
          }
          else {
            ClearExclusiveLocal();
          }
          iVar16 = (int)lVar7;
        } while( true );
      }
      cVar4 = '\x01';
      bVar15 = (bool)ExclusiveMonitorPass(plVar17,0x10);
      if (bVar15) {
        *(int *)plVar17 = iVar14;
        cVar4 = ExclusiveMonitorsStatus();
      }
      if (cVar4 != '\0') goto LAB_00212280;
LAB_00212234:
      if (iVar14 != 0) goto LAB_002122b8;
      piVar22 = (int *)((long)plVar13 + 0xc);
      (**(code **)(*plVar13 + 0x10))(plVar13);
      iVar14 = *piVar22 + -1;
      iVar16 = *piVar22;
      if (iVar16 == *piVar22) {
        cVar4 = '\x01';
        bVar15 = (bool)ExclusiveMonitorPass(piVar22,0x10);
        if (bVar15) {
          *piVar22 = iVar14;
          cVar4 = ExclusiveMonitorsStatus();
        }
        if (cVar4 != '\0') goto LAB_002122ac;
        bVar15 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_002122ac:
        bVar15 = false;
      }
      if (!bVar15) {
        do {
          iVar3 = *piVar22;
          iVar14 = iVar16 + -1;
          if (iVar3 == iVar16) {
            cVar4 = '\x01';
            bVar15 = (bool)ExclusiveMonitorPass(piVar22,0x10);
            if (bVar15) {
              *piVar22 = iVar14;
              cVar4 = ExclusiveMonitorsStatus();
            }
            if (cVar4 == '\0') break;
          }
          else {
            ClearExclusiveLocal();
          }
          iVar16 = iVar3;
        } while( true );
      }
      if (iVar14 != 0) goto LAB_002122b8;
      (**(code **)(*plVar13 + 8))(plVar13);
      *(long **)(param_1 + 0x130) = plVar9;
    }
    if (plVar9 != (long *)0x0) {
      plVar13 = plVar9 + 1;
      if ((int)*plVar13 != 0) {
        iVar16 = (int)*plVar13;
        if (iVar16 != (int)*plVar13) {
          ClearExclusiveLocal();
LAB_00212374:
          do {
            lVar7 = *plVar13;
            if ((int)lVar7 == iVar16) {
              cVar4 = '\x01';
              bVar15 = (bool)ExclusiveMonitorPass(plVar13,0x10);
              if (bVar15) {
                *(int *)plVar13 = iVar16 + 1;
                cVar4 = ExclusiveMonitorsStatus();
              }
              if (cVar4 == '\0') goto LAB_00212398;
            }
            else {
              ClearExclusiveLocal();
            }
            iVar16 = (int)lVar7;
          } while( true );
        }
        cVar4 = '\x01';
        bVar15 = (bool)ExclusiveMonitorPass(plVar13,0x10);
        if (bVar15) {
          *(int *)plVar13 = (int)*plVar13 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
        if (cVar4 != '\0') goto LAB_00212374;
      }
      goto LAB_0021239c;
    }
LAB_00212458:
    lVar7 = *(long *)(param_1 + 0x3e0);
  }
  if (lVar7 != 0) {
    if (*(long *)(param_1 + 0x130) != 0) {
      puVar12 = (undefined *)0x0;
      if (*(long *)(*(long *)(param_1 + 0x130) + 0x10) != 0) {
        puVar12 = PTR_LAB_04bccbd8;
      }
      if (puVar12 != (undefined *)0x0) goto LAB_00212550;
    }
    if (*(int *)(param_1 + 0x7c) == 0) {
      uVar19 = *(undefined8 *)(*(long *)(lVar21 + 0x60) + 0x10);
      local_50[0] = param_1;
      FUN_00198814(param_1 + 0x68,PTR_FUN_04bccda0,local_50,1);
      uVar10 = FUN_002070ec(*(undefined8 *)(*(long *)(*(long *)(lVar21 + 0x48) + 0x10) + 0x30),
                            param_1 + 0x68,uVar19,*(undefined8 *)(param_1 + 0x3e0),param_1 + 0x128);
      if ((uVar10 & 1) == 0) goto LAB_002125f0;
    }
  }
LAB_00212550:
  iVar16 = *(int *)(param_1 + 0x164);
  if ((*(long *)(param_1 + 0x2c0) == 0) && (iVar16 == 0)) {
    local_50[0] = param_1;
    FUN_00198814(param_1 + 0x150,PTR_FUN_04bccda0,local_50,1);
    local_50[0] = *(long *)(param_1 + 0x3e0);
    uVar10 = FUN_00200a30(*(long *)(lVar21 + 0x50) + 0x20,param_1 + 0x150,&DAT_04c5eee1,
                          (long)local_50 + 0x1c,local_50,param_1 + 0x2b0);
    if ((uVar10 & 1) == 0) {
LAB_002125f0:
      FUN_0018aa70(local_50,(long)local_50 + 0x1c);
      FUN_0018ab44(param_1 + 0x338,local_50);
      *(undefined4 *)(param_1 + 100) = 5;
      FUN_00194970(param_1);
      return;
    }
    iVar16 = *(int *)(param_1 + 0x164);
  }
  if ((*(int *)(param_1 + 0x7c) == 1) || (iVar16 == 1)) {
    *(undefined4 *)(param_1 + 100) = 2;
    FUN_0019c910(param_1,2);
    return;
  }
  *(undefined4 *)(param_1 + 100) = 3;
  return;
}


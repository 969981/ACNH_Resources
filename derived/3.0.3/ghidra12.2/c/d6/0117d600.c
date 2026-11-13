
/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_0117d600(long *param_1,uint *param_2,uint param_3,int param_4,char *param_5)

{
  int iVar1;
  uint uVar2;
  uint *puVar3;
  uint uVar4;
  int iVar5;
  uint *****pppppuVar6;
  ulong uVar7;
  int iVar8;
  char *pcVar9;
  uint *******pppppppuVar10;
  ulong uVar11;
  long lVar12;
  uint uVar13;
  int *piVar14;
  uint *******pppppppuVar15;
  long lVar16;
  long *plVar17;
  long lVar18;
  int iVar19;
  uint *******local_ec0;
  uint *******local_eb8;
  int local_eb0;
  int local_eac;
  uint *local_ea8;
  uint *local_ea0;
  int local_e98;
  char local_e94 [4];
  undefined4 local_e90;
  uint *****local_e88;
  uint local_e80;
  undefined1 *local_e78;
  undefined8 local_e70;
  uint local_e68;
  undefined1 auStack_e64 [4];
  undefined1 auStack_e60 [512];
  uint *local_c60;
  undefined1 local_c58;
  undefined4 local_c54;
  undefined8 local_2a8;
  uint local_290;
  uint uStack_28c;
  uint local_288;
  int local_284;
  int local_278;
  undefined4 local_26c [131];
  
  iVar5 = (int)param_1[2];
  if (iVar5 != 0) {
    if (param_5 == (char *)0x0) {
      lVar18 = *param_1;
      iVar8 = *(int *)((long)param_1 + 0xc);
      do {
        iVar19 = 0;
        if ((int)param_1[1] <= iVar8) {
          iVar19 = (int)param_1[1];
        }
        iVar19 = iVar8 - iVar19;
        if (*(int *)(lVar18 + (long)iVar19 * 0x270 + 0x14) == param_4) goto LAB_0117d884;
        iVar5 = iVar5 + -1;
        iVar8 = iVar8 + 1;
      } while (iVar5 != 0);
    }
    else {
      iVar8 = 0;
      do {
        iVar19 = *(int *)((long)param_1 + 0xc) + iVar8;
        lVar18 = *param_1;
        iVar1 = 0;
        if ((int)param_1[1] <= iVar19) {
          iVar1 = (int)param_1[1];
        }
        iVar19 = iVar19 - iVar1;
        if (*(int *)(lVar18 + (long)iVar19 * 0x270 + 0x14) == param_4) {
          lVar16 = lVar18 + (long)iVar19 * 0x270;
          plVar17 = (long *)(lVar16 + 0x18);
          (**(code **)(*plVar17 + 0x18))(plVar17);
          (**(code **)(*plVar17 + 0x18))(plVar17);
          pcVar9 = *(char **)(lVar16 + 0x20);
          if (pcVar9 == param_5) goto LAB_0117d884;
          if (*pcVar9 == *param_5) {
            if (*pcVar9 == '\0') goto LAB_0117d884;
            uVar11 = 0;
            do {
              uVar7 = uVar11;
              if (pcVar9[uVar7 + 1] != param_5[uVar7 + 1]) goto LAB_0117d790;
              if (pcVar9[uVar7 + 1] == '\0') goto LAB_0117d784;
              if (pcVar9[uVar7 + 2] != param_5[uVar7 + 2]) goto LAB_0117d790;
              if (pcVar9[uVar7 + 2] == '\0') {
                uVar7 = uVar7 + 1;
                goto LAB_0117d784;
              }
              if ((uVar7 == 0x7fffe) || (pcVar9[uVar7 + 3] != param_5[uVar7 + 3]))
              goto LAB_0117d790;
              uVar11 = uVar7 + 3;
            } while (pcVar9[uVar7 + 3] != '\0');
            uVar7 = uVar7 + 2;
LAB_0117d784:
            if (uVar7 < 0x80000) goto LAB_0117d884;
          }
        }
LAB_0117d790:
        iVar8 = iVar8 + 1;
      } while (iVar5 != iVar8);
    }
  }
  local_eb0 = 0;
  local_c60 = (uint *)(param_1 + 0x1383);
  local_eb8 = (uint *******)&local_e88;
  local_ec0 = (uint *******)&PTR_LAB_04983608;
  uVar13 = *local_c60;
  uVar4 = *(uint *)((long)param_1 + 0x9c24);
  *local_c60 = *(uint *)((long)param_1 + 0x9c1c);
  *(int *)((long)param_1 + 0x9c1c) = (int)param_1[0x1384];
  uVar13 = uVar13 ^ uVar13 << 0xb;
  local_e90._3_1_ = 0;
  local_e94[0] = '\0';
  local_e68 = 0;
  local_e98 = 8;
  local_e88 = (uint *****)&DAT_049835d0;
  local_ea8 = (uint *)(PTR_DAT_04bb3768 + 0x10);
  local_c58 = 0;
  local_c54 = 0;
  uVar13 = uVar13 >> 8 ^ uVar4 >> 0x13 ^ uVar13 ^ uVar4;
  *(uint *)(param_1 + 0x1384) = uVar4;
  *(uint *)((long)param_1 + 0x9c24) = uVar13;
  local_e80 = 0x80;
  uVar13 = (uint)((ulong)uVar13 * (ulong)param_3 >> 0x20);
  *param_2 = uVar13;
  local_e78 = auStack_e64;
  local_e70 = 0x80;
  local_eac = param_4;
  local_ea0 = (uint *)local_e94;
  if (param_5 == (char *)0x0) {
    pppppuVar6 = (uint *****)&DAT_049835d0;
  }
  else {
    pppppuVar6 = (uint *****)&DAT_049835d0;
    if (local_e94 != param_5) {
      lVar18 = 0;
      do {
        if (param_5[lVar18] == '\0') goto LAB_0117db00;
        if (param_5[lVar18 + 1] == '\0') {
          lVar18 = lVar18 + 1;
          goto LAB_0117db00;
        }
        if (param_5[lVar18 + 2] == '\0') {
          lVar18 = lVar18 + 2;
          goto LAB_0117db00;
        }
        lVar18 = lVar18 + 3;
      } while (lVar18 != 0x80001);
      lVar18 = 0;
LAB_0117db00:
      iVar5 = (int)lVar18;
      if (6 < iVar5) {
        iVar5 = 7;
      }
      memcpy(local_e94,param_5,(long)iVar5);
      local_e94[iVar5] = '\0';
      pppppuVar6 = (uint *****)*local_eb8;
    }
  }
  (*(code *)pppppuVar6[3])();
  local_eb0 = 8;
  if ((0 < (int)local_e68) && (local_e68 == local_e80)) {
    local_e68 = local_e68 - 1;
  }
  if ((int)local_e70 <= (int)local_e68) {
    if (0 < (int)local_e68) {
      local_e68 = local_e68 - 1;
    }
    if ((int)local_e70 <= (int)local_e68) goto LAB_0117dba8;
  }
  local_e68 = local_e68 + 1;
  iVar5 = (int)local_e70;
  if (0 < local_e70._4_4_) {
    iVar5 = local_e70._4_4_;
  }
  local_e70 = CONCAT44(iVar5 + -1,(int)local_e70);
  iVar8 = (int)local_e70;
  if (iVar5 <= (int)local_e70) {
    iVar8 = 0;
  }
  *(uint *)(local_e78 + (long)((iVar5 + -1) - iVar8) * 4) = uVar13;
LAB_0117dba8:
  iVar5 = (int)param_1[2];
  iVar8 = (int)param_1[1];
  if (iVar8 <= iVar5) {
    if (0 < iVar5) {
      iVar19 = 0;
      if (*(int *)((long)param_1 + 0xc) + 1 < iVar8) {
        iVar19 = *(int *)((long)param_1 + 0xc) + 1;
      }
      *(int *)((long)param_1 + 0xc) = iVar19;
      *(int *)(param_1 + 2) = iVar5 + -1;
      iVar5 = iVar5 + -1;
    }
    if (iVar8 <= iVar5) {
      return 0;
    }
  }
  lVar18 = *param_1;
  *(int *)(param_1 + 2) = iVar5 + 1;
  iVar5 = *(int *)((long)param_1 + 0xc) + iVar5;
  iVar19 = 0;
  if (iVar8 <= iVar5) {
    iVar19 = iVar8;
  }
  iVar5 = iVar5 - iVar19;
  lVar16 = lVar18 + (long)iVar5 * 0x270;
  *(int *)(lVar16 + 0x14) = local_eac;
  pcVar9 = *(char **)(lVar16 + 0x20);
  (**(code **)(local_ea8 + 6))(&local_ea8);
  puVar3 = local_ea0;
  if ((uint *)pcVar9 != local_ea0) {
    (**(code **)(local_ea8 + 6))(&local_ea8);
    lVar16 = 0;
    do {
      if (*(char *)((long)local_ea0 + lVar16) == '\0') goto LAB_0117dc9c;
      if (*(char *)((long)local_ea0 + lVar16 + 1) == '\0') {
        lVar16 = lVar16 + 1;
        goto LAB_0117dc9c;
      }
      if (*(char *)((long)local_ea0 + lVar16 + 2) == '\0') {
        lVar16 = lVar16 + 2;
        goto LAB_0117dc9c;
      }
      lVar16 = lVar16 + 3;
    } while (lVar16 != 0x80001);
    lVar16 = 0;
LAB_0117dc9c:
    iVar19 = *(int *)(lVar18 + (long)iVar5 * 0x270 + 0x28);
    iVar8 = (int)lVar16;
    if (iVar19 <= (int)lVar16) {
      iVar8 = iVar19 + -1;
    }
    memcpy(pcVar9,puVar3,(long)iVar8);
    pcVar9[iVar8] = '\0';
  }
  uVar13 = local_e68;
  if (0x7f < (int)local_e68) {
    uVar13 = 0x80;
  }
  if (0 < (int)local_e68) {
    uVar11 = 0;
    do {
      iVar8 = 0;
      if ((int)local_e70 <= (int)uVar11 + local_e70._4_4_) {
        iVar8 = (int)local_e70;
      }
      local_26c[uVar11] =
           *(undefined4 *)(local_e78 + ((uVar11 - (long)iVar8) + (long)local_e70._4_4_) * 4);
      uVar11 = uVar11 + 1;
    } while (uVar13 != uVar11);
  }
  lVar16 = lVar18 + (long)iVar5 * 0x270;
  *(uint *)(lVar16 + 0x40) = local_e80;
  if ((uint *)(lVar16 + 0x38) != &local_290) {
    lVar12 = lVar18 + (long)iVar5 * 0x270;
    *(undefined8 *)(lVar12 + 0x54) = 0;
    if ((int)*(uint *)(lVar12 + 0x50) <= (int)uVar13) {
      uVar13 = *(uint *)(lVar12 + 0x50);
    }
    if (0 < (int)uVar13) {
      uVar11 = 0;
      do {
        local_278 = 0x80;
        iVar8 = 0;
        if (0x7f < (int)uVar11) {
          iVar8 = local_278;
        }
        *(undefined4 *)(*(long *)(lVar16 + 0x48) + uVar11 * 4) = local_26c[uVar11 - (long)iVar8];
        uVar11 = uVar11 + 1;
      } while (uVar13 != uVar11);
    }
    *(uint *)(lVar12 + 0x58) = uVar13;
  }
  lVar18 = lVar18 + (long)iVar5 * 0x270;
  *(uint **)(lVar18 + 0x260) = local_c60;
  *(undefined1 *)(lVar18 + 0x268) = local_c58;
  *(undefined4 *)(lVar18 + 0x26c) = local_c54;
  return 0;
LAB_0117d884:
  lVar16 = lVar18 + (long)iVar19 * 0x270;
  piVar14 = (int *)(lVar16 + 0x58);
  if (*piVar14 < 1) {
    uVar13 = 0xffffffff;
  }
  else {
    lVar12 = lVar18 + (long)iVar19 * 0x270;
    iVar5 = 0;
    if (*(int *)(lVar12 + 0x50) <= *(int *)(lVar12 + 0x54)) {
      iVar5 = *(int *)(lVar12 + 0x50);
    }
    uVar13 = *(uint *)(*(long *)(lVar12 + 0x48) + (long)(*(int *)(lVar12 + 0x54) - iVar5) * 4);
  }
  local_ec0 = (uint *******)&PTR_LAB_04983630;
  uVar4 = FUN_035a3f60(0x40000000,lVar16,&local_ec0,param_3);
  if (uVar4 != uVar13) goto LAB_0117dae4;
  local_eb0 = 0;
  pppppppuVar15 = (uint *******)&local_eb8;
  local_ea8 = &local_e90;
  for (lVar16 = 0; *(undefined1 **)(local_e94 + lVar16 + 4) = auStack_e64 + lVar16 + -0x14,
      lVar16 != 0xbd0; lVar16 = lVar16 + 0x30) {
    *(undefined1 **)(auStack_e64 + lVar16 + -0x14) = auStack_e60 + lVar16;
  }
  local_2a8 = 0;
  local_e98 = 0x80;
  local_ec0 = (uint *******)&local_ec0;
  local_eb8 = (uint *******)&local_ec0;
  local_ea0 = local_ea8;
  if (0 < (int)param_3) {
    iVar5 = 0;
    uVar4 = 0;
    do {
      puVar3 = local_ea8;
      if (uVar13 != uVar4) {
        if (iVar5 < local_e98) {
          if (local_ea8 != (uint *)0x0) {
            local_ea8 = *(uint **)local_ea8;
          }
          *puVar3 = uVar4;
          pppppppuVar10 = (uint *******)(puVar3 + 2);
          *pppppppuVar10 = (uint ******)0x0;
          *(uint *********)(puVar3 + 4) = &local_ec0;
          *pppppppuVar10 = (uint ******)local_ec0;
          if (local_ec0 != (uint *******)0x0) {
            local_ec0[1] = (uint ******)pppppppuVar10;
          }
          iVar5 = local_eb0 + 1;
          local_ec0 = pppppppuVar10;
          local_eb0 = iVar5;
        }
      }
      uVar4 = uVar4 + 1;
    } while (param_3 != uVar4);
  }
  uVar4 = nn::os::GetSystemTick();
  uVar4 = (uVar4 ^ uVar4 >> 0x1e) * 0x6c078965 + 1;
  uVar2 = (uVar4 ^ uVar4 >> 0x1e) * 0x6c078965 + 2;
  _local_290 = CONCAT44(uVar2,uVar4);
  local_288 = (uVar2 ^ uVar2 >> 0x1e) * 0x6c078965 + 3;
  local_284 = (local_288 ^ local_288 >> 0x1e) * 0x6c078965 + 4;
  FUN_038aaa70(&local_ec0,&local_290);
  if (local_eb0 < 1) {
    local_eb8 = (uint *******)0x0;
  }
  if ((local_eb8 != (uint *******)0x0) && (local_eb8 + -1 != (uint *******)0x0)) {
    uVar13 = *(uint *)(local_eb8 + -1);
  }
  iVar5 = *piVar14;
  lVar16 = lVar18 + (long)iVar19 * 0x270;
  if ((0 < iVar5) && (iVar5 == *(int *)(lVar16 + 0x40))) {
    *piVar14 = iVar5 + -1;
    iVar5 = iVar5 + -1;
  }
  iVar8 = *(int *)(lVar18 + (long)iVar19 * 0x270 + 0x50);
  if (iVar5 < iVar8) {
LAB_0117da90:
    lVar18 = lVar18 + (long)iVar19 * 0x270;
    lVar16 = *(long *)(lVar16 + 0x48);
    *piVar14 = iVar5 + 1;
    iVar19 = *(int *)(lVar18 + 0x54);
    iVar5 = iVar8;
    if (0 < iVar19) {
      iVar5 = iVar19;
    }
    if (iVar5 <= iVar8) {
      iVar8 = 0;
    }
    *(int *)(lVar18 + 0x54) = iVar5 + -1;
    *(uint *)(lVar16 + (long)((iVar5 + -1) - iVar8) * 4) = uVar13;
  }
  else {
    if (0 < iVar5) {
      *piVar14 = iVar5 + -1;
      iVar5 = iVar5 + -1;
    }
    if (iVar5 < iVar8) goto LAB_0117da90;
  }
  do {
    pppppppuVar10 = (uint *******)*pppppppuVar15;
    pppppppuVar15 = pppppppuVar10 + 1;
  } while ((uint ********)pppppppuVar10 != &local_ec0);
  uVar4 = uVar13;
LAB_0117dae4:
  *param_2 = uVar4;
  return 1;
}


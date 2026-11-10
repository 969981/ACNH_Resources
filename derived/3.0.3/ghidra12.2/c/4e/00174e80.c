
ulong FUN_00174e80(long param_1,int param_2,long *param_3)

{
  long *plVar1;
  undefined8 *puVar2;
  ulong uVar3;
  byte bVar4;
  undefined2 uVar5;
  undefined4 uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  void *__dest;
  undefined8 uVar10;
  size_t sVar11;
  char *pcVar12;
  long *plVar13;
  ulong uVar14;
  uint *puVar15;
  ulong *puVar16;
  long lVar17;
  byte *pbVar18;
  undefined8 *puVar19;
  byte bVar20;
  ulong uVar21;
  long lVar22;
  void *__src;
  undefined8 local_40;
  long local_38;
  
  if (10000 < param_2) {
    if (param_2 < 0x27a3) {
      if (0x2785 < param_2) {
        if (param_2 < 0x2796) {
          if (param_2 != 0x2786) {
            if (param_2 == 0x2793) {
              uVar9 = *(uint *)(param_3 + 3);
              if (((int)uVar9 < 0) && (*(uint *)(param_3 + 3) = uVar9 + 8, uVar9 < 0xfffffff9)) {
                puVar19 = (undefined8 *)(param_3[1] + (long)(int)uVar9);
              }
              else {
                puVar19 = (undefined8 *)*param_3;
                *param_3 = (long)(puVar19 + 1);
              }
              uVar9 = 0;
              *(undefined8 *)(param_1 + 0x7a0) = *puVar19;
              goto switchD_00174f1c_caseD_5b;
            }
            goto switchD_00174eec_caseD_27a4;
          }
          param_1 = param_1 + 0xd40;
        }
        else {
          if (param_2 != 0x2796) {
            if (param_2 != 0x2797) goto switchD_00174eec_caseD_27a4;
            uVar9 = *(uint *)(param_3 + 3);
            if (((int)uVar9 < 0) && (*(uint *)(param_3 + 3) = uVar9 + 8, uVar9 < 0xfffffff9)) {
              plVar13 = (long *)(param_3[1] + (long)(int)uVar9);
            }
            else {
              plVar13 = (long *)*param_3;
              *param_3 = (long)(plVar13 + 1);
            }
            lVar22 = *plVar13;
            if (lVar22 != 0) {
              iVar8 = FUN_00144a90(lVar22,&DAT_040ec6a5);
              if (iVar8 == 0) {
                iVar8 = FUN_00144a90(lVar22,&DAT_0409e961);
                if (iVar8 == 0) {
                  iVar8 = FUN_00144a90(lVar22,"FLUSH");
                  if (iVar8 == 0) {
                    iVar8 = FUN_00144a90(lVar22,"RELOAD");
                    if (iVar8 == 0) {
                      if (*(long *)(param_1 + 0xf90) == 0) {
                        uVar10 = FUN_0014b8f4(param_1,0,0,1);
                        *(undefined8 *)(param_1 + 0xf90) = uVar10;
                      }
                      lVar22 = FUN_00143320(lVar22);
                      if ((lVar22 == 0) || (*(long *)(param_1 + 0xf90) == 0)) {
                        FUN_00143300(lVar22);
                        goto LAB_00178e0c;
                      }
                      FUN_0014b7c4(param_1,2,2);
                      iVar8 = thunk_FUN_00144b34("Set-Cookie:",lVar22,0xb);
                      if (iVar8 == 0) {
                        lVar17 = lVar22;
                      }
                      else {
                        lVar17 = lVar22 + 0xb;
                      }
                      FUN_0014bad4(param_1,*(undefined8 *)(param_1 + 0xf90),iVar8 != 0,0,lVar17,0,0,
                                   1);
                      FUN_0014b80c(param_1,2);
                      FUN_00143300(lVar22);
                    }
                    else {
                      FUN_0014b854(param_1);
                    }
                  }
                  else {
                    FUN_0014d118(param_1,0);
                  }
                  goto LAB_00178d1c;
                }
                FUN_0014b7c4(param_1,2,2);
                FUN_0014cfa0(*(undefined8 *)(param_1 + 0xf90));
              }
              else {
                FUN_0014b7c4(param_1,2,2);
                FUN_0014cf48(*(undefined8 *)(param_1 + 0xf90));
              }
              FUN_0014b80c(param_1,2);
            }
            goto LAB_00178d1c;
          }
          param_1 = param_1 + 0xcf0;
        }
        goto LAB_00176eb8;
      }
      switch(param_2) {
      case 0x2711:
        uVar9 = *(uint *)(param_3 + 3);
        if (((int)uVar9 < 0) && (*(uint *)(param_3 + 3) = uVar9 + 8, uVar9 < 0xfffffff9)) {
          puVar19 = (undefined8 *)(param_3[1] + (long)(int)uVar9);
        }
        else {
          puVar19 = (undefined8 *)*param_3;
          *param_3 = (long)(puVar19 + 1);
        }
        uVar9 = 0;
        *(undefined8 *)(param_1 + 0x688) = *puVar19;
        break;
      case 0x2712:
        if ((*(byte *)(param_1 + 0xf88) & 1) != 0) {
          FUN_00143300(*(undefined8 *)(param_1 + 0xf68));
          *(undefined8 *)(param_1 + 0xf68) = 0;
          *(byte *)(param_1 + 0xf88) = *(byte *)(param_1 + 0xf88) & 0xfe;
        }
        if (*(char *)(param_1 + 0x6c1) == '\0') {
          uVar9 = *(uint *)(param_3 + 3);
          if (((int)uVar9 < 0) && (*(uint *)(param_3 + 3) = uVar9 + 8, uVar9 < 0xfffffff9)) {
            puVar19 = (undefined8 *)(param_3[1] + (long)(int)uVar9);
          }
          else {
            puVar19 = (undefined8 *)*param_3;
            *param_3 = (long)(puVar19 + 1);
          }
          uVar10 = FUN_00166cb8(*puVar19);
          uVar9 = FUN_00174db4(param_1 + 0xd68,uVar10);
          FUN_00143300(uVar10);
        }
        else {
          uVar9 = *(uint *)(param_3 + 3);
          if (((int)uVar9 < 0) && (*(uint *)(param_3 + 3) = uVar9 + 8, uVar9 < 0xfffffff9)) {
            puVar19 = (undefined8 *)(param_3[1] + (long)(int)uVar9);
          }
          else {
            puVar19 = (undefined8 *)*param_3;
            *param_3 = (long)(puVar19 + 1);
          }
          uVar9 = FUN_00174db4(param_1 + 0xd68,*puVar19);
        }
        *(undefined8 *)(param_1 + 0xf68) = *(undefined8 *)(param_1 + 0xd68);
        break;
      default:
        goto switchD_00174eec_caseD_27a4;
      case 0x2714:
        param_1 = param_1 + 0xd48;
        goto LAB_00176eb8;
      case 0x2715:
        uVar9 = *(uint *)(param_3 + 3);
        if (((int)uVar9 < 0) && (*(uint *)(param_3 + 3) = uVar9 + 8, uVar9 < 0xfffffff9)) {
          puVar19 = (undefined8 *)(param_3[1] + (long)(int)uVar9);
        }
        else {
          puVar19 = (undefined8 *)*param_3;
          *param_3 = (long)(puVar19 + 1);
        }
        pcVar12 = (char *)*puVar19;
        plVar13 = (long *)(param_1 + 0xe00);
        puVar19 = (undefined8 *)(param_1 + 0xe08);
        goto LAB_00178280;
      case 0x2716:
        uVar9 = *(uint *)(param_3 + 3);
        if (((int)uVar9 < 0) && (*(uint *)(param_3 + 3) = uVar9 + 8, uVar9 < 0xfffffff9)) {
          puVar19 = (undefined8 *)(param_3[1] + (long)(int)uVar9);
        }
        else {
          puVar19 = (undefined8 *)*param_3;
          *param_3 = (long)(puVar19 + 1);
        }
        pcVar12 = (char *)*puVar19;
        plVar13 = (long *)(param_1 + 0xe18);
        puVar19 = (undefined8 *)(param_1 + 0xe20);
LAB_00178280:
        local_40 = 0;
        local_38 = 0;
        if (pcVar12 != (char *)0x0) {
          sVar11 = strlen(pcVar12);
          plVar1 = (long *)0x0;
          if (plVar13 != (long *)0x0) {
            plVar1 = &local_38;
          }
          puVar2 = (undefined8 *)(undefined1 *)0x0;
          if (puVar19 != (undefined8 *)0x0) {
            puVar2 = &local_40;
          }
          uVar9 = FUN_0014fed4(pcVar12,sVar11,plVar1,puVar2,0);
          if (uVar9 != 0) {
            return (ulong)uVar9;
          }
        }
        uVar14 = 0;
        if (plVar13 != (long *)0x0) {
          if ((pcVar12 != (char *)0x0) && (local_38 == 0)) {
            if (*pcVar12 == ':') {
              local_38 = FUN_00143320(&DAT_0407ebb1);
              uVar9 = 0x1b;
              if (local_38 != 0) {
                uVar9 = 0;
              }
              uVar14 = (ulong)uVar9;
            }
            else {
              uVar14 = 0;
            }
          }
          FUN_00143300(*plVar13);
          *plVar13 = local_38;
        }
        if (puVar19 != (undefined8 *)0x0) {
          FUN_00143300(*puVar19);
          *puVar19 = local_40;
        }
        return uVar14;
      case 0x2717:
        param_1 = param_1 + 0xd58;
        goto LAB_00176eb8;
      case 0x2719:
        uVar9 = *(uint *)(param_3 + 3);
        if (((int)uVar9 < 0) && (*(uint *)(param_3 + 3) = uVar9 + 8, uVar9 < 0xfffffff9)) {
          puVar19 = (undefined8 *)(param_3[1] + (long)(int)uVar9);
        }
        else {
          puVar19 = (undefined8 *)*param_3;
          *param_3 = (long)(puVar19 + 1);
        }
        uVar9 = 0;
        *(undefined8 *)(param_1 + 0x690) = *puVar19;
        break;
      case 0x271a:
        uVar9 = *(uint *)(param_3 + 3);
        if (((int)uVar9 < 0) && (*(uint *)(param_3 + 3) = uVar9 + 8, uVar9 < 0xfffffff9)) {
          puVar19 = (undefined8 *)(param_3[1] + (long)(int)uVar9);
        }
        else {
          puVar19 = (undefined8 *)*param_3;
          *param_3 = (long)(puVar19 + 1);
        }
        uVar9 = 0;
        *(undefined8 *)(param_1 + 0x678) = *puVar19;
        break;
      case 0x271f:
        uVar9 = *(uint *)(param_3 + 3);
        if (((int)uVar9 < 0) && (*(uint *)(param_3 + 3) = uVar9 + 8, uVar9 < 0xfffffff9)) {
          puVar19 = (undefined8 *)(param_3[1] + (long)(int)uVar9);
        }
        else {
          puVar19 = (undefined8 *)*param_3;
          *param_3 = (long)(puVar19 + 1);
        }
        *(undefined8 *)(param_1 + 0x6e8) = *puVar19;
        FUN_00143300(*(undefined8 *)(param_1 + 0xe88));
        uVar9 = 0;
        *(undefined8 *)(param_1 + 0xe88) = 0;
        goto LAB_00178d30;
      case 0x2720:
        if ((*(byte *)(param_1 + 0xf88) >> 1 & 1) != 0) {
          FUN_00143300(*(undefined8 *)(param_1 + 0xf70));
          *(undefined8 *)(param_1 + 0xf70) = 0;
          *(byte *)(param_1 + 0xf88) = *(byte *)(param_1 + 0xf88) & 0xfd;
        }
        uVar9 = *(uint *)(param_3 + 3);
        if (((int)uVar9 < 0) && (*(uint *)(param_3 + 3) = uVar9 + 8, uVar9 < 0xfffffff9)) {
          puVar19 = (undefined8 *)(param_3[1] + (long)(int)uVar9);
        }
        else {
          puVar19 = (undefined8 *)*param_3;
          *param_3 = (long)(puVar19 + 1);
        }
        uVar14 = FUN_00174db4(param_1 + 0xd60,*puVar19);
        *(undefined8 *)(param_1 + 0xf70) = *(undefined8 *)(param_1 + 0xd60);
        return uVar14;
      case 0x2721:
        uVar9 = *(uint *)(param_3 + 3);
        if (((int)uVar9 < 0) && (*(uint *)(param_3 + 3) = uVar9 + 8, uVar9 < 0xfffffff9)) {
          puVar19 = (undefined8 *)(param_3[1] + (long)(int)uVar9);
        }
        else {
          puVar19 = (undefined8 *)*param_3;
          *param_3 = (long)(puVar19 + 1);
        }
        uVar14 = FUN_00174db4(param_1 + 0xd00,*puVar19);
        uVar21 = *(ulong *)(param_1 + 0xf60) & 0xffffffffffff8000 |
                 *(ulong *)(param_1 + 0xf60) & 0x3fff |
                 (ulong)(*(long *)(param_1 + 0xd00) != 0) << 0xe;
        goto LAB_00178984;
      case 0x2722:
        param_1 = param_1 + 0xdd0;
        goto LAB_00176eb8;
      case 0x2726:
        param_1 = param_1 + 0xcc0;
        goto LAB_00176eb8;
      case 0x2727:
        uVar9 = *(uint *)(param_3 + 3);
        if (((int)uVar9 < 0) && (*(uint *)(param_3 + 3) = uVar9 + 8, uVar9 < 0xfffffff9)) {
          puVar19 = (undefined8 *)(param_3[1] + (long)(int)uVar9);
        }
        else {
          puVar19 = (undefined8 *)*param_3;
          *param_3 = (long)(puVar19 + 1);
        }
        uVar9 = 0;
        *(undefined8 *)(param_1 + 0x808) = *puVar19;
        break;
      case 0x2728:
        uVar9 = *(uint *)(param_3 + 3);
        if (((int)uVar9 < 0) && (*(uint *)(param_3 + 3) = uVar9 + 8, uVar9 < 0xfffffff9)) {
          puVar19 = (undefined8 *)(param_3[1] + (long)(int)uVar9);
        }
        else {
          puVar19 = (undefined8 *)*param_3;
          *param_3 = (long)(puVar19 + 1);
        }
        uVar9 = 0;
        *(undefined8 *)(param_1 + 0x818) = *puVar19;
        uVar6 = 3;
        goto LAB_0017892c;
      case 0x2729:
        param_1 = param_1 + 0xca0;
        goto LAB_00176eb8;
      case 0x272a:
        param_1 = param_1 + 0xd18;
        goto LAB_00176eb8;
      case 0x272c:
        uVar9 = *(uint *)(param_3 + 3);
        if (((int)uVar9 < 0) && (*(uint *)(param_3 + 3) = uVar9 + 8, uVar9 < 0xfffffff9)) {
          puVar19 = (undefined8 *)(param_3[1] + (long)(int)uVar9);
        }
        else {
          puVar19 = (undefined8 *)*param_3;
          *param_3 = (long)(puVar19 + 1);
        }
        uVar9 = 0;
        *(undefined8 *)(param_1 + 0x9e0) = *puVar19;
        break;
      case 0x272d:
        uVar9 = *(uint *)(param_3 + 3);
        if (((int)uVar9 < 0) && (*(uint *)(param_3 + 3) = uVar9 + 8, uVar9 < 0xfffffff9)) {
          puVar19 = (undefined8 *)(param_3[1] + (long)(int)uVar9);
        }
        else {
          puVar19 = (undefined8 *)*param_3;
          *param_3 = (long)(puVar19 + 1);
        }
        uVar9 = 0;
        *(undefined8 *)(param_1 + 0x698) = *puVar19;
        break;
      case 0x272f:
        uVar9 = *(uint *)(param_3 + 3);
        if (((int)uVar9 < 0) && (*(uint *)(param_3 + 3) = uVar9 + 8, uVar9 < 0xfffffff9)) {
          plVar13 = (long *)(param_3[1] + (long)(int)uVar9);
        }
        else {
          plVar13 = (long *)*param_3;
          *param_3 = (long)(plVar13 + 1);
        }
        if (*plVar13 != 0) {
          lVar22 = FUN_0014e05c(*(undefined8 *)(param_1 + 0xf78));
          if (lVar22 != 0) {
            uVar9 = 0;
            *(long *)(param_1 + 0xf78) = lVar22;
            break;
          }
          FUN_0014e11c(*(undefined8 *)(param_1 + 0xf78));
          *(undefined8 *)(param_1 + 0xf78) = 0;
          goto LAB_00178e0c;
        }
        goto LAB_00178d1c;
      case 0x2734:
        param_1 = param_1 + 0xcd0;
        goto LAB_00176eb8;
      case 0x2735:
        uVar9 = *(uint *)(param_3 + 3);
        if (((int)uVar9 < 0) && (*(uint *)(param_3 + 3) = uVar9 + 8, uVar9 < 0xfffffff9)) {
          plVar13 = (long *)(param_3[1] + (long)(int)uVar9);
        }
        else {
          plVar13 = (long *)*param_3;
          *param_3 = (long)(plVar13 + 1);
        }
        lVar22 = *plVar13;
        uVar9 = 0;
        *(long *)(param_1 + 0x668) = lVar22;
        if (lVar22 == 0) {
          *(undefined8 *)(param_1 + 0x668) = *(undefined8 *)PTR_stderr_04bcb8f8;
        }
        break;
      case 0x2737:
        uVar9 = *(uint *)(param_3 + 3);
        if (((int)uVar9 < 0) && (*(uint *)(param_3 + 3) = uVar9 + 8, uVar9 < 0xfffffff9)) {
          puVar19 = (undefined8 *)(param_3[1] + (long)(int)uVar9);
        }
        else {
          puVar19 = (undefined8 *)*param_3;
          *param_3 = (long)(puVar19 + 1);
        }
        uVar9 = 0;
        *(undefined8 *)(param_1 + 0x9e8) = *puVar19;
        break;
      case 0x2749:
        uVar9 = *(uint *)(param_3 + 3);
        if (((int)uVar9 < 0) && (*(uint *)(param_3 + 3) = uVar9 + 8, uVar9 < 0xfffffff9)) {
          puVar19 = (undefined8 *)(param_3[1] + (long)(int)uVar9);
        }
        else {
          puVar19 = (undefined8 *)*param_3;
          *param_3 = (long)(puVar19 + 1);
        }
        uVar9 = 0;
        *(undefined8 *)(param_1 + 0x798) = *puVar19;
        break;
      case 0x274e:
        param_1 = param_1 + 0xce0;
        goto LAB_00176eb8;
      case 0x274f:
        uVar9 = *(uint *)(param_3 + 3);
        if (((int)uVar9 < 0) && (*(uint *)(param_3 + 3) = uVar9 + 8, uVar9 < 0xfffffff9)) {
          puVar19 = (undefined8 *)(param_3[1] + (long)(int)uVar9);
        }
        else {
          puVar19 = (undefined8 *)*param_3;
          *param_3 = (long)(puVar19 + 1);
        }
        uVar14 = FUN_00174db4(param_1 + 0xd38,*puVar19);
        uVar21 = *(ulong *)(param_1 + 0xf60) & 0xfffffffff0000000 |
                 *(ulong *)(param_1 + 0xf60) & 0x7ffffff |
                 (ulong)(*(long *)(param_1 + 0xd38) != 0) << 0x1b;
LAB_00178984:
        *(ulong *)(param_1 + 0xf60) = uVar21;
        return uVar14;
      case 0x2751:
      case 0x2766:
      case 0x2767:
      case 0x2768:
      case 0x2769:
        goto switchD_00174eec_caseD_2806;
      case 0x2756:
        uVar9 = *(uint *)(param_3 + 3);
        if (((int)uVar9 < 0) && (*(uint *)(param_3 + 3) = uVar9 + 8, uVar9 < 0xfffffff9)) {
          puVar19 = (undefined8 *)(param_3[1] + (long)(int)uVar9);
        }
        else {
          puVar19 = (undefined8 *)*param_3;
          *param_3 = (long)(puVar19 + 1);
        }
        uVar9 = 0;
        *(undefined8 *)(param_1 + 0xa10) = *puVar19;
        break;
      case 0x275c:
        param_1 = param_1 + 0xdc8;
        goto LAB_00176eb8;
      case 0x275d:
        param_1 = param_1 + 0xdc0;
        goto LAB_00176eb8;
      case 0x2762:
        uVar9 = *(uint *)(param_3 + 3);
        if (((int)uVar9 < 0) && (*(uint *)(param_3 + 3) = uVar9 + 8, uVar9 < 0xfffffff9)) {
          puVar19 = (undefined8 *)(param_3[1] + (long)(int)uVar9);
        }
        else {
          puVar19 = (undefined8 *)*param_3;
          *param_3 = (long)(puVar19 + 1);
        }
        uVar7 = FUN_00174db4(param_1 + 0xcc8,*puVar19);
        lVar22 = FUN_0014b8f4(param_1,0,*(undefined8 *)(param_1 + 0xf90),
                              *(ulong *)(param_1 + 0xf60) >> 5 & 1);
        *(long *)(param_1 + 0xf90) = lVar22;
        uVar9 = 0x1b;
        if (lVar22 != 0) {
          uVar9 = uVar7;
        }
        break;
      case 0x2763:
        goto switchD_00174eec_caseD_2813;
      case 0x276d:
        uVar9 = *(uint *)(param_3 + 3);
        if (((int)uVar9 < 0) && (*(uint *)(param_3 + 3) = uVar9 + 8, uVar9 < 0xfffffff9)) {
          puVar19 = (undefined8 *)(param_3[1] + (long)(int)uVar9);
        }
        else {
          puVar19 = (undefined8 *)*param_3;
          *param_3 = (long)(puVar19 + 1);
        }
        uVar9 = 0;
        *(undefined8 *)(param_1 + 0x9f0) = *puVar19;
        break;
      case 0x276f:
        uVar9 = *(uint *)(param_3 + 3);
        if (((int)uVar9 < 0) && (*(uint *)(param_3 + 3) = uVar9 + 8, uVar9 < 0xfffffff9)) {
          puVar19 = (undefined8 *)(param_3[1] + (long)(int)uVar9);
        }
        else {
          puVar19 = (undefined8 *)*param_3;
          *param_3 = (long)(puVar19 + 1);
        }
        uVar9 = 0;
        *(undefined8 *)(param_1 + 0x670) = *puVar19;
        break;
      case 0x2771:
        if ((PTR_DAT_04be2008[0x10] & 1) != 0) {
          param_1 = param_1 + 0xd70;
          goto LAB_00176eb8;
        }
        goto switchD_00174eec_caseD_2813;
      case 0x2774:
        uVar9 = *(uint *)(param_3 + 3);
        if (((int)uVar9 < 0) && (*(uint *)(param_3 + 3) = uVar9 + 8, uVar9 < 0xfffffff9)) {
          plVar13 = (long *)(param_3[1] + (long)(int)uVar9);
        }
        else {
          plVar13 = (long *)*param_3;
          *param_3 = (long)(plVar13 + 1);
        }
        lVar22 = *plVar13;
        if (*(long *)(param_1 + 0xe8) != 0) {
          FUN_0014b7c4(param_1,1,2);
          if (*(int *)(param_1 + 0xd0) == 3) {
            *(undefined8 *)(param_1 + 200) = 0;
            *(undefined4 *)(param_1 + 0xd0) = 0;
          }
          lVar17 = *(long *)(param_1 + 0xe8);
          if (*(long *)(lVar17 + 0xa8) == *(long *)(param_1 + 0xf90)) {
            *(undefined8 *)(param_1 + 0xf90) = 0;
          }
          if (*(long *)(lVar17 + 0xb0) == *(long *)(param_1 + 0x1178)) {
            *(undefined8 *)(param_1 + 0x1178) = 0;
          }
          *(int *)(lVar17 + 4) = *(int *)(lVar17 + 4) + -1;
          FUN_0014b80c(param_1,1);
        }
        *(long *)(param_1 + 0xe8) = lVar22;
        if (lVar22 != 0) {
          FUN_0014b7c4(param_1,1,2);
          *(int *)(*(long *)(param_1 + 0xe8) + 4) = *(int *)(*(long *)(param_1 + 0xe8) + 4) + 1;
          pbVar18 = *(byte **)(param_1 + 0xe8);
          if ((*pbVar18 >> 3 & 1) != 0) {
            *(byte **)(param_1 + 200) = pbVar18 + 0x78;
            *(undefined4 *)(param_1 + 0xd0) = 3;
          }
          if (*(long *)(pbVar18 + 0xa8) != 0) {
            FUN_0014ca60(*(undefined8 *)(param_1 + 0xf90));
            pbVar18 = *(byte **)(param_1 + 0xe8);
            *(undefined8 *)(param_1 + 0xf90) = *(undefined8 *)(pbVar18 + 0xa8);
          }
          if (*(long *)(pbVar18 + 0xb0) != 0) {
            *(undefined8 *)(param_1 + 0xc18) = *(undefined8 *)(pbVar18 + 0xb8);
            *(undefined8 *)(param_1 + 0x1178) = *(undefined8 *)(pbVar18 + 0xb0);
          }
          FUN_0014b80c(param_1,1);
        }
        goto LAB_00178d1c;
      case 0x2776:
        uVar9 = *(uint *)(param_3 + 3);
        if (((int)uVar9 < 0) && (*(uint *)(param_3 + 3) = uVar9 + 8, uVar9 < 0xfffffff9)) {
          puVar19 = (undefined8 *)(param_3[1] + (long)(int)uVar9);
        }
        else {
          puVar19 = (undefined8 *)*param_3;
          *param_3 = (long)(puVar19 + 1);
        }
        pcVar12 = (char *)*puVar19;
        if ((pcVar12 == (char *)0x0) || (*pcVar12 != '\0')) {
          param_1 = param_1 + 0xce8;
          goto LAB_00176eec;
        }
        lVar22 = FUN_00161cc8();
        if (lVar22 != 0) {
          uVar14 = FUN_00174db4(param_1 + 0xce8,lVar22);
          FUN_00143300(lVar22);
          return uVar14 & 0xffffffff;
        }
LAB_00178e0c:
        uVar9 = 0x1b;
        break;
      case 0x2777:
        uVar9 = *(uint *)(param_3 + 3);
        if (((int)uVar9 < 0) && (*(uint *)(param_3 + 3) = uVar9 + 8, uVar9 < 0xfffffff9)) {
          puVar19 = (undefined8 *)(param_3[1] + (long)(int)uVar9);
        }
        else {
          puVar19 = (undefined8 *)*param_3;
          *param_3 = (long)(puVar19 + 1);
        }
        uVar9 = 0;
        *(undefined8 *)(param_1 + 0xc40) = *puVar19;
        break;
      case 0x2778:
        uVar9 = *(uint *)(param_3 + 3);
        if (((int)uVar9 < 0) && (*(uint *)(param_3 + 3) = uVar9 + 8, uVar9 < 0xfffffff9)) {
          puVar19 = (undefined8 *)(param_3[1] + (long)(int)uVar9);
        }
        else {
          puVar19 = (undefined8 *)*param_3;
          *param_3 = (long)(puVar19 + 1);
        }
        uVar9 = 0;
        *(undefined8 *)(param_1 + 0xc48) = *puVar19;
        break;
      case 0x277d:
        if (((byte)PTR_DAT_04be2008[0x10] >> 3 & 1) != 0) {
          uVar9 = *(uint *)(param_3 + 3);
          if (((int)uVar9 < 0) && (*(uint *)(param_3 + 3) = uVar9 + 8, uVar9 < 0xfffffff9)) {
            puVar19 = (undefined8 *)(param_3[1] + (long)(int)uVar9);
          }
          else {
            puVar19 = (undefined8 *)*param_3;
            *param_3 = (long)(puVar19 + 1);
          }
          uVar9 = 0;
          *(undefined8 *)(param_1 + 0xaf8) = *puVar19;
          break;
        }
        goto switchD_00174eec_caseD_2813;
      }
      goto switchD_00174f1c_caseD_5b;
    }
    if (0x4e2a < param_2) {
      if (0x4ee3 < param_2) {
        if (param_2 < 0x5017) {
          if (param_2 < 0x4ef0) {
            switch(param_2) {
            case 0x4ee4:
              uVar9 = *(uint *)(param_3 + 3);
              if (((int)uVar9 < 0) && (*(uint *)(param_3 + 3) = uVar9 + 8, uVar9 < 0xfffffff9)) {
                puVar19 = (undefined8 *)(param_3[1] + (long)(int)uVar9);
              }
              else {
                puVar19 = (undefined8 *)*param_3;
                *param_3 = (long)(puVar19 + 1);
              }
              uVar9 = 0;
              *(undefined8 *)(param_1 + 0x718) = *puVar19;
              break;
            default:
              goto switchD_00174eec_caseD_27a4;
            case 0x4ee6:
              uVar9 = *(uint *)(param_3 + 3);
              if (((int)uVar9 < 0) && (*(uint *)(param_3 + 3) = uVar9 + 8, uVar9 < 0xfffffff9)) {
                puVar19 = (undefined8 *)(param_3[1] + (long)(int)uVar9);
              }
              else {
                puVar19 = (undefined8 *)*param_3;
                *param_3 = (long)(puVar19 + 1);
              }
              uVar9 = 0;
              *(undefined8 *)(param_1 + 0xec0) = *puVar19;
              break;
            case 0x4ee7:
              uVar9 = *(uint *)(param_3 + 3);
              if (((int)uVar9 < 0) && (*(uint *)(param_3 + 3) = uVar9 + 8, uVar9 < 0xfffffff9)) {
                puVar19 = (undefined8 *)(param_3[1] + (long)(int)uVar9);
              }
              else {
                puVar19 = (undefined8 *)*param_3;
                *param_3 = (long)(puVar19 + 1);
              }
              uVar9 = 0;
              *(undefined8 *)(param_1 + 0xec8) = *puVar19;
              break;
            case 0x4ee8:
              uVar9 = *(uint *)(param_3 + 3);
              if (((int)uVar9 < 0) && (*(uint *)(param_3 + 3) = uVar9 + 8, uVar9 < 0xfffffff9)) {
                puVar19 = (undefined8 *)(param_3[1] + (long)(int)uVar9);
              }
              else {
                puVar19 = (undefined8 *)*param_3;
                *param_3 = (long)(puVar19 + 1);
              }
              uVar9 = 0;
              *(undefined8 *)(param_1 + 0xed0) = *puVar19;
            }
            goto switchD_00174f1c_caseD_5b;
          }
          if (param_2 < 0x4f30) {
            if (param_2 == 0x4ef0) {
              uVar9 = *(uint *)(param_3 + 3);
              if (((int)uVar9 < 0) && (*(uint *)(param_3 + 3) = uVar9 + 8, uVar9 < 0xfffffff9)) {
                puVar19 = (undefined8 *)(param_3[1] + (long)(int)uVar9);
              }
              else {
                puVar19 = (undefined8 *)*param_3;
                *param_3 = (long)(puVar19 + 1);
              }
              uVar9 = 0;
              *(undefined8 *)(param_1 + 0x768) = *puVar19;
              goto switchD_00174f1c_caseD_5b;
            }
            if (param_2 == 0x4efb) {
              uVar9 = *(uint *)(param_3 + 3);
              if (((int)uVar9 < 0) && (*(uint *)(param_3 + 3) = uVar9 + 8, uVar9 < 0xfffffff9)) {
                plVar13 = (long *)(param_3[1] + (long)(int)uVar9);
              }
              else {
                plVar13 = (long *)*param_3;
                *param_3 = (long)(plVar13 + 1);
              }
              lVar22 = *plVar13;
              *(long *)(param_1 + 0x730) = lVar22;
              goto LAB_001770b8;
            }
          }
          else {
            if (param_2 == 0x4f30) {
              uVar9 = *(uint *)(param_3 + 3);
              if (((int)uVar9 < 0) && (*(uint *)(param_3 + 3) = uVar9 + 8, uVar9 < 0xfffffff9)) {
                puVar19 = (undefined8 *)(param_3[1] + (long)(int)uVar9);
              }
              else {
                puVar19 = (undefined8 *)*param_3;
                *param_3 = (long)(puVar19 + 1);
              }
              uVar9 = 0;
              *(undefined8 *)(param_1 + 0xf20) = *puVar19;
              goto switchD_00174f1c_caseD_5b;
            }
            if (param_2 == 0x4f3b) {
              uVar9 = *(uint *)(param_3 + 3);
              if (((int)uVar9 < 0) && (*(uint *)(param_3 + 3) = uVar9 + 8, uVar9 < 0xfffffff9)) {
                puVar19 = (undefined8 *)(param_3[1] + (long)(int)uVar9);
              }
              else {
                puVar19 = (undefined8 *)*param_3;
                *param_3 = (long)(puVar19 + 1);
              }
              uVar9 = 0;
              *(undefined8 *)(param_1 + 0xf58) = *puVar19;
              goto switchD_00174f1c_caseD_5b;
            }
          }
        }
        else {
          if (0x75c0 < param_2) {
            if (param_2 == 0x75c1) {
              uVar9 = *(uint *)(param_3 + 3);
              if (((int)uVar9 < 0) && (*(uint *)(param_3 + 3) = uVar9 + 8, uVar9 < 0xfffffff9)) {
                plVar13 = (long *)(param_3[1] + (long)(int)uVar9);
              }
              else {
                plVar13 = (long *)*param_3;
                *param_3 = (long)(plVar13 + 1);
              }
              if (-1 < *plVar13) {
                uVar9 = 0;
                *(long *)(param_1 + 0x7f0) = *plVar13;
                goto switchD_00174f1c_caseD_5b;
              }
            }
            else {
              if (param_2 != 0x75c2) {
                if (param_2 == 0x763e) goto switchD_00174f1c_caseD_22;
                goto switchD_00174eec_caseD_27a4;
              }
              uVar9 = *(uint *)(param_3 + 3);
              if (((int)uVar9 < 0) && (*(uint *)(param_3 + 3) = uVar9 + 8, uVar9 < 0xfffffff9)) {
                plVar13 = (long *)(param_3[1] + (long)(int)uVar9);
              }
              else {
                plVar13 = (long *)*param_3;
                *param_3 = (long)(plVar13 + 1);
              }
              if (-1 < *plVar13) {
                uVar9 = 0;
                *(long *)(param_1 + 0x7f8) = *plVar13;
                goto switchD_00174f1c_caseD_5b;
              }
            }
            goto LAB_00178228;
          }
          switch(param_2) {
          case 0x75a3:
            goto switchD_00174fc8_caseD_75a3;
          case 0x75a4:
            goto switchD_00174fc8_caseD_75a4;
          case 0x75a5:
            goto switchD_00174fc8_caseD_75a5;
          case 0x75a6:
          case 0x75a7:
            break;
          case 0x75a8:
            goto switchD_00174fc8_caseD_75a8;
          default:
            if (param_2 == 0x5017) {
              uVar9 = *(uint *)(param_3 + 3);
              if (((int)uVar9 < 0) && (*(uint *)(param_3 + 3) = uVar9 + 8, uVar9 < 0xfffffff9)) {
                puVar19 = (undefined8 *)(param_3[1] + (long)(int)uVar9);
              }
              else {
                puVar19 = (undefined8 *)*param_3;
                *param_3 = (long)(puVar19 + 1);
              }
              uVar9 = 0;
              *(undefined8 *)(param_1 + 0xaa8) = *puVar19;
              goto switchD_00174f1c_caseD_5b;
            }
            if (param_2 == 0x5018) {
              uVar9 = *(uint *)(param_3 + 3);
              if (((int)uVar9 < 0) && (*(uint *)(param_3 + 3) = uVar9 + 8, uVar9 < 0xfffffff9)) {
                puVar19 = (undefined8 *)(param_3[1] + (long)(int)uVar9);
              }
              else {
                puVar19 = (undefined8 *)*param_3;
                *param_3 = (long)(puVar19 + 1);
              }
              uVar9 = 0;
              *(undefined8 *)(param_1 + 0xab0) = *puVar19;
              goto switchD_00174f1c_caseD_5b;
            }
          }
        }
        goto switchD_00174eec_caseD_27a4;
      }
      if (param_2 < 0x4eae) {
        if (param_2 < 0x4e6f) {
          if (param_2 == 0x4e2b) {
            uVar9 = *(uint *)(param_3 + 3);
            if (((int)uVar9 < 0) && (*(uint *)(param_3 + 3) = uVar9 + 8, uVar9 < 0xfffffff9)) {
              plVar13 = (long *)(param_3[1] + (long)(int)uVar9);
            }
            else {
              plVar13 = (long *)*param_3;
              *param_3 = (long)(plVar13 + 1);
            }
            lVar22 = *plVar13;
            uVar9 = 0;
            *(long *)(param_1 + 0x708) = lVar22;
            if (lVar22 == 0) {
              *(ulong *)(param_1 + 0xf60) = *(ulong *)(param_1 + 0xf60) & 0xfffffffffffffffd;
              *(undefined1 **)(param_1 + 0x708) = &LAB_00178f2c;
              goto switchD_00174f1c_caseD_5b;
            }
            uVar14 = *(ulong *)(param_1 + 0xf60) | 2;
          }
          else {
            if (param_2 != 0x4e2c) {
              if (param_2 == 0x4e58) {
                uVar9 = *(uint *)(param_3 + 3);
                if (((int)uVar9 < 0) && (*(uint *)(param_3 + 3) = uVar9 + 8, uVar9 < 0xfffffff9)) {
                  plVar13 = (long *)(param_3[1] + (long)(int)uVar9);
                }
                else {
                  plVar13 = (long *)*param_3;
                  *param_3 = (long)(plVar13 + 1);
                }
                lVar22 = *plVar13;
                *(long *)(param_1 + 0x728) = lVar22;
LAB_001770b8:
                bVar20 = *(byte *)(param_1 + 0x111c);
                uVar9 = 0;
                if (lVar22 == 0) {
                  bVar20 = bVar20 & 0xfe;
                }
                else {
                  bVar20 = bVar20 | 1;
                }
                *(byte *)(param_1 + 0x111c) = bVar20;
                goto switchD_00174f1c_caseD_5b;
              }
              goto switchD_00174eec_caseD_27a4;
            }
            uVar9 = *(uint *)(param_3 + 3);
            if (((int)uVar9 < 0) && (*(uint *)(param_3 + 3) = uVar9 + 8, uVar9 < 0xfffffff9)) {
              plVar13 = (long *)(param_3[1] + (long)(int)uVar9);
            }
            else {
              plVar13 = (long *)*param_3;
              *param_3 = (long)(plVar13 + 1);
            }
            lVar22 = *plVar13;
            uVar9 = 0;
            *(long *)(param_1 + 0x720) = lVar22;
            if (lVar22 == 0) {
              *(ulong *)(param_1 + 0xf60) = *(ulong *)(param_1 + 0xf60) & 0xfffffffffffffffe;
              *(code **)(param_1 + 0x720) = fread;
              goto switchD_00174f1c_caseD_5b;
            }
            uVar14 = *(ulong *)(param_1 + 0xf60) | 1;
          }
          goto LAB_00178938;
        }
        if (param_2 < 0x4e8c) {
          if (param_2 == 0x4e6f) {
            uVar9 = *(uint *)(param_3 + 3);
            if (((int)uVar9 < 0) && (*(uint *)(param_3 + 3) = uVar9 + 8, uVar9 < 0xfffffff9)) {
              puVar19 = (undefined8 *)(param_3[1] + (long)(int)uVar9);
            }
            else {
              puVar19 = (undefined8 *)*param_3;
              *param_3 = (long)(puVar19 + 1);
            }
            uVar9 = 0;
            *(undefined8 *)(param_1 + 0x710) = *puVar19;
            goto switchD_00174f1c_caseD_5b;
          }
          if (param_2 == 0x4e7e) {
            uVar9 = *(uint *)(param_3 + 3);
            if (((int)uVar9 < 0) && (*(uint *)(param_3 + 3) = uVar9 + 8, uVar9 < 0xfffffff9)) {
              puVar19 = (undefined8 *)(param_3[1] + (long)(int)uVar9);
            }
            else {
              puVar19 = (undefined8 *)*param_3;
              *param_3 = (long)(puVar19 + 1);
            }
            uVar9 = 0;
            *(undefined8 *)(param_1 + 0x738) = *puVar19;
            goto switchD_00174f1c_caseD_5b;
          }
        }
        else {
          if (param_2 == 0x4e8c) {
            if (((byte)PTR_DAT_04be2008[0x10] >> 3 & 1) != 0) {
              uVar9 = *(uint *)(param_3 + 3);
              if (((int)uVar9 < 0) && (*(uint *)(param_3 + 3) = uVar9 + 8, uVar9 < 0xfffffff9)) {
                puVar19 = (undefined8 *)(param_3[1] + (long)(int)uVar9);
              }
              else {
                puVar19 = (undefined8 *)*param_3;
                *param_3 = (long)(puVar19 + 1);
              }
              uVar9 = 0;
              *(undefined8 *)(param_1 + 0xaf0) = *puVar19;
              goto switchD_00174f1c_caseD_5b;
            }
            goto switchD_00174eec_caseD_2813;
          }
          if (param_2 == 0x4ea2) {
            uVar9 = *(uint *)(param_3 + 3);
            if (((int)uVar9 < 0) && (*(uint *)(param_3 + 3) = uVar9 + 8, uVar9 < 0xfffffff9)) {
              puVar19 = (undefined8 *)(param_3[1] + (long)(int)uVar9);
            }
            else {
              puVar19 = (undefined8 *)*param_3;
              *param_3 = (long)(puVar19 + 1);
            }
            uVar9 = 0;
            *(undefined8 *)(param_1 + 0x740) = *puVar19;
            goto switchD_00174f1c_caseD_5b;
          }
        }
        goto switchD_00174eec_caseD_27a4;
      }
      switch(param_2) {
      case 0x4eae:
        uVar9 = *(uint *)(param_3 + 3);
        if (((int)uVar9 < 0) && (*(uint *)(param_3 + 3) = uVar9 + 8, uVar9 < 0xfffffff9)) {
          puVar19 = (undefined8 *)(param_3[1] + (long)(int)uVar9);
        }
        else {
          puVar19 = (undefined8 *)*param_3;
          *param_3 = (long)(puVar19 + 1);
        }
        uVar9 = 0;
        *(undefined8 *)(param_1 + 0x780) = *puVar19;
        break;
      case 0x4eaf:
        uVar9 = *(uint *)(param_3 + 3);
        if (((int)uVar9 < 0) && (*(uint *)(param_3 + 3) = uVar9 + 8, uVar9 < 0xfffffff9)) {
          puVar19 = (undefined8 *)(param_3[1] + (long)(int)uVar9);
        }
        else {
          puVar19 = (undefined8 *)*param_3;
          *param_3 = (long)(puVar19 + 1);
        }
        uVar9 = 0;
        *(undefined8 *)(param_1 + 0x788) = *puVar19;
        break;
      case 0x4eb0:
        uVar9 = *(uint *)(param_3 + 3);
        if (((int)uVar9 < 0) && (*(uint *)(param_3 + 3) = uVar9 + 8, uVar9 < 0xfffffff9)) {
          puVar19 = (undefined8 *)(param_3[1] + (long)(int)uVar9);
        }
        else {
          puVar19 = (undefined8 *)*param_3;
          *param_3 = (long)(puVar19 + 1);
        }
        uVar9 = 0;
        *(undefined8 *)(param_1 + 0x790) = *puVar19;
        break;
      case 0x4eb1:
      case 0x4eb2:
      case 0x4eb3:
        goto switchD_00174eec_caseD_27a4;
      case 0x4eb4:
        uVar9 = *(uint *)(param_3 + 3);
        if (((int)uVar9 < 0) && (*(uint *)(param_3 + 3) = uVar9 + 8, uVar9 < 0xfffffff9)) {
          puVar19 = (undefined8 *)(param_3[1] + (long)(int)uVar9);
        }
        else {
          puVar19 = (undefined8 *)*param_3;
          *param_3 = (long)(puVar19 + 1);
        }
        uVar9 = 0;
        *(undefined8 *)(param_1 + 0x748) = *puVar19;
        break;
      default:
        if (param_2 == 0x4ec3) {
          uVar9 = *(uint *)(param_3 + 3);
          if (((int)uVar9 < 0) && (*(uint *)(param_3 + 3) = uVar9 + 8, uVar9 < 0xfffffff9)) {
            puVar19 = (undefined8 *)(param_3[1] + (long)(int)uVar9);
          }
          else {
            puVar19 = (undefined8 *)*param_3;
            *param_3 = (long)(puVar19 + 1);
          }
          uVar9 = 0;
          *(undefined8 *)(param_1 + 0x758) = *puVar19;
          break;
        }
        if (param_2 == 0x4ec7) {
          uVar9 = *(uint *)(param_3 + 3);
          if (((int)uVar9 < 0) && (*(uint *)(param_3 + 3) = uVar9 + 8, uVar9 < 0xfffffff9)) {
            puVar19 = (undefined8 *)(param_3[1] + (long)(int)uVar9);
          }
          else {
            puVar19 = (undefined8 *)*param_3;
            *param_3 = (long)(puVar19 + 1);
          }
          uVar9 = 0;
          *(undefined8 *)(param_1 + 0x6f0) = *puVar19;
          break;
        }
        goto switchD_00174eec_caseD_27a4;
      }
      goto switchD_00174f1c_caseD_5b;
    }
    switch(param_2) {
    case 0x27a3:
      param_1 = param_1 + 0xcf8;
      break;
    case 0x27a4:
    case 0x27a6:
    case 0x27a7:
    case 0x27a8:
    case 0x27a9:
    case 0x27aa:
    case 0x27ab:
    case 0x27ac:
    case 0x27ad:
    case 0x27ae:
    case 0x27af:
    case 0x27b0:
    case 0x27b1:
    case 0x27b2:
    case 0x27b3:
    case 0x27b6:
    case 0x27b7:
    case 0x27bb:
    case 0x27bc:
    case 0x27c2:
    case 0x27c4:
    case 0x27c5:
    case 0x27c6:
    case 0x27c7:
    case 0x27c8:
    case 0x27c9:
    case 0x27cc:
    case 0x27cd:
    case 0x27d1:
    case 0x27d2:
    case 0x27d4:
    case 0x27d5:
    case 0x27d6:
    case 0x27d7:
    case 0x27d8:
    case 0x27dc:
    case 0x27dd:
    case 0x27de:
    case 0x27df:
    case 0x27e0:
    case 0x27e2:
    case 0x27e4:
    case 0x27e5:
    case 0x27e6:
    case 0x27e7:
    case 0x27e8:
    case 0x27ea:
    case 0x27eb:
    case 0x27f1:
    case 0x27f2:
    case 0x27f3:
    case 0x27f5:
    case 0x27f7:
    case 0x27f8:
    case 0x27f9:
    case 0x27fa:
    case 0x27fd:
    case 0x27ff:
    case 0x2802:
    case 0x2804:
    case 0x2805:
    case 0x2808:
    case 0x2809:
    case 0x280a:
    case 0x280b:
    case 0x280c:
    case 0x280d:
    case 0x2815:
    case 0x2818:
    case 0x2819:
    case 0x281b:
    case 0x281c:
    case 0x281e:
    case 0x281f:
    case 0x2820:
    case 0x2822:
    case 0x2823:
    case 0x2826:
    case 0x2828:
    case 0x2829:
    case 0x282b:
      goto switchD_00174eec_caseD_27a4;
    case 0x27a5:
      uVar9 = *(uint *)(param_3 + 3);
      if (((int)uVar9 < 0) && (*(uint *)(param_3 + 3) = uVar9 + 8, uVar9 < 0xfffffff9)) {
        puVar19 = (undefined8 *)(param_3[1] + (long)(int)uVar9);
      }
      else {
        puVar19 = (undefined8 *)*param_3;
        *param_3 = (long)(puVar19 + 1);
      }
      uVar9 = 0;
      *(undefined8 *)(param_1 + 0x750) = *puVar19;
      goto switchD_00174f1c_caseD_5b;
    case 0x27b4:
      uVar9 = *(uint *)(param_3 + 3);
      if (((int)uVar9 < 0) && (*(uint *)(param_3 + 3) = uVar9 + 8, uVar9 < 0xfffffff9)) {
        puVar19 = (undefined8 *)(param_3[1] + (long)(int)uVar9);
      }
      else {
        puVar19 = (undefined8 *)*param_3;
        *param_3 = (long)(puVar19 + 1);
      }
      uVar9 = 0;
      *(undefined8 *)(param_1 + 0x760) = *puVar19;
      goto switchD_00174f1c_caseD_5b;
    case 0x27b5:
      uVar9 = *(uint *)(param_3 + 3);
      if (((int)uVar9 < 0) && (*(uint *)(param_3 + 3) = uVar9 + 8, uVar9 < 0xfffffff9)) {
        puVar19 = (undefined8 *)(param_3[1] + (long)(int)uVar9);
      }
      else {
        puVar19 = (undefined8 *)*param_3;
        *param_3 = (long)(puVar19 + 1);
      }
      __src = (void *)*puVar19;
      if ((__src == (void *)0x0) || (*(long *)(param_1 + 0x6f8) == -1)) {
        uVar9 = FUN_00174db4(param_1 + 0xe88,__src);
      }
      else {
        if (-1 < *(long *)(param_1 + 0x6f8)) {
          FUN_00143300(*(undefined8 *)(param_1 + 0xe88));
          uVar14 = *(ulong *)(param_1 + 0x6f8);
          *(undefined8 *)(param_1 + 0xe88) = 0;
          if (uVar14 < 2) {
            uVar14 = 1;
          }
          __dest = (void *)FUN_001432f0(uVar14);
          if (__dest != (void *)0x0) {
            if (*(size_t *)(param_1 + 0x6f8) != 0) {
              memcpy(__dest,__src,*(size_t *)(param_1 + 0x6f8));
            }
            uVar9 = 0;
            *(void **)(param_1 + 0xe88) = __dest;
            goto LAB_00178d28;
          }
        }
        uVar9 = 0x1b;
      }
LAB_00178d28:
      *(undefined8 *)(param_1 + 0x6e8) = *(undefined8 *)(param_1 + 0xe88);
LAB_00178d30:
      uVar6 = 2;
      goto LAB_00178d34;
    case 0x27b8:
      uVar9 = *(uint *)(param_3 + 3);
      if (((int)uVar9 < 0) && (*(uint *)(param_3 + 3) = uVar9 + 8, uVar9 < 0xfffffff9)) {
        puVar19 = (undefined8 *)(param_3[1] + (long)(int)uVar9);
      }
      else {
        puVar19 = (undefined8 *)*param_3;
        *param_3 = (long)(puVar19 + 1);
      }
      uVar9 = 0;
      *(undefined8 *)(param_1 + 0x778) = *puVar19;
      goto switchD_00174f1c_caseD_5b;
    case 0x27b9:
      param_1 = param_1 + 0xdd8;
      break;
    case 0x27ba:
      param_1 = param_1 + 0xde8;
      break;
    case 0x27bd:
      param_1 = param_1 + 0xe00;
      break;
    case 0x27be:
      param_1 = param_1 + 0xe08;
      break;
    case 0x27bf:
      param_1 = param_1 + 0xe18;
      break;
    case 0x27c0:
      param_1 = param_1 + 0xe20;
      break;
    case 0x27c1:
      param_1 = param_1 + 0xe28;
      break;
    case 0x27c3:
    case 0x27fb:
      param_1 = param_1 + 0xe48;
      break;
    case 0x27ca:
      param_1 = param_1 + 0xe58;
      break;
    case 0x27cb:
      uVar9 = *(uint *)(param_3 + 3);
      if (((int)uVar9 < 0) && (*(uint *)(param_3 + 3) = uVar9 + 8, uVar9 < 0xfffffff9)) {
        puVar19 = (undefined8 *)(param_3[1] + (long)(int)uVar9);
      }
      else {
        puVar19 = (undefined8 *)*param_3;
        *param_3 = (long)(puVar19 + 1);
      }
      uVar9 = 0;
      *(undefined8 *)(param_1 + 0xea8) = *puVar19;
      goto switchD_00174f1c_caseD_5b;
    case 0x27ce:
      param_1 = param_1 + 0xe30;
      break;
    case 0x27cf:
      param_1 = param_1 + 0xe38;
      break;
    case 0x27d0:
      param_1 = param_1 + 0xe40;
      break;
    case 0x27d3:
      uVar9 = *(uint *)(param_3 + 3);
      if (((int)uVar9 < 0) && (*(uint *)(param_3 + 3) = uVar9 + 8, uVar9 < 0xfffffff9)) {
        puVar19 = (undefined8 *)(param_3[1] + (long)(int)uVar9);
      }
      else {
        puVar19 = (undefined8 *)*param_3;
        *param_3 = (long)(puVar19 + 1);
      }
      uVar9 = 0;
      *(undefined8 *)(param_1 + 0x6a0) = *puVar19;
      goto switchD_00174f1c_caseD_5b;
    case 0x27d9:
      uVar9 = *(uint *)(param_3 + 3);
      if (((int)uVar9 < 0) && (*(uint *)(param_3 + 3) = uVar9 + 8, uVar9 < 0xfffffff9)) {
        puVar19 = (undefined8 *)(param_3[1] + (long)(int)uVar9);
      }
      else {
        puVar19 = (undefined8 *)*param_3;
        *param_3 = (long)(puVar19 + 1);
      }
      uVar9 = 0;
      *(undefined8 *)(param_1 + 0x1610) = *puVar19;
      goto switchD_00174f1c_caseD_5b;
    case 0x27da:
      uVar9 = *(uint *)(param_3 + 3);
      if (((int)uVar9 < 0) && (*(uint *)(param_3 + 3) = uVar9 + 8, uVar9 < 0xfffffff9)) {
        puVar19 = (undefined8 *)(param_3[1] + (long)(int)uVar9);
      }
      else {
        puVar19 = (undefined8 *)*param_3;
        *param_3 = (long)(puVar19 + 1);
      }
      uVar9 = 0;
      *(undefined8 *)(param_1 + 0xed8) = *puVar19;
      goto switchD_00174f1c_caseD_5b;
    case 0x27db:
      uVar9 = *(uint *)(param_3 + 3);
      if (((int)uVar9 < 0) && (*(uint *)(param_3 + 3) = uVar9 + 8, uVar9 < 0xfffffff9)) {
        puVar19 = (undefined8 *)(param_3[1] + (long)(int)uVar9);
      }
      else {
        puVar19 = (undefined8 *)*param_3;
        *param_3 = (long)(puVar19 + 1);
      }
      uVar10 = *puVar19;
      uVar9 = 0;
      *(undefined8 *)(param_1 + 0xa18) = uVar10;
      *(undefined8 *)(param_1 + 0xf80) = uVar10;
      goto switchD_00174f1c_caseD_5b;
    case 0x27e1:
      uVar9 = *(uint *)(param_3 + 3);
      if (((int)uVar9 < 0) && (*(uint *)(param_3 + 3) = uVar9 + 8, uVar9 < 0xfffffff9)) {
        puVar19 = (undefined8 *)(param_3[1] + (long)(int)uVar9);
      }
      else {
        puVar19 = (undefined8 *)*param_3;
        *param_3 = (long)(puVar19 + 1);
      }
      uVar9 = 0;
      *(undefined8 *)(param_1 + 0x770) = *puVar19;
      goto switchD_00174f1c_caseD_5b;
    case 0x27e3:
      uVar9 = *(uint *)(param_3 + 3);
      if (((int)uVar9 < 0) && (*(uint *)(param_3 + 3) = uVar9 + 8, uVar9 < 0xfffffff9)) {
        puVar19 = (undefined8 *)(param_3[1] + (long)(int)uVar9);
      }
      else {
        puVar19 = (undefined8 *)*param_3;
        *param_3 = (long)(puVar19 + 1);
      }
      uVar14 = FUN_00157960(param_1,*puVar19);
      return uVar14;
    case 0x27e9:
      param_1 = param_1 + 0xe60;
      break;
    case 0x27ec:
      param_1 = param_1 + 0xe68;
      break;
    case 0x27ed:
      uVar9 = *(uint *)(param_3 + 3);
      if (((int)uVar9 < 0) && (*(uint *)(param_3 + 3) = uVar9 + 8, uVar9 < 0xfffffff9)) {
        puVar19 = (undefined8 *)(param_3[1] + (long)(int)uVar9);
      }
      else {
        puVar19 = (undefined8 *)*param_3;
        *param_3 = (long)(puVar19 + 1);
      }
      uVar14 = FUN_00157968(param_1,*puVar19);
      return uVar14;
    case 0x27ee:
      uVar9 = *(uint *)(param_3 + 3);
      if (((int)uVar9 < 0) && (*(uint *)(param_3 + 3) = uVar9 + 8, uVar9 < 0xfffffff9)) {
        puVar19 = (undefined8 *)(param_3[1] + (long)(int)uVar9);
      }
      else {
        puVar19 = (undefined8 *)*param_3;
        *param_3 = (long)(puVar19 + 1);
      }
      uVar14 = FUN_00157970(param_1,*puVar19);
      return uVar14;
    case 0x27ef:
      uVar9 = *(uint *)(param_3 + 3);
      if (((int)uVar9 < 0) && (*(uint *)(param_3 + 3) = uVar9 + 8, uVar9 < 0xfffffff9)) {
        puVar19 = (undefined8 *)(param_3[1] + (long)(int)uVar9);
      }
      else {
        puVar19 = (undefined8 *)*param_3;
        *param_3 = (long)(puVar19 + 1);
      }
      uVar14 = FUN_00157978(param_1,*puVar19);
      return uVar14;
    case 0x27f0:
      param_1 = param_1 + 0xe10;
      break;
    case 0x27f4:
      uVar9 = *(uint *)(param_3 + 3);
      if (((int)uVar9 < 0) && (*(uint *)(param_3 + 3) = uVar9 + 8, uVar9 < 0xfffffff9)) {
        puVar19 = (undefined8 *)(param_3[1] + (long)(int)uVar9);
      }
      else {
        puVar19 = (undefined8 *)*param_3;
        *param_3 = (long)(puVar19 + 1);
      }
      uVar9 = 0;
      *(undefined8 *)(param_1 + 0x810) = *puVar19;
      goto switchD_00174f1c_caseD_5b;
    case 0x27f6:
      if (((byte)PTR_DAT_04be2008[0x10] >> 2 & 1) != 0) {
        param_1 = param_1 + 0xd90;
        break;
      }
      goto switchD_00174eec_caseD_2813;
    case 0x27fc:
      param_1 = param_1 + 0xe50;
      break;
    case 0x27fe:
      param_1 = param_1 + 0xcd8;
      break;
    case 0x2800:
    case 0x2801:
      uVar9 = *(uint *)(param_3 + 3);
      if (((int)uVar9 < 0) && (*(uint *)(param_3 + 3) = uVar9 + 8, uVar9 < 0xfffffff9)) {
        plVar13 = (long *)(param_3[1] + (long)(int)uVar9);
      }
      else {
        plVar13 = (long *)*param_3;
        *param_3 = (long)(plVar13 + 1);
      }
      lVar22 = *plVar13;
      if ((lVar22 == 0) || (*(int *)(lVar22 + 0x1710) == -0x3f212453)) {
        if (*(long *)(param_1 + 0xf08) != 0) {
          FUN_0015a950(*(long *)(param_1 + 0xf08),param_1);
        }
        FUN_0015a87c(lVar22,param_1,param_2 == 0x2801);
      }
      goto LAB_00178d1c;
    case 0x2803:
      uVar9 = *(uint *)(param_3 + 3);
      if (((int)uVar9 < 0) && (*(uint *)(param_3 + 3) = uVar9 + 8, uVar9 < 0xfffffff9)) {
        puVar19 = (undefined8 *)(param_3[1] + (long)(int)uVar9);
      }
      else {
        puVar19 = (undefined8 *)*param_3;
        *param_3 = (long)(puVar19 + 1);
      }
      uVar9 = 0;
      *(undefined8 *)(param_1 + 0xa20) = *puVar19;
      goto switchD_00174f1c_caseD_5b;
    case 0x2806:
    case 0x2807:
    case 0x280e:
    case 0x280f:
    case 0x2810:
    case 0x2811:
    case 0x2812:
    case 0x2814:
    case 0x2817:
      goto switchD_00174eec_caseD_2806;
    case 0x2813:
      goto switchD_00174eec_caseD_2813;
    case 0x2816:
      param_1 = param_1 + 0xd50;
      break;
    case 0x281a:
      param_1 = param_1 + 0xe70;
      break;
    case 0x281d:
      uVar9 = *(uint *)(param_3 + 3);
      if (((int)uVar9 < 0) && (*(uint *)(param_3 + 3) = uVar9 + 8, uVar9 < 0xfffffff9)) {
        puVar19 = (undefined8 *)(param_3[1] + (long)(int)uVar9);
      }
      else {
        puVar19 = (undefined8 *)*param_3;
        *param_3 = (long)(puVar19 + 1);
      }
      uVar9 = FUN_00153d78(param_1 + 0x820,*puVar19,0);
      if (uVar9 != 0) goto switchD_00174f1c_caseD_5b;
      uVar6 = 4;
LAB_0017892c:
      *(undefined4 *)(param_1 + 0xa38) = uVar6;
      uVar14 = *(ulong *)(param_1 + 0xf60);
      goto LAB_00178934;
    case 0x2821:
      uVar9 = *(uint *)(param_3 + 3);
      if (((int)uVar9 < 0) && (*(uint *)(param_3 + 3) = uVar9 + 8, uVar9 < 0xfffffff9)) {
        puVar19 = (undefined8 *)(param_3[1] + (long)(int)uVar9);
      }
      else {
        puVar19 = (undefined8 *)*param_3;
        *param_3 = (long)(puVar19 + 1);
      }
      uVar9 = 0;
      *(undefined8 *)(param_1 + 0xf28) = *puVar19;
      goto switchD_00174f1c_caseD_5b;
    case 0x2824:
      uVar14 = FUN_001446a8();
      if ((uVar14 & 1) != 0) {
        param_1 = param_1 + 0xdb0;
        break;
      }
      goto switchD_00174eec_caseD_2813;
    case 0x2825:
      uVar14 = FUN_001446a8();
      if ((uVar14 & 1) != 0) {
        param_1 = param_1 + 0xdb8;
        break;
      }
      goto switchD_00174eec_caseD_2813;
    case 0x2827:
      uVar9 = *(uint *)(param_3 + 3);
      if (((int)uVar9 < 0) && (*(uint *)(param_3 + 3) = uVar9 + 8, uVar9 < 0xfffffff9)) {
        puVar19 = (undefined8 *)(param_3[1] + (long)(int)uVar9);
      }
      else {
        puVar19 = (undefined8 *)*param_3;
        *param_3 = (long)(puVar19 + 1);
      }
      uVar14 = FUN_00174db4(param_1 + 0xe78,*puVar19);
      uVar21 = *(ulong *)(param_1 + 0xf60) & 0xfe00000000000000 |
               *(ulong *)(param_1 + 0xf60) & 0xffffffffffffff |
               (ulong)(*(long *)(param_1 + 0xe78) != 0) << 0x38;
      goto LAB_00178984;
    case 0x282a:
      uVar9 = *(uint *)(param_3 + 3);
      if (((int)uVar9 < 0) && (*(uint *)(param_3 + 3) = uVar9 + 8, uVar9 < 0xfffffff9)) {
        puVar19 = (undefined8 *)(param_3[1] + (long)(int)uVar9);
      }
      else {
        puVar19 = (undefined8 *)*param_3;
        *param_3 = (long)(puVar19 + 1);
      }
      uVar9 = 0;
      *(undefined8 *)(param_1 + 0xf48) = *puVar19;
      goto switchD_00174f1c_caseD_5b;
    case 0x282c:
      uVar9 = *(uint *)(param_3 + 3);
      if (((int)uVar9 < 0) && (*(uint *)(param_3 + 3) = uVar9 + 8, uVar9 < 0xfffffff9)) {
        puVar19 = (undefined8 *)(param_3[1] + (long)(int)uVar9);
      }
      else {
        puVar19 = (undefined8 *)*param_3;
        *param_3 = (long)(puVar19 + 1);
      }
      uVar9 = 0;
      *(undefined8 *)(param_1 + 0xf50) = *puVar19;
      goto switchD_00174f1c_caseD_5b;
    default:
      if (param_2 == 0x2906) {
        uVar9 = *(uint *)(param_3 + 3);
        if (((int)uVar9 < 0) && (*(uint *)(param_3 + 3) = uVar9 + 8, uVar9 < 0xfffffff9)) {
          puVar19 = (undefined8 *)(param_3[1] + (long)(int)uVar9);
        }
        else {
          puVar19 = (undefined8 *)*param_3;
          *param_3 = (long)(puVar19 + 1);
        }
        uVar9 = 0;
        *(undefined8 *)(param_1 + 0xa98) = *puVar19;
        goto switchD_00174f1c_caseD_5b;
      }
      if (param_2 == 0x2909) {
        uVar9 = *(uint *)(param_3 + 3);
        if (((int)uVar9 < 0) && (*(uint *)(param_3 + 3) = uVar9 + 8, uVar9 < 0xfffffff9)) {
          puVar19 = (undefined8 *)(param_3[1] + (long)(int)uVar9);
        }
        else {
          puVar19 = (undefined8 *)*param_3;
          *param_3 = (long)(puVar19 + 1);
        }
        uVar9 = 0;
        *(undefined8 *)(param_1 + 0xab8) = *puVar19;
        goto switchD_00174f1c_caseD_5b;
      }
      goto switchD_00174eec_caseD_27a4;
    }
LAB_00176eb8:
    uVar9 = *(uint *)(param_3 + 3);
    if (((int)uVar9 < 0) && (*(uint *)(param_3 + 3) = uVar9 + 8, uVar9 < 0xfffffff9)) {
      puVar19 = (undefined8 *)(param_3[1] + (long)(int)uVar9);
    }
    else {
      puVar19 = (undefined8 *)*param_3;
      *param_3 = (long)(puVar19 + 1);
    }
    pcVar12 = (char *)*puVar19;
LAB_00176eec:
    uVar14 = FUN_00174db4(param_1,pcVar12);
    return uVar14;
  }
  uVar9 = 0;
  switch(param_2) {
  case 3:
    uVar9 = *(uint *)(param_3 + 3);
    if (((int)uVar9 < 0) && (*(uint *)(param_3 + 3) = uVar9 + 8, uVar9 < 0xfffffff9)) {
      puVar16 = (ulong *)(param_3[1] + (long)(int)uVar9);
    }
    else {
      puVar16 = (ulong *)*param_3;
      *param_3 = (long)(puVar16 + 1);
    }
    if (*puVar16 >> 0x10 == 0) {
      uVar9 = 0;
      *(ulong *)(param_1 + 0x6a8) = *puVar16;
      goto switchD_00174f1c_caseD_5b;
    }
    goto LAB_00178228;
  case 4:
  case 5:
  case 6:
  case 7:
  case 8:
  case 9:
  case 10:
  case 0xb:
  case 0xc:
  case 0xf:
  case 0x10:
  case 0x11:
  case 0x12:
  case 0x16:
  case 0x17:
  case 0x18:
  case 0x19:
  case 0x1a:
  case 0x1c:
  case 0x1d:
  case 0x1e:
  case 0x1f:
  case 0x23:
  case 0x24:
  case 0x25:
  case 0x26:
  case 0x27:
  case 0x28:
  case 0x31:
  case 0x37:
  case 0x38:
  case 0x39:
  case 0x3e:
  case 0x3f:
  case 0x41:
  case 0x42:
  case 0x43:
  case 0x46:
  case 0x48:
  case 0x49:
  case 0x4c:
  case 0x4d:
  case 0x4f:
  case 0x52:
  case 0x53:
  case 0x56:
  case 0x57:
  case 0x58:
  case 0x59:
  case 0x5d:
  case 0x5e:
  case 0x5f:
  case 0x61:
  case 100:
  case 0x66:
  case 0x67:
  case 0x68:
  case 0x6c:
  case 0x6d:
  case 0x73:
  case 0x74:
  case 0x75:
  case 0x76:
  case 0x78:
  case 0x7a:
  case 0x7b:
  case 0x7c:
  case 0x7d:
  case 0x7e:
  case 0x7f:
  case 0x80:
  case 0x82:
  case 0x83:
  case 0x84:
  case 0x85:
  case 0x86:
  case 0x87:
  case 0x8e:
  case 0x8f:
  case 0x90:
  case 0x91:
  case 0x92:
  case 0x93:
  case 0x94:
  case 0x95:
  case 0x97:
  case 0x98:
  case 0x99:
  case 0xa2:
  case 0xa3:
  case 0xa4:
  case 0xa5:
  case 0xa7:
  case 0xa8:
  case 0xa9:
  case 0xaa:
  case 0xad:
  case 0xae:
  case 0xaf:
  case 0xb0:
  case 0xb1:
  case 0xb3:
  case 0xb4:
  case 0xb7:
  case 0xb8:
  case 0xb9:
  case 0xba:
  case 0xbb:
  case 0xbe:
  case 0xbf:
  case 0xc0:
  case 0xc3:
  case 0xc4:
  case 0xc6:
  case 199:
  case 200:
  case 0xc9:
  case 0xca:
  case 0xcb:
  case 0xcc:
  case 0xcd:
  case 0xce:
  case 0xd0:
  case 0xd1:
  case 0xd3:
  case 0xd9:
  case 0xdb:
  case 0xdc:
  case 0xdd:
  case 0xde:
  case 0xdf:
  case 0xe0:
  case 0xe4:
  case 0xe6:
  case 0xe7:
  case 0xeb:
  case 0xec:
  case 0xee:
  case 0xf0:
  case 0xf1:
  case 0xf3:
  case 0xf6:
  case 0xf7:
  case 0xfb:
  case 0xfc:
  case 0xfd:
  case 0xfe:
  case 0xff:
  case 0x100:
  case 0x101:
  case 0x102:
  case 0x103:
  case 0x104:
  case 0x106:
  case 0x107:
  case 0x108:
  case 0x10a:
  case 0x10d:
  case 0x10e:
  case 0x110:
  case 0x111:
  case 0x114:
  case 0x115:
  case 0x117:
  case 0x11a:
  case 0x11b:
  case 0x11c:
    goto switchD_00174eec_caseD_27a4;
  case 0xd:
    uVar9 = *(uint *)(param_3 + 3);
    if (((int)uVar9 < 0) && (*(uint *)(param_3 + 3) = uVar9 + 8, uVar9 < 0xfffffff9)) {
      puVar16 = (ulong *)(param_3[1] + (long)(int)uVar9);
    }
    else {
      puVar16 = (ulong *)*param_3;
      *param_3 = (long)(puVar16 + 1);
    }
    if (*puVar16 < 0x20c49c) {
      lVar22 = *puVar16 * 1000;
LAB_00177bf8:
      uVar9 = 0;
      *(long *)(param_1 + 0x7a8) = lVar22;
      goto switchD_00174f1c_caseD_5b;
    }
    goto LAB_00178228;
  case 0xe:
switchD_00174fc8_caseD_75a3:
    uVar9 = *(uint *)(param_3 + 3);
    if (((int)uVar9 < 0) && (*(uint *)(param_3 + 3) = uVar9 + 8, uVar9 < 0xfffffff9)) {
      plVar13 = (long *)(param_3[1] + (long)(int)uVar9);
    }
    else {
      plVar13 = (long *)*param_3;
      *param_3 = (long)(plVar13 + 1);
    }
    if (-2 < *plVar13) {
      uVar9 = 0;
      *(long *)(param_1 + 0x7d8) = *plVar13;
      goto switchD_00174f1c_caseD_5b;
    }
    goto LAB_00178228;
  case 0x13:
    uVar9 = *(uint *)(param_3 + 3);
    if (((int)uVar9 < 0) && (*(uint *)(param_3 + 3) = uVar9 + 8, uVar9 < 0xfffffff9)) {
      plVar13 = (long *)(param_3[1] + (long)(int)uVar9);
    }
    else {
      plVar13 = (long *)*param_3;
      *param_3 = (long)(plVar13 + 1);
    }
    if (-1 < *plVar13) {
      uVar9 = 0;
      *(long *)(param_1 + 0x7e0) = *plVar13;
      goto switchD_00174f1c_caseD_5b;
    }
    goto LAB_00178228;
  case 0x14:
    uVar9 = *(uint *)(param_3 + 3);
    if (((int)uVar9 < 0) && (*(uint *)(param_3 + 3) = uVar9 + 8, uVar9 < 0xfffffff9)) {
      plVar13 = (long *)(param_3[1] + (long)(int)uVar9);
    }
    else {
      plVar13 = (long *)*param_3;
      *param_3 = (long)(plVar13 + 1);
    }
    if (-1 < *plVar13) {
      uVar9 = 0;
      *(long *)(param_1 + 0x7e8) = *plVar13;
      goto switchD_00174f1c_caseD_5b;
    }
    goto LAB_00178228;
  case 0x15:
switchD_00174fc8_caseD_75a4:
    uVar9 = *(uint *)(param_3 + 3);
    if (((int)uVar9 < 0) && (*(uint *)(param_3 + 3) = uVar9 + 8, uVar9 < 0xfffffff9)) {
      plVar13 = (long *)(param_3[1] + (long)(int)uVar9);
    }
    else {
      plVar13 = (long *)*param_3;
      *param_3 = (long)(plVar13 + 1);
    }
    if (-2 < *plVar13) {
      uVar9 = 0;
      *(long *)(param_1 + 0x800) = *plVar13;
      goto switchD_00174f1c_caseD_5b;
    }
    goto LAB_00178228;
  case 0x1b:
    uVar9 = *(uint *)(param_3 + 3);
    if (((int)uVar9 < 0) && (*(uint *)(param_3 + 3) = uVar9 + 8, uVar9 < 0xfffffff9)) {
      plVar13 = (long *)(param_3[1] + (long)(int)uVar9);
    }
    else {
      plVar13 = (long *)*param_3;
      *param_3 = (long)(plVar13 + 1);
    }
    uVar14 = *(ulong *)(param_1 + 0xf60) & 0xffffffffffffff80 |
             *(ulong *)(param_1 + 0xf60) & 0x3f | (ulong)(*plVar13 != 0) << 6;
    break;
  case 0x20:
  case 0x5c:
  case 0xfa:
    goto switchD_00174eec_caseD_2813;
  case 0x21:
    uVar9 = *(uint *)(param_3 + 3);
    if (((int)uVar9 < 0) && (*(uint *)(param_3 + 3) = uVar9 + 8, uVar9 < 0xfffffff9)) {
      puVar16 = (ulong *)(param_3[1] + (long)(int)uVar9);
    }
    else {
      puVar16 = (ulong *)*param_3;
      *param_3 = (long)(puVar16 + 1);
    }
    if (*puVar16 < 4) {
      uVar9 = 0;
      *(int *)(param_1 + 0xa28) = (int)*puVar16;
      goto switchD_00174f1c_caseD_5b;
    }
    goto LAB_00178228;
  case 0x22:
switchD_00174f1c_caseD_22:
    uVar9 = *(uint *)(param_3 + 3);
    if (((int)uVar9 < 0) && (*(uint *)(param_3 + 3) = uVar9 + 8, uVar9 < 0xfffffff9)) {
      puVar19 = (undefined8 *)(param_3[1] + (long)(int)uVar9);
    }
    else {
      puVar19 = (undefined8 *)*param_3;
      *param_3 = (long)(puVar19 + 1);
    }
    uVar9 = 0;
    *(undefined8 *)(param_1 + 0xa30) = *puVar19;
    goto switchD_00174f1c_caseD_5b;
  case 0x29:
    uVar9 = *(uint *)(param_3 + 3);
    if (((int)uVar9 < 0) && (*(uint *)(param_3 + 3) = uVar9 + 8, uVar9 < 0xfffffff9)) {
      plVar13 = (long *)(param_3[1] + (long)(int)uVar9);
    }
    else {
      plVar13 = (long *)*param_3;
      *param_3 = (long)(plVar13 + 1);
    }
    uVar14 = *(ulong *)(param_1 + 0xf60) & 0xfffffffff8000000 |
             *(ulong *)(param_1 + 0xf60) & 0x3ffffff | (ulong)(*plVar13 != 0) << 0x1a;
    break;
  case 0x2a:
    uVar9 = *(uint *)(param_3 + 3);
    if (((int)uVar9 < 0) && (*(uint *)(param_3 + 3) = uVar9 + 8, uVar9 < 0xfffffff9)) {
      plVar13 = (long *)(param_3[1] + (long)(int)uVar9);
    }
    else {
      plVar13 = (long *)*param_3;
      *param_3 = (long)(plVar13 + 1);
    }
    uVar14 = *(ulong *)(param_1 + 0xf60) & 0xffffffffffc00000 |
             *(ulong *)(param_1 + 0xf60) & 0x1fffff | (ulong)(*plVar13 != 0) << 0x15;
    break;
  case 0x2b:
    uVar9 = *(uint *)(param_3 + 3);
    if (((int)uVar9 < 0) && (*(uint *)(param_3 + 3) = uVar9 + 8, uVar9 < 0xfffffff9)) {
      plVar13 = (long *)(param_3[1] + (long)(int)uVar9);
    }
    else {
      plVar13 = (long *)*param_3;
      *param_3 = (long)(plVar13 + 1);
    }
    lVar22 = *plVar13;
    uVar9 = 0;
    *(ulong *)(param_1 + 0xf60) =
         *(ulong *)(param_1 + 0xf60) & 0xffffffffffff0000 |
         *(ulong *)(param_1 + 0xf60) & 0x7fff | (ulong)(lVar22 != 0) << 0xf;
    if (lVar22 == 0) {
      uVar7 = *(uint *)(param_1 + 0xfcc) & 0xffffffef;
    }
    else {
      uVar7 = *(uint *)(param_1 + 0xfcc) | 0x10;
    }
    *(uint *)(param_1 + 0xfcc) = uVar7;
    goto switchD_00174f1c_caseD_5b;
  case 0x2c:
    uVar9 = *(uint *)(param_3 + 3);
    if (((int)uVar9 < 0) && (*(uint *)(param_3 + 3) = uVar9 + 8, uVar9 < 0xfffffff9)) {
      plVar13 = (long *)(param_3[1] + (long)(int)uVar9);
    }
    else {
      plVar13 = (long *)*param_3;
      *param_3 = (long)(plVar13 + 1);
    }
    uVar14 = *(ulong *)(param_1 + 0xf60) & 0xfffffffffe000000 |
             *(ulong *)(param_1 + 0xf60) & 0xffffff | (ulong)(*plVar13 != 0) << 0x18;
    break;
  case 0x2d:
    uVar9 = *(uint *)(param_3 + 3);
    if (((int)uVar9 < 0) && (*(uint *)(param_3 + 3) = uVar9 + 8, uVar9 < 0xfffffff9)) {
      plVar13 = (long *)(param_3[1] + (long)(int)uVar9);
    }
    else {
      plVar13 = (long *)*param_3;
      *param_3 = (long)(plVar13 + 1);
    }
    uVar14 = *(ulong *)(param_1 + 0xf60) & 0xfffffffffffe0000 |
             *(ulong *)(param_1 + 0xf60) & 0xffff | (ulong)(*plVar13 != 0) << 0x10;
    break;
  case 0x2e:
  case 0x36:
    uVar9 = *(uint *)(param_3 + 3);
    if (((int)uVar9 < 0) && (*(uint *)(param_3 + 3) = uVar9 + 8, uVar9 < 0xfffffff9)) {
      plVar13 = (long *)(param_3[1] + (long)(int)uVar9);
    }
    else {
      plVar13 = (long *)*param_3;
      *param_3 = (long)(plVar13 + 1);
    }
    lVar22 = *plVar13;
    uVar9 = 0;
    uVar14 = *(ulong *)(param_1 + 0xf60) & 0xfffffffffc000000 |
             *(ulong *)(param_1 + 0xf60) & 0x1ffffff | (ulong)(lVar22 != 0) << 0x19;
    *(ulong *)(param_1 + 0xf60) = uVar14;
    if (lVar22 != 0) {
      *(undefined4 *)(param_1 + 0xa38) = 5;
LAB_00178934:
      uVar14 = uVar14 & 0xfffffffffeffffff;
      goto LAB_00178938;
    }
    goto LAB_00178c24;
  case 0x2f:
    uVar9 = *(uint *)(param_3 + 3);
    if (((int)uVar9 < 0) && (*(uint *)(param_3 + 3) = uVar9 + 8, uVar9 < 0xfffffff9)) {
      plVar13 = (long *)(param_3[1] + (long)(int)uVar9);
    }
    else {
      plVar13 = (long *)*param_3;
      *param_3 = (long)(plVar13 + 1);
    }
    if (*plVar13 != 0) {
      uVar9 = 0;
      uVar6 = 2;
      goto LAB_0017892c;
    }
LAB_00178c24:
    uVar9 = 0;
    uVar6 = 1;
LAB_00178d34:
    *(undefined4 *)(param_1 + 0xa38) = uVar6;
    goto switchD_00174f1c_caseD_5b;
  case 0x30:
    uVar9 = *(uint *)(param_3 + 3);
    if (((int)uVar9 < 0) && (*(uint *)(param_3 + 3) = uVar9 + 8, uVar9 < 0xfffffff9)) {
      plVar13 = (long *)(param_3[1] + (long)(int)uVar9);
    }
    else {
      plVar13 = (long *)*param_3;
      *param_3 = (long)(plVar13 + 1);
    }
    uVar14 = *(ulong *)(param_1 + 0xf60) & 0xffffffffffffc000 |
             *(ulong *)(param_1 + 0xf60) & 0x1fff | (ulong)(*plVar13 != 0) << 0xd;
    break;
  case 0x32:
    uVar9 = *(uint *)(param_3 + 3);
    if (((int)uVar9 < 0) && (*(uint *)(param_3 + 3) = uVar9 + 8, uVar9 < 0xfffffff9)) {
      plVar13 = (long *)(param_3[1] + (long)(int)uVar9);
    }
    else {
      plVar13 = (long *)*param_3;
      *param_3 = (long)(plVar13 + 1);
    }
    uVar14 = *(ulong *)(param_1 + 0xf60) & 0xffffffffffffe000 |
             *(ulong *)(param_1 + 0xf60) & 0xfff | (ulong)(*plVar13 != 0) << 0xc;
    break;
  case 0x33:
    uVar9 = *(uint *)(param_3 + 3);
    if (((int)uVar9 < 0) && (*(uint *)(param_3 + 3) = uVar9 + 8, uVar9 < 0xfffffff9)) {
      puVar16 = (ulong *)(param_3[1] + (long)(int)uVar9);
    }
    else {
      puVar16 = (ulong *)*param_3;
      *param_3 = (long)(puVar16 + 1);
    }
    if (*puVar16 < 3) {
      uVar9 = 0;
      *(int *)(param_1 + 0xc78) = (int)*puVar16;
      goto switchD_00174f1c_caseD_5b;
    }
    goto LAB_00178228;
  case 0x34:
    uVar9 = *(uint *)(param_3 + 3);
    if (((int)uVar9 < 0) && (*(uint *)(param_3 + 3) = uVar9 + 8, uVar9 < 0xfffffff9)) {
      plVar13 = (long *)(param_3[1] + (long)(int)uVar9);
    }
    else {
      plVar13 = (long *)*param_3;
      *param_3 = (long)(plVar13 + 1);
    }
    uVar14 = *(ulong *)(param_1 + 0xf60) & 0xfffffffffff80000 |
             *(ulong *)(param_1 + 0xf60) & 0x3ffff | (ulong)(*plVar13 != 0) << 0x12;
    break;
  case 0x35:
    uVar9 = *(uint *)(param_3 + 3);
    if (((int)uVar9 < 0) && (*(uint *)(param_3 + 3) = uVar9 + 8, uVar9 < 0xfffffff9)) {
      plVar13 = (long *)(param_3[1] + (long)(int)uVar9);
    }
    else {
      plVar13 = (long *)*param_3;
      *param_3 = (long)(plVar13 + 1);
    }
    uVar14 = *(ulong *)(param_1 + 0xf60) & 0xfffffffffffff000 |
             *(ulong *)(param_1 + 0xf60) & 0x7ff | (ulong)(*plVar13 != 0) << 0xb;
    break;
  case 0x3a:
    uVar9 = *(uint *)(param_3 + 3);
    if (((int)uVar9 < 0) && (*(uint *)(param_3 + 3) = uVar9 + 8, uVar9 < 0xfffffff9)) {
      plVar13 = (long *)(param_3[1] + (long)(int)uVar9);
    }
    else {
      plVar13 = (long *)*param_3;
      *param_3 = (long)(plVar13 + 1);
    }
    uVar14 = *(ulong *)(param_1 + 0xf60) & 0xffffffffff000000 |
             *(ulong *)(param_1 + 0xf60) & 0x7fffff | (ulong)(*plVar13 != 0) << 0x17;
    break;
  case 0x3b:
    uVar9 = *(uint *)(param_3 + 3);
    if (((int)uVar9 < 0) && (*(uint *)(param_3 + 3) = uVar9 + 8, uVar9 < 0xfffffff9)) {
      puVar16 = (ulong *)(param_3[1] + (long)(int)uVar9);
    }
    else {
      puVar16 = (ulong *)*param_3;
      *param_3 = (long)(puVar16 + 1);
    }
    if (*puVar16 >> 0x10 == 0) {
      uVar9 = 0;
      *(ulong *)(param_1 + 0x680) = *puVar16;
      goto switchD_00174f1c_caseD_5b;
    }
    goto LAB_00178228;
  case 0x3c:
switchD_00174fc8_caseD_75a8:
    uVar9 = *(uint *)(param_3 + 3);
    if (((int)uVar9 < 0) && (*(uint *)(param_3 + 3) = uVar9 + 8, uVar9 < 0xfffffff9)) {
      plVar13 = (long *)(param_3[1] + (long)(int)uVar9);
    }
    else {
      plVar13 = (long *)*param_3;
      *param_3 = (long)(plVar13 + 1);
    }
    lVar22 = *plVar13;
    if (-2 < lVar22) {
      if ((*(long *)(param_1 + 0x6f8) < lVar22) &&
         (*(long *)(param_1 + 0x6e8) == *(long *)(param_1 + 0xe88))) {
        FUN_00143300();
        *(undefined8 *)(param_1 + 0xe88) = 0;
        *(undefined8 *)(param_1 + 0x6e8) = 0;
      }
      uVar9 = 0;
      *(long *)(param_1 + 0x6f8) = lVar22;
      goto switchD_00174f1c_caseD_5b;
    }
    goto LAB_00178228;
  case 0x3d:
    uVar9 = *(uint *)(param_3 + 3);
    if (((int)uVar9 < 0) && (*(uint *)(param_3 + 3) = uVar9 + 8, uVar9 < 0xfffffff9)) {
      plVar13 = (long *)(param_3[1] + (long)(int)uVar9);
    }
    else {
      plVar13 = (long *)*param_3;
      *param_3 = (long)(plVar13 + 1);
    }
    uVar14 = *(ulong *)(param_1 + 0xf60) & 0xfffffffffffff800 |
             *(ulong *)(param_1 + 0xf60) & 0x3ff | (ulong)(*plVar13 != 0) << 10;
    break;
  case 0x40:
    uVar9 = *(uint *)(param_3 + 3);
    if (((int)uVar9 < 0) && (*(uint *)(param_3 + 3) = uVar9 + 8, uVar9 < 0xfffffff9)) {
      plVar13 = (long *)(param_3[1] + (long)(int)uVar9);
    }
    else {
      plVar13 = (long *)*param_3;
      *param_3 = (long)(plVar13 + 1);
    }
    bVar4 = *plVar13 != 0;
    *(byte *)(param_1 + 0xad0) = *(byte *)(param_1 + 0xad0) & 0xfe | bVar4;
    lVar17 = *(long *)(param_1 + 0x10);
    if (lVar17 != 0) {
      bVar20 = *(byte *)(lVar17 + 0x380) & 0xfe;
LAB_00178b68:
      uVar9 = 0;
      *(byte *)(lVar17 + 0x380) = bVar20 | bVar4;
      goto switchD_00174f1c_caseD_5b;
    }
    goto LAB_00178d1c;
  case 0x44:
    uVar9 = *(uint *)(param_3 + 3);
    if (((int)uVar9 < 0) && (*(uint *)(param_3 + 3) = uVar9 + 8, uVar9 < 0xfffffff9)) {
      plVar13 = (long *)(param_3[1] + (long)(int)uVar9);
    }
    else {
      plVar13 = (long *)*param_3;
      *param_3 = (long)(plVar13 + 1);
    }
    if (-2 < *plVar13) {
      uVar9 = 0;
      *(long *)(param_1 + 0x6d8) = *plVar13;
      goto switchD_00174f1c_caseD_5b;
    }
    goto LAB_00178228;
  case 0x45:
    uVar9 = *(uint *)(param_3 + 3);
    if (((int)uVar9 < 0) && (*(uint *)(param_3 + 3) = uVar9 + 8, uVar9 < 0xfffffff9)) {
      plVar13 = (long *)(param_3[1] + (long)(int)uVar9);
    }
    else {
      plVar13 = (long *)*param_3;
      *param_3 = (long)(plVar13 + 1);
    }
    uVar14 = *(ulong *)(param_1 + 0xf60) & 0xfffffffffffffc00 |
             *(ulong *)(param_1 + 0xf60) & 0x1ff | (ulong)(*plVar13 != 0) << 9;
    break;
  case 0x47:
    uVar9 = *(uint *)(param_3 + 3);
    if (((int)uVar9 < 0) && (*(uint *)(param_3 + 3) = uVar9 + 8, uVar9 < 0xfffffff9)) {
      plVar13 = (long *)(param_3[1] + (long)(int)uVar9);
    }
    else {
      plVar13 = (long *)*param_3;
      *param_3 = (long)(plVar13 + 1);
    }
    if (-1 < *plVar13) {
      uVar9 = 0;
      *(long *)(param_1 + 0xef8) = *plVar13;
      goto switchD_00174f1c_caseD_5b;
    }
    goto LAB_00178228;
  case 0x4a:
    uVar9 = *(uint *)(param_3 + 3);
    if (((int)uVar9 < 0) && (*(uint *)(param_3 + 3) = uVar9 + 8, uVar9 < 0xfffffff9)) {
      plVar13 = (long *)(param_3[1] + (long)(int)uVar9);
    }
    else {
      plVar13 = (long *)*param_3;
      *param_3 = (long)(plVar13 + 1);
    }
    uVar14 = *(ulong *)(param_1 + 0xf60) & 0xffffffffc0000000 |
             *(ulong *)(param_1 + 0xf60) & 0x1fffffff | (ulong)(*plVar13 != 0) << 0x1d;
    break;
  case 0x4b:
    uVar9 = *(uint *)(param_3 + 3);
    if (((int)uVar9 < 0) && (*(uint *)(param_3 + 3) = uVar9 + 8, uVar9 < 0xfffffff9)) {
      plVar13 = (long *)(param_3[1] + (long)(int)uVar9);
    }
    else {
      plVar13 = (long *)*param_3;
      *param_3 = (long)(plVar13 + 1);
    }
    uVar14 = *(ulong *)(param_1 + 0xf60) & 0xffffffffe0000000 |
             *(ulong *)(param_1 + 0xf60) & 0xfffffff | (ulong)(*plVar13 != 0) << 0x1c;
    break;
  case 0x4e:
    uVar9 = *(uint *)(param_3 + 3);
    if (((int)uVar9 < 0) && (*(uint *)(param_3 + 3) = uVar9 + 8, uVar9 < 0xfffffff9)) {
      puVar16 = (ulong *)(param_3[1] + (long)(int)uVar9);
    }
    else {
      puVar16 = (ulong *)*param_3;
      *param_3 = (long)(puVar16 + 1);
    }
    if (*puVar16 < 0x20c49c) {
      lVar22 = *puVar16 * 1000;
LAB_00177c18:
      uVar9 = 0;
      *(long *)(param_1 + 0x7b0) = lVar22;
      goto switchD_00174f1c_caseD_5b;
    }
    goto LAB_00178228;
  case 0x50:
    uVar9 = *(uint *)(param_3 + 3);
    if (((int)uVar9 < 0) && (*(uint *)(param_3 + 3) = uVar9 + 8, uVar9 < 0xfffffff9)) {
      plVar13 = (long *)(param_3[1] + (long)(int)uVar9);
    }
    else {
      plVar13 = (long *)*param_3;
      *param_3 = (long)(plVar13 + 1);
    }
    if (*plVar13 == 0) goto LAB_00178d1c;
    uVar9 = 0;
    *(undefined4 *)(param_1 + 0xa38) = 1;
    uVar14 = *(ulong *)(param_1 + 0xf60) & 0xfffffffffcffffff;
    goto LAB_00178938;
  case 0x51:
    uVar9 = *(uint *)(param_3 + 3);
    if (((int)uVar9 < 0) && (*(uint *)(param_3 + 3) = uVar9 + 8, uVar9 < 0xfffffff9)) {
      plVar13 = (long *)(param_3[1] + (long)(int)uVar9);
    }
    else {
      plVar13 = (long *)*param_3;
      *param_3 = (long)(plVar13 + 1);
    }
    lVar22 = *plVar13;
    if (lVar22 == 1) {
LAB_00178088:
      FUN_0014d5f8(param_1,"CURLOPT_SSL_VERIFYHOST no longer supports 1 as value!");
      uVar9 = 0x2b;
      goto switchD_00174f1c_caseD_5b;
    }
    *(byte *)(param_1 + 0xad0) = *(byte *)(param_1 + 0xad0) & 0xfd | (lVar22 != 0) << 1;
    lVar17 = *(long *)(param_1 + 0x10);
    if (lVar17 != 0) {
      bVar4 = (lVar22 != 0) << 1;
      bVar20 = *(byte *)(lVar17 + 0x380) & 0xfd;
      goto LAB_00178b68;
    }
    goto LAB_00178d1c;
  case 0x54:
    uVar9 = *(uint *)(param_3 + 3);
    if (((int)uVar9 < 0) && (*(uint *)(param_3 + 3) = uVar9 + 8, uVar9 < 0xfffffff9)) {
      puVar16 = (ulong *)(param_3[1] + (long)(int)uVar9);
    }
    else {
      puVar16 = (ulong *)*param_3;
      *param_3 = (long)(puVar16 + 1);
    }
    uVar14 = *puVar16;
    if (-1 < (long)uVar14) {
      if (uVar14 < 6) {
        uVar9 = 0;
        uVar21 = 4;
        if (uVar14 != 0) {
          uVar21 = uVar14;
        }
        *(ulong *)(param_1 + 0xa40) = uVar21;
      }
      else {
        uVar9 = 1;
      }
      goto switchD_00174f1c_caseD_5b;
    }
    goto LAB_00178228;
  case 0x55:
    uVar9 = *(uint *)(param_3 + 3);
    if (((int)uVar9 < 0) && (*(uint *)(param_3 + 3) = uVar9 + 8, uVar9 < 0xfffffff9)) {
      plVar13 = (long *)(param_3[1] + (long)(int)uVar9);
    }
    else {
      plVar13 = (long *)*param_3;
      *param_3 = (long)(plVar13 + 1);
    }
    uVar14 = *(ulong *)(param_1 + 0xf60) & 0xffffffff80000000 |
             *(ulong *)(param_1 + 0xf60) & 0x3fffffff | (ulong)(*plVar13 != 0) << 0x1e;
    break;
  case 0x5a:
  case 0x77:
  case 0xab:
  case 0xd8:
  case 0xf4:
  case 0x105:
switchD_00174eec_caseD_2806:
    uVar9 = 4;
  case 0x5b:
    goto switchD_00174f1c_caseD_5b;
  case 0x60:
    uVar9 = *(uint *)(param_3 + 3);
    if (((int)uVar9 < 0) && (*(uint *)(param_3 + 3) = uVar9 + 8, uVar9 < 0xfffffff9)) {
      plVar13 = (long *)(param_3[1] + (long)(int)uVar9);
    }
    else {
      plVar13 = (long *)*param_3;
      *param_3 = (long)(plVar13 + 1);
    }
    uVar14 = *(ulong *)(param_1 + 0xf60) & 0xffffffffffffffc0 |
             *(ulong *)(param_1 + 0xf60) & 0x1f | (ulong)(*plVar13 != 0) << 5;
    break;
  case 0x62:
    uVar9 = *(uint *)(param_3 + 3);
    if (((int)uVar9 < 0) && (*(uint *)(param_3 + 3) = uVar9 + 8, uVar9 < 0xfffffff9)) {
      puVar16 = (ulong *)(param_3[1] + (long)(int)uVar9);
    }
    else {
      puVar16 = (ulong *)*param_3;
      *param_3 = (long)(puVar16 + 1);
    }
    uVar21 = *puVar16;
    uVar14 = uVar21;
    if (uVar21 < 0x401) {
      uVar14 = 0x400;
    }
    uVar3 = 0x4000;
    if (0 < (long)uVar21) {
      uVar3 = uVar14;
    }
    uVar14 = 0x80000;
    if ((long)uVar21 < 0x80001) {
      uVar14 = uVar3;
    }
    if (uVar14 == *(ulong *)(param_1 + 0xc30)) {
      uVar9 = 0;
    }
    else {
      lVar22 = FUN_00143310(*(undefined8 *)(param_1 + 0x1150),uVar14 + 1);
      if (lVar22 == 0) {
        uVar9 = 0x1b;
      }
      else {
        uVar9 = 0;
        *(long *)(param_1 + 0x1150) = lVar22;
      }
    }
    *(ulong *)(param_1 + 0xc30) = uVar14;
    goto switchD_00174f1c_caseD_5b;
  case 99:
    uVar9 = *(uint *)(param_3 + 3);
    if (((int)uVar9 < 0) && (*(uint *)(param_3 + 3) = uVar9 + 8, uVar9 < 0xfffffff9)) {
      plVar13 = (long *)(param_3[1] + (long)(int)uVar9);
    }
    else {
      plVar13 = (long *)*param_3;
      *param_3 = (long)(plVar13 + 1);
    }
    uVar14 = *(ulong *)(param_1 + 0xf60) & 0xfffffffc00000000 |
             *(ulong *)(param_1 + 0xf60) & 0x1ffffffff | (ulong)(*plVar13 != 0) << 0x21;
    break;
  case 0x65:
    uVar9 = *(uint *)(param_3 + 3);
    if (((int)uVar9 < 0) && (*(uint *)(param_3 + 3) = uVar9 + 8, uVar9 < 0xfffffff9)) {
      puVar16 = (ulong *)(param_3[1] + (long)(int)uVar9);
    }
    else {
      puVar16 = (ulong *)*param_3;
      *param_3 = (long)(puVar16 + 1);
    }
    if (*puVar16 < 8) {
      uVar9 = 0;
      *(int *)(param_1 + 0xc20) = (int)*puVar16;
      goto switchD_00174f1c_caseD_5b;
    }
    goto LAB_00178228;
  case 0x69:
    uVar9 = *(uint *)(param_3 + 3);
    if (((int)uVar9 < 0) && (*(uint *)(param_3 + 3) = uVar9 + 8, uVar9 < 0xfffffff9)) {
      plVar13 = (long *)(param_3[1] + (long)(int)uVar9);
    }
    else {
      plVar13 = (long *)*param_3;
      *param_3 = (long)(plVar13 + 1);
    }
    uVar14 = *(ulong *)(param_1 + 0xf60) & 0xffffffffffe00000 |
             *(ulong *)(param_1 + 0xf60) & 0xfffff | (ulong)(*plVar13 != 0) << 0x14;
    break;
  case 0x6a:
    uVar9 = *(uint *)(param_3 + 3);
    if (((int)uVar9 < 0) && (*(uint *)(param_3 + 3) = uVar9 + 8, uVar9 < 0xfffffff9)) {
      plVar13 = (long *)(param_3[1] + (long)(int)uVar9);
    }
    else {
      plVar13 = (long *)*param_3;
      *param_3 = (long)(plVar13 + 1);
    }
    uVar14 = *(ulong *)(param_1 + 0xf60) & 0xffffffff00000000 |
             *(ulong *)(param_1 + 0xf60) & 0x7fffffff | (ulong)(*plVar13 != 0) << 0x1f;
    break;
  case 0x6b:
    uVar9 = *(uint *)(param_3 + 3);
    if (((int)uVar9 < 0) && (*(uint *)(param_3 + 3) = uVar9 + 8, uVar9 < 0xfffffff9)) {
      puVar16 = (ulong *)(param_3[1] + (long)(int)uVar9);
    }
    else {
      puVar16 = (ulong *)*param_3;
      *param_3 = (long)(puVar16 + 1);
    }
    uVar14 = *puVar16;
    if (uVar14 == 0) {
      uVar9 = 0;
      *(undefined8 *)(param_1 + 0x6b0) = 0;
    }
    else {
      uVar21 = 0;
      *(byte *)(param_1 + 0x1280) =
           *(byte *)(param_1 + 0x1280) & 0xfb | (byte)((uint)(uVar14 & 0x10) >> 2);
      if ((uVar14 & 0x10) != 0) {
        uVar14 = uVar14 & 0xffffffffffffffc1 | 2;
      }
      do {
        if (uVar21 == 0x1f) goto switchD_00174eec_caseD_2813;
        uVar3 = uVar21 & 0x3f;
        uVar21 = uVar21 + 1;
      } while (((uVar14 & 0xffffffffffffffd3) >> uVar3 & 1) == 0);
      uVar9 = 0;
      *(ulong *)(param_1 + 0x6b0) = uVar14 & 0xffffffffffffffd3;
    }
    goto switchD_00174f1c_caseD_5b;
  case 0x6e:
    uVar9 = *(uint *)(param_3 + 3);
    if (((int)uVar9 < 0) && (*(uint *)(param_3 + 3) = uVar9 + 8, uVar9 < 0xfffffff9)) {
      plVar13 = (long *)(param_3[1] + (long)(int)uVar9);
    }
    else {
      plVar13 = (long *)*param_3;
      *param_3 = (long)(plVar13 + 1);
    }
    lVar22 = *plVar13;
    if ((lVar22 == 2) || (lVar22 == 1)) {
      uVar9 = 0;
      *(int *)(param_1 + 0xc64) = (int)lVar22;
      goto switchD_00174f1c_caseD_5b;
    }
    if (lVar22 == 0) {
      uVar9 = 0;
      *(undefined4 *)(param_1 + 0xc64) = 0;
      goto switchD_00174f1c_caseD_5b;
    }
switchD_00174eec_caseD_27a4:
    uVar9 = 0x30;
    goto switchD_00174f1c_caseD_5b;
  case 0x6f:
    uVar9 = *(uint *)(param_3 + 3);
    if (((int)uVar9 < 0) && (*(uint *)(param_3 + 3) = uVar9 + 8, uVar9 < 0xfffffff9)) {
      puVar16 = (ulong *)(param_3[1] + (long)(int)uVar9);
    }
    else {
      puVar16 = (ulong *)*param_3;
      *param_3 = (long)(puVar16 + 1);
    }
    uVar14 = *puVar16;
    if (uVar14 == 0) {
      uVar9 = 0;
      *(undefined8 *)(param_1 + 0x6b8) = 0;
    }
    else {
      uVar21 = 0;
      *(byte *)(param_1 + 0x12a0) =
           *(byte *)(param_1 + 0x12a0) & 0xfb | (byte)((uint)(uVar14 & 0x10) >> 2);
      if ((uVar14 & 0x10) != 0) {
        uVar14 = uVar14 & 0xffffffffffffffc1 | 2;
      }
      do {
        if (uVar21 == 0x1f) goto switchD_00174eec_caseD_2813;
        uVar3 = uVar21 & 0x3f;
        uVar21 = uVar21 + 1;
      } while (((uVar14 & 0xffffffffffffffd3) >> uVar3 & 1) == 0);
      uVar9 = 0;
      *(ulong *)(param_1 + 0x6b8) = uVar14 & 0xffffffffffffffd3;
    }
    goto switchD_00174f1c_caseD_5b;
  case 0x70:
    uVar9 = *(uint *)(param_3 + 3);
    if (((int)uVar9 < 0) && (*(uint *)(param_3 + 3) = uVar9 + 8, uVar9 < 0xfffffff9)) {
      puVar16 = (ulong *)(param_3[1] + (long)(int)uVar9);
    }
    else {
      puVar16 = (ulong *)*param_3;
      *param_3 = (long)(puVar16 + 1);
    }
    if (*puVar16 < 0x20c49c) {
      uVar9 = 0;
      *(ulong *)(param_1 + 0x7c8) = *puVar16 * 1000;
      goto switchD_00174f1c_caseD_5b;
    }
    goto LAB_00178228;
  case 0x71:
    uVar9 = *(uint *)(param_3 + 3);
    if (((int)uVar9 < 0) && (*(uint *)(param_3 + 3) = uVar9 + 8, uVar9 < 0xfffffff9)) {
      puVar16 = (ulong *)(param_3[1] + (long)(int)uVar9);
    }
    else {
      puVar16 = (ulong *)*param_3;
      *param_3 = (long)(puVar16 + 1);
    }
    if (*puVar16 < 3) {
      uVar9 = 0;
      *(ulong *)(param_1 + 0xc50) = *puVar16;
      goto switchD_00174f1c_caseD_5b;
    }
    goto LAB_00178228;
  case 0x72:
switchD_00174fc8_caseD_75a5:
    uVar9 = *(uint *)(param_3 + 3);
    if (((int)uVar9 < 0) && (*(uint *)(param_3 + 3) = uVar9 + 8, uVar9 < 0xfffffff9)) {
      plVar13 = (long *)(param_3[1] + (long)(int)uVar9);
    }
    else {
      plVar13 = (long *)*param_3;
      *param_3 = (long)(plVar13 + 1);
    }
    if (-1 < *plVar13) {
      uVar9 = 0;
      *(long *)(param_1 + 0xc58) = *plVar13;
      goto switchD_00174f1c_caseD_5b;
    }
    goto LAB_00178228;
  case 0x79:
    uVar9 = *(uint *)(param_3 + 3);
    if (((int)uVar9 < 0) && (*(uint *)(param_3 + 3) = uVar9 + 8, uVar9 < 0xfffffff9)) {
      plVar13 = (long *)(param_3[1] + (long)(int)uVar9);
    }
    else {
      plVar13 = (long *)*param_3;
      *param_3 = (long)(plVar13 + 1);
    }
    uVar14 = *(ulong *)(param_1 + 0xf60) & 0xfffffff000000000 |
             *(ulong *)(param_1 + 0xf60) & 0x7ffffffff | (ulong)(*plVar13 != 0) << 0x23;
    break;
  case 0x81:
    uVar9 = *(uint *)(param_3 + 3);
    if (((int)uVar9 < 0) && (*(uint *)(param_3 + 3) = uVar9 + 8, uVar9 < 0xfffffff9)) {
      puVar16 = (ulong *)(param_3[1] + (long)(int)uVar9);
    }
    else {
      puVar16 = (ulong *)*param_3;
      *param_3 = (long)(puVar16 + 1);
    }
    if (*puVar16 < 3) {
      uVar9 = 0;
      *(int *)(param_1 + 0xc80) = (int)*puVar16;
      goto switchD_00174f1c_caseD_5b;
    }
    goto LAB_00178228;
  case 0x88:
    uVar9 = *(uint *)(param_3 + 3);
    if (((int)uVar9 < 0) && (*(uint *)(param_3 + 3) = uVar9 + 8, uVar9 < 0xfffffff9)) {
      plVar13 = (long *)(param_3[1] + (long)(int)uVar9);
    }
    else {
      plVar13 = (long *)*param_3;
      *param_3 = (long)(plVar13 + 1);
    }
    uVar14 = *(ulong *)(param_1 + 0xf60) & 0xffffffe000000000 |
             *(ulong *)(param_1 + 0xf60) & 0xfffffffff | (ulong)(*plVar13 != 0) << 0x24;
    break;
  case 0x89:
    uVar9 = *(uint *)(param_3 + 3);
    if (((int)uVar9 < 0) && (*(uint *)(param_3 + 3) = uVar9 + 8, uVar9 < 0xfffffff9)) {
      plVar13 = (long *)(param_3[1] + (long)(int)uVar9);
    }
    else {
      plVar13 = (long *)*param_3;
      *param_3 = (long)(plVar13 + 1);
    }
    uVar14 = *(ulong *)(param_1 + 0xf60) & 0xffffffc000000000 |
             *(ulong *)(param_1 + 0xf60) & 0x1fffffffff | (ulong)(*plVar13 != 0) << 0x25;
    break;
  case 0x8a:
    uVar9 = *(uint *)(param_3 + 3);
    if (((int)uVar9 < 0) && (*(uint *)(param_3 + 3) = uVar9 + 8, uVar9 < 0xfffffff9)) {
      puVar16 = (ulong *)(param_3[1] + (long)(int)uVar9);
    }
    else {
      puVar16 = (ulong *)*param_3;
      *param_3 = (long)(puVar16 + 1);
    }
    if (*puVar16 < 4) {
      uVar9 = 0;
      *(int *)(param_1 + 0xc60) = (int)*puVar16;
      goto switchD_00174f1c_caseD_5b;
    }
    goto LAB_00178228;
  case 0x8b:
    uVar9 = *(uint *)(param_3 + 3);
    if (((int)uVar9 < 0) && (*(uint *)(param_3 + 3) = uVar9 + 8, uVar9 < 0xfffffff9)) {
      puVar16 = (ulong *)(param_3[1] + (long)(int)uVar9);
    }
    else {
      puVar16 = (ulong *)*param_3;
      *param_3 = (long)(puVar16 + 1);
    }
    if (*puVar16 >> 0x10 == 0) {
      uVar5 = FUN_00146670();
      uVar9 = 0;
      *(undefined2 *)(param_1 + 0x700) = uVar5;
      goto switchD_00174f1c_caseD_5b;
    }
    goto LAB_00178228;
  case 0x8c:
    uVar9 = *(uint *)(param_3 + 3);
    if (((int)uVar9 < 0) && (*(uint *)(param_3 + 3) = uVar9 + 8, uVar9 < 0xfffffff9)) {
      puVar16 = (ulong *)(param_3[1] + (long)(int)uVar9);
    }
    else {
      puVar16 = (ulong *)*param_3;
      *param_3 = (long)(puVar16 + 1);
    }
    if (*puVar16 >> 0x10 == 0) {
      uVar6 = FUN_00146668();
      uVar9 = 0;
      *(undefined4 *)(param_1 + 0x704) = uVar6;
      goto switchD_00174f1c_caseD_5b;
    }
    goto LAB_00178228;
  case 0x8d:
    uVar9 = *(uint *)(param_3 + 3);
    if (((int)uVar9 < 0) && (*(uint *)(param_3 + 3) = uVar9 + 8, uVar9 < 0xfffffff9)) {
      plVar13 = (long *)(param_3[1] + (long)(int)uVar9);
    }
    else {
      plVar13 = (long *)*param_3;
      *param_3 = (long)(plVar13 + 1);
    }
    uVar14 = *(ulong *)(param_1 + 0xf60) & 0xffffff8000000000 |
             *(ulong *)(param_1 + 0xf60) & 0x3fffffffff | (ulong)(*plVar13 != 0) << 0x26;
    break;
  case 0x96:
    uVar9 = *(uint *)(param_3 + 3);
    if (((int)uVar9 < 0) && (*(uint *)(param_3 + 3) = uVar9 + 8, uVar9 < 0xfffffff9)) {
      plVar13 = (long *)(param_3[1] + (long)(int)uVar9);
    }
    else {
      plVar13 = (long *)*param_3;
      *param_3 = (long)(plVar13 + 1);
    }
    lVar22 = *plVar13;
    uVar9 = 0;
    *(byte *)(param_1 + 0xad0) = *(byte *)(param_1 + 0xad0) & 0xf7 | (lVar22 != 0) << 3;
    *(byte *)(param_1 + 3000) = *(byte *)(param_1 + 3000) & 0xf7 | (lVar22 != 0) << 3;
    goto switchD_00174f1c_caseD_5b;
  case 0x9a:
    uVar9 = *(uint *)(param_3 + 3);
    if (((int)uVar9 < 0) && (*(uint *)(param_3 + 3) = uVar9 + 8, uVar9 < 0xfffffff9)) {
      puVar16 = (ulong *)(param_3[1] + (long)(int)uVar9);
    }
    else {
      puVar16 = (ulong *)*param_3;
      *param_3 = (long)(puVar16 + 1);
    }
    if (*puVar16 < 3) {
      uVar9 = 0;
      *(int *)(param_1 + 0xc84) = (int)*puVar16;
      goto switchD_00174f1c_caseD_5b;
    }
    goto LAB_00178228;
  case 0x9b:
    uVar9 = *(uint *)(param_3 + 3);
    if (((int)uVar9 < 0) && (*(uint *)(param_3 + 3) = uVar9 + 8, uVar9 < 0xfffffff9)) {
      plVar13 = (long *)(param_3[1] + (long)(int)uVar9);
    }
    else {
      plVar13 = (long *)*param_3;
      *param_3 = (long)(plVar13 + 1);
    }
    lVar22 = *plVar13;
    if (-1 < lVar22) goto LAB_00177bf8;
    goto LAB_00178228;
  case 0x9c:
    uVar9 = *(uint *)(param_3 + 3);
    if (((int)uVar9 < 0) && (*(uint *)(param_3 + 3) = uVar9 + 8, uVar9 < 0xfffffff9)) {
      plVar13 = (long *)(param_3[1] + (long)(int)uVar9);
    }
    else {
      plVar13 = (long *)*param_3;
      *param_3 = (long)(plVar13 + 1);
    }
    lVar22 = *plVar13;
    if (-1 < lVar22) goto LAB_00177c18;
    goto LAB_00178228;
  case 0x9d:
    uVar9 = *(uint *)(param_3 + 3);
    if (((int)uVar9 < 0) && (*(uint *)(param_3 + 3) = uVar9 + 8, uVar9 < 0xfffffff9)) {
      plVar13 = (long *)(param_3[1] + (long)(int)uVar9);
    }
    else {
      plVar13 = (long *)*param_3;
      *param_3 = (long)(plVar13 + 1);
    }
    uVar14 = *(ulong *)(param_1 + 0xf60) & 0xffffff0000000000 |
             *(ulong *)(param_1 + 0xf60) & 0x7fffffffff | (ulong)(*plVar13 == 0) << 0x27;
    break;
  case 0x9e:
    uVar9 = *(uint *)(param_3 + 3);
    if (((int)uVar9 < 0) && (*(uint *)(param_3 + 3) = uVar9 + 8, uVar9 < 0xfffffff9)) {
      plVar13 = (long *)(param_3[1] + (long)(int)uVar9);
    }
    else {
      plVar13 = (long *)*param_3;
      *param_3 = (long)(plVar13 + 1);
    }
    uVar14 = *(ulong *)(param_1 + 0xf60) & 0xfffffe0000000000 |
             *(ulong *)(param_1 + 0xf60) & 0xffffffffff | (ulong)(*plVar13 == 0) << 0x28;
    break;
  case 0x9f:
    uVar9 = *(uint *)(param_3 + 3);
    if (((int)uVar9 < 0) && (*(uint *)(param_3 + 3) = uVar9 + 8, uVar9 < 0xfffffff9)) {
      puVar16 = (ulong *)(param_3[1] + (long)(int)uVar9);
    }
    else {
      puVar16 = (ulong *)*param_3;
      *param_3 = (long)(puVar16 + 1);
    }
    if (*puVar16 < 0x200) {
      uVar9 = 0;
      *(ulong *)(param_1 + 0xc88) = *puVar16;
      goto switchD_00174f1c_caseD_5b;
    }
    goto LAB_00178228;
  case 0xa0:
    uVar9 = *(uint *)(param_3 + 3);
    if (((int)uVar9 < 0) && (*(uint *)(param_3 + 3) = uVar9 + 8, uVar9 < 0xfffffff9)) {
      puVar16 = (ulong *)(param_3[1] + (long)(int)uVar9);
    }
    else {
      puVar16 = (ulong *)*param_3;
      *param_3 = (long)(puVar16 + 1);
    }
    if (*puVar16 < 0x200) {
      uVar9 = 0;
      *(ulong *)(param_1 + 0xc90) = *puVar16;
      goto switchD_00174f1c_caseD_5b;
    }
    goto LAB_00178228;
  case 0xa1:
    uVar9 = *(uint *)(param_3 + 3);
    if (((int)uVar9 < 0) && (*(uint *)(param_3 + 3) = uVar9 + 8, uVar9 < 0xfffffff9)) {
      plVar13 = (long *)(param_3[1] + (long)(int)uVar9);
    }
    else {
      plVar13 = (long *)*param_3;
      *param_3 = (long)(plVar13 + 1);
    }
    if (-1 < *plVar13) {
      uVar9 = 0;
      *(uint *)(param_1 + 0x6e0) = (uint)*plVar13 & 7;
      goto switchD_00174f1c_caseD_5b;
    }
    goto LAB_00178228;
  case 0xa6:
    uVar9 = *(uint *)(param_3 + 3);
    if (((int)uVar9 < 0) && (*(uint *)(param_3 + 3) = uVar9 + 8, uVar9 < 0xfffffff9)) {
      plVar13 = (long *)(param_3[1] + (long)(int)uVar9);
    }
    else {
      plVar13 = (long *)*param_3;
      *param_3 = (long)(plVar13 + 1);
    }
    if (*plVar13 == 1) {
      uVar9 = 0;
      uVar14 = *(ulong *)(param_1 + 0xf60) | 0x20000000000;
    }
    else {
      if (*plVar13 != 0) goto switchD_00174eec_caseD_27a4;
      uVar9 = 0;
      uVar14 = *(ulong *)(param_1 + 0xf60) & 0xfffffdffffffffff;
    }
LAB_00178938:
    *(ulong *)(param_1 + 0xf60) = uVar14;
    goto switchD_00174f1c_caseD_5b;
  case 0xac:
    if (((byte)PTR_DAT_04be2008[0x10] >> 1 & 1) != 0) {
      uVar9 = *(uint *)(param_3 + 3);
      if (((int)uVar9 < 0) && (*(uint *)(param_3 + 3) = uVar9 + 8, uVar9 < 0xfffffff9)) {
        plVar13 = (long *)(param_3[1] + (long)(int)uVar9);
      }
      else {
        plVar13 = (long *)*param_3;
        *param_3 = (long)(plVar13 + 1);
      }
      bVar20 = *(byte *)(param_1 + 0xb28) & 0xfe | *plVar13 != 0;
LAB_00178b9c:
      uVar9 = 0;
      *(byte *)(param_1 + 0xb28) = bVar20;
      goto switchD_00174f1c_caseD_5b;
    }
    goto switchD_00174eec_caseD_2813;
  case 0xb2:
    uVar9 = *(uint *)(param_3 + 3);
    if (((int)uVar9 < 0) && (*(uint *)(param_3 + 3) = uVar9 + 8, uVar9 < 0xfffffff9)) {
      plVar13 = (long *)(param_3[1] + (long)(int)uVar9);
    }
    else {
      plVar13 = (long *)*param_3;
      *param_3 = (long)(plVar13 + 1);
    }
    if (-1 < *plVar13) {
      uVar9 = 0;
      *(long *)(param_1 + 2000) = *plVar13;
      goto switchD_00174f1c_caseD_5b;
    }
    goto LAB_00178228;
  case 0xb5:
    uVar9 = *(uint *)(param_3 + 3);
    if (((int)uVar9 < 0) && (*(uint *)(param_3 + 3) = uVar9 + 8, uVar9 < 0xfffffff9)) {
      puVar19 = (undefined8 *)(param_3[1] + (long)(int)uVar9);
    }
    else {
      puVar19 = (undefined8 *)*param_3;
      *param_3 = (long)(puVar19 + 1);
    }
    uVar9 = 0;
    *(undefined8 *)(param_1 + 0xe98) = *puVar19;
    goto switchD_00174f1c_caseD_5b;
  case 0xb6:
    uVar9 = *(uint *)(param_3 + 3);
    if (((int)uVar9 < 0) && (*(uint *)(param_3 + 3) = uVar9 + 8, uVar9 < 0xfffffff9)) {
      puVar19 = (undefined8 *)(param_3[1] + (long)(int)uVar9);
    }
    else {
      puVar19 = (undefined8 *)*param_3;
      *param_3 = (long)(puVar19 + 1);
    }
    uVar9 = 0;
    *(undefined8 *)(param_1 + 0xea0) = *puVar19;
    goto switchD_00174f1c_caseD_5b;
  case 0xbc:
    uVar9 = *(uint *)(param_3 + 3);
    if (((int)uVar9 < 0) && (*(uint *)(param_3 + 3) = uVar9 + 8, uVar9 < 0xfffffff9)) {
      plVar13 = (long *)(param_3[1] + (long)(int)uVar9);
    }
    else {
      plVar13 = (long *)*param_3;
      *param_3 = (long)(plVar13 + 1);
    }
    uVar14 = *(ulong *)(param_1 + 0xf60) & 0xfffffffe00000000 |
             *(ulong *)(param_1 + 0xf60) & 0xffffffff | (ulong)(*plVar13 != 0) << 0x20;
    break;
  case 0xbd:
    uVar9 = *(uint *)(param_3 + 3);
    if (((int)uVar9 < 0) && (*(uint *)(param_3 + 3) = uVar9 + 8, uVar9 < 0xfffffff9)) {
      plVar13 = (long *)(param_3[1] + (long)(int)uVar9);
    }
    else {
      plVar13 = (long *)*param_3;
      *param_3 = (long)(plVar13 + 1);
    }
    uVar9 = 0;
    iVar8 = 0;
    if (*plVar13 - 1U < 0xb) {
      iVar8 = (int)(*plVar13 - 1U) + 1;
    }
    *(int *)(param_1 + 0xeb0) = iVar8;
    goto switchD_00174f1c_caseD_5b;
  case 0xc1:
  case 0xc2:
    uVar9 = *(uint *)(param_3 + 3);
    if (((int)uVar9 < 0) && (*(uint *)(param_3 + 3) = uVar9 + 8, uVar9 < 0xfffffff9)) {
      puVar19 = (undefined8 *)(param_3[1] + (long)(int)uVar9);
    }
    else {
      puVar19 = (undefined8 *)*param_3;
      *param_3 = (long)(puVar19 + 1);
    }
    uVar9 = 0;
    *(undefined8 *)(param_1 + 0x1520) = *puVar19;
    goto switchD_00174f1c_caseD_5b;
  case 0xc5:
    uVar9 = *(uint *)(param_3 + 3);
    if (((int)uVar9 < 0) && (*(uint *)(param_3 + 3) = uVar9 + 8, uVar9 < 0xfffffff9)) {
      plVar13 = (long *)(param_3[1] + (long)(int)uVar9);
    }
    else {
      plVar13 = (long *)*param_3;
      *param_3 = (long)(plVar13 + 1);
    }
    uVar14 = *(ulong *)(param_1 + 0xf60) & 0xfffff00000000000 |
             *(ulong *)(param_1 + 0xf60) & 0x7ffffffffff | (ulong)(*plVar13 != 0) << 0x2b;
    break;
  case 0xcf:
    uVar9 = *(uint *)(param_3 + 3);
    if (((int)uVar9 < 0) && (*(uint *)(param_3 + 3) = uVar9 + 8, uVar9 < 0xfffffff9)) {
      plVar13 = (long *)(param_3[1] + (long)(int)uVar9);
    }
    else {
      plVar13 = (long *)*param_3;
      *param_3 = (long)(plVar13 + 1);
    }
    uVar14 = *(ulong *)(param_1 + 0xf60) & 0xfffffffffff00000 |
             *(ulong *)(param_1 + 0xf60) & 0x7ffff | (ulong)(*plVar13 != 0) << 0x13;
    break;
  case 0xd2:
    uVar9 = *(uint *)(param_3 + 3);
    if (((int)uVar9 < 0) && (*(uint *)(param_3 + 3) = uVar9 + 8, uVar9 < 0xfffffff9)) {
      plVar13 = (long *)(param_3[1] + (long)(int)uVar9);
    }
    else {
      plVar13 = (long *)*param_3;
      *param_3 = (long)(plVar13 + 1);
    }
    if (-1 < *plVar13) {
      uVar9 = 0;
      *(long *)(param_1 + 0xee0) = *plVar13;
      goto switchD_00174f1c_caseD_5b;
    }
    goto LAB_00178228;
  case 0xd4:
    uVar9 = *(uint *)(param_3 + 3);
    if (((int)uVar9 < 0) && (*(uint *)(param_3 + 3) = uVar9 + 8, uVar9 < 0xfffffff9)) {
      plVar13 = (long *)(param_3[1] + (long)(int)uVar9);
    }
    else {
      plVar13 = (long *)*param_3;
      *param_3 = (long)(plVar13 + 1);
    }
    if (-1 < *plVar13) {
      uVar9 = 0;
      *(long *)(param_1 + 0x7b8) = *plVar13;
      goto switchD_00174f1c_caseD_5b;
    }
    goto LAB_00178228;
  case 0xd5:
    uVar9 = *(uint *)(param_3 + 3);
    if (((int)uVar9 < 0) && (*(uint *)(param_3 + 3) = uVar9 + 8, uVar9 < 0xfffffff9)) {
      plVar13 = (long *)(param_3[1] + (long)(int)uVar9);
    }
    else {
      plVar13 = (long *)*param_3;
      *param_3 = (long)(plVar13 + 1);
    }
    uVar14 = *(ulong *)(param_1 + 0xf60) & 0xffffe00000000000 |
             *(ulong *)(param_1 + 0xf60) & 0xfffffffffff | (ulong)(*plVar13 != 0) << 0x2c;
    break;
  case 0xd6:
    uVar9 = *(uint *)(param_3 + 3);
    if (((int)uVar9 < 0) && (*(uint *)(param_3 + 3) = uVar9 + 8, uVar9 < 0xfffffff9)) {
      plVar13 = (long *)(param_3[1] + (long)(int)uVar9);
    }
    else {
      plVar13 = (long *)*param_3;
      *param_3 = (long)(plVar13 + 1);
    }
    if (-1 < *plVar13) {
      uVar9 = 0;
      *(long *)(param_1 + 0xee8) = *plVar13;
      goto switchD_00174f1c_caseD_5b;
    }
    goto LAB_00178228;
  case 0xd7:
    uVar9 = *(uint *)(param_3 + 3);
    if (((int)uVar9 < 0) && (*(uint *)(param_3 + 3) = uVar9 + 8, uVar9 < 0xfffffff9)) {
      plVar13 = (long *)(param_3[1] + (long)(int)uVar9);
    }
    else {
      plVar13 = (long *)*param_3;
      *param_3 = (long)(plVar13 + 1);
    }
    if (-1 < *plVar13) {
      uVar9 = 0;
      *(long *)(param_1 + 0xef0) = *plVar13;
      goto switchD_00174f1c_caseD_5b;
    }
    goto LAB_00178228;
  case 0xda:
    uVar9 = *(uint *)(param_3 + 3);
    if (((int)uVar9 < 0) && (*(uint *)(param_3 + 3) = uVar9 + 8, uVar9 < 0xfffffff9)) {
      plVar13 = (long *)(param_3[1] + (long)(int)uVar9);
    }
    else {
      plVar13 = (long *)*param_3;
      *param_3 = (long)(plVar13 + 1);
    }
    uVar14 = *(ulong *)(param_1 + 0xf60) & 0xfffff80000000000 |
             *(ulong *)(param_1 + 0xf60) & 0x3ffffffffff | (ulong)(*plVar13 != 0) << 0x2a;
    break;
  case 0xe1:
    uVar9 = *(uint *)(param_3 + 3);
    if (((int)uVar9 < 0) && (*(uint *)(param_3 + 3) = uVar9 + 8, uVar9 < 0xfffffff9)) {
      plVar13 = (long *)(param_3[1] + (long)(int)uVar9);
    }
    else {
      plVar13 = (long *)*param_3;
      *param_3 = (long)(plVar13 + 1);
    }
    uVar14 = *(ulong *)(param_1 + 0xf60) & 0xffff800000000000 |
             *(ulong *)(param_1 + 0xf60) & 0x3fffffffffff | (ulong)(*plVar13 != 0) << 0x2e;
    break;
  case 0xe2:
    uVar9 = *(uint *)(param_3 + 3);
    if (((int)uVar9 < 0) && (*(uint *)(param_3 + 3) = uVar9 + 8, uVar9 < 0xfffffff9)) {
      plVar13 = (long *)(param_3[1] + (long)(int)uVar9);
    }
    else {
      plVar13 = (long *)*param_3;
      *param_3 = (long)(plVar13 + 1);
    }
    uVar14 = *(ulong *)(param_1 + 0xf60) & 0xffff000000000000 |
             *(ulong *)(param_1 + 0xf60) & 0x7fffffffffff | (ulong)(*plVar13 != 0) << 0x2f;
    break;
  case 0xe3:
    uVar9 = *(uint *)(param_3 + 3);
    if (((int)uVar9 < 0) && (*(uint *)(param_3 + 3) = uVar9 + 8, uVar9 < 0xfffffff9)) {
      plVar13 = (long *)(param_3[1] + (long)(int)uVar9);
    }
    else {
      plVar13 = (long *)*param_3;
      *param_3 = (long)(plVar13 + 1);
    }
    if (-1 < *plVar13) {
      uVar9 = 0;
      *(long *)(param_1 + 0xf00) = *plVar13;
      goto switchD_00174f1c_caseD_5b;
    }
    goto LAB_00178228;
  case 0xe5:
    uVar9 = *(uint *)(param_3 + 3);
    if (((int)uVar9 < 0) && (*(uint *)(param_3 + 3) = uVar9 + 8, uVar9 < 0xfffffff9)) {
      puVar15 = (uint *)(param_3[1] + (long)(int)uVar9);
    }
    else {
      puVar15 = (uint *)*param_3;
      *param_3 = (long)(puVar15 + 2);
    }
    uVar14 = *(ulong *)(param_1 + 0xf60) & 0xffffffffffffffe0 |
             *(ulong *)(param_1 + 0xf60) & 0xf | ((ulong)*puVar15 & 1) << 4;
    break;
  case 0xe8:
    uVar14 = thunk_FUN_0017b1f8();
    if ((uVar14 & 1) != 0) {
      uVar9 = *(uint *)(param_3 + 3);
      if (((int)uVar9 < 0) && (*(uint *)(param_3 + 3) = uVar9 + 8, uVar9 < 0xfffffff9)) {
        plVar13 = (long *)(param_3[1] + (long)(int)uVar9);
      }
      else {
        plVar13 = (long *)*param_3;
        *param_3 = (long)(plVar13 + 1);
      }
      lVar22 = *plVar13;
      *(byte *)(param_1 + 0xad0) = *(byte *)(param_1 + 0xad0) & 0xfb | (lVar22 != 0) << 2;
      lVar17 = *(long *)(param_1 + 0x10);
      if (lVar17 != 0) {
        bVar4 = (lVar22 != 0) << 2;
        bVar20 = *(byte *)(lVar17 + 0x380) & 0xfb;
        goto LAB_00178b68;
      }
      goto LAB_00178d1c;
    }
    goto switchD_00174eec_caseD_2813;
  case 0xe9:
    uVar14 = thunk_FUN_0017b2a0();
    if ((uVar14 & 1) != 0) {
      uVar9 = *(uint *)(param_3 + 3);
      if (((int)uVar9 < 0) && (*(uint *)(param_3 + 3) = uVar9 + 8, uVar9 < 0xfffffff9)) {
        plVar13 = (long *)(param_3[1] + (long)(int)uVar9);
      }
      else {
        plVar13 = (long *)*param_3;
        *param_3 = (long)(plVar13 + 1);
      }
      bVar20 = *(byte *)(param_1 + 0xb28) & 0xfd | (*plVar13 != 0) << 1;
      goto LAB_00178b9c;
    }
switchD_00174eec_caseD_2813:
    uVar9 = 4;
    goto switchD_00174f1c_caseD_5b;
  case 0xea:
    uVar9 = *(uint *)(param_3 + 3);
    if (((int)uVar9 < 0) && (*(uint *)(param_3 + 3) = uVar9 + 8, uVar9 < 0xfffffff9)) {
      plVar13 = (long *)(param_3[1] + (long)(int)uVar9);
    }
    else {
      plVar13 = (long *)*param_3;
      *param_3 = (long)(plVar13 + 1);
    }
    uVar14 = *(ulong *)(param_1 + 0xf60) & 0xfffe000000000000 |
             *(ulong *)(param_1 + 0xf60) & 0xffffffffffff | (ulong)(*plVar13 != 0) << 0x30;
    break;
  case 0xed:
    uVar9 = *(uint *)(param_3 + 3);
    if (((int)uVar9 < 0) && (*(uint *)(param_3 + 3) = uVar9 + 8, uVar9 < 0xfffffff9)) {
      plVar13 = (long *)(param_3[1] + (long)(int)uVar9);
    }
    else {
      plVar13 = (long *)*param_3;
      *param_3 = (long)(plVar13 + 1);
    }
    uVar14 = *(ulong *)(param_1 + 0xf60) & 0xfffc000000000000 |
             *(ulong *)(param_1 + 0xf60) & 0x1ffffffffffff | (ulong)(*plVar13 != 0) << 0x31;
    break;
  case 0xef:
    uVar9 = *(uint *)(param_3 + 3);
    if (((int)uVar9 < 0) && (*(uint *)(param_3 + 3) = uVar9 + 8, uVar9 < 0xfffffff9)) {
      plVar13 = (long *)(param_3[1] + (long)(int)uVar9);
    }
    else {
      plVar13 = (long *)*param_3;
      *param_3 = (long)(plVar13 + 1);
    }
    if (*plVar13 - 1U < 0x100) {
      uVar9 = 0;
      *(int *)(param_1 + 0xf10) = (int)*plVar13;
      goto switchD_00174f1c_caseD_5b;
    }
    goto LAB_00178d1c;
  case 0xf2:
    uVar9 = *(uint *)(param_3 + 3);
    if (((int)uVar9 < 0) && (*(uint *)(param_3 + 3) = uVar9 + 8, uVar9 < 0xfffffff9)) {
      plVar13 = (long *)(param_3[1] + (long)(int)uVar9);
    }
    else {
      plVar13 = (long *)*param_3;
      *param_3 = (long)(plVar13 + 1);
    }
    uVar14 = *(ulong *)(param_1 + 0xf60) & 0xfffffffffffffff0 |
             *(ulong *)(param_1 + 0xf60) & 7 | (ulong)(*plVar13 != 0) << 3;
    break;
  case 0xf5:
    uVar9 = *(uint *)(param_3 + 3);
    if (((int)uVar9 < 0) && (*(uint *)(param_3 + 3) = uVar9 + 8, uVar9 < 0xfffffff9)) {
      plVar13 = (long *)(param_3[1] + (long)(int)uVar9);
    }
    else {
      plVar13 = (long *)*param_3;
      *param_3 = (long)(plVar13 + 1);
    }
    uVar14 = *(ulong *)(param_1 + 0xf60) & 0xfffffffffffc0000 |
             *(ulong *)(param_1 + 0xf60) & 0x1ffff | (ulong)(*plVar13 != 0) << 0x11;
    break;
  case 0xf8:
    uVar9 = *(uint *)(param_3 + 3);
    if (((int)uVar9 < 0) && (*(uint *)(param_3 + 3) = uVar9 + 8, uVar9 < 0xfffffff9)) {
      plVar13 = (long *)(param_3[1] + (long)(int)uVar9);
    }
    else {
      plVar13 = (long *)*param_3;
      *param_3 = (long)(plVar13 + 1);
    }
    bVar4 = *plVar13 != 0;
    *(byte *)(param_1 + 3000) = *(byte *)(param_1 + 3000) & 0xfe | bVar4;
    lVar17 = *(long *)(param_1 + 0x10);
    if (lVar17 != 0) {
      bVar20 = *(byte *)(lVar17 + 0x410) & 0xfe;
LAB_00178aa8:
      uVar9 = 0;
      *(byte *)(lVar17 + 0x410) = bVar20 | bVar4;
      goto switchD_00174f1c_caseD_5b;
    }
    goto LAB_00178d1c;
  case 0xf9:
    uVar9 = *(uint *)(param_3 + 3);
    if (((int)uVar9 < 0) && (*(uint *)(param_3 + 3) = uVar9 + 8, uVar9 < 0xfffffff9)) {
      plVar13 = (long *)(param_3[1] + (long)(int)uVar9);
    }
    else {
      plVar13 = (long *)*param_3;
      *param_3 = (long)(plVar13 + 1);
    }
    lVar22 = *plVar13;
    if (lVar22 == 1) goto LAB_00178088;
    *(byte *)(param_1 + 3000) = *(byte *)(param_1 + 3000) & 0xfd | (lVar22 != 0) << 1;
    lVar17 = *(long *)(param_1 + 0x10);
    if (lVar17 != 0) {
      bVar4 = (lVar22 != 0) << 1;
      bVar20 = *(byte *)(lVar17 + 0x410) & 0xfd;
      goto LAB_00178aa8;
    }
LAB_00178d1c:
    uVar9 = 0;
    goto switchD_00174f1c_caseD_5b;
  case 0x109:
    uVar9 = *(uint *)(param_3 + 3);
    if (((int)uVar9 < 0) && (*(uint *)(param_3 + 3) = uVar9 + 8, uVar9 < 0xfffffff9)) {
      plVar13 = (long *)(param_3[1] + (long)(int)uVar9);
    }
    else {
      plVar13 = (long *)*param_3;
      *param_3 = (long)(plVar13 + 1);
    }
    uVar14 = *(ulong *)(param_1 + 0xf60) & 0xfff8000000000000 |
             *(ulong *)(param_1 + 0xf60) & 0x3ffffffffffff | (ulong)(*plVar13 != 0) << 0x32;
    break;
  case 0x10b:
    uVar9 = *(uint *)(param_3 + 3);
    if (((int)uVar9 < 0) && (*(uint *)(param_3 + 3) = uVar9 + 8, uVar9 < 0xfffffff9)) {
      puVar16 = (ulong *)(param_3[1] + (long)(int)uVar9);
    }
    else {
      puVar16 = (ulong *)*param_3;
      *param_3 = (long)(puVar16 + 1);
    }
    uVar14 = *puVar16;
    *(ulong *)(param_1 + 0x6c8) = uVar14;
    uVar9 = (uint)((uVar14 & 0xfffffffffffffffa) != 0) << 2;
    goto switchD_00174f1c_caseD_5b;
  case 0x10c:
    uVar9 = *(uint *)(param_3 + 3);
    if (((int)uVar9 < 0) && (*(uint *)(param_3 + 3) = uVar9 + 8, uVar9 < 0xfffffff9)) {
      plVar13 = (long *)(param_3[1] + (long)(int)uVar9);
    }
    else {
      plVar13 = (long *)*param_3;
      *param_3 = (long)(plVar13 + 1);
    }
    uVar14 = *(ulong *)(param_1 + 0xf60) & 0xfffffffffffffe00 |
             *(ulong *)(param_1 + 0xf60) & 0xff | (ulong)(*plVar13 != 0) << 8;
    break;
  case 0x10f:
    uVar9 = *(uint *)(param_3 + 3);
    if (((int)uVar9 < 0) && (*(uint *)(param_3 + 3) = uVar9 + 8, uVar9 < 0xfffffff9)) {
      plVar13 = (long *)(param_3[1] + (long)(int)uVar9);
    }
    else {
      plVar13 = (long *)*param_3;
      *param_3 = (long)(plVar13 + 1);
    }
    if (-1 < *plVar13) {
      uVar9 = 0;
      *(long *)(param_1 + 0x7c0) = *plVar13;
      goto switchD_00174f1c_caseD_5b;
    }
    goto LAB_00178228;
  case 0x112:
    uVar9 = *(uint *)(param_3 + 3);
    if (((int)uVar9 < 0) && (*(uint *)(param_3 + 3) = uVar9 + 8, uVar9 < 0xfffffff9)) {
      plVar13 = (long *)(param_3[1] + (long)(int)uVar9);
    }
    else {
      plVar13 = (long *)*param_3;
      *param_3 = (long)(plVar13 + 1);
    }
    uVar14 = *(ulong *)(param_1 + 0xf60) & 0xffc0000000000000 |
             *(ulong *)(param_1 + 0xf60) & 0x1fffffffffffff | (ulong)(*plVar13 != 0) << 0x35;
    break;
  case 0x113:
    uVar9 = *(uint *)(param_3 + 3);
    if (((int)uVar9 < 0) && (*(uint *)(param_3 + 3) = uVar9 + 8, uVar9 < 0xfffffff9)) {
      plVar13 = (long *)(param_3[1] + (long)(int)uVar9);
    }
    else {
      plVar13 = (long *)*param_3;
      *param_3 = (long)(plVar13 + 1);
    }
    uVar14 = *(ulong *)(param_1 + 0xf60) & 0xfff0000000000000 |
             *(ulong *)(param_1 + 0xf60) & 0x7ffffffffffff | (ulong)(*plVar13 != 0) << 0x33;
    break;
  case 0x116:
    uVar9 = *(uint *)(param_3 + 3);
    if (((int)uVar9 < 0) && (*(uint *)(param_3 + 3) = uVar9 + 8, uVar9 < 0xfffffff9)) {
      plVar13 = (long *)(param_3[1] + (long)(int)uVar9);
    }
    else {
      plVar13 = (long *)*param_3;
      *param_3 = (long)(plVar13 + 1);
    }
    uVar14 = *(ulong *)(param_1 + 0xf60) & 0xff00000000000000 |
             *(ulong *)(param_1 + 0xf60) & 0x7fffffffffffff | (ulong)(*plVar13 != 0) << 0x37;
    break;
  case 0x118:
    uVar9 = *(uint *)(param_3 + 3);
    if (((int)uVar9 < 0) && (*(uint *)(param_3 + 3) = uVar9 + 8, uVar9 < 0xfffffff9)) {
      plVar13 = (long *)(param_3[1] + (long)(int)uVar9);
    }
    else {
      plVar13 = (long *)*param_3;
      *param_3 = (long)(plVar13 + 1);
    }
    lVar22 = *plVar13;
    if (lVar22 < 0x4001) {
      lVar22 = 0x4000;
    }
    if (0x1fffff < lVar22) {
      lVar22 = 0x200000;
    }
    *(long *)(param_1 + 0xc38) = lVar22;
    FUN_00143300(*(undefined8 *)(param_1 + 0x1158));
    uVar9 = 0;
    *(undefined8 *)(param_1 + 0x1158) = 0;
    goto switchD_00174f1c_caseD_5b;
  case 0x119:
    uVar9 = *(uint *)(param_3 + 3);
    if (((int)uVar9 < 0) && (*(uint *)(param_3 + 3) = uVar9 + 8, uVar9 < 0xfffffff9)) {
      plVar13 = (long *)(param_3[1] + (long)(int)uVar9);
    }
    else {
      plVar13 = (long *)*param_3;
      *param_3 = (long)(plVar13 + 1);
    }
    if (-1 < *plVar13) {
      uVar9 = 0;
      *(long *)(param_1 + 0xf30) = *plVar13;
      goto switchD_00174f1c_caseD_5b;
    }
    goto LAB_00178228;
  case 0x11d:
    uVar9 = *(uint *)(param_3 + 3);
    if (((int)uVar9 < 0) && (*(uint *)(param_3 + 3) = uVar9 + 8, uVar9 < 0xfffffff9)) {
      plVar13 = (long *)(param_3[1] + (long)(int)uVar9);
    }
    else {
      plVar13 = (long *)*param_3;
      *param_3 = (long)(plVar13 + 1);
    }
    if (*plVar13 < 2) {
      uVar14 = *(ulong *)(param_1 + 0xf60) & 0xf800000000000000 |
               *(ulong *)(param_1 + 0xf60) & 0x3ffffffffffffff | (ulong)(*plVar13 != 0) << 0x3a;
      break;
    }
LAB_00178228:
    uVar9 = 0x2b;
    goto switchD_00174f1c_caseD_5b;
  default:
    switch(param_2) {
    case 500:
      uVar9 = *(uint *)(param_3 + 3);
      if (((int)uVar9 < 0) && (*(uint *)(param_3 + 3) = uVar9 + 8, uVar9 < 0xfffffff9)) {
        plVar13 = (long *)(param_3[1] + (long)(int)uVar9);
      }
      else {
        plVar13 = (long *)*param_3;
        *param_3 = (long)(plVar13 + 1);
      }
      uVar9 = 0;
      *(bool *)(param_1 + 0x6c0) = *plVar13 != 0;
      break;
    case 0x1f5:
      uVar9 = *(uint *)(param_3 + 3);
      if (((int)uVar9 < 0) && (*(uint *)(param_3 + 3) = uVar9 + 8, uVar9 < 0xfffffff9)) {
        plVar13 = (long *)(param_3[1] + (long)(int)uVar9);
      }
      else {
        plVar13 = (long *)*param_3;
        *param_3 = (long)(plVar13 + 1);
      }
      uVar9 = 0;
      *(bool *)(param_1 + 0xa90) = *plVar13 != 0;
      break;
    case 0x1f6:
    case 0x1f7:
    case 0x1f8:
    case 0x1f9:
      goto switchD_00174eec_caseD_27a4;
    case 0x1fa:
      uVar9 = *(uint *)(param_3 + 3);
      if (((int)uVar9 < 0) && (*(uint *)(param_3 + 3) = uVar9 + 8, uVar9 < 0xfffffff9)) {
        plVar13 = (long *)(param_3[1] + (long)(int)uVar9);
      }
      else {
        plVar13 = (long *)*param_3;
        *param_3 = (long)(plVar13 + 1);
      }
      uVar9 = 0;
      *(bool *)(param_1 + 0x6c2) = *plVar13 != 0;
      break;
    case 0x1fb:
      uVar9 = *(uint *)(param_3 + 3);
      if (((int)uVar9 < 0) && (*(uint *)(param_3 + 3) = uVar9 + 8, uVar9 < 0xfffffff9)) {
        plVar13 = (long *)(param_3[1] + (long)(int)uVar9);
      }
      else {
        plVar13 = (long *)*param_3;
        *param_3 = (long)(plVar13 + 1);
      }
      uVar9 = 0;
      *(bool *)(param_1 + 0xac0) = *plVar13 != 0;
      break;
    default:
      if (param_2 == 900) {
        uVar9 = *(uint *)(param_3 + 3);
        if (((int)uVar9 < 0) && (*(uint *)(param_3 + 3) = uVar9 + 8, uVar9 < 0xfffffff9)) {
          plVar13 = (long *)(param_3[1] + (long)(int)uVar9);
        }
        else {
          plVar13 = (long *)*param_3;
          *param_3 = (long)(plVar13 + 1);
        }
        uVar9 = 0;
        *(bool *)(param_1 + 0x6c1) = *plVar13 != 0;
        break;
      }
      goto switchD_00174eec_caseD_27a4;
    }
    goto switchD_00174f1c_caseD_5b;
  }
  uVar9 = 0;
  *(ulong *)(param_1 + 0xf60) = uVar14;
switchD_00174f1c_caseD_5b:
  return (ulong)uVar9;
}


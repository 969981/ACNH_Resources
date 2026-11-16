
/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_02703290(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  void *pvVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  long *plVar10;
  undefined8 uVar11;
  uint uVar12;
  long lVar13;
  int iVar14;
  size_t sVar15;
  long lVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  
  FUN_027052b0();
  uVar12 = *(uint *)(param_1 + 0x508);
  if ((uVar12 & 1) == 0) {
LAB_027032dc:
    if ((uVar12 >> 1 & 1) != 0) {
      uVar3 = FUN_026fe430(param_1);
      if ((uVar3 & 1) == 0) {
        FUN_02700970(param_1);
        goto LAB_02705218;
      }
      *(byte *)(param_1 + 0x50d) = *(byte *)(param_1 + 0x50d) | 2;
      uVar12 = *(uint *)(param_1 + 0x508);
    }
    puVar1 = PTR_DAT_04bb2698;
    if ((uVar12 >> 2 & 1) == 0) {
LAB_02703ce4:
      puVar1 = PTR_DAT_04bb2698;
      if ((uVar12 >> 3 & 1) == 0) {
LAB_02704658:
        puVar1 = PTR_DAT_04bb2698;
        if ((uVar12 >> 4 & 1) == 0) {
          uVar11 = 1;
          goto LAB_02705224;
        }
        lVar16 = *(long *)PTR_DAT_04bb2698;
        if (lVar16 == 0) {
          plVar4 = malloc(0x40);
        }
        else {
          plVar4 = *(long **)(param_1 + 8);
          if (plVar4 == (long *)0x0) {
            lVar5 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
            plVar4 = (long *)(lVar16 + 8);
            if (lVar5 != 0) {
              plVar4 = (long *)(lVar5 + 0xa8);
            }
            plVar4 = (long *)*plVar4;
            if (plVar4 == (long *)0x0) {
              plVar4 = (long *)0x0;
              goto LAB_027046cc;
            }
          }
          plVar4 = (long *)(**(code **)(*plVar4 + 0x30))(plVar4,0x40,8);
        }
LAB_027046cc:
        plVar10 = plVar4 + 1;
        *plVar10 = 0;
        *plVar4 = (long)&PTR_LAB_04a8bfb0;
        plVar4[2] = 0;
        plVar4[3] = 0;
        plVar4[4] = 0;
        plVar4[5] = 0;
        plVar4[6] = 0;
        plVar4[7] = 0;
        plVar6 = *(long **)(param_1 + 8);
        if (plVar6 != (long *)0x0) {
          lVar16 = *(long *)puVar1;
          *plVar10 = (long)plVar6;
          if (lVar16 == 0) {
            pvVar7 = malloc(0x14c618);
          }
          else {
            pvVar7 = (void *)(**(code **)(*plVar6 + 0x30))(plVar6,0x14c618,8);
          }
          FUN_026d8dc0();
          lVar16 = *(long *)puVar1;
          plVar4[2] = (long)pvVar7;
          if (lVar16 == 0) {
            pvVar7 = malloc(0x14c618);
          }
          else {
            plVar6 = (long *)*plVar10;
            if (plVar6 == (long *)0x0) {
              lVar5 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
              plVar6 = (long *)(lVar16 + 8);
              if (lVar5 != 0) {
                plVar6 = (long *)(lVar5 + 0xa8);
              }
              plVar6 = (long *)*plVar6;
            }
            pvVar7 = (void *)(**(code **)(*plVar6 + 0x30))(plVar6,0x14c618,8);
          }
          FUN_026d8dc0();
          lVar16 = *(long *)puVar1;
          plVar4[3] = (long)pvVar7;
          if (lVar16 == 0) {
            puVar8 = malloc(0xcdd80);
          }
          else {
            plVar6 = (long *)*plVar10;
            if (plVar6 == (long *)0x0) {
              lVar5 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
              plVar6 = (long *)(lVar16 + 8);
              if (lVar5 != 0) {
                plVar6 = (long *)(lVar5 + 0xa8);
              }
              plVar6 = (long *)*plVar6;
              if (plVar6 == (long *)0x0) {
                puVar8 = (undefined8 *)0x0;
                goto LAB_02704804;
              }
            }
            puVar8 = (undefined8 *)(**(code **)(*plVar6 + 0x30))(plVar6,0xcdd80,8);
          }
LAB_02704804:
          *(undefined1 *)(puVar8 + 6) = 0;
          puVar8[4] = 0;
          puVar8[5] = 0;
          puVar17 = puVar8 + 0x15a1e;
          puVar8[2] = 0;
          puVar8[3] = 0;
          *puVar8 = &PTR_LAB_04a8c040;
          puVar8[1] = 0;
          FUN_027299d0(puVar8 + 7,puVar8,0);
          puVar8[0x13413] = 0;
          puVar8[7] = &PTR_LAB_04a8b958;
          lVar16 = puVar8[2];
          *(undefined1 *)(puVar8 + 0x13414) = 0;
          puVar8[0x13412] = 0;
          puVar8[0x1340f] = 0;
          puVar8[0x13410] = lVar16 + 0x49dd8;
          if (puVar8[3] != 0) {
            puVar8[0x13412] = puVar8[3];
          }
          puVar8[0x13420] = puVar8 + 0x1340e;
          puVar8[0x13416] = 0;
          puVar8[0x13417] = lVar16 + 0x49dd8;
          puVar8[0x13415] = &DAT_04a8c0a0;
          puVar8[0x13411] = puVar8 + 0x13415;
          puVar8[0x13418] = 0;
          puVar8[0x13419] = 0;
          lVar5 = lVar16 + 0xf71d8;
          puVar8[0x1341a] = 0;
          *(undefined1 *)(puVar8 + 0x1341b) = 0;
          puVar8[0x1340e] = &PTR_LAB_04a8c070;
          puVar8[0x1341d] = 0;
          puVar8[0x1341e] = lVar16 + 0xa07d8;
          puVar8[0x1342f] = 0;
          *(undefined1 *)(puVar8 + 0x13430) = 0;
          puVar8[0x13421] = 0;
          *(undefined1 *)(puVar8 + 0x13422) = 0;
          puVar8[0x13428] = 0;
          *(undefined1 *)(puVar8 + 0x13429) = 0;
          plVar6 = puVar8 + 0x13434;
          *plVar6 = 0;
          *(undefined1 *)(puVar8 + 0x13437) = 0;
          puVar8[0x13424] = 0;
          puVar8[0x13425] = lVar16 + 0xa07d8;
          puVar8[0x13423] = &DAT_04a8c0a0;
          puVar8[0x1341f] = puVar8 + 0x13423;
          puVar8[0x1341c] = &PTR_LAB_04a8c070;
          puVar18 = puVar8 + 0x1342a;
          *puVar18 = &PTR_LAB_04a8c110;
          puVar8[3] = puVar18;
          puVar8[0x13426] = 0;
          puVar8[0x13427] = 0;
          puVar8[0x1342b] = 0;
          puVar8[0x1342c] = lVar5;
          puVar8[0x13432] = 0;
          puVar8[0x13433] = lVar5;
          puVar8[0x13435] = 0;
          puVar8[0x13436] = 0;
          puVar8[0x1342d] = puVar8 + 0x13431;
          puVar8[0x1342e] = puVar8 + 0x1341c;
          memset(puVar8 + 0x13438,0,0x12f30);
          lVar13 = 0x56a;
          lVar16 = 0x9a200;
          puVar1 = PTR_DAT_04bb4c38 + 0x10;
          do {
            puVar9 = (undefined8 *)((long)puVar8 + lVar16);
            lVar13 = lVar13 + -3;
            *(undefined1 *)(puVar9 + -2) = 0;
            lVar16 = lVar16 + 0xa8;
            puVar9[-4] = 0;
            puVar9[-3] = 0;
            puVar9[4] = 0;
            *(undefined1 *)(puVar9 + 5) = 0;
            puVar9[-1] = puVar1;
            *(undefined1 *)(puVar9 + 0xc) = 0;
            puVar9[-6] = 0;
            puVar9[-5] = 0;
            puVar9[-8] = puVar1;
            puVar9[-7] = 0;
            *puVar9 = 0;
            puVar9[1] = 0;
            puVar9[2] = 0;
            puVar9[3] = 0;
            puVar9[8] = 0;
            puVar9[9] = 0;
            puVar9[10] = 0;
            puVar9[0xb] = 0;
            puVar9[6] = puVar1;
            puVar9[7] = 0;
          } while (lVar13 != 0);
          puVar8[0x13431] = &PTR_LAB_04a8c140;
          iVar14 = 0;
          do {
            lVar16 = *plVar6;
            puVar9 = puVar8 + 0x13438 + (long)iVar14 * 7;
            *plVar6 = (long)puVar9;
            if (lVar16 != 0) {
              puVar9[4] = lVar16;
            }
            puVar9[2] = lVar5 + puVar9[2];
            FUN_026400e0(puVar9,lVar5);
            iVar14 = iVar14 + 1;
            lVar5 = lVar5 + 4;
          } while (iVar14 != 0x56a);
          lVar5 = puVar8[3];
          puVar8[0x15a22] = 0;
          *puVar18 = &PTR_LAB_04a8c0e0;
          puVar8[0x15a23] = 0;
          *(undefined1 *)(puVar8 + 0x15a24) = 0;
          puVar8[3] = puVar17;
          lVar16 = puVar8[2] + 0xf8780;
          puVar8[0x15a1f] = 0;
          puVar8[0x15a20] = lVar16;
          if (lVar5 != 0) {
            puVar8[0x15a22] = lVar5;
          }
          *(undefined1 *)(puVar8 + 0x15a2b) = 0;
          *puVar17 = &PTR_LAB_04a8c110;
          puVar8[0x15a21] = puVar8 + 0x15a25;
          puVar8[0x15a26] = 0;
          puVar8[0x15a27] = lVar16;
          plVar6 = puVar8 + 0x15a28;
          *plVar6 = 0;
          puVar8[0x15a29] = 0;
          puVar8[0x15a2a] = 0;
          memset(puVar8 + 0x15a2c,0,0x12f30);
          lVar13 = 0x56a;
          lVar5 = 0xad1a0;
          puVar1 = PTR_DAT_04bb4c38 + 0x10;
          do {
            puVar18 = (undefined8 *)((long)puVar8 + lVar5);
            lVar13 = lVar13 + -3;
            *(undefined1 *)(puVar18 + -2) = 0;
            lVar5 = lVar5 + 0xa8;
            puVar18[-4] = 0;
            puVar18[-3] = 0;
            puVar18[4] = 0;
            *(undefined1 *)(puVar18 + 5) = 0;
            puVar18[-1] = puVar1;
            *(undefined1 *)(puVar18 + 0xc) = 0;
            puVar18[-6] = 0;
            puVar18[-5] = 0;
            puVar18[-8] = puVar1;
            puVar18[-7] = 0;
            *puVar18 = 0;
            puVar18[1] = 0;
            puVar18[2] = 0;
            puVar18[3] = 0;
            puVar18[8] = 0;
            puVar18[9] = 0;
            puVar18[10] = 0;
            puVar18[0xb] = 0;
            puVar18[6] = puVar1;
            puVar18[7] = 0;
          } while (lVar13 != 0);
          puVar8[0x15a25] = &PTR_LAB_04a8c140;
          iVar14 = 0;
          do {
            lVar5 = *plVar6;
            puVar18 = puVar8 + 0x15a2c + (long)iVar14 * 7;
            *plVar6 = (long)puVar18;
            if (lVar5 != 0) {
              puVar18[4] = lVar5;
            }
            puVar18[2] = lVar16 + puVar18[2];
            FUN_026400e0(puVar18,lVar16);
            iVar14 = iVar14 + 1;
            lVar16 = lVar16 + 4;
          } while (iVar14 != 0x56a);
          puVar8[0x18016] = 0;
          *puVar17 = &PTR_LAB_04a8c0e0;
          puVar8[0x18017] = 0;
          *(undefined1 *)(puVar8 + 0x18018) = 0;
          lVar16 = puVar8[2] + 0xf9d28;
          puVar8[0x18013] = 0;
          puVar8[0x18014] = lVar16;
          if (puVar8[3] != 0) {
            puVar8[0x18016] = puVar8[3];
          }
          puVar8[0x1801a] = 0;
          puVar8[0x1801b] = lVar16;
          puVar1 = PTR_DAT_04bbc070;
          lVar16 = puVar8[2] + 0x11e928;
          puVar8[0x1801c] = 0;
          puVar8[0x1801d] = 0;
          puVar8[0x1801e] = 0;
          *(undefined1 *)(puVar8 + 0x1801f) = 0;
          puVar8[0x18019] = puVar1 + 0x10;
          puVar8[0x18015] = puVar8 + 0x18019;
          puVar8[0x18012] = &PTR_LAB_04a8c170;
          puVar8[0x18021] = 0;
          puVar8[0x18022] = lVar16;
          puVar1 = PTR_DAT_04bc35d8 + 0x10;
          *(undefined1 *)(puVar8 + 0x18026) = 0;
          puVar8[0x18024] = puVar8 + 0x18012;
          puVar8[0x18025] = 0;
          puVar8[0x18023] = 0;
          plVar6 = puVar8 + 0x18020;
          *plVar6 = (long)puVar1;
          puVar8[3] = plVar6;
          memset(puVar8 + 0x18028,0,0xdc08);
          puVar8[0x1802e] = &PTR_LAB_04a8bc70;
          puVar8[0x1802a] = puVar8 + 0x1802e;
          puVar17 = puVar8 + 0x18027;
          *puVar17 = &PTR_LAB_04a8bc40;
          puVar8[0x18033] = 0;
          puVar8[0x18031] = 0;
          puVar8[0x18032] = 0;
          *(undefined1 *)(puVar8 + 0x18034) = 0;
          puVar8[0x18031] = puVar8 + 0x18035;
          puVar8[0x1803a] = 0;
          puVar8[0x1802f] = 0;
          puVar8[0x18030] = 0;
          *(undefined1 *)(puVar8 + 0x1803b) = 0;
          puVar8[0x18036] = 0;
          puVar8[0x18037] = 0;
          puVar8[0x18038] = 0;
          puVar8[0x18039] = 0;
          puVar8[0x18035] = &DAT_04a8f030;
          FUN_02712184(puVar8 + 0x1803c,puVar17,0x14);
          *puVar17 = &PTR_LAB_04a8bc10;
          *plVar6 = (long)&PTR_LAB_04a8bbe0;
          lVar5 = puVar8[0x18023];
          puVar8[0x18023] = puVar17;
          puVar1 = PTR_DAT_04bb2698;
          if (lVar5 != 0) {
            puVar8[0x1802b] = lVar5;
          }
          puVar8[0x18029] = puVar8[0x18029] + lVar16;
          FUN_026400e0(puVar17,lVar16);
          lVar16 = puVar8[3];
          puVar8[0x19bae] = 0;
          puVar8[0x19bac] = 0;
          puVar8[0x19bad] = 0;
          *(undefined1 *)(puVar8 + 0x19baf) = 0;
          puVar8[3] = puVar8 + 0x19ba9;
          puVar8[0x19baa] = 0;
          puVar8[0x19bab] = puVar8[2] + 0x147214;
          if (lVar16 != 0) {
            puVar8[0x19bad] = lVar16;
          }
          puVar8[0x19ba9] = &DAT_04a8c1a0;
          *puVar8 = &PTR_LAB_04a8c010;
          plVar4[4] = (long)puVar8;
          lVar16 = *(long *)puVar1;
          if (lVar16 == 0) {
            pvVar7 = malloc(0x28);
            plVar4[5] = (long)pvVar7;
joined_r0x02704da4:
            if (pvVar7 != (void *)0x0) {
              lVar16 = *(long *)puVar1;
              if (lVar16 == 0) {
                plVar6 = malloc(0x28);
              }
              else {
                plVar6 = (long *)*plVar10;
                if (plVar6 == (long *)0x0) {
                  lVar5 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
                  plVar6 = (long *)(lVar16 + 8);
                  if (lVar5 != 0) {
                    plVar6 = (long *)(lVar5 + 0xa8);
                  }
                  plVar6 = (long *)*plVar6;
                }
                plVar6 = (long *)(**(code **)(*plVar6 + 0x30))(plVar6,0x28,8);
              }
              puVar2 = PTR_DAT_04bc3820;
              plVar6[1] = 0x200000000;
              plVar6[2] = (long)(plVar6 + 3);
              *plVar6 = (long)(puVar2 + 0x10);
              plVar4[6] = (long)plVar6;
              lVar16 = *(long *)puVar1;
              if (lVar16 == 0) {
                puVar8 = malloc(0x1050);
              }
              else {
                plVar10 = (long *)*plVar10;
                if (plVar10 == (long *)0x0) {
                  lVar5 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
                  plVar10 = (long *)(lVar16 + 8);
                  if (lVar5 != 0) {
                    plVar10 = (long *)(lVar5 + 0xa8);
                  }
                  plVar10 = (long *)*plVar10;
                  puVar8 = (undefined8 *)0x0;
                  if (plVar10 == (long *)0x0) goto LAB_02704e84;
                }
                puVar8 = (undefined8 *)(**(code **)(*plVar10 + 0x30))(plVar10,0x1050,8);
              }
LAB_02704e84:
              *puVar8 = &PTR_LAB_04a8c1e0;
              puVar8[4] = puVar8 + 4;
              puVar8[5] = puVar8 + 4;
              *(undefined1 *)(puVar8 + 3) = 0;
              puVar8[1] = 0;
              puVar8[2] = 0;
              *(undefined4 *)(puVar8 + 6) = 0;
              puVar8[7] = puVar8 + 10;
              for (lVar16 = 0;
                  *(long *)((long)puVar8 + lVar16 + 0x50) = (long)puVar8 + lVar16 + 0x70,
                  lVar16 != 0xfc0; lVar16 = lVar16 + 0x40) {
                *(long *)((long)puVar8 + lVar16 + 0x70) = (long)puVar8 + lVar16 + 0x90;
              }
              puVar8[0x206] = 0;
              puVar8[8] = puVar8 + 10;
              *(undefined4 *)(puVar8 + 9) = 0x80;
              lVar16 = plVar4[3];
              plVar4[7] = (long)puVar8;
              puVar8[1] = plVar4[2];
              puVar8[2] = lVar16;
              if (plVar4[7] != 0) {
                lVar16 = plVar4[6];
                if (*(int *)(lVar16 + 8) < *(int *)(lVar16 + 0xc)) {
                  *(long *)(*(long *)(lVar16 + 0x10) + (long)*(int *)(lVar16 + 8) * 8) = plVar4[7];
                  *(int *)(lVar16 + 8) = *(int *)(lVar16 + 8) + 1;
                }
              }
              *(long *)plVar4[5] = param_1 + 0x3d0;
              *(long *)(plVar4[5] + 8) = param_1 + 0x3f0;
              *(long *)(plVar4[5] + 0x10) = param_1 + 0x410;
              *(long *)(plVar4[5] + 0x18) = param_1 + 0x430;
              *(long *)(plVar4[5] + 0x20) = plVar4[6];
              FUN_02640070(plVar4[4],0,plVar4[2],0,1);
              FUN_02640130(plVar4[4],plVar4[5]);
              *(long **)(*(long *)(param_1 + 0x10) + 0x1a0) = plVar4;
              uVar11 = (**(code **)(*plVar4 + 0x40))(plVar4);
              if (*(int *)(param_1 + 0x128) < *(int *)(param_1 + 300)) {
                *(undefined8 *)(*(long *)(param_1 + 0x130) + (long)*(int *)(param_1 + 0x128) * 8) =
                     uVar11;
                *(int *)(param_1 + 0x128) = *(int *)(param_1 + 0x128) + 1;
              }
              uVar11 = 1;
              *(byte *)(param_1 + 0x510) = *(byte *)(param_1 + 0x510) | 2;
              goto LAB_02705224;
            }
          }
          else {
            plVar6 = (long *)*plVar10;
            if (plVar6 != (long *)0x0) {
LAB_02704d78:
              pvVar7 = (void *)(**(code **)(*plVar6 + 0x30))(plVar6,0x28,8);
              plVar4[5] = (long)pvVar7;
              goto joined_r0x02704da4;
            }
            lVar5 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
            plVar6 = (long *)(lVar16 + 8);
            if (lVar5 != 0) {
              plVar6 = (long *)(lVar5 + 0xa8);
            }
            plVar6 = (long *)*plVar6;
            if (plVar6 != (long *)0x0) goto LAB_02704d78;
            plVar4[5] = 0;
          }
          FUN_0272b60c(plVar4);
        }
        lVar16 = *(long *)(param_1 + 0x10);
        if ((lVar16 != 0) && (*(long **)(lVar16 + 0x1a0) != (long *)0x0)) {
          lVar5 = (**(code **)(**(long **)(lVar16 + 0x1a0) + 0x48))();
          uVar12 = *(uint *)(param_1 + 0x128);
          if (0 < (int)uVar12) {
            plVar4 = *(long **)(param_1 + 0x130);
            sVar15 = (long)(int)uVar12 * 8;
            uVar3 = 0;
            do {
              sVar15 = sVar15 - 8;
              if (*plVar4 == lVar5) {
                iVar14 = (int)uVar3;
                if ((-1 < iVar14) && (iVar14 < (int)uVar12)) {
                  if (iVar14 + 1 < (int)uVar12) {
                    memmove(plVar4,plVar4 + 1,sVar15);
                    uVar12 = *(uint *)(param_1 + 0x128);
                  }
                  *(uint *)(param_1 + 0x128) = uVar12 - 1;
                }
                break;
              }
              uVar3 = uVar3 + 1;
              plVar4 = plVar4 + 1;
            } while (uVar12 != uVar3);
          }
          if (*(long **)(lVar16 + 0x1a0) != (long *)0x0) {
            (**(code **)(**(long **)(lVar16 + 0x1a0) + 8))();
          }
          *(undefined8 *)(lVar16 + 0x1a0) = 0;
        }
      }
      else {
        lVar16 = *(long *)PTR_DAT_04bb2698;
        if (lVar16 == 0) {
          plVar4 = malloc(0x40);
        }
        else {
          plVar4 = *(long **)(param_1 + 8);
          if (plVar4 == (long *)0x0) {
            lVar5 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
            plVar4 = (long *)(lVar16 + 8);
            if (lVar5 != 0) {
              plVar4 = (long *)(lVar5 + 0xa8);
            }
            plVar4 = (long *)*plVar4;
            if (plVar4 == (long *)0x0) {
              plVar4 = (long *)0x0;
              goto LAB_02703d50;
            }
          }
          plVar4 = (long *)(**(code **)(*plVar4 + 0x30))(plVar4,0x40,8);
        }
LAB_02703d50:
        plVar10 = plVar4 + 1;
        *plVar10 = 0;
        *plVar4 = (long)&PTR_LAB_04a8bd30;
        plVar4[2] = 0;
        plVar4[3] = 0;
        plVar4[4] = 0;
        plVar4[5] = 0;
        plVar4[6] = 0;
        plVar4[7] = 0;
        plVar6 = *(long **)(param_1 + 8);
        if (plVar6 != (long *)0x0) {
          lVar16 = *(long *)puVar1;
          *plVar10 = (long)plVar6;
          if (lVar16 == 0) {
            pvVar7 = malloc(0xc6788);
          }
          else {
            pvVar7 = (void *)(**(code **)(*plVar6 + 0x30))(plVar6,0xc6788,8);
          }
          FUN_026d9e40();
          lVar16 = *(long *)puVar1;
          plVar4[2] = (long)pvVar7;
          if (lVar16 == 0) {
            pvVar7 = malloc(0xc6788);
          }
          else {
            plVar6 = (long *)*plVar10;
            if (plVar6 == (long *)0x0) {
              lVar5 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
              plVar6 = (long *)(lVar16 + 8);
              if (lVar5 != 0) {
                plVar6 = (long *)(lVar5 + 0xa8);
              }
              plVar6 = (long *)*plVar6;
            }
            pvVar7 = (void *)(**(code **)(*plVar6 + 0x30))(plVar6,0xc6788,8);
          }
          FUN_026d9e40();
          lVar16 = *(long *)puVar1;
          plVar4[3] = (long)pvVar7;
          if (lVar16 == 0) {
            puVar8 = malloc(0xb69a0);
          }
          else {
            plVar6 = (long *)*plVar10;
            if (plVar6 == (long *)0x0) {
              lVar5 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
              plVar6 = (long *)(lVar16 + 8);
              if (lVar5 != 0) {
                plVar6 = (long *)(lVar5 + 0xa8);
              }
              plVar6 = (long *)*plVar6;
              if (plVar6 == (long *)0x0) {
                puVar8 = (undefined8 *)0x0;
                goto LAB_02703e88;
              }
            }
            puVar8 = (undefined8 *)(**(code **)(*plVar6 + 0x30))(plVar6,0xb69a0,8);
          }
LAB_02703e88:
          *(undefined1 *)(puVar8 + 6) = 0;
          puVar8[4] = 0;
          puVar8[5] = 0;
          puVar17 = puVar8 + 0x142e0;
          puVar8[2] = 0;
          puVar8[3] = 0;
          *puVar8 = &PTR_LAB_04a8bdc0;
          puVar8[1] = 0;
          FUN_027299d0(puVar8 + 7,puVar8,0);
          puVar8[0x13413] = 0;
          puVar8[7] = &PTR_LAB_04a8b958;
          lVar16 = puVar8[2];
          *(undefined1 *)(puVar8 + 0x13414) = 0;
          puVar8[0x13412] = 0;
          puVar8[0x1340f] = 0;
          puVar8[0x13410] = lVar16 + 0x49dd8;
          if (puVar8[3] != 0) {
            puVar8[0x13412] = puVar8[3];
          }
          puVar8[0x13416] = 0;
          puVar8[0x13417] = lVar16 + 0x49dd8;
          puVar8[0x13418] = 0;
          puVar8[0x13419] = 0;
          lVar5 = lVar16 + 0x8cdd8;
          puVar8[0x1341a] = 0;
          *(undefined1 *)(puVar8 + 0x1341b) = 0;
          puVar8[0x13415] = &DAT_04a8be20;
          puVar8[0x13411] = puVar8 + 0x13415;
          puVar8[0x1340e] = &PTR_LAB_04a8bdf0;
          puVar8[0x1341d] = 0;
          puVar8[0x1341e] = lVar16 + 0x6b5d8;
          puVar8[0x13420] = puVar8 + 0x1340e;
          puVar8[0x1342f] = 0;
          *(undefined1 *)(puVar8 + 0x13430) = 0;
          puVar8[0x13421] = 0;
          *(undefined1 *)(puVar8 + 0x13422) = 0;
          puVar8[0x13428] = 0;
          *(undefined1 *)(puVar8 + 0x13429) = 0;
          plVar6 = puVar8 + 0x13434;
          *plVar6 = 0;
          *(undefined1 *)(puVar8 + 0x13437) = 0;
          puVar8[0x13424] = 0;
          puVar8[0x13425] = lVar16 + 0x6b5d8;
          puVar8[0x13423] = &DAT_04a8be20;
          puVar8[0x1341f] = puVar8 + 0x13423;
          puVar8[0x1341c] = &PTR_LAB_04a8bdf0;
          puVar18 = puVar8 + 0x1342a;
          *puVar18 = &PTR_LAB_04a8be90;
          puVar8[3] = puVar18;
          puVar8[0x13426] = 0;
          puVar8[0x13427] = 0;
          puVar8[0x1342b] = 0;
          puVar8[0x1342c] = lVar5;
          puVar8[0x13432] = 0;
          puVar8[0x13433] = lVar5;
          puVar8[0x13435] = 0;
          puVar8[0x13436] = 0;
          puVar8[0x1342d] = puVar8 + 0x13431;
          puVar8[0x1342e] = puVar8 + 0x1341c;
          memset(puVar8 + 0x13438,0,0x7540);
          puVar1 = PTR_DAT_04bb4c38 + 0x10;
          lVar16 = -0x7540;
          do {
            lVar13 = lVar16 + 0x70;
            *(undefined8 *)((long)puVar8 + lVar16 + 0xa1728) = 0;
            *(undefined8 *)((long)puVar8 + lVar16 + 0xa1720) = 0;
            *(undefined8 *)((long)puVar8 + lVar16 + 0xa1718) = 0;
            *(undefined1 *)((long)puVar8 + lVar16 + 0xa1730) = 0;
            *(undefined8 *)((long)puVar8 + lVar16 + 0xa1710) = 0;
            *(undefined8 *)((long)puVar8 + lVar16 + 0xa1708) = 0;
            *(undefined **)((long)puVar8 + lVar16 + 0xa1700) = puVar1;
            *(undefined8 *)((long)puVar8 + lVar16 + 0xa1740) = 0;
            *(undefined8 *)((long)puVar8 + lVar16 + 0xa1748) = 0;
            *(undefined8 *)((long)puVar8 + lVar16 + 0xa1750) = 0;
            *(undefined8 *)((long)puVar8 + lVar16 + 0xa1758) = 0;
            *(undefined8 *)((long)puVar8 + lVar16 + 0xa1760) = 0;
            *(undefined1 *)((long)puVar8 + lVar16 + 0xa1768) = 0;
            *(undefined **)((long)puVar8 + lVar16 + 0xa1738) = puVar1;
            lVar16 = lVar13;
          } while (lVar13 != 0);
          puVar8[0x13431] = &PTR_LAB_04a8bec0;
          iVar14 = 0;
          do {
            lVar16 = *plVar6;
            puVar9 = puVar8 + 0x13438 + (long)iVar14 * 7;
            *plVar6 = (long)puVar9;
            if (lVar16 != 0) {
              puVar9[4] = lVar16;
            }
            puVar9[2] = lVar5 + puVar9[2];
            FUN_026400e0(puVar9,lVar5);
            iVar14 = iVar14 + 1;
            lVar5 = lVar5 + 4;
          } while (iVar14 != 0x218);
          lVar5 = puVar8[3];
          *puVar18 = &PTR_LAB_04a8be60;
          puVar8[0x142e5] = 0;
          puVar8[0x142e4] = 0;
          *(undefined1 *)(puVar8 + 0x142e6) = 0;
          puVar8[3] = puVar17;
          lVar16 = puVar8[2] + 0x8d638;
          puVar8[0x142e1] = 0;
          puVar8[0x142e2] = lVar16;
          if (lVar5 != 0) {
            puVar8[0x142e4] = lVar5;
          }
          *(undefined1 *)(puVar8 + 0x142ed) = 0;
          *puVar17 = &PTR_LAB_04a8be90;
          puVar8[0x142e3] = puVar8 + 0x142e7;
          puVar8[0x142e8] = 0;
          puVar8[0x142e9] = lVar16;
          plVar6 = puVar8 + 0x142ea;
          *plVar6 = 0;
          puVar8[0x142eb] = 0;
          puVar8[0x142ec] = 0;
          memset(puVar8 + 0x142ee,0,0x7540);
          puVar1 = PTR_DAT_04bb4c38 + 0x10;
          lVar5 = -0x7540;
          do {
            lVar13 = lVar5 + 0x70;
            *(undefined8 *)((long)puVar8 + lVar5 + 0xa8cd8) = 0;
            *(undefined8 *)((long)puVar8 + lVar5 + 0xa8cd0) = 0;
            *(undefined8 *)((long)puVar8 + lVar5 + 0xa8cc8) = 0;
            *(undefined1 *)((long)puVar8 + lVar5 + 0xa8ce0) = 0;
            *(undefined8 *)((long)puVar8 + lVar5 + 0xa8cc0) = 0;
            *(undefined8 *)((long)puVar8 + lVar5 + 0xa8cb8) = 0;
            *(undefined **)((long)puVar8 + lVar5 + 0xa8cb0) = puVar1;
            *(undefined8 *)((long)puVar8 + lVar5 + 0xa8cf0) = 0;
            *(undefined8 *)((long)puVar8 + lVar5 + 0xa8cf8) = 0;
            *(undefined8 *)((long)puVar8 + lVar5 + 0xa8d00) = 0;
            *(undefined8 *)((long)puVar8 + lVar5 + 0xa8d08) = 0;
            *(undefined8 *)((long)puVar8 + lVar5 + 0xa8d10) = 0;
            *(undefined1 *)((long)puVar8 + lVar5 + 0xa8d18) = 0;
            *(undefined **)((long)puVar8 + lVar5 + 0xa8ce8) = puVar1;
            lVar5 = lVar13;
          } while (lVar13 != 0);
          puVar8[0x142e7] = &PTR_LAB_04a8bec0;
          iVar14 = 0;
          do {
            lVar5 = *plVar6;
            puVar18 = puVar8 + 0x142ee + (long)iVar14 * 7;
            *plVar6 = (long)puVar18;
            if (lVar5 != 0) {
              puVar18[4] = lVar5;
            }
            puVar18[2] = lVar16 + puVar18[2];
            FUN_026400e0(puVar18,lVar16);
            iVar14 = iVar14 + 1;
            lVar16 = lVar16 + 4;
          } while (iVar14 != 0x218);
          puVar8[0x1519a] = 0;
          *puVar17 = &PTR_LAB_04a8be60;
          puVar8[0x1519b] = 0;
          *(undefined1 *)(puVar8 + 0x1519c) = 0;
          lVar16 = puVar8[2] + 0x8de98;
          puVar8[0x15197] = 0;
          puVar8[0x15198] = lVar16;
          if (puVar8[3] != 0) {
            puVar8[0x1519a] = puVar8[3];
          }
          puVar8[0x1519e] = 0;
          puVar8[0x1519f] = lVar16;
          puVar1 = PTR_DAT_04bbc058;
          lVar16 = puVar8[2] + 0x9be98;
          puVar8[0x151a0] = 0;
          puVar8[0x151a1] = 0;
          puVar8[0x151a2] = 0;
          *(undefined1 *)(puVar8 + 0x151a3) = 0;
          puVar8[0x1519d] = puVar1 + 0x10;
          puVar8[0x15199] = puVar8 + 0x1519d;
          puVar8[0x15196] = &PTR_LAB_04a8bef0;
          puVar8[0x151a5] = 0;
          puVar8[0x151a6] = lVar16;
          puVar1 = PTR_DAT_04bc35d8 + 0x10;
          *(undefined1 *)(puVar8 + 0x151aa) = 0;
          puVar8[0x151a8] = puVar8 + 0x15196;
          puVar8[0x151a9] = 0;
          puVar8[0x151a7] = 0;
          plVar6 = puVar8 + 0x151a4;
          *plVar6 = (long)puVar1;
          puVar8[3] = plVar6;
          memset(puVar8 + 0x151ac,0,0xdc08);
          puVar8[0x151b2] = &PTR_LAB_04a8bc70;
          puVar8[0x151ae] = puVar8 + 0x151b2;
          puVar17 = puVar8 + 0x151ab;
          *puVar17 = &PTR_LAB_04a8bc40;
          puVar8[0x151b7] = 0;
          puVar8[0x151b5] = 0;
          puVar8[0x151b6] = 0;
          *(undefined1 *)(puVar8 + 0x151b8) = 0;
          puVar8[0x151b5] = puVar8 + 0x151b9;
          puVar8[0x151be] = 0;
          puVar8[0x151b3] = 0;
          puVar8[0x151b4] = 0;
          *(undefined1 *)(puVar8 + 0x151bf) = 0;
          puVar8[0x151ba] = 0;
          puVar8[0x151bb] = 0;
          puVar8[0x151bc] = 0;
          puVar8[0x151bd] = 0;
          puVar8[0x151b9] = &DAT_04a8f030;
          FUN_02712184(puVar8 + 0x151c0,puVar17,0x14);
          *puVar17 = &PTR_LAB_04a8bc10;
          *plVar6 = (long)&PTR_LAB_04a8bbe0;
          lVar5 = puVar8[0x151a7];
          puVar8[0x151a7] = puVar17;
          puVar1 = PTR_DAT_04bb2698;
          if (lVar5 != 0) {
            puVar8[0x151af] = lVar5;
          }
          puVar8[0x151ad] = puVar8[0x151ad] + lVar16;
          FUN_026400e0(puVar17,lVar16);
          lVar16 = puVar8[3];
          puVar8[0x16d32] = 0;
          puVar8[0x16d30] = 0;
          puVar8[0x16d31] = 0;
          *(undefined1 *)(puVar8 + 0x16d33) = 0;
          puVar8[3] = puVar8 + 0x16d2d;
          puVar8[0x16d2e] = 0;
          puVar8[0x16d2f] = puVar8[2] + 0xc4784;
          if (lVar16 != 0) {
            puVar8[0x16d31] = lVar16;
          }
          puVar8[0x16d2d] = &DAT_04a8bf20;
          *puVar8 = &PTR_LAB_04a8bd90;
          plVar4[4] = (long)puVar8;
          lVar16 = *(long *)puVar1;
          if (lVar16 == 0) {
            pvVar7 = malloc(0x28);
            plVar4[5] = (long)pvVar7;
joined_r0x02704448:
            if (pvVar7 != (void *)0x0) {
              lVar16 = *(long *)puVar1;
              if (lVar16 == 0) {
                plVar6 = malloc(0x28);
              }
              else {
                plVar6 = (long *)*plVar10;
                if (plVar6 == (long *)0x0) {
                  lVar5 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
                  plVar6 = (long *)(lVar16 + 8);
                  if (lVar5 != 0) {
                    plVar6 = (long *)(lVar5 + 0xa8);
                  }
                  plVar6 = (long *)*plVar6;
                }
                plVar6 = (long *)(**(code **)(*plVar6 + 0x30))(plVar6,0x28,8);
              }
              puVar2 = PTR_DAT_04bc3820;
              plVar6[1] = 0x200000000;
              plVar6[2] = (long)(plVar6 + 3);
              *plVar6 = (long)(puVar2 + 0x10);
              plVar4[6] = (long)plVar6;
              lVar16 = *(long *)puVar1;
              if (lVar16 == 0) {
                puVar8 = malloc(0x1050);
              }
              else {
                plVar10 = (long *)*plVar10;
                if (plVar10 == (long *)0x0) {
                  lVar5 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
                  plVar10 = (long *)(lVar16 + 8);
                  if (lVar5 != 0) {
                    plVar10 = (long *)(lVar5 + 0xa8);
                  }
                  plVar10 = (long *)*plVar10;
                  puVar8 = (undefined8 *)0x0;
                  if (plVar10 == (long *)0x0) goto LAB_02704520;
                }
                puVar8 = (undefined8 *)(**(code **)(*plVar10 + 0x30))(plVar10,0x1050,8);
              }
LAB_02704520:
              *puVar8 = &PTR_LAB_04a8bf60;
              puVar8[4] = puVar8 + 4;
              puVar8[5] = puVar8 + 4;
              *(undefined1 *)(puVar8 + 3) = 0;
              puVar8[1] = 0;
              puVar8[2] = 0;
              *(undefined4 *)(puVar8 + 6) = 0;
              puVar8[7] = puVar8 + 10;
              for (lVar16 = 0;
                  *(long *)((long)puVar8 + lVar16 + 0x50) = (long)puVar8 + lVar16 + 0x70,
                  lVar16 != 0xfc0; lVar16 = lVar16 + 0x40) {
                *(long *)((long)puVar8 + lVar16 + 0x70) = (long)puVar8 + lVar16 + 0x90;
              }
              puVar8[0x206] = 0;
              puVar8[8] = puVar8 + 10;
              *(undefined4 *)(puVar8 + 9) = 0x80;
              lVar16 = plVar4[3];
              plVar4[7] = (long)puVar8;
              puVar8[1] = plVar4[2];
              puVar8[2] = lVar16;
              if (plVar4[7] != 0) {
                lVar16 = plVar4[6];
                if (*(int *)(lVar16 + 8) < *(int *)(lVar16 + 0xc)) {
                  *(long *)(*(long *)(lVar16 + 0x10) + (long)*(int *)(lVar16 + 8) * 8) = plVar4[7];
                  *(int *)(lVar16 + 8) = *(int *)(lVar16 + 8) + 1;
                }
              }
              *(long *)plVar4[5] = param_1 + 0x3d0;
              *(long *)(plVar4[5] + 8) = param_1 + 0x3f0;
              *(long *)(plVar4[5] + 0x10) = param_1 + 0x410;
              *(long *)(plVar4[5] + 0x18) = param_1 + 0x430;
              *(long *)(plVar4[5] + 0x20) = plVar4[6];
              FUN_02640070(plVar4[4],0,plVar4[2],0,1);
              FUN_02640130(plVar4[4],plVar4[5]);
              *(long **)(*(long *)(param_1 + 0x10) + 0x198) = plVar4;
              uVar11 = (**(code **)(*plVar4 + 0x40))(plVar4);
              if (*(int *)(param_1 + 0x128) < *(int *)(param_1 + 300)) {
                *(undefined8 *)(*(long *)(param_1 + 0x130) + (long)*(int *)(param_1 + 0x128) * 8) =
                     uVar11;
                *(int *)(param_1 + 0x128) = *(int *)(param_1 + 0x128) + 1;
              }
              *(byte *)(param_1 + 0x50f) = *(byte *)(param_1 + 0x50f) | 2;
              uVar12 = *(uint *)(param_1 + 0x508);
              goto LAB_02704658;
            }
          }
          else {
            plVar6 = (long *)*plVar10;
            if (plVar6 != (long *)0x0) {
LAB_0270441c:
              pvVar7 = (void *)(**(code **)(*plVar6 + 0x30))(plVar6,0x28,8);
              plVar4[5] = (long)pvVar7;
              goto joined_r0x02704448;
            }
            lVar5 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
            plVar6 = (long *)(lVar16 + 8);
            if (lVar5 != 0) {
              plVar6 = (long *)(lVar5 + 0xa8);
            }
            plVar6 = (long *)*plVar6;
            if (plVar6 != (long *)0x0) goto LAB_0270441c;
            plVar4[5] = 0;
          }
          FUN_0272adcc(plVar4);
        }
        lVar16 = *(long *)(param_1 + 0x10);
        if ((lVar16 != 0) && (*(long **)(lVar16 + 0x198) != (long *)0x0)) {
          lVar5 = (**(code **)(**(long **)(lVar16 + 0x198) + 0x48))();
          uVar12 = *(uint *)(param_1 + 0x128);
          if (0 < (int)uVar12) {
            plVar4 = *(long **)(param_1 + 0x130);
            sVar15 = (long)(int)uVar12 * 8;
            uVar3 = 0;
            do {
              sVar15 = sVar15 - 8;
              if (*plVar4 == lVar5) {
                iVar14 = (int)uVar3;
                if ((-1 < iVar14) && (iVar14 < (int)uVar12)) {
                  if (iVar14 + 1 < (int)uVar12) {
                    memmove(plVar4,plVar4 + 1,sVar15);
                    uVar12 = *(uint *)(param_1 + 0x128);
                  }
                  *(uint *)(param_1 + 0x128) = uVar12 - 1;
                }
                break;
              }
              uVar3 = uVar3 + 1;
              plVar4 = plVar4 + 1;
            } while (uVar12 != uVar3);
          }
          if (*(long **)(lVar16 + 0x198) != (long *)0x0) {
            (**(code **)(**(long **)(lVar16 + 0x198) + 8))();
          }
          *(undefined8 *)(lVar16 + 0x198) = 0;
        }
      }
    }
    else {
      lVar16 = *(long *)PTR_DAT_04bb2698;
      if (lVar16 == 0) {
        plVar4 = malloc(0x40);
      }
      else {
        plVar4 = *(long **)(param_1 + 8);
        if (plVar4 == (long *)0x0) {
          lVar5 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
          plVar4 = (long *)(lVar16 + 8);
          if (lVar5 != 0) {
            plVar4 = (long *)(lVar5 + 0xa8);
          }
          plVar4 = (long *)*plVar4;
          if (plVar4 == (long *)0x0) {
            plVar4 = (long *)0x0;
            goto LAB_02703380;
          }
        }
        plVar4 = (long *)(**(code **)(*plVar4 + 0x30))(plVar4,0x40,8);
      }
LAB_02703380:
      plVar10 = plVar4 + 1;
      *plVar10 = 0;
      *plVar4 = (long)&PTR_LAB_04a8b898;
      plVar4[2] = 0;
      plVar4[3] = 0;
      plVar4[4] = 0;
      plVar4[5] = 0;
      plVar4[6] = 0;
      plVar4[7] = 0;
      plVar6 = *(long **)(param_1 + 8);
      if (plVar6 != (long *)0x0) {
        lVar16 = *(long *)puVar1;
        *plVar10 = (long)plVar6;
        if (lVar16 == 0) {
          pvVar7 = malloc(0xa2458);
        }
        else {
          pvVar7 = (void *)(**(code **)(*plVar6 + 0x30))(plVar6,0xa2458,8);
        }
        FUN_026dff90();
        lVar16 = *(long *)puVar1;
        plVar4[2] = (long)pvVar7;
        if (lVar16 == 0) {
          pvVar7 = malloc(0xa2458);
        }
        else {
          plVar6 = (long *)*plVar10;
          if (plVar6 == (long *)0x0) {
            lVar5 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
            plVar6 = (long *)(lVar16 + 8);
            if (lVar5 != 0) {
              plVar6 = (long *)(lVar5 + 0xa8);
            }
            plVar6 = (long *)*plVar6;
          }
          pvVar7 = (void *)(**(code **)(*plVar6 + 0x30))(plVar6,0xa2458,8);
        }
        FUN_026dff90();
        lVar16 = *(long *)puVar1;
        plVar4[3] = (long)pvVar7;
        if (lVar16 == 0) {
          puVar8 = malloc(0xb0500);
        }
        else {
          plVar6 = (long *)*plVar10;
          if (plVar6 == (long *)0x0) {
            lVar5 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
            plVar6 = (long *)(lVar16 + 8);
            if (lVar5 != 0) {
              plVar6 = (long *)(lVar5 + 0xa8);
            }
            plVar6 = (long *)*plVar6;
            if (plVar6 == (long *)0x0) {
              puVar8 = (undefined8 *)0x0;
              goto LAB_027034b8;
            }
          }
          puVar8 = (undefined8 *)(**(code **)(*plVar6 + 0x30))(plVar6,0xb0500,8);
        }
LAB_027034b8:
        *(undefined1 *)(puVar8 + 6) = 0;
        puVar8[4] = 0;
        puVar8[5] = 0;
        puVar17 = puVar8 + 0x13c96;
        puVar8[2] = 0;
        puVar8[3] = 0;
        *puVar8 = &PTR_LAB_04a8b928;
        puVar8[1] = 0;
        FUN_027299d0(puVar8 + 7,puVar8,0);
        puVar8[0x13413] = 0;
        puVar8[7] = &PTR_LAB_04a8b958;
        lVar16 = puVar8[2];
        *(undefined1 *)(puVar8 + 0x13414) = 0;
        puVar8[0x13412] = 0;
        puVar8[0x1340f] = 0;
        puVar8[0x13410] = lVar16 + 0x49dd8;
        if (puVar8[3] != 0) {
          puVar8[0x13412] = puVar8[3];
        }
        puVar8[0x13416] = 0;
        puVar8[0x13417] = lVar16 + 0x49dd8;
        puVar8[0x13418] = 0;
        puVar8[0x13419] = 0;
        lVar5 = lVar16 + 0x701d8;
        puVar8[0x1341a] = 0;
        *(undefined1 *)(puVar8 + 0x1341b) = 0;
        puVar8[0x13415] = &DAT_04a8bae0;
        puVar8[0x13411] = puVar8 + 0x13415;
        puVar8[0x1340e] = &PTR_LAB_04a8bab0;
        puVar8[0x1341d] = 0;
        puVar8[0x1341e] = lVar16 + 0x5cfd8;
        puVar8[0x13420] = puVar8 + 0x1340e;
        puVar8[0x1342f] = 0;
        *(undefined1 *)(puVar8 + 0x13430) = 0;
        puVar8[0x13421] = 0;
        *(undefined1 *)(puVar8 + 0x13422) = 0;
        puVar8[0x13428] = 0;
        *(undefined1 *)(puVar8 + 0x13429) = 0;
        *(undefined1 *)(puVar8 + 0x13437) = 0;
        plVar6 = puVar8 + 0x13434;
        *plVar6 = 0;
        puVar8[0x13424] = 0;
        puVar8[0x13425] = lVar16 + 0x5cfd8;
        puVar8[0x13423] = &DAT_04a8bae0;
        puVar8[0x1341f] = puVar8 + 0x13423;
        puVar8[0x1341c] = &PTR_LAB_04a8bab0;
        puVar18 = puVar8 + 0x1342a;
        *puVar18 = &PTR_LAB_04a8bb50;
        puVar8[3] = puVar18;
        puVar8[0x1342b] = 0;
        puVar8[0x1342c] = lVar5;
        puVar8[0x1342d] = puVar8 + 0x13431;
        puVar8[0x1342e] = puVar8 + 0x1341c;
        puVar8[0x13426] = 0;
        puVar8[0x13427] = 0;
        puVar8[0x13432] = 0;
        puVar8[0x13433] = lVar5;
        puVar8[0x13435] = 0;
        puVar8[0x13436] = 0;
        memset(puVar8 + 0x13438,0,0x42f0);
        puVar1 = PTR_DAT_04bb4c38 + 0x10;
        lVar16 = -0x42f0;
        do {
          lVar13 = lVar16 + 0xa8;
          *(undefined8 *)((long)puVar8 + lVar16 + 0x9e4d8) = 0;
          *(undefined8 *)((long)puVar8 + lVar16 + 0x9e4d0) = 0;
          *(undefined8 *)((long)puVar8 + lVar16 + 0x9e4c8) = 0;
          *(undefined1 *)((long)puVar8 + lVar16 + 0x9e4e0) = 0;
          *(undefined8 *)((long)puVar8 + lVar16 + 0x9e4c0) = 0;
          *(undefined1 *)((long)puVar8 + lVar16 + 0x9e518) = 0;
          *(undefined8 *)((long)puVar8 + lVar16 + 0x9e4b8) = 0;
          *(undefined **)((long)puVar8 + lVar16 + 0x9e4b0) = puVar1;
          *(undefined8 *)((long)puVar8 + lVar16 + 0x9e4f0) = 0;
          *(undefined8 *)((long)puVar8 + lVar16 + 0x9e4f8) = 0;
          *(undefined8 *)((long)puVar8 + lVar16 + 0x9e500) = 0;
          *(undefined8 *)((long)puVar8 + lVar16 + 0x9e508) = 0;
          *(undefined8 *)((long)puVar8 + lVar16 + 0x9e510) = 0;
          *(undefined **)((long)puVar8 + lVar16 + 0x9e4e8) = puVar1;
          *(undefined8 *)((long)puVar8 + lVar16 + 0x9e528) = 0;
          *(undefined8 *)((long)puVar8 + lVar16 + 0x9e530) = 0;
          *(undefined8 *)((long)puVar8 + lVar16 + 0x9e538) = 0;
          *(undefined8 *)((long)puVar8 + lVar16 + 0x9e540) = 0;
          *(undefined8 *)((long)puVar8 + lVar16 + 0x9e548) = 0;
          *(undefined1 *)((long)puVar8 + lVar16 + 0x9e550) = 0;
          *(undefined **)((long)puVar8 + lVar16 + 0x9e520) = puVar1;
          lVar16 = lVar13;
        } while (lVar13 != 0);
        puVar8[0x13431] = &PTR_LAB_04a8bb80;
        iVar14 = 0;
        do {
          lVar16 = *plVar6;
          puVar9 = puVar8 + 0x13438 + (long)iVar14 * 7;
          *plVar6 = (long)puVar9;
          if (lVar16 != 0) {
            puVar9[4] = lVar16;
          }
          puVar9[2] = lVar5 + puVar9[2];
          FUN_026400e0(puVar9,lVar5);
          iVar14 = iVar14 + 1;
          lVar5 = lVar5 + 4;
        } while (iVar14 != 0x132);
        lVar5 = puVar8[3];
        *puVar18 = &PTR_LAB_04a8bb20;
        puVar8[0x13c9b] = 0;
        puVar8[0x13c9a] = 0;
        *(undefined1 *)(puVar8 + 0x13c9c) = 0;
        puVar8[3] = puVar17;
        lVar16 = puVar8[2] + 0x706a0;
        puVar8[0x13c97] = 0;
        puVar8[0x13c98] = lVar16;
        if (lVar5 != 0) {
          puVar8[0x13c9a] = lVar5;
        }
        *(undefined1 *)(puVar8 + 0x13ca3) = 0;
        *puVar17 = &PTR_LAB_04a8bb50;
        puVar8[0x13c99] = puVar8 + 0x13c9d;
        puVar8[0x13c9e] = 0;
        puVar8[0x13c9f] = lVar16;
        plVar6 = puVar8 + 0x13ca0;
        *plVar6 = 0;
        puVar8[0x13ca1] = 0;
        puVar8[0x13ca2] = 0;
        memset(puVar8 + 0x13ca4,0,0x42f0);
        puVar1 = PTR_DAT_04bb4c38 + 0x10;
        lVar5 = -0x42f0;
        do {
          lVar13 = lVar5 + 0xa8;
          *(undefined8 *)((long)puVar8 + lVar5 + 0xa2838) = 0;
          *(undefined8 *)((long)puVar8 + lVar5 + 0xa2830) = 0;
          *(undefined8 *)((long)puVar8 + lVar5 + 0xa2828) = 0;
          *(undefined1 *)((long)puVar8 + lVar5 + 0xa2840) = 0;
          *(undefined8 *)((long)puVar8 + lVar5 + 0xa2820) = 0;
          *(undefined1 *)((long)puVar8 + lVar5 + 0xa2878) = 0;
          *(undefined8 *)((long)puVar8 + lVar5 + 0xa2818) = 0;
          *(undefined **)((long)puVar8 + lVar5 + 0xa2810) = puVar1;
          *(undefined8 *)((long)puVar8 + lVar5 + 0xa2850) = 0;
          *(undefined8 *)((long)puVar8 + lVar5 + 0xa2858) = 0;
          *(undefined8 *)((long)puVar8 + lVar5 + 0xa2860) = 0;
          *(undefined8 *)((long)puVar8 + lVar5 + 0xa2868) = 0;
          *(undefined8 *)((long)puVar8 + lVar5 + 0xa2870) = 0;
          *(undefined **)((long)puVar8 + lVar5 + 0xa2848) = puVar1;
          *(undefined8 *)((long)puVar8 + lVar5 + 0xa2888) = 0;
          *(undefined8 *)((long)puVar8 + lVar5 + 0xa2890) = 0;
          *(undefined8 *)((long)puVar8 + lVar5 + 0xa2898) = 0;
          *(undefined8 *)((long)puVar8 + lVar5 + 0xa28a0) = 0;
          *(undefined8 *)((long)puVar8 + lVar5 + 0xa28a8) = 0;
          *(undefined1 *)((long)puVar8 + lVar5 + 0xa28b0) = 0;
          *(undefined **)((long)puVar8 + lVar5 + 0xa2880) = puVar1;
          lVar5 = lVar13;
        } while (lVar13 != 0);
        puVar8[0x13c9d] = &PTR_LAB_04a8bb80;
        iVar14 = 0;
        do {
          lVar5 = *plVar6;
          puVar18 = puVar8 + 0x13ca4 + (long)iVar14 * 7;
          *plVar6 = (long)puVar18;
          if (lVar5 != 0) {
            puVar18[4] = lVar5;
          }
          puVar18[2] = lVar16 + puVar18[2];
          FUN_026400e0(puVar18,lVar16);
          iVar14 = iVar14 + 1;
          lVar16 = lVar16 + 4;
        } while (iVar14 != 0x132);
        *puVar17 = &PTR_LAB_04a8bb20;
        puVar8[0x14506] = 0;
        puVar8[0x14507] = 0;
        *(undefined1 *)(puVar8 + 0x14508) = 0;
        lVar16 = puVar8[2] + 0x70b68;
        puVar8[0x14503] = 0;
        puVar8[0x14504] = lVar16;
        if (puVar8[3] != 0) {
          puVar8[0x14506] = puVar8[3];
        }
        puVar8[0x1450a] = 0;
        puVar8[0x1450b] = lVar16;
        puVar1 = PTR_DAT_04bbc048;
        lVar16 = puVar8[2] + 0x78968;
        puVar8[0x1450c] = 0;
        puVar8[0x1450d] = 0;
        puVar8[0x1450e] = 0;
        *(undefined1 *)(puVar8 + 0x1450f) = 0;
        puVar8[0x14509] = puVar1 + 0x10;
        puVar8[0x14505] = puVar8 + 0x14509;
        puVar8[0x14502] = &PTR_LAB_04a8bbb0;
        puVar8[0x14511] = 0;
        puVar8[0x14512] = lVar16;
        puVar1 = PTR_DAT_04bc35d8 + 0x10;
        *(undefined1 *)(puVar8 + 0x14516) = 0;
        puVar8[0x14514] = puVar8 + 0x14502;
        puVar8[0x14515] = 0;
        puVar8[0x14513] = 0;
        plVar6 = puVar8 + 0x14510;
        *plVar6 = (long)puVar1;
        puVar8[3] = plVar6;
        memset(puVar8 + 0x14518,0,0xdc08);
        puVar8[0x1451e] = &PTR_LAB_04a8bc70;
        puVar8[0x1451a] = puVar8 + 0x1451e;
        puVar17 = puVar8 + 0x14517;
        *puVar17 = &PTR_LAB_04a8bc40;
        puVar8[0x14523] = 0;
        puVar8[0x14521] = 0;
        puVar8[0x14522] = 0;
        *(undefined1 *)(puVar8 + 0x14524) = 0;
        puVar8[0x14521] = puVar8 + 0x14525;
        puVar8[0x1452a] = 0;
        puVar8[0x1451f] = 0;
        puVar8[0x14520] = 0;
        *(undefined1 *)(puVar8 + 0x1452b) = 0;
        puVar8[0x14526] = 0;
        puVar8[0x14527] = 0;
        puVar8[0x14528] = 0;
        puVar8[0x14529] = 0;
        puVar8[0x14525] = &DAT_04a8f030;
        FUN_02712184(puVar8 + 0x1452c,puVar17,0x14);
        *puVar17 = &PTR_LAB_04a8bc10;
        *plVar6 = (long)&PTR_LAB_04a8bbe0;
        lVar5 = puVar8[0x14513];
        puVar8[0x14513] = puVar17;
        puVar1 = PTR_DAT_04bb2698;
        if (lVar5 != 0) {
          puVar8[0x1451b] = lVar5;
        }
        puVar8[0x14519] = puVar8[0x14519] + lVar16;
        FUN_026400e0(puVar17,lVar16);
        lVar16 = puVar8[3];
        puVar8[0x1609e] = 0;
        puVar8[0x1609c] = 0;
        puVar8[0x1609d] = 0;
        *(undefined1 *)(puVar8 + 0x1609f) = 0;
        puVar8[3] = puVar8 + 0x16099;
        puVar8[0x1609a] = 0;
        puVar8[0x1609b] = puVar8[2] + 0xa1254;
        if (lVar16 != 0) {
          puVar8[0x1609d] = lVar16;
        }
        puVar8[0x16099] = &DAT_04a8bca0;
        *puVar8 = &PTR_LAB_04a8b8f8;
        plVar4[4] = (long)puVar8;
        lVar16 = *(long *)puVar1;
        if (lVar16 == 0) {
          pvVar7 = malloc(0x28);
          plVar4[5] = (long)pvVar7;
joined_r0x02703ad0:
          if (pvVar7 != (void *)0x0) {
            lVar16 = *(long *)puVar1;
            if (lVar16 == 0) {
              plVar6 = malloc(0x28);
            }
            else {
              plVar6 = (long *)*plVar10;
              if (plVar6 == (long *)0x0) {
                lVar5 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
                plVar6 = (long *)(lVar16 + 8);
                if (lVar5 != 0) {
                  plVar6 = (long *)(lVar5 + 0xa8);
                }
                plVar6 = (long *)*plVar6;
              }
              plVar6 = (long *)(**(code **)(*plVar6 + 0x30))(plVar6,0x28,8);
            }
            puVar2 = PTR_DAT_04bc3820;
            plVar6[1] = 0x200000000;
            plVar6[2] = (long)(plVar6 + 3);
            *plVar6 = (long)(puVar2 + 0x10);
            plVar4[6] = (long)plVar6;
            lVar16 = *(long *)puVar1;
            if (lVar16 == 0) {
              puVar8 = malloc(0x1050);
            }
            else {
              plVar10 = (long *)*plVar10;
              if (plVar10 == (long *)0x0) {
                lVar5 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
                plVar10 = (long *)(lVar16 + 8);
                if (lVar5 != 0) {
                  plVar10 = (long *)(lVar5 + 0xa8);
                }
                plVar10 = (long *)*plVar10;
                puVar8 = (undefined8 *)0x0;
                if (plVar10 == (long *)0x0) goto LAB_02703ba8;
              }
              puVar8 = (undefined8 *)(**(code **)(*plVar10 + 0x30))(plVar10,0x1050,8);
            }
LAB_02703ba8:
            *puVar8 = &PTR_LAB_04a8bce0;
            puVar8[4] = puVar8 + 4;
            puVar8[5] = puVar8 + 4;
            *(undefined1 *)(puVar8 + 3) = 0;
            puVar8[1] = 0;
            puVar8[2] = 0;
            *(undefined4 *)(puVar8 + 6) = 0;
            puVar8[7] = puVar8 + 10;
            for (lVar16 = 0; *(long *)((long)puVar8 + lVar16 + 0x50) = (long)puVar8 + lVar16 + 0x70,
                lVar16 != 0xfc0; lVar16 = lVar16 + 0x40) {
              *(long *)((long)puVar8 + lVar16 + 0x70) = (long)puVar8 + lVar16 + 0x90;
            }
            puVar8[0x206] = 0;
            puVar8[8] = puVar8 + 10;
            *(undefined4 *)(puVar8 + 9) = 0x80;
            lVar16 = plVar4[3];
            plVar4[7] = (long)puVar8;
            puVar8[1] = plVar4[2];
            puVar8[2] = lVar16;
            if (plVar4[7] != 0) {
              lVar16 = plVar4[6];
              if (*(int *)(lVar16 + 8) < *(int *)(lVar16 + 0xc)) {
                *(long *)(*(long *)(lVar16 + 0x10) + (long)*(int *)(lVar16 + 8) * 8) = plVar4[7];
                *(int *)(lVar16 + 8) = *(int *)(lVar16 + 8) + 1;
              }
            }
            *(long *)plVar4[5] = param_1 + 0x3d0;
            *(long *)(plVar4[5] + 8) = param_1 + 0x3f0;
            *(long *)(plVar4[5] + 0x10) = param_1 + 0x410;
            *(long *)(plVar4[5] + 0x18) = param_1 + 0x430;
            *(long *)(plVar4[5] + 0x20) = plVar4[6];
            FUN_02640070(plVar4[4],0,plVar4[2],0,1);
            FUN_02640130(plVar4[4],plVar4[5]);
            *(long **)(*(long *)(param_1 + 0x10) + 400) = plVar4;
            uVar11 = (**(code **)(*plVar4 + 0x40))(plVar4);
            if (*(int *)(param_1 + 0x128) < *(int *)(param_1 + 300)) {
              *(undefined8 *)(*(long *)(param_1 + 0x130) + (long)*(int *)(param_1 + 0x128) * 8) =
                   uVar11;
              *(int *)(param_1 + 0x128) = *(int *)(param_1 + 0x128) + 1;
            }
            *(byte *)(param_1 + 0x50e) = *(byte *)(param_1 + 0x50e) | 2;
            uVar12 = *(uint *)(param_1 + 0x508);
            goto LAB_02703ce4;
          }
        }
        else {
          plVar6 = (long *)*plVar10;
          if (plVar6 != (long *)0x0) {
LAB_02703aa4:
            pvVar7 = (void *)(**(code **)(*plVar6 + 0x30))(plVar6,0x28,8);
            plVar4[5] = (long)pvVar7;
            goto joined_r0x02703ad0;
          }
          lVar5 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
          plVar6 = (long *)(lVar16 + 8);
          if (lVar5 != 0) {
            plVar6 = (long *)(lVar5 + 0xa8);
          }
          plVar6 = (long *)*plVar6;
          if (plVar6 != (long *)0x0) goto LAB_02703aa4;
          plVar4[5] = 0;
        }
        FUN_027297dc(plVar4);
      }
      lVar16 = *(long *)(param_1 + 0x10);
      if ((lVar16 != 0) && (*(long **)(lVar16 + 400) != (long *)0x0)) {
        lVar5 = (**(code **)(**(long **)(lVar16 + 400) + 0x48))();
        uVar12 = *(uint *)(param_1 + 0x128);
        if (0 < (int)uVar12) {
          plVar4 = *(long **)(param_1 + 0x130);
          sVar15 = (long)(int)uVar12 * 8;
          uVar3 = 0;
          do {
            sVar15 = sVar15 - 8;
            if (*plVar4 == lVar5) {
              iVar14 = (int)uVar3;
              if ((-1 < iVar14) && (iVar14 < (int)uVar12)) {
                if (iVar14 + 1 < (int)uVar12) {
                  memmove(plVar4,plVar4 + 1,sVar15);
                  uVar12 = *(uint *)(param_1 + 0x128);
                }
                *(uint *)(param_1 + 0x128) = uVar12 - 1;
              }
              break;
            }
            uVar3 = uVar3 + 1;
            plVar4 = plVar4 + 1;
          } while (uVar12 != uVar3);
        }
        if (*(long **)(lVar16 + 400) != (long *)0x0) {
          (**(code **)(**(long **)(lVar16 + 400) + 8))();
        }
        *(undefined8 *)(lVar16 + 400) = 0;
      }
    }
  }
  else {
    uVar3 = FUN_026fd710(param_1);
    if ((uVar3 & 1) != 0) {
      *(byte *)(param_1 + 0x50c) = *(byte *)(param_1 + 0x50c) | 2;
      uVar12 = *(uint *)(param_1 + 0x508);
      goto LAB_027032dc;
    }
    FUN_026fdf90(param_1);
  }
LAB_02705218:
  FUN_027052b0(param_1);
  uVar11 = 0;
LAB_02705224:
  uVar12 = *(uint *)(param_1 + 0x508);
  if ((uVar12 & 1) != 0) {
    *(byte *)(param_1 + 0x50c) = *(byte *)(param_1 + 0x50c) | 1;
  }
  if ((uVar12 >> 1 & 1) != 0) {
    *(byte *)(param_1 + 0x50d) = *(byte *)(param_1 + 0x50d) | 1;
  }
  if ((uVar12 >> 2 & 1) != 0) {
    *(byte *)(param_1 + 0x50e) = *(byte *)(param_1 + 0x50e) | 1;
  }
  if ((uVar12 >> 3 & 1) != 0) {
    *(byte *)(param_1 + 0x50f) = *(byte *)(param_1 + 0x50f) | 1;
  }
  if ((uVar12 >> 4 & 1) != 0) {
    *(byte *)(param_1 + 0x510) = *(byte *)(param_1 + 0x510) | 1;
  }
  return uVar11;
}


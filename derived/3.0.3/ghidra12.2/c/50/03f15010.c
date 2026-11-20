
/* WARNING: Removing unreachable block (ram,0x03f155fc) */

long * FUN_03f15010(long param_1,long *param_2,long *param_3,long param_4)

{
  undefined *puVar1;
  long *plVar2;
  uint uVar3;
  char cVar4;
  short sVar5;
  char *pcVar6;
  short *psVar7;
  uint *puVar8;
  bool bVar9;
  ulong uVar10;
  long lVar11;
  long *plVar12;
  long lVar13;
  long lVar14;
  char *pcVar15;
  uint uVar16;
  short *psVar17;
  uint uVar18;
  char *pcVar19;
  long *plVar20;
  undefined8 *puVar21;
  uint uVar22;
  undefined1 auVar23 [16];
  undefined8 local_90;
  undefined8 *local_88;
  undefined1 local_80 [16];
  undefined8 local_70;
  uint *local_68;
  
  if (*param_2 == 0) {
    return (long *)0x0;
  }
  local_70 = (short *)((ulong)local_70 & 0xffffff0000000000);
  uVar10 = FUN_03b36b40(param_2,&local_70,&DAT_040a1c2c);
  puVar21 = &DAT_0407ebb1;
  if (((uVar10 & 1) != 0) && (local_70._4_1_ == -0x60)) {
    psVar17 = (short *)*param_2;
    uVar18 = *(uint *)(psVar17 + 4);
    uVar16 = (uVar18 & 0xff00ff00) >> 8 | (uVar18 & 0xff00ff) << 8;
    uVar16 = uVar16 >> 0x10 | uVar16 << 0x10;
    if (*psVar17 != 0x5942) {
      uVar16 = uVar18;
    }
    if (uVar16 != 0) {
      uVar22 = *(uint *)((long)psVar17 + (long)(int)local_70 * 4 + (long)(int)uVar16 + 4);
      uVar18 = (uVar22 & 0xff00ff00) >> 8 | (uVar22 & 0xff00ff) << 8;
      uVar18 = uVar18 >> 0x10 | uVar18 << 0x10;
      if (*psVar17 != 0x5942) {
        uVar18 = uVar22;
      }
      puVar21 = (undefined8 *)((long)psVar17 + (ulong)uVar18 + (long)(int)uVar16);
    }
  }
  local_70 = (short *)((ulong)local_70 & 0xffffff0000000000);
  uVar10 = FUN_03b36b40(param_2,&local_70,"ConditionBin");
  if ((uVar10 & 1) == 0) {
LAB_03f15108:
    lVar13 = 0;
    uVar22 = 0;
  }
  else {
    if (local_70._4_1_ == -0x5e) {
      psVar17 = (short *)*param_2;
      sVar5 = *psVar17;
      uVar18 = *(uint *)((long)psVar17 + ((ulong)local_70 & 0xffffffff));
      uVar16 = (int)local_70 + 8;
    }
    else {
      if (local_70._4_1_ != -0x5f) goto LAB_03f15108;
      psVar17 = (short *)*param_2;
      sVar5 = *psVar17;
      uVar18 = *(uint *)((long)psVar17 + ((ulong)local_70 & 0xffffffff));
      uVar16 = (int)local_70 + 4;
    }
    uVar22 = (uVar18 & 0xff00ff00) >> 8 | (uVar18 & 0xff00ff) << 8;
    uVar22 = uVar22 >> 0x10 | uVar22 << 0x10;
    if (sVar5 != 0x5942) {
      uVar22 = uVar18;
    }
    lVar13 = (long)psVar17 + (ulong)uVar16;
  }
  local_70 = (short *)((ulong)local_70 & 0xffffff0000000000);
  uVar10 = FUN_03b36b40(param_2,&local_70,"Underlayer");
  lVar14 = DAT_05ae7600;
  if ((uVar10 & 1) == 0) {
LAB_03f15194:
    psVar17 = (short *)0x0;
LAB_03f15198:
    local_68 = (uint *)0x0;
  }
  else {
    if (1 < local_70._4_1_ - 0xc0) {
      if (local_70._4_1_ != 0xff) goto LAB_03f15194;
      psVar17 = (short *)*param_2;
      goto LAB_03f15198;
    }
    psVar17 = (short *)*param_2;
    local_68 = (uint *)((long)psVar17 + ((ulong)local_70 & 0xffffffff));
  }
  local_70 = psVar17;
  if (DAT_05ae7600 == 0) {
    plVar12 = malloc(0xd0);
  }
  else {
    plVar12 = param_3;
    if (param_3 == (long *)0x0) {
      lVar11 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      plVar12 = (long *)(lVar14 + 8);
      if (lVar11 != 0) {
        plVar12 = (long *)(lVar11 + 0xa8);
      }
      plVar12 = (long *)*plVar12;
      if (plVar12 == (long *)0x0) {
        plVar12 = (long *)0x0;
        goto LAB_03f1520c;
      }
    }
    plVar12 = (long *)(**(code **)(*plVar12 + 0x30))(plVar12,0xd0,8);
  }
LAB_03f1520c:
  puVar8 = local_68;
  psVar7 = local_70;
  puVar1 = PTR_DAT_04bdeff8;
  plVar12[2] = 0;
  plVar12[3] = 0;
  plVar12[6] = 0;
  *(undefined4 *)(plVar12 + 7) = 0;
  plVar12[4] = 0;
  plVar12[5] = 0;
  plVar12[8] = param_4;
  plVar12[9] = 0;
  *plVar12 = (long)(puVar1 + 0x10);
  plVar12[1] = (long)(puVar1 + 0xa0);
  plVar12[10] = 0;
  plVar12[0xb] = 0x3f800000;
  if (param_4 == 0) {
    lVar14 = 0;
  }
  else if (*(char *)(param_4 + 0x15) == '\0') {
    lVar14 = *(long *)(param_4 + 0x18);
  }
  else {
    lVar14 = (long)(DAT_05ae7888 *
                    (*(long *)(DAT_05aebb88 + 8) + (ulong)*(uint *)(DAT_05aebb88 + 4)) * 5) / 1000 +
             *(long *)(param_4 + 0x18);
  }
  plVar12[0xc] = lVar14;
  plVar12[0xd] = param_4;
  plVar12[0x10] = 0x3f80000000000000;
  *(undefined1 *)(plVar12 + 0x11) = 0;
  *(undefined4 *)((long)plVar12 + 0x8c) = 0;
  *(undefined1 *)(plVar12 + 0x12) = 0;
  plVar12[0xe] = 0;
  plVar12[0xf] = 0;
  if (param_4 == 0) {
    lVar14 = 0;
  }
  else if (*(char *)(param_4 + 0x15) == '\0') {
    lVar14 = *(long *)(param_4 + 0x18);
  }
  else {
    lVar14 = (long)(DAT_05ae7888 *
                    (*(long *)(DAT_05aebb88 + 8) + (ulong)*(uint *)(DAT_05aebb88 + 4)) * 5) / 1000 +
             *(long *)(param_4 + 0x18);
  }
  plVar12[0x13] = lVar14;
  plVar12[0x14] = param_4;
  plVar12[0x15] = 0;
  *(undefined1 *)(plVar12 + 0x16) = 0;
  *(undefined4 *)((long)plVar12 + 0xb4) = 0xbf800000;
  *(undefined2 *)(plVar12 + 0x19) = 0;
  plVar12[0x17] = 0;
  plVar12[0x18] = 0;
  if (psVar17 == (short *)0x0) {
    FUN_03f215dc(plVar12,puVar21,param_3,0,lVar13,uVar22);
LAB_03f153d0:
    if (*(int *)(param_1 + 0x48) < *(int *)(param_1 + 0x4c)) {
      *(long **)(*(long *)(param_1 + 0x50) + (long)*(int *)(param_1 + 0x48) * 8) = plVar12;
      *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + 1;
    }
    return plVar12;
  }
  if (local_68 == (uint *)0x0) {
    uVar16 = 0;
  }
  else if ((*local_68 & 0xfe) == 0xc0) {
    uVar16 = *local_68 >> 8;
    if (*local_70 == 0x5942) {
      uVar16 = uVar16 & 0xff00 | *local_68 >> 0x18 | (uVar16 & 0xff) << 0x10;
    }
  }
  else {
    uVar16 = 0;
  }
  FUN_03f215dc(plVar12,puVar21,param_3,uVar16,lVar13,uVar22);
  uVar16 = 0;
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  if (puVar8 != (uint *)0x0) goto LAB_03f15488;
LAB_03f154c4:
  do {
    uVar18 = 0;
LAB_03f154c8:
    if (uVar18 <= uVar16) goto LAB_03f153d0;
    auVar23 = FUN_03b36a34(&local_70,uVar16);
    psVar17 = auVar23._0_8_;
    local_80 = auVar23;
    if (psVar17 != (short *)0x0) {
      local_90 = (undefined *)((ulong)local_90 & 0xffffff0000000000);
      uVar10 = FUN_03b36b40(local_80,&local_90,&DAT_040fe5ab);
      if (((uVar10 & 1) == 0) || (local_90._4_1_ != -0x60)) {
        pcVar15 = "";
LAB_03f15570:
        uVar10 = 0;
        bVar9 = true;
        do {
          if (pcVar15[uVar10] != "Layer"[uVar10]) break;
          if (pcVar15[uVar10] == '\0') {
LAB_03f15604:
            if ((pcVar15 == "Folder") || (bVar9)) goto LAB_03f15680;
            goto LAB_03f15618;
          }
          if (pcVar15[uVar10 + 1] != "Layer"[uVar10 + 1]) break;
          if (pcVar15[uVar10 + 1] == '\0') {
LAB_03f15600:
            bVar9 = true;
            goto LAB_03f15604;
          }
          if (pcVar15[uVar10 + 2] != "Layer"[uVar10 + 2]) break;
          if (pcVar15[uVar10 + 2] == '\0') goto LAB_03f15600;
          bVar9 = uVar10 < 0x7fffe;
          uVar10 = uVar10 + 3;
        } while (uVar10 != 0x80001);
        if (pcVar15 != "Folder") {
LAB_03f15618:
          if (*pcVar15 != 'F') {
LAB_03f156d0:
            if (pcVar15 != "Player") {
              uVar10 = 0;
              bVar9 = true;
              do {
                if (pcVar15[uVar10] != "Player"[uVar10]) break;
                if (pcVar15[uVar10] == '\0') {
                  if (bVar9) goto LAB_03f15760;
                  break;
                }
                if (pcVar15[uVar10 + 1] != "Player"[uVar10 + 1]) break;
                if (pcVar15[uVar10 + 1] == '\0') goto LAB_03f15760;
                if (pcVar15[uVar10 + 2] != "Player"[uVar10 + 2]) break;
                if (pcVar15[uVar10 + 2] == '\0') goto LAB_03f15760;
                bVar9 = uVar10 < 0x7fffe;
                uVar10 = uVar10 + 3;
              } while (uVar10 != 0x80001);
              goto joined_r0x03f15484;
            }
LAB_03f15760:
            local_90 = (undefined *)((ulong)local_90 & 0xffffff0000000000);
            uVar10 = FUN_03b36b40(local_80,&local_90,&DAT_040a1c2c);
            if ((uVar10 & 1) == 0) {
LAB_03f157d0:
              local_88 = &DAT_0407ebb1;
            }
            else {
              local_88 = &DAT_0407ebb1;
              if (local_90._4_1_ == -0x60) {
                uVar22 = *(uint *)(psVar17 + 4);
                uVar18 = (uVar22 & 0xff00ff00) >> 8 | (uVar22 & 0xff00ff) << 8;
                uVar18 = uVar18 >> 0x10 | uVar18 << 0x10;
                if (*psVar17 != 0x5942) {
                  uVar18 = uVar22;
                }
                if (uVar18 == 0) goto LAB_03f157d0;
                uVar3 = *(uint *)((long)psVar17 + (long)(int)local_90 * 4 + (long)(int)uVar18 + 4);
                uVar22 = (uVar3 & 0xff00ff00) >> 8 | (uVar3 & 0xff00ff) << 8;
                uVar22 = uVar22 >> 0x10 | uVar22 << 0x10;
                if (*psVar17 != 0x5942) {
                  uVar22 = uVar3;
                }
                local_88 = (undefined8 *)((long)psVar17 + (ulong)uVar22 + (long)(int)uVar18);
              }
            }
            local_90 = puVar1;
            if (*(int *)(param_1 + 0x58) != 0) {
              plVar20 = *(long **)(param_1 + 0x60);
              plVar2 = plVar20 + *(int *)(param_1 + 0x58);
              do {
                lVar13 = *plVar20;
                puVar21 = *(undefined8 **)(lVar13 + 0x10);
                (**(code **)(local_90 + 0x18))(&local_90);
                if (puVar21 == local_88) goto LAB_03f158a0;
                uVar10 = 0;
                bVar9 = true;
                do {
                  if (*(char *)((long)puVar21 + uVar10) != *(char *)((long)local_88 + uVar10))
                  break;
                  if (*(char *)((long)puVar21 + uVar10) == '\0') {
                    if (bVar9) goto LAB_03f158a0;
                    break;
                  }
                  cVar4 = *(char *)((long)puVar21 + uVar10 + 1);
                  if (cVar4 != *(char *)((long)local_88 + uVar10 + 1)) break;
                  if (cVar4 == '\0') goto LAB_03f158a0;
                  cVar4 = *(char *)((long)puVar21 + uVar10 + 2);
                  if (cVar4 != *(char *)((long)local_88 + uVar10 + 2)) break;
                  if (cVar4 == '\0') goto LAB_03f158a0;
                  bVar9 = uVar10 < 0x7fffe;
                  uVar10 = uVar10 + 3;
                } while (uVar10 != 0x80001);
                plVar20 = plVar20 + 1;
              } while (plVar20 != plVar2);
            }
            lVar13 = 0;
LAB_03f158a0:
            *(long **)(lVar13 + 0x18) = plVar12;
            if ((int)plVar12[3] < *(int *)((long)plVar12 + 0x1c)) {
              *(long *)(plVar12[4] + (long)(int)plVar12[3] * 8) = lVar13;
              *(int *)(plVar12 + 3) = (int)plVar12[3] + 1;
            }
            goto joined_r0x03f15484;
          }
          lVar13 = 0x7fffe;
          pcVar19 = "Folder";
          pcVar6 = pcVar15;
          do {
            pcVar19 = pcVar19 + 3;
            if (pcVar6[1] != pcVar19[-2]) goto LAB_03f156d0;
            if (pcVar6[1] == '\0') break;
            if (pcVar6[2] != pcVar19[-1]) goto LAB_03f156d0;
            if (pcVar6[2] == '\0') break;
            if ((lVar13 == 0) || (cVar4 = pcVar6[3], cVar4 != *pcVar19)) goto LAB_03f156d0;
            lVar13 = lVar13 + -3;
            pcVar6 = pcVar6 + 3;
          } while (cVar4 != '\0');
        }
      }
      else {
        uVar22 = *(uint *)(psVar17 + 4);
        uVar18 = (uVar22 & 0xff00ff00) >> 8 | (uVar22 & 0xff00ff) << 8;
        uVar18 = uVar18 >> 0x10 | uVar18 << 0x10;
        if (*psVar17 != 0x5942) {
          uVar18 = uVar22;
        }
        if (uVar18 == 0) {
          pcVar15 = "";
          goto LAB_03f15570;
        }
        uVar3 = *(uint *)((long)psVar17 + (long)(int)local_90 * 4 + (long)(int)uVar18 + 4);
        uVar22 = (uVar3 & 0xff00ff00) >> 8 | (uVar3 & 0xff00ff) << 8;
        uVar22 = uVar22 >> 0x10 | uVar22 << 0x10;
        if (*psVar17 != 0x5942) {
          uVar22 = uVar3;
        }
        pcVar15 = (char *)((long)psVar17 + (ulong)uVar22 + (long)(int)uVar18);
        if (pcVar15 != "Layer") goto LAB_03f15570;
      }
LAB_03f15680:
      lVar13 = FUN_03f15010(param_1,local_80,param_3,param_4);
      *(long **)(lVar13 + 0x48) = plVar12;
      if ((int)plVar12[3] < *(int *)((long)plVar12 + 0x1c)) {
        *(long *)(plVar12[4] + (long)(int)plVar12[3] * 8) = lVar13 + 8;
        *(int *)(plVar12 + 3) = (int)plVar12[3] + 1;
      }
    }
joined_r0x03f15484:
    uVar16 = uVar16 + 1;
  } while (puVar8 == (uint *)0x0);
LAB_03f15488:
  if ((*puVar8 & 0xfe) != 0xc0) goto LAB_03f154c4;
  uVar18 = *puVar8 >> 8;
  if (*psVar7 == 0x5942) {
    uVar18 = uVar18 & 0xff00 | *puVar8 >> 0x18 | (uVar18 & 0xff) << 0x10;
  }
  goto LAB_03f154c8;
}


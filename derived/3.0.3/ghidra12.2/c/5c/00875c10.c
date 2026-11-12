
ulong FUN_00875c10(undefined8 param_1,uint *param_2,ulong param_3,ulong param_4,ulong param_5)

{
  long lVar1;
  char *pcVar2;
  uint uVar3;
  byte bVar4;
  ushort uVar5;
  char cVar6;
  short sVar7;
  undefined *puVar8;
  undefined *__s;
  undefined8 uVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  char cVar13;
  char cVar14;
  uint uVar15;
  uint uVar16;
  ulong uVar17;
  uint *puVar18;
  uint uVar19;
  int iVar20;
  long lVar21;
  int *piVar22;
  char *pcVar23;
  ulong uVar24;
  short sVar25;
  int iVar26;
  char cVar27;
  undefined8 local_78;
  byte local_6c [4];
  long local_68;
  
  __s = PTR_DAT_04bb3250;
  puVar8 = PTR_DAT_04bb3248;
  if (param_2 != (uint *)0x0) {
    uVar17 = (ulong)*param_2;
    param_5 = param_5 & 0xffffffff;
    param_4 = param_4 & 0xffffffff;
    uVar24 = param_3 & 0xffffffff;
    puVar18 = (uint *)((long)param_2 - uVar17);
    if ((*param_2 == 0) || (puVar18 == (uint *)0x0)) {
      if (uVar17 == 0) {
LAB_00875ed0:
        uVar17 = FUN_00875530(param_1,param_2,uVar24,param_4,param_5);
        return uVar17;
      }
LAB_00875cec:
      cVar27 = *PTR_DAT_04bb3248;
      do {
        lVar21 = DAT_04ce9760;
        uVar16 = DAT_04ce9758;
        if (cVar27 == '\0') {
          cVar27 = '\x01';
          *puVar8 = 1;
          memset(__s,0xff,0x288);
          uVar17 = (ulong)*param_2;
        }
        else {
          uVar15 = *(uint *)(__s + 0x150);
          if (-1 < (int)uVar15) {
            if ((byte *)((ulong)uVar15 + (long)param_2) == (byte *)0x0) goto LAB_00875ed0;
            bVar4 = *(byte *)((ulong)uVar15 + (long)param_2);
            uVar19 = (uint)bVar4;
            uVar15 = 0xf;
            if (((uint)param_3 & 0xffff) != 0x7e5) {
              uVar15 = 10;
            }
            sVar7 = (short)uVar24;
            cVar6 = (char)param_5;
            cVar27 = (char)param_4;
            if (bVar4 == 0xfd) {
              uVar19 = uVar15;
LAB_00875e48:
              if (uVar19 == 0) goto LAB_00875ed0;
              if (uVar19 == 0xfe) {
                local_68 = CONCAT71(local_68._1_7_,1);
                local_78 = CONCAT71(local_78._1_7_,1);
                uVar17 = FUN_00874dd0(param_1,param_2,&local_68,&local_78,uVar24);
                if ((uVar17 & 1) == 0) goto LAB_00875cc0;
                cVar13 = FUN_00871d60(param_2,(int)sVar7);
                cVar14 = FUN_00872174(param_2,(int)sVar7);
                uVar16 = 0;
                if ((cVar27 <= cVar13) && ((int)(uint)(byte)local_68._0_1_ <= (int)cVar27)) {
                  iVar26 = (int)cVar6;
                  bVar10 = false;
                  bVar11 = false;
                  bVar12 = false;
                  if (iVar26 <= cVar14) {
                    iVar20 = (int)(char)local_78._0_1_;
                    bVar12 = SBORROW4(iVar20,iVar26);
                    bVar10 = iVar20 - iVar26 < 0;
                    bVar11 = iVar20 == iVar26;
                  }
                  uVar16 = (uint)(bVar11 || bVar10 != bVar12);
                }
                goto LAB_00875cc4;
              }
            }
            else {
              if (uVar19 != 0xff) goto LAB_00875e48;
              local_78 = CONCAT71(local_78._1_7_,1);
              local_6c[0] = 1;
              puVar18 = (uint *)((long)param_2 - uVar17);
              if (puVar18 == (uint *)0x0) {
LAB_00875f14:
                uVar15 = 0;
              }
              else {
                uVar15 = 0;
                if (*puVar18 != 0) {
                  uVar15 = puVar18[1];
                  if ((uVar15 != 0) && ((ulong)(ushort)puVar18[2] != 0)) {
                    lVar1 = 0xc;
                    if (*(char *)((long)puVar18 + 10) != '\0') {
                      lVar1 = 0x1c;
                    }
                    lVar1 = (long)puVar18 + lVar1 + (ulong)(ushort)puVar18[2] * 8;
                    if (lVar1 != 0) {
                      uVar19 = 0;
                      if ((ulong)uVar15 != 0) {
                        uVar19 = (uint)((ulong)((long)param_2 - lVar1) / (ulong)uVar15);
                      }
                      if (*puVar18 <= uVar19) {
                        uVar19 = 0xffffffff;
                      }
                      if (uVar19 < DAT_04ce9758) {
                        if (((*(short *)(DAT_04ce9760 + (long)(int)uVar19 * 2) != 3) ||
                            (uVar15 = FUN_03853b94(param_2), uVar16 <= uVar15)) ||
                           (uVar5 = *(ushort *)(lVar21 + (long)(int)uVar15 * 2),
                           uVar15 = (uint)uVar5, 5 < uVar5)) {
                          uVar15 = 0;
                        }
                        goto LAB_00875f18;
                      }
                    }
                  }
                  goto LAB_00875f14;
                }
              }
LAB_00875f18:
              local_68 = CONCAT44(local_68._4_4_,uVar15);
              if (uVar15 - 1 < 5) {
                sVar25 = *(short *)(&DAT_041672d4 + (long)(int)(uVar15 - 1) * 2);
              }
              else {
                sVar25 = 2000;
              }
              uVar17 = FUN_00874dd0(param_1,param_2,&local_78,local_6c,sVar25);
              if ((uVar17 & 1) != 0) {
                if (sVar25 < sVar7) goto LAB_00876038;
                if (sVar7 < sVar25) goto LAB_00875cc0;
                if ((char)local_78._0_1_ < cVar27) goto LAB_00876038;
                if (cVar27 < (char)local_78._0_1_) goto LAB_00875cc0;
                uVar16 = (uint)((int)(uint)local_6c[0] <= (int)cVar6);
                goto LAB_00875cc4;
              }
              uVar19 = 0xff;
            }
            uVar9 = local_78;
            local_78._7_1_ = SUB81(uVar9,7);
            local_78._0_7_ = (uint7)CONCAT24(5,CONCAT13(cVar6,CONCAT12(cVar27,sVar7)));
            if (uVar19 == 0) goto LAB_00875cc0;
            iVar26 = 0;
            goto LAB_008760cc;
          }
          if (uVar15 != 0xffffffff) goto LAB_00875ed0;
        }
        if ((uVar17 == 0) || (lVar21 = (long)param_2 - uVar17, lVar21 == 0)) goto LAB_00875ed0;
        lVar1 = 0xc;
        if (*(char *)(lVar21 + 10) != '\0') {
          lVar1 = 0x1c;
        }
        if (lVar1 + lVar21 == 0) goto LAB_00875ed0;
        uVar17 = (ulong)*(ushort *)(lVar21 + 8);
        *(undefined4 *)(__s + 0x150) = 0xfffffffe;
        if (uVar17 == 0) goto LAB_00875ed0;
        piVar22 = (int *)(lVar1 + lVar21 + 4);
        while (piVar22[-1] != -0x3e838358) {
          piVar22 = piVar22 + 2;
          uVar17 = uVar17 - 1;
          if (uVar17 == 0) goto LAB_00875ed0;
        }
        iVar26 = 0;
        if (*piVar22 != -1) {
          iVar26 = *piVar22;
        }
        *(int *)(__s + 0x150) = iVar26;
        uVar17 = (ulong)*param_2;
        if (*param_2 == 0) goto LAB_00875ed0;
      } while( true );
    }
    if (((*puVar18 == 0) || (uVar16 = puVar18[1], uVar16 == 0)) || ((ulong)(ushort)puVar18[2] == 0))
    goto LAB_00875cec;
    lVar21 = 0xc;
    if (*(char *)((long)puVar18 + 10) != '\0') {
      lVar21 = 0x1c;
    }
    lVar21 = (long)puVar18 + lVar21 + (ulong)(ushort)puVar18[2] * 8;
    if (lVar21 == 0) goto LAB_00875cec;
    uVar15 = 0;
    if ((ulong)uVar16 != 0) {
      uVar15 = (uint)((ulong)((long)param_2 - lVar21) / (ulong)uVar16);
    }
    if (*puVar18 <= uVar15) {
      uVar15 = 0xffffffff;
    }
    if ((DAT_04ce9768 <= uVar15) || (*(short *)(DAT_04ce9770 + (long)(int)uVar15 * 2) != 4))
    goto LAB_00875cec;
  }
LAB_00875cc0:
  uVar16 = 0;
  goto LAB_00875cc4;
LAB_008761d4:
  pcVar23 = (char *)0x0;
LAB_008761e8:
  pcVar2 = *(char **)PTR_PTR_04bb3260;
  if (pcVar23 != (char *)0x0) {
    pcVar2 = pcVar23;
  }
  if (pcVar2 != "VeniceCarnival") {
    uVar17 = 0;
    bVar10 = true;
    do {
      if (pcVar2[uVar17] != "VeniceCarnival"[uVar17]) break;
      if (pcVar2[uVar17] == '\0') {
LAB_00876280:
        if (bVar10) goto LAB_0087608c;
        break;
      }
      if (pcVar2[uVar17 + 1] != "VeniceCarnival"[uVar17 + 1]) break;
      if (pcVar2[uVar17 + 1] == '\0') {
LAB_0087627c:
        bVar10 = true;
        goto LAB_00876280;
      }
      if (pcVar2[uVar17 + 2] != "VeniceCarnival"[uVar17 + 2]) break;
      if (pcVar2[uVar17 + 2] == '\0') goto LAB_0087627c;
      bVar10 = uVar17 < 0x7fffe;
      uVar17 = uVar17 + 3;
    } while (uVar17 != 0x80001);
    iVar26 = iVar26 + -1;
  }
LAB_0087608c:
  lVar21 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_78);
  local_68 = lVar21 + -0x15180;
  uVar24 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_68);
  iVar26 = iVar26 + 1;
  param_4 = uVar24 >> 0x10;
  param_5 = uVar24 >> 0x18;
  local_78 = uVar24;
  if ((int)uVar19 <= iVar26) goto LAB_00875cc4;
LAB_008760cc:
  uVar16 = FUN_00875530(param_1,param_2,uVar24 & 0xffffffff,param_4 & 0xffffffff,
                        param_5 & 0xffffffff);
  if ((uVar16 & 1) == 0) {
    if ((local_78._2_1_ == '\x02') && (local_78._3_1_ == '\x1d')) {
      uVar15 = *param_2;
      if (uVar15 != 0) {
        cVar27 = *puVar8;
        do {
          if (cVar27 == '\0') {
            cVar27 = '\x01';
            *puVar8 = 1;
            memset(__s,0xff,0x288);
            uVar15 = *param_2;
          }
          else {
            uVar3 = *(uint *)(__s + 0x148);
            if (-1 < (int)uVar3) {
              pcVar23 = (char *)((ulong)uVar3 + (long)param_2);
              goto LAB_008761e8;
            }
            if (uVar3 != 0xffffffff) goto LAB_008761d4;
          }
          puVar18 = (uint *)(ulong)uVar15;
          pcVar23 = (char *)0x0;
          if ((puVar18 == (uint *)0x0) || (param_2 == puVar18)) goto LAB_008761e8;
          lVar21 = 0xc;
          if (*(char *)((long)param_2 + (10 - (long)puVar18)) != '\0') {
            lVar21 = 0x1c;
          }
          lVar21 = (long)param_2 + (lVar21 - (long)puVar18);
          pcVar23 = (char *)0x0;
          if (lVar21 == 0) goto LAB_008761e8;
          uVar17 = (ulong)*(ushort *)((long)param_2 + (8 - (long)puVar18));
          *(undefined4 *)(__s + 0x148) = 0xfffffffe;
          if (uVar17 == 0) goto LAB_008761d4;
          piVar22 = (int *)(lVar21 + 4);
          while (piVar22[-1] != 0x443c0fb7) {
            piVar22 = piVar22 + 2;
            uVar17 = uVar17 - 1;
            if (uVar17 == 0) goto LAB_008761d4;
          }
          iVar20 = 0;
          if (*piVar22 != -1) {
            iVar20 = *piVar22;
          }
          *(int *)(__s + 0x148) = iVar20;
          uVar15 = *param_2;
          if (uVar15 == 0) goto LAB_008761d4;
        } while( true );
      }
      pcVar23 = (char *)0x0;
      goto LAB_008761e8;
    }
    goto LAB_0087608c;
  }
LAB_00876038:
  uVar16 = 1;
LAB_00875cc4:
  return (ulong)(uVar16 & 1);
}


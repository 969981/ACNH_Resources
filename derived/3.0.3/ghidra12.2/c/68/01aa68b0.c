
uint FUN_01aa68b0(long *param_1)

{
  int iVar1;
  char cVar2;
  undefined *puVar3;
  undefined *puVar4;
  uint uVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  byte *pbVar9;
  ulong uVar10;
  uint uVar11;
  uint uVar12;
  ulong uVar13;
  uint *puVar14;
  ulong uVar15;
  uint *puVar16;
  undefined8 *puVar17;
  uint *puVar18;
  uint uVar19;
  undefined1 *__src;
  char *pcVar20;
  undefined1 auStack_29c [255];
  undefined1 local_19d;
  uint local_198;
  undefined *local_188;
  byte *local_180;
  undefined4 local_178;
  byte local_174 [255];
  undefined1 local_75;
  
  puVar3 = PTR_DAT_04bb4520;
  local_19d = 0;
  (**(code **)(*param_1 + 0x18))();
  __src = (undefined1 *)param_1[1];
  if (auStack_29c != __src) {
    (**(code **)(*param_1 + 0x18))(param_1);
    lVar7 = 0;
    do {
      if (*(char *)(param_1[1] + lVar7) == '\0') goto LAB_01aa696c;
      lVar8 = param_1[1] + lVar7;
      if (*(char *)(lVar8 + 1) == '\0') {
        lVar7 = lVar7 + 1;
        goto LAB_01aa696c;
      }
      if (*(char *)(lVar8 + 2) == '\0') {
        lVar7 = lVar7 + 2;
        goto LAB_01aa696c;
      }
      lVar7 = lVar7 + 3;
    } while (lVar7 != 0x80001);
    lVar7 = 0;
LAB_01aa696c:
    iVar6 = (int)lVar7;
    if (0xff < (int)lVar7) {
      iVar6 = 0xff;
    }
    memcpy(auStack_29c,__src,(long)iVar6);
    auStack_29c[iVar6] = 0;
  }
  (**(code **)(*param_1 + 0x18))(param_1);
  pbVar9 = (byte *)param_1[1];
  uVar5 = (uint)*pbVar9;
  if (*pbVar9 == 0) {
    uVar19 = 0;
  }
  else {
    uVar19 = 0xffffffff;
    do {
      pbVar9 = pbVar9 + 1;
      uVar19 = crc32b(uVar19,uVar5,0x4c11db7);
      uVar5 = (uint)*pbVar9;
    } while (uVar5 != 0);
    uVar19 = ~uVar19;
  }
  local_198 = uVar19;
  (**(code **)(*param_1 + 0x18))(param_1);
  pcVar20 = (char *)param_1[1];
  if ((DAT_05323a70 == '\x01') && (DAT_05323a74 == uVar19)) {
    uVar5 = DAT_05323a78;
  }
  else {
    if (((DAT_05323b00 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_05323b00), iVar6 != 0)) {
      DAT_05323a80 = 0xe00000000;
      DAT_05323a88 = &DAT_05323a90;
      __cxa_guard_release(&DAT_05323b00);
    }
    if ((DAT_05323b08 & 1) == 0) {
      DAT_05323b08 = 1;
      if (((DAT_05323b80 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_05323b80), iVar6 != 0)) {
        DAT_05323b0c = 0xffffffff00000000;
        DAT_05323b14 = 0xffffffff00000000;
        DAT_05323b1c = 0xffffffff00000000;
        DAT_05323b24 = 0xffffffff00000000;
        DAT_05323b2c = 0xffffffff00000000;
        DAT_05323b34 = 0xffffffff00000000;
        DAT_05323b3c = 0xffffffff00000000;
        DAT_05323b44 = 0xffffffff00000000;
        DAT_05323b4c = 0xffffffff00000000;
        DAT_05323b54 = 0xffffffff00000000;
        DAT_05323b5c = 0xffffffff00000000;
        DAT_05323b64 = 0xffffffff00000000;
        DAT_05323b6c = 0xffffffff00000000;
        DAT_05323b74 = 0xffffffff00000000;
        __cxa_guard_release(&DAT_05323b80);
      }
      lVar7 = 0;
      do {
        local_178 = 0x100;
        local_75 = 0;
        pbVar9 = (&PTR_DAT_04a33a18)[lVar7];
        if (local_174 != pbVar9) {
          lVar8 = 0;
          do {
            if (pbVar9[lVar8] == 0) {
LAB_01aa6b04:
              iVar6 = (int)lVar8;
joined_r0x01aa6b08:
              if (0xff < iVar6) {
                iVar6 = 0xff;
              }
              goto LAB_01aa6b10;
            }
            if (pbVar9[lVar8 + 1] == 0) {
              lVar8 = lVar8 + 1;
              goto LAB_01aa6b04;
            }
            if (pbVar9[lVar8 + 2] == 0) {
              iVar6 = (int)lVar8 + 2;
              goto joined_r0x01aa6b08;
            }
            lVar8 = lVar8 + 3;
          } while (lVar8 != 0x80001);
          iVar6 = 0;
LAB_01aa6b10:
          local_188 = puVar3 + 0x10;
          local_180 = local_174;
          memcpy(local_174,pbVar9,(long)iVar6);
          local_174[iVar6] = 0;
        }
        uVar5 = (uint)*pbVar9;
        if (*pbVar9 == 0) {
          uVar11 = 0;
        }
        else {
          uVar11 = 0xffffffff;
          do {
            pbVar9 = pbVar9 + 1;
            uVar11 = crc32b(uVar11,uVar5,0x4c11db7);
            uVar5 = (uint)*pbVar9;
          } while (uVar5 != 0);
          uVar11 = ~uVar11;
        }
        *(uint *)(&DAT_05323b0c + lVar7) = uVar11;
        *(int *)((long)&DAT_05323b0c + lVar7 * 8 + 4) = (int)lVar7;
        iVar6 = (int)DAT_05323a80;
        if ((int)DAT_05323a80 < DAT_05323a80._4_4_) {
          *(undefined8 **)(DAT_05323a88 + (long)(int)DAT_05323a80 * 8) = &DAT_05323b0c + lVar7;
          iVar6 = (int)DAT_05323a80 + 1;
          DAT_05323a80 = CONCAT44(DAT_05323a80._4_4_,iVar6);
        }
        puVar4 = DAT_05323a88;
        lVar7 = lVar7 + 1;
      } while (lVar7 != 0xe);
      if (1 < iVar6) {
        uVar11 = 0;
        uVar5 = iVar6 - 1;
        do {
          if ((int)uVar5 <= (int)uVar11) break;
          puVar14 = *(uint **)(puVar4 + (ulong)uVar11 * 8);
          uVar10 = (ulong)uVar11;
          if ((uVar5 - uVar11 & 1) == 0) {
            uVar13 = uVar10;
            puVar16 = puVar14;
          }
          else {
            uVar13 = uVar10 + 1;
            puVar16 = *(uint **)(puVar4 + uVar13 * 8);
            if (((puVar14 != (uint *)0x0) && (puVar16 != (uint *)0x0)) && (*puVar16 < *puVar14)) {
              *(uint **)(puVar4 + uVar13 * 8) = puVar14;
              *(uint **)(puVar4 + uVar10 * 8) = puVar16;
              puVar16 = puVar14;
            }
          }
          uVar15 = (ulong)uVar5;
          uVar5 = uVar11;
          if (~uVar10 + uVar15 != 0) {
            puVar17 = (undefined8 *)(puVar4 + uVar13 * 8 + 8);
            do {
              puVar14 = (uint *)*puVar17;
              uVar12 = (uint)uVar13;
              if (((puVar16 == (uint *)0x0) || (puVar14 == (uint *)0x0)) || (*puVar16 <= *puVar14))
              {
                puVar18 = (uint *)puVar17[1];
                if (puVar14 != (uint *)0x0) goto LAB_01aa6d80;
LAB_01aa6d30:
                puVar14 = puVar18;
              }
              else {
                puVar17[-1] = puVar14;
                *puVar17 = puVar16;
                puVar18 = (uint *)puVar17[1];
                puVar14 = puVar16;
                uVar5 = uVar12;
                if (puVar16 == (uint *)0x0) goto LAB_01aa6d30;
LAB_01aa6d80:
                if (puVar18 == (uint *)0x0) goto LAB_01aa6d30;
                if (*puVar14 <= *puVar18) goto LAB_01aa6d30;
                uVar5 = uVar12 + 1;
                *puVar17 = puVar18;
                puVar17[1] = puVar14;
              }
              uVar13 = uVar13 + 2;
              puVar17 = puVar17 + 2;
              puVar16 = puVar14;
            } while (uVar15 != uVar13);
          }
          if ((int)uVar5 <= (int)uVar11) break;
          uVar13 = (ulong)uVar5;
          puVar14 = *(uint **)(puVar4 + (ulong)uVar5 * 8);
          uVar11 = uVar5;
          do {
            puVar16 = *(uint **)(puVar4 + uVar13 * 8 + -8);
            if (((puVar14 != (uint *)0x0) && (puVar16 != (uint *)0x0)) && (*puVar14 < *puVar16)) {
              uVar11 = (uint)uVar13;
              *(uint **)(puVar4 + uVar13 * 8 + -8) = puVar14;
              *(uint **)(puVar4 + uVar13 * 8) = puVar16;
              puVar16 = puVar14;
            }
            uVar13 = uVar13 - 1;
            puVar14 = puVar16;
          } while ((long)uVar10 < (long)uVar13);
        } while (uVar11 != uVar5);
      }
      DAT_05323a7c = '\x01';
    }
    if ((pcVar20 == (char *)0x0) || (*pcVar20 != '\0')) {
      if ((DAT_05323a7c == '\x01') && ((int)DAT_05323a80 != 0)) {
        if ((int)DAT_05323a80 < 2) {
          uVar5 = 0;
        }
        else {
          uVar5 = 0;
          iVar6 = (int)DAT_05323a80 + -1;
          do {
            iVar1 = iVar6 + uVar5;
            if (iVar1 < 0 != SCARRY4(iVar6,uVar5)) {
              iVar1 = iVar1 + 1;
            }
            uVar11 = iVar1 >> 1;
            if (*(uint **)(DAT_05323a88 + (long)(int)uVar11 * 8) == (uint *)0x0)
            goto joined_r0x01aa6dd0;
            uVar12 = **(uint **)(DAT_05323a88 + (long)(int)uVar11 * 8);
            if (uVar12 == uVar19) goto joined_r0x01aa6dd0;
            if (uVar12 < uVar19) {
              uVar5 = uVar11 + 1;
            }
            else {
              iVar6 = uVar11 - 1;
            }
          } while ((int)uVar5 < iVar6);
        }
        uVar11 = uVar5;
        if ((*(uint **)(DAT_05323a88 + (long)(int)uVar5 * 8) == (uint *)0x0) ||
           (**(uint **)(DAT_05323a88 + (long)(int)uVar5 * 8) == uVar19)) {
joined_r0x01aa6dd0:
          if ((uVar11 < 0xe) &&
             (uVar5 = *(uint *)(*(long *)(DAT_05323a88 + (ulong)uVar11 * 8) + 4), uVar5 < 0xe)) {
            DAT_05323a70 = 1;
            DAT_05323a74 = uVar19;
            DAT_05323a78 = uVar5;
            return uVar5;
          }
        }
      }
      if (pcVar20 != (char *)0x0) {
        local_188 = PTR_DAT_04bb2020 + 0x10;
        uVar5 = 0;
        local_180 = (byte *)pcVar20;
        do {
          pcVar20 = "";
          if (uVar5 < 0xe) {
            pcVar20 = (&PTR_DAT_04a33a18)[uVar5];
          }
          (**(code **)(local_188 + 0x18))(&local_188);
          if ((byte *)pcVar20 == local_180) {
            return uVar5;
          }
          if (*pcVar20 == *local_180) {
            if (*pcVar20 == '\0') {
              return uVar5;
            }
            lVar7 = 0x7fffe;
            pbVar9 = local_180;
            while( true ) {
              if (pcVar20[1] != pbVar9[1]) break;
              if (pcVar20[1] == '\0') {
                return uVar5;
              }
              if (pcVar20[2] != pbVar9[2]) break;
              if (pcVar20[2] == '\0') {
                return uVar5;
              }
              if ((lVar7 == 0) || (cVar2 = pcVar20[3], cVar2 != pbVar9[3])) break;
              lVar7 = lVar7 + -3;
              pbVar9 = pbVar9 + 3;
              pcVar20 = pcVar20 + 3;
              if (cVar2 == '\0') {
                return uVar5;
              }
            }
          }
          uVar19 = 0xe;
          if ((int)uVar5 < 0xe) {
            uVar19 = uVar5 + 1;
          }
          uVar5 = uVar19;
        } while (uVar19 != 0xe);
      }
    }
    uVar5 = 0xffffffff;
  }
  return uVar5;
}


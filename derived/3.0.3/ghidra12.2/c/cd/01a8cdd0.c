
uint FUN_01a8cdd0(uint param_1,char *param_2)

{
  undefined *puVar1;
  int iVar2;
  char cVar3;
  undefined *puVar4;
  uint uVar5;
  int iVar6;
  long lVar7;
  undefined8 *puVar8;
  ulong uVar9;
  uint uVar10;
  uint uVar11;
  ulong uVar12;
  uint *puVar13;
  ulong uVar14;
  uint *puVar15;
  uint *puVar16;
  byte *pbVar17;
  char *pcVar18;
  long lVar19;
  undefined *local_188;
  byte *local_180;
  undefined4 local_178;
  byte local_174 [255];
  undefined1 local_75;
  
  if (DAT_0531b110 == '\x01' && DAT_0531b114 == param_1) {
    uVar5 = DAT_0531b118;
  }
  else {
    if (((DAT_0531b640 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_0531b640), iVar6 != 0)) {
      DAT_0531b120 = 0xa200000000;
      DAT_0531b128 = &DAT_0531b130;
      __cxa_guard_release(&DAT_0531b640);
    }
    if ((DAT_0531b648 & 1) == 0) {
      DAT_0531b648 = 1;
      if (((DAT_0531bb60 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_0531bb60), iVar6 != 0)) {
        puVar8 = &DAT_0531b64c;
        do {
          *puVar8 = 0xffffffff00000000;
          puVar8[1] = 0xffffffff00000000;
          puVar8[2] = 0xffffffff00000000;
          puVar8[3] = 0xffffffff00000000;
          puVar8[4] = 0xffffffff00000000;
          puVar8[5] = 0xffffffff00000000;
          puVar8 = puVar8 + 6;
        } while (puVar8 != (undefined8 *)0x531bb5c);
        __cxa_guard_release(&DAT_0531bb60);
      }
      lVar19 = 0;
      puVar1 = PTR_DAT_04bb4520 + 0x10;
      do {
        local_178 = 0x100;
        local_75 = 0;
        pbVar17 = *(byte **)(PTR_s_STowelN_04bbe238 + lVar19 * 8 + 0x760);
        if (local_174 != pbVar17) {
          lVar7 = 0;
          do {
            if (pbVar17[lVar7] == 0) {
LAB_01a8cf08:
              iVar6 = (int)lVar7;
joined_r0x01a8cf0c:
              if (0xff < iVar6) {
                iVar6 = 0xff;
              }
              goto LAB_01a8cf14;
            }
            if (pbVar17[lVar7 + 1] == 0) {
              lVar7 = lVar7 + 1;
              goto LAB_01a8cf08;
            }
            if (pbVar17[lVar7 + 2] == 0) {
              iVar6 = (int)lVar7 + 2;
              goto joined_r0x01a8cf0c;
            }
            lVar7 = lVar7 + 3;
          } while (lVar7 != 0x80001);
          iVar6 = 0;
LAB_01a8cf14:
          local_188 = puVar1;
          local_180 = local_174;
          memcpy(local_174,pbVar17,(long)iVar6);
          local_174[iVar6] = 0;
        }
        uVar5 = (uint)*pbVar17;
        if (*pbVar17 == 0) {
          uVar10 = 0;
        }
        else {
          uVar10 = 0xffffffff;
          do {
            pbVar17 = pbVar17 + 1;
            uVar10 = crc32b(uVar10,uVar5,0x4c11db7);
            uVar5 = (uint)*pbVar17;
          } while (uVar5 != 0);
          uVar10 = ~uVar10;
        }
        *(uint *)(&DAT_0531b64c + lVar19) = uVar10;
        *(int *)((long)&DAT_0531b64c + lVar19 * 8 + 4) = (int)lVar19;
        iVar6 = (int)DAT_0531b120;
        if ((int)DAT_0531b120 < DAT_0531b120._4_4_) {
          *(undefined8 **)(DAT_0531b128 + (long)(int)DAT_0531b120 * 8) = &DAT_0531b64c + lVar19;
          iVar6 = (int)DAT_0531b120 + 1;
          DAT_0531b120 = CONCAT44(DAT_0531b120._4_4_,iVar6);
        }
        puVar4 = DAT_0531b128;
        lVar19 = lVar19 + 1;
      } while (lVar19 != 0xa2);
      if (1 < iVar6) {
        uVar10 = 0;
        uVar5 = iVar6 - 1;
        do {
          if ((int)uVar5 <= (int)uVar10) break;
          puVar13 = *(uint **)(puVar4 + (ulong)uVar10 * 8);
          uVar9 = (ulong)uVar10;
          if ((uVar5 - uVar10 & 1) == 0) {
            uVar12 = uVar9;
            puVar15 = puVar13;
          }
          else {
            uVar12 = uVar9 + 1;
            puVar15 = *(uint **)(puVar4 + uVar12 * 8);
            if (((puVar13 != (uint *)0x0) && (puVar15 != (uint *)0x0)) && (*puVar15 < *puVar13)) {
              *(uint **)(puVar4 + uVar12 * 8) = puVar13;
              *(uint **)(puVar4 + uVar9 * 8) = puVar15;
              puVar15 = puVar13;
            }
          }
          uVar14 = (ulong)uVar5;
          uVar5 = uVar10;
          if (~uVar9 + uVar14 != 0) {
            puVar8 = (undefined8 *)(puVar4 + uVar12 * 8 + 8);
            do {
              puVar13 = (uint *)*puVar8;
              uVar11 = (uint)uVar12;
              if (((puVar15 == (uint *)0x0) || (puVar13 == (uint *)0x0)) || (*puVar15 <= *puVar13))
              {
                puVar16 = (uint *)puVar8[1];
                if (puVar13 != (uint *)0x0) goto LAB_01a8d190;
LAB_01a8d140:
                puVar13 = puVar16;
              }
              else {
                puVar8[-1] = puVar13;
                *puVar8 = puVar15;
                puVar16 = (uint *)puVar8[1];
                puVar13 = puVar15;
                uVar5 = uVar11;
                if (puVar15 == (uint *)0x0) goto LAB_01a8d140;
LAB_01a8d190:
                if (puVar16 == (uint *)0x0) goto LAB_01a8d140;
                if (*puVar13 <= *puVar16) goto LAB_01a8d140;
                uVar5 = uVar11 + 1;
                *puVar8 = puVar16;
                puVar8[1] = puVar13;
              }
              uVar12 = uVar12 + 2;
              puVar8 = puVar8 + 2;
              puVar15 = puVar13;
            } while (uVar14 != uVar12);
          }
          if ((int)uVar5 <= (int)uVar10) break;
          uVar12 = (ulong)uVar5;
          puVar13 = *(uint **)(puVar4 + (ulong)uVar5 * 8);
          uVar10 = uVar5;
          do {
            puVar15 = *(uint **)(puVar4 + uVar12 * 8 + -8);
            if (((puVar13 != (uint *)0x0) && (puVar15 != (uint *)0x0)) && (*puVar13 < *puVar15)) {
              uVar10 = (uint)uVar12;
              *(uint **)(puVar4 + uVar12 * 8 + -8) = puVar13;
              *(uint **)(puVar4 + uVar12 * 8) = puVar15;
              puVar15 = puVar13;
            }
            uVar12 = uVar12 - 1;
            puVar13 = puVar15;
          } while ((long)uVar9 < (long)uVar12);
        } while (uVar10 != uVar5);
      }
      DAT_0531b11c = '\x01';
    }
    puVar1 = PTR_s_STowelN_04bbe238;
    if ((param_2 == (char *)0x0) || (*param_2 != '\0')) {
      if ((DAT_0531b11c == '\x01') && ((int)DAT_0531b120 != 0)) {
        if ((int)DAT_0531b120 < 2) {
          uVar5 = 0;
        }
        else {
          uVar5 = 0;
          iVar6 = (int)DAT_0531b120 + -1;
          do {
            iVar2 = iVar6 + uVar5;
            if (iVar2 < 0 != SCARRY4(iVar6,uVar5)) {
              iVar2 = iVar2 + 1;
            }
            uVar10 = iVar2 >> 1;
            if (*(uint **)(DAT_0531b128 + (long)(int)uVar10 * 8) == (uint *)0x0)
            goto joined_r0x01a8d1e0;
            uVar11 = **(uint **)(DAT_0531b128 + (long)(int)uVar10 * 8);
            if (uVar11 == param_1) goto joined_r0x01a8d1e0;
            if (uVar11 < param_1) {
              uVar5 = uVar10 + 1;
            }
            else {
              iVar6 = uVar10 - 1;
            }
          } while ((int)uVar5 < iVar6);
        }
        uVar10 = uVar5;
        if ((*(uint **)(DAT_0531b128 + (long)(int)uVar5 * 8) == (uint *)0x0) ||
           (**(uint **)(DAT_0531b128 + (long)(int)uVar5 * 8) == param_1)) {
joined_r0x01a8d1e0:
          if ((uVar10 < 0xa2) &&
             (uVar5 = *(uint *)(*(long *)(DAT_0531b128 + (ulong)uVar10 * 8) + 4), uVar5 < 0xa2)) {
            DAT_0531b110 = 1;
            DAT_0531b114 = param_1;
            DAT_0531b118 = uVar5;
            return uVar5;
          }
        }
      }
      if (param_2 != (char *)0x0) {
        local_188 = PTR_DAT_04bb2020 + 0x10;
        uVar5 = 0;
        local_180 = (byte *)param_2;
        do {
          pcVar18 = "";
          if (uVar5 < 0xa2) {
            pcVar18 = *(char **)(puVar1 + (ulong)uVar5 * 8 + 0x760);
          }
          (**(code **)(local_188 + 0x18))(&local_188);
          if ((byte *)pcVar18 == local_180) {
            return uVar5;
          }
          if (*pcVar18 == *local_180) {
            if (*pcVar18 == '\0') {
              return uVar5;
            }
            lVar19 = 0x7fffe;
            pbVar17 = local_180;
            while( true ) {
              if (pcVar18[1] != pbVar17[1]) break;
              if (pcVar18[1] == '\0') {
                return uVar5;
              }
              if (pcVar18[2] != pbVar17[2]) break;
              if (pcVar18[2] == '\0') {
                return uVar5;
              }
              if ((lVar19 == 0) || (cVar3 = pcVar18[3], cVar3 != pbVar17[3])) break;
              lVar19 = lVar19 + -3;
              pbVar17 = pbVar17 + 3;
              pcVar18 = pcVar18 + 3;
              if (cVar3 == '\0') {
                return uVar5;
              }
            }
          }
          uVar10 = 0xa2;
          if ((int)uVar5 < 0xa2) {
            uVar10 = uVar5 + 1;
          }
          uVar5 = uVar10;
        } while (uVar10 != 0xa2);
      }
    }
    uVar5 = 0xffffffff;
  }
  return uVar5;
}


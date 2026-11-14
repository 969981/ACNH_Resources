
uint FUN_01a8bbe0(uint param_1,char *param_2)

{
  undefined *puVar1;
  int iVar2;
  char cVar3;
  undefined *puVar4;
  uint uVar5;
  int iVar6;
  long lVar7;
  ulong uVar8;
  uint uVar9;
  uint uVar10;
  ulong uVar11;
  uint *puVar12;
  ulong uVar13;
  uint *puVar14;
  undefined8 *puVar15;
  uint *puVar16;
  byte *pbVar17;
  char *pcVar18;
  long lVar19;
  undefined *local_188;
  byte *local_180;
  undefined4 local_178;
  byte local_174 [255];
  undefined1 local_75;
  
  if (DAT_0531a260 == '\x01' && DAT_0531a264 == param_1) {
    uVar5 = DAT_0531a268;
  }
  else {
    if (((DAT_0531a328 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_0531a328), iVar6 != 0)) {
      DAT_0531a270 = 0x1500000000;
      DAT_0531a278 = &DAT_0531a280;
      __cxa_guard_release(&DAT_0531a328);
    }
    if ((DAT_0531a330 & 1) == 0) {
      DAT_0531a330 = 1;
      if (((DAT_0531a3e0 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_0531a3e0), iVar6 != 0)) {
        DAT_0531a3d4 = 0xffffffff00000000;
        DAT_0531a334 = 0xffffffff00000000;
        DAT_0531a33c = 0xffffffff00000000;
        DAT_0531a344 = 0xffffffff00000000;
        DAT_0531a34c = 0xffffffff00000000;
        DAT_0531a354 = 0xffffffff00000000;
        DAT_0531a35c = 0xffffffff00000000;
        DAT_0531a364 = 0xffffffff00000000;
        DAT_0531a36c = 0xffffffff00000000;
        DAT_0531a374 = 0xffffffff00000000;
        DAT_0531a37c = 0xffffffff00000000;
        DAT_0531a384 = 0xffffffff00000000;
        DAT_0531a38c = 0xffffffff00000000;
        DAT_0531a394 = 0xffffffff00000000;
        DAT_0531a39c = 0xffffffff00000000;
        DAT_0531a3a4 = 0xffffffff00000000;
        DAT_0531a3ac = 0xffffffff00000000;
        DAT_0531a3b4 = 0xffffffff00000000;
        DAT_0531a3bc = 0xffffffff00000000;
        DAT_0531a3c4 = 0xffffffff00000000;
        DAT_0531a3cc = 0xffffffff00000000;
        __cxa_guard_release(&DAT_0531a3e0);
      }
      lVar19 = 0;
      puVar1 = PTR_DAT_04bb4520 + 0x10;
      do {
        local_178 = 0x100;
        local_75 = 0;
        pbVar17 = (&PTR_DAT_04a27bb0)[lVar19];
        if (local_174 != pbVar17) {
          lVar7 = 0;
          do {
            if (pbVar17[lVar7] == 0) {
LAB_01a8bd14:
              iVar6 = (int)lVar7;
joined_r0x01a8bd18:
              if (0xff < iVar6) {
                iVar6 = 0xff;
              }
              goto LAB_01a8bd20;
            }
            if (pbVar17[lVar7 + 1] == 0) {
              lVar7 = lVar7 + 1;
              goto LAB_01a8bd14;
            }
            if (pbVar17[lVar7 + 2] == 0) {
              iVar6 = (int)lVar7 + 2;
              goto joined_r0x01a8bd18;
            }
            lVar7 = lVar7 + 3;
          } while (lVar7 != 0x80001);
          iVar6 = 0;
LAB_01a8bd20:
          local_188 = puVar1;
          local_180 = local_174;
          memcpy(local_174,pbVar17,(long)iVar6);
          local_174[iVar6] = 0;
        }
        uVar5 = (uint)*pbVar17;
        if (*pbVar17 == 0) {
          uVar9 = 0;
        }
        else {
          uVar9 = 0xffffffff;
          do {
            pbVar17 = pbVar17 + 1;
            uVar9 = crc32b(uVar9,uVar5,0x4c11db7);
            uVar5 = (uint)*pbVar17;
          } while (uVar5 != 0);
          uVar9 = ~uVar9;
        }
        *(uint *)(&DAT_0531a334 + lVar19) = uVar9;
        *(int *)((long)&DAT_0531a334 + lVar19 * 8 + 4) = (int)lVar19;
        iVar6 = (int)DAT_0531a270;
        if ((int)DAT_0531a270 < DAT_0531a270._4_4_) {
          *(undefined8 **)(DAT_0531a278 + (long)(int)DAT_0531a270 * 8) = &DAT_0531a334 + lVar19;
          iVar6 = (int)DAT_0531a270 + 1;
          DAT_0531a270 = CONCAT44(DAT_0531a270._4_4_,iVar6);
        }
        puVar4 = DAT_0531a278;
        lVar19 = lVar19 + 1;
      } while (lVar19 != 0x15);
      if (1 < iVar6) {
        uVar9 = 0;
        uVar5 = iVar6 - 1;
        do {
          if ((int)uVar5 <= (int)uVar9) break;
          puVar12 = *(uint **)(puVar4 + (ulong)uVar9 * 8);
          uVar8 = (ulong)uVar9;
          if ((uVar5 - uVar9 & 1) == 0) {
            uVar11 = uVar8;
            puVar14 = puVar12;
          }
          else {
            uVar11 = uVar8 + 1;
            puVar14 = *(uint **)(puVar4 + uVar11 * 8);
            if (((puVar12 != (uint *)0x0) && (puVar14 != (uint *)0x0)) && (*puVar14 < *puVar12)) {
              *(uint **)(puVar4 + uVar11 * 8) = puVar12;
              *(uint **)(puVar4 + uVar8 * 8) = puVar14;
              puVar14 = puVar12;
            }
          }
          uVar13 = (ulong)uVar5;
          uVar5 = uVar9;
          if (~uVar8 + uVar13 != 0) {
            puVar15 = (undefined8 *)(puVar4 + uVar11 * 8 + 8);
            do {
              puVar12 = (uint *)*puVar15;
              uVar10 = (uint)uVar11;
              if (((puVar14 == (uint *)0x0) || (puVar12 == (uint *)0x0)) || (*puVar14 <= *puVar12))
              {
                puVar16 = (uint *)puVar15[1];
                if (puVar12 != (uint *)0x0) goto LAB_01a8bfa0;
LAB_01a8bf50:
                puVar12 = puVar16;
              }
              else {
                puVar15[-1] = puVar12;
                *puVar15 = puVar14;
                puVar16 = (uint *)puVar15[1];
                puVar12 = puVar14;
                uVar5 = uVar10;
                if (puVar14 == (uint *)0x0) goto LAB_01a8bf50;
LAB_01a8bfa0:
                if (puVar16 == (uint *)0x0) goto LAB_01a8bf50;
                if (*puVar12 <= *puVar16) goto LAB_01a8bf50;
                uVar5 = uVar10 + 1;
                *puVar15 = puVar16;
                puVar15[1] = puVar12;
              }
              uVar11 = uVar11 + 2;
              puVar15 = puVar15 + 2;
              puVar14 = puVar12;
            } while (uVar13 != uVar11);
          }
          if ((int)uVar5 <= (int)uVar9) break;
          uVar11 = (ulong)uVar5;
          puVar12 = *(uint **)(puVar4 + (ulong)uVar5 * 8);
          uVar9 = uVar5;
          do {
            puVar14 = *(uint **)(puVar4 + uVar11 * 8 + -8);
            if (((puVar12 != (uint *)0x0) && (puVar14 != (uint *)0x0)) && (*puVar12 < *puVar14)) {
              uVar9 = (uint)uVar11;
              *(uint **)(puVar4 + uVar11 * 8 + -8) = puVar12;
              *(uint **)(puVar4 + uVar11 * 8) = puVar14;
              puVar14 = puVar12;
            }
            uVar11 = uVar11 - 1;
            puVar12 = puVar14;
          } while ((long)uVar8 < (long)uVar11);
        } while (uVar9 != uVar5);
      }
      DAT_0531a26c = '\x01';
    }
    if ((param_2 == (char *)0x0) || (*param_2 != '\0')) {
      if ((DAT_0531a26c == '\x01') && ((int)DAT_0531a270 != 0)) {
        if ((int)DAT_0531a270 < 2) {
          uVar5 = 0;
        }
        else {
          uVar5 = 0;
          iVar6 = (int)DAT_0531a270 + -1;
          do {
            iVar2 = iVar6 + uVar5;
            if (iVar2 < 0 != SCARRY4(iVar6,uVar5)) {
              iVar2 = iVar2 + 1;
            }
            uVar9 = iVar2 >> 1;
            if (*(uint **)(DAT_0531a278 + (long)(int)uVar9 * 8) == (uint *)0x0)
            goto joined_r0x01a8bff0;
            uVar10 = **(uint **)(DAT_0531a278 + (long)(int)uVar9 * 8);
            if (uVar10 == param_1) goto joined_r0x01a8bff0;
            if (uVar10 < param_1) {
              uVar5 = uVar9 + 1;
            }
            else {
              iVar6 = uVar9 - 1;
            }
          } while ((int)uVar5 < iVar6);
        }
        uVar9 = uVar5;
        if ((*(uint **)(DAT_0531a278 + (long)(int)uVar5 * 8) == (uint *)0x0) ||
           (**(uint **)(DAT_0531a278 + (long)(int)uVar5 * 8) == param_1)) {
joined_r0x01a8bff0:
          if ((uVar9 < 0x15) &&
             (uVar5 = *(uint *)(*(long *)(DAT_0531a278 + (ulong)uVar9 * 8) + 4), uVar5 < 0x15)) {
            DAT_0531a260 = 1;
            DAT_0531a264 = param_1;
            DAT_0531a268 = uVar5;
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
          if (uVar5 < 0x15) {
            pcVar18 = (&PTR_DAT_04a27bb0)[uVar5];
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
          uVar9 = 0x15;
          if ((int)uVar5 < 0x15) {
            uVar9 = uVar5 + 1;
          }
          uVar5 = uVar9;
        } while (uVar9 != 0x15);
      }
    }
    uVar5 = 0xffffffff;
  }
  return uVar5;
}


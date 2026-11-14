
uint FUN_01a8eb20(uint param_1,char *param_2)

{
  undefined *puVar1;
  int iVar2;
  char cVar3;
  undefined *puVar4;
  uint uVar5;
  int iVar6;
  long lVar7;
  undefined8 *puVar9;
  undefined8 *puVar8;
  ulong uVar10;
  uint uVar11;
  uint uVar12;
  ulong uVar13;
  uint *puVar14;
  ulong uVar15;
  uint *puVar16;
  uint *puVar17;
  byte *pbVar18;
  char *pcVar19;
  long lVar20;
  undefined *local_188;
  byte *local_180;
  undefined4 local_178;
  byte local_174 [255];
  undefined1 local_75;
  
  if (DAT_053203b0 == '\x01' && DAT_053203b4 == param_1) {
    uVar5 = DAT_053203b8;
  }
  else {
    if (((DAT_05320aa0 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_05320aa0), iVar6 != 0)) {
      DAT_053203c0 = 0xda00000000;
      DAT_053203c8 = &DAT_053203d0;
      __cxa_guard_release(&DAT_05320aa0);
    }
    if ((DAT_05320aa8 & 1) == 0) {
      DAT_05320aa8 = 1;
      if (((DAT_05321180 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_05321180), iVar6 != 0)) {
        puVar8 = &DAT_05320aac;
        do {
          puVar9 = puVar8 + 2;
          *puVar8 = 0xffffffff00000000;
          puVar8[1] = 0xffffffff00000000;
          puVar8 = puVar9;
        } while (puVar9 != (undefined8 *)0x532117c);
        __cxa_guard_release(&DAT_05321180);
      }
      lVar20 = 0;
      puVar1 = PTR_DAT_04bb4520 + 0x10;
      do {
        local_178 = 0x100;
        local_75 = 0;
        pbVar18 = (&PTR_DAT_04a2ffe0)[lVar20];
        if (local_174 != pbVar18) {
          lVar7 = 0;
          do {
            if (pbVar18[lVar7] == 0) {
LAB_01a8ec58:
              iVar6 = (int)lVar7;
joined_r0x01a8ec5c:
              if (0xff < iVar6) {
                iVar6 = 0xff;
              }
              goto LAB_01a8ec64;
            }
            if (pbVar18[lVar7 + 1] == 0) {
              lVar7 = lVar7 + 1;
              goto LAB_01a8ec58;
            }
            if (pbVar18[lVar7 + 2] == 0) {
              iVar6 = (int)lVar7 + 2;
              goto joined_r0x01a8ec5c;
            }
            lVar7 = lVar7 + 3;
          } while (lVar7 != 0x80001);
          iVar6 = 0;
LAB_01a8ec64:
          local_188 = puVar1;
          local_180 = local_174;
          memcpy(local_174,pbVar18,(long)iVar6);
          local_174[iVar6] = 0;
        }
        uVar5 = (uint)*pbVar18;
        if (*pbVar18 == 0) {
          uVar11 = 0;
        }
        else {
          uVar11 = 0xffffffff;
          do {
            pbVar18 = pbVar18 + 1;
            uVar11 = crc32b(uVar11,uVar5,0x4c11db7);
            uVar5 = (uint)*pbVar18;
          } while (uVar5 != 0);
          uVar11 = ~uVar11;
        }
        *(uint *)(&DAT_05320aac + lVar20) = uVar11;
        *(int *)((long)&DAT_05320aac + lVar20 * 8 + 4) = (int)lVar20;
        iVar6 = (int)DAT_053203c0;
        if ((int)DAT_053203c0 < DAT_053203c0._4_4_) {
          *(undefined8 **)(DAT_053203c8 + (long)(int)DAT_053203c0 * 8) = &DAT_05320aac + lVar20;
          iVar6 = (int)DAT_053203c0 + 1;
          DAT_053203c0 = CONCAT44(DAT_053203c0._4_4_,iVar6);
        }
        puVar4 = DAT_053203c8;
        lVar20 = lVar20 + 1;
      } while (lVar20 != 0xda);
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
            puVar8 = (undefined8 *)(puVar4 + uVar13 * 8 + 8);
            do {
              puVar14 = (uint *)*puVar8;
              uVar12 = (uint)uVar13;
              if (((puVar16 == (uint *)0x0) || (puVar14 == (uint *)0x0)) || (*puVar16 <= *puVar14))
              {
                puVar17 = (uint *)puVar8[1];
                if (puVar14 != (uint *)0x0) goto LAB_01a8eee0;
LAB_01a8ee90:
                puVar14 = puVar17;
              }
              else {
                puVar8[-1] = puVar14;
                *puVar8 = puVar16;
                puVar17 = (uint *)puVar8[1];
                puVar14 = puVar16;
                uVar5 = uVar12;
                if (puVar16 == (uint *)0x0) goto LAB_01a8ee90;
LAB_01a8eee0:
                if (puVar17 == (uint *)0x0) goto LAB_01a8ee90;
                if (*puVar14 <= *puVar17) goto LAB_01a8ee90;
                uVar5 = uVar12 + 1;
                *puVar8 = puVar17;
                puVar8[1] = puVar14;
              }
              uVar13 = uVar13 + 2;
              puVar8 = puVar8 + 2;
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
      DAT_053203bc = '\x01';
    }
    if ((param_2 == (char *)0x0) || (*param_2 != '\0')) {
      if ((DAT_053203bc == '\x01') && ((int)DAT_053203c0 != 0)) {
        if ((int)DAT_053203c0 < 2) {
          uVar5 = 0;
        }
        else {
          uVar5 = 0;
          iVar6 = (int)DAT_053203c0 + -1;
          do {
            iVar2 = iVar6 + uVar5;
            if (iVar2 < 0 != SCARRY4(iVar6,uVar5)) {
              iVar2 = iVar2 + 1;
            }
            uVar11 = iVar2 >> 1;
            if (*(uint **)(DAT_053203c8 + (long)(int)uVar11 * 8) == (uint *)0x0)
            goto joined_r0x01a8ef30;
            uVar12 = **(uint **)(DAT_053203c8 + (long)(int)uVar11 * 8);
            if (uVar12 == param_1) goto joined_r0x01a8ef30;
            if (uVar12 < param_1) {
              uVar5 = uVar11 + 1;
            }
            else {
              iVar6 = uVar11 - 1;
            }
          } while ((int)uVar5 < iVar6);
        }
        uVar11 = uVar5;
        if ((*(uint **)(DAT_053203c8 + (long)(int)uVar5 * 8) == (uint *)0x0) ||
           (**(uint **)(DAT_053203c8 + (long)(int)uVar5 * 8) == param_1)) {
joined_r0x01a8ef30:
          if ((uVar11 < 0xda) &&
             (uVar5 = *(uint *)(*(long *)(DAT_053203c8 + (ulong)uVar11 * 8) + 4), uVar5 < 0xda)) {
            DAT_053203b0 = 1;
            DAT_053203b4 = param_1;
            DAT_053203b8 = uVar5;
            return uVar5;
          }
        }
      }
      if (param_2 != (char *)0x0) {
        local_188 = PTR_DAT_04bb2020 + 0x10;
        uVar5 = 0;
        local_180 = (byte *)param_2;
        do {
          pcVar19 = "";
          if (uVar5 < 0xda) {
            pcVar19 = (&PTR_DAT_04a2ffe0)[uVar5];
          }
          (**(code **)(local_188 + 0x18))(&local_188);
          if ((byte *)pcVar19 == local_180) {
            return uVar5;
          }
          if (*pcVar19 == *local_180) {
            if (*pcVar19 == '\0') {
              return uVar5;
            }
            lVar20 = 0x7fffe;
            pbVar18 = local_180;
            while( true ) {
              if (pcVar19[1] != pbVar18[1]) break;
              if (pcVar19[1] == '\0') {
                return uVar5;
              }
              if (pcVar19[2] != pbVar18[2]) break;
              if (pcVar19[2] == '\0') {
                return uVar5;
              }
              if ((lVar20 == 0) || (cVar3 = pcVar19[3], cVar3 != pbVar18[3])) break;
              lVar20 = lVar20 + -3;
              pbVar18 = pbVar18 + 3;
              pcVar19 = pcVar19 + 3;
              if (cVar3 == '\0') {
                return uVar5;
              }
            }
          }
          uVar11 = 0xda;
          if ((int)uVar5 < 0xda) {
            uVar11 = uVar5 + 1;
          }
          uVar5 = uVar11;
        } while (uVar11 != 0xda);
      }
    }
    uVar5 = 0xffffffff;
  }
  return uVar5;
}


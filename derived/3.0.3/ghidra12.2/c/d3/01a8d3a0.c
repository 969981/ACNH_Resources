
uint FUN_01a8d3a0(uint param_1,char *param_2)

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
  
  if (DAT_0531c5c0 == '\x01' && DAT_0531c5c4 == param_1) {
    uVar5 = DAT_0531c5c8;
  }
  else {
    if (((DAT_0531c938 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_0531c938), iVar6 != 0)) {
      DAT_0531c5d0 = 0x6b00000000;
      DAT_0531c5d8 = &DAT_0531c5e0;
      __cxa_guard_release(&DAT_0531c938);
    }
    if ((DAT_0531c940 & 1) == 0) {
      DAT_0531c940 = 1;
      if (((DAT_0531cca0 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_0531cca0), iVar6 != 0)) {
        DAT_0531cb44 = 0xffffffff00000000;
        DAT_0531c944 = 0xffffffff00000000;
        DAT_0531c94c = 0xffffffff00000000;
        DAT_0531cb4c = 0xffffffff00000000;
        DAT_0531cb54 = 0xffffffff00000000;
        DAT_0531cb5c = 0xffffffff00000000;
        DAT_0531cb64 = 0xffffffff00000000;
        DAT_0531cb6c = 0xffffffff00000000;
        DAT_0531cb74 = 0xffffffff00000000;
        DAT_0531cb7c = 0xffffffff00000000;
        DAT_0531cb84 = 0xffffffff00000000;
        DAT_0531cb8c = 0xffffffff00000000;
        DAT_0531cb94 = 0xffffffff00000000;
        DAT_0531cb9c = 0xffffffff00000000;
        DAT_0531cba4 = 0xffffffff00000000;
        DAT_0531cbac = 0xffffffff00000000;
        DAT_0531cbb4 = 0xffffffff00000000;
        DAT_0531cbbc = 0xffffffff00000000;
        DAT_0531cbc4 = 0xffffffff00000000;
        DAT_0531cbcc = 0xffffffff00000000;
        DAT_0531cbd4 = 0xffffffff00000000;
        DAT_0531cbdc = 0xffffffff00000000;
        DAT_0531cbe4 = 0xffffffff00000000;
        DAT_0531cbec = 0xffffffff00000000;
        DAT_0531cbf4 = 0xffffffff00000000;
        DAT_0531cbfc = 0xffffffff00000000;
        DAT_0531cc04 = 0xffffffff00000000;
        DAT_0531cc0c = 0xffffffff00000000;
        DAT_0531cc14 = 0xffffffff00000000;
        DAT_0531cc1c = 0xffffffff00000000;
        DAT_0531cc24 = 0xffffffff00000000;
        DAT_0531cc2c = 0xffffffff00000000;
        DAT_0531cc34 = 0xffffffff00000000;
        DAT_0531cc3c = 0xffffffff00000000;
        DAT_0531cc44 = 0xffffffff00000000;
        DAT_0531cc4c = 0xffffffff00000000;
        DAT_0531cc54 = 0xffffffff00000000;
        DAT_0531cc5c = 0xffffffff00000000;
        DAT_0531cc64 = 0xffffffff00000000;
        DAT_0531cc6c = 0xffffffff00000000;
        DAT_0531cc74 = 0xffffffff00000000;
        DAT_0531cc7c = 0xffffffff00000000;
        DAT_0531cc84 = 0xffffffff00000000;
        DAT_0531cc8c = 0xffffffff00000000;
        DAT_0531cc94 = 0xffffffff00000000;
        DAT_0531c954 = 0xffffffff00000000;
        DAT_0531c95c = 0xffffffff00000000;
        DAT_0531c964 = 0xffffffff00000000;
        DAT_0531c96c = 0xffffffff00000000;
        DAT_0531c974 = 0xffffffff00000000;
        DAT_0531c97c = 0xffffffff00000000;
        DAT_0531c984 = 0xffffffff00000000;
        DAT_0531c98c = 0xffffffff00000000;
        DAT_0531c994 = 0xffffffff00000000;
        DAT_0531c99c = 0xffffffff00000000;
        DAT_0531c9a4 = 0xffffffff00000000;
        DAT_0531c9ac = 0xffffffff00000000;
        DAT_0531c9b4 = 0xffffffff00000000;
        DAT_0531c9bc = 0xffffffff00000000;
        DAT_0531c9c4 = 0xffffffff00000000;
        DAT_0531c9cc = 0xffffffff00000000;
        DAT_0531c9d4 = 0xffffffff00000000;
        DAT_0531c9dc = 0xffffffff00000000;
        DAT_0531c9e4 = 0xffffffff00000000;
        DAT_0531c9ec = 0xffffffff00000000;
        DAT_0531c9f4 = 0xffffffff00000000;
        DAT_0531c9fc = 0xffffffff00000000;
        DAT_0531ca04 = 0xffffffff00000000;
        DAT_0531ca0c = 0xffffffff00000000;
        DAT_0531ca14 = 0xffffffff00000000;
        DAT_0531ca1c = 0xffffffff00000000;
        DAT_0531ca24 = 0xffffffff00000000;
        DAT_0531ca2c = 0xffffffff00000000;
        DAT_0531ca34 = 0xffffffff00000000;
        DAT_0531ca3c = 0xffffffff00000000;
        DAT_0531ca44 = 0xffffffff00000000;
        DAT_0531ca4c = 0xffffffff00000000;
        DAT_0531ca54 = 0xffffffff00000000;
        DAT_0531ca5c = 0xffffffff00000000;
        DAT_0531ca64 = 0xffffffff00000000;
        DAT_0531ca6c = 0xffffffff00000000;
        DAT_0531ca74 = 0xffffffff00000000;
        DAT_0531ca7c = 0xffffffff00000000;
        DAT_0531ca84 = 0xffffffff00000000;
        DAT_0531ca8c = 0xffffffff00000000;
        DAT_0531ca94 = 0xffffffff00000000;
        DAT_0531ca9c = 0xffffffff00000000;
        DAT_0531caa4 = 0xffffffff00000000;
        DAT_0531caac = 0xffffffff00000000;
        DAT_0531cab4 = 0xffffffff00000000;
        DAT_0531cabc = 0xffffffff00000000;
        DAT_0531cac4 = 0xffffffff00000000;
        DAT_0531cacc = 0xffffffff00000000;
        DAT_0531cad4 = 0xffffffff00000000;
        DAT_0531cadc = 0xffffffff00000000;
        DAT_0531cae4 = 0xffffffff00000000;
        DAT_0531caec = 0xffffffff00000000;
        DAT_0531caf4 = 0xffffffff00000000;
        DAT_0531cafc = 0xffffffff00000000;
        DAT_0531cb04 = 0xffffffff00000000;
        DAT_0531cb0c = 0xffffffff00000000;
        DAT_0531cb14 = 0xffffffff00000000;
        DAT_0531cb1c = 0xffffffff00000000;
        DAT_0531cb24 = 0xffffffff00000000;
        DAT_0531cb2c = 0xffffffff00000000;
        DAT_0531cb34 = 0xffffffff00000000;
        DAT_0531cb3c = 0xffffffff00000000;
        __cxa_guard_release(&DAT_0531cca0);
      }
      lVar19 = 0;
      puVar1 = PTR_DAT_04bb4520 + 0x10;
      do {
        local_178 = 0x100;
        local_75 = 0;
        pbVar17 = (&PTR_DAT_04a2a9e0)[lVar19];
        if (local_174 != pbVar17) {
          lVar7 = 0;
          do {
            if (pbVar17[lVar7] == 0) {
LAB_01a8d4d4:
              iVar6 = (int)lVar7;
joined_r0x01a8d4d8:
              if (0xff < iVar6) {
                iVar6 = 0xff;
              }
              goto LAB_01a8d4e0;
            }
            if (pbVar17[lVar7 + 1] == 0) {
              lVar7 = lVar7 + 1;
              goto LAB_01a8d4d4;
            }
            if (pbVar17[lVar7 + 2] == 0) {
              iVar6 = (int)lVar7 + 2;
              goto joined_r0x01a8d4d8;
            }
            lVar7 = lVar7 + 3;
          } while (lVar7 != 0x80001);
          iVar6 = 0;
LAB_01a8d4e0:
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
        *(uint *)(&DAT_0531c944 + lVar19) = uVar9;
        *(int *)((long)&DAT_0531c944 + lVar19 * 8 + 4) = (int)lVar19;
        iVar6 = (int)DAT_0531c5d0;
        if ((int)DAT_0531c5d0 < DAT_0531c5d0._4_4_) {
          *(undefined8 **)(DAT_0531c5d8 + (long)(int)DAT_0531c5d0 * 8) = &DAT_0531c944 + lVar19;
          iVar6 = (int)DAT_0531c5d0 + 1;
          DAT_0531c5d0 = CONCAT44(DAT_0531c5d0._4_4_,iVar6);
        }
        puVar4 = DAT_0531c5d8;
        lVar19 = lVar19 + 1;
      } while (lVar19 != 0x6b);
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
                if (puVar12 != (uint *)0x0) goto LAB_01a8d760;
LAB_01a8d710:
                puVar12 = puVar16;
              }
              else {
                puVar15[-1] = puVar12;
                *puVar15 = puVar14;
                puVar16 = (uint *)puVar15[1];
                puVar12 = puVar14;
                uVar5 = uVar10;
                if (puVar14 == (uint *)0x0) goto LAB_01a8d710;
LAB_01a8d760:
                if (puVar16 == (uint *)0x0) goto LAB_01a8d710;
                if (*puVar12 <= *puVar16) goto LAB_01a8d710;
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
      DAT_0531c5cc = '\x01';
    }
    if ((param_2 == (char *)0x0) || (*param_2 != '\0')) {
      if ((DAT_0531c5cc == '\x01') && ((int)DAT_0531c5d0 != 0)) {
        if ((int)DAT_0531c5d0 < 2) {
          uVar5 = 0;
        }
        else {
          uVar5 = 0;
          iVar6 = (int)DAT_0531c5d0 + -1;
          do {
            iVar2 = iVar6 + uVar5;
            if (iVar2 < 0 != SCARRY4(iVar6,uVar5)) {
              iVar2 = iVar2 + 1;
            }
            uVar9 = iVar2 >> 1;
            if (*(uint **)(DAT_0531c5d8 + (long)(int)uVar9 * 8) == (uint *)0x0)
            goto joined_r0x01a8d7b0;
            uVar10 = **(uint **)(DAT_0531c5d8 + (long)(int)uVar9 * 8);
            if (uVar10 == param_1) goto joined_r0x01a8d7b0;
            if (uVar10 < param_1) {
              uVar5 = uVar9 + 1;
            }
            else {
              iVar6 = uVar9 - 1;
            }
          } while ((int)uVar5 < iVar6);
        }
        uVar9 = uVar5;
        if ((*(uint **)(DAT_0531c5d8 + (long)(int)uVar5 * 8) == (uint *)0x0) ||
           (**(uint **)(DAT_0531c5d8 + (long)(int)uVar5 * 8) == param_1)) {
joined_r0x01a8d7b0:
          if ((uVar9 < 0x6b) &&
             (uVar5 = *(uint *)(*(long *)(DAT_0531c5d8 + (ulong)uVar9 * 8) + 4), uVar5 < 0x6b)) {
            DAT_0531c5c0 = 1;
            DAT_0531c5c4 = param_1;
            DAT_0531c5c8 = uVar5;
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
          if (uVar5 < 0x6b) {
            pcVar18 = (&PTR_DAT_04a2a9e0)[uVar5];
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
          uVar9 = 0x6b;
          if ((int)uVar5 < 0x6b) {
            uVar9 = uVar5 + 1;
          }
          uVar5 = uVar9;
        } while (uVar9 != 0x6b);
      }
    }
    uVar5 = 0xffffffff;
  }
  return uVar5;
}


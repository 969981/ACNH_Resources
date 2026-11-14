
uint FUN_01a85690(uint param_1,char *param_2)

{
  undefined *puVar1;
  int iVar2;
  char cVar3;
  undefined *puVar4;
  undefined *puVar5;
  uint uVar6;
  int iVar7;
  long lVar8;
  ulong uVar9;
  uint uVar10;
  uint uVar11;
  ulong uVar12;
  uint *puVar13;
  ulong uVar14;
  uint *puVar15;
  undefined8 *puVar16;
  uint *puVar17;
  byte *pbVar18;
  char *pcVar19;
  long lVar20;
  undefined *local_188;
  byte *local_180;
  undefined4 local_178;
  byte local_174 [255];
  undefined1 local_75;
  
  if (DAT_0530c020 == '\x01' && DAT_0530c024 == param_1) {
    uVar6 = DAT_0530c028;
  }
  else {
    if (((DAT_0530c0b8 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_0530c0b8), iVar7 != 0)) {
      DAT_0530c030 = 0xf00000000;
      DAT_0530c038 = &DAT_0530c040;
      __cxa_guard_release(&DAT_0530c0b8);
    }
    if ((DAT_0530c0c0 & 1) == 0) {
      DAT_0530c0c0 = 1;
      if (((DAT_0530c140 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_0530c140), iVar7 != 0)) {
        DAT_0530c134 = 0xffffffff00000000;
        DAT_0530c0c4 = 0xffffffff00000000;
        DAT_0530c0cc = 0xffffffff00000000;
        DAT_0530c0d4 = 0xffffffff00000000;
        DAT_0530c0dc = 0xffffffff00000000;
        DAT_0530c0e4 = 0xffffffff00000000;
        DAT_0530c0ec = 0xffffffff00000000;
        DAT_0530c0f4 = 0xffffffff00000000;
        DAT_0530c0fc = 0xffffffff00000000;
        DAT_0530c104 = 0xffffffff00000000;
        DAT_0530c10c = 0xffffffff00000000;
        DAT_0530c114 = 0xffffffff00000000;
        DAT_0530c11c = 0xffffffff00000000;
        DAT_0530c124 = 0xffffffff00000000;
        DAT_0530c12c = 0xffffffff00000000;
        __cxa_guard_release(&DAT_0530c140);
      }
      puVar4 = PTR_s_Orange_04bb6b30;
      lVar20 = 0;
      puVar1 = PTR_DAT_04bb4520 + 0x10;
      do {
        local_178 = 0x100;
        local_75 = 0;
        pbVar18 = *(byte **)(puVar4 + lVar20 * 8 + 0x60);
        if (local_174 != pbVar18) {
          lVar8 = 0;
          do {
            if (pbVar18[lVar8] == 0) {
LAB_01a857c4:
              iVar7 = (int)lVar8;
joined_r0x01a857c8:
              if (0xff < iVar7) {
                iVar7 = 0xff;
              }
              goto LAB_01a857d0;
            }
            if (pbVar18[lVar8 + 1] == 0) {
              lVar8 = lVar8 + 1;
              goto LAB_01a857c4;
            }
            if (pbVar18[lVar8 + 2] == 0) {
              iVar7 = (int)lVar8 + 2;
              goto joined_r0x01a857c8;
            }
            lVar8 = lVar8 + 3;
          } while (lVar8 != 0x80001);
          iVar7 = 0;
LAB_01a857d0:
          local_188 = puVar1;
          local_180 = local_174;
          memcpy(local_174,pbVar18,(long)iVar7);
          local_174[iVar7] = 0;
        }
        uVar6 = (uint)*pbVar18;
        if (*pbVar18 == 0) {
          uVar10 = 0;
        }
        else {
          uVar10 = 0xffffffff;
          do {
            pbVar18 = pbVar18 + 1;
            uVar10 = crc32b(uVar10,uVar6,0x4c11db7);
            uVar6 = (uint)*pbVar18;
          } while (uVar6 != 0);
          uVar10 = ~uVar10;
        }
        *(uint *)(&DAT_0530c0c4 + lVar20) = uVar10;
        *(int *)((long)&DAT_0530c0c4 + lVar20 * 8 + 4) = (int)lVar20;
        iVar7 = (int)DAT_0530c030;
        if ((int)DAT_0530c030 < DAT_0530c030._4_4_) {
          *(undefined8 **)(DAT_0530c038 + (long)(int)DAT_0530c030 * 8) = &DAT_0530c0c4 + lVar20;
          iVar7 = (int)DAT_0530c030 + 1;
          DAT_0530c030 = CONCAT44(DAT_0530c030._4_4_,iVar7);
        }
        puVar5 = DAT_0530c038;
        lVar20 = lVar20 + 1;
      } while (lVar20 != 0xf);
      if (1 < iVar7) {
        uVar10 = 0;
        uVar6 = iVar7 - 1;
        do {
          if ((int)uVar6 <= (int)uVar10) break;
          puVar13 = *(uint **)(puVar5 + (ulong)uVar10 * 8);
          uVar9 = (ulong)uVar10;
          if ((uVar6 - uVar10 & 1) == 0) {
            uVar12 = uVar9;
            puVar15 = puVar13;
          }
          else {
            uVar12 = uVar9 + 1;
            puVar15 = *(uint **)(puVar5 + uVar12 * 8);
            if (((puVar13 != (uint *)0x0) && (puVar15 != (uint *)0x0)) && (*puVar15 < *puVar13)) {
              *(uint **)(puVar5 + uVar12 * 8) = puVar13;
              *(uint **)(puVar5 + uVar9 * 8) = puVar15;
              puVar15 = puVar13;
            }
          }
          uVar14 = (ulong)uVar6;
          uVar6 = uVar10;
          if (~uVar9 + uVar14 != 0) {
            puVar16 = (undefined8 *)(puVar5 + uVar12 * 8 + 8);
            do {
              puVar13 = (uint *)*puVar16;
              uVar11 = (uint)uVar12;
              if (((puVar15 == (uint *)0x0) || (puVar13 == (uint *)0x0)) || (*puVar15 <= *puVar13))
              {
                puVar17 = (uint *)puVar16[1];
                if (puVar13 != (uint *)0x0) goto LAB_01a85a50;
LAB_01a85a00:
                puVar13 = puVar17;
              }
              else {
                puVar16[-1] = puVar13;
                *puVar16 = puVar15;
                puVar17 = (uint *)puVar16[1];
                puVar13 = puVar15;
                uVar6 = uVar11;
                if (puVar15 == (uint *)0x0) goto LAB_01a85a00;
LAB_01a85a50:
                if (puVar17 == (uint *)0x0) goto LAB_01a85a00;
                if (*puVar13 <= *puVar17) goto LAB_01a85a00;
                uVar6 = uVar11 + 1;
                *puVar16 = puVar17;
                puVar16[1] = puVar13;
              }
              uVar12 = uVar12 + 2;
              puVar16 = puVar16 + 2;
              puVar15 = puVar13;
            } while (uVar14 != uVar12);
          }
          if ((int)uVar6 <= (int)uVar10) break;
          uVar12 = (ulong)uVar6;
          puVar13 = *(uint **)(puVar5 + (ulong)uVar6 * 8);
          uVar10 = uVar6;
          do {
            puVar15 = *(uint **)(puVar5 + uVar12 * 8 + -8);
            if (((puVar13 != (uint *)0x0) && (puVar15 != (uint *)0x0)) && (*puVar13 < *puVar15)) {
              uVar10 = (uint)uVar12;
              *(uint **)(puVar5 + uVar12 * 8 + -8) = puVar13;
              *(uint **)(puVar5 + uVar12 * 8) = puVar15;
              puVar15 = puVar13;
            }
            uVar12 = uVar12 - 1;
            puVar13 = puVar15;
          } while ((long)uVar9 < (long)uVar12);
        } while (uVar10 != uVar6);
      }
      DAT_0530c02c = '\x01';
    }
    puVar1 = PTR_s_Orange_04bb6b30;
    if ((param_2 == (char *)0x0) || (*param_2 != '\0')) {
      if ((DAT_0530c02c == '\x01') && ((int)DAT_0530c030 != 0)) {
        if ((int)DAT_0530c030 < 2) {
          uVar6 = 0;
        }
        else {
          uVar6 = 0;
          iVar7 = (int)DAT_0530c030 + -1;
          do {
            iVar2 = iVar7 + uVar6;
            if (iVar2 < 0 != SCARRY4(iVar7,uVar6)) {
              iVar2 = iVar2 + 1;
            }
            uVar10 = iVar2 >> 1;
            if (*(uint **)(DAT_0530c038 + (long)(int)uVar10 * 8) == (uint *)0x0)
            goto joined_r0x01a85aa0;
            uVar11 = **(uint **)(DAT_0530c038 + (long)(int)uVar10 * 8);
            if (uVar11 == param_1) goto joined_r0x01a85aa0;
            if (uVar11 < param_1) {
              uVar6 = uVar10 + 1;
            }
            else {
              iVar7 = uVar10 - 1;
            }
          } while ((int)uVar6 < iVar7);
        }
        uVar10 = uVar6;
        if ((*(uint **)(DAT_0530c038 + (long)(int)uVar6 * 8) == (uint *)0x0) ||
           (**(uint **)(DAT_0530c038 + (long)(int)uVar6 * 8) == param_1)) {
joined_r0x01a85aa0:
          if ((uVar10 < 0xf) &&
             (uVar6 = *(uint *)(*(long *)(DAT_0530c038 + (ulong)uVar10 * 8) + 4), uVar6 < 0xf)) {
            DAT_0530c020 = 1;
            DAT_0530c024 = param_1;
            DAT_0530c028 = uVar6;
            return uVar6;
          }
        }
      }
      if (param_2 != (char *)0x0) {
        local_188 = PTR_DAT_04bb2020 + 0x10;
        uVar6 = 0;
        local_180 = (byte *)param_2;
        do {
          pcVar19 = "";
          if (uVar6 < 0xf) {
            pcVar19 = *(char **)(puVar1 + (ulong)uVar6 * 8 + 0x60);
          }
          (**(code **)(local_188 + 0x18))(&local_188);
          if ((byte *)pcVar19 == local_180) {
            return uVar6;
          }
          if (*pcVar19 == *local_180) {
            if (*pcVar19 == '\0') {
              return uVar6;
            }
            lVar20 = 0x7fffe;
            pbVar18 = local_180;
            while( true ) {
              if (pcVar19[1] != pbVar18[1]) break;
              if (pcVar19[1] == '\0') {
                return uVar6;
              }
              if (pcVar19[2] != pbVar18[2]) break;
              if (pcVar19[2] == '\0') {
                return uVar6;
              }
              if ((lVar20 == 0) || (cVar3 = pcVar19[3], cVar3 != pbVar18[3])) break;
              lVar20 = lVar20 + -3;
              pbVar18 = pbVar18 + 3;
              pcVar19 = pcVar19 + 3;
              if (cVar3 == '\0') {
                return uVar6;
              }
            }
          }
          uVar10 = 0xf;
          if ((int)uVar6 < 0xf) {
            uVar10 = uVar6 + 1;
          }
          uVar6 = uVar10;
        } while (uVar10 != 0xf);
      }
    }
    uVar6 = 0xffffffff;
  }
  return uVar6;
}


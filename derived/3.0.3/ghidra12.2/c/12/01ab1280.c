
uint FUN_01ab1280(long *param_1)

{
  int iVar1;
  char cVar2;
  undefined *puVar3;
  undefined *puVar4;
  uint uVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  undefined8 *puVar9;
  byte *pbVar10;
  ulong uVar11;
  uint uVar12;
  uint uVar13;
  ulong uVar14;
  uint *puVar15;
  ulong uVar16;
  uint *puVar17;
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
      if (*(char *)(param_1[1] + lVar7) == '\0') goto LAB_01ab133c;
      lVar8 = param_1[1] + lVar7;
      if (*(char *)(lVar8 + 1) == '\0') {
        lVar7 = lVar7 + 1;
        goto LAB_01ab133c;
      }
      if (*(char *)(lVar8 + 2) == '\0') {
        lVar7 = lVar7 + 2;
        goto LAB_01ab133c;
      }
      lVar7 = lVar7 + 3;
    } while (lVar7 != 0x80001);
    lVar7 = 0;
LAB_01ab133c:
    iVar6 = (int)lVar7;
    if (0xff < (int)lVar7) {
      iVar6 = 0xff;
    }
    memcpy(auStack_29c,__src,(long)iVar6);
    auStack_29c[iVar6] = 0;
  }
  (**(code **)(*param_1 + 0x18))(param_1);
  pbVar10 = (byte *)param_1[1];
  uVar5 = (uint)*pbVar10;
  if (*pbVar10 == 0) {
    uVar19 = 0;
  }
  else {
    uVar19 = 0xffffffff;
    do {
      pbVar10 = pbVar10 + 1;
      uVar19 = crc32b(uVar19,uVar5,0x4c11db7);
      uVar5 = (uint)*pbVar10;
    } while (uVar5 != 0);
    uVar19 = ~uVar19;
  }
  local_198 = uVar19;
  (**(code **)(*param_1 + 0x18))(param_1);
  pcVar20 = (char *)param_1[1];
  if ((DAT_05323f48 == '\x01') && (DAT_05323f4c == uVar19)) {
    uVar5 = DAT_05323f50;
  }
  else {
    if (((DAT_05324648 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_05324648), iVar6 != 0)) {
      DAT_05323f58 = 0xdc00000000;
      DAT_05323f60 = &DAT_05323f68;
      __cxa_guard_release(&DAT_05324648);
    }
    if ((DAT_05324650 & 1) == 0) {
      DAT_05324650 = 1;
      if (((DAT_05324d38 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_05324d38), iVar6 != 0)) {
        puVar9 = &DAT_05324654;
        do {
          *puVar9 = 0xffffffff00000000;
          puVar9[1] = 0xffffffff00000000;
          puVar9[4] = 0xffffffff00000000;
          puVar9[2] = 0xffffffff00000000;
          puVar9[3] = 0xffffffff00000000;
          puVar9 = puVar9 + 5;
        } while (puVar9 != (undefined8 *)0x5324d34);
        __cxa_guard_release(&DAT_05324d38);
      }
      lVar7 = 0;
      do {
        local_178 = 0x100;
        local_75 = 0;
        pbVar10 = (&PTR_DAT_04a34268)[lVar7];
        if (local_174 != pbVar10) {
          lVar8 = 0;
          do {
            if (pbVar10[lVar8] == 0) {
LAB_01ab14d8:
              iVar6 = (int)lVar8;
joined_r0x01ab14dc:
              if (0xff < iVar6) {
                iVar6 = 0xff;
              }
              goto LAB_01ab14e4;
            }
            if (pbVar10[lVar8 + 1] == 0) {
              lVar8 = lVar8 + 1;
              goto LAB_01ab14d8;
            }
            if (pbVar10[lVar8 + 2] == 0) {
              iVar6 = (int)lVar8 + 2;
              goto joined_r0x01ab14dc;
            }
            lVar8 = lVar8 + 3;
          } while (lVar8 != 0x80001);
          iVar6 = 0;
LAB_01ab14e4:
          local_188 = puVar3 + 0x10;
          local_180 = local_174;
          memcpy(local_174,pbVar10,(long)iVar6);
          local_174[iVar6] = 0;
        }
        uVar5 = (uint)*pbVar10;
        if (*pbVar10 == 0) {
          uVar12 = 0;
        }
        else {
          uVar12 = 0xffffffff;
          do {
            pbVar10 = pbVar10 + 1;
            uVar12 = crc32b(uVar12,uVar5,0x4c11db7);
            uVar5 = (uint)*pbVar10;
          } while (uVar5 != 0);
          uVar12 = ~uVar12;
        }
        *(uint *)(&DAT_05324654 + lVar7) = uVar12;
        *(int *)((long)&DAT_05324654 + lVar7 * 8 + 4) = (int)lVar7;
        iVar6 = (int)DAT_05323f58;
        if ((int)DAT_05323f58 < DAT_05323f58._4_4_) {
          *(undefined8 **)(DAT_05323f60 + (long)(int)DAT_05323f58 * 8) = &DAT_05324654 + lVar7;
          iVar6 = (int)DAT_05323f58 + 1;
          DAT_05323f58 = CONCAT44(DAT_05323f58._4_4_,iVar6);
        }
        puVar4 = DAT_05323f60;
        lVar7 = lVar7 + 1;
      } while (lVar7 != 0xdc);
      if (1 < iVar6) {
        uVar12 = 0;
        uVar5 = iVar6 - 1;
        do {
          if ((int)uVar5 <= (int)uVar12) break;
          puVar15 = *(uint **)(puVar4 + (ulong)uVar12 * 8);
          uVar11 = (ulong)uVar12;
          if ((uVar5 - uVar12 & 1) == 0) {
            uVar14 = uVar11;
            puVar17 = puVar15;
          }
          else {
            uVar14 = uVar11 + 1;
            puVar17 = *(uint **)(puVar4 + uVar14 * 8);
            if (((puVar15 != (uint *)0x0) && (puVar17 != (uint *)0x0)) && (*puVar17 < *puVar15)) {
              *(uint **)(puVar4 + uVar14 * 8) = puVar15;
              *(uint **)(puVar4 + uVar11 * 8) = puVar17;
              puVar17 = puVar15;
            }
          }
          uVar16 = (ulong)uVar5;
          uVar5 = uVar12;
          if (~uVar11 + uVar16 != 0) {
            puVar9 = (undefined8 *)(puVar4 + uVar14 * 8 + 8);
            do {
              puVar15 = (uint *)*puVar9;
              uVar13 = (uint)uVar14;
              if (((puVar17 == (uint *)0x0) || (puVar15 == (uint *)0x0)) || (*puVar17 <= *puVar15))
              {
                puVar18 = (uint *)puVar9[1];
                if (puVar15 != (uint *)0x0) goto LAB_01ab1750;
LAB_01ab1700:
                puVar15 = puVar18;
              }
              else {
                puVar9[-1] = puVar15;
                *puVar9 = puVar17;
                puVar18 = (uint *)puVar9[1];
                puVar15 = puVar17;
                uVar5 = uVar13;
                if (puVar17 == (uint *)0x0) goto LAB_01ab1700;
LAB_01ab1750:
                if (puVar18 == (uint *)0x0) goto LAB_01ab1700;
                if (*puVar15 <= *puVar18) goto LAB_01ab1700;
                uVar5 = uVar13 + 1;
                *puVar9 = puVar18;
                puVar9[1] = puVar15;
              }
              uVar14 = uVar14 + 2;
              puVar9 = puVar9 + 2;
              puVar17 = puVar15;
            } while (uVar16 != uVar14);
          }
          if ((int)uVar5 <= (int)uVar12) break;
          uVar14 = (ulong)uVar5;
          puVar15 = *(uint **)(puVar4 + (ulong)uVar5 * 8);
          uVar12 = uVar5;
          do {
            puVar17 = *(uint **)(puVar4 + uVar14 * 8 + -8);
            if (((puVar15 != (uint *)0x0) && (puVar17 != (uint *)0x0)) && (*puVar15 < *puVar17)) {
              uVar12 = (uint)uVar14;
              *(uint **)(puVar4 + uVar14 * 8 + -8) = puVar15;
              *(uint **)(puVar4 + uVar14 * 8) = puVar17;
              puVar17 = puVar15;
            }
            uVar14 = uVar14 - 1;
            puVar15 = puVar17;
          } while ((long)uVar11 < (long)uVar14);
        } while (uVar12 != uVar5);
      }
      DAT_05323f54 = '\x01';
    }
    if ((pcVar20 == (char *)0x0) || (*pcVar20 != '\0')) {
      if ((DAT_05323f54 == '\x01') && ((int)DAT_05323f58 != 0)) {
        if ((int)DAT_05323f58 < 2) {
          uVar5 = 0;
        }
        else {
          uVar5 = 0;
          iVar6 = (int)DAT_05323f58 + -1;
          do {
            iVar1 = iVar6 + uVar5;
            if (iVar1 < 0 != SCARRY4(iVar6,uVar5)) {
              iVar1 = iVar1 + 1;
            }
            uVar12 = iVar1 >> 1;
            if (*(uint **)(DAT_05323f60 + (long)(int)uVar12 * 8) == (uint *)0x0)
            goto joined_r0x01ab17a0;
            uVar13 = **(uint **)(DAT_05323f60 + (long)(int)uVar12 * 8);
            if (uVar13 == uVar19) goto joined_r0x01ab17a0;
            if (uVar13 < uVar19) {
              uVar5 = uVar12 + 1;
            }
            else {
              iVar6 = uVar12 - 1;
            }
          } while ((int)uVar5 < iVar6);
        }
        uVar12 = uVar5;
        if ((*(uint **)(DAT_05323f60 + (long)(int)uVar5 * 8) == (uint *)0x0) ||
           (**(uint **)(DAT_05323f60 + (long)(int)uVar5 * 8) == uVar19)) {
joined_r0x01ab17a0:
          if ((uVar12 < 0xdc) &&
             (uVar5 = *(uint *)(*(long *)(DAT_05323f60 + (ulong)uVar12 * 8) + 4), uVar5 < 0xdc)) {
            DAT_05323f48 = 1;
            DAT_05323f4c = uVar19;
            DAT_05323f50 = uVar5;
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
          if (uVar5 < 0xdc) {
            pcVar20 = (&PTR_DAT_04a34268)[uVar5];
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
            pbVar10 = local_180;
            while( true ) {
              if (pcVar20[1] != pbVar10[1]) break;
              if (pcVar20[1] == '\0') {
                return uVar5;
              }
              if (pcVar20[2] != pbVar10[2]) break;
              if (pcVar20[2] == '\0') {
                return uVar5;
              }
              if ((lVar7 == 0) || (cVar2 = pcVar20[3], cVar2 != pbVar10[3])) break;
              lVar7 = lVar7 + -3;
              pbVar10 = pbVar10 + 3;
              pcVar20 = pcVar20 + 3;
              if (cVar2 == '\0') {
                return uVar5;
              }
            }
          }
          uVar19 = 0xdc;
          if ((int)uVar5 < 0xdc) {
            uVar19 = uVar5 + 1;
          }
          uVar5 = uVar19;
        } while (uVar19 != 0xdc);
      }
    }
    uVar5 = 0xffffffff;
  }
  return uVar5;
}


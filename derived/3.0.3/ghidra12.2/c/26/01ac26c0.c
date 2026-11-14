
/* WARNING: Type propagation algorithm not settling */

uint FUN_01ac26c0(uint param_1,char *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  uint *puVar4;
  char cVar5;
  undefined1 *puVar6;
  undefined *puVar7;
  uint uVar8;
  int iVar9;
  long lVar10;
  long lVar11;
  uint *puVar12;
  ulong uVar13;
  uint uVar14;
  uint uVar15;
  ulong uVar16;
  ulong uVar17;
  uint *puVar18;
  undefined8 *puVar19;
  uint *puVar20;
  byte *pbVar21;
  char *pcVar22;
  undefined *local_188;
  byte *local_180;
  undefined4 local_178;
  byte local_174 [255];
  undefined1 local_75;
  
  puVar4 = (uint *)PTR_DAT_04bc03a0;
  puVar6 = PTR_DAT_04bc0398;
  if (*PTR_DAT_04bc0398 != '\0' && *(uint *)PTR_DAT_04bc03a0 == param_1) {
    return *(uint *)PTR_DAT_04bc03a8;
  }
  if ((*PTR_DAT_04bc03c0 & 1) == 0) {
    iVar9 = __cxa_guard_acquire(PTR_DAT_04bc03c0);
    puVar1 = PTR_DAT_04bc03b8;
    if (iVar9 != 0) {
      puVar2 = PTR_DAT_04bc03b8 + 0x10;
      *(undefined8 *)PTR_DAT_04bc03b8 = 0xd00000000;
      *(undefined **)(puVar1 + 8) = puVar2;
      __cxa_guard_release(PTR_DAT_04bc03c0);
    }
  }
  pcVar22 = PTR_DAT_04bc03b0;
  puVar1 = PTR_DAT_04bc03e0;
  if (*PTR_DAT_04bc03c8 == '\0') {
    *PTR_DAT_04bc03c8 = 1;
    if ((*PTR_DAT_04bc03d8 & 1) == 0) {
      iVar9 = __cxa_guard_acquire(PTR_DAT_04bc03d8);
      puVar1 = PTR_DAT_04bc03d0;
      if (iVar9 != 0) {
        *(undefined8 *)PTR_DAT_04bc03d0 = 0xffffffff00000000;
        *(undefined8 *)(puVar1 + 8) = 0xffffffff00000000;
        *(undefined8 *)(puVar1 + 0x10) = 0xffffffff00000000;
        *(undefined8 *)(puVar1 + 0x18) = 0xffffffff00000000;
        *(undefined8 *)(puVar1 + 0x60) = 0xffffffff00000000;
        *(undefined8 *)(puVar1 + 0x20) = 0xffffffff00000000;
        *(undefined8 *)(puVar1 + 0x28) = 0xffffffff00000000;
        *(undefined8 *)(puVar1 + 0x30) = 0xffffffff00000000;
        *(undefined8 *)(puVar1 + 0x38) = 0xffffffff00000000;
        *(undefined8 *)(puVar1 + 0x40) = 0xffffffff00000000;
        *(undefined8 *)(puVar1 + 0x48) = 0xffffffff00000000;
        *(undefined8 *)(puVar1 + 0x50) = 0xffffffff00000000;
        *(undefined8 *)(puVar1 + 0x58) = 0xffffffff00000000;
        __cxa_guard_release(PTR_DAT_04bc03d8);
      }
    }
    puVar7 = PTR_DAT_04bc03e0;
    puVar2 = PTR_DAT_04bc03b8;
    lVar11 = 0;
    puVar1 = PTR_DAT_04bb4520 + 0x10;
    do {
      local_178 = 0x100;
      local_75 = 0;
      pbVar21 = *(byte **)(puVar7 + lVar11 * 8 + 0xb0);
      if (local_174 != pbVar21) {
        lVar10 = 0;
        do {
          if (pbVar21[lVar10] == 0) {
LAB_01ac2814:
            iVar9 = (int)lVar10;
joined_r0x01ac2818:
            if (0xff < iVar9) {
              iVar9 = 0xff;
            }
            goto LAB_01ac2820;
          }
          if (pbVar21[lVar10 + 1] == 0) {
            lVar10 = lVar10 + 1;
            goto LAB_01ac2814;
          }
          if (pbVar21[lVar10 + 2] == 0) {
            iVar9 = (int)lVar10 + 2;
            goto joined_r0x01ac2818;
          }
          lVar10 = lVar10 + 3;
        } while (lVar10 != 0x80001);
        iVar9 = 0;
LAB_01ac2820:
        local_188 = puVar1;
        local_180 = local_174;
        memcpy(local_174,pbVar21,(long)iVar9);
        local_174[iVar9] = 0;
      }
      uVar8 = (uint)*pbVar21;
      if (*pbVar21 == 0) {
        uVar14 = 0;
      }
      else {
        uVar14 = 0xffffffff;
        do {
          pbVar21 = pbVar21 + 1;
          uVar14 = crc32b(uVar14,uVar8,0x4c11db7);
          uVar8 = (uint)*pbVar21;
        } while (uVar8 != 0);
        uVar14 = ~uVar14;
      }
      puVar4 = (uint *)(PTR_DAT_04bc03d0 + lVar11 * 8);
      *puVar4 = uVar14;
      puVar4[1] = (uint)lVar11;
      iVar9 = *(int *)puVar2;
      if (iVar9 < *(int *)(puVar2 + 4)) {
        *(uint **)(*(long *)(puVar2 + 8) + (long)iVar9 * 8) = puVar4;
        iVar9 = *(int *)puVar2 + 1;
        *(int *)puVar2 = iVar9;
      }
      puVar4 = (uint *)PTR_DAT_04bc03a0;
      puVar6 = PTR_DAT_04bc0398;
      lVar11 = lVar11 + 1;
    } while (lVar11 != 0xd);
    if (1 < iVar9) {
      lVar11 = *(long *)(puVar2 + 8);
      uVar14 = 0;
      uVar8 = iVar9 - 1;
      do {
        if ((int)uVar8 <= (int)uVar14) break;
        puVar12 = *(uint **)(lVar11 + (ulong)uVar14 * 8);
        uVar13 = (ulong)uVar14;
        if ((uVar8 - uVar14 & 1) == 0) {
          uVar16 = uVar13;
          puVar18 = puVar12;
        }
        else {
          uVar16 = uVar13 + 1;
          puVar18 = *(uint **)(lVar11 + uVar16 * 8);
          if (((puVar12 != (uint *)0x0) && (puVar18 != (uint *)0x0)) && (*puVar18 < *puVar12)) {
            *(uint **)(lVar11 + uVar16 * 8) = puVar12;
            *(uint **)(lVar11 + uVar13 * 8) = puVar18;
            puVar18 = puVar12;
          }
        }
        uVar17 = (ulong)uVar8;
        uVar8 = uVar14;
        if (~uVar13 + uVar17 != 0) {
          puVar19 = (undefined8 *)(lVar11 + 8 + uVar16 * 8);
          do {
            puVar12 = (uint *)*puVar19;
            uVar15 = (uint)uVar16;
            if (((puVar18 == (uint *)0x0) || (puVar12 == (uint *)0x0)) || (*puVar18 <= *puVar12)) {
              puVar20 = (uint *)puVar19[1];
              if (puVar12 != (uint *)0x0) goto LAB_01ac2aa0;
LAB_01ac2a50:
              puVar12 = puVar20;
            }
            else {
              puVar19[-1] = puVar12;
              *puVar19 = puVar18;
              puVar20 = (uint *)puVar19[1];
              puVar12 = puVar18;
              uVar8 = uVar15;
              if (puVar18 == (uint *)0x0) goto LAB_01ac2a50;
LAB_01ac2aa0:
              if (puVar20 == (uint *)0x0) goto LAB_01ac2a50;
              if (*puVar12 <= *puVar20) goto LAB_01ac2a50;
              uVar8 = uVar15 + 1;
              *puVar19 = puVar20;
              puVar19[1] = puVar12;
            }
            uVar16 = uVar16 + 2;
            puVar19 = puVar19 + 2;
            puVar18 = puVar12;
          } while (uVar17 != uVar16);
        }
        if ((int)uVar8 <= (int)uVar14) break;
        uVar16 = (ulong)uVar8;
        puVar12 = *(uint **)(lVar11 + (ulong)uVar8 * 8);
        uVar14 = uVar8;
        do {
          lVar10 = lVar11 + uVar16 * 8;
          puVar18 = *(uint **)(lVar10 + -8);
          if (((puVar12 != (uint *)0x0) && (puVar18 != (uint *)0x0)) && (*puVar12 < *puVar18)) {
            uVar14 = (uint)uVar16;
            *(uint **)(lVar10 + -8) = puVar12;
            *(uint **)(lVar11 + uVar16 * 8) = puVar18;
            puVar18 = puVar12;
          }
          uVar16 = uVar16 - 1;
          puVar12 = puVar18;
        } while ((long)uVar13 < (long)uVar16);
      } while (uVar14 != uVar8);
    }
    pcVar22 = PTR_DAT_04bc03b0;
    *PTR_DAT_04bc03b0 = 1;
    puVar1 = PTR_DAT_04bc03e0;
  }
  PTR_DAT_04bc03e0 = puVar1;
  if ((param_2 == (char *)0x0) || (*param_2 != '\0')) {
    if ((*pcVar22 != '\0') && (iVar9 = *(int *)PTR_DAT_04bc03b8, iVar9 != 0)) {
      lVar11 = *(long *)((long)PTR_DAT_04bc03b8 + 8);
      if (iVar9 < 2) {
        uVar8 = 0;
      }
      else {
        uVar8 = 0;
        iVar9 = iVar9 + -1;
        do {
          iVar3 = iVar9 + uVar8;
          if (iVar3 < 0 != SCARRY4(iVar9,uVar8)) {
            iVar3 = iVar3 + 1;
          }
          uVar14 = iVar3 >> 1;
          puVar12 = *(uint **)(lVar11 + (long)(int)uVar14 * 8);
          if (puVar12 == (uint *)0x0) goto joined_r0x01ac2af0;
          uVar15 = *puVar12;
          if (uVar15 == param_1) goto joined_r0x01ac2af0;
          if (uVar15 < param_1) {
            uVar8 = uVar14 + 1;
          }
          else {
            iVar9 = uVar14 - 1;
          }
        } while ((int)uVar8 < iVar9);
      }
      puVar12 = *(uint **)(lVar11 + (long)(int)uVar8 * 8);
      uVar14 = uVar8;
      if ((puVar12 == (uint *)0x0) || (*puVar12 == param_1)) {
joined_r0x01ac2af0:
        if ((uVar14 < 0xd) &&
           (uVar8 = *(uint *)(*(long *)(lVar11 + (ulong)uVar14 * 8) + 4), uVar8 < 0xd)) {
          *puVar4 = param_1;
          *puVar6 = 1;
          *(uint *)PTR_DAT_04bc03a8 = uVar8;
          return uVar8;
        }
      }
    }
    if (param_2 != (char *)0x0) {
      local_188 = PTR_DAT_04bb2020 + 0x10;
      uVar8 = 0;
      local_180 = (byte *)param_2;
      do {
        pcVar22 = "";
        if (uVar8 < 0xd) {
          pcVar22 = *(char **)(puVar1 + (ulong)uVar8 * 8 + 0xb0);
        }
        (**(code **)(local_188 + 0x18))(&local_188);
        if ((byte *)pcVar22 == local_180) {
          return uVar8;
        }
        if (*pcVar22 == *local_180) {
          if (*pcVar22 == '\0') {
            return uVar8;
          }
          lVar11 = 0x7fffe;
          pbVar21 = local_180;
          while( true ) {
            if (pcVar22[1] != pbVar21[1]) break;
            if (pcVar22[1] == '\0') {
              return uVar8;
            }
            if (pcVar22[2] != pbVar21[2]) break;
            if (pcVar22[2] == '\0') {
              return uVar8;
            }
            if ((lVar11 == 0) || (cVar5 = pcVar22[3], cVar5 != pbVar21[3])) break;
            lVar11 = lVar11 + -3;
            pbVar21 = pbVar21 + 3;
            pcVar22 = pcVar22 + 3;
            if (cVar5 == '\0') {
              return uVar8;
            }
          }
        }
        uVar14 = 0xd;
        if ((int)uVar8 < 0xd) {
          uVar14 = uVar8 + 1;
        }
        uVar8 = uVar14;
      } while (uVar14 != 0xd);
    }
  }
  return 0xffffffff;
}


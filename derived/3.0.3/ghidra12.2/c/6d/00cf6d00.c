
void FUN_00cf6d00(long param_1,uint param_2)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  undefined8 ****ppppuVar6;
  bool bVar7;
  byte bVar8;
  undefined4 uVar9;
  int iVar10;
  ulong uVar11;
  uint uVar12;
  byte *pbVar13;
  long lVar14;
  byte *pbVar15;
  byte *pbVar16;
  undefined8 *puVar17;
  long ****pppplVar18;
  uint uVar19;
  long lVar20;
  int iVar21;
  undefined8 *puVar22;
  byte bVar23;
  ulong uVar24;
  long ****pppplVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  byte local_174 [4];
  undefined4 local_170;
  undefined4 uStack_16c;
  undefined8 local_168;
  undefined4 local_160;
  undefined4 local_15c;
  undefined4 uStack_158;
  undefined2 local_154;
  ulong local_150;
  float local_148;
  byte local_144 [4];
  long ***local_140;
  long ****local_138;
  long ****local_130;
  int local_128;
  undefined8 ****local_120;
  undefined8 ****ppppuStack_118;
  int local_110;
  undefined8 ***local_108 [3];
  undefined8 **local_f0 [3];
  undefined8 *local_d8 [3];
  undefined8 local_c0 [4];
  
  local_128 = 0;
  local_108[0] = local_f0;
  local_120 = local_108;
  local_c0[0] = 0;
  local_f0[0] = local_d8;
  local_d8[0] = local_c0;
  local_110 = 4;
  local_138 = (long ****)&local_138;
  local_130 = (long ****)&local_138;
  ppppuStack_118 = local_120;
  FUN_02507c6c(local_144,1,1,0,0);
  puVar4 = PTR_DAT_04bb5038;
  pbVar13 = PTR_DAT_04bb32e0;
  uVar12 = (uint)local_144[0];
  if (local_144[0] < 8) {
    do {
      ppppuVar6 = local_120;
      lVar20 = *(long *)PTR_DAT_04bb39b0;
      pbVar16 = pbVar13;
      if (lVar20 == 0) {
        if (7 < *pbVar13) goto LAB_00cf6e14;
LAB_00cf6e80:
        uVar19 = (uint)*pbVar16;
        if (7 < uVar19) {
          uVar19 = 0xff;
        }
      }
      else {
        if (*(int *)(lVar20 + 0x15c) != 0) {
          pbVar16 = (byte *)(lVar20 + 0x158);
        }
        if ((*pbVar16 < 8) ||
           (((*(int *)(lVar20 + 0x15c) != 0 && (*(long *)PTR_DAT_04bb4718 != 0)) &&
            (pbVar16 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5), *pbVar16 < 8))))
        goto LAB_00cf6e80;
LAB_00cf6e14:
        pbVar16 = puVar4;
        if (*(long **)PTR_DAT_04bb27d0 == (long *)0x0) goto LAB_00cf6e80;
        lVar20 = **(long **)PTR_DAT_04bb27d0;
        bVar8 = *(byte *)(lVar20 + 0x473);
        pbVar15 = puVar4;
        if ((long)(char)bVar8 != 0xffffffffffffffff) {
          puVar1 = (uint *)(lVar20 + 0x48) + ((long)(char)bVar8 & 0xffffffffU) * 0x20;
          if (7 < bVar8) {
            puVar1 = (uint *)(lVar20 + 0x48);
          }
          if ((*puVar1 & 8) != 0) {
            pbVar15 = (byte *)(lVar20 + 0x471);
          }
        }
        uVar19 = (uint)*pbVar15;
        if (7 < *pbVar15) goto LAB_00cf6e80;
      }
      if (uVar19 < 8 && uVar19 == uVar12) {
        if (local_128 < local_110) {
          if (local_120 != (undefined8 ****)0x0) {
            local_120 = (undefined8 ****)*local_120;
          }
          *(char *)ppppuVar6 = (char)uVar12;
          ppppuVar6[2] = (undefined8 ***)0x0;
          pppplVar18 = ppppuVar6 + 1;
          *pppplVar18 = (long ***)0x0;
          *pppplVar18 = (long ***)&local_138;
          ppppuVar6[2] = local_130;
          pppplVar25 = local_138;
          if (local_130 != (long ****)0x0) {
            *local_130 = (long ***)pppplVar18;
            local_130 = pppplVar18;
            pppplVar25 = local_138;
            pppplVar18 = local_130;
          }
          goto LAB_00cf6f20;
        }
      }
      else if (local_128 < local_110) {
        if (local_120 != (undefined8 ****)0x0) {
          local_120 = (undefined8 ****)*local_120;
        }
        *(char *)ppppuVar6 = (char)uVar12;
        pppplVar25 = ppppuVar6 + 1;
        *pppplVar25 = (long ***)0x0;
        ppppuVar6[2] = &local_138;
        *pppplVar25 = (long ***)local_138;
        pppplVar18 = local_130;
        if (local_138 != (long ****)0x0) {
          local_138[1] = (long ***)pppplVar25;
          pppplVar18 = local_130;
        }
LAB_00cf6f20:
        local_130 = pppplVar18;
        local_138 = pppplVar25;
        local_128 = local_128 + 1;
        uVar12 = (uint)local_144[0];
        if (7 < uVar12) goto LAB_00cf6f78;
      }
      uVar24 = (ulong)uVar12;
      do {
        if (uVar24 == 7) goto LAB_00cf6f70;
        uVar24 = uVar24 + 1;
        uVar11 = FUN_02507924(local_144,puVar4 + uVar24);
      } while ((uVar11 & 1) == 0);
      local_144[0] = puVar4[uVar24];
      uVar12 = (uint)local_144[0];
    } while (uVar12 < 8);
LAB_00cf6f70:
    local_144[0] = 0xff;
  }
LAB_00cf6f78:
  iVar5 = local_128;
  local_148 = 0.0;
  local_150 = 0;
  iVar2 = *(int *)(*(long *)PTR_DAT_04bb5c90 + 0x80);
  iVar3 = *(int *)(*(long *)PTR_DAT_04bb5c90 + 0x84);
  iVar21 = 0x144f907a;
  if ((param_2 & 1) == 0) {
    iVar21 = 0x2ec94ec5;
  }
  if (((*PTR_DAT_04bb3998 & 1) == 0) &&
     (iVar10 = __cxa_guard_acquire(PTR_DAT_04bb3998), iVar10 != 0)) {
    FUN_00773950(PTR_DAT_04bb3990);
    __cxa_guard_release(PTR_DAT_04bb3998);
  }
  if (0 < (int)*(uint *)PTR_DAT_04bb3990) {
    uVar24 = 0;
    do {
      if (*(int *)(*(long *)(PTR_DAT_04bb3990 + 8) + uVar24 * 4) == iVar21) goto LAB_00cf6ffc;
      uVar24 = uVar24 + 1;
    } while (*(uint *)PTR_DAT_04bb3990 != uVar24);
  }
  uVar24 = 0;
LAB_00cf6ffc:
  if ((long *****)local_130 == &local_138) {
    fVar26 = 0.0;
    fVar30 = 0.0;
  }
  else {
    fVar26 = 0.0;
    iVar21 = (iVar2 - iVar5) + 4;
    pppplVar18 = local_130 + -1;
    lVar20 = *(long *)PTR_DAT_04bb39b0;
    fVar27 = (float)iVar3 * 5.0 + 5.0;
    fVar28 = (float)(iVar3 + 1) * 5.0 + 5.0;
    pppplVar25 = local_130;
    fVar29 = 0.0;
    do {
      pbVar16 = pbVar13;
      if (lVar20 == 0) {
        if (7 < *pbVar13) goto LAB_00cf70f0;
LAB_00cf7154:
        bVar8 = *pbVar16;
        if (7 < bVar8) {
          bVar8 = 0xff;
        }
      }
      else {
        if (*(int *)(lVar20 + 0x15c) != 0) {
          pbVar16 = (byte *)(lVar20 + 0x158);
        }
        if ((*pbVar16 < 8) ||
           (((*(int *)(lVar20 + 0x15c) != 0 && (*(long *)PTR_DAT_04bb4718 != 0)) &&
            (pbVar16 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5), *pbVar16 < 8))))
        goto LAB_00cf7154;
LAB_00cf70f0:
        pbVar16 = puVar4;
        if (*(long **)PTR_DAT_04bb27d0 == (long *)0x0) goto LAB_00cf7154;
        lVar14 = **(long **)PTR_DAT_04bb27d0;
        bVar8 = *(byte *)(lVar14 + 0x473);
        pbVar15 = puVar4;
        if ((long)(char)bVar8 != 0xffffffffffffffff) {
          puVar1 = (uint *)(lVar14 + 0x48) + ((long)(char)bVar8 & 0xffffffffU) * 0x20;
          if (7 < bVar8) {
            puVar1 = (uint *)(lVar14 + 0x48);
          }
          if ((*puVar1 & 8) != 0) {
            pbVar15 = (byte *)(lVar14 + 0x471);
          }
        }
        bVar8 = *pbVar15;
        if (7 < bVar8) goto LAB_00cf7154;
      }
      bVar23 = *(byte *)pppplVar18;
      if (7 < bVar23) {
        bVar23 = 0xff;
      }
      if (7 < bVar8) {
        bVar8 = 0xff;
      }
      fVar30 = (float)iVar21 * 5.0 + 5.0;
      if (bVar23 == bVar8) {
        local_150 = (ulong)(uint)fVar30;
        fVar26 = fVar28;
        local_148 = fVar27;
      }
      else {
        uVar9 = FUN_006f0400(fVar30 - fVar30,fVar28 - fVar27);
        uVar11 = (ulong)*(byte *)pppplVar18;
        lVar20 = *(long *)PTR_DAT_04bb39b0;
        if (uVar11 < 8) {
          lVar14 = uVar11 * 0x18;
          *(float *)(&DAT_054f6c88 + uVar11 * 3) = fVar30;
          *(undefined4 *)((long)&DAT_054f6c88 + lVar14 + 4) = 0;
          *(float *)(&DAT_054f6c90 + uVar11 * 3) = fVar27;
          *(undefined4 *)((long)&DAT_054f6c90 + lVar14 + 4) = uVar9;
          *(uint *)(&DAT_054f6c98 + lVar14) = param_2 & 1;
          *(undefined2 *)(&DAT_054f6c9c + lVar14) = 0;
          bVar8 = *(byte *)pppplVar18;
          bVar7 = 7 < bVar8;
          if (bVar7) {
            bVar8 = 0xff;
          }
          uVar11 = (long)(char)bVar8 & 0xffffffff;
          if (bVar7) {
            uVar11 = 0;
          }
          *(undefined1 *)((long)&DAT_054f6e08 + uVar11) = 1;
        }
        fVar30 = fVar29;
      }
      pppplVar25 = (long ****)pppplVar25[1];
      iVar21 = iVar21 + 2;
      pppplVar18 = pppplVar25 + -1;
      fVar29 = fVar30;
    } while (pppplVar18 != &local_140);
  }
  local_168 = *(undefined8 *)PTR_DAT_04bb7ab0;
  local_15c = *(undefined4 *)(PTR_DAT_04bb7ab0 + 0xc);
  uStack_158 = *(undefined4 *)(PTR_DAT_04bb7ab0 + 0x10);
  local_160 = *(undefined4 *)(PTR_DAT_04bb7ab0 + 8);
  local_154 = *(undefined2 *)(PTR_DAT_04bb7ab0 + 0x14);
  FUN_00cf6b00(param_1,&local_168);
  puVar17 = DAT_055c1b60;
  if (DAT_055c1b60 == &DAT_055c1b58) {
    puVar22 = &DAT_055c1098;
  }
  else {
    do {
      puVar22 = puVar17 + -8;
      if (*(int *)(puVar17 + -1) == 0x6622bd46) goto LAB_00cf72a0;
      puVar22 = puVar17 + 1;
      puVar17 = (undefined8 *)*puVar22;
    } while ((undefined8 *)*puVar22 != &DAT_055c1b58);
    puVar22 = &DAT_055c1098;
  }
LAB_00cf72a0:
  pppplVar25 = (long ****)&local_130;
  uStack_16c = FUN_006f0400(fVar30 - (float)local_150,fVar26 - local_148);
  local_170 = (undefined4)uVar24;
  lVar20 = *(long *)PTR_DAT_04bb39b0;
  if (lVar20 == 0) {
LAB_00cf7308:
    if (7 < *pbVar13) {
LAB_00cf7314:
      if (*(long **)PTR_DAT_04bb27d0 != (long *)0x0) {
        lVar20 = **(long **)PTR_DAT_04bb27d0;
        bVar8 = *(byte *)(lVar20 + 0x473);
        pbVar13 = PTR_DAT_04bb5038;
        if ((long)(char)bVar8 != 0xffffffffffffffff) {
          puVar1 = (uint *)(lVar20 + 0x48) + ((long)(char)bVar8 & 0xffffffffU) * 0x20;
          if (7 < bVar8) {
            puVar1 = (uint *)(lVar20 + 0x48);
          }
          if ((*puVar1 & 8) != 0) {
            pbVar13 = (byte *)(lVar20 + 0x471);
          }
        }
        local_174[0] = *pbVar13;
        if (local_174[0] < 8) goto LAB_00cf7394;
      }
      pbVar13 = PTR_DAT_04bb5038;
    }
  }
  else {
    if (*(int *)(lVar20 + 0x15c) != 0) {
      pbVar13 = (byte *)(lVar20 + 0x158);
    }
    if (7 < *pbVar13) {
      if ((*(int *)(lVar20 + 0x15c) != 0) && (*(long *)PTR_DAT_04bb4718 != 0)) {
        pbVar13 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5);
        goto LAB_00cf7308;
      }
      goto LAB_00cf7314;
    }
  }
  local_174[0] = *pbVar13;
  if (7 < local_174[0]) {
    local_174[0] = 0xff;
  }
LAB_00cf7394:
  bVar8 = FUN_02917ecc(puVar22,&local_150,&uStack_16c,&local_170,local_174,&local_168);
  *(byte *)(param_1 + 0xb4) = bVar8 & 1;
  do {
    pppplVar18 = (long ****)*pppplVar25;
    pppplVar25 = pppplVar18 + 1;
  } while ((long *****)pppplVar18 != &local_138);
  return;
}



/* WARNING: Removing unreachable block (ram,0x0242e84c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0242e2cc(undefined1 param_1 [16],undefined4 param_2,uint param_3,long param_4)

{
  byte *pbVar1;
  int *piVar2;
  undefined8 *puVar3;
  byte *pbVar4;
  short sVar5;
  short sVar6;
  int iVar7;
  char *pcVar8;
  undefined *puVar9;
  undefined2 uVar10;
  undefined2 uVar11;
  undefined2 uVar12;
  undefined2 uVar13;
  bool bVar14;
  byte bVar15;
  uint uVar16;
  int iVar17;
  undefined8 uVar18;
  ulong uVar19;
  undefined4 *puVar20;
  long lVar21;
  byte bVar22;
  undefined8 *puVar23;
  long lVar24;
  undefined1 *puVar25;
  int iVar26;
  int iVar27;
  int iVar28;
  int iVar29;
  int iVar30;
  ulong local_1f0;
  undefined8 local_1e8;
  long local_1e0;
  long *local_1d8;
  undefined8 local_1d0;
  undefined4 local_1c4;
  undefined8 local_1c0;
  undefined8 local_1b8;
  uint local_1b0;
  uint local_1ac;
  int local_1a8;
  undefined4 local_1a4;
  undefined2 uStack_1a0;
  undefined2 uStack_19e;
  undefined6 uStack_19c;
  undefined2 uStack_196;
  undefined4 local_194;
  uint local_190;
  undefined8 local_18c;
  undefined8 local_184;
  undefined8 uStack_17c;
  undefined8 local_174;
  undefined8 uStack_16c;
  undefined4 local_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  int iStack_158;
  undefined1 local_154;
  undefined8 local_150;
  undefined4 local_148;
  undefined1 local_144;
  undefined2 local_110;
  undefined1 local_10e;
  undefined1 local_10d;
  undefined4 local_10c;
  undefined4 uStack_108;
  undefined1 local_f8;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined4 local_e8;
  undefined1 local_ad;
  
  puVar23 = *(undefined8 **)(param_4 + 0x60);
  if (puVar23 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar17 = __cxa_guard_acquire(&DAT_052461c0);
      puVar23 = &DAT_05240280;
      if (iVar17 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      puVar23 = &DAT_05240280;
    }
  }
  local_1d0 = (undefined *)0xfffe;
  FUN_0277d4ac(&local_1d0);
  iVar26 = *(int *)(param_4 + 0x18e5);
  pbVar1 = (byte *)(param_4 + 0x1ee8);
  local_1d0 = *(undefined **)(param_4 + 0x1900);
  iVar29 = *(int *)(param_4 + 0x1909);
  iVar30 = *(int *)(param_4 + 0x190f);
  sVar5 = *(short *)(param_4 + 0x190d);
  sVar6 = *(short *)(param_4 + 0x1913);
  iVar17 = *(int *)(param_4 + 0x178);
  iVar27 = *(int *)(param_4 + 0x18eb);
  uVar18 = FUN_0251e98c(1);
  iVar28 = FUN_02366a5c(uVar18,&local_1d0);
  FUN_02332b04(param_4,1,0);
  if ((*(byte *)(param_4 + 0x1917) >> 2 & 1) == 0) {
    if ((*(byte *)(param_4 + 0x1917) >> 1 & 1) == 0) {
      local_1e0 = 0;
      local_1d8 = (long *)0x0;
      local_1c4 = 0;
      local_1c0 = (undefined *)CONCAT44(local_1c0._4_4_,0x1d);
      local_1f0 = 0;
      local_1e8 = 0;
      if ((puVar23[0x227] != 0) &&
         (uVar19 = FUN_03850890(puVar23[0x227],0x1d,&local_1f0,0), (uVar19 & 1) != 0)) {
        if (local_1d8 == (long *)0x0) {
          uVar16 = 1;
        }
        else if (*local_1d8 == 0) {
          local_ad = 0;
          local_1b0 = 0x100;
          local_1b8 = &local_1ac;
          local_1ac = local_1ac & 0xffffff00;
          local_1c0 = PTR_DAT_04bb21f8 + 0x10;
          lVar21 = *(long *)(local_1d8[2] + 8);
          FUN_038d1270(&local_1c0,"%s.as",
                       lVar21 + *(int *)(lVar21 + 0x24) + (long)*(int *)(lVar21 + 8));
LAB_0242e504:
          uVar16 = 0;
        }
        else {
          iVar7 = *(int *)(*local_1d8 + 8);
          if (iVar7 < 0x60000000) {
            piVar2 = (int *)(*(long *)(local_1d8[2] + 8) + (long)iVar7);
            if (*piVar2 < 1) goto LAB_0242e504;
            uVar16 = *(uint *)(((ulong)(uint)piVar2[1] & 0xfffffff) + *(long *)(local_1d8[2] + 8) +
                              4);
          }
          else {
            uVar16 = iVar7 + 0xa0000000;
            if (*(uint *)(local_1e0 + 0x80) <= uVar16) {
              uVar16 = 0;
            }
            lVar21 = *(long *)(local_1e0 + 0x88) + (ulong)uVar16 * 0x32;
            uVar16 = *(uint *)(lVar21 + (ulong)*(byte *)(lVar21 + 0x20));
          }
        }
        *(float *)(puVar23 + 0x252) = (float)iVar29 * 0.001;
        *(float *)((long)puVar23 + 0x1294) = (float)(int)sVar5 * 0.25 + (float)(int)sVar6 * 0.001;
        *(byte *)((long)puVar23 + 0x12b4) = (byte)(uVar16 >> 0x1f);
        *(float *)(puVar23 + 0x253) = (float)iVar30 * 0.001;
        *(uint *)(puVar23 + 0x256) = uVar16 & ((int)uVar16 >> 0x1f ^ 0xffffffffU);
        *(uint *)((long)puVar23 + 0x12ac) = uVar16 & (int)uVar16 >> 0x1f;
        *(undefined4 *)(puVar23 + 0x255) = 0;
        *(undefined1 *)((long)puVar23 + 0x12b5) = 1;
        *(undefined1 *)((long)puVar23 + 0x126c) = 1;
        *(uint *)(param_4 + 0x17cc) = *(uint *)(param_4 + 0x17cc) & 0xfffffffe;
        uVar16 = (uint)*(byte *)(param_4 + 0x1ee8);
        bVar14 = 7 < uVar16;
        if (bVar14) {
          uVar16 = 0xff;
        }
        lVar21 = *(long *)PTR_DAT_04bb4f78 + 0x20 + (ulong)uVar16 * 0x740;
        if (bVar14) {
          lVar21 = *(long *)PTR_DAT_04bb4f78 + 0x20;
        }
        if (*(short *)(param_4 + 0x18e1) == *(short *)PTR_DAT_04bb6298) {
          *(undefined4 *)(lVar21 + 0xc) = 3;
          FUN_01393458(lVar21 + 0xb0);
        }
        else {
          *(undefined4 *)(lVar21 + 0xc) = 4;
        }
      }
      if (*(char *)((long)puVar23 + 0x12b5) == '\0') goto LAB_0242e63c;
    }
    uStack_19c = 0;
    local_18c = 0x3f80000000000000;
    local_194 = 0x3f800000;
    local_1ac = 0x3f800000;
    bVar15 = *pbVar1;
    local_1a4 = 0;
    uStack_1a0 = 0;
    uStack_19e = 0;
    local_190 = local_190 & 0xffffff00;
    local_154 = 0;
    local_150 = 0;
    local_148 = 0;
    local_1b8 = (uint *)CONCAT44(param_2,iVar28);
    uStack_17c = _UNK_04102208;
    local_184 = _DAT_04102200;
    uStack_16c = _UNK_04102888;
    local_174 = _DAT_04102880;
    local_1c0 = local_1d0;
    if (7 < bVar15) {
      bVar15 = 0xff;
    }
    uStack_15c = (undefined4)_UNK_041023d8;
    iStack_158 = (int)((ulong)_UNK_041023d8 >> 0x20);
    local_164 = (undefined4)_DAT_041023d0;
    uStack_160 = (undefined4)((ulong)_DAT_041023d0 >> 0x20);
    local_1a8 = (uint)CONCAT21((short)((uint)local_1a8 >> 0x10),bVar15) << 8;
    local_144 = 1;
    local_1b0 = param_3;
    FUN_0170d420(puVar23,&local_1c0);
  }
  else {
    FUN_0236c210(param_4,1);
  }
LAB_0242e63c:
  lVar21 = FUN_0251e98c(1);
  puVar20 = (undefined4 *)(**(code **)(*(long *)(lVar21 + 0x1380) + 0xf0))(lVar21 + 0x1380);
  local_1e8 = CONCAT44(local_1e8._4_4_,(float)iVar27 * 0.001);
  local_1f0 = (ulong)(uint)((float)iVar26 * 0.001);
  puVar3 = &DAT_054e9a58;
  if (*(undefined8 **)(param_4 + 0x4c8) != (undefined8 *)0x0) {
    puVar3 = *(undefined8 **)(param_4 + 0x4c8);
  }
  local_1c0 = (undefined *)(puVar3[0x4f] & 0xffffffff);
  local_1b8 = (uint *)CONCAT44(local_1b8._4_4_,*(undefined4 *)(puVar3 + 0x50));
  FUN_03eb4b60(*puVar20,0x41200000,0x3e4ccccc,&local_1c0,&local_1f0);
  *(undefined4 *)(puVar3 + 0x4f) = (undefined4)local_1c0;
  *(undefined4 *)(puVar3 + 0x50) = (undefined4)local_1b8;
  local_1c0 = (undefined *)
              ((ulong)CONCAT42(local_1c0._4_4_,*(undefined2 *)(param_4 + 0x1920)) << 0x10);
  FUN_02328b10(param_4,&local_1c0,1);
  if (iVar17 == 0) {
    local_1f0 = local_1f0 & 0xffffffff00000000;
    local_1c0 = (undefined *)CONCAT44(local_1c0._4_4_,0x32);
    if ((puVar23[0x227] != 0) && (uVar19 = FUN_03850890(puVar23[0x227],0x32,0,0), (uVar19 & 1) != 0)
       ) {
      FUN_0230e2b0(&local_1c0);
      pcVar8 = (char *)local_1b8;
      uVar16 = *(uint *)(param_4 + 0x17cc);
      if (local_1b8 != (uint *)"Player_GetDemo") {
        iVar26 = 0xe;
        if ((int)local_1b0 < 0xf) {
          iVar26 = local_1b0 - 1;
        }
        memcpy(local_1b8,"Player_GetDemo",(long)iVar26);
        pcVar8[iVar26] = '\0';
      }
      pcVar8 = (char *)CONCAT44(uStack_15c,uStack_160);
      puVar25 = (undefined1 *)((ulong)&local_1d0 | 3);
      puVar20 = (undefined4 *)((ulong)&local_1d0 | 4);
      if (pcVar8 != "Get_Pickup") {
        iVar26 = 10;
        if (iStack_158 < 0xb) {
          iVar26 = iStack_158 + -1;
        }
        memcpy(pcVar8,"Get_Pickup",(long)iVar26);
        pcVar8[iVar26] = '\0';
      }
      lVar21 = *(long *)PTR_DAT_04bb39b0;
      if ((lVar21 == 0) || (*(int *)(lVar21 + 0x15c) == 0)) {
LAB_0242ea20:
        local_110 = (undefined2)local_1d0;
        local_10e = local_1d0._2_1_;
      }
      else {
        pbVar4 = PTR_DAT_04bb32e0;
        if (*(int *)(lVar21 + 0x15c) != 0) {
          pbVar4 = (byte *)(lVar21 + 0x158);
        }
        bVar22 = *pbVar1;
        bVar15 = *pbVar4;
        if (7 < bVar15) {
          bVar15 = 0xff;
        }
        if (7 < bVar22) {
          bVar22 = 0xff;
        }
        if (bVar15 == bVar22) goto LAB_0242ea20;
        local_110 = *(undefined2 *)PTR_DAT_04bb37e0;
        puVar20 = (undefined4 *)(PTR_DAT_04bb37e0 + 4);
        puVar25 = PTR_DAT_04bb37e0 + 3;
        local_10e = PTR_DAT_04bb37e0[2];
      }
      local_10d = *puVar25;
      local_e8 = 0x3c;
      local_10c = *puVar20;
      uStack_108 = 0xc;
      if ((uVar16 & 0x40) != 0) {
        uStack_108 = 0;
      }
      local_f8 = 0;
      local_f0 = *(undefined4 *)PTR_DAT_04bb37e0;
      local_ec = *(undefined4 *)(PTR_DAT_04bb37e0 + 4);
      FUN_02328d9c(param_4,&local_1c0);
    }
  }
  uVar12 = uStack_19e;
  uVar10 = uStack_1a0;
  uStack_1a0 = (undefined2)param_3;
  uVar11 = uStack_1a0;
  uStack_19e = (undefined2)(param_3 >> 0x10);
  uVar13 = uStack_19e;
  uStack_1a0 = uVar10;
  uStack_19e = uVar12;
  if ((*(byte *)(param_4 + 0x1917) >> 2 & 1) == 0) {
    uVar16 = 0;
    if (puVar23[0x227] != 0) {
      local_1c0 = (undefined *)CONCAT44(local_1c0._4_4_,1);
      uVar16 = *(uint *)(puVar23 + 0x2d3) >> 1 & 1;
    }
    uVar19 = FUN_0170a6d0(puVar23,uVar16);
    if ((uVar19 & 1) != 0) {
      local_190 = 0x3f800000;
      local_18c = CONCAT26(local_18c._6_2_,0x10000000000);
      local_1b8 = (uint *)&DAT_00000005;
      local_194 = *(undefined4 *)(*(long *)(param_4 + 0x68) + 0x280);
      uVar18 = *(undefined8 *)(*(long *)(param_4 + 0x68) + 0x278);
      local_1ac = 1;
      local_1b0 = local_1b0 & 0xffffff00;
      local_1c0 = local_1d0;
      uStack_19c = (undefined6)uVar18;
      uStack_196 = (undefined2)((ulong)uVar18 >> 0x30);
      local_18c = CONCAT62(local_18c._2_6_,0x101);
      local_1a8 = iVar28;
      local_1a4 = param_2;
      uStack_1a0 = uVar11;
      uStack_19e = uVar13;
      FUN_0236b830(param_4,&local_1c0);
    }
  }
  if (*(int *)(param_4 + 0x178) == 0) {
    if ((*(byte *)(param_4 + 0x17cd) >> 5 & 1) != 0) {
      *(byte *)(param_4 + 0x1917) = *(byte *)(param_4 + 0x1917) | 4;
    }
  }
  else if (((*(byte *)(param_4 + 0x1917) >> 2 & 1) != 0) &&
          ((*(byte *)(param_4 + 0x17cd) >> 4 & 1) != 0)) {
    FUN_0236b9d0(param_4,param_4 + 0x1ee9);
  }
  local_1c0 = (undefined *)((ulong)local_1c0 & 0xffffffff00000000);
  if (puVar23[0x227] == 0) {
LAB_0242e950:
    uVar16 = 0;
LAB_0242e954:
    uVar19 = FUN_0170a6d0(puVar23,uVar16);
    if (iVar17 != 0) {
      return;
    }
    if ((uVar19 & 1) == 0) {
      return;
    }
  }
  else {
    uVar19 = FUN_03850368(puVar23[0x227],0);
    if ((uVar19 & 1) == 0) {
      if (puVar23[0x227] == 0) goto LAB_0242e950;
      local_1c0 = (undefined *)CONCAT44(local_1c0._4_4_,1);
      uVar16 = *(uint *)(puVar23 + 0x2d3) >> 1 & 1;
      goto LAB_0242e954;
    }
    if (iVar17 != 0) {
      return;
    }
  }
  if (puVar23[0x227] == 0) {
LAB_0242e9b0:
    uVar16 = 0;
LAB_0242e9b4:
    uVar19 = FUN_0170a6d0(puVar23,uVar16);
    bVar15 = 2;
    if ((uVar19 & 1) == 0) {
      bVar15 = 0;
    }
  }
  else {
    uVar19 = FUN_03850368(puVar23[0x227],0);
    bVar15 = 0;
    if ((uVar19 & 1) == 0) {
      if (puVar23[0x227] == 0) goto LAB_0242e9b0;
      local_1c0 = (undefined *)CONCAT44(local_1c0._4_4_,1);
      uVar16 = *(uint *)(puVar23 + 0x2d3) >> 1 & 1;
      goto LAB_0242e9b4;
    }
  }
  local_1c0._4_4_ = (uint)((ulong)local_1c0 >> 0x20) & 0xffffff00;
  *(byte *)(param_4 + 0x1917) = *(byte *)(param_4 + 0x1917) & 0xfd | bVar15;
  local_1c0 = (undefined *)CONCAT44(local_1c0._4_4_,0x1010001);
  FUN_02558ce0(pbVar1,param_4 + 0x18e0,&local_1c0);
  uVar19 = FUN_0231eddc(param_4,0);
  if ((uVar19 & 1) == 0) {
    return;
  }
  if (*(long *)PTR_DAT_04bb2230 == 0) {
    lVar21 = 0;
  }
  else {
    lVar21 = *(long *)(*(long *)PTR_DAT_04bb2230 + 0x28);
  }
  uVar16 = *(uint *)(param_4 + 0x17cc);
  if (*(char *)(lVar21 + 0x28) == '\0') {
    bVar15 = 1;
  }
  else {
    bVar15 = (**(code **)(*(long *)(lVar21 + 0x20) + 0x18))((long *)(lVar21 + 0x20));
    *(undefined1 *)(lVar21 + 0x28) = 0;
  }
  *(byte *)(lVar21 + 0x29) = bVar15 & 1;
  if ((uVar16 >> 6 & 1) == 0) {
    local_190 = 0x3f800000;
    local_18c = CONCAT26(local_18c._6_2_,0x10000000100);
    local_1b8 = (uint *)0x5;
    local_194 = *(undefined4 *)(*(long *)(param_4 + 0x68) + 0x280);
    uVar18 = *(undefined8 *)(*(long *)(param_4 + 0x68) + 0x278);
    local_1ac = 1;
    local_1b0 = CONCAT31(local_1b0._1_3_,1);
    local_1c0 = local_1d0;
    uStack_19c = (undefined6)uVar18;
    uStack_196 = (undefined2)((ulong)uVar18 >> 0x30);
    local_1a8 = iVar28;
    local_1a4 = param_2;
    uStack_1a0 = uVar11;
    uStack_19e = uVar13;
    FUN_0236cba0(param_4,&local_1c0);
    return;
  }
  *(uint *)(param_4 + 0x17d0) = *(uint *)(param_4 + 0x17d0) & 0xffbfffff;
  puVar9 = PTR_DAT_04bb43c0;
  lVar24 = *(long *)PTR_DAT_04bb43c0;
  uVar16 = FUN_0277d6c4(lVar21 + 0x2c);
  if (*(long *)puVar9 != 0) {
    lVar21 = *(long *)(lVar24 + 0x57e58);
    uVar16 = (uVar16 & 0xffff) - (uint)*(ushort *)(lVar21 + 0x1f8);
    if ((uVar16 < *(uint *)(lVar21 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar21 + 0x1e0) + (long)(int)uVar16 * 8) != 0)) {
      local_1c0 = (undefined *)0xfffe;
      FUN_0277d4ac(&local_1c0);
      FUN_016e49e4(&local_1c0,&local_1d0,0);
      lVar21 = *(long *)puVar9;
      uVar16 = FUN_0277d6c4(&local_1c0);
      if (*(long *)puVar9 != 0) {
        lVar21 = *(long *)(lVar21 + 0x57e58);
        uVar16 = (uVar16 & 0xffff) - (uint)*(ushort *)(lVar21 + 0x1f8);
        if ((uVar16 < *(uint *)(lVar21 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar21 + 0x1e0) + (long)(int)uVar16 * 8) != 0)) {
          FUN_026738b0(pbVar1,&local_1c0,1,0);
        }
      }
      goto LAB_0242ec14;
    }
  }
  lVar21 = *(long *)PTR_DAT_04bb4f78 + 0x20 + (ulong)(uint)*pbVar1 * 0x740;
  if (7 < *pbVar1) {
    lVar21 = *(long *)PTR_DAT_04bb4f78 + 0x20;
  }
  FUN_022bbc50(lVar21 + 0xb0,lVar21 + 0xc4);
LAB_0242ec14:
  uVar19 = FUN_02546f34(pbVar1,*(undefined4 *)(param_4 + 0x230));
  if ((uVar19 & 1) == 0) {
    local_1b8 = (uint *)((ulong)local_1b8 & 0xffffffff00000000);
    local_1c0 = (undefined *)CONCAT35(local_1c0._5_3_,0x100000006);
    FUN_02374e74(param_4,&local_1c0);
  }
  return;
}


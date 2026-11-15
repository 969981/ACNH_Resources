
uint FUN_022b76c0(float param_1,undefined8 param_2,long param_3,undefined8 param_4,long param_5,
                 ulong param_6,ulong param_7)

{
  int iVar1;
  int iVar2;
  uint *puVar3;
  int iVar4;
  short sVar5;
  undefined *puVar6;
  int iVar7;
  uint uVar8;
  long lVar9;
  char cVar10;
  int iVar11;
  undefined8 *puVar12;
  undefined *puVar13;
  float *pfVar14;
  short sVar15;
  ulong uVar16;
  ulong uVar17;
  short sVar18;
  float fVar19;
  float fVar20;
  undefined4 local_110 [2];
  undefined *local_108;
  undefined *local_100;
  int local_f8;
  int iStack_f4;
  undefined *local_f0;
  int local_e8;
  int iStack_e4;
  undefined2 local_e0;
  undefined4 local_de;
  undefined1 local_da;
  undefined8 local_d8;
  undefined1 local_d0;
  undefined8 local_cc;
  undefined2 local_c4;
  undefined *local_c0;
  int local_b8;
  int iStack_b4;
  undefined *local_b0;
  int local_a8;
  int iStack_a4;
  ulong local_9c;
  float local_94;
  float local_90;
  float local_8c;
  undefined8 local_78;
  
  uVar16 = -(param_6 >> 0x1f & 1) & 0xfffffffc00000000 | (param_6 & 0xffffffff) << 2;
  uVar17 = -(param_7 >> 0x1f & 1) & 0xfffffffc00000000 | (param_7 & 0xffffffff) << 2;
  iVar11 = *(int *)(&DAT_0417a37c + uVar17 + (long)*(int *)(&DAT_0417a37c + uVar16));
  iVar4 = *(int *)(&DAT_0417a388 + uVar17 + (long)*(int *)(&DAT_0417a388 + uVar16));
  iVar1 = *(int *)(param_5 + 8) + iVar11;
  iVar2 = *(int *)(param_5 + 0xc) + iVar4;
  if (DAT_055c1b60 != &DAT_055c1b58) {
    sVar18 = 0;
    puVar12 = DAT_055c1b60;
    do {
      if (*(int *)(puVar12 + -1) == 0x6622bd46) goto LAB_022b7784;
      puVar12 = (undefined8 *)puVar12[1];
      sVar18 = sVar18 + 1;
    } while (puVar12 != &DAT_055c1b58);
  }
  sVar18 = -1;
LAB_022b7784:
  sVar5 = *(short *)(param_3 + 0x14);
  local_78 = 0xfffe;
  FUN_0277d4ac(&local_78);
  local_78 = *(undefined8 *)(param_3 + 4);
  iVar7 = FUN_0277d6c4(&local_78);
  if (iVar7 != 0x8f0) {
    local_9c = 0xea61;
    fVar19 = (float)*(int *)(param_5 + 0xc) * 5.0 + 5.0;
    fVar20 = (float)*(int *)(param_5 + 8) * 5.0 + 5.0;
    local_94 = fVar20;
    local_90 = param_1;
    local_8c = fVar19;
    FUN_0277d4ac(&local_9c);
    uVar8 = (uint)param_6;
    FUN_0124c030(local_110,&local_9c);
    iVar7 = FUN_0123db50(&local_108,local_100);
    if (iVar7 == 5) {
      if ((uVar8 & 0xff) < 2) {
        puVar13 = &DAT_041746a8;
        goto LAB_022b787c;
      }
LAB_022b78bc:
      if (uVar8 == 2) {
        local_8c = fVar19 + 3.0;
      }
    }
    else if ((uVar8 & 0xff) < 3) {
      puVar13 = &DAT_041746c0;
LAB_022b787c:
      pfVar14 = (float *)(puVar13 + (ulong)(uVar8 & 0xff) * 0xc);
      local_90 = pfVar14[1] + param_1;
      local_94 = *pfVar14 + fVar20;
      fVar19 = pfVar14[2] + fVar19;
      local_8c = fVar19;
      goto LAB_022b78bc;
    }
    if (sVar5 == sVar18) {
      if (DAT_04cfae30 != 0) {
        lVar9 = *(long *)(DAT_04cfae30 + 0x90);
joined_r0x022b7960:
        if (lVar9 != 0) {
          local_9c = local_9c & 0xffffffffffffff00;
          if (DAT_04c487d4 == -1) {
            local_110[0] = 7;
          }
          else {
            puVar3 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)DAT_04c487d4 * 8);
            if (0xff < (uint)(int)DAT_04c487d4) {
              puVar3 = (uint *)PTR_DAT_04bc39f8;
            }
            local_110[0] = 7;
            if ((*puVar3 & 2) != 0) {
              local_110[0] = 5;
            }
          }
          param_1 = (float)FUN_00962700(lVar9,&local_94,local_110,0,&local_9c);
          goto LAB_022b7a0c;
        }
      }
    }
    else {
      if (DAT_055c1b60 != &DAT_055c1b58) {
        sVar15 = 0;
        puVar12 = DAT_055c1b60;
        do {
          if (*(int *)(puVar12 + -1) == -0x24a26848) goto LAB_022b7944;
          puVar12 = (undefined8 *)puVar12[1];
          sVar15 = sVar15 + 1;
        } while (puVar12 != &DAT_055c1b58);
      }
      sVar15 = -1;
LAB_022b7944:
      lVar9 = *(long *)PTR_DAT_04bb27c8;
      if (*(short *)(param_3 + 0x14) != sVar15) {
        param_1 = (float)FUN_0093a950(lVar9 + 0x28,&local_94,0);
        goto LAB_022b7a0c;
      }
      if (lVar9 != 0) {
        lVar9 = *(long *)(lVar9 + 0x90);
        goto joined_r0x022b7960;
      }
    }
    param_1 = -500.0;
  }
LAB_022b7a0c:
  puVar6 = PTR_DAT_04bb2010;
  puVar13 = PTR_DAT_04bb2010 + 0x10;
  local_b0 = puVar13;
  local_a8 = iVar1;
  iStack_a4 = iVar2;
  uVar16 = FUN_022aa8c0(param_1,&local_b0,sVar5 == sVar18);
  if ((uVar16 & 1) != 0) {
    local_c0 = puVar13;
    local_b8 = iVar1;
    iStack_b4 = iVar2;
    uVar16 = FUN_022aa6c0(param_4,&local_c0,iVar11,iVar4);
    if ((uVar16 & 1) != 0) {
      local_100 = puVar6 + 0x10;
      local_d8 = 0xffffffffffffffff;
      local_de = 0;
      cVar10 = (char)iVar11;
      local_e0 = 0xff00;
      iVar11 = (int)(char)iVar4;
      if (cVar10 < -7) {
        cVar10 = -8;
      }
      *(byte *)(param_3 + 0x1a) = *(byte *)(param_3 + 0x1a) & 0xfc | (byte)param_6 & 3;
      local_da = 0;
      local_d0 = 0;
      local_c4 = 0xff00;
      local_108 = PTR_DAT_04bbc1a0 + 0x10;
      if ('\x06' < cVar10) {
        cVar10 = '\a';
      }
      if (iVar11 < -7) {
        iVar11 = -8;
      }
      local_cc = 0x41200000;
      if (6 < iVar11) {
        iVar11 = 7;
      }
      iStack_e4 = iVar2 + 1;
      *(byte *)(param_3 + 0x1d) = (cVar10 + 8U | (byte)(iVar11 << 4)) ^ 0x80;
      local_110[0] = CONCAT22(local_110[0]._2_2_,*(undefined2 *)(param_3 + 0x14));
      local_e8 = iVar1 + 1;
      local_f8 = iVar1;
      iStack_f4 = iVar2;
      local_f0 = local_100;
      uVar8 = FUN_022ab010(param_2,local_110,param_3);
      goto LAB_022b7b18;
    }
  }
  uVar8 = 0;
LAB_022b7b18:
  return uVar8 & 1;
}


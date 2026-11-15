
void FUN_02460144(long param_1,float *param_2)

{
  uint *puVar1;
  long lVar2;
  undefined2 uVar3;
  short sVar4;
  int iVar5;
  int iVar6;
  ulong uVar7;
  long lVar8;
  float *pfVar9;
  int iVar10;
  int iVar11;
  byte bVar12;
  uint uVar13;
  int iVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float local_108;
  float fStack_104;
  undefined4 local_100;
  float fStack_fc;
  float local_d8;
  float fStack_d4;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined2 local_b8;
  undefined1 uStack_b6;
  undefined1 uStack_b5;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  undefined2 local_a8;
  undefined4 local_a6;
  undefined1 local_a2;
  undefined8 local_a0;
  undefined1 local_98;
  undefined8 local_94;
  undefined2 local_8c;
  
  uVar7 = FUN_016efacc(0x40a00000,param_2 + 4);
  if ((uVar7 & 1) != 0) {
    return;
  }
  fVar16 = param_2[3];
  uVar7 = (ulong)((uint)fVar16 >> 0x14) & 0xff0;
  fVar20 = param_2[4];
  fStack_ac = param_2[2];
  fVar25 = param_2[6];
  fVar23 = param_2[7];
  fVar15 = (float)((uint)fVar16 & 0xffffff) * 5.9604645e-08;
  iVar11 = (int)(param_2[5] * 4.0);
  fVar17 = *(float *)((long)&DAT_04199798 + uVar7) +
           fVar15 * *(float *)((long)&DAT_0419979c + uVar7);
  iVar14 = (int)(*param_2 * 999.99994);
  fVar24 = fStack_ac * 999.99994;
  local_d8 = *(float *)((long)&DAT_041997a0 + uVar7) +
             fVar15 * *(float *)((long)&DAT_041997a4 + uVar7);
  iVar10 = (int)(param_2[1] * 4.0);
  fStack_d4 = fVar17 * 0.0;
  fVar15 = -(*(float *)((long)&DAT_0419979c + uVar7) * fVar15) -
           *(float *)((long)&DAT_04199798 + uVar7);
  if (0x7ffe < iVar10) {
    iVar10 = 0x7fff;
  }
  if (iVar10 < -0x7fff) {
    iVar10 = -0x8000;
  }
  local_d0 = (undefined *)CONCAT44(*param_2,fVar17 + 0.0);
  local_c0 = CONCAT44(param_2[1],fStack_d4);
  fStack_b4 = local_d8 * 0.0;
  if (0x7ffe < iVar11) {
    iVar11 = 0x7fff;
  }
  if (iVar11 < -0x7fff) {
    iVar11 = -0x8000;
  }
  local_b8 = SUB42(fVar15,0);
  uStack_b6 = (undefined1)((uint)fVar15 >> 0x10);
  uStack_b5 = (undefined1)((uint)fVar15 >> 0x18);
  local_c8 = (undefined8 *)CONCAT44(fStack_d4 * 0.0 + 1.0,fStack_b4);
  fStack_b0 = local_d8;
  FUN_007535b4(&local_108,&local_d8);
  fVar18 = param_2[5];
  fVar15 = param_2[4] * local_108;
  sVar4 = *(short *)PTR_DAT_04bb6298;
  fVar17 = param_2[6] * local_100;
  if (sVar4 == -1) {
LAB_024602f8:
    uVar7 = FUN_016e6244();
    if ((((uVar7 & 1) != 0) || (uVar7 = FUN_0180c600(), (uVar7 & 1) != 0)) ||
       (uVar7 = FUN_016cf9f0(), (uVar7 & 1) != 0)) goto LAB_02460310;
    goto LAB_02460418;
  }
  local_d8 = 2.94273e-44;
  puVar1 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar4 * 8);
  if (0xff < (uint)(int)sVar4) {
    puVar1 = (uint *)PTR_DAT_04bc39f8;
  }
  if ((*puVar1 >> 0x15 & 1) == 0) goto LAB_024602f8;
LAB_02460310:
  fVar22 = (float)iVar14 * 0.001;
  fVar21 = (float)(int)fVar24 * 0.001;
  iVar6 = FUN_006f0400(fVar22 - (float)(int)(fVar20 * 999.99994) * 0.001,
                       fVar21 - (float)(int)(fVar25 * 999.99994) * 0.001);
  local_108 = (float)(iVar6 + 0x20000000U >> 0x1e);
  fStack_d4 = (float)(int)(short)iVar10 * 0.25;
  switch(local_108) {
  case 0.0:
    fVar19 = -7.5;
    break;
  case 1.4013e-45:
    fVar19 = -7.5;
    goto LAB_024603ac;
  case 2.8026e-45:
    fVar19 = 7.5;
    break;
  case 4.2039e-45:
    fVar19 = 7.5;
LAB_024603ac:
    fVar22 = fVar22 + fVar19;
  default:
    goto switchD_02460388_default;
  }
  fVar21 = fVar21 + fVar19;
switchD_02460388_default:
  local_b8 = 0x101;
  local_c0 = 0xbf8000000000001f;
  uStack_b6 = 1;
  bVar12 = *(byte *)(param_1 + 0x1ee8);
  fStack_b4 = 0.0;
  fStack_b0 = 9.18355e-41;
  if (7 < bVar12) {
    bVar12 = 0xff;
  }
  local_c8 = (undefined8 *)CONCAT71(local_c8._1_7_,bVar12);
  local_c8 = (undefined8 *)CONCAT44(*(undefined4 *)PTR_DAT_04bb3238,(undefined4)local_c8);
  local_d0 = (undefined *)CONCAT44(0x40400000,fVar21);
  local_d8 = fVar22;
  uVar7 = FUN_0251fad0(&local_d8,0);
  if ((uVar7 & 1) == 0) {
LAB_02460418:
    if ((*(byte *)(param_1 + 0x17d6) >> 6 & 1) == 0) {
      *(short *)(param_1 + 0x198a) = (short)((uint)fVar16 >> 0x10);
      *(short *)(param_1 + 0x1996) = (short)((uint)fVar23 >> 0x10);
      *(undefined8 *)(param_1 + 0x1998) = 0;
      *(undefined8 *)(param_1 + 0x19a0) = 0;
      *(undefined8 *)(param_1 + 0x19a8) = 0;
      *(undefined8 *)(param_1 + 0x1960) = *(undefined8 *)(param_1 + 0x18e0);
      *(undefined8 *)(param_1 + 0x19b0) = 0;
      *(undefined8 *)(param_1 + 0x19b8) = 0;
      *(undefined8 *)(param_1 + 0x19c0) = 0;
      *(undefined8 *)(param_1 + 0x19c8) = 0;
      *(undefined8 *)(param_1 + 0x19d0) = 0;
      *(undefined2 *)(param_1 + 0x19d8) = 0;
      *(int *)(param_1 + 0x1980) = iVar14;
      *(short *)(param_1 + 0x1984) = (short)iVar10;
      *(int *)(param_1 + 0x1986) = (int)fVar24;
      *(int *)(param_1 + 0x198c) = (int)(fVar20 * 999.99994);
      *(undefined8 *)(param_1 + 0x1968) = *(undefined8 *)(param_1 + 0x18e8);
      *(short *)(param_1 + 0x1990) = (short)iVar11;
      *(int *)(param_1 + 0x1992) = (int)(fVar25 * 999.99994);
      *(bool *)(param_1 + 0x1998) = fStack_fc + fVar18 * fStack_104 + fVar15 + fVar17 < 0.0;
      *(undefined8 *)(param_1 + 0x1970) = *(undefined8 *)(param_1 + 0x18f0);
      *(undefined8 *)(param_1 + 0x1978) = *(undefined8 *)(param_1 + 0x18f8);
      lVar2 = *(long *)PTR_DAT_04bb4f78 + 0x20 + (ulong)(uint)*(byte *)(param_1 + 0x1ee8) * 0x740;
      if (7 < *(byte *)(param_1 + 0x1ee8)) {
        lVar2 = *(long *)PTR_DAT_04bb4f78 + 0x20;
      }
      *(undefined8 *)(lVar2 + 0x420) = 0x100000000;
      *(undefined4 *)(lVar2 + 0x4c0) = 0;
      fVar17 = (float)*(int *)(param_1 + 0x198c) * 0.001;
      fVar23 = (float)*(int *)(param_1 + 0x1992) * 0.001;
      lVar8 = FUN_0251e98c(1);
      pfVar9 = (float *)(**(code **)(*(long *)(lVar8 + 0x2a0) + 0xf0))(lVar8 + 0x2a0);
      fVar16 = *pfVar9 * 0.97;
      fVar15 = fVar17 - fVar16;
      fVar17 = fVar17 + fVar16;
      fVar20 = fVar23 - fVar16;
      fVar23 = fVar23 + fVar16;
      iVar11 = (int)((float)(int)fVar15 / 5.0) - (uint)(fVar15 < 0.0);
      iVar14 = (int)((float)(int)fVar20 / 5.0) - (uint)(fVar20 < 0.0);
      iVar6 = (int)((float)(int)fVar17 / 5.0) - (uint)(fVar17 < 0.0);
      iVar5 = (int)((float)(int)fVar23 / 5.0) - (uint)(fVar23 < 0.0);
      iVar10 = iVar11;
      if (iVar6 <= iVar11) {
        iVar10 = iVar6;
      }
      if (iVar11 <= iVar6) {
        iVar11 = iVar6;
      }
      iVar6 = iVar14;
      if (iVar5 <= iVar14) {
        iVar6 = iVar5;
      }
      if (iVar14 <= iVar5) {
        iVar14 = iVar5;
      }
      fVar16 = *(float *)(*(long *)(param_1 + 0x68) + 0x278);
      fVar23 = *(float *)(*(long *)(param_1 + 0x68) + 0x280);
      fStack_b0 = (float)((int)((float)(int)fVar16 / 5.0) - (uint)(fVar16 < 0.0));
      fStack_ac = (float)((int)((float)(int)fVar23 / 5.0) - (uint)(fVar23 < 0.0));
      iVar5 = (int)fStack_b0;
      if (iVar10 <= (int)fStack_b0) {
        iVar5 = iVar10;
      }
      iVar10 = (int)fStack_ac;
      if (iVar6 <= (int)fStack_ac) {
        iVar10 = iVar6;
      }
      bVar12 = *(byte *)(param_1 + 0x1ee8);
      if ((int)fStack_b0 <= iVar11) {
        fStack_b0 = (float)iVar11;
      }
      if ((int)fStack_ac <= iVar14) {
        fStack_ac = (float)iVar14;
      }
      uVar3 = *(undefined2 *)PTR_DAT_04bb6298;
      uVar13 = (uint)bVar12;
      if (7 < uVar13) {
        uVar13 = 0xffffffff;
      }
      *(uint *)(lVar2 + 0x4d4) = uVar13;
      if (bVar12 < 8) {
        *(byte *)(lVar2 + 0x4d8) = bVar12;
      }
      local_d0 = PTR_DAT_04bbc1a0;
      *(undefined1 *)(lVar2 + 0x4d9) = 1;
      local_a0 = 0xffffffffffffffff;
      local_c0 = CONCAT44(iVar10,iVar5);
      local_a8 = 0xff01;
      local_a2 = 0;
      local_d0 = local_d0 + 0x10;
      local_98 = 0;
      local_d8 = (float)CONCAT22(local_d8._2_2_,uVar3);
      local_a6 = 0x100;
      local_b8 = 0x9750;
      uStack_b6 = 0x8f;
      uStack_b5 = 4;
      fStack_b4 = 0.0;
      local_c8 = &DAT_048f9750;
      local_94 = 0x41200000;
      local_8c = 0xff00;
      if (*(int *)(lVar2 + 0x4d0) == 0x15) {
        local_a8 = 0x1401;
      }
      local_100._0_3_ = CONCAT12(2,(undefined2)local_100);
      uVar7 = FUN_023016c0(lVar2 + 0x4c8,&local_d8,&local_108);
      if ((uVar7 & 1) != 0) {
        local_d8 = 3.96567e-43;
        *(undefined8 *)(param_1 + 0x18c0) = *(undefined8 *)(param_1 + 0x19c0);
        *(undefined8 *)(param_1 + 0x18c8) = *(undefined8 *)(param_1 + 0x19c8);
        *(undefined8 *)(param_1 + 0x18d0) = *(undefined8 *)(param_1 + 0x19d0);
        *(undefined2 *)(param_1 + 0x18d8) = *(undefined2 *)(param_1 + 0x19d8);
        *(undefined8 *)(param_1 + 0x18a0) = *(undefined8 *)(param_1 + 0x19a0);
        *(undefined8 *)(param_1 + 0x18a8) = *(undefined8 *)(param_1 + 0x19a8);
        *(undefined8 *)(param_1 + 0x18b0) = *(undefined8 *)(param_1 + 0x19b0);
        *(undefined8 *)(param_1 + 0x18b8) = *(undefined8 *)(param_1 + 0x19b8);
        *(undefined8 *)(param_1 + 0x1880) = *(undefined8 *)(param_1 + 0x1980);
        *(undefined8 *)(param_1 + 0x1888) = *(undefined8 *)(param_1 + 0x1988);
        *(undefined8 *)(param_1 + 0x1890) = *(undefined8 *)(param_1 + 0x1990);
        *(undefined8 *)(param_1 + 0x1898) = *(undefined8 *)(param_1 + 0x1998);
        *(undefined8 *)(param_1 + 0x1860) = *(undefined8 *)(param_1 + 0x1960);
        *(undefined8 *)(param_1 + 0x1868) = *(undefined8 *)(param_1 + 0x1968);
        *(undefined8 *)(param_1 + 0x1878) = *(undefined8 *)(param_1 + 0x1978);
        *(undefined8 *)(param_1 + 0x1870) = *(undefined8 *)(param_1 + 0x1970);
        lVar2 = 0;
        if (*(long *)(param_1 + 0x70) != 0) {
          lVar2 = *(long *)(param_1 + 0x70) + 0x278;
        }
        FUN_03ebb160(lVar2,0x11b);
      }
    }
  }
  return;
}


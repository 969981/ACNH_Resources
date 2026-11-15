
undefined8
FUN_023f2df4(float param_1,long param_2,ulong param_3,float *param_4,int *param_5,byte param_6,
            byte param_7)

{
  byte *pbVar1;
  undefined2 uVar2;
  undefined *puVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  int iVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  ulong uVar10;
  int iVar11;
  uint uVar12;
  long lVar13;
  long lVar14;
  byte bVar15;
  byte bVar16;
  undefined1 uVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float local_7c;
  float fStack_78;
  float local_74;
  
  puVar3 = PTR_DAT_04bb2720;
  if (*(int *)(param_2 + 0x178) != 0) {
    return 0;
  }
  lVar13 = *(long *)PTR_DAT_04bb2720;
  iVar11 = 0;
  if (lVar13 != 0) {
    if (*(long *)(lVar13 + 0x330) == 0) {
      iVar11 = 0;
    }
    else {
      puVar8 = (undefined8 *)
               (**(code **)(*DAT_05aed668 + 0x18))(DAT_05aed668,*(undefined4 *)(lVar13 + 0x338));
      iVar7 = FUN_006bd550(*puVar8,0);
      iVar11 = 0;
      if (iVar7 == 0x758f7eaf) {
        iVar11 = 0;
        if (*(long *)puVar3 != 0) {
          lVar13 = *(long *)(*(long *)puVar3 + 0x330);
          iVar11 = 0;
          if (lVar13 != 0) {
            iVar11 = *(int *)(lVar13 + 0x244);
          }
        }
      }
    }
  }
  bVar6 = DAT_05292428 == iVar11;
  if ((param_3 & 1) == 0) {
    uVar10 = FUN_0252b6b0(0x40600000,param_4,(byte *)(param_2 + 0x1ee8),1,1,0,1);
    if ((uVar10 & 1) != 0) {
      return 0;
    }
    uVar10 = FUN_01735670(0x40600000,0xbf800000,param_4,*(undefined4 *)PTR_DAT_04bb3238,
                          *(undefined4 *)PTR_DAT_04bb3238,1,1,0,1,0,0,1);
    if ((uVar10 & 1) != 0) {
      return 0;
    }
    if ((DAT_04cd19d8 == 0) || (*(int *)(DAT_04cd19d8 + 0x15c) == 0)) {
LAB_023f2fb4:
      local_7c = *param_4;
      local_74 = param_4[2];
      fStack_78 = param_1;
      uVar10 = FUN_016ebc50(0,&local_7c);
      if ((uVar10 & 1) == 0) {
        *(ulong *)(param_2 + 0xb3c) = CONCAT44(fStack_78,local_7c);
        *(float *)(param_2 + 0xb44) = local_74;
        if (!bVar6 && (param_6 & 1) == 0) {
          fVar18 = (float)NEON_ucvtf(*param_5);
          fVar19 = sinf(fVar18 * 1.4629181e-09);
          fVar18 = cosf(fVar18 * 1.4629181e-09);
          fVar20 = fVar19 * 0.0;
          local_7c = local_7c + fVar20 * 0.0 + fVar18 * 0.0 + (fVar19 + 0.0) * 1.3 + 0.0;
          fStack_78 = fStack_78 +
                      (fVar20 * 0.0 + 1.0) * 0.0 + fVar18 * 0.0 * 0.0 + fVar20 * 1.3 + 0.0;
          local_74 = (fVar18 * 0.0 * 0.0 - fVar19 * 0.0) + fVar18 * 1.3 + 0.0 + local_74;
        }
        lVar13 = (**(code **)(**(long **)(param_2 + 0x68) + 0x148))();
        iVar11 = *param_5;
        iVar7 = *(int *)(lVar13 + 4);
        *(undefined8 *)(param_2 + 0x1980) = 0;
        *(undefined8 *)(param_2 + 0x1988) = 0;
        *(undefined8 *)(param_2 + 0x1990) = 0;
        *(undefined8 *)(param_2 + 0x1998) = 0;
        *(undefined8 *)(param_2 + 0x19a0) = 0;
        *(undefined8 *)(param_2 + 0x19a8) = 0;
        *(undefined8 *)(param_2 + 0x19b0) = 0;
        fVar18 = (float)(uint)(iVar11 - iVar7) * 8.381903e-08;
        *(undefined8 *)(param_2 + 0x19b8) = 0;
        *(undefined8 *)(param_2 + 0x19c0) = 0;
        *(undefined8 *)(param_2 + 0x19c8) = 0;
        *(undefined8 *)(param_2 + 0x19d0) = 0;
        *(undefined2 *)(param_2 + 0x19d8) = 0;
        bVar4 = true;
        bVar5 = false;
        if (fVar18 < 225.0) {
          bVar4 = false;
          bVar5 = true;
          if (!NAN(fVar18)) {
            bVar4 = fVar18 < 135.0;
            bVar5 = false;
          }
        }
        uVar17 = 0;
        if (bVar4 != bVar5) {
          uVar17 = 3;
        }
        bVar4 = true;
        bVar5 = false;
        if (fVar18 < 135.0) {
          bVar4 = false;
          bVar5 = true;
          if (!NAN(fVar18)) {
            bVar4 = fVar18 < 45.0;
            bVar5 = false;
          }
        }
        if (bVar4 == bVar5) {
          uVar17 = 1;
        }
        iVar11 = (int)(fStack_78 * 4.0);
        *(undefined8 *)(param_2 + 0x1960) = *(undefined8 *)(param_2 + 0x18e0);
        *(undefined8 *)(param_2 + 0x1968) = *(undefined8 *)(param_2 + 0x18e8);
        *(undefined8 *)(param_2 + 0x1970) = *(undefined8 *)(param_2 + 0x18f0);
        *(undefined8 *)(param_2 + 0x1978) = *(undefined8 *)(param_2 + 0x18f8);
        *(int *)(param_2 + 0x1982) = (int)(local_7c * 999.99994);
        if (0x7ffe < iVar11) {
          iVar11 = 0x7fff;
        }
        if (iVar11 < -0x7fff) {
          iVar11 = -0x8000;
        }
        *(short *)(param_2 + 0x1986) = (short)iVar11;
        lVar14 = *(long *)(param_2 + 0x70);
        *(int *)(param_2 + 0x1988) = (int)(local_74 * 999.99994);
        uVar2 = *(undefined2 *)((long)param_5 + 2);
        *(undefined1 *)(param_2 + 0x198d) = uVar17;
        *(byte *)(param_2 + 0x198c) = bVar6 | param_6 & 1;
        *(byte *)(param_2 + 0x198e) = param_7 & 1;
        lVar13 = 0;
        if (lVar14 != 0) {
          lVar13 = lVar14 + 0x278;
        }
        *(undefined2 *)(param_2 + 0x1980) = uVar2;
        uVar12 = 0;
        if (lVar14 != 0) {
          uVar12 = 0;
          if (*(uint *)(lVar14 + 0x280) < 0x149) {
            uVar12 = *(uint *)(lVar14 + 0x280);
          }
        }
        if (uVar12 != 99) {
          *(undefined8 *)(param_2 + 0x18c0) = *(undefined8 *)(param_2 + 0x19c0);
          *(undefined8 *)(param_2 + 0x18c8) = *(undefined8 *)(param_2 + 0x19c8);
          *(undefined8 *)(param_2 + 0x18d0) = *(undefined8 *)(param_2 + 0x19d0);
          *(undefined2 *)(param_2 + 0x18d8) = *(undefined2 *)(param_2 + 0x19d8);
          *(undefined8 *)(param_2 + 0x18a0) = *(undefined8 *)(param_2 + 0x19a0);
          *(undefined8 *)(param_2 + 0x18a8) = *(undefined8 *)(param_2 + 0x19a8);
          *(undefined8 *)(param_2 + 0x18b0) = *(undefined8 *)(param_2 + 0x19b0);
          *(undefined8 *)(param_2 + 0x18b8) = *(undefined8 *)(param_2 + 0x19b8);
          *(undefined8 *)(param_2 + 0x1880) = *(undefined8 *)(param_2 + 0x1980);
          *(undefined8 *)(param_2 + 0x1888) = *(undefined8 *)(param_2 + 0x1988);
          *(undefined8 *)(param_2 + 0x1890) = *(undefined8 *)(param_2 + 0x1990);
          *(undefined8 *)(param_2 + 0x1898) = *(undefined8 *)(param_2 + 0x1998);
          *(undefined8 *)(param_2 + 0x1860) = *(undefined8 *)(param_2 + 0x1960);
          *(undefined8 *)(param_2 + 0x1868) = *(undefined8 *)(param_2 + 0x1968);
          *(undefined8 *)(param_2 + 0x1870) = *(undefined8 *)(param_2 + 0x1970);
          *(undefined8 *)(param_2 + 0x1878) = *(undefined8 *)(param_2 + 0x1978);
          FUN_03ebb160(lVar13,99);
        }
        goto LAB_023f2ecc;
      }
    }
    else {
      pbVar1 = PTR_DAT_04bb32e0;
      if (*(int *)(DAT_04cd19d8 + 0x15c) != 0) {
        pbVar1 = (byte *)(DAT_04cd19d8 + 0x158);
      }
      bVar16 = *(byte *)(param_2 + 0x1ee8);
      bVar15 = *pbVar1;
      if (7 < bVar15) {
        bVar15 = 0xff;
      }
      if (7 < bVar16) {
        bVar16 = 0xff;
      }
      if ((bVar15 == bVar16) || (uVar10 = FUN_0265fc80(0), (uVar10 & 1) == 0)) goto LAB_023f2fb4;
    }
    uVar9 = 0;
  }
  else {
LAB_023f2ecc:
    uVar9 = 1;
  }
  return uVar9;
}


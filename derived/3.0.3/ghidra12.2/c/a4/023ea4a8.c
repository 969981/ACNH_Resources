
bool FUN_023ea4a8(float param_1,long param_2,ulong param_3,float *param_4,uint *param_5,byte param_6
                 )

{
  byte *pbVar1;
  long lVar2;
  ulong uVar3;
  uint uVar4;
  long lVar5;
  byte bVar6;
  byte bVar7;
  int iVar8;
  float fVar9;
  float fVar10;
  undefined1 local_68;
  float local_64;
  float local_60;
  float local_5c;
  undefined4 local_58;
  undefined4 local_54;
  
  if (*(int *)(param_2 + 0x178) != 0) {
    return *(int *)(param_2 + 0x178) == 0;
  }
  if ((param_3 & 1) != 0) {
    return true;
  }
  uVar3 = FUN_0252b6b0(0x40a00000,param_4,(byte *)(param_2 + 0x1ee8),1,1,0,1);
  if ((uVar3 & 1) != 0) {
    return false;
  }
  uVar3 = FUN_01735670(0x40a00000,0xbf800000,param_4,*(undefined4 *)PTR_DAT_04bb3238,
                       *(undefined4 *)PTR_DAT_04bb3238,1,1,0,1,0,0,1);
  if ((uVar3 & 1) != 0) {
    return false;
  }
  uVar3 = FUN_016f0b1c(*(long *)(param_2 + 0x68) + 0x278,param_4,param_5);
  if ((uVar3 & 1) != 0) {
    if ((DAT_04cd19d8 != 0) && (*(int *)(DAT_04cd19d8 + 0x15c) != 0)) {
      pbVar1 = PTR_DAT_04bb32e0;
      if (*(int *)(DAT_04cd19d8 + 0x15c) != 0) {
        pbVar1 = (byte *)(DAT_04cd19d8 + 0x158);
      }
      bVar7 = *(byte *)(param_2 + 0x1ee8);
      bVar6 = *pbVar1;
      if (7 < bVar6) {
        bVar6 = 0xff;
      }
      if (7 < bVar7) {
        bVar7 = 0xff;
      }
      if ((bVar6 != bVar7) && (uVar3 = FUN_0265fc80(), (uVar3 & 1) != 0)) {
        return false;
      }
    }
    local_64 = *param_4;
    local_5c = param_4[2];
    local_60 = param_1;
    uVar3 = FUN_016ebc50(0,&local_64);
    if ((uVar3 & 1) == 0) {
      local_68 = 1;
      fVar9 = (float)NEON_ucvtf(*(undefined4 *)(*(long *)(param_2 + 0x68) + 0x2b4));
      fVar10 = fVar9 * 8.381903e-08 - (float)*param_5 * 8.381903e-08;
      fVar9 = fVar10 + -360.0;
      if (fVar10 <= 180.0) {
        fVar9 = fVar10;
      }
      fVar10 = fVar9 + 360.0;
      if (-180.0 <= fVar9) {
        fVar10 = fVar9;
      }
      if (0.0 <= fVar10) {
        local_68 = 3;
      }
      *(short *)(param_2 + 0x1980) = (short)(*param_5 >> 0x10);
      *(undefined8 *)(param_2 + 0x1988) = 0;
      *(undefined8 *)(param_2 + 0x1990) = 0;
      *(undefined8 *)(param_2 + 0x1998) = 0;
      iVar8 = (int)(local_60 * 4.0);
      *(undefined8 *)(param_2 + 0x1960) = *(undefined8 *)(param_2 + 0x18e0);
      *(undefined8 *)(param_2 + 0x19a0) = 0;
      *(undefined8 *)(param_2 + 0x19a8) = 0;
      *(undefined8 *)(param_2 + 0x1968) = *(undefined8 *)(param_2 + 0x18e8);
      *(undefined8 *)(param_2 + 0x1978) = *(undefined8 *)(param_2 + 0x18f8);
      *(undefined8 *)(param_2 + 0x19b0) = 0;
      *(undefined8 *)(param_2 + 0x19b8) = 0;
      *(undefined8 *)(param_2 + 0x19c0) = 0;
      *(undefined8 *)(param_2 + 0x19c8) = 0;
      *(undefined8 *)(param_2 + 0x19d0) = 0;
      *(undefined2 *)(param_2 + 0x19d8) = 0;
      *(undefined8 *)(param_2 + 0x1970) = *(undefined8 *)(param_2 + 0x18f0);
      if (0x7ffe < iVar8) {
        iVar8 = 0x7fff;
      }
      if (iVar8 < -0x7fff) {
        iVar8 = -0x8000;
      }
      *(short *)(param_2 + 0x1986) = (short)iVar8;
      *(int *)(param_2 + 0x1982) = (int)(local_64 * 999.99994);
      *(int *)(param_2 + 0x1988) = (int)(local_5c * 999.99994);
      *(byte *)(param_2 + 0x198d) = param_6 & 1;
      local_58 = 0x6c;
      lVar5 = *(long *)(param_2 + 0x70);
      *(undefined1 *)(param_2 + 0x198c) = local_68;
      uVar4 = 0;
      lVar2 = 0;
      if (lVar5 != 0) {
        uVar4 = 0;
        if (*(uint *)(lVar5 + 0x280) < 0x149) {
          uVar4 = *(uint *)(lVar5 + 0x280);
        }
        lVar2 = lVar5 + 0x278;
      }
      if (uVar4 != 0x6c) {
        local_54 = 0x6c;
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
        FUN_03ebb160(lVar2,0x6c);
      }
      return true;
    }
  }
  return false;
}


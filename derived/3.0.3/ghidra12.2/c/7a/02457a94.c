
void FUN_02457a94(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  undefined4 uVar8;
  float fVar9;
  float local_3c;
  float local_38;
  float local_34;
  
  puVar1 = &DAT_054e9a58;
  if (*(undefined8 **)(param_1 + 0x4c8) != (undefined8 *)0x0) {
    puVar1 = *(undefined8 **)(param_1 + 0x4c8);
  }
  uVar8 = FUN_016e026c(0,*(long *)(param_1 + 0x68) + 0x278,0,0);
  *(undefined4 *)((long)puVar1 + 0x2ec) = uVar8;
  *(undefined1 *)((long)puVar1 + 0x2e5) = 1;
  if (*(int *)(param_1 + 0x178) == 0) {
    local_38 = (float)(int)*(short *)(param_1 + 0x1906) * 0.25;
    local_3c = (float)*(int *)(param_1 + 0x1902) * 0.001;
    local_34 = (float)*(int *)(param_1 + 0x1908) * 0.001;
    FUN_01261e40(0x40200000,PTR_DAT_04bbe200,&local_3c,0,0);
    if (*(int *)(param_1 + 0x178) == 0) {
      lVar7 = *(long *)PTR_DAT_04bb4f78 + 0x20 + (ulong)(uint)*(byte *)(param_1 + 0x1ee8) * 0x740;
      if (7 < *(byte *)(param_1 + 0x1ee8)) {
        lVar7 = *(long *)PTR_DAT_04bb4f78 + 0x20;
      }
      *(undefined4 *)(lVar7 + 0x424) = 2;
      iVar5 = FUN_01392d64(lVar7 + 0x4c8);
      *(int *)(lVar7 + 0x420) = iVar5;
      *(int *)(lVar7 + 0x4c0) = *(int *)(lVar7 + 0x4c0) + 1;
      if (iVar5 == 1) {
        *(undefined8 *)(param_1 + 0x1980) = 0;
        *(undefined8 *)(param_1 + 0x1988) = 0;
        *(undefined8 *)(param_1 + 0x1990) = 0;
        *(undefined8 *)(param_1 + 0x1998) = 0;
        *(undefined8 *)(param_1 + 0x19a0) = 0;
        *(undefined8 *)(param_1 + 0x1960) = *(undefined8 *)(param_1 + 0x18e0);
        *(undefined8 *)(param_1 + 0x19a8) = 0;
        *(undefined8 *)(param_1 + 0x19b0) = 0;
        *(undefined8 *)(param_1 + 0x1968) = *(undefined8 *)(param_1 + 0x18e8);
        *(undefined8 *)(param_1 + 0x1970) = *(undefined8 *)(param_1 + 0x18f0);
        *(undefined8 *)(param_1 + 0x19b8) = 0;
        *(undefined8 *)(param_1 + 0x19c0) = 0;
        *(undefined8 *)(param_1 + 0x19c8) = 0;
        *(undefined8 *)(param_1 + 0x19d0) = 0;
        *(undefined2 *)(param_1 + 0x19d8) = 0;
        *(undefined8 *)(param_1 + 0x1978) = *(undefined8 *)(param_1 + 0x18f8);
        *(int *)(param_1 + 0x1982) = (int)((float)*(int *)(param_1 + 0x1902) * 0.001 * 999.99994);
        iVar5 = (int)((float)(int)*(short *)(param_1 + 0x1906) * 0.25 * 4.0);
        *(int *)(param_1 + 0x1988) = (int)((float)*(int *)(param_1 + 0x1908) * 0.001 * 999.99994);
        if (0x7ffe < iVar5) {
          iVar5 = 0x7fff;
        }
        if (iVar5 < -0x7fff) {
          iVar5 = -0x8000;
        }
        *(short *)(param_1 + 0x1986) = (short)iVar5;
        lVar7 = *(long *)(param_1 + 0x68);
        *(int *)(param_1 + 0x198c) = (int)(*(float *)(lVar7 + 0x278) * 999.99994);
        iVar5 = (int)(*(float *)(lVar7 + 0x27c) * 4.0);
        if (0x7ffe < iVar5) {
          iVar5 = 0x7fff;
        }
        if (iVar5 < -0x7fff) {
          iVar5 = -0x8000;
        }
        *(short *)(param_1 + 0x1990) = (short)iVar5;
        fVar9 = *(float *)(lVar7 + 0x280);
        *(undefined2 *)(param_1 + 0x1980) = *(undefined2 *)(param_1 + 0x1900);
        *(int *)(param_1 + 0x1992) = (int)(fVar9 * 999.99994);
        *(undefined1 *)(param_1 + 0x1996) = *(undefined1 *)(param_1 + 0x190c);
        uVar6 = FUN_023f2be4(param_1);
        if ((uVar6 & 1) == 0) {
          local_3c = 2.8026e-43;
        }
        else {
          *(undefined2 *)(param_1 + 0x19d8) = 0;
          *(undefined8 *)(param_1 + 0x2090) = *(undefined8 *)(param_1 + 0x19b8);
          *(undefined8 *)(param_1 + 0x2088) = *(undefined8 *)(param_1 + 0x19b0);
          *(undefined8 *)(param_1 + 0x19b0) = 0;
          *(undefined8 *)(param_1 + 0x19b8) = 0;
          *(undefined8 *)(param_1 + 0x2098) = *(undefined8 *)(param_1 + 0x19c0);
          *(undefined8 *)(param_1 + 0x20a0) = *(undefined8 *)(param_1 + 0x19c8);
          uVar2 = *(undefined8 *)(param_1 + 0x1990);
          uVar3 = *(undefined8 *)(param_1 + 0x1998);
          *(undefined8 *)(param_1 + 0x1990) = 0;
          *(undefined8 *)(param_1 + 0x1998) = 0;
          *(undefined8 *)(param_1 + 0x2070) = uVar3;
          uVar3 = *(undefined8 *)(param_1 + 0x19a0);
          uVar4 = *(undefined8 *)(param_1 + 0x19a8);
          *(undefined8 *)(param_1 + 0x2068) = uVar2;
          *(undefined8 *)(param_1 + 0x19a0) = 0;
          *(undefined8 *)(param_1 + 0x19a8) = 0;
          *(undefined8 *)(param_1 + 0x2078) = uVar3;
          uVar2 = *(undefined8 *)(param_1 + 0x1980);
          uVar3 = *(undefined8 *)(param_1 + 0x1988);
          *(undefined8 *)(param_1 + 0x2080) = uVar4;
          *(undefined8 *)(param_1 + 0x1980) = 0;
          *(undefined8 *)(param_1 + 0x1988) = 0;
          *(undefined8 *)(param_1 + 0x2060) = uVar3;
          *(undefined8 *)(param_1 + 0x2058) = uVar2;
          *(undefined8 *)(param_1 + 0x19c0) = 0;
          *(undefined8 *)(param_1 + 0x19c8) = 0;
          *(undefined8 *)(param_1 + 0x19d0) = 0;
          *(undefined8 *)(param_1 + 0x20a6) = *(undefined8 *)(param_1 + 0x19ce);
          *(undefined8 *)(param_1 + 0x1960) = *(undefined8 *)(param_1 + 0x18e0);
          *(undefined8 *)(param_1 + 0x1968) = *(undefined8 *)(param_1 + 0x18e8);
          *(undefined8 *)(param_1 + 0x1970) = *(undefined8 *)(param_1 + 0x18f0);
          *(undefined8 *)(param_1 + 0x1978) = *(undefined8 *)(param_1 + 0x18f8);
          *(undefined2 *)(param_1 + 0x198b) = 0;
          *(undefined1 *)(param_1 + 0x198a) = 7;
          local_3c = 5.88545e-44;
        }
        if ((uint)local_3c < 0x149) {
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
          *(undefined8 *)(param_1 + 0x1870) = *(undefined8 *)(param_1 + 0x1970);
          *(undefined8 *)(param_1 + 0x1878) = *(undefined8 *)(param_1 + 0x1978);
          lVar7 = 0;
          if (*(long *)(param_1 + 0x70) != 0) {
            lVar7 = *(long *)(param_1 + 0x70) + 0x278;
          }
          FUN_03ebb160(lVar7,local_3c);
        }
      }
      else if ((iVar5 != 3) &&
              (uVar6 = FUN_02546f34(param_1 + 0x1ee8,*(undefined4 *)(param_1 + 0x230)),
              (uVar6 & 1) == 0)) {
        local_34 = 0.0;
        local_3c = 8.40779e-45;
        local_38 = (float)CONCAT31(local_38._1_3_,1);
        FUN_02374e74(param_1,&local_3c);
      }
    }
  }
  return;
}


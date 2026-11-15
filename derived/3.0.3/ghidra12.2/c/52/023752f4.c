
void FUN_023752f4(long param_1,uint param_2,uint param_3)

{
  undefined8 *puVar1;
  uint uVar2;
  ulong uVar3;
  int iVar4;
  long lVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  uint local_30;
  undefined8 local_2c;
  undefined1 local_24;
  
  if (7 < param_2) {
switchD_02375338_caseD_2:
    FUN_0237432c(param_1,6);
    return;
  }
  puVar1 = (undefined8 *)(param_1 + 0x1980);
  local_30 = param_3;
  switch(param_2) {
  case 0:
    uVar3 = FUN_02372a04(param_1);
    if (((uVar3 & 1) == 0) &&
       (uVar3 = FUN_02546f34(param_1 + 0x1ee8,*(undefined4 *)(param_1 + 0x230)), (uVar3 & 1) == 0))
    {
      uVar2 = (uint)(undefined4)local_2c >> 8;
      local_2c = CONCAT71((uint7)(uint3)uVar2,1);
      FUN_02374e74(param_1,&local_30);
    }
    break;
  case 1:
    *puVar1 = 0;
    *(undefined8 *)(param_1 + 0x1988) = 0;
    *(undefined8 *)(param_1 + 0x19d0) = 0;
    *(undefined2 *)(param_1 + 0x19d8) = 0;
    *(char *)(param_1 + 0x1981) = (char)param_3;
    *(undefined1 *)(param_1 + 0x1983) = 0;
    *(undefined8 *)(param_1 + 0x1960) = *(undefined8 *)(param_1 + 0x18e0);
    *(undefined8 *)(param_1 + 0x1968) = *(undefined8 *)(param_1 + 0x18e8);
    *(undefined8 *)(param_1 + 0x1970) = *(undefined8 *)(param_1 + 0x18f0);
    *(undefined8 *)(param_1 + 0x1990) = 0;
    *(undefined8 *)(param_1 + 0x1998) = 0;
    *(undefined8 *)(param_1 + 0x19a0) = 0;
    *(undefined8 *)(param_1 + 0x19a8) = 0;
    *(undefined8 *)(param_1 + 0x1978) = *(undefined8 *)(param_1 + 0x18f8);
    *(undefined8 *)(param_1 + 0x19b0) = 0;
    *(undefined8 *)(param_1 + 0x19b8) = 0;
    *(undefined8 *)(param_1 + 0x19c0) = 0;
    *(undefined8 *)(param_1 + 0x19c8) = 0;
    *(undefined1 *)puVar1 = 1;
    local_30 = 0x19;
    goto LAB_023754e4;
  case 2:
    goto switchD_02375338_caseD_2;
  case 3:
    lVar5 = *(long *)(param_1 + 0x68);
    fVar6 = *(float *)(lVar5 + 0x278);
    fVar7 = *(float *)(lVar5 + 0x27c);
    fVar8 = *(float *)(lVar5 + 0x280);
    *(undefined8 *)(param_1 + 0x1990) = 0;
    *(undefined8 *)(param_1 + 0x1998) = 0;
    *(undefined8 *)(param_1 + 0x19a0) = 0;
    *(undefined8 *)(param_1 + 0x19a8) = 0;
    *(undefined8 *)(param_1 + 0x19b0) = 0;
    *(undefined8 *)(param_1 + 0x19b8) = 0;
    *(undefined8 *)(param_1 + 0x19c0) = 0;
    *(undefined8 *)(param_1 + 0x19c8) = 0;
    *(undefined8 *)(param_1 + 0x19d0) = 0;
    *(undefined2 *)(param_1 + 0x19d8) = 0;
    *(undefined8 *)(param_1 + 0x1960) = *(undefined8 *)(param_1 + 0x18e0);
    *(undefined8 *)(param_1 + 0x1968) = *(undefined8 *)(param_1 + 0x18e8);
    *(undefined8 *)(param_1 + 0x1970) = *(undefined8 *)(param_1 + 0x18f0);
    *(undefined8 *)(param_1 + 0x1978) = *(undefined8 *)(param_1 + 0x18f8);
    *(undefined8 *)(param_1 + 0x198d) = 0;
    *(undefined1 *)puVar1 = 0xf;
    *(int *)(param_1 + 0x1981) = (int)(fVar6 * 999.99994);
    iVar4 = (int)(fVar7 * 4.0);
    if (0x7ffe < iVar4) {
      iVar4 = 0x7fff;
    }
    if (iVar4 < -0x7fff) {
      iVar4 = -0x8000;
    }
    *(short *)(param_1 + 0x1985) = (short)iVar4;
    *(undefined2 *)(param_1 + 0x198b) = 0x8000;
    *(int *)(param_1 + 0x1987) = (int)(fVar8 * 999.99994);
    *(undefined4 *)(param_1 + 0xc14) = 0;
    *(undefined1 *)(param_1 + 0x1995) = 0;
    *(undefined8 *)(param_1 + 0xc0c) = 0;
    local_30 = 0x7a;
LAB_023754e4:
    if (local_30 < 0x149) {
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
      lVar5 = 0;
      if (*(long *)(param_1 + 0x70) != 0) {
        lVar5 = *(long *)(param_1 + 0x70) + 0x278;
      }
      FUN_03ebb160(lVar5,local_30);
    }
    break;
  case 4:
    uVar3 = FUN_02372a04(param_1);
    if ((uVar3 & 1) == 0) {
      local_24 = 0;
      local_2c = 0x10000;
      FUN_02374564(param_1,&local_30);
    }
    break;
  case 5:
    uVar3 = FUN_02372a04(param_1);
    if ((uVar3 & 1) == 0) {
      FUN_023736d8(param_1);
      return;
    }
    break;
  case 6:
    uVar3 = FUN_02372a04(param_1);
    if ((uVar3 & 1) == 0) {
      FUN_0253dcc0(param_1 + 0x1ee8);
      return;
    }
    break;
  case 7:
    FUN_0241eca0(param_1);
    return;
  }
  return;
}


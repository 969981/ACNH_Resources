
bool FUN_023fd3fc(undefined1 param_1 [16],float param_2,float param_3,long param_4,
                 undefined8 *param_5,byte param_6,byte param_7,uint param_8)

{
  uint *puVar1;
  long lVar2;
  int iVar3;
  short sVar4;
  undefined8 uVar5;
  int iVar6;
  float fVar7;
  undefined4 local_48;
  undefined4 local_44;
  
  iVar3 = *(int *)(param_4 + 0x178);
  if ((iVar3 != 0) || ((param_8 & 1) != 0)) goto LAB_023fd5f4;
  *(undefined8 *)(param_4 + 0x1980) = 0;
  *(undefined8 *)(param_4 + 0x1988) = 0;
  *(undefined8 *)(param_4 + 0x1990) = 0;
  *(undefined8 *)(param_4 + 0x1998) = 0;
  *(undefined8 *)(param_4 + 0x1960) = *(undefined8 *)(param_4 + 0x18e0);
  *(undefined8 *)(param_4 + 0x19a0) = 0;
  *(undefined8 *)(param_4 + 0x19a8) = 0;
  *(undefined8 *)(param_4 + 0x19b0) = 0;
  *(undefined8 *)(param_4 + 0x19b8) = 0;
  *(undefined8 *)(param_4 + 0x19c0) = 0;
  *(undefined8 *)(param_4 + 0x19c8) = 0;
  *(undefined8 *)(param_4 + 0x19d0) = 0;
  *(undefined2 *)(param_4 + 0x19d8) = 0;
  *(undefined8 *)(param_4 + 0x1968) = *(undefined8 *)(param_4 + 0x18e8);
  *(undefined8 *)(param_4 + 0x1970) = *(undefined8 *)(param_4 + 0x18f0);
  *(undefined8 *)(param_4 + 0x1978) = *(undefined8 *)(param_4 + 0x18f8);
  fVar7 = (float)FUN_0251c628(param_4 + 0x1ee8);
  iVar6 = (int)(param_2 * 4.0);
  *(int *)(param_4 + 0x1982) = (int)(fVar7 * 999.99994);
  if (0x7ffe < iVar6) {
    iVar6 = 0x7fff;
  }
  if (iVar6 < -0x7fff) {
    iVar6 = -0x8000;
  }
  *(short *)(param_4 + 0x1986) = (short)iVar6;
  *(int *)(param_4 + 0x1988) = (int)(param_3 * 999.99994);
  local_48 = *(undefined4 *)(param_4 + 0x230);
  sVar4 = *(short *)PTR_DAT_04bb6298;
  if (sVar4 == -1) {
LAB_023fd534:
    FUN_016f742c(&local_44,&local_48,0);
  }
  else {
    local_44 = 1;
    puVar1 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar4 * 8);
    if (0xff < (uint)(int)sVar4) {
      puVar1 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((*puVar1 >> 1 & 1) == 0) goto LAB_023fd534;
    local_44._2_2_ = 0;
  }
  *(undefined2 *)(param_4 + 0x1980) = local_44._2_2_;
  uVar5 = *param_5;
  *(byte *)(param_4 + 0xbf9) = param_6 & 1;
  *(byte *)(param_4 + 0xbfa) = param_7 & 1;
  *(undefined8 *)(param_4 + 0x198c) = uVar5;
  local_44 = 0xd2;
  *(undefined8 *)(param_4 + 0x18c0) = *(undefined8 *)(param_4 + 0x19c0);
  *(undefined8 *)(param_4 + 0x18c8) = *(undefined8 *)(param_4 + 0x19c8);
  *(undefined8 *)(param_4 + 0x18d0) = *(undefined8 *)(param_4 + 0x19d0);
  *(undefined2 *)(param_4 + 0x18d8) = *(undefined2 *)(param_4 + 0x19d8);
  *(undefined8 *)(param_4 + 0x18a0) = *(undefined8 *)(param_4 + 0x19a0);
  *(undefined8 *)(param_4 + 0x18a8) = *(undefined8 *)(param_4 + 0x19a8);
  *(undefined8 *)(param_4 + 0x18b0) = *(undefined8 *)(param_4 + 0x19b0);
  *(undefined8 *)(param_4 + 0x18b8) = *(undefined8 *)(param_4 + 0x19b8);
  *(undefined8 *)(param_4 + 0x1880) = *(undefined8 *)(param_4 + 0x1980);
  *(undefined8 *)(param_4 + 0x1888) = *(undefined8 *)(param_4 + 0x1988);
  *(undefined8 *)(param_4 + 0x1890) = *(undefined8 *)(param_4 + 0x1990);
  *(undefined8 *)(param_4 + 0x1898) = *(undefined8 *)(param_4 + 0x1998);
  *(undefined8 *)(param_4 + 0x1860) = *(undefined8 *)(param_4 + 0x1960);
  *(undefined8 *)(param_4 + 0x1868) = *(undefined8 *)(param_4 + 0x1968);
  *(undefined8 *)(param_4 + 0x1878) = *(undefined8 *)(param_4 + 0x1978);
  *(undefined8 *)(param_4 + 0x1870) = *(undefined8 *)(param_4 + 0x1970);
  lVar2 = 0;
  if (*(long *)(param_4 + 0x70) != 0) {
    lVar2 = *(long *)(param_4 + 0x70) + 0x278;
  }
  FUN_03ebb160(lVar2,0xd2);
LAB_023fd5f4:
  return iVar3 == 0;
}


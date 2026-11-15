
void FUN_024bfb68(long param_1,float *param_2)

{
  uint *puVar1;
  long lVar2;
  undefined *puVar3;
  ulong uVar4;
  ushort uVar5;
  int iVar6;
  uint uVar7;
  byte bVar8;
  float fVar9;
  undefined4 local_4c;
  undefined4 local_48;
  float fStack_44;
  undefined8 local_40;
  float local_38;
  undefined4 local_34;
  
  *(undefined8 *)(param_1 + 0x1980) = 0;
  *(undefined8 *)(param_1 + 0x1988) = 0;
  *(undefined8 *)(param_1 + 0x1990) = 0;
  *(undefined8 *)(param_1 + 0x1998) = 0;
  *(undefined8 *)(param_1 + 0x19a0) = 0;
  *(undefined8 *)(param_1 + 0x19a8) = 0;
  *(undefined8 *)(param_1 + 0x19b0) = 0;
  *(undefined8 *)(param_1 + 0x1960) = *(undefined8 *)(param_1 + 0x18e0);
  *(undefined8 *)(param_1 + 0x19b8) = 0;
  *(undefined8 *)(param_1 + 0x19c0) = 0;
  *(undefined8 *)(param_1 + 0x19c8) = 0;
  *(undefined8 *)(param_1 + 0x19d0) = 0;
  *(undefined2 *)(param_1 + 0x19d8) = 0;
  *(undefined8 *)(param_1 + 0x1968) = *(undefined8 *)(param_1 + 0x18e8);
  *(undefined8 *)(param_1 + 0x1970) = *(undefined8 *)(param_1 + 0x18f0);
  *(undefined8 *)(param_1 + 0x1978) = *(undefined8 *)(param_1 + 0x18f8);
  local_40 = *(undefined8 *)(param_2 + 3);
  local_38 = param_2[5];
  fVar9 = (float)FUN_016e026c(0,&local_40,0,0);
  local_40 = CONCAT44(fVar9,(float)local_40);
  *(int *)(param_1 + 0x1980) = (int)(*param_2 * 999.99994);
  iVar6 = (int)(param_2[1] * 4.0);
  if (0x7ffe < iVar6) {
    iVar6 = 0x7fff;
  }
  if (iVar6 < -0x7fff) {
    iVar6 = -0x8000;
  }
  *(short *)(param_1 + 0x1984) = (short)iVar6;
  iVar6 = (int)(fVar9 * 4.0);
  fVar9 = param_2[2];
  *(int *)(param_1 + 0x1990) = (int)(local_38 * 999.99994);
  if (0x7ffe < iVar6) {
    iVar6 = 0x7fff;
  }
  if (iVar6 < -0x7fff) {
    iVar6 = -0x8000;
  }
  *(short *)(param_1 + 0x198e) = (short)iVar6;
  *(int *)(param_1 + 0x1986) = (int)(fVar9 * 999.99994);
  *(int *)(param_1 + 0x198a) = (int)((float)local_40 * 999.99994);
  *(undefined2 *)(param_1 + 0x1994) = *(undefined2 *)((long)param_2 + 0x1a);
  puVar3 = PTR_DAT_04bb6298;
  local_34 = *(undefined4 *)(param_1 + 0x230);
  uVar5 = *(ushort *)PTR_DAT_04bb6298;
  if (uVar5 == 0xffff) {
LAB_024bfcf0:
    FUN_016f742c(&local_48,&local_34,0);
    uVar5 = *(ushort *)puVar3;
  }
  else {
    local_48 = 1.4013e-45;
    puVar1 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)(short)uVar5 * 8);
    if (0xff < uVar5) {
      puVar1 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((*puVar1 >> 1 & 1) == 0) goto LAB_024bfcf0;
    local_48._2_2_ = 0;
  }
  *(undefined2 *)(param_1 + 0x1996) = local_48._2_2_;
  local_4c = 1;
  *(undefined8 *)(param_1 + 0x1998) = *(undefined8 *)(param_2 + 7);
  local_48 = param_2[7];
  fStack_44 = param_2[8];
  if (uVar5 == 0xffff) {
LAB_024bfd78:
    bVar8 = *(byte *)(param_1 + 0x1ee8);
    if (7 < bVar8) {
      bVar8 = 0xff;
    }
    local_34 = CONCAT31(local_34._1_3_,bVar8);
    FUN_02669430(&local_34);
    uVar4 = FUN_025579bc(param_1 + 0x1ee8,&local_48,&local_4c);
    uVar7 = *(uint *)(param_1 + 0x17cc);
    if ((uVar4 & 1) != 0) {
      *(uint *)(param_1 + 0x17cc) = uVar7 | 0x40;
      local_34 = 3;
      goto LAB_024bfdcc;
    }
  }
  else {
    local_34 = 0;
    puVar1 = (uint *)(PTR_DAT_04bc39f8 + ((long)(short)uVar5 & 0xffffffffU) * 8);
    if (0xff < uVar5) {
      puVar1 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((*puVar1 >> 0x15 & 1) == 0) goto LAB_024bfd78;
    uVar7 = *(uint *)(param_1 + 0x17cc);
  }
  *(uint *)(param_1 + 0x17cc) = uVar7 & 0xffffffbf;
  local_34 = 2;
LAB_024bfdcc:
  *(char *)(param_1 + 0x19a0) = (char)local_34;
  local_40 = CONCAT44(local_40._4_4_,0x33);
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
  FUN_03ebb160(lVar2,0x33);
  return;
}


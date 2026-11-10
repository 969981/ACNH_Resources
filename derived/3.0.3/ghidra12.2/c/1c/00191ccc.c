
int FUN_00191ccc(long param_1,long *param_2,undefined8 param_3)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  byte *pbVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  
  pbVar4 = (byte *)*param_2;
  bVar1 = *pbVar4;
  if (bVar1 - 0x30 < 10) {
    iVar5 = -0x30;
    *param_2 = (long)(pbVar4 + 1);
    uVar6 = (uint)pbVar4[1];
    if (pbVar4[1] - 0x30 < 10) goto LAB_00191d28;
LAB_00191d70:
    if (uVar6 - 0x41 < 6) {
      iVar7 = -0x37;
      *param_2 = (long)(pbVar4 + 2);
      bVar2 = pbVar4[2];
      goto joined_r0x00191d94;
    }
    if (5 < uVar6 - 0x61) goto LAB_00191e84;
    iVar7 = -0x57;
    *param_2 = (long)(pbVar4 + 2);
    uVar8 = (uint)pbVar4[2];
    if (pbVar4[2] - 0x30 < 10) goto LAB_00191d98;
LAB_00191de0:
    if (uVar8 - 0x41 < 6) {
      iVar9 = -0x37;
      *param_2 = (long)(pbVar4 + 3);
      bVar2 = pbVar4[3];
    }
    else {
      if (5 < uVar8 - 0x61) goto LAB_00191e84;
      iVar9 = -0x57;
      *param_2 = (long)(pbVar4 + 3);
      bVar2 = pbVar4[3];
    }
  }
  else {
    if (bVar1 - 0x41 < 6) {
      iVar5 = -0x37;
      *param_2 = (long)(pbVar4 + 1);
      bVar2 = pbVar4[1];
    }
    else {
      if (5 < bVar1 - 0x61) goto LAB_00191e84;
      iVar5 = -0x57;
      *param_2 = (long)(pbVar4 + 1);
      bVar2 = pbVar4[1];
    }
    uVar6 = (uint)bVar2;
    if (9 < bVar2 - 0x30) goto LAB_00191d70;
LAB_00191d28:
    iVar7 = -0x30;
    *param_2 = (long)(pbVar4 + 2);
    bVar2 = pbVar4[2];
joined_r0x00191d94:
    uVar8 = (uint)bVar2;
    if (9 < bVar2 - 0x30) goto LAB_00191de0;
LAB_00191d98:
    iVar9 = -0x30;
    *param_2 = (long)(pbVar4 + 3);
    bVar2 = pbVar4[3];
  }
  uVar3 = (uint)bVar2;
  if (bVar2 - 0x30 < 10) {
    iVar10 = -0x30;
  }
  else if (uVar3 - 0x41 < 6) {
    iVar10 = -0x37;
  }
  else {
    if (5 < uVar3 - 0x61) {
LAB_00191e84:
      *(undefined8 *)(param_1 + 0x38) = param_3;
      *(undefined4 *)(param_1 + 0x30) = 8;
      return 0;
    }
    iVar10 = -0x57;
  }
  *param_2 = (long)(pbVar4 + 4);
  return uVar3 + (uVar8 + (uVar6 + (iVar5 + (uint)bVar1) * 0x10 + iVar7) * 0x10 + iVar9) * 0x10 +
         iVar10;
}



void FUN_020f28c4(byte *param_1,byte *param_2)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  byte bVar4;
  undefined *puVar5;
  bool bVar6;
  int iVar7;
  undefined8 uVar8;
  byte *pbVar9;
  byte bVar10;
  undefined2 uVar11;
  undefined4 uVar12;
  long lVar13;
  undefined1 uVar14;
  undefined4 uVar15;
  ulong uVar16;
  byte local_48 [4];
  undefined4 local_44;
  byte local_40 [4];
  undefined4 local_3c;
  undefined4 local_38;
  byte local_34;
  undefined4 local_18;
  undefined2 local_14;
  undefined1 local_12;
  
  puVar5 = PTR_DAT_04bb27d0;
  lVar13 = **(long **)PTR_DAT_04bb27d0;
  bVar10 = *(byte *)(lVar13 + 0x473);
  if ((long)(char)bVar10 == 0xffffffffffffffff) {
LAB_020f2918:
    bVar6 = *(int *)(PTR_DAT_04bc3a80 + 0x38) == -0x24a26848;
  }
  else {
    uVar16 = (long)(char)bVar10 & 0xffffffff;
    pbVar9 = (byte *)(lVar13 + 0x48) + uVar16 * 0x80;
    if (7 < bVar10) {
      pbVar9 = (byte *)(lVar13 + 0x48);
    }
    if ((*pbVar9 >> 3 & 1) == 0) goto LAB_020f2918;
    lVar1 = (*(long **)PTR_DAT_04bb27d0)[2] + 0x108;
    lVar2 = lVar1 + uVar16 * 0xc;
    if (0xb < bVar10) {
      lVar2 = lVar1;
    }
    if (*(char *)(lVar2 + 10) == '\0') {
      if (*(byte *)(lVar13 + 0x472) != bVar10) {
LAB_020f2a2c:
        FUN_0205bc94(*(undefined8 *)PTR_DAT_04bbcee0,param_1);
        return;
      }
      bVar6 = false;
    }
    else {
      bVar6 = *(int *)(PTR_DAT_04bc3a80 + 0x38) == -0x24a26848;
      if (*(byte *)(lVar13 + 0x472) != bVar10) {
        if ((*(int *)(PTR_DAT_04bc3a80 + 0x38) != -0x24a26848) || (*param_1 != 1))
        goto LAB_020f2a2c;
        local_48[0] = *param_2;
        pbVar9 = local_48;
        goto LAB_020f2a60;
      }
    }
  }
  if (0xb < *param_1) {
    return;
  }
  uVar15 = 2;
  lVar13 = *(long *)PTR_DAT_04bbcee0;
  uVar12 = 3;
  switch(*param_1) {
  case 0:
    local_3c = FUN_0205c218(lVar13,param_1,param_2);
    switch(local_3c) {
    case 0:
      bVar10 = *param_2;
      uVar8 = 5;
      goto LAB_020f2c94;
    default:
      return;
    case 2:
      bVar10 = *param_2;
      uVar8 = 8;
      break;
    case 3:
      bVar10 = *param_2;
      uVar8 = 7;
      break;
    case 4:
      bVar10 = *param_2;
      uVar8 = 6;
      break;
    case 5:
      bVar10 = *param_2;
      uVar8 = 9;
LAB_020f2c94:
      bVar4 = param_1[8];
      uVar11 = *(undefined2 *)(param_1 + 2);
      goto LAB_020f2ca4;
    }
    bVar4 = param_1[8];
    uVar11 = *(undefined2 *)(param_1 + 2);
LAB_020f2ca4:
    local_18 = CONCAT31(local_18._1_3_,bVar10);
    FUN_020f2d9c(&local_18,uVar8,uVar11,0,0,bVar4);
    return;
  case 1:
    if (!bVar6) {
      return;
    }
    local_40[0] = *param_2;
    pbVar9 = local_40;
LAB_020f2a60:
    FUN_020f2e70(param_1,pbVar9);
    return;
  case 2:
    FUN_0205bf10(lVar13,param_1);
    uVar11 = *(undefined2 *)(param_1 + 2);
    uVar14 = 2;
    goto LAB_020f2b9c;
  case 3:
    bVar10 = param_1[8];
    lVar1 = lVar13 + 0x90 + (ulong)bVar10 * 0x38;
    if (9 < bVar10) {
      lVar1 = lVar13 + 0x90;
    }
    uVar3 = (uint)*(ushort *)(lVar1 + 0x30) | 1 << (ulong)(*param_2 & 0x1f);
    *(short *)(lVar1 + 0x30) = (short)uVar3;
    puVar5 = PTR_DAT_04bb4760;
    if (((uVar3 ^ 0xffffffff) & 0xffff) != 0) {
      return;
    }
    lVar13 = (ulong)bVar10 + 0x62;
    local_3c = (uint)lVar13;
    uVar11 = *(undefined2 *)(param_1 + 2);
    bVar4 = *PTR_DAT_04bb5018;
    lVar1 = *(long *)PTR_DAT_04bb4760 + lVar13 * 0x15;
    if (0x6c < local_3c) {
      lVar1 = *(long *)PTR_DAT_04bb4760;
    }
    *(byte *)(lVar1 + 7) = bVar4 >> 6 | 4;
    *(byte *)(lVar1 + 6) = bVar4 >> 6 | bVar4 << 2;
    *(undefined1 *)(lVar1 + 4) = 0xff;
    *(byte *)(lVar1 + 5) = bVar4 << 2 | 3;
    uVar8 = *(undefined8 *)puVar5;
    *(byte *)(lVar1 + 8) = *(byte *)(lVar1 + 8) & 0xc0;
    *(byte *)(lVar1 + 0xb) = *(byte *)(lVar1 + 0xb) & 0x3f;
    *(byte *)(lVar1 + 0xc) = *(byte *)(lVar1 + 0xc) & 0xfc;
    FUN_020ea498(uVar8,lVar13,0,0);
    FUN_020f27f0(4,uVar11,0,0,bVar10);
    return;
  case 4:
    iVar7 = FUN_0205c0e0(lVar13,param_1);
    if (iVar7 != 0) {
      return;
    }
    uVar11 = *(undefined2 *)(param_1 + 2);
    uVar14 = 4;
    local_44 = 0;
LAB_020f2b9c:
    local_38 = 0;
    local_34 = param_1[8];
    local_3c = CONCAT22(uVar11,(undefined2)local_3c);
    local_3c = CONCAT31(local_3c._1_3_,uVar14);
    local_18 = 0;
    local_12 = 0;
    local_14 = 0xff00;
    if (DAT_053d16a0 < 0) {
      return;
    }
    FUN_01db1df0(**(long **)puVar5 + 0x480,DAT_053d16a0,&local_18,&local_3c,10,0);
    return;
  case 5:
    goto switchD_020f2968_caseD_5;
  case 6:
    uVar12 = 4;
    break;
  case 8:
    uVar12 = 2;
    break;
  case 9:
    uVar12 = 5;
    break;
  case 10:
    goto switchD_020f2968_caseD_a;
  case 0xb:
    uVar15 = 5;
    goto switchD_020f2968_caseD_a;
  }
  *(undefined4 *)(lVar13 + 0x2c4) = uVar12;
  uVar3 = 0;
LAB_020f2c30:
  *(byte *)(lVar13 + 0x2cc) = *(byte *)(lVar13 + 0x2cc) & ((byte)(1 << (ulong)uVar3) ^ 0xff);
switchD_020f2968_caseD_5:
  return;
switchD_020f2968_caseD_a:
  *(undefined4 *)(lVar13 + 0x2c8) = uVar15;
  uVar3 = 1;
  goto LAB_020f2c30;
}



/* WARNING: Type propagation algorithm not settling */

void FUN_03b402d8(long *param_1,uint param_2,int param_3)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined8 *puVar3;
  int iVar4;
  long lVar5;
  int *piVar6;
  byte bVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  undefined4 local_68 [2];
  undefined4 *local_60;
  byte local_4c [4];
  int local_48;
  int local_44;
  
  if (param_1[2] == 0) {
    return;
  }
  uVar11 = *(uint *)(param_1 + 5);
  if ((int)uVar11 < 0) {
    uVar11 = 0;
    *(undefined4 *)(param_1 + 5) = 0;
    if (param_3 == 0 && param_2 == 0) goto LAB_03b4035c;
  }
  else if (param_3 == 0 && param_2 == 0) {
LAB_03b4035c:
    *(undefined4 *)(param_1 + 5) = 0;
    return;
  }
  lVar5 = *(long *)(*(long *)(*param_1 + 0x120) + 8);
  puVar3 = *(undefined8 **)(lVar5 + 0x38);
  if (DAT_05aebc00 != '\0') {
    puVar3 = (undefined8 *)(lVar5 + 0x70);
  }
  if (puVar3 == (undefined8 *)0x0) {
    return;
  }
  lVar5 = puVar3[1];
  if (lVar5 == 0) {
    local_4c[0] = 0;
  }
  else {
    local_4c[0] = *(byte *)(lVar5 + 0x2c) >> 2 & 1;
  }
  piVar6 = (int *)*puVar3;
  if (((piVar6 == (int *)0x0) || (*piVar6 != 0x56415742)) ||
     ((0xfe < (byte)(*(ushort *)(piVar6 + 1) >> 8) && ((*(ushort *)(piVar6 + 1) & 0xff) == 0xfe))))
  {
    local_44 = 0;
    local_48 = 0;
  }
  else {
    if ((*(short *)((long)piVar6 + 6) == 1) &&
       (*(ushort *)((long)piVar6 + 0x4a) < *(ushort *)(piVar6 + 0x12))) {
      local_48 = piVar6[(ulong)*(ushort *)((long)piVar6 + 0x4a) * 3 + 0x14];
    }
    else {
      local_48 = 0;
    }
    if (*(short *)((long)piVar6 + 6) == 1) {
      local_44 = piVar6[0x13];
    }
    else {
      local_44 = 0;
    }
  }
  if (lVar5 == 0) {
    local_68[0] = 0;
    local_60 = (undefined4 *)0x0;
    if (uVar11 == 0 && param_3 == 0) goto LAB_03b40418;
    iVar4 = (int)param_1[3];
joined_r0x03b403e4:
    bVar7 = 0;
  }
  else {
    if (*(uint *)(lVar5 + 0x14) == 0) {
      local_60 = (undefined4 *)0x0;
      local_68[0] = 0;
    }
    else {
      puVar1 = (undefined4 *)((ulong)*(uint *)(lVar5 + 0x14) + lVar5);
      local_60 = puVar1 + 1;
      local_68[0] = *puVar1;
    }
    if (uVar11 == 0 && param_3 == 0) {
LAB_03b40418:
      if (0 < *(int *)((long)param_1 + 0x2c)) {
        FUN_03b40760(param_1,local_68,0,*(int *)((long)param_1 + 0x2c),local_4c,1);
        if (param_1[1] != 0) {
          FUN_03b40760(param_1,param_1[1],0,*(undefined4 *)((long)param_1 + 0x2c),local_4c,1);
        }
        uVar11 = *(uint *)((long)param_1 + 0x2c);
        *(uint *)(param_1 + 5) = uVar11;
        lVar5 = puVar3[1];
      }
      bVar7 = 0;
      if (lVar5 != 0) {
        bVar7 = *(byte *)(lVar5 + 0x2c) >> 2 & 1;
      }
      iVar4 = (int)param_1[3];
      piVar6 = (int *)*puVar3;
      if ((((piVar6 == (int *)0x0) || (*piVar6 != 0x56415742)) ||
          ((0xfe < (byte)(*(ushort *)(piVar6 + 1) >> 8) &&
           ((*(ushort *)(piVar6 + 1) & 0xff) == 0xfe)))) || (*(short *)((long)piVar6 + 6) != 1)) {
        iVar9 = 0;
        iVar10 = 0;
        uVar8 = param_2 - iVar4;
        if (bVar7 == 0) goto LAB_03b406f0;
LAB_03b404e4:
        if (iVar4 < 0) {
          if (iVar10 <= (int)uVar8) {
            uVar8 = (iVar9 + uVar8) - iVar10;
          }
        }
        else {
          uVar2 = uVar8 & ((int)uVar8 >> 0x1f ^ 0xffffffffU);
          uVar8 = param_2;
          if (iVar4 != 0) {
            uVar8 = uVar2;
          }
        }
      }
      else {
        if (*(ushort *)((long)piVar6 + 0x4a) < *(ushort *)(piVar6 + 0x12)) {
          iVar9 = piVar6[(ulong)*(ushort *)((long)piVar6 + 0x4a) * 3 + 0x14];
        }
        else {
          iVar9 = 0;
        }
        iVar10 = piVar6[0x13];
        uVar8 = param_2 - iVar4;
        if (bVar7 != 0) goto LAB_03b404e4;
LAB_03b406f0:
        uVar8 = uVar8 & ((int)uVar8 >> 0x1f ^ 0xffffffffU);
      }
      if ((int)uVar8 <= (int)uVar11) {
        uVar8 = uVar11;
      }
      goto LAB_03b406fc;
    }
    iVar4 = (int)param_1[3];
    if (lVar5 == 0) goto joined_r0x03b403e4;
    bVar7 = *(byte *)(lVar5 + 0x2c) >> 2 & 1;
  }
  if ((((piVar6 == (int *)0x0) || (*piVar6 != 0x56415742)) ||
      ((0xfe < (byte)(*(ushort *)(piVar6 + 1) >> 8) && ((*(ushort *)(piVar6 + 1) & 0xff) == 0xfe))))
     || (*(short *)((long)piVar6 + 6) != 1)) {
    iVar9 = 0;
    iVar10 = 0;
    uVar8 = param_2 - iVar4;
    if (bVar7 != 0) goto LAB_03b40590;
LAB_03b4060c:
    uVar8 = uVar8 & ((int)uVar8 >> 0x1f ^ 0xffffffffU);
  }
  else {
    if (*(ushort *)((long)piVar6 + 0x4a) < *(ushort *)(piVar6 + 0x12)) {
      iVar9 = piVar6[(ulong)*(ushort *)((long)piVar6 + 0x4a) * 3 + 0x14];
    }
    else {
      iVar9 = 0;
    }
    iVar10 = piVar6[0x13];
    uVar8 = param_2 - iVar4;
    if (bVar7 == 0) goto LAB_03b4060c;
LAB_03b40590:
    if (iVar4 < 0) {
      if (iVar10 <= (int)uVar8) {
        uVar8 = (iVar9 + uVar8) - iVar10;
      }
    }
    else if (iVar4 != 0) {
      if (param_3 < 1) goto LAB_03b4060c;
      if ((int)uVar8 < iVar9) {
        uVar8 = (uVar8 - iVar9) + iVar10;
      }
    }
  }
  bVar7 = 0;
  if (lVar5 != 0) {
    bVar7 = *(byte *)(lVar5 + 0x2c) >> 2 & 1;
  }
  if ((((piVar6 == (int *)0x0) || (*piVar6 != 0x56415742)) ||
      ((0xfe < (byte)(*(ushort *)(piVar6 + 1) >> 8) && ((*(ushort *)(piVar6 + 1) & 0xff) == 0xfe))))
     || (*(short *)((long)piVar6 + 6) != 1)) {
    iVar10 = 0;
    iVar9 = 0;
  }
  else {
    if (*(ushort *)((long)piVar6 + 0x4a) < *(ushort *)(piVar6 + 0x12)) {
      iVar9 = piVar6[(ulong)*(ushort *)((long)piVar6 + 0x4a) * 3 + 0x14];
    }
    else {
      iVar9 = 0;
    }
    iVar10 = piVar6[0x13];
  }
  uVar11 = uVar11 - iVar4;
  if (bVar7 != 0) {
    if (iVar4 < 0) {
      if (iVar10 <= (int)uVar11) {
        uVar11 = (iVar9 + uVar11) - iVar10;
      }
      goto LAB_03b406fc;
    }
    if (iVar4 == 0) goto LAB_03b406fc;
    if (0 < param_3) {
      if ((int)uVar11 < iVar9) {
        uVar11 = (uVar11 - iVar9) + iVar10;
      }
      goto LAB_03b406fc;
    }
  }
  uVar11 = uVar11 & ((int)uVar11 >> 0x1f ^ 0xffffffffU);
LAB_03b406fc:
  FUN_03b40760(param_1,local_68,uVar11,uVar8,local_4c,0);
  if (param_1[1] != 0) {
    FUN_03b40760(param_1,param_1[1],uVar11,uVar8,local_4c,0);
  }
  *(uint *)(param_1 + 5) = param_2;
  return;
}


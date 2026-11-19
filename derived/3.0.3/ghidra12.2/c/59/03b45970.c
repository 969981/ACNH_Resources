
int FUN_03b45970(long param_1,undefined8 *param_2,long *param_3)

{
  char *pcVar1;
  byte *pbVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  byte bVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  undefined8 *puVar10;
  long *plVar11;
  long lVar12;
  ulong uVar13;
  char cVar14;
  byte *pbVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  byte *pbVar19;
  long lVar20;
  ushort uVar21;
  float fVar22;
  int local_58;
  undefined2 uStack_54;
  undefined2 uStack_52;
  undefined6 uStack_50;
  int local_44;
  
  pcVar1 = DAT_05aebb78;
  if (*(char *)(param_1 + 8) == '\0') {
    return 10;
  }
  if (*DAT_05aebb78 == '\0') {
    return 2;
  }
  if (param_3 == (long *)0x0) {
    lVar12 = *(long *)(param_1 + 0x108);
  }
  else {
    lVar12 = *param_3;
    *(long *)(param_1 + 0x108) = lVar12;
  }
  if (lVar12 == 0) {
    lVar12 = *(long *)(*(long *)(pcVar1 + 0x18) + 0x18);
    *(long *)(param_1 + 0x108) = lVar12;
  }
  if (*(int *)(lVar12 + 0x19c) != -1) {
    return 3;
  }
  lVar12 = *(long *)(*(long *)(param_1 + 0x120) + 8);
  if (DAT_05aebc00 == '\0') {
    if (*(long *)(lVar12 + 0x38) == 0) {
      local_44 = 10;
    }
    else {
      if ((*(byte *)((long)param_2 + 0x11) >> 5 & 1) == 0) {
        iVar8 = FUN_02a0c760(*(undefined1 *)(param_2 + 2));
        local_58 = 0;
        if (iVar8 != -1) {
          local_58 = iVar8;
        }
        iVar8 = FUN_03b471ec(&local_58);
        if (iVar8 != 0) {
          if (iVar8 == 1) {
            if ((*(ushort *)(*(long *)(DAT_05aebb78 + 0x10) + 0x192) & 1) != 0) goto LAB_03b45a70;
            local_44 = 4;
          }
          else {
            local_44 = 6;
          }
          goto LAB_03b45aa0;
        }
      }
LAB_03b45a70:
      puVar10 = *(undefined8 **)(lVar12 + 0x38);
      local_44 = 0;
      uVar3 = param_2[1];
      *puVar10 = *param_2;
      puVar10[1] = uVar3;
      uVar3 = param_2[2];
      uVar4 = param_2[3];
      uVar5 = param_2[5];
      puVar10[4] = param_2[4];
      puVar10[5] = uVar5;
      puVar10[2] = uVar3;
      puVar10[3] = uVar4;
    }
  }
  else {
    local_44 = FUN_03b5fe60(lVar12 + 0x50,param_2);
  }
LAB_03b45aa0:
  if (0 < local_44) {
    return local_44;
  }
  bVar6 = *(byte *)((long)param_2 + 0x11);
  if ((param_3 == (long *)0x0) || ((bVar6 >> 5 & 1) != 0)) {
    if (param_3 != (long *)0x0) goto LAB_03b45adc;
  }
  else {
    *(ushort *)(param_1 + 0x1d0) =
         *(ushort *)(param_1 + 0x1d0) & 0xfffd | (ushort)*(byte *)((long)param_3 + 0x12) << 1;
    bVar6 = *(byte *)((long)param_2 + 0x11);
LAB_03b45adc:
    if (((bVar6 >> 5 & 1) == 0) &&
       (lVar12 = param_3[1], *(long *)(param_1 + 0x118) = lVar12, lVar12 != 0)) {
      FUN_03b46430(param_1);
    }
    *(short *)(param_1 + 0x14) = (short)param_3[2];
  }
  fVar22 = *(float *)(*(long *)(param_1 + 0x108) + 0x198);
  if (0.0 <= fVar22) {
    *(float *)(*(long *)(param_1 + 0x120) + 0x1c) = fVar22;
  }
  *(undefined1 **)(param_1 + 0xf8) = &DAT_3f8000003f800000;
  if ((*(byte *)(param_1 + 0x14) & 1) == 0) {
    *(undefined1 *)(param_1 + 0x1a5) = 0;
  }
  *(undefined2 *)(param_1 + 0x130) = 0x404;
  *(undefined2 *)(param_1 + 0x136) = 0x404;
  *(undefined2 *)(param_1 + 0x13c) = 0x404;
  *(undefined2 *)(param_1 + 0x142) = 0x404;
  *(undefined2 *)(param_1 + 0x148) = 0x404;
  *(undefined2 *)(param_1 + 0x14e) = 0x404;
  *(undefined2 *)(param_1 + 0x154) = 0x404;
  *(undefined2 *)(param_1 + 0x15a) = 0x404;
  if ((*(byte *)((long)param_2 + 0x11) >> 5 & 1) == 0) {
    lVar12 = param_2[1];
    if ((lVar12 != 0) && (uVar16 = (ulong)*(byte *)(lVar12 + 0x30), *(byte *)(lVar12 + 0x30) != 0))
    {
      uVar13 = 0;
      pbVar15 = (byte *)(lVar12 + 0x31);
      do {
        bVar6 = *pbVar15;
        if (bVar6 == 0) {
          uVar17 = 0;
        }
        else {
          pbVar2 = (byte *)(param_1 + 0x130) + uVar13 * 6;
          if (7 < uVar13) {
            pbVar2 = (byte *)(param_1 + 0x130);
          }
          *pbVar2 = pbVar15[2];
          if (((((bVar6 != 1) && (pbVar2[1] = pbVar15[4], bVar6 != 2)) &&
               (pbVar2[2] = pbVar15[6], bVar6 != 3)) &&
              ((pbVar2[3] = pbVar15[8], bVar6 != 4 && (pbVar2[4] = pbVar15[10], bVar6 != 5)))) &&
             (pbVar2[5] = pbVar15[0xc], bVar6 != 6)) {
            uVar16 = (ulong)bVar6 - 6;
            if ((ulong)bVar6 - 7 < 3) {
              lVar20 = 6;
            }
            else {
              uVar17 = 0;
              pbVar19 = pbVar15 + 0x14;
              do {
                uVar18 = uVar17;
                uVar17 = uVar18 + 4;
                *pbVar2 = pbVar19[-6];
                *pbVar2 = pbVar19[-4];
                *pbVar2 = pbVar19[-2];
                *pbVar2 = *pbVar19;
                pbVar19 = pbVar19 + 8;
              } while ((uVar16 & 0xfffffffffffffffc) != uVar17);
              lVar20 = uVar18 + 10;
            }
            uVar16 = uVar16 & 3;
            if (uVar16 != 0) {
              pbVar19 = pbVar15 + lVar20 * 2;
              do {
                pbVar19 = pbVar19 + 2;
                uVar16 = uVar16 - 1;
                *pbVar2 = *pbVar19;
              } while (uVar16 != 0);
            }
          }
          uVar17 = (ulong)*pbVar15;
          uVar16 = (ulong)*(byte *)(lVar12 + 0x30);
        }
        uVar13 = uVar13 + 1;
        pbVar15 = pbVar15 + uVar17 * 2 + 1;
      } while (uVar13 < uVar16);
    }
    iVar9 = FUN_02a0c760(*(undefined1 *)(param_2 + 2));
    uVar21 = 1;
    iVar8 = 0;
    if (iVar9 != -1) {
      iVar8 = iVar9;
    }
    iVar9 = FUN_02a0c760(1);
    if (iVar8 == iVar9) {
      if (param_2[1] == 0) {
        uVar21 = 0;
      }
      else {
        uVar21 = (ushort)*(byte *)(param_2[1] + 0x30);
      }
    }
    *(ushort *)(param_1 + 0xea) = uVar21;
    iVar9 = FUN_02a0c760(*(undefined1 *)(param_2 + 2));
    iVar8 = 0;
    if (iVar9 != -1) {
      iVar8 = iVar9;
    }
    iVar9 = FUN_02a0c760(1);
    if (iVar8 == iVar9) {
      uStack_50 = 0;
      local_58 = 0;
      uStack_54 = 0;
      uStack_52 = 0;
      FUN_03bc9d70(param_2,&local_58,0);
      iVar8 = local_58;
      uStack_50 = 0;
      local_58 = 0;
      uStack_54 = 0;
      uStack_52 = 0;
      *(char *)(param_1 + 0xec) = (char)iVar8;
      FUN_03bc9d70(param_2,&local_58,1);
      iVar8 = local_58;
      uStack_50 = 0;
      local_58 = 0;
      uStack_54 = 0;
      uStack_52 = 0;
      *(char *)(param_1 + 0xed) = (char)iVar8;
      FUN_03bc9d70(param_2,&local_58,2);
      iVar8 = local_58;
      uStack_50 = 0;
      local_58 = 0;
      uStack_54 = 0;
      uStack_52 = 0;
      *(char *)(param_1 + 0xee) = (char)iVar8;
      FUN_03bc9d70(param_2,&local_58,3);
      iVar8 = local_58;
      uStack_50 = 0;
      local_58 = 0;
      uStack_54 = 0;
      uStack_52 = 0;
      *(char *)(param_1 + 0xef) = (char)iVar8;
      FUN_03bc9d70(param_2,&local_58,4);
      iVar8 = local_58;
      uStack_50 = 0;
      local_58 = 0;
      uStack_54 = 0;
      uStack_52 = 0;
      *(char *)(param_1 + 0xf0) = (char)iVar8;
      FUN_03bc9d70(param_2,&local_58,5);
      iVar8 = local_58;
      uStack_50 = 0;
      local_58 = 0;
      uStack_54 = 0;
      uStack_52 = 0;
      *(char *)(param_1 + 0xf1) = (char)iVar8;
      FUN_03bc9d70(param_2,&local_58,6);
      iVar8 = local_58;
      uStack_50 = 0;
      local_58 = 0;
      uStack_54 = 0;
      uStack_52 = 0;
      *(char *)(param_1 + 0xf2) = (char)iVar8;
      FUN_03bc9d70(param_2,&local_58,7);
      *(char *)(param_1 + 0xf3) = (char)local_58;
      if ((DAT_05aebc00 != '\0') && (uVar21 = *(ushort *)(param_1 + 0xea), 1 < (ulong)uVar21)) {
        uVar16 = 0;
        do {
          cVar14 = '\0';
          if ((-1 < (int)(uint)uVar16) && (param_2[1] != 0)) {
            cVar14 = -((uint)uVar16 < (uint)*(byte *)(param_2[1] + 0x30));
          }
          pcVar1 = (char *)(param_1 + 0x100) + uVar16;
          bVar7 = 7 < uVar16;
          uVar16 = uVar16 + 1;
          if (bVar7) {
            pcVar1 = (char *)(param_1 + 0x100);
          }
          *pcVar1 = cVar14;
        } while (uVar21 != uVar16);
      }
      goto LAB_03b45e74;
    }
    uStack_50 = 0;
    local_58 = 0;
    uStack_54 = 0;
    uStack_52 = 0;
    FUN_03bc9d70(param_2,&local_58,0);
    iVar8 = local_58;
  }
  else {
    iVar8 = 1;
    *(undefined2 *)(param_1 + 0xea) = 1;
  }
  *(char *)(param_1 + 0xec) = (char)iVar8;
LAB_03b45e74:
  plVar11 = *(long **)(param_1 + 0x1f8);
  if (plVar11 != (long *)0x0) {
    plVar11[1] = 0;
    plVar11[2] = 0;
    *(undefined4 *)(plVar11 + 3) = 0;
    *plVar11 = param_1;
    plVar11[4] = 0;
    plVar11[5] = 0xffffffff;
  }
  *(undefined4 *)(param_1 + 0xc) = 2;
  FUN_03ba625c(*(undefined8 *)(param_1 + 0x108),param_1);
  return 0;
}


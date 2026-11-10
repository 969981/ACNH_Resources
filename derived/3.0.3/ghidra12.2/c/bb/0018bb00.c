
void FUN_0018bb00(byte *param_1,long param_2,long param_3,ulong *param_4)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  char *pcVar6;
  ulong uVar7;
  ulong uVar8;
  uint uVar9;
  byte *pbVar10;
  long lVar11;
  long lVar12;
  byte local_8 [4];
  byte local_4 [4];
  
  if (param_3 == 0) {
    if (param_4 != (ulong *)0x0) {
      *param_4 = (param_2 + 2U) / 3 << 2 | 1;
      return;
    }
  }
  else {
    if (param_2 == 0) {
      uVar5 = 0;
    }
    else {
      uVar7 = (ulong)local_8[2];
      uVar8 = (ulong)*param_1;
      uVar5 = 0;
      uVar4 = 0;
      if (param_2 == 1) {
        uVar9 = 0;
        lVar11 = 1;
      }
      else {
        param_2 = 3 - param_2;
        do {
          local_8[2] = (byte)uVar7;
          uVar4 = (uint)uVar5;
          local_8[1] = param_1[1];
          if (param_2 == 1) {
            lVar11 = 2;
            uVar9 = 1;
            goto LAB_0018bbf0;
          }
          local_8[2] = param_1[2];
          uVar7 = (ulong)local_8[2];
          *(char *)(param_3 + uVar5) =
               "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"[uVar8 >> 2];
          *(char *)(param_3 + (ulong)(uVar4 + 1)) =
               "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"
               [(uint)(local_8[1] >> 4) | ((uint)uVar8 & 3) << 4];
          *(char *)(param_3 + (ulong)(uVar4 + 2)) =
               "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"
               [(uint)(local_8[2] >> 6) | (local_8[1] & 0xf) << 2];
          uVar9 = uVar4 + 3;
          uVar4 = uVar4 + 4;
          uVar5 = (ulong)uVar4;
          *(char *)(param_3 + (ulong)uVar9) =
               "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"[uVar7 & 0x3f];
          if (param_2 == 0) goto LAB_0018bcdc;
          uVar8 = (ulong)param_1[3];
          param_2 = param_2 + 3;
          param_1 = param_1 + 3;
        } while (param_2 != 2);
        uVar9 = 0;
        lVar11 = 1;
      }
LAB_0018bbf0:
      lVar12 = lVar11;
      do {
        local_8[lVar12] = 0;
        lVar12 = lVar12 + 1;
      } while ((int)lVar12 != 3);
      local_4[0] = (byte)uVar8 >> 2;
      local_4[3] = local_8[2] & 0x3f;
      pcVar6 = (char *)(param_3 + (ulong)uVar4);
      pbVar10 = local_4;
      local_4[1] = local_8[1] >> 4 | ((byte)uVar8 & 3) << 4;
      local_4[2] = local_8[2] >> 6 | (local_8[1] & 0xf) << 2;
      lVar12 = 2;
      do {
        bVar1 = *pbVar10;
        lVar12 = lVar12 + -2;
        bVar2 = pbVar10[1];
        pbVar10 = pbVar10 + 2;
        *pcVar6 = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"[bVar1];
        pcVar6[1] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"[bVar2];
        pcVar6 = pcVar6 + 2;
      } while (lVar12 != 0);
      if (uVar9 != 0) {
        *pcVar6 = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"[*pbVar10];
      }
      uVar7 = (ulong)(uVar4 | uVar9) | 2;
      iVar3 = (int)uVar7;
      uVar5 = (ulong)(iVar3 + 1);
      *(undefined1 *)(param_3 + uVar7) = 0x3d;
      if ((int)lVar11 != 2) {
        *(undefined1 *)(param_3 + uVar5) = 0x3d;
        uVar5 = (ulong)(iVar3 + 2);
      }
    }
LAB_0018bcdc:
    *(undefined1 *)(param_3 + uVar5) = 0;
  }
  return;
}


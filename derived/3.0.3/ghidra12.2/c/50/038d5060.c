
int FUN_038d5060(uint *param_1,long param_2,int param_3,long param_4,int param_5)

{
  uint uVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  int iVar5;
  ulong uVar6;
  ulong uVar7;
  byte *pbVar8;
  uint extraout_w10;
  long lVar9;
  uint uVar10;
  ulong uVar11;
  uint local_70;
  ushort local_6c [2];
  byte local_68 [4];
  int local_64;
  
  iVar5 = 3;
  if ((param_3 != 0) && (-2 < param_5)) {
    if ((param_5 == -1) || (0 < param_5)) {
      uVar10 = 0;
      uVar11 = 0;
      do {
        iVar5 = (int)uVar11;
        lVar9 = (long)iVar5;
        local_68[0] = *(byte *)(param_4 + lVar9);
        if (local_68[0] == 0) break;
        if (param_3 - 1U <= uVar10) {
          iVar5 = 2;
          uVar10 = param_3 - 1U;
          goto LAB_038d5274;
        }
        uVar11 = lVar9 + 1;
        if ((char)local_68[0] < '\0') {
          local_68[1] = *(byte *)(param_4 + uVar11);
          if (local_68[1] == 0) break;
          uVar11 = lVar9 + 2;
          if (local_68[0] < 0xe0) {
            local_6c[0] = (local_68[0] & 0x1f) << 6;
            bVar2 = local_68[1];
          }
          else {
            if (0xef < local_68[0]) {
              iVar5 = 1;
              goto LAB_038d5274;
            }
            bVar2 = *(byte *)(param_4 + uVar11);
            if (bVar2 == 0) break;
            uVar11 = (ulong)(iVar5 + 3);
            local_6c[0] = (ushort)local_68[0] << 0xc | (local_68[1] & 0x3f) << 6;
            local_68[2] = bVar2;
          }
          local_6c[1] = 0;
          local_6c[0] = local_6c[0] | bVar2 & 0x3f;
          local_70 = 0;
          iVar5 = FUN_038d4a80(&local_70,local_68,4,local_6c,0xffffffff);
          local_64 = iVar5;
          if (iVar5 != 0) goto LAB_038d5274;
          if (param_3 - local_70 <= uVar10) {
            iVar5 = 2;
            uVar10 = param_3 - local_70;
            goto LAB_038d5274;
          }
          uVar1 = uVar10;
          if (0 < (int)local_70) {
            if (local_70 < 4) {
              uVar7 = 0;
              uVar1 = extraout_w10;
            }
            else {
              uVar6 = 0;
              do {
                uVar1 = uVar10 + (int)uVar6;
                bVar2 = local_68[uVar6 + 1];
                uVar7 = uVar6 + 4;
                bVar3 = local_68[uVar6 + 2];
                *(byte *)(param_2 + (ulong)uVar1) = local_68[uVar6];
                bVar4 = local_68[uVar6 + 3];
                *(byte *)(param_2 + (ulong)(uVar1 + 1)) = bVar2;
                *(byte *)(param_2 + (ulong)(uVar1 + 2)) = bVar3;
                *(byte *)(param_2 + (ulong)(uVar1 + 3)) = bVar4;
                uVar6 = uVar7;
              } while (((ulong)local_70 & 0xfffffffc) != uVar7);
              uVar10 = uVar10 + (int)uVar7;
              uVar1 = uVar10;
            }
            if ((local_70 & 3) != 0) {
              uVar6 = (ulong)local_70 & 3;
              pbVar8 = local_68 + uVar7;
              do {
                uVar6 = uVar6 - 1;
                *(byte *)(param_2 + (ulong)uVar10) = *pbVar8;
                uVar10 = uVar10 + 1;
                pbVar8 = pbVar8 + 1;
                uVar1 = uVar10;
              } while (uVar6 != 0);
            }
          }
        }
        else {
          *(byte *)(param_2 + (ulong)uVar10) = local_68[0];
          uVar1 = uVar10 + 1;
        }
        uVar10 = uVar1;
      } while ((param_5 == -1) || ((int)uVar11 < param_5));
      iVar5 = 0;
    }
    else {
      iVar5 = 0;
      uVar10 = 0;
    }
LAB_038d5274:
    *(undefined1 *)(param_2 + (ulong)uVar10) = 0;
    if (param_1 != (uint *)0x0) {
      *param_1 = uVar10;
    }
  }
  return iVar5;
}


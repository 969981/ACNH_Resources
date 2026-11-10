
/* WARNING: Removing unreachable block (ram,0x0018be58) */

undefined8 FUN_0018bcf0(byte *param_1,ulong param_2,long param_3,long *param_4)

{
  byte *pbVar1;
  byte bVar2;
  uint uVar3;
  long lVar4;
  uint uVar5;
  uint uVar6;
  long lVar7;
  ulong uVar8;
  byte local_8 [8];
  
  lVar4 = (param_2 - 1 >> 2) * 3;
  if (1 < param_2) {
    lVar7 = lVar4 - param_2;
    uVar8 = param_2;
    do {
      if (param_1[uVar8 - 2] != 0x3d) goto LAB_0018bd34;
      uVar8 = uVar8 - 1;
      lVar4 = lVar4 + -1;
    } while (uVar8 != 1);
    lVar4 = lVar7 + 1;
  }
LAB_0018bd34:
  if (param_3 == 0) {
    if (param_4 != (long *)0x0) {
      *param_4 = lVar4;
    }
    return 1;
  }
  if (param_2 != 0) {
    uVar3 = 0;
    uVar6 = 0;
    do {
      bVar2 = *param_1;
      if ((ulong)bVar2 == 0x3d) break;
      if ((char)bVar2 < '\0') {
        return 0;
      }
      uVar5 = uVar6 + 1;
      local_8[(ulong)uVar6 + 4] =
           "ccccccccccccccccccccccccccccccccccccccccccc>ccc?456789:;<=ccccccc"[bVar2];
      if (uVar5 == 4) {
        uVar5 = 0;
        *(byte *)(param_3 + (ulong)(uVar3 + 1)) = local_8[5] << 4 | local_8[6] >> 2 & 0xf;
        *(byte *)(param_3 + (ulong)(uVar3 + 2)) = local_8[7] + local_8[6] * '@';
        *(byte *)(param_3 + (ulong)uVar3) = local_8[4] << 2 | local_8[5] >> 4 & 3;
        uVar3 = uVar3 + 3;
      }
      param_1 = param_1 + 1;
      param_2 = param_2 - 1;
      uVar6 = uVar5;
    } while (param_2 != 0);
    if (uVar6 != 0) {
      if (uVar6 < 4) {
        uVar8 = (ulong)uVar6;
        do {
          local_8[uVar8 + 4] = 0;
          uVar8 = uVar8 + 1;
        } while ((int)uVar8 != 4);
      }
      uVar6 = uVar6 - 1;
      local_8[0] = local_8[4] << 2 | local_8[5] >> 4 & 3;
      local_8[1] = local_8[5] << 4 | local_8[6] >> 2 & 0xf;
      local_8[2] = local_8[7] + local_8[6] * '@';
      if (uVar6 != 0) {
        if (uVar6 == 1) {
          uVar8 = 0;
        }
        else {
          uVar8 = 0;
          do {
            pbVar1 = local_8 + uVar8;
            uVar5 = uVar3 + (int)uVar8;
            bVar2 = local_8[uVar8 + 1];
            uVar8 = uVar8 + 2;
            *(byte *)(param_3 + (ulong)uVar5) = *pbVar1;
            *(byte *)(param_3 + (ulong)(uVar5 + 1)) = bVar2;
          } while (((ulong)uVar6 & 0xfffffffe) != uVar8);
          uVar3 = uVar3 + (int)uVar8;
          if ((uVar6 & 1) == 0) {
            return 1;
          }
        }
        *(byte *)(param_3 + (ulong)uVar3) = local_8[uVar8];
      }
    }
  }
  return 1;
}



bool FUN_02e500b0(long param_1,uint param_2,uint param_3)

{
  uint *puVar1;
  uint *puVar2;
  byte bVar3;
  bool bVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  byte *pbVar8;
  ulong uVar9;
  uint local_4c [3];
  
  if ((DAT_0537d558 != (long *)0x0) &&
     ((((lVar7 = *DAT_0537d558, lVar7 == 0 || (*(int *)(lVar7 + 0x508) == 0)) &&
       (*(int *)(DAT_05358908 + 0x78) == 0)) ||
      ((*(uint *)(DAT_0537d558 + 0x10) < 2 || (*(byte *)(lVar7 + 0x476) < 2)))))) {
    return true;
  }
  if ((int)param_2 < 6) {
    puVar1 = (uint *)(param_1 + 0x310);
    puVar2 = puVar1 + (ulong)param_2 * 4;
    if (5 < param_2) {
      puVar2 = puVar1;
    }
    if ((int)param_3 < (int)*puVar2) {
      puVar2 = puVar1 + (ulong)param_2 * 4;
      if (5 < param_2) {
        puVar2 = puVar1;
      }
      if (param_3 < *puVar2) {
        lVar7 = *(long *)(*(long *)(puVar2 + 2) + (long)(int)param_3 * 8);
        goto LAB_02e50178;
      }
    }
  }
  lVar7 = 0;
LAB_02e50178:
  bVar4 = true;
  local_4c[0] = param_2;
  FUN_02507c6c(local_4c,2,1,0,0);
  if ((byte)local_4c[0] < 8) {
    lVar5 = FUN_026585a0(local_4c);
    bVar4 = *(long *)(lVar7 + 0x148) == lVar5;
    while (!bVar4) {
      bVar4 = !bVar4;
      bVar3 = (byte)local_4c[0];
      uVar9 = (ulong)(byte)local_4c[0];
      if (7 < (byte)local_4c[0]) {
        return true;
      }
      if (uVar9 == 7) {
        return bVar4;
      }
      pbVar8 = &DAT_0548e169 + uVar9;
      uVar6 = FUN_02507924(local_4c,pbVar8);
      if ((uVar6 & 1) == 0) {
        if (uVar9 == 6) {
          return bVar4;
        }
        pbVar8 = &DAT_0548e16a + uVar9;
        uVar6 = FUN_02507924(local_4c,pbVar8);
        if ((uVar6 & 1) == 0) {
          if (uVar9 == 5) {
            return bVar4;
          }
          pbVar8 = &DAT_0548e16b + uVar9;
          uVar6 = FUN_02507924(local_4c,pbVar8);
          if ((uVar6 & 1) == 0) {
            if (uVar9 == 4) {
              return bVar4;
            }
            pbVar8 = &DAT_0548e16c + uVar9;
            uVar6 = FUN_02507924(local_4c,pbVar8);
            if ((uVar6 & 1) == 0) {
              if (uVar9 == 3) {
                return bVar4;
              }
              pbVar8 = &DAT_0548e16d + uVar9;
              uVar6 = FUN_02507924(local_4c,pbVar8);
              if ((uVar6 & 1) == 0) {
                if (uVar9 == 2) {
                  return bVar4;
                }
                pbVar8 = &DAT_0548e16e + uVar9;
                uVar6 = FUN_02507924(local_4c,pbVar8);
                if ((uVar6 & 1) == 0) {
                  if (uVar9 == 1) {
                    return bVar4;
                  }
                  pbVar8 = &DAT_0548e16f + uVar9;
                  uVar6 = FUN_02507924(local_4c,pbVar8);
                  if ((uVar6 & 1) == 0) {
                    if (bVar3 == 0) {
                      return bVar4;
                    }
                    pbVar8 = &DAT_0548e170 + uVar9;
                    FUN_02507924(local_4c,pbVar8);
                  }
                }
              }
            }
          }
        }
      }
      if (7 < *pbVar8) {
        return bVar4;
      }
      local_4c[0] = CONCAT31(local_4c[0]._1_3_,*pbVar8);
      lVar5 = FUN_026585a0(local_4c);
      bVar4 = *(long *)(lVar7 + 0x148) == lVar5;
    }
    bVar4 = false;
  }
  return bVar4;
}



bool FUN_03ea9be0(long *param_1,long param_2,uint param_3,undefined8 param_4)

{
  uint *puVar1;
  char cVar2;
  short sVar3;
  uint uVar4;
  bool bVar5;
  ulong uVar6;
  short *psVar7;
  uint uVar8;
  long lVar9;
  uint local_18;
  byte local_14;
  
  local_18 = 0;
  local_14 = 0;
  uVar6 = FUN_03ea9450(param_1,&local_18,param_4);
  if ((uVar6 & 1) != 0) {
    if (local_14 - 0xc0 < 2) {
      psVar7 = (short *)*param_1;
      if (psVar7 != (short *)0x0) {
        puVar1 = (uint *)((long)psVar7 + (ulong)local_18);
        if ((*puVar1 & 0xfe) == 0xc0) {
          uVar8 = *puVar1 >> 8;
          if (*psVar7 == 0x5942) {
            uVar8 = uVar8 & 0xff00 | *puVar1 >> 0x18 | (uVar8 & 0xff) << 0x10;
          }
        }
        else {
          uVar8 = 0;
        }
        if ((int)uVar8 <= (int)param_3) {
          param_3 = uVar8;
        }
        if ((int)param_3 < 1) {
          return true;
        }
        bVar5 = false;
        lVar9 = 8;
        uVar6 = 0;
        do {
          if ((char)*puVar1 == -0x3f) {
            uVar8 = *puVar1 >> 8;
            sVar3 = *psVar7;
            if (sVar3 == 0x5942) {
              uVar8 = uVar8 & 0xff00 | *puVar1 >> 0x18 | (uVar8 & 0xff) << 0x10;
            }
            if (uVar8 == 0) {
              return bVar5;
            }
            cVar2 = *(char *)((long)puVar1 + lVar9 + -1);
            uVar8 = *(uint *)((long)puVar1 + lVar9);
          }
          else {
            if ((char)*puVar1 != -0x40) {
              return bVar5;
            }
            sVar3 = *psVar7;
            uVar8 = *puVar1 >> 8;
            if (sVar3 == 0x5942) {
              uVar8 = uVar8 & 0xff00 | *puVar1 >> 0x18 | (uVar8 & 0xff) << 0x10;
            }
            if (uVar8 <= (uint)uVar6) {
              return bVar5;
            }
            cVar2 = *(char *)((long)puVar1 + uVar6 + 4);
            uVar8 = *(uint *)((long)puVar1 + uVar6 * 4 + ((ulong)(uVar8 + 3) & 0x1fffffc) + 4);
          }
          uVar4 = (uVar8 & 0xff00ff00) >> 8 | (uVar8 & 0xff00ff) << 8;
          uVar4 = uVar4 >> 0x10 | uVar4 << 0x10;
          if (sVar3 != 0x5942) {
            uVar4 = uVar8;
          }
          if (cVar2 != -0x2e) {
            return bVar5;
          }
          *(uint *)(param_2 + uVar6 * 4) = uVar4;
          bVar5 = (ulong)param_3 <= uVar6 + 1;
          if ((ulong)param_3 - 1 == uVar6) {
            return bVar5;
          }
          lVar9 = lVar9 + 8;
          uVar6 = uVar6 + 1;
        } while( true );
      }
    }
    else if (local_14 == 0xff) {
      return *param_1 != 0;
    }
  }
  return false;
}


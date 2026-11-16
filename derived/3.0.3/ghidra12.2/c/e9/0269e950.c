
void FUN_0269e950(long param_1,long param_2,long param_3)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  short *psVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  short local_68;
  undefined2 local_66;
  int local_64;
  
  lVar7 = 0;
  do {
    psVar4 = (short *)(param_3 + 0x14 + lVar7 * 0xc);
    local_66 = psVar4[1];
    local_68 = *psVar4;
    local_64 = *(int *)(psVar4 + 2);
    if (local_68 != -2 && *(char *)((long)psVar4 + 0xb) == '\0') {
      uVar8 = 0xffffffe8;
      uVar10 = 0xffffffff;
      do {
        uVar1 = uVar8 + 0x18;
        uVar9 = uVar10;
        if ((*(uint *)(param_2 + (ulong)(uVar1 >> 5) * 4) >> (ulong)(uVar1 & 0x1f) & 1) == 0) {
          uVar5 = 0x20;
          lVar6 = param_1 + 0x10d6c;
          uVar2 = uVar8;
          if (uVar1 < 0x18) {
            uVar5 = 0x18;
            lVar6 = param_1 + 0x1094c;
            uVar2 = uVar1;
          }
          if ((uVar2 < uVar5) && (1 < *(byte *)(lVar6 + (ulong)uVar2 * 0x2c + 0x28))) {
            lVar6 = lVar6 + (ulong)uVar2 * 0x2c;
            uVar3 = FUN_0277d7b4(lVar6,&local_68);
            if (((uVar3 & 1) != 0) &&
               ((*(char *)(lVar6 + 3) == local_66._1_1_ &&
                (uVar9 = uVar1, *(int *)(lVar6 + 4) != local_64)))) {
              uVar9 = uVar10;
            }
          }
        }
        uVar8 = uVar8 + 1;
        uVar10 = uVar9;
      } while (uVar8 != 0x20);
      if (uVar9 < 0x38) {
        lVar6 = (ulong)(uVar9 >> 5) * 4;
        *(uint *)(param_2 + lVar6) = *(uint *)(param_2 + lVar6) | 1 << (ulong)(uVar9 & 0x1f);
      }
    }
    lVar7 = lVar7 + 1;
  } while (lVar7 != 0x24);
  return;
}


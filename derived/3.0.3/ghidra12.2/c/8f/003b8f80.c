
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_003b8f80(long param_1,uint param_2,char *param_3)

{
  uint uVar1;
  ushort uVar2;
  ushort uVar3;
  int iVar4;
  size_t sVar5;
  uint *puVar6;
  ulong uVar7;
  
  if ((int)param_2 < 2) {
    puVar6 = (uint *)(param_1 + *(int *)(param_1 + (ulong)param_2 * 8 + 4));
    uVar1 = *puVar6;
    if (uVar1 < puVar6[1]) goto LAB_003b8fdc;
  }
  else {
    puVar6 = (uint *)0x0;
    uVar1 = uRam0000000000000000;
    if (uRam0000000000000000 < _DAT_00000004) {
LAB_003b8fdc:
      uVar7 = (ulong)uVar1;
      if ((puVar6[uVar7 * 5 + 2] & 1) == 0) {
        sVar5 = strlen(param_3);
        do {
          while( true ) {
            uVar2 = *(ushort *)((long)puVar6 + uVar7 * 0x14 + 10);
            uVar3 = uVar2 >> 3;
            if (((int)sVar5 <= (int)(uint)uVar3) ||
               (((byte)param_3[uVar3] >> (ulong)((uVar2 ^ 0xffffffff) & 7) & 1) == 0)) break;
            uVar7 = (ulong)puVar6[uVar7 * 5 + 4];
            if ((puVar6[uVar7 * 5 + 2] & 1) != 0) goto LAB_003b904c;
          }
          uVar7 = (ulong)puVar6[uVar7 * 5 + 3];
        } while ((puVar6[uVar7 * 5 + 2] & 1) == 0);
      }
LAB_003b904c:
      param_1 = param_1 + *(int *)(param_1 + 4);
      iVar4 = strcmp(param_3,(char *)(param_1 +
                                     *(int *)(param_1 + (long)(int)puVar6[uVar7 * 5 + 5] * 0xc + 8))
                    );
      if (iVar4 == 0) {
        return puVar6[uVar7 * 5 + 6];
      }
      return 0xffffffff;
    }
  }
  return 0xffffffff;
}



undefined8 FUN_01df2da0(long *param_1,undefined8 param_2,byte *param_3)

{
  long lVar1;
  ulong uVar2;
  uint uVar3;
  byte bVar4;
  long lVar5;
  ulong uVar6;
  int iVar7;
  ulong uVar8;
  
  uVar3 = *(uint *)(DAT_05379880 + 0x28);
  if (uVar3 != 0xffffffff) {
    if (*(uint *)(DAT_05379880 + 8) <= uVar3) {
      uVar3 = 0;
    }
    lVar1 = *(long *)(DAT_05379880 + 0x10) + (long)(int)uVar3 * 0x40;
    if (*(char *)(lVar1 + 0x39) != '\0') {
      uVar3 = *(uint *)(lVar1 + 0x20);
      if (param_3 != (byte *)0x0) {
        *param_3 = 0;
      }
      if (0 < (int)uVar3) {
        uVar6 = 0;
        uVar8 = (ulong)uVar3;
        do {
          if (*(uint *)(lVar1 + 0x10) <= (uint)uVar6 || *(long *)(lVar1 + 0x18) == 0) {
            return 0;
          }
          lVar5 = nn::friends::Friend::GetAccountId();
          if (lVar5 == *param_1) {
            if (param_3 == (byte *)0x0) {
              return 1;
            }
            bVar4 = nn::friends::Friend::IsFavorite();
            *param_3 = bVar4 & 1;
            return 1;
          }
          uVar2 = (uVar8 & 0xffffffff00000000) + 0x100000000;
          uVar6 = uVar2 >> 0x20;
          iVar7 = (int)uVar8;
          uVar8 = uVar2 | uVar8 & 0xffffffff;
        } while ((int)(uVar2 >> 0x20) < iVar7);
      }
    }
  }
  return 0;
}


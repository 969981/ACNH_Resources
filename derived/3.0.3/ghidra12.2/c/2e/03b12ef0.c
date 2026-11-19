
uint FUN_03b12ef0(ushort *param_1,uint param_2,uint param_3)

{
  ushort *puVar1;
  ushort uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  if (param_2 != 0) {
    puVar1 = param_1 + param_2;
    uVar3 = 0;
    do {
      uVar2 = *param_1;
      uVar5 = (uint)uVar2;
      if ((uVar2 & 0xfffe) == 0xe) {
        if (uVar5 == 0xf) {
          param_1 = param_1 + 3;
        }
        else if (uVar5 == 0xe) {
          param_1 = (ushort *)((long)param_1 + (ulong)param_1[3] + 8);
        }
      }
      else {
        if (((0x20 < uVar2) || ((1L << ((ulong)uVar2 & 0x3f) & 0x100002400U) == 0)) &&
           (uVar2 != 0x3000)) {
          uVar3 = uVar5;
        }
        param_1 = param_1 + 1;
      }
    } while (param_1 < puVar1);
    if (uVar3 != 0) {
      if ((uVar3 + 0x5400 >> 2 & 0x3fff) < 0xae9) {
        uVar3 = (uVar3 - 0xac00) % 0x1c;
        return ((uint)(uVar3 != 8) | param_3 ^ 0xffffffff) & (uint)(uVar3 != 0);
      }
      if ((9 < (uVar3 - 0x30 & 0xffff)) && (9 < (uVar3 + 0xf0 & 0xffff))) {
        return 1;
      }
      iVar4 = -0x30;
      if (0x39 < uVar3) {
        iVar4 = -0xff10;
      }
      uVar3 = iVar4 + uVar3;
      if ((param_3 & 1) == 0) {
        if (9 < uVar3) {
          return 1;
        }
        uVar5 = 0x1cb;
      }
      else {
        if (6 < uVar3) {
          return 0;
        }
        uVar5 = 0x49;
      }
      return uVar5 >> (ulong)(uVar3 & 0x1f) & 1;
    }
  }
  return 0;
}


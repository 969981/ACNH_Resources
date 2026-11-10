
int FUN_00189f20(uint *param_1,uint param_2)

{
  uint *puVar1;
  uint uVar2;
  long lVar3;
  uint uVar4;
  ulong uVar5;
  
  if (param_2 == 0) {
    return 0;
  }
  uVar4 = param_1[0x270];
  if (0x26f < uVar4) {
    if (uVar4 == 0x271) {
      *param_1 = 0x1105;
      uVar4 = 1;
      param_1[0x270] = 1;
      do {
        param_1[uVar4] = param_1[uVar4 - 1] * 0x10dcd;
        uVar4 = param_1[0x270] + 1;
        param_1[0x270] = uVar4;
      } while (uVar4 < 0x270);
    }
    uVar5 = (ulong)*param_1;
    lVar3 = 0;
    do {
      puVar1 = (uint *)((long)param_1 + lVar3);
      uVar4 = (uint)uVar5;
      uVar5 = (ulong)puVar1[1];
      lVar3 = lVar3 + 4;
      *puVar1 = param_1[(uVar5 & 1) + 0x271] ^ puVar1[0x18d] ^
                (puVar1[1] & 0x7ffffffe | uVar4 & 0x80000000) >> 1;
    } while (lVar3 != 0x38c);
    uVar5 = (ulong)param_1[0xe3];
    lVar3 = 0;
    do {
      puVar1 = (uint *)((long)param_1 + lVar3);
      uVar4 = (uint)uVar5;
      uVar5 = (ulong)puVar1[0xe4];
      lVar3 = lVar3 + 4;
      puVar1[0xe3] = param_1[(uVar5 & 1) + 0x271] ^ *puVar1 ^
                     (puVar1[0xe4] & 0x7ffffffe | uVar4 & 0x80000000) >> 1;
    } while (lVar3 != 0x630);
    uVar4 = 0;
    param_1[0x26f] =
         param_1[((ulong)*param_1 & 1) + 0x271] ^ param_1[0x18c] ^
         (*param_1 & 0x7ffffffe | param_1[0x26f] & 0x80000000) >> 1;
  }
  param_1[0x270] = uVar4 + 1;
  uVar4 = param_1[uVar4] ^ param_1[uVar4] >> 0xb;
  uVar4 = (uVar4 & 0x13a58ad) << 7 ^ uVar4;
  uVar4 = (uVar4 & 0x1df8c) << 0xf ^ uVar4;
  uVar4 = uVar4 ^ uVar4 >> 0x12;
  uVar2 = 0;
  if (param_2 != 0) {
    uVar2 = uVar4 / param_2;
  }
  return uVar4 - uVar2 * param_2;
}


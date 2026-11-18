
void FUN_035fee00(long param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  ulong uVar6;
  uint uVar7;
  long lVar8;
  
  uVar2 = *(uint *)(param_1 + 0x140);
  if (uVar2 == 0xe) {
    *(bool *)(param_1 + 0xb8) = (param_2 & 0xff) == 1;
    return;
  }
  uVar7 = (uint)*(byte *)(param_1 + 0x150);
  if ((*(byte *)(param_1 + 0x150) >> 6 & 1) == 0) {
    if (0x3fffff < (ulong)(*(long *)(param_1 + -0xdb0) - *(long *)(param_1 + 0x138))) {
      uVar4 = (uint)*(byte *)(param_1 + 0x14c);
      lVar8 = -*(long *)(param_1 + 0x138);
      uVar3 = (uint)*(byte *)(param_1 + 0x14d);
      uVar5 = (uint)*(byte *)(param_1 + 0x14e);
      uVar6 = (ulong)*(byte *)(param_1 + 0x14f);
      do {
        lVar8 = lVar8 + -0x400000;
        uVar4 = uVar4 + (uVar3 + (uVar5 + ((uVar7 & 1) << 8 | (uint)uVar6) * 0x18) * 0x3c) * 0x3c;
        uVar1 = uVar4 + 1;
        uVar5 = uVar7 | 0xffffff80;
        if (uVar4 < 0x2a2ffff) {
          uVar5 = uVar7;
        }
        uVar7 = uVar1 / 0x1518000 & 1 | uVar5;
        uVar4 = uVar1 % 0x3c;
        uVar3 = uVar1 / 0x3c + (uVar1 / 0xe10) * -0x3c;
        uVar6 = (ulong)uVar1 / 0x15180 & 0xff;
        uVar5 = uVar1 / 0xe10 + ((uVar1 / 0xe10 & 0xffff) / 0x18) * -0x18 & 0xffff;
      } while ((ulong)(*(long *)(param_1 + -0xdb0) + lVar8) >> 0x16 != 0);
      *(char *)(param_1 + 0x14c) = (char)uVar4;
      *(char *)(param_1 + 0x14d) = (char)uVar3;
      *(char *)(param_1 + 0x14e) = (char)uVar5;
      *(char *)(param_1 + 0x14f) = (char)((ulong)uVar1 / 0x15180);
      *(char *)(param_1 + 0x150) = (char)uVar7;
      *(long *)(param_1 + 0x138) = -lVar8;
    }
  }
  if (uVar2 == 0xc) {
    *(char *)(param_1 + 0x150) = (char)param_2;
    if (((param_2 & 0xff) >> 6 & 1) == 0) {
      if ((uVar7 >> 6 & 1) != 0) {
        *(long *)(param_1 + 0x138) = *(long *)(param_1 + -0xdb0) - *(long *)(param_1 + 0x130);
        return;
      }
    }
    else if ((uVar7 >> 6 & 1) == 0) {
      *(long *)(param_1 + 0x130) = *(long *)(param_1 + -0xdb0) - *(long *)(param_1 + 0x138);
      return;
    }
  }
  else {
    *(char *)(param_1 + (ulong)uVar2 + 0x144) = (char)param_2;
  }
  return;
}


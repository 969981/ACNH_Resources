
void FUN_03673358(long param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  undefined1 uVar4;
  uint uVar5;
  uint uVar6;
  
  uVar1 = *(uint *)(param_1 + 0xb8);
  uVar5 = uVar1 >> 1;
  uVar6 = uVar5;
  if (1 < param_2) {
    FUN_036726e0(param_1,uVar1 * param_2 - (uVar5 + uVar1));
    uVar2 = *(uint *)(param_1 + 0xec);
    cVar3 = *(char *)(param_1 + 200);
    *(char *)(param_1 + 0xca) = cVar3;
    uVar6 = ((*(byte *)(param_1 + 0xd3) >> 2 & 1) - 1 | 3) & uVar2;
    *(bool *)(param_1 + 200) = uVar6 != 0;
    *(undefined1 *)(param_1 + 0xcb) = *(undefined1 *)(param_1 + 0xc9);
    uVar2 = (uVar2 & 0xaaaaaaaa) >> 1 | (uVar2 & 0x55555555) << 1;
    uVar2 = (uVar2 & 0xcccccccc) >> 2 | (uVar2 & 0x33333333) << 2;
    uVar2 = (uVar2 & 0xf0f0f0f0) >> 4 | (uVar2 & 0xf0f0f0f) << 4;
    uVar2 = (uVar2 & 0xff00ff00) >> 8 | (uVar2 & 0xff00ff) << 8;
    *(char *)(param_1 + 0xc9) = (char)LZCOUNT(uVar2 >> 0x10 | uVar2 << 0x10);
    *(byte *)(param_1 + 0xcc) = *(byte *)(param_1 + 0xcc) | (cVar3 != '\0' || uVar6 != 0);
    uVar6 = uVar1;
  }
  FUN_036726e0(param_1,uVar6);
  uVar6 = *(uint *)(param_1 + 0xec);
  cVar3 = *(char *)(param_1 + 200);
  *(char *)(param_1 + 0xca) = cVar3;
  uVar1 = ((*(byte *)(param_1 + 0xd3) >> 2 & 1) - 1 | 3) & uVar6;
  uVar6 = (uVar6 & 0xaaaaaaaa) >> 1 | (uVar6 & 0x55555555) << 1;
  uVar6 = (uVar6 & 0xcccccccc) >> 2 | (uVar6 & 0x33333333) << 2;
  uVar6 = (uVar6 & 0xf0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f) << 4;
  uVar6 = (uVar6 & 0xff00ff00) >> 8 | (uVar6 & 0xff00ff) << 8;
  uVar4 = *(undefined1 *)(param_1 + 0xc9);
  *(char *)(param_1 + 0xc9) = (char)LZCOUNT(uVar6 >> 0x10 | uVar6 << 0x10);
  *(bool *)(param_1 + 200) = uVar1 != 0;
  *(undefined1 *)(param_1 + 0xcb) = uVar4;
  *(byte *)(param_1 + 0xcc) = *(byte *)(param_1 + 0xcc) | (cVar3 != '\0' || uVar1 != 0);
  FUN_036726e0(param_1,uVar5);
  return;
}


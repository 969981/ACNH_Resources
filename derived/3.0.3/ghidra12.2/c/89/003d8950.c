
void FUN_003d8950(long param_1,long param_2)

{
  long lVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  byte *pbVar7;
  ulong uVar8;
  
  uVar2 = *(uint *)(param_1 + 0x46c);
  if (0 < (int)uVar2) {
    uVar3 = 0;
    lVar4 = param_2 + 0x74;
    lVar5 = param_1 + 0x10c88;
    do {
      lVar6 = param_2 + uVar3 * 0xe;
      lVar1 = param_1 + uVar3 * 0x80;
      *(undefined1 *)(lVar1 + 0x10c99) = *(undefined1 *)(lVar6 + 0x68);
      *(undefined1 *)(lVar1 + 0x10c9a) = *(undefined1 *)(lVar6 + 0x69);
      *(undefined1 *)(lVar1 + 0x10c9b) = *(undefined1 *)(lVar6 + 0x6a);
      *(undefined1 *)(lVar1 + 0x10c9c) = *(undefined1 *)(lVar6 + 0x6c);
      *(undefined1 *)(lVar1 + 0x10c9d) = *(undefined1 *)(lVar6 + 0x6d);
      *(undefined1 *)(lVar1 + 0x10c9e) = *(undefined1 *)(lVar6 + 0x6e);
      *(undefined1 *)(lVar1 + 0x10c9f) = *(undefined1 *)(lVar6 + 0x6f);
      *(undefined1 *)(lVar1 + 0x10ca0) = *(undefined1 *)(lVar6 + 0x70);
      *(undefined1 *)(lVar1 + 0x10ca1) = *(undefined1 *)(lVar6 + 0x71);
      *(undefined1 *)(lVar1 + 0x10ca2) = *(undefined1 *)(lVar6 + 0x72);
      *(undefined1 *)(lVar1 + 0x10ca3) = *(undefined1 *)(lVar6 + 0x6b);
      pbVar7 = (byte *)(lVar6 + 0x73);
      *(byte *)(lVar1 + 0x10c98) = *pbVar7;
      if (*pbVar7 != 0) {
        uVar8 = 0;
        do {
          *(ulong *)(lVar5 + uVar8 * 8) = param_1 + (ulong)*(byte *)(lVar4 + uVar8) * 0x1080 + 0x480
          ;
          uVar8 = uVar8 + 1;
        } while (uVar8 < *pbVar7);
      }
      uVar3 = uVar3 + 1;
      lVar4 = lVar4 + 0xe;
      lVar5 = lVar5 + 0x80;
    } while (uVar3 != uVar2);
  }
  return;
}


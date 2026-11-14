
void FUN_01d6a6f0(long param_1,short param_2,byte *param_3)

{
  short *psVar1;
  uint *puVar2;
  long lVar3;
  byte bVar4;
  uint uVar5;
  ulong uVar6;
  uint uVar7;
  
  bVar4 = *param_3;
  uVar7 = (uint)bVar4;
  if ((long)(char)bVar4 == 0xffffffffffffffff) {
LAB_01d6a730:
    uVar6 = 0;
    do {
      uVar5 = (uint)uVar6;
      if (((short *)(param_1 + 0x108))[(long)(int)uVar5 * 6] == param_2 &&
          ((uVar5 ^ 0xffffffff) & 0xff) != 0) {
        puVar2 = (uint *)(**(long **)PTR_DAT_04bb27d0 + 0x48 +
                         (-(uVar6 >> 7 & 1) & 0x7fffff8000 | (uVar6 & 0xff) << 7));
        if ((uVar6 & 0xf8) != 0) {
          puVar2 = (uint *)(**(long **)PTR_DAT_04bb27d0 + 0x48);
        }
        if (((*puVar2 ^ 0xffffffff) & 10) == 0) goto LAB_01d6a7b4;
      }
      uVar6 = (ulong)(uVar5 + 1);
    } while (uVar5 + 1 != 0xc);
    uVar6 = (ulong)uVar7;
    if (uVar7 == 0xff) {
      if (*(short *)(param_1 + 0x108) == param_2) {
        *(undefined1 *)(param_1 + 0x112) = 0;
      }
      if (*(short *)(param_1 + 0x114) == param_2) {
        *(undefined1 *)(param_1 + 0x11e) = 0;
      }
      if (*(short *)(param_1 + 0x120) == param_2) {
        *(undefined1 *)(param_1 + 0x12a) = 0;
      }
      if (*(short *)(param_1 + 300) == param_2) {
        *(undefined1 *)(param_1 + 0x136) = 0;
      }
      if (*(short *)(param_1 + 0x138) == param_2) {
        *(undefined1 *)(param_1 + 0x142) = 0;
      }
      if (*(short *)(param_1 + 0x144) == param_2) {
        *(undefined1 *)(param_1 + 0x14e) = 0;
      }
      if (*(short *)(param_1 + 0x150) == param_2) {
        *(undefined1 *)(param_1 + 0x15a) = 0;
      }
      if (*(short *)(param_1 + 0x15c) == param_2) {
        *(undefined1 *)(param_1 + 0x166) = 0;
      }
      if (*(short *)(param_1 + 0x168) == param_2) {
        *(undefined1 *)(param_1 + 0x172) = 0;
      }
      if (*(short *)(param_1 + 0x174) == param_2) {
        *(undefined1 *)(param_1 + 0x17e) = 0;
      }
      if (*(short *)(param_1 + 0x180) == param_2) {
        *(undefined1 *)(param_1 + 0x18a) = 0;
      }
      goto LAB_01d6a900;
    }
  }
  else {
    psVar1 = (short *)(param_1 + 0x108) + ((long)(char)bVar4 & 0xffffffffU) * 6;
    if (0xb < uVar7) {
      psVar1 = (short *)(param_1 + 0x108);
    }
    if (*psVar1 != param_2) goto LAB_01d6a730;
    uVar6 = (ulong)uVar7;
  }
LAB_01d6a7b4:
  uVar7 = (uint)uVar6;
  lVar3 = param_1 + 0x108 + (ulong)(uint)(int)(char)uVar6 * 0xc;
  if (0xb < (uVar7 & 0xff)) {
    lVar3 = param_1 + 0x108;
  }
  *(undefined1 *)(lVar3 + 10) = 1;
  if (((uVar6 & 0xff) != 0) && (*(short *)(param_1 + 0x108) == param_2)) {
    *(undefined1 *)(param_1 + 0x112) = 0;
  }
  if (((uVar7 & 0xff) != 1) && (*(short *)(param_1 + 0x114) == param_2)) {
    *(undefined1 *)(param_1 + 0x11e) = 0;
  }
  if (((uVar7 & 0xff) != 2) && (*(short *)(param_1 + 0x120) == param_2)) {
    *(undefined1 *)(param_1 + 0x12a) = 0;
  }
  if (((uVar7 & 0xff) != 3) && (*(short *)(param_1 + 300) == param_2)) {
    *(undefined1 *)(param_1 + 0x136) = 0;
  }
  if (((uVar7 & 0xff) != 4) && (*(short *)(param_1 + 0x138) == param_2)) {
    *(undefined1 *)(param_1 + 0x142) = 0;
  }
  if (((uVar7 & 0xff) != 5) && (*(short *)(param_1 + 0x144) == param_2)) {
    *(undefined1 *)(param_1 + 0x14e) = 0;
  }
  if (((uVar7 & 0xff) != 6) && (*(short *)(param_1 + 0x150) == param_2)) {
    *(undefined1 *)(param_1 + 0x15a) = 0;
  }
  if (((uVar7 & 0xff) != 7) && (*(short *)(param_1 + 0x15c) == param_2)) {
    *(undefined1 *)(param_1 + 0x166) = 0;
  }
  if (((uVar7 & 0xff) != 8) && (*(short *)(param_1 + 0x168) == param_2)) {
    *(undefined1 *)(param_1 + 0x172) = 0;
  }
  if (((uVar7 & 0xff) != 9) && (*(short *)(param_1 + 0x174) == param_2)) {
    *(undefined1 *)(param_1 + 0x17e) = 0;
  }
  if (((uVar7 & 0xff) != 10) && (*(short *)(param_1 + 0x180) == param_2)) {
    *(undefined1 *)(param_1 + 0x18a) = 0;
  }
  if ((uVar7 & 0xff) == 0xb) {
    return;
  }
LAB_01d6a900:
  if (*(short *)(param_1 + 0x18c) == param_2) {
    *(undefined1 *)(param_1 + 0x196) = 0;
  }
  return;
}



ulong FUN_01d69460(long param_1,short param_2)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  
  if (param_2 == -1) {
    uVar5 = 0;
    uVar8 = 0;
    uVar7 = 0;
    uVar6 = 0;
    uVar1 = 0;
    uVar3 = 0x10000;
    uVar4 = 0x1000000;
    goto LAB_01d69604;
  }
  if ((*(char *)(param_1 + 0x112) == '\0') || (*(short *)(param_1 + 0x108) != param_2)) {
    if ((*(char *)(param_1 + 0x11e) != '\0') && (*(short *)(param_1 + 0x114) == param_2)) {
      lVar2 = 1;
      goto LAB_01d695dc;
    }
    if ((*(char *)(param_1 + 0x12a) != '\0') && (*(short *)(param_1 + 0x120) == param_2)) {
      lVar2 = 2;
      goto LAB_01d695dc;
    }
    if ((*(char *)(param_1 + 0x136) != '\0') && (*(short *)(param_1 + 300) == param_2)) {
      lVar2 = 3;
      goto LAB_01d695dc;
    }
    if ((*(char *)(param_1 + 0x142) != '\0') && (*(short *)(param_1 + 0x138) == param_2)) {
      lVar2 = 4;
      goto LAB_01d695dc;
    }
    if ((*(char *)(param_1 + 0x14e) != '\0') && (*(short *)(param_1 + 0x144) == param_2)) {
      lVar2 = 5;
      goto LAB_01d695dc;
    }
    if ((*(char *)(param_1 + 0x15a) != '\0') && (*(short *)(param_1 + 0x150) == param_2)) {
      lVar2 = 6;
      goto LAB_01d695dc;
    }
    if ((*(char *)(param_1 + 0x166) != '\0') && (*(short *)(param_1 + 0x15c) == param_2)) {
      lVar2 = 7;
      goto LAB_01d695dc;
    }
    if ((*(char *)(param_1 + 0x172) != '\0') && (*(short *)(param_1 + 0x168) == param_2)) {
      lVar2 = 8;
      goto LAB_01d695dc;
    }
    if ((*(char *)(param_1 + 0x17e) != '\0') && (*(short *)(param_1 + 0x174) == param_2)) {
      lVar2 = 9;
      goto LAB_01d695dc;
    }
    if ((*(char *)(param_1 + 0x18a) != '\0') && (*(short *)(param_1 + 0x180) == param_2)) {
      lVar2 = 10;
      goto LAB_01d695dc;
    }
    if ((*(char *)(param_1 + 0x196) != '\0') && (*(short *)(param_1 + 0x18c) == param_2)) {
      lVar2 = 0xb;
      goto LAB_01d695dc;
    }
    uVar5 = 0;
    uVar3 = 0x10000;
    uVar4 = 0x1000000;
    if (*(char *)(param_1 + 0x1e6) == -1) {
      uVar8 = 0;
      uVar7 = 0;
      uVar6 = 0;
      uVar1 = 0;
      goto LAB_01d69604;
    }
    uVar8 = 0;
    uVar7 = 0;
    uVar6 = 0;
    uVar1 = 0;
    if (*(short *)(param_1 + 0x1e4) != param_2) goto LAB_01d69604;
    uVar1 = *(ulong *)(param_1 + 0x1e8);
  }
  else {
    lVar2 = 0;
LAB_01d695dc:
    uVar1 = *(ulong *)(param_1 + lVar2 * 0xc + 0x10a);
  }
  uVar3 = uVar1 & 0xffffffffffff0000;
  uVar4 = uVar1 & 0xffffffffff000000;
  uVar6 = uVar1 & 0xffffffff00000000;
  uVar7 = uVar1 & 0xffffff0000000000;
  uVar8 = uVar1 & 0xffff000000000000;
  uVar5 = uVar1 & 0xff00000000000000;
LAB_01d69604:
  return uVar8 & 0xff000000000000 | uVar5 | uVar7 & 0xff0000000000 | uVar6 & 0xff00000000 |
         uVar4 & 0xff000000 | uVar3 & 0xff0000 | uVar1 & 0xffff;
}



undefined8 FUN_00a7b0b4(undefined8 param_1,long *param_2)

{
  long *plVar1;
  byte *pbVar2;
  byte bVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  
  lVar4 = DAT_04da56d0;
  lVar6 = *DAT_0537d558;
  bVar3 = *(byte *)(lVar6 + 0x473);
  if ((long)(char)bVar3 != 0xffffffffffffffff) {
    pbVar2 = (byte *)(lVar6 + 0x48) + ((long)(char)bVar3 & 0xffffffffU) * 0x80;
    if (7 < bVar3) {
      pbVar2 = (byte *)(lVar6 + 0x48);
    }
    if (((*pbVar2 >> 3 & 1) != 0) && (*(byte *)(lVar6 + 0x472) != bVar3)) {
      return 0;
    }
  }
  if ((*(short *)(DAT_04da56d0 + 0x90) == -1) ||
     (plVar1 = (long *)(DAT_04da56d0 + 0x80), *plVar1 != *param_2)) {
    uVar5 = 0;
  }
  else {
    uVar5 = 1;
    *(undefined2 *)(DAT_04da56d0 + 0x90) = 0xffff;
    *plVar1 = -1;
    *(undefined8 *)(lVar4 + 0x88) = 0xffffffffffffffff;
  }
  if ((*(short *)(lVar4 + 0xa8) != -1) && (*(long *)(lVar4 + 0x98) == *param_2)) {
    uVar5 = 1;
    *(undefined2 *)(lVar4 + 0xa8) = 0xffff;
    *(long *)(lVar4 + 0x98) = -1;
    *(undefined8 *)(lVar4 + 0xa0) = 0xffffffffffffffff;
  }
  if ((*(short *)(lVar4 + 0xc0) != -1) && (*(long *)(lVar4 + 0xb0) == *param_2)) {
    uVar5 = 1;
    *(undefined2 *)(lVar4 + 0xc0) = 0xffff;
    *(long *)(lVar4 + 0xb0) = -1;
    *(undefined8 *)(lVar4 + 0xb8) = 0xffffffffffffffff;
  }
  if ((*(short *)(lVar4 + 0xd8) != -1) && (*(long *)(lVar4 + 200) == *param_2)) {
    uVar5 = 1;
    *(undefined2 *)(lVar4 + 0xd8) = 0xffff;
    *(long *)(lVar4 + 200) = -1;
    *(undefined8 *)(lVar4 + 0xd0) = 0xffffffffffffffff;
  }
  if ((*(short *)(lVar4 + 0xf0) != -1) && (*(long *)(lVar4 + 0xe0) == *param_2)) {
    uVar5 = 1;
    *(undefined2 *)(lVar4 + 0xf0) = 0xffff;
    *(long *)(lVar4 + 0xe0) = -1;
    *(undefined8 *)(lVar4 + 0xe8) = 0xffffffffffffffff;
  }
  if ((*(short *)(lVar4 + 0x108) != -1) && (*(long *)(lVar4 + 0xf8) == *param_2)) {
    uVar5 = 1;
    *(undefined2 *)(lVar4 + 0x108) = 0xffff;
    *(long *)(lVar4 + 0xf8) = -1;
    *(undefined8 *)(lVar4 + 0x100) = 0xffffffffffffffff;
  }
  if ((*(short *)(lVar4 + 0x120) != -1) && (*(long *)(lVar4 + 0x110) == *param_2)) {
    uVar5 = 1;
    *(undefined2 *)(lVar4 + 0x120) = 0xffff;
    *(long *)(lVar4 + 0x110) = -1;
    *(undefined8 *)(lVar4 + 0x118) = 0xffffffffffffffff;
  }
  if ((*(short *)(lVar4 + 0x138) != -1) && (*(long *)(lVar4 + 0x128) == *param_2)) {
    uVar5 = 1;
    *(undefined2 *)(lVar4 + 0x138) = 0xffff;
    *(long *)(lVar4 + 0x128) = -1;
    *(undefined8 *)(lVar4 + 0x130) = 0xffffffffffffffff;
  }
  if ((*(short *)(lVar4 + 0x150) != -1) && (*(long *)(lVar4 + 0x140) == *param_2)) {
    uVar5 = 1;
    *(undefined2 *)(lVar4 + 0x150) = 0xffff;
    *(long *)(lVar4 + 0x140) = -1;
    *(undefined8 *)(lVar4 + 0x148) = 0xffffffffffffffff;
  }
  if ((*(short *)(lVar4 + 0x168) != -1) && (*(long *)(lVar4 + 0x158) == *param_2)) {
    uVar5 = 1;
    *(undefined2 *)(lVar4 + 0x168) = 0xffff;
    *(long *)(lVar4 + 0x158) = -1;
    *(undefined8 *)(lVar4 + 0x160) = 0xffffffffffffffff;
  }
  if ((*(short *)(lVar4 + 0x2f0) != -1) && (*(long *)(lVar4 + 0x2e0) == *param_2)) {
    uVar5 = 1;
    *(undefined2 *)(lVar4 + 0x2f2) = 0;
    *(long *)(lVar4 + 0x2e0) = -1;
    *(undefined8 *)(lVar4 + 0x2e8) = 0xffffffffffffffff;
    *(undefined2 *)(lVar4 + 0x2f0) = 0xffff;
  }
  if ((*(short *)(lVar4 + 0x308) != -1) && (*(long *)(lVar4 + 0x2f8) == *param_2)) {
    uVar5 = 1;
    *(undefined2 *)(lVar4 + 0x30a) = 0;
    *(long *)(lVar4 + 0x2f8) = -1;
    *(undefined8 *)(lVar4 + 0x300) = 0xffffffffffffffff;
    *(undefined2 *)(lVar4 + 0x308) = 0xffff;
  }
  if ((*(short *)(lVar4 + 800) != -1) && (*(long *)(lVar4 + 0x310) == *param_2)) {
    uVar5 = 1;
    *(undefined2 *)(lVar4 + 0x322) = 0;
    *(long *)(lVar4 + 0x310) = -1;
    *(undefined8 *)(lVar4 + 0x318) = 0xffffffffffffffff;
    *(undefined2 *)(lVar4 + 800) = 0xffff;
  }
  if ((*(short *)(lVar4 + 0x338) != -1) && (*(long *)(lVar4 + 0x328) == *param_2)) {
    uVar5 = 1;
    *(undefined2 *)(lVar4 + 0x33a) = 0;
    *(long *)(lVar4 + 0x328) = -1;
    *(undefined8 *)(lVar4 + 0x330) = 0xffffffffffffffff;
    *(undefined2 *)(lVar4 + 0x338) = 0xffff;
  }
  if ((*(short *)(lVar4 + 0x350) != -1) && (*(long *)(lVar4 + 0x340) == *param_2)) {
    uVar5 = 1;
    *(undefined2 *)(lVar4 + 0x352) = 0;
    *(long *)(lVar4 + 0x340) = -1;
    *(undefined8 *)(lVar4 + 0x348) = 0xffffffffffffffff;
    *(undefined2 *)(lVar4 + 0x350) = 0xffff;
  }
  if ((*(short *)(lVar4 + 0x368) != -1) && (*(long *)(lVar4 + 0x358) == *param_2)) {
    uVar5 = 1;
    *(undefined2 *)(lVar4 + 0x36a) = 0;
    *(long *)(lVar4 + 0x358) = -1;
    *(undefined8 *)(lVar4 + 0x360) = 0xffffffffffffffff;
    *(undefined2 *)(lVar4 + 0x368) = 0xffff;
  }
  if ((*(short *)(lVar4 + 0x380) != -1) && (*(long *)(lVar4 + 0x370) == *param_2)) {
    uVar5 = 1;
    *(undefined2 *)(lVar4 + 0x382) = 0;
    *(long *)(lVar4 + 0x370) = -1;
    *(undefined8 *)(lVar4 + 0x378) = 0xffffffffffffffff;
    *(undefined2 *)(lVar4 + 0x380) = 0xffff;
  }
  if ((*(short *)(lVar4 + 0x398) != -1) && (*(long *)(lVar4 + 0x388) == *param_2)) {
    uVar5 = 1;
    *(undefined2 *)(lVar4 + 0x39a) = 0;
    *(long *)(lVar4 + 0x388) = -1;
    *(undefined8 *)(lVar4 + 0x390) = 0xffffffffffffffff;
    *(undefined2 *)(lVar4 + 0x398) = 0xffff;
  }
  if ((*(short *)(lVar4 + 0x3b0) != -1) && (*(long *)(lVar4 + 0x3a0) == *param_2)) {
    uVar5 = 1;
    *(undefined2 *)(lVar4 + 0x3b2) = 0;
    *(long *)(lVar4 + 0x3a0) = -1;
    *(undefined8 *)(lVar4 + 0x3a8) = 0xffffffffffffffff;
    *(undefined2 *)(lVar4 + 0x3b0) = 0xffff;
  }
  if ((*(short *)(lVar4 + 0x3c8) != -1) && (*(long *)(lVar4 + 0x3b8) == *param_2)) {
    uVar5 = 1;
    *(undefined2 *)(lVar4 + 0x3ca) = 0;
    *(long *)(lVar4 + 0x3b8) = -1;
    *(undefined8 *)(lVar4 + 0x3c0) = 0xffffffffffffffff;
    *(undefined2 *)(lVar4 + 0x3c8) = 0xffff;
  }
  return uVar5;
}


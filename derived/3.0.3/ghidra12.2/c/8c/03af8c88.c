
void FUN_03af8c88(long param_1,uint param_2,uint param_3)

{
  long *plVar1;
  uint uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  uint *puVar6;
  long lVar7;
  
  lVar7 = *(long *)(param_1 + 0x10);
  if (*(uint *)(param_1 + 8) <= param_2) {
    param_2 = 0;
  }
  lVar5 = lVar7 + (long)(int)param_2 * 0x23c0;
  puVar6 = (uint *)(lVar5 + 8);
  *puVar6 = *puVar6 & (param_3 ^ 0xffffffff);
  uVar3 = DAT_05ae90c0;
  if ((param_3 & 1) != 0) {
    if (*(long *)(lVar5 + 0x700) != 0) {
      FUN_039499cc(DAT_05ae90c0);
      *(undefined8 *)(lVar5 + 0x700) = 0;
    }
    lVar4 = lVar7 + (long)(int)param_2 * 0x23c0;
    if (*(long *)(lVar4 + 0x21f0) != 0) {
      FUN_039499cc(uVar3);
      uVar2 = *puVar6;
      *(undefined8 *)(lVar4 + 0x21f0) = 0;
      *puVar6 = uVar2 & 0xffffdfff;
    }
    lVar4 = lVar7 + (long)(int)param_2 * 0x23c0;
    if (*(long *)(lVar4 + 0x23b8) != 0) {
      FUN_039499cc(uVar3);
      uVar2 = *puVar6;
      *(undefined8 *)(lVar4 + 0x23b8) = 0;
      *puVar6 = uVar2 & 0xffffbfff;
    }
  }
  if (((param_3 >> 0xb & 1) != 0) && (*(long *)(lVar5 + 0xec0) != 0)) {
    FUN_039499cc(DAT_05ae90c0);
    *(undefined8 *)(lVar5 + 0xec0) = 0;
  }
  if (((param_3 >> 0xc & 1) != 0) && (*(long *)(lVar5 + 0xeb8) != 0)) {
    FUN_039499cc(DAT_05ae90c0);
    *(undefined8 *)(lVar5 + 0xeb8) = 0;
    *(undefined4 *)(lVar5 + 0x1248) = 0;
    *(undefined8 *)(lVar5 + 0x1250) = 0;
    *(undefined8 *)(lVar5 + 0x1258) = 0;
  }
  if (((param_3 >> 0xf & 1) != 0) && (*(long *)(lVar5 + 0x1680) != 0)) {
    FUN_039499cc(DAT_05ae90c0);
    *(undefined8 *)(lVar5 + 0x1680) = 0;
  }
  if (((param_3 >> 0x10 & 1) != 0) && (*(long *)(lVar5 + 0x1678) != 0)) {
    FUN_039499cc(DAT_05ae90c0);
    *(undefined8 *)(lVar5 + 0x1678) = 0;
    *(undefined4 *)(lVar5 + 0x1a08) = 0;
    *(undefined8 *)(lVar5 + 0x1a10) = 0;
    *(undefined8 *)(lVar5 + 0x1a18) = 0;
  }
  if (((param_3 & 0x780000) != 0) && (*(long *)(lVar5 + 0xeb0) != 0)) {
    FUN_039499cc(DAT_05ae90c0);
    *(undefined8 *)(lVar5 + 0xeb0) = 0;
  }
  plVar1 = (long *)(lVar7 + (long)(int)param_2 * 0x23c0 + 0x1fa8);
  if (((param_3 & 0x42) != 0) && ((*(byte *)puVar6 & 0x42) == 0)) {
    lVar7 = *plVar1;
    if (*(long *)(lVar7 + 0x10) != 0) {
      FUN_039499cc(DAT_05ae90c0);
      *(undefined8 *)(lVar7 + 0x10) = 0;
    }
    *(uint *)(lVar7 + 0x498) = *(uint *)(lVar7 + 0x498) & 0xfffffffe;
  }
  if (((param_3 & 0x84) != 0) && ((*(byte *)puVar6 & 0x84) == 0)) {
    lVar7 = *plVar1;
    if (*(long *)(lVar7 + 0xf8) != 0) {
      FUN_039499cc(DAT_05ae90c0);
      *(undefined8 *)(lVar7 + 0xf8) = 0;
    }
    *(uint *)(lVar7 + 0x498) = *(uint *)(lVar7 + 0x498) & 0xfffffffd;
  }
  if (((param_3 & 0x108) != 0) && ((*(ushort *)puVar6 & 0x108) == 0)) {
    lVar7 = *plVar1;
    if (*(long *)(lVar7 + 0x1e0) != 0) {
      FUN_039499cc(DAT_05ae90c0);
      *(undefined8 *)(lVar7 + 0x1e0) = 0;
    }
    *(uint *)(lVar7 + 0x498) = *(uint *)(lVar7 + 0x498) & 0xfffffffb;
  }
  if (((param_3 & 0x210) != 0) && ((*(ushort *)puVar6 & 0x210) == 0)) {
    lVar7 = *plVar1;
    if (*(long *)(lVar7 + 0x2c8) != 0) {
      FUN_039499cc(DAT_05ae90c0);
      *(undefined8 *)(lVar7 + 0x2c8) = 0;
    }
    *(uint *)(lVar7 + 0x498) = *(uint *)(lVar7 + 0x498) & 0xfffffff7;
  }
  if (((param_3 & 0x420) != 0) && ((*(ushort *)puVar6 & 0x420) == 0)) {
    lVar7 = *plVar1;
    if (*(long *)(lVar7 + 0x3b0) != 0) {
      FUN_039499cc(DAT_05ae90c0);
      *(undefined8 *)(lVar7 + 0x3b0) = 0;
    }
    *(uint *)(lVar7 + 0x498) = *(uint *)(lVar7 + 0x498) & 0xffffffef;
  }
  if (((param_3 & 0x60000) != 0) && ((*(byte *)(lVar5 + 10) & 6) == 0)) {
    lVar7 = *plVar1;
    if (*(long *)(lVar7 + 0x6d0) != 0) {
      FUN_039499cc(DAT_05ae90c0);
      *(undefined8 *)(lVar7 + 0x6d0) = 0;
    }
    *(uint *)(lVar7 + 0xa70) = *(uint *)(lVar7 + 0xa70) & 0xfffffffd;
  }
  return;
}


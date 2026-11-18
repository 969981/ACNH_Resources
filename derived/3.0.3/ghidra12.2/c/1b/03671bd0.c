
undefined8 FUN_03671bd0(long param_1,uint param_2)

{
  long lVar1;
  char *pcVar2;
  uint uVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  ushort uVar7;
  short sVar8;
  int iVar9;
  int iVar10;
  ulong uVar11;
  void *__s;
  long lVar12;
  undefined8 *puVar13;
  long lVar14;
  long lVar15;
  
  iVar9 = FUN_036721f0(*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28));
  if (iVar9 == 7) {
    return 0;
  }
  lVar1 = param_1 + 0xf0;
  FUN_03655e04(lVar1);
  uVar11 = FUN_03657730(lVar1,iVar9,*(undefined8 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x28))
  ;
  if ((uVar11 & 1) == 0) {
    return 0;
  }
  pcVar2 = (char *)(param_1 + 0x48);
  if ((*(ulong *)(param_1 + 0x38) & 1) != 0) {
    pcVar2 = *(char **)(param_1 + 0x48);
  }
  iVar10 = strcmp(pcVar2,"fdd3d68c7b5b2f9dc7ec50d9888b0a8edbaaec28");
  if (iVar10 == 0) {
    *(undefined1 *)(param_1 + 0x1d84) = 1;
  }
  __s = *(void **)(param_1 + 0x2200);
  *(undefined2 *)(param_1 + 0xd6) = 0xc000;
  *(undefined4 *)(param_1 + 0xd0) = 0x4000000;
  *(undefined4 *)(param_1 + 0x2078) = 0xf0;
  *(undefined1 *)(param_1 + 0xd4) = 0xfd;
  *(undefined8 *)(param_1 + 0x2070) = 0x105000000f1;
  *(undefined2 *)(param_1 + 0x2088) = 0x106;
  *(undefined1 *)(param_1 + 0x205a) = 0;
  *(undefined8 *)(param_1 + 0x2068) = 0x1400015cfe;
  *(undefined4 *)(param_1 + 0x2099) = 0x1000000;
  *(undefined8 *)(param_1 + 0xd8) = 0;
  *(undefined8 *)(param_1 + 0xe0) = 0;
  *(undefined4 *)(param_1 + 0xe8) = 0;
  *(undefined1 *)(param_1 + 0x2060) = 1;
  *(undefined1 *)(param_1 + 0x2098) = 1;
  *(undefined8 *)(param_1 + 0x20b0) = 0;
  *(undefined8 *)(param_1 + 0x20a8) = 0;
  *(undefined8 *)(param_1 + 0x20a0) = 0;
  *(undefined4 *)(param_1 + 0x20b7) = 0;
  *(undefined8 *)(param_1 + 0x20c0) = 0x15cfe00015cfe;
  *(undefined8 *)(param_1 + 0x20d8) = 0;
  *(undefined1 *)(param_1 + 0x20e0) = 0;
  *(undefined1 *)(param_1 + 0x20e1) = 1;
  *(undefined8 *)(param_1 + 0x2100) = 0;
  *(undefined8 *)(param_1 + 0x2108) = 0;
  *(undefined8 *)(param_1 + 0x2110) = 0;
  *(undefined8 *)(param_1 + 0x2118) = 0;
  *(undefined8 *)(param_1 + 0x2120) = 0;
  *(undefined8 *)(param_1 + 0x2128) = 0;
  *(undefined8 *)(param_1 + 0x2130) = 0;
  *(undefined8 *)(param_1 + 0x2138) = 0;
  *(undefined8 *)(&DAT_00002140 + param_1) = 0;
  *(undefined8 *)(param_1 + 0x2148) = 0;
  *(undefined8 *)(param_1 + 0x2150) = 0;
  *(undefined8 *)(param_1 + 0x2158) = 0;
  *(undefined8 *)(param_1 + 0x2160) = 0;
  *(undefined8 *)(param_1 + 0x2168) = 0;
  *(undefined8 *)(param_1 + 0x2170) = 0;
  *(undefined8 *)(param_1 + 0x2178) = 0;
  *(undefined8 *)(param_1 + 0x2180) = 0;
  *(undefined8 *)(param_1 + 0x2188) = 0;
  *(undefined8 *)(param_1 + 0x2190) = 0;
  *(undefined8 *)(param_1 + 0x2198) = 0;
  *(undefined8 *)(param_1 + 0x21a0) = 0;
  *(undefined8 *)(param_1 + 0x21a8) = 0;
  *(undefined8 *)(param_1 + 0x21b0) = 0;
  *(undefined8 *)(param_1 + 0x21b8) = 0;
  *(undefined8 *)(param_1 + 0x21c0) = 0;
  *(undefined8 *)(param_1 + 0x21c8) = 0;
  *(undefined8 *)(param_1 + 0x21d0) = 0;
  *(undefined8 *)(param_1 + 0x21d8) = 0;
  *(undefined8 *)(param_1 + 0x21e0) = 0;
  *(undefined8 *)(param_1 + 0x21e8) = 0;
  *(undefined8 *)(param_1 + 0x21f0) = 0;
  *(undefined8 *)(param_1 + 0x21f8) = 0;
  memset(__s,0,0xf000);
  *(undefined1 *)(param_1 + 0x11358) = 0;
  *(undefined4 *)(param_1 + 0x207c) = 7;
  *(undefined8 *)(param_1 + 0x11370) = 0;
  *(undefined8 *)(param_1 + 0x11378) = 0;
  *(undefined1 *)(param_1 + 0x11380) = 0;
  *(undefined4 *)(param_1 + 0x11398) = 0;
  *(undefined4 *)(param_1 + 0x1135c) = 0;
  *(undefined8 *)(param_1 + 0x20d0) = 0;
  *(undefined4 *)(param_1 + 0x20c8) = 0;
  *(undefined8 *)(param_1 + 0x2080) = 0;
  *(undefined8 *)(param_1 + 0x2090) = 0;
  *(undefined4 *)(param_1 + 0x20bc) = 0;
  *(undefined4 *)(param_1 + 0x2061) = 0;
  *(undefined4 *)(param_1 + 0x11324) = 0;
  *(undefined8 *)(param_1 + 0x11388) = 0;
  *(undefined8 *)(param_1 + 0x11390) = 0;
  *(int *)(param_1 + 0x1139c) = *(int *)(param_1 + 0x2068) + *(int *)(param_1 + 0x2078) * 0x155;
  *(undefined1 *)(param_1 + 0x112fc) = 0xff;
  memset((void *)(param_1 + 0x2208),0,0xf0f4);
  *(undefined4 *)(param_1 + 0xec) = 0;
  *(undefined8 *)(param_1 + 0x13450) = 0;
  *(undefined2 *)(param_1 + 0x135c4) = 0;
  *(undefined4 *)(param_1 + 0x135c8) = 0xffffffff;
  memset((void *)(param_1 + 0x13458),0,0x150);
  *(undefined4 *)(param_1 + 0x13560) = 1;
  *(undefined1 *)(param_1 + 0x13584) = 1;
  *(undefined8 *)(param_1 + 0x13570) = 0x10000c000;
  *(undefined1 *)(param_1 + 0x135a0) = 1;
  *(undefined4 *)(param_1 + 0x13598) = 8;
  *(undefined4 *)(param_1 + 0x135a8) = 0;
  *(undefined4 *)(param_1 + 0x13590) = 0x1ac;
  *(undefined4 *)(param_1 + 0x135c0) = 0;
  *(undefined8 *)(param_1 + 0x135ac) = 0x800000000000;
  *(undefined1 *)(param_1 + 0x135cc) = 0;
  *(undefined8 *)(param_1 + 0x135b4) = 0x746c000006b000;
  *(undefined4 *)(param_1 + 0x135d0) = 1;
  *(undefined4 *)(param_1 + 0x1345c) = 0x1d25;
  uVar3 = 0;
  if (*(uint *)(param_1 + 0x135d8) != 0) {
    uVar3 = 1 << (ulong)(*(uint *)(param_1 + 0x135d8) & 0x1f);
  }
  *(undefined4 *)(param_1 + 0x135e0) = 0;
  *(undefined4 *)(param_1 + 0x135e8) = 0;
  memset(*(void **)(param_1 + 0x135f0),0,(ulong)uVar3 << 1);
  *(undefined1 *)(param_1 + 0x135e4) = 1;
  *(undefined4 *)(param_1 + 0x13990) = 0;
  *(undefined8 *)(param_1 + 0x13610) = 0;
  iVar10 = 0;
  if (*(int *)(param_1 + 0x135fc) != 0) {
    iVar10 = -0x2eea0000 / *(int *)(param_1 + 0x135fc);
  }
  *(undefined8 *)(param_1 + 0x13618) = 0;
  *(undefined8 *)(param_1 + 0x13620) = 0;
  *(undefined8 *)(param_1 + 0x13628) = 0;
  *(undefined8 *)(param_1 + 0x13630) = 0;
  *(undefined8 *)(param_1 + 0x13638) = 0;
  *(undefined8 *)(param_1 + 0x13640) = 0;
  *(undefined8 *)(param_1 + 0x13648) = 0;
  *(undefined8 *)(param_1 + 0x13650) = 0;
  *(undefined8 *)(param_1 + 0x13658) = 0;
  *(undefined8 *)(param_1 + 0x13660) = 0;
  *(undefined8 *)(param_1 + 0x13668) = 0;
  *(undefined8 *)(param_1 + 0x13670) = 0;
  *(undefined8 *)(param_1 + 0x13678) = 0;
  *(undefined8 *)(param_1 + 0x13680) = 0;
  *(undefined8 *)(param_1 + 0x13688) = 0;
  *(undefined1 *)(param_1 + 0x13994) = 1;
  *(undefined8 *)(param_1 + 0x139a0) = 0;
  *(undefined4 *)(param_1 + 0x139b0) = 0;
  *(undefined8 *)(param_1 + 0x13e00) = 0;
  *(undefined8 *)(param_1 + 0x13e08) = 0;
  *(undefined8 *)(param_1 + 0x13e10) = 0;
  *(undefined8 *)(param_1 + 0x13e18) = 0;
  *(int *)(param_1 + 0x135f8) = iVar10 << 0xf;
  memset((void *)(param_1 + 0x11450),0,0x2000);
  iVar10 = *(int *)(param_1 + 0x1d10);
  if (iVar10 == 2) {
    lVar15 = *(long *)(param_1 + 0xf8);
    lVar14 = 0;
    lVar12 = 0;
    do {
      pcVar2 = (char *)(lVar15 + lVar14);
      lVar14 = lVar14 + 2;
      cVar4 = (char)(lVar12 >> 0x3f);
      *pcVar2 = cVar4;
      pcVar2[1] = cVar4;
      lVar12 = lVar12 + 0x4000000000000000;
    } while (lVar14 != 0x800);
    memset(*(void **)(param_1 + 0x110),0,0x2000);
    memset(*(void **)(param_1 + 0x108),0,0x2000);
    lVar15 = *(long *)(param_1 + 0x120);
    lVar14 = 0;
    lVar12 = 0;
    do {
      pcVar2 = (char *)(lVar15 + lVar14);
      lVar14 = lVar14 + 2;
      cVar4 = (char)(lVar12 >> 0x3f);
      *pcVar2 = cVar4;
      pcVar2[1] = cVar4;
      lVar12 = lVar12 + 0x4000000000000000;
    } while (lVar14 != 0x2000);
  }
  else {
    if (iVar10 == 1) {
      memset(*(void **)(param_1 + 0xf8),0xff,0x800);
      *(undefined1 *)(*(long *)(param_1 + 0xf8) + 8) = 0xf7;
      *(undefined1 *)(*(long *)(param_1 + 0xf8) + 9) = 0xef;
      *(undefined1 *)(*(long *)(param_1 + 0xf8) + 10) = 0xdf;
      *(undefined1 *)(*(long *)(param_1 + 0xf8) + 0xf) = 0xbf;
    }
    else {
      if (iVar10 != 0) goto LAB_036720e8;
      memset(*(void **)(param_1 + 0xf8),0,0x800);
    }
    memset(*(void **)(param_1 + 0x110),0,0x2000);
    memset(*(void **)(param_1 + 0x108),0,0x2000);
    memset(*(void **)(param_1 + 0x120),0,0x2000);
  }
  puVar13 = *(undefined8 **)(param_1 + 0x118);
  puVar13[0x1e] = 0;
  puVar13[0x1f] = 0;
  puVar13[0x1c] = 0;
  puVar13[0x1d] = 0;
  puVar13[0x1a] = 0;
  puVar13[0x1b] = 0;
  puVar13[0x18] = 0;
  puVar13[0x19] = 0;
  puVar13[0x16] = 0;
  puVar13[0x17] = 0;
  puVar13[0x14] = 0;
  puVar13[0x15] = 0;
  puVar13[0x12] = 0;
  puVar13[0x13] = 0;
  puVar13[0x10] = 0;
  puVar13[0x11] = 0;
  puVar13[0xe] = 0;
  puVar13[0xf] = 0;
  puVar13[0xc] = 0;
  puVar13[0xd] = 0;
  puVar13[10] = 0;
  puVar13[0xb] = 0;
  puVar13[8] = 0;
  puVar13[9] = 0;
  puVar13[6] = 0;
  puVar13[7] = 0;
  puVar13[4] = 0;
  puVar13[5] = 0;
  puVar13[2] = 0;
  puVar13[3] = 0;
  *puVar13 = 0;
  puVar13[1] = 0;
LAB_036720e8:
  memset(*(void **)(param_1 + 0x128),0,0x8000);
  memcpy((void *)(param_1 + 0x138),PTR_DAT_04bcaa60,0x230);
  FUN_03672468(param_1,iVar9,param_2 & 1);
  uVar3 = *(uint *)(param_1 + 0x200);
  uVar5 = 0xfffc - *(int *)(param_1 + 0x204);
  uVar6 = 0;
  if (uVar3 != 0) {
    uVar6 = uVar5 / uVar3;
  }
  uVar7 = (**(code **)(param_1 + 0x220))(lVar1,(uVar5 - uVar6 * uVar3) + *(int *)(param_1 + 0x204));
  uVar3 = *(uint *)(param_1 + 0x200);
  uVar5 = 0xfffd - *(int *)(param_1 + 0x204);
  uVar6 = 0;
  if (uVar3 != 0) {
    uVar6 = uVar5 / uVar3;
  }
  sVar8 = (**(code **)(param_1 + 0x220))(lVar1,(uVar5 - uVar6 * uVar3) + *(int *)(param_1 + 0x204));
  *(undefined8 *)(param_1 + 0x18634) = 0x100000000;
  *(ushort *)(param_1 + 0xd6) = uVar7 | sVar8 << 8;
  *(undefined2 *)(param_1 + 0x18630) = 0;
  *(undefined2 *)(param_1 + 0xc9) = 0x20;
  *(undefined1 *)(param_1 + 0xcb) = 0x20;
  *(undefined4 *)(param_1 + 0x1863c) = 0;
  *(undefined1 *)(param_1 + 200) = 0;
  *(undefined1 *)(param_1 + 0x186a8) = 0;
  *(undefined8 *)(param_1 + 0x18688) = 0;
  *(undefined8 *)(param_1 + 0x1868e) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(undefined8 *)(param_1 + 0xa0) = 0;
  *(undefined8 *)(param_1 + 0xa8) = 0;
  *(undefined8 *)(param_1 + 0xb0) = 0;
  (**(code **)(param_1 + 0x18670))(0,*(undefined8 *)(param_1 + 0x18640));
  return 1;
}


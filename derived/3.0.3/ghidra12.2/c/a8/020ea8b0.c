
void FUN_020ea8b0(long param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  byte bVar4;
  int iVar5;
  long *plVar6;
  long lVar7;
  
  iVar5 = 0;
  bVar4 = *PTR_DAT_04bb5018;
  do {
    lVar7 = param_1 + (long)iVar5 * 0x15;
    iVar5 = iVar5 + 1;
    *(byte *)(lVar7 + 6) = bVar4 >> 6 | bVar4 << 2;
    *(byte *)(lVar7 + 7) = bVar4 >> 6 | 4;
    *(undefined1 *)(lVar7 + 4) = 0xff;
    *(byte *)(lVar7 + 5) = bVar4 << 2 | 3;
    *(byte *)(lVar7 + 8) = *(byte *)(lVar7 + 8) & 0xc0;
    *(byte *)(lVar7 + 0xb) = *(byte *)(lVar7 + 0xb) & 0x3f;
    *(byte *)(lVar7 + 0xc) = *(byte *)(lVar7 + 0xc) & 0xfc;
  } while (iVar5 != 0x6d);
  lVar7 = 0;
  plVar6 = (long *)(param_1 + 0x900);
  do {
    plVar1 = (long *)(param_1 + lVar7);
    if ((*plVar6 != *plVar1 || plVar6[1] != plVar1[1]) ||
        *(long *)((long)plVar6 + 0xd) != *(long *)((long)plVar1 + 0xd)) {
      lVar2 = *plVar1;
      lVar3 = plVar1[1];
      *(undefined8 *)((long)plVar6 + 0xd) = *(undefined8 *)((long)plVar1 + 0xd);
      *plVar6 = lVar2;
      plVar6[1] = lVar3;
    }
    lVar7 = lVar7 + 0x15;
    plVar6 = plVar6 + 5;
  } while (lVar7 != 0x8dc);
  iVar5 = 0;
  do {
    lVar7 = (long)iVar5;
    iVar5 = iVar5 + 1;
    *(byte *)(param_1 + 0x1a00 + lVar7) = *(byte *)(param_1 + 0x1a00 + lVar7) & 0xfe;
  } while (iVar5 != 0x6d);
  *(undefined8 *)(param_1 + 0x1a78) = 0;
  *(undefined8 *)(param_1 + 0x1a70) = 0;
  return;
}


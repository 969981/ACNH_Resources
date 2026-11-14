
void FUN_01d50650(byte *param_1)

{
  uint uVar1;
  byte bVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  uint *puVar6;
  
  if ((((1 < *(byte *)(*DAT_0537d558 + 0x474)) && (uVar4 = (ulong)*param_1, uVar4 < 8)) &&
      (lVar5 = *DAT_0537d558 + 0x44c, *(char *)(lVar5 + uVar4 * 4 + 2) != -1)) &&
     ((uVar4 = (ulong)*(ushort *)(lVar5 + uVar4 * 4), uVar4 < 8 &&
      (lVar5 = *(long *)PTR_DAT_04bb4fb8, *(char *)(lVar5 + uVar4 * 0x13f0 + 0x13d4) != '\0')))) {
    puVar6 = (uint *)(lVar5 + uVar4 * 0x13f0);
    uVar1 = puVar6[0x4f4];
    if ((uVar1 < 3 && *puVar6 < 8) && *(long *)PTR_DAT_04bb46b0 != 0) {
      if (uVar1 == 2) {
        if (DAT_055021a0 == 0) {
          return;
        }
        lVar5 = DAT_055021a0 + 0x3a20;
      }
      else if (uVar1 == 0) {
        if (7 < *(byte *)(lVar5 + uVar4 * 0x13f0 + 0x13d5)) {
          return;
        }
        lVar5 = FUN_026eef60();
        lVar5 = lVar5 + 0x110;
      }
      else {
        uVar4 = (ulong)*(byte *)(lVar5 + uVar4 * 0x13f0 + 0x13d5);
        if (7 < uVar4) {
          return;
        }
        lVar5 = (**(code **)(*(long *)**(undefined8 **)(*(long *)PTR_DAT_04bb46b0 + 0x10) + 0x18))()
        ;
        if (lVar5 == 0) {
          return;
        }
        lVar5 = lVar5 + uVar4 * 0x74a40 + 0x5b3e60;
      }
      bVar2 = *param_1;
      if (7 < bVar2) {
        bVar2 = 0xff;
      }
      lVar3 = (long)(int)(char)bVar2;
      (&DAT_0536d3bc)[lVar3 * 0x34] = 0xff00;
      (&DAT_0536d3b8)[lVar3 * 0x1a] = 0;
      (&DAT_0536d3be)[lVar3 * 0x68] = 0;
      *(undefined4 *)((long)&DAT_0536d3e0 + lVar3 * 0x68 + 4) = 0;
      (&DAT_0536d3c0)[lVar3 * 0xd] = lVar5;
      (&DAT_0536d3c8)[lVar3 * 0xd] = 0x37ad0;
      *(undefined1 *)(&DAT_0536d3f0 + lVar3 * 0x34) = 1;
    }
  }
  return;
}



void FUN_01d50968(byte *param_1,undefined1 *param_2)

{
  uint uVar1;
  byte bVar2;
  undefined1 uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  uint *puVar8;
  
  uVar6 = (ulong)*param_1;
  if ((((uVar6 < 8) && (*(char *)(*DAT_0537d558 + 0x44c + uVar6 * 4 + 2) != -1)) &&
      (uVar6 = (ulong)*(ushort *)(*DAT_0537d558 + 0x44c + uVar6 * 4), uVar6 < 8)) &&
     (lVar7 = *(long *)PTR_DAT_04bb4fb8, *(char *)(lVar7 + uVar6 * 0x13f0 + 0x13d4) != '\0')) {
    puVar8 = (uint *)(lVar7 + uVar6 * 0x13f0);
    uVar1 = puVar8[0x4f4];
    if ((uVar1 < 3 && *puVar8 < 8) && *(long *)PTR_DAT_04bb46b0 != 0) {
      if (uVar1 == 2) {
        if (DAT_055021a0 == 0) {
          return;
        }
        lVar7 = DAT_055021a0 + 0x3a20;
      }
      else if (uVar1 == 0) {
        if (7 < *(byte *)(lVar7 + uVar6 * 0x13f0 + 0x13d5)) {
          return;
        }
        lVar7 = FUN_026eef60();
        lVar7 = lVar7 + 0x110;
      }
      else {
        uVar6 = (ulong)*(byte *)(lVar7 + uVar6 * 0x13f0 + 0x13d5);
        if (7 < uVar6) {
          return;
        }
        lVar7 = (**(code **)(*(long *)**(undefined8 **)(*(long *)PTR_DAT_04bb46b0 + 0x10) + 0x18))()
        ;
        if (lVar7 == 0) {
          return;
        }
        lVar7 = lVar7 + uVar6 * 0x74a40 + 0x5b3e60;
      }
      bVar2 = *param_1;
      uVar3 = *param_2;
      if (7 < bVar2) {
        bVar2 = 0xff;
      }
      lVar4 = (long)(int)(char)bVar2;
      lVar5 = lVar4 * 0x68;
      *(undefined1 *)(&DAT_0536d3bc + lVar4 * 0x34) = 4;
      (&DAT_0536d3b8)[lVar4 * 0x1a] = 0;
      *(undefined1 *)((long)&DAT_0536d3bc + lVar5 + 1) = uVar3;
      (&DAT_0536d3be)[lVar5] = 0;
      *(undefined4 *)((long)&DAT_0536d3e0 + lVar5 + 4) = 0;
      (&DAT_0536d3c0)[lVar4 * 0xd] = lVar7;
      (&DAT_0536d3c8)[lVar4 * 0xd] = 0x37ad0;
      *(undefined1 *)(&DAT_0536d3f0 + lVar4 * 0x34) = 1;
    }
  }
  return;
}


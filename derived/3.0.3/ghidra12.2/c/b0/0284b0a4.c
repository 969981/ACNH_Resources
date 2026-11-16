
void FUN_0284b0a4(long param_1)

{
  uint uVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  char cVar5;
  ulong uVar6;
  undefined *puVar7;
  uint uVar8;
  long lVar9;
  uint uVar10;
  
  if (*(char *)(param_1 + 0x2f) == '\x02') {
    uVar6 = FUN_0284a8e4();
    if ((uVar6 & 1) != 0) {
      bVar4 = *(byte *)(param_1 + 0x2c);
      uVar10 = (uint)(char)bVar4;
      if ((bVar4 < 10) && ((&DAT_053fee41)[(ulong)uVar10 * 0xba0] != '\0')) {
        cVar5 = *(char *)(*(long *)PTR_DAT_04bb32e8 + 0x4064);
        uVar1 = (int)cVar5 + 0x18;
        if (4 < cVar5) {
          uVar1 = (int)cVar5;
        }
        if (1 < *(uint *)(&DAT_053fec08 + (ulong)uVar10 * 0xba0)) {
          lVar9 = *(long *)((&DAT_053fec00)[(ulong)uVar10 * 0x174] + 8);
          if (lVar9 != 0 && (byte *)(lVar9 + -0x10) != (byte *)0x0) {
            bVar2 = *(byte *)(lVar9 + -0x10);
            uVar1 = uVar1 & 0xff;
            uVar8 = (uint)bVar2;
            bVar3 = *(byte *)(*(long *)PTR_DAT_04bb32e8 + 0x4065);
            if (uVar8 <= uVar1 && uVar1 != bVar2) {
              return;
            }
            if (bVar3 == *(byte *)(lVar9 + -0xf) && uVar1 == uVar8) {
              return;
            }
            if (*(byte *)(lVar9 + -0xf) < bVar3 && uVar1 == uVar8) {
              return;
            }
          }
        }
      }
      puVar7 = &DAT_053fe348 + (ulong)uVar10 * 0xba0;
      if (9 < bVar4) {
        puVar7 = &DAT_053fe348;
      }
      FUN_0214ee50(puVar7 + 0x8b0,uVar10);
      FUN_0219d7e0(&DAT_053fe348,uVar10,0,0);
    }
    *(undefined1 *)(param_1 + 0x35) = 1;
  }
  return;
}


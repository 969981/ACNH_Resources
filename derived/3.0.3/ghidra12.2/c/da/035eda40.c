
void FUN_035eda40(long param_1,long param_2,ulong param_3,long param_4)

{
  long lVar1;
  ulong uVar2;
  uint uVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  ulong uVar7;
  
  uVar2 = 3;
  if ((param_3 & 0xfffffffffffffffc) != 0x10) {
    uVar2 = 0xf;
  }
  uVar7 = 0;
  lVar1 = ((param_4 - 1000U) / 100) * 3;
  bVar4 = (&DAT_041926f8)[lVar1];
  bVar5 = (&DAT_041926f9)[lVar1];
  bVar6 = (&DAT_041926fa)[lVar1];
  do {
    uVar3 = *(uint *)(param_2 + (uVar7 & uVar2) * 4);
    *(ushort *)(param_1 + 0xc0 + uVar7 * 2) =
         (ushort)((uVar3 >> 8 & 0xff) * (uint)bVar5 * 0x8081 >> 0x15) & 0x3e0 |
         (ushort)(((uVar3 & 0xff) * (uint)bVar4) / 0x7f8) & 0x1f |
         (ushort)((uVar3 >> 0x10 & 0xff) * (uint)bVar6 * 0x8081 >> 0x10) & 0x7c00 | 0x8000;
    uVar7 = uVar7 + 1;
  } while (uVar7 != 0xc);
  if ((*(char *)(param_1 + -0x1eb) == '\0') && (*(byte *)(param_1 + -0x1ee) < 3)) {
    *(undefined8 *)(param_1 + 0x26) = *(undefined8 *)(param_1 + 0xc0);
    *(undefined8 *)(param_1 + 0x6e) = *(undefined8 *)(param_1 + 200);
    *(undefined8 *)(param_1 + 0x76) = *(undefined8 *)(param_1 + 0xd0);
  }
  lVar1 = param_1 + 0x26;
  *(undefined2 *)(param_1 + 0x1e) = *(undefined2 *)(lVar1 + (ulong)*(byte *)(param_1 + 0x19) * 2);
  *(undefined2 *)(param_1 + 0x20) = *(undefined2 *)(lVar1 + (ulong)*(byte *)(param_1 + 0x1a) * 2);
  *(undefined2 *)(param_1 + 0x22) = *(undefined2 *)(lVar1 + (ulong)*(byte *)(param_1 + 0x1b) * 2);
  *(undefined2 *)(param_1 + 0x24) = *(undefined2 *)(lVar1 + (ulong)*(byte *)(param_1 + 0x1c) * 2);
  return;
}


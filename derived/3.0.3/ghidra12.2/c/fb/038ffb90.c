
void FUN_038ffb90(void)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  uint uVar4;
  long lVar5;
  
  if ((*(byte *)(DAT_05ae7900 + 8) & 1) != 0) {
    *(int *)(DAT_05ae7900 + 0xc) = *(int *)(DAT_05ae7900 + 0xc) + 1;
  }
  FUN_038faca0(DAT_05ae78f0);
  lVar5 = DAT_05ae7930;
  if (*(uint *)(DAT_05ae7930 + 0x74) < *(uint *)(DAT_05ae7930 + 0x6c)) {
    *(undefined4 *)(DAT_05ae7930 + 0x74) = *(undefined4 *)(DAT_05ae7930 + 0x6c);
  }
  if (*(uint *)(lVar5 + 0x70) < *(uint *)(lVar5 + 0x68)) {
    *(undefined4 *)(lVar5 + 0x70) = *(undefined4 *)(lVar5 + 0x68);
  }
  *(undefined4 *)(lVar5 + 0x6c) = 0;
  *(undefined4 *)(lVar5 + 0x68) = 0;
  bVar3 = 1 - *(char *)(lVar5 + 0x78);
  *(byte *)(lVar5 + 0x78) = bVar3;
  uVar1 = *(uint *)(lVar5 + 0x40);
  uVar2 = *(int *)(lVar5 + 0x60) - 1;
  uVar4 = 0;
  if (uVar1 != 0) {
    uVar4 = uVar2 / uVar1;
  }
  *(uint *)(lVar5 + 0x50 + (ulong)bVar3 * 8) = uVar2 - uVar4 * uVar1;
  uVar1 = *(uint *)(lVar5 + 0x18);
  uVar2 = *(int *)(lVar5 + 100) - 1;
  uVar4 = 0;
  if (uVar1 != 0) {
    uVar4 = uVar2 / uVar1;
  }
  *(uint *)(lVar5 + 0x50 + (ulong)*(byte *)(lVar5 + 0x78) * 8 + 4) = uVar2 - uVar4 * uVar1;
  lVar5 = DAT_05ae7940;
  if (*(uint *)(DAT_05ae7940 + 0x74) < *(uint *)(DAT_05ae7940 + 0x6c)) {
    *(undefined4 *)(DAT_05ae7940 + 0x74) = *(undefined4 *)(DAT_05ae7940 + 0x6c);
  }
  if (*(uint *)(lVar5 + 0x70) < *(uint *)(lVar5 + 0x68)) {
    *(undefined4 *)(lVar5 + 0x70) = *(undefined4 *)(lVar5 + 0x68);
  }
  *(undefined4 *)(lVar5 + 0x6c) = 0;
  *(undefined4 *)(lVar5 + 0x68) = 0;
  bVar3 = 1 - *(char *)(lVar5 + 0x78);
  *(byte *)(lVar5 + 0x78) = bVar3;
  *(undefined4 *)(lVar5 + 0x50 + (ulong)bVar3 * 8) = *(undefined4 *)(lVar5 + 0x60);
  *(undefined4 *)(lVar5 + 0x50 + (ulong)*(byte *)(lVar5 + 0x78) * 8 + 4) =
       *(undefined4 *)(lVar5 + 100);
  return;
}


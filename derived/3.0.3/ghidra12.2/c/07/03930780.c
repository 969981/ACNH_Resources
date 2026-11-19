
void FUN_03930780(long param_1,undefined8 param_2,byte *param_3)

{
  char *pcVar1;
  undefined4 *puVar2;
  long lVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  byte bVar6;
  byte bVar7;
  char *pcVar8;
  ulong uVar9;
  ulong uVar10;
  undefined4 *puVar11;
  size_t __n;
  uint uVar12;
  undefined4 uVar13;
  undefined4 local_a8 [30];
  
  pcVar8 = *(char **)(param_3 + 8);
  pcVar1 = (char *)(param_1 + 0x27c);
  if ((((((*param_3 >> 1 & 1) != 0) || (pcVar8 < pcVar1)) || ((char *)((ulong)pcVar1 | 1) <= pcVar8)
       ) && ((((((char *)(param_1 + 0x18U) <= pcVar8 && (pcVar8 < (char *)(param_1 + 0x30U))) ||
               (((char *)(param_1 + 0x30U) <= pcVar8 && (pcVar8 < (char *)(param_1 + 0x48U))))) ||
              (((char *)(param_1 + 0x48U) <= pcVar8 && (pcVar8 < (char *)(param_1 + 0x60U))))) ||
             ((char *)(param_1 + 0x60U) <= pcVar8 && pcVar8 < (char *)(param_1 + 0x78U))))) &&
     (*pcVar1 != '\0')) {
    bVar6 = *(byte *)(param_1 + 0x2b);
    if (bVar6 == 0) {
      bVar6 = *(byte *)(param_1 + 0x28);
      *(undefined1 *)(param_1 + 0x43) = 0;
      *(undefined1 *)(param_1 + 0x5b) = 0;
      *(undefined4 *)(param_1 + 0x178) = 0;
      *(undefined1 *)(param_1 + 0x73) = 0;
      *(undefined4 *)(param_1 + 0x1f8) = 0;
      *(byte *)(param_1 + 0x40) = bVar6;
      *(undefined4 *)(param_1 + 0xf8) = 0;
      *(uint *)(param_1 + 0xfc) = (uint)bVar6;
      *(byte *)(param_1 + 0x58) = bVar6;
      *(uint *)(param_1 + 0x17c) = (uint)bVar6;
      *(byte *)(param_1 + 0x70) = bVar6;
      *(uint *)(param_1 + 0x1fc) = (uint)bVar6;
    }
    else {
      puVar2 = (undefined4 *)(param_1 + 0x78);
      if (bVar6 == 1) {
        uVar9 = 0;
      }
      else {
        puVar11 = (undefined4 *)(param_1 + 0x84);
        uVar10 = 0;
        do {
          puVar4 = puVar11 + -1;
          if (0x7d < uVar10) {
            puVar4 = puVar2;
          }
          puVar5 = puVar11;
          if (0x7d < uVar10 + 1) {
            puVar5 = puVar2;
          }
          uVar13 = *puVar5;
          uVar9 = uVar10 + 2;
          puVar11 = puVar11 + 2;
          local_a8[uVar10] = *puVar4;
          local_a8[uVar10 + 1] = uVar13;
          uVar10 = uVar9;
        } while (uVar9 != ((ulong)bVar6 & 0xfe));
      }
      if ((bVar6 & 1) != 0) {
        lVar3 = uVar9 + 2;
        if (0x7d < uVar9) {
          lVar3 = 0;
        }
        local_a8[uVar9] = puVar2[lVar3];
      }
      bVar7 = *(byte *)(param_1 + 0x28);
      __n = (ulong)bVar6 << 2;
      uVar12 = (uint)bVar6;
      *(byte *)(param_1 + 0x43) = bVar6;
      *(byte *)(param_1 + 0x40) = bVar7;
      *(uint *)(param_1 + 0xf8) = uVar12;
      *(uint *)(param_1 + 0xfc) = (uint)bVar7;
      memcpy((void *)(param_1 + 0x100),local_a8,__n);
      *(byte *)(param_1 + 0x58) = bVar7;
      *(byte *)(param_1 + 0x5b) = bVar6;
      *(uint *)(param_1 + 0x17c) = (uint)bVar7;
      *(uint *)(param_1 + 0x178) = uVar12;
      memcpy((void *)(param_1 + 0x180),local_a8,__n);
      *(byte *)(param_1 + 0x70) = bVar7;
      *(byte *)(param_1 + 0x73) = bVar6;
      *(uint *)(param_1 + 0x1fc) = (uint)bVar7;
      *(uint *)(param_1 + 0x1f8) = uVar12;
      memcpy((void *)(param_1 + 0x200),local_a8,__n);
    }
  }
  return;
}


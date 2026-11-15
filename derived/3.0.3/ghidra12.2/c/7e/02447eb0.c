
void FUN_02447eb0(long param_1)

{
  int iVar1;
  long lVar2;
  uint uVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  uint *puVar7;
  char cVar8;
  uint *puVar9;
  int *piVar10;
  
  if (((*(byte *)(param_1 + 0x17d4) >> 2 & 1) != 0) &&
     (uVar6 = FUN_0231eddc(param_1,0), (uVar6 & 1) != 0)) {
    *(uint *)(param_1 + 0x17d4) = *(uint *)(param_1 + 0x17d4) & 0xfffffffb;
    puVar7 = (uint *)FUN_02374304(param_1);
    puVar5 = PTR_DAT_04bc2fe8;
    puVar4 = PTR_DAT_04bc2fe0;
    if (*puVar7 != 0) {
      cVar8 = *PTR_DAT_04bc2fe0;
      do {
        if (cVar8 == '\0') {
          cVar8 = '\x01';
          *(undefined8 *)puVar5 = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 8) = 0xffffffffffffffff;
          *puVar4 = 1;
          *(undefined8 *)(puVar5 + 0xa0) = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 0x10) = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 0x18) = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 0x20) = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 0x28) = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 0x30) = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 0x38) = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 0x40) = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 0x48) = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 0x50) = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 0x58) = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 0x60) = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 0x68) = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 0x70) = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 0x78) = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 0x80) = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 0x88) = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 0x90) = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 0x98) = 0xffffffffffffffff;
          uVar3 = *puVar7;
        }
        else {
          uVar3 = *(uint *)(puVar5 + 0x6c);
          if (-1 < (int)uVar3) {
            if (((char *)((ulong)uVar3 + (long)puVar7) != (char *)0x0) &&
               (*(char *)((ulong)uVar3 + (long)puVar7) != '\0')) {
              return;
            }
            break;
          }
          if (uVar3 != 0xffffffff) break;
          uVar3 = *puVar7;
        }
        if ((uVar3 == 0) || (puVar9 = (uint *)(ulong)uVar3, puVar7 == puVar9)) break;
        lVar2 = 0xc;
        if (*(char *)((long)puVar7 + (10 - (long)puVar9)) != '\0') {
          lVar2 = 0x1c;
        }
        lVar2 = (long)puVar7 + (lVar2 - (long)puVar9);
        if (lVar2 == 0) break;
        uVar6 = (ulong)*(ushort *)((long)puVar7 + (8 - (long)puVar9));
        *(undefined4 *)(puVar5 + 0x6c) = 0xfffffffe;
        if (uVar6 == 0) break;
        piVar10 = (int *)(lVar2 + 4);
        while (piVar10[-1] != -0x121f5736) {
          piVar10 = piVar10 + 2;
          uVar6 = uVar6 - 1;
          if (uVar6 == 0) goto LAB_02447ff8;
        }
        iVar1 = 0;
        if (*piVar10 != -1) {
          iVar1 = *piVar10;
        }
        *(int *)(puVar5 + 0x6c) = iVar1;
        if (*puVar7 == 0) break;
      } while( true );
    }
LAB_02447ff8:
    uVar3 = *(uint *)(param_1 + 0xabc);
    if (uVar3 == 0) {
      FUN_023736d8(param_1);
      return;
    }
    if (uVar3 < 0x149) {
      *(undefined8 *)(param_1 + 0x18c0) = *(undefined8 *)(param_1 + 0x1940);
      *(undefined8 *)(param_1 + 0x18c0) = 0;
      *(undefined8 *)(param_1 + 0x18c8) = *(undefined8 *)(param_1 + 0x1948);
      *(undefined8 *)(param_1 + 0x18c8) = 0;
      *(undefined8 *)(param_1 + 0x18d0) = *(undefined8 *)(param_1 + 0x1950);
      *(undefined8 *)(param_1 + 0x18d0) = 0;
      *(undefined2 *)(param_1 + 0x18d8) = *(undefined2 *)(param_1 + 0x1958);
      *(undefined8 *)(param_1 + 0x18a0) = *(undefined8 *)(param_1 + 0x1920);
      *(undefined8 *)(param_1 + 0x18a0) = 0;
      *(undefined8 *)(param_1 + 0x18a8) = *(undefined8 *)(param_1 + 0x1928);
      *(undefined8 *)(param_1 + 0x18a8) = 0;
      *(undefined8 *)(param_1 + 0x18b0) = *(undefined8 *)(param_1 + 0x1930);
      *(undefined8 *)(param_1 + 0x18b0) = 0;
      *(undefined8 *)(param_1 + 0x18b8) = *(undefined8 *)(param_1 + 0x1938);
      *(undefined8 *)(param_1 + 0x18b8) = 0;
      *(undefined8 *)(param_1 + 0x1880) = *(undefined8 *)(param_1 + 0x1900);
      *(undefined8 *)(param_1 + 0x1880) = 0;
      *(undefined8 *)(param_1 + 0x1888) = *(undefined8 *)(param_1 + 0x1908);
      *(undefined8 *)(param_1 + 0x1888) = 0;
      *(undefined8 *)(param_1 + 0x1890) = *(undefined8 *)(param_1 + 0x1910);
      *(undefined8 *)(param_1 + 0x1890) = 0;
      *(undefined8 *)(param_1 + 0x1898) = *(undefined8 *)(param_1 + 0x1918);
      *(undefined8 *)(param_1 + 0x1898) = 0;
      *(undefined8 *)(param_1 + 0x1860) = *(undefined8 *)(param_1 + 0x18e0);
      *(undefined8 *)(param_1 + 0x1868) = *(undefined8 *)(param_1 + 0x18e8);
      *(undefined8 *)(param_1 + 0x1870) = *(undefined8 *)(param_1 + 0x18f0);
      *(undefined8 *)(param_1 + 0x1878) = *(undefined8 *)(param_1 + 0x18f8);
      lVar2 = 0;
      if (*(long *)(param_1 + 0x70) != 0) {
        lVar2 = *(long *)(param_1 + 0x70) + 0x278;
      }
      FUN_03ebb160(lVar2,uVar3);
    }
  }
  return;
}


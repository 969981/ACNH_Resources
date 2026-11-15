
void FUN_02373fd0(long param_1,ulong param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  uint *puVar5;
  ulong uVar6;
  uint uVar7;
  char cVar8;
  uint *puVar9;
  int *piVar10;
  uint local_2c;
  undefined1 local_28;
  undefined4 local_24;
  
  if ((param_2 & 1) != 0) {
    if (*(long *)PTR_DAT_04bb4718 == 0) {
      if ((DAT_054f0960 & 1) == 0) {
        iVar4 = __cxa_guard_acquire(&DAT_054f0960);
        puVar5 = (uint *)&DAT_054f0958;
        if (iVar4 != 0) {
          DAT_054f0958 = 0;
          __cxa_guard_release(&DAT_054f0960);
          puVar5 = (uint *)&DAT_054f0958;
        }
      }
      else {
        puVar5 = (uint *)&DAT_054f0958;
      }
    }
    else {
      puVar5 = (uint *)(*(long *)PTR_DAT_04bb4718 + 0x204);
      if ((ulong)*(byte *)(param_1 + 0x1ee8) < 8) {
        puVar5 = puVar5 + (ulong)*(byte *)(param_1 + 0x1ee8) * 2;
      }
    }
    *puVar5 = *puVar5 | 2;
  }
  local_2c = 0;
  if (*(long *)(param_1 + 0x70) != 0) {
    uVar7 = *(uint *)(*(long *)(param_1 + 0x70) + 0x280);
    local_2c = 0;
    if (uVar7 < 0x149) {
      local_2c = uVar7;
    }
  }
  puVar5 = (uint *)FUN_0251d928(local_2c);
  puVar3 = PTR_DAT_04bc2fe8;
  puVar2 = PTR_DAT_04bc2fe0;
  if (*puVar5 == 0) {
LAB_023741b4:
    uVar6 = FUN_02546f34(param_1 + 0x1ee8,*(undefined4 *)(param_1 + 0x230));
    if ((uVar6 & 1) == 0) {
      local_24 = 0;
      local_2c = 6;
      local_28 = 1;
      FUN_02374e74(param_1,&local_2c);
    }
    return;
  }
  cVar8 = *PTR_DAT_04bc2fe0;
  do {
    if (cVar8 == '\0') {
      cVar8 = '\x01';
      *(undefined8 *)puVar3 = 0xffffffffffffffff;
      *(undefined8 *)(puVar3 + 8) = 0xffffffffffffffff;
      *puVar2 = 1;
      *(undefined8 *)(puVar3 + 0xa0) = 0xffffffffffffffff;
      *(undefined8 *)(puVar3 + 0x10) = 0xffffffffffffffff;
      *(undefined8 *)(puVar3 + 0x18) = 0xffffffffffffffff;
      *(undefined8 *)(puVar3 + 0x20) = 0xffffffffffffffff;
      *(undefined8 *)(puVar3 + 0x28) = 0xffffffffffffffff;
      *(undefined8 *)(puVar3 + 0x30) = 0xffffffffffffffff;
      *(undefined8 *)(puVar3 + 0x38) = 0xffffffffffffffff;
      *(undefined8 *)(puVar3 + 0x40) = 0xffffffffffffffff;
      *(undefined8 *)(puVar3 + 0x48) = 0xffffffffffffffff;
      *(undefined8 *)(puVar3 + 0x50) = 0xffffffffffffffff;
      *(undefined8 *)(puVar3 + 0x58) = 0xffffffffffffffff;
      *(undefined8 *)(puVar3 + 0x60) = 0xffffffffffffffff;
      *(undefined8 *)(puVar3 + 0x68) = 0xffffffffffffffff;
      *(undefined8 *)(puVar3 + 0x70) = 0xffffffffffffffff;
      *(undefined8 *)(puVar3 + 0x78) = 0xffffffffffffffff;
      *(undefined8 *)(puVar3 + 0x80) = 0xffffffffffffffff;
      *(undefined8 *)(puVar3 + 0x88) = 0xffffffffffffffff;
      *(undefined8 *)(puVar3 + 0x90) = 0xffffffffffffffff;
      *(undefined8 *)(puVar3 + 0x98) = 0xffffffffffffffff;
      uVar7 = *puVar5;
    }
    else {
      uVar7 = *(uint *)(puVar3 + 0x1c);
      if (-1 < (int)uVar7) {
        if ((((ushort *)((ulong)uVar7 + (long)puVar5) != (ushort *)0x0) &&
            (uVar7 = (uint)*(ushort *)((ulong)uVar7 + (long)puVar5),
            0xfeb7 < (uVar7 - 0x149 & 0xffff))) && (uVar7 != 5)) {
          if (0x148 < uVar7) {
            return;
          }
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
          lVar1 = 0;
          if (*(long *)(param_1 + 0x70) != 0) {
            lVar1 = *(long *)(param_1 + 0x70) + 0x278;
          }
          local_2c = uVar7;
          FUN_03ebb160(lVar1,uVar7);
          return;
        }
        goto LAB_023741b4;
      }
      if (uVar7 != 0xffffffff) goto LAB_023741b4;
      uVar7 = *puVar5;
    }
    if ((uVar7 == 0) || (puVar9 = (uint *)(ulong)uVar7, puVar5 == puVar9)) goto LAB_023741b4;
    lVar1 = 0xc;
    if (*(char *)((long)puVar5 + (10 - (long)puVar9)) != '\0') {
      lVar1 = 0x1c;
    }
    lVar1 = (long)puVar5 + (lVar1 - (long)puVar9);
    if (lVar1 == 0) goto LAB_023741b4;
    uVar6 = (ulong)*(ushort *)((long)puVar5 + (8 - (long)puVar9));
    *(undefined4 *)(puVar3 + 0x1c) = 0xfffffffe;
    if (uVar6 == 0) goto LAB_023741b4;
    piVar10 = (int *)(lVar1 + 4);
    while (piVar10[-1] != -0x1af2cde8) {
      piVar10 = piVar10 + 2;
      uVar6 = uVar6 - 1;
      if (uVar6 == 0) goto LAB_023741b4;
    }
    iVar4 = 0;
    if (*piVar10 != -1) {
      iVar4 = *piVar10;
    }
    *(int *)(puVar3 + 0x1c) = iVar4;
    if (*puVar5 == 0) goto LAB_023741b4;
  } while( true );
}


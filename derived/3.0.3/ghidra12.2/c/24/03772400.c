
bool FUN_03772400(ushort param_1)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  uint *puVar5;
  long lVar6;
  ulong uVar7;
  char cVar8;
  uint *puVar9;
  int *piVar10;
  undefined4 local_4;
  
  lVar6 = *(long *)PTR_DAT_04bb4960;
  if ((lVar6 != 0) && (param_1 < 0x15)) {
    local_4 = FUN_006bd550(*(undefined8 *)(PTR_DAT_04bc2558 + (ulong)param_1 * 8 + 0x150),0);
    puVar5 = (uint *)FUN_036c67d0(lVar6 + 0x800,&local_4);
    puVar4 = PTR_DAT_04bc11f0;
    puVar3 = PTR_DAT_04bc11e8;
    if (puVar5 != (uint *)0x0) {
      if (*puVar5 == 0) {
        return false;
      }
      cVar8 = *PTR_DAT_04bc11e8;
      while( true ) {
        if (cVar8 == '\0') {
          cVar8 = '\x01';
          *(undefined8 *)puVar4 = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 8) = 0xffffffffffffffff;
          *puVar3 = 1;
          *(undefined8 *)(puVar4 + 0x10) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x18) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x20) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x28) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x30) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x38) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x40) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x48) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x50) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x58) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x60) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x68) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x70) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x78) = 0xffffffffffffffff;
        }
        else {
          uVar2 = *(uint *)(puVar4 + 0x68);
          if (-1 < (int)uVar2) {
            if ((char *)((ulong)uVar2 + (long)puVar5) == (char *)0x0) {
              return false;
            }
            return *(char *)((ulong)uVar2 + (long)puVar5) != '\0';
          }
          if (uVar2 != 0xffffffff) {
            return false;
          }
        }
        puVar9 = (uint *)(ulong)*puVar5;
        if (*puVar5 == 0) {
          return false;
        }
        if (puVar5 == puVar9) break;
        lVar6 = 0xc;
        if (*(char *)((long)puVar5 + (10 - (long)puVar9)) != '\0') {
          lVar6 = 0x1c;
        }
        lVar6 = (long)puVar5 + (lVar6 - (long)puVar9);
        if (lVar6 == 0) {
          return false;
        }
        uVar7 = (ulong)*(ushort *)((long)puVar5 + (8 - (long)puVar9));
        *(undefined4 *)(puVar4 + 0x68) = 0xfffffffe;
        if (uVar7 == 0) {
          return false;
        }
        piVar10 = (int *)(lVar6 + 4);
        while (piVar10[-1] != -0x6b59ee42) {
          piVar10 = piVar10 + 2;
          uVar7 = uVar7 - 1;
          if (uVar7 == 0) {
            return false;
          }
        }
        iVar1 = 0;
        if (*piVar10 != -1) {
          iVar1 = *piVar10;
        }
        *(int *)(puVar4 + 0x68) = iVar1;
        if (*puVar5 == 0) {
          return false;
        }
      }
      return false;
    }
  }
  return false;
}


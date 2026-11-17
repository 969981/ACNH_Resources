
uint FUN_02b73410(long param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint uVar4;
  uint *puVar5;
  long lVar6;
  char cVar7;
  uint *puVar8;
  ulong uVar9;
  int *piVar10;
  undefined *local_20;
  undefined8 local_18;
  
  puVar3 = PTR_DAT_04bc4658;
  puVar2 = PTR_DAT_04bc4650;
  puVar5 = *(uint **)(param_1 + 8);
  if ((puVar5 != (uint *)0x0) && (*puVar5 != 0)) {
    cVar7 = *PTR_DAT_04bc4650;
    while( true ) {
      if (cVar7 == '\0') {
        cVar7 = '\x01';
        *(undefined8 *)puVar3 = 0xffffffffffffffff;
        *(undefined8 *)(puVar3 + 8) = 0xffffffffffffffff;
        *puVar2 = 1;
        *(undefined4 *)(puVar3 + 0x30) = 0xffffffff;
        *(undefined8 *)(puVar3 + 0x10) = 0xffffffffffffffff;
        *(undefined8 *)(puVar3 + 0x18) = 0xffffffffffffffff;
        *(undefined8 *)(puVar3 + 0x20) = 0xffffffffffffffff;
        *(undefined8 *)(puVar3 + 0x28) = 0xffffffffffffffff;
        uVar4 = *puVar5;
      }
      else {
        uVar4 = *(uint *)(puVar3 + 0x18);
        if (-1 < (int)uVar4) {
          if ((ushort *)((ulong)uVar4 + (long)puVar5) != (ushort *)0x0) {
            local_20 = PTR_DAT_04bc4730 + 0x10;
            local_18 = 0;
            uVar4 = (uint)*(ushort *)((ulong)uVar4 + (long)puVar5);
            if (uVar4 != 0) {
              lVar6 = *(long *)PTR_DAT_04bb5008;
              if ((*(long *)(lVar6 + 0x2a8) != 0) && (*(long *)(*(long *)(lVar6 + 0x2a8) + 8) != 0))
              {
                uVar4 = uVar4 - *(ushort *)(lVar6 + 0x3f0);
                if (uVar4 < *(uint *)(lVar6 + 0x3d0)) {
                  local_18 = *(undefined8 *)(*(long *)(lVar6 + 0x3d8) + (long)(int)uVar4 * 8);
                }
                else {
                  local_18 = 0;
                }
              }
            }
            goto LAB_02b73578;
          }
          break;
        }
        if (uVar4 != 0xffffffff) break;
        uVar4 = *puVar5;
      }
      if ((uVar4 == 0) || (puVar8 = (uint *)(ulong)uVar4, puVar5 == puVar8)) break;
      lVar6 = 0xc;
      if (*(char *)((long)puVar5 + (10 - (long)puVar8)) != '\0') {
        lVar6 = 0x1c;
      }
      lVar6 = (long)puVar5 + (lVar6 - (long)puVar8);
      if (lVar6 == 0) break;
      uVar9 = (ulong)*(ushort *)((long)puVar5 + (8 - (long)puVar8));
      *(undefined4 *)(puVar3 + 0x18) = 0xfffffffe;
      if (uVar9 == 0) break;
      piVar10 = (int *)(lVar6 + 4);
      while (piVar10[-1] != 0xd664b5c) {
        piVar10 = piVar10 + 2;
        uVar9 = uVar9 - 1;
        if (uVar9 == 0) goto LAB_02b73568;
      }
      iVar1 = 0;
      if (*piVar10 != -1) {
        iVar1 = *piVar10;
      }
      *(int *)(puVar3 + 0x18) = iVar1;
      if (*puVar5 == 0) break;
    }
  }
LAB_02b73568:
  local_20 = PTR_DAT_04bc4730 + 0x10;
  local_18 = 0;
LAB_02b73578:
  uVar4 = FUN_02acce10(&local_20);
  return uVar4 & 1;
}



bool FUN_0231f270(long param_1,ulong param_2)

{
  long lVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  uint *puVar6;
  uint uVar7;
  ulong uVar8;
  char cVar9;
  uint *puVar10;
  int *piVar11;
  
  uVar7 = 0;
  if (*(long *)(param_1 + 0x70) != 0) {
    uVar2 = *(uint *)(*(long *)(param_1 + 0x70) + 0x280);
    uVar7 = 0;
    if (uVar2 < 0x149) {
      uVar7 = uVar2;
    }
  }
  if ((param_2 & 1) == 0) {
    if (((DAT_054f0b68 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_054f0b68,uVar7), iVar5 != 0))
    {
      DAT_054f0b60 = 0;
      __cxa_guard_release(&DAT_054f0b68,uVar7);
    }
    if (*(long *)PTR_DAT_04bb4718 == 0) {
      puVar6 = &DAT_054f0b60;
      uVar7 = DAT_054f0b60;
    }
    else {
      lVar1 = *(long *)PTR_DAT_04bb4718 + 0x20;
      puVar6 = (uint *)FUN_0250f090(lVar1,uVar7);
      if (puVar6 == (uint *)0x0) {
        puVar10 = (uint *)FUN_0250f090(lVar1,0);
        puVar6 = &DAT_054f0b60;
        if (puVar10 != (uint *)0x0) {
          puVar6 = puVar10;
        }
        if (*puVar6 == 0) {
          return true;
        }
        goto LAB_0231f310;
      }
      uVar7 = *puVar6;
    }
    if (uVar7 != 0) {
LAB_0231f310:
      puVar4 = PTR_DAT_04bc2fe8;
      puVar3 = PTR_DAT_04bc2fe0;
      cVar9 = *PTR_DAT_04bc2fe0;
      while( true ) {
        if (cVar9 == '\0') {
          cVar9 = '\x01';
          *(undefined8 *)puVar4 = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 8) = 0xffffffffffffffff;
          *puVar3 = 1;
          *(undefined8 *)(puVar4 + 0xa0) = 0xffffffffffffffff;
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
          *(undefined8 *)(puVar4 + 0x80) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x88) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x90) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x98) = 0xffffffffffffffff;
        }
        else {
          uVar7 = *(uint *)(puVar4 + 0x20);
          if (-1 < (int)uVar7) {
            if ((char *)((ulong)uVar7 + (long)puVar6) == (char *)0x0) {
              return true;
            }
            return *(char *)((ulong)uVar7 + (long)puVar6) != '\0';
          }
          if (uVar7 != 0xffffffff) {
            return true;
          }
        }
        puVar10 = (uint *)(ulong)*puVar6;
        if (*puVar6 == 0) {
          return true;
        }
        if (puVar6 == puVar10) break;
        lVar1 = 0xc;
        if (*(char *)((long)puVar6 + (10 - (long)puVar10)) != '\0') {
          lVar1 = 0x1c;
        }
        lVar1 = (long)puVar6 + (lVar1 - (long)puVar10);
        if (lVar1 == 0) {
          return true;
        }
        uVar8 = (ulong)*(ushort *)((long)puVar6 + (8 - (long)puVar10));
        *(undefined4 *)(puVar4 + 0x20) = 0xfffffffe;
        if (uVar8 == 0) {
          return true;
        }
        piVar11 = (int *)(lVar1 + 4);
        while (piVar11[-1] != -0x59cdb2cc) {
          piVar11 = piVar11 + 2;
          uVar8 = uVar8 - 1;
          if (uVar8 == 0) {
            return true;
          }
        }
        iVar5 = 0;
        if (*piVar11 != -1) {
          iVar5 = *piVar11;
        }
        *(int *)(puVar4 + 0x20) = iVar5;
        if (*puVar6 == 0) {
          return true;
        }
      }
      return true;
    }
  }
  return true;
}



bool FUN_01b12cf0(long param_1)

{
  int iVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  uint uVar5;
  uint *puVar6;
  char cVar7;
  uint *puVar8;
  ulong uVar9;
  int *piVar10;
  
  lVar2 = DAT_0532a830;
  if (DAT_0532a830 != 0) {
    uVar5 = FUN_0277d6c4(param_1 + 8);
    puVar4 = PTR_DAT_04bc0000;
    puVar3 = PTR_DAT_04bbfff8;
    uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar2 + 0x1f8);
    if (((uVar5 < *(uint *)(lVar2 + 0x1d8)) &&
        (puVar6 = *(uint **)(*(long *)(lVar2 + 0x1e0) + (long)(int)uVar5 * 8), puVar6 != (uint *)0x0
        )) && (*puVar6 != 0)) {
      cVar7 = *PTR_DAT_04bbfff8;
      while( true ) {
        if (cVar7 == '\0') {
          cVar7 = '\x01';
          *(undefined8 *)puVar4 = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 8) = 0xffffffffffffffff;
          *puVar3 = 1;
          *(undefined4 *)(puVar4 + 0x10) = 0xffffffff;
        }
        else {
          uVar5 = *(uint *)(puVar4 + 0x10);
          if (-1 < (int)uVar5) {
            if ((char *)((ulong)uVar5 + (long)puVar6) == (char *)0x0) {
              return false;
            }
            return *(char *)((ulong)uVar5 + (long)puVar6) != '\0';
          }
          if (uVar5 != 0xffffffff) {
            return false;
          }
        }
        puVar8 = (uint *)(ulong)*puVar6;
        if (*puVar6 == 0) {
          return false;
        }
        if (puVar6 == puVar8) break;
        lVar2 = 0xc;
        if (*(char *)((long)puVar6 + (10 - (long)puVar8)) != '\0') {
          lVar2 = 0x1c;
        }
        lVar2 = (long)puVar6 + (lVar2 - (long)puVar8);
        if (lVar2 == 0) {
          return false;
        }
        uVar9 = (ulong)*(ushort *)((long)puVar6 + (8 - (long)puVar8));
        *(undefined4 *)(puVar4 + 0x10) = 0xfffffffe;
        if (uVar9 == 0) {
          return false;
        }
        piVar10 = (int *)(lVar2 + 4);
        while (piVar10[-1] != 0x7cb610c7) {
          piVar10 = piVar10 + 2;
          uVar9 = uVar9 - 1;
          if (uVar9 == 0) {
            return false;
          }
        }
        iVar1 = 0;
        if (*piVar10 != -1) {
          iVar1 = *piVar10;
        }
        *(int *)(puVar4 + 0x10) = iVar1;
        if (*puVar6 == 0) {
          return false;
        }
      }
      return false;
    }
  }
  return false;
}


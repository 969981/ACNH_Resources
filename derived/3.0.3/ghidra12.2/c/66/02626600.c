
bool FUN_02626600(long param_1,uint param_2)

{
  int iVar1;
  long lVar2;
  uint uVar3;
  bool bVar4;
  bool bVar5;
  char cVar6;
  ulong uVar7;
  uint *puVar8;
  int *piVar9;
  uint *puVar10;
  float fVar11;
  float fVar12;
  
  uVar3 = (param_2 & 0xffff) - (uint)*(ushort *)(param_1 + 0xea6e0);
  if (*(uint *)(param_1 + 0xea6c0) <= uVar3) {
    return false;
  }
  puVar10 = *(uint **)(*(long *)(param_1 + 0xea6c8) + (long)(int)uVar3 * 8);
  if (puVar10 != (uint *)0x0) {
    fVar11 = (float)FUN_026253e0();
    fVar12 = fVar11 + 1.0;
    bVar4 = false;
    bVar5 = true;
    if (-1.1920929e-07 <= fVar12) {
      bVar4 = false;
      bVar5 = true;
      if (!NAN(fVar12)) {
        bVar4 = fVar12 == 1.1920929e-07;
        bVar5 = 1.1920929e-07 <= fVar12;
      }
    }
    if (bVar5 && !bVar4) {
      if (fVar11 <= 1000.0) {
        return true;
      }
      if (*puVar10 != 0) {
        cVar6 = DAT_055576f0;
        while( true ) {
          if (cVar6 == '\0') {
            cVar6 = '\x01';
            DAT_055576f4 = 0xffffffffffffffff;
            DAT_055576fc = 0xffffffffffffffff;
            DAT_055576f0 = '\x01';
            DAT_05557704 = 0xffffffffffffffff;
            DAT_0555770c = 0xffffffffffffffff;
            DAT_05557714 = 0xffffffffffffffff;
            DAT_0555771c = 0xffffffffffffffff;
            DAT_05557724 = 0xffffffffffffffff;
            DAT_0555772c = 0xffffffffffffffff;
            DAT_05557734 = 0xffffffffffffffff;
            DAT_0555773c = 0xffffffffffffffff;
            DAT_05557744 = 0xffffffffffffffff;
            DAT_0555774c = 0xffffffffffffffff;
            DAT_05557754 = -1;
            DAT_0555775c = 0xffffffffffffffff;
          }
          else {
            uVar7 = (ulong)DAT_05557754._4_4_;
            if (-1 < DAT_05557754) {
              if ((char *)(uVar7 + (long)puVar10) == (char *)0x0) {
                return false;
              }
              return *(char *)(uVar7 + (long)puVar10) != '\0';
            }
            if (DAT_05557754._4_4_ != 0xffffffff) {
              return false;
            }
          }
          puVar8 = (uint *)(ulong)*puVar10;
          if (*puVar10 == 0) {
            return false;
          }
          if (puVar10 == puVar8) break;
          lVar2 = 0xc;
          if (*(char *)((long)puVar10 + (10 - (long)puVar8)) != '\0') {
            lVar2 = 0x1c;
          }
          lVar2 = (long)puVar10 + (lVar2 - (long)puVar8);
          if (lVar2 == 0) {
            return false;
          }
          uVar7 = (ulong)*(ushort *)((long)puVar10 + (8 - (long)puVar8));
          DAT_05557754 = CONCAT44(0xfffffffe,(undefined4)DAT_05557754);
          if (uVar7 == 0) {
            return false;
          }
          piVar9 = (int *)(lVar2 + 4);
          while (piVar9[-1] != -0x105a225c) {
            piVar9 = piVar9 + 2;
            uVar7 = uVar7 - 1;
            if (uVar7 == 0) {
              return false;
            }
          }
          iVar1 = 0;
          if (*piVar9 != -1) {
            iVar1 = *piVar9;
          }
          DAT_05557754 = CONCAT44(iVar1,(undefined4)DAT_05557754);
          if (*puVar10 == 0) {
            return false;
          }
        }
        return false;
      }
    }
  }
  return false;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02626790(long param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  uint uVar4;
  uint *puVar5;
  int *piVar6;
  ulong uVar7;
  undefined4 uVar8;
  uint *puVar9;
  char cVar10;
  ushort uVar11;
  long lVar12;
  long lVar13;
  uint local_50;
  undefined4 local_4c;
  undefined **local_48;
  uint local_40;
  undefined4 uStack_3c;
  uint *local_38;
  
  uVar4 = param_2 & 0xffff;
  if ((((uVar4 < 0x800) &&
       ((*(byte *)(param_1 + (ulong)(uVar4 >> 3) + 0xe98e0) >> (ulong)(param_2 & 7) & 1) != 0)) &&
      (uVar4 = uVar4 - *(ushort *)(param_1 + 0xea6e0), uVar4 < *(uint *)(param_1 + 0xea6c0))) &&
     (puVar9 = *(uint **)(*(long *)(param_1 + 0xea6c8) + (long)(int)uVar4 * 8),
     puVar9 != (uint *)0x0)) {
    if (*puVar9 != 0) {
      cVar10 = DAT_055576f0;
      do {
        if (cVar10 == '\0') {
          cVar10 = '\x01';
          DAT_055576f4 = 0xffffffffffffffff;
          DAT_055576fc = 0xffffffffffffffff;
          DAT_055576f0 = '\x01';
          DAT_05557704 = 0xffffffffffffffff;
          DAT_0555770c = 0xffffffffffffffff;
          DAT_05557714 = 0xffffffffffffffff;
          DAT_0555771c = 0xffffffffffffffff;
          DAT_05557724 = 0xffffffffffffffff;
          DAT_0555772c = -1;
          DAT_05557734 = 0xffffffffffffffff;
          DAT_0555773c = 0xffffffffffffffff;
          DAT_05557744 = 0xffffffffffffffff;
          DAT_0555774c = 0xffffffffffffffff;
          DAT_05557754 = 0xffffffffffffffff;
          DAT_0555775c = 0xffffffffffffffff;
        }
        else {
          if (-1 < DAT_0555772c) {
            if ((ushort *)((ulong)DAT_0555772c._4_4_ + (long)puVar9) != (ushort *)0x0) {
              uVar11 = *(ushort *)((ulong)DAT_0555772c._4_4_ + (long)puVar9);
              goto LAB_02626b0c;
            }
            break;
          }
          if (DAT_0555772c._4_4_ != 0xffffffff) break;
        }
        puVar5 = (uint *)(ulong)*puVar9;
        uVar11 = 0xfffe;
        if ((*puVar9 == 0) || (puVar9 == puVar5)) goto LAB_02626b0c;
        lVar12 = 0xc;
        if (*(char *)((long)puVar9 + (10 - (long)puVar5)) != '\0') {
          lVar12 = 0x1c;
        }
        lVar12 = (long)puVar9 + (lVar12 - (long)puVar5);
        if (lVar12 == 0) break;
        uVar7 = (ulong)*(ushort *)((long)puVar9 + (8 - (long)puVar5));
        DAT_0555772c = CONCAT44(0xfffffffe,(undefined4)DAT_0555772c);
        if (uVar7 == 0) break;
        piVar6 = (int *)(lVar12 + 4);
        while (piVar6[-1] != -0x765cb7d4) {
          piVar6 = piVar6 + 2;
          uVar7 = uVar7 - 1;
          if (uVar7 == 0) goto LAB_02626b08;
        }
        iVar1 = 0;
        if (*piVar6 != -1) {
          iVar1 = *piVar6;
        }
        DAT_0555772c = CONCAT44(iVar1,(undefined4)DAT_0555772c);
        if (*puVar9 == 0) break;
      } while( true );
    }
LAB_02626b08:
    uVar11 = 0xfffe;
LAB_02626b0c:
    local_50 = (uint)uVar11;
    local_4c = 0;
    FUN_0277d4ac(&local_50);
  }
  else {
    local_50 = _DAT_05586008;
    local_4c = DAT_0558600c;
  }
  puVar3 = PTR_DAT_04bb43c0;
  lVar12 = *(long *)PTR_DAT_04bb43c0;
  uVar4 = FUN_0277d6c4(&local_50);
  lVar13 = *(long *)puVar3;
  if (lVar13 != 0) {
    lVar12 = *(long *)(lVar12 + 0x57e58);
    uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar12 + 0x1f8);
    if ((uVar4 < *(uint *)(lVar12 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar12 + 0x1e0) + (long)(int)uVar4 * 8) != 0)) {
      uVar4 = FUN_0277d6c4(&local_50);
      lVar12 = *(long *)puVar3;
      if (lVar12 != 0) {
        lVar13 = *(long *)(lVar13 + 0x57e58);
        uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar13 + 0x1f8);
        if ((uVar4 < *(uint *)(lVar13 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar13 + 0x1e0) + (long)(int)uVar4 * 8) != 0)) {
          local_38 = (uint *)0x0;
          local_40 = local_50;
          uStack_3c = local_4c;
          local_48 = &PTR_FUN_04a36b50;
          uVar4 = FUN_0277d6c4(&local_40);
          if (*(long *)puVar3 != 0) {
            lVar12 = *(long *)(lVar12 + 0x57e58);
            uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar12 + 0x1f8);
            if ((uVar4 < *(uint *)(lVar12 + 0x1d8)) &&
               (*(long *)(*(long *)(lVar12 + 0x1e0) + (long)(int)uVar4 * 8) != 0)) {
              lVar12 = *(long *)PTR_DAT_04bc0428;
              uVar4 = FUN_0277d6c4(&local_50);
              uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar12 + 0x1f8);
              if ((uVar4 < *(uint *)(lVar12 + 0x1d8)) &&
                 (puVar9 = *(uint **)(*(long *)(lVar12 + 0x1e0) + (long)(int)uVar4 * 8),
                 puVar9 != (uint *)0x0)) {
                local_38 = puVar9;
              }
            }
          }
          uVar7 = FUN_01af0020(&local_48);
          if ((uVar7 & 1) == 0) {
            return 1;
          }
          if (local_38 == (uint *)0x0) {
            uVar11 = 0xbc;
          }
          else {
            uVar4 = *local_38;
            uVar11 = 0;
            if ((uVar4 != 0) && (local_38 != (uint *)(ulong)uVar4)) {
              puVar9 = (uint *)((long)local_38 - (long)(ulong)uVar4);
              uVar11 = 0;
              if (*puVar9 != 0) {
                uVar4 = puVar9[1];
                if ((uVar4 != 0) && ((ulong)(ushort)puVar9[2] != 0)) {
                  lVar12 = 0xc;
                  if (*(char *)((long)puVar9 + 10) != '\0') {
                    lVar12 = 0x1c;
                  }
                  lVar12 = (long)puVar9 + lVar12 + (ulong)(ushort)puVar9[2] * 8;
                  if (lVar12 != 0) {
                    uVar2 = 0;
                    if ((ulong)uVar4 != 0) {
                      uVar2 = (uint)((ulong)((long)local_38 - lVar12) / (ulong)uVar4);
                    }
                    if (*puVar9 <= uVar2) {
                      uVar2 = 0xffffffff;
                    }
                    if ((uVar2 < DAT_05326ec0) &&
                       (uVar11 = *(ushort *)(DAT_05326ec8 + (long)(int)uVar2 * 2), uVar11 < 0xbd))
                    goto LAB_02626ad8;
                  }
                }
                uVar11 = 0;
              }
            }
          }
LAB_02626ad8:
          uVar8 = 10;
          if (uVar11 != 3 && uVar11 != 0x78) {
            uVar8 = 1;
          }
          return uVar8;
        }
      }
      return 0;
    }
  }
  return 1;
}


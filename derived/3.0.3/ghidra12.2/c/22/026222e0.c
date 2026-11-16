
ulong FUN_026222e0(long param_1,undefined4 *param_2)

{
  undefined *puVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  int *piVar6;
  uint *puVar7;
  char cVar8;
  uint *puVar9;
  long lVar10;
  undefined *local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  long local_48;
  
  puVar1 = PTR_DAT_04bb43c0;
  lVar10 = *(long *)PTR_DAT_04bb43c0;
  uVar2 = FUN_0277d6c4(param_2);
  if (*(long *)puVar1 != 0) {
    lVar10 = *(long *)(lVar10 + 0x57e58);
    uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
    if ((uVar2 < *(uint *)(lVar10 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar2 * 8) != 0)) {
      uVar5 = FUN_0261eff4(param_2);
      uVar2 = (uint)uVar5 & 0xffff;
      if ((uVar2 < 0x800) &&
         ((*(byte *)(param_1 + ((uVar5 & 0xfff8) >> 3) + 0xe98e0) >> (ulong)((uint)uVar5 & 7) & 1)
          != 0)) {
        local_50 = *param_2;
        uStack_4c = param_2[1];
        lVar10 = *(long *)puVar1;
        local_48 = 0;
        local_58 = PTR_DAT_04bc0510 + 0x10;
        uVar3 = FUN_0277d6c4(&local_50);
        if (*(long *)puVar1 != 0) {
          lVar10 = *(long *)(lVar10 + 0x57e58);
          uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
          if ((uVar3 < *(uint *)(lVar10 + 0x1d8)) &&
             (*(long *)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar3 * 8) != 0)) {
            lVar10 = *(long *)PTR_DAT_04bc0428;
            uVar3 = FUN_0277d6c4(param_2);
            uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
            if ((uVar3 < *(uint *)(lVar10 + 0x1d8)) &&
               (lVar10 = *(long *)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar3 * 8), lVar10 != 0))
            {
              local_48 = lVar10;
            }
          }
        }
        iVar4 = FUN_01ad7260(&local_58);
        if ((iVar4 == 0) && (uVar5 = FUN_01afcfa0(&local_58), (int)uVar5 == 0)) {
          return uVar5;
        }
        uVar2 = uVar2 - *(ushort *)(param_1 + 0xea6e0);
        if (((uVar2 < *(uint *)(param_1 + 0xea6c0)) &&
            (puVar7 = *(uint **)(*(long *)(param_1 + 0xea6c8) + (long)(int)uVar2 * 8),
            puVar7 != (uint *)0x0)) && (*puVar7 != 0)) {
          cVar8 = DAT_055576f0;
          while( true ) {
            if (cVar8 == '\0') {
              cVar8 = '\x01';
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
              DAT_05557754 = 0xffffffffffffffff;
              DAT_0555775c = -1;
            }
            else {
              uVar5 = (ulong)DAT_0555775c._4_4_;
              if (-1 < DAT_0555775c) {
                if ((char *)(uVar5 + (long)puVar7) == (char *)0x0) {
                  return 0;
                }
                return (ulong)(*(char *)(uVar5 + (long)puVar7) != '\0');
              }
              if (DAT_0555775c._4_4_ != 0xffffffff) {
                return 0;
              }
            }
            puVar9 = (uint *)(ulong)*puVar7;
            if (*puVar7 == 0) {
              return 0;
            }
            if (puVar7 == puVar9) break;
            lVar10 = 0xc;
            if (*(char *)((long)puVar7 + (10 - (long)puVar9)) != '\0') {
              lVar10 = 0x1c;
            }
            lVar10 = (long)puVar7 + (lVar10 - (long)puVar9);
            if (lVar10 == 0) {
              return 0;
            }
            uVar5 = (ulong)*(ushort *)((long)puVar7 + (8 - (long)puVar9));
            DAT_0555775c = CONCAT44(0xfffffffe,(undefined4)DAT_0555775c);
            if (uVar5 == 0) {
              return 0;
            }
            piVar6 = (int *)(lVar10 + 4);
            while (piVar6[-1] != -0x52f38786) {
              piVar6 = piVar6 + 2;
              uVar5 = uVar5 - 1;
              if (uVar5 == 0) {
                return 0;
              }
            }
            iVar4 = 0;
            if (*piVar6 != -1) {
              iVar4 = *piVar6;
            }
            DAT_0555775c = CONCAT44(iVar4,(undefined4)DAT_0555775c);
            if (*puVar7 == 0) {
              return 0;
            }
          }
          return 0;
        }
      }
    }
  }
  return 0;
}


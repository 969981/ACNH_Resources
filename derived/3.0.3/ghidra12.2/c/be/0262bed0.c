
void FUN_0262bed0(long param_1,long param_2,long param_3)

{
  undefined *puVar1;
  int iVar2;
  uint uVar3;
  undefined *puVar4;
  undefined *puVar5;
  uint uVar6;
  uint *puVar7;
  char cVar8;
  ulong uVar9;
  uint *puVar10;
  int *piVar11;
  long lVar12;
  uint uVar13;
  ulong uVar14;
  undefined2 local_88;
  undefined2 local_86;
  undefined4 local_84;
  undefined *local_80;
  undefined2 local_78;
  undefined1 local_76;
  undefined1 local_75;
  undefined4 local_74;
  undefined8 local_70;
  uint local_68;
  undefined4 local_64;
  
  puVar5 = PTR_DAT_04bb43c0;
  puVar4 = PTR_DAT_04bb37e0;
  uVar13 = 0;
  puVar1 = PTR_DAT_04bc0510 + 0x10;
  do {
    uVar14 = (ulong)(uVar13 >> 3);
    uVar6 = 1 << (ulong)(uVar13 & 7);
    if (((uVar6 & *(byte *)(param_2 + uVar14)) != 0) && ((uVar6 & *(byte *)(param_3 + uVar14)) != 0)
       ) {
      uVar6 = uVar13 - *(ushort *)(param_1 + 0xea6e0);
      if ((uVar6 < *(uint *)(param_1 + 0xea6c0)) &&
         (puVar7 = *(uint **)(*(long *)(param_1 + 0xea6c8) + (long)(int)uVar6 * 8),
         puVar7 != (uint *)0x0)) {
        if (*puVar7 != 0) {
          cVar8 = DAT_055576f0;
          do {
            if (cVar8 == '\0') {
              cVar8 = '\x01';
              DAT_055576f0 = '\x01';
              DAT_055576f4 = 0xffffffffffffffff;
              DAT_055576fc = 0xffffffffffffffff;
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
                if ((undefined2 *)((ulong)DAT_0555772c._4_4_ + (long)puVar7) != (undefined2 *)0x0) {
                  local_88 = *(undefined2 *)((ulong)DAT_0555772c._4_4_ + (long)puVar7);
                  goto LAB_0262c0b8;
                }
                break;
              }
              if (DAT_0555772c._4_4_ != 0xffffffff) break;
            }
            puVar10 = (uint *)(ulong)*puVar7;
            local_88 = 0xfffe;
            if ((*puVar7 == 0) || (puVar7 == puVar10)) goto LAB_0262c0b8;
            lVar12 = 0xc;
            if (*(char *)((long)puVar7 + (10 - (long)puVar10)) != '\0') {
              lVar12 = 0x1c;
            }
            lVar12 = (long)puVar7 + (lVar12 - (long)puVar10);
            if (lVar12 == 0) break;
            uVar9 = (ulong)*(ushort *)((long)puVar7 + (8 - (long)puVar10));
            DAT_0555772c = CONCAT44(0xfffffffe,(undefined4)DAT_0555772c);
            if (uVar9 == 0) break;
            piVar11 = (int *)(lVar12 + 4);
            while (piVar11[-1] != -0x765cb7d4) {
              piVar11 = piVar11 + 2;
              uVar9 = uVar9 - 1;
              if (uVar9 == 0) goto LAB_0262c0b4;
            }
            iVar2 = 0;
            if (*piVar11 != -1) {
              iVar2 = *piVar11;
            }
            DAT_0555772c = CONCAT44(iVar2,(undefined4)DAT_0555772c);
            if (*puVar7 == 0) break;
          } while( true );
        }
LAB_0262c0b4:
        local_88 = 0xfffe;
LAB_0262c0b8:
        local_86 = 0;
        local_84 = 0;
        FUN_0277d4ac(&local_88);
        local_76 = (undefined1)local_86;
        local_75 = local_86._1_1_;
      }
      else {
        local_88 = *(undefined2 *)puVar4;
        local_76 = puVar4[2];
        local_75 = puVar4[3];
        local_86 = *(undefined2 *)(puVar4 + 2);
        local_84 = *(undefined4 *)(puVar4 + 4);
      }
      lVar12 = *(long *)puVar5;
      local_70 = 0;
      local_80 = puVar1;
      local_78 = local_88;
      local_74 = local_84;
      uVar6 = FUN_0277d6c4(&local_78);
      if (*(long *)puVar5 == 0) {
LAB_0262c210:
        local_68 = 0xbc;
      }
      else {
        lVar12 = *(long *)(lVar12 + 0x57e58);
        uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar12 + 0x1f8);
        if ((*(uint *)(lVar12 + 0x1d8) <= uVar6) ||
           (*(long *)(*(long *)(lVar12 + 0x1e0) + (long)(int)uVar6 * 8) == 0)) goto LAB_0262c210;
        lVar12 = *(long *)PTR_DAT_04bc0428;
        uVar6 = FUN_0277d6c4(&local_88);
        uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar12 + 0x1f8);
        if ((*(uint *)(lVar12 + 0x1d8) <= uVar6) ||
           (puVar7 = *(uint **)(*(long *)(lVar12 + 0x1e0) + (long)(int)uVar6 * 8),
           puVar7 == (uint *)0x0)) goto LAB_0262c210;
        local_68 = 0;
        uVar6 = *puVar7;
        if ((uVar6 != 0) && (puVar7 != (uint *)(ulong)uVar6)) {
          puVar10 = (uint *)((long)puVar7 - (long)(ulong)uVar6);
          local_68 = 0;
          if (*puVar10 != 0) {
            uVar6 = puVar10[1];
            if ((uVar6 != 0) && ((ulong)(ushort)puVar10[2] != 0)) {
              lVar12 = 0xc;
              if (*(char *)((long)puVar10 + 10) != '\0') {
                lVar12 = 0x1c;
              }
              lVar12 = (long)puVar10 + lVar12 + (ulong)(ushort)puVar10[2] * 8;
              if (lVar12 != 0) {
                uVar3 = 0;
                if ((ulong)uVar6 != 0) {
                  uVar3 = (uint)((ulong)((long)puVar7 - lVar12) / (ulong)uVar6);
                }
                if (*puVar10 <= uVar3) {
                  uVar3 = 0xffffffff;
                }
                if ((uVar3 < *(uint *)PTR_DAT_04bc00c8) &&
                   (local_68 = (uint)*(ushort *)
                                      (*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar3 * 2),
                   local_68 < 0xbd)) goto LAB_0262c21c;
              }
            }
            local_68 = 0;
          }
        }
      }
LAB_0262c21c:
      local_64 = 0x9d;
      if (local_68 == 0x9d) {
        *(byte *)(param_2 + uVar14) =
             *(byte *)(param_2 + uVar14) & ((byte)(1 << (ulong)(uVar13 & 7)) ^ 0xff);
      }
    }
    uVar13 = uVar13 + 1;
    if (uVar13 == 0x800) {
      return;
    }
  } while( true );
}



void FUN_0262ba70(long param_1,long param_2,long param_3)

{
  undefined *puVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  uint uVar5;
  uint *puVar6;
  char cVar7;
  ulong uVar8;
  uint *puVar9;
  int *piVar10;
  ulong uVar11;
  uint uVar12;
  long lVar13;
  undefined2 local_88;
  undefined2 local_86;
  undefined4 local_84;
  undefined *local_80;
  undefined2 local_78;
  undefined1 local_76;
  undefined1 local_75;
  undefined4 local_74;
  long local_70;
  int local_68;
  int local_64;
  
  puVar4 = PTR_DAT_04bb43c0;
  puVar3 = PTR_DAT_04bb37e0;
  uVar12 = 0;
  puVar1 = PTR_DAT_04bc0510 + 0x10;
  do {
    uVar11 = (ulong)(uVar12 >> 3);
    uVar5 = 1 << (ulong)(uVar12 & 7);
    if (((uVar5 & *(byte *)(param_2 + uVar11)) != 0) && ((uVar5 & *(byte *)(param_3 + uVar11)) != 0)
       ) {
      uVar5 = uVar12 - *(ushort *)(param_1 + 0xea6e0);
      if ((uVar5 < *(uint *)(param_1 + 0xea6c0)) &&
         (puVar6 = *(uint **)(*(long *)(param_1 + 0xea6c8) + (long)(int)uVar5 * 8),
         puVar6 != (uint *)0x0)) {
        if (*puVar6 != 0) {
          cVar7 = DAT_055576f0;
          do {
            if (cVar7 == '\0') {
              cVar7 = '\x01';
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
                if ((undefined2 *)((ulong)DAT_0555772c._4_4_ + (long)puVar6) != (undefined2 *)0x0) {
                  local_88 = *(undefined2 *)((ulong)DAT_0555772c._4_4_ + (long)puVar6);
                  goto LAB_0262bc58;
                }
                break;
              }
              if (DAT_0555772c._4_4_ != 0xffffffff) break;
            }
            puVar9 = (uint *)(ulong)*puVar6;
            local_88 = 0xfffe;
            if ((*puVar6 == 0) || (puVar6 == puVar9)) goto LAB_0262bc58;
            lVar13 = 0xc;
            if (*(char *)((long)puVar6 + (10 - (long)puVar9)) != '\0') {
              lVar13 = 0x1c;
            }
            lVar13 = (long)puVar6 + (lVar13 - (long)puVar9);
            if (lVar13 == 0) break;
            uVar8 = (ulong)*(ushort *)((long)puVar6 + (8 - (long)puVar9));
            DAT_0555772c = CONCAT44(0xfffffffe,(undefined4)DAT_0555772c);
            if (uVar8 == 0) break;
            piVar10 = (int *)(lVar13 + 4);
            while (piVar10[-1] != -0x765cb7d4) {
              piVar10 = piVar10 + 2;
              uVar8 = uVar8 - 1;
              if (uVar8 == 0) goto LAB_0262bc54;
            }
            iVar2 = 0;
            if (*piVar10 != -1) {
              iVar2 = *piVar10;
            }
            DAT_0555772c = CONCAT44(iVar2,(undefined4)DAT_0555772c);
            if (*puVar6 == 0) break;
          } while( true );
        }
LAB_0262bc54:
        local_88 = 0xfffe;
LAB_0262bc58:
        local_86 = 0;
        local_84 = 0;
        FUN_0277d4ac(&local_88);
        local_76 = (undefined1)local_86;
        local_75 = local_86._1_1_;
      }
      else {
        local_88 = *(undefined2 *)puVar3;
        local_76 = puVar3[2];
        local_75 = puVar3[3];
        local_86 = *(undefined2 *)(puVar3 + 2);
        local_84 = *(undefined4 *)(puVar3 + 4);
      }
      lVar13 = *(long *)puVar4;
      local_70 = 0;
      local_80 = puVar1;
      local_78 = local_88;
      local_74 = local_84;
      uVar5 = FUN_0277d6c4(&local_78);
      if (*(long *)puVar4 != 0) {
        lVar13 = *(long *)(lVar13 + 0x57e58);
        uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar13 + 0x1f8);
        if ((uVar5 < *(uint *)(lVar13 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar13 + 0x1e0) + (long)(int)uVar5 * 8) != 0)) {
          lVar13 = *(long *)PTR_DAT_04bc0428;
          uVar5 = FUN_0277d6c4(&local_88);
          uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar13 + 0x1f8);
          if ((uVar5 < *(uint *)(lVar13 + 0x1d8)) &&
             (lVar13 = *(long *)(*(long *)(lVar13 + 0x1e0) + (long)(int)uVar5 * 8), lVar13 != 0)) {
            local_70 = lVar13;
          }
        }
      }
      local_64 = 0xe;
      local_68 = FUN_01ae7550(&local_80);
      if (local_68 == local_64) {
        *(byte *)(param_2 + uVar11) =
             *(byte *)(param_2 + uVar11) & ((byte)(1 << (ulong)(uVar12 & 7)) ^ 0xff);
      }
    }
    uVar12 = uVar12 + 1;
    if (uVar12 == 0x800) {
      return;
    }
  } while( true );
}


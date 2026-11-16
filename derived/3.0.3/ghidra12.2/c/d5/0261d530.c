
undefined1 FUN_0261d530(long param_1,uint param_2)

{
  int iVar1;
  undefined *puVar2;
  uint uVar3;
  uint *puVar4;
  int *piVar5;
  uint *puVar6;
  char cVar7;
  ulong uVar8;
  long lVar9;
  short local_18 [4];
  
  if ((((param_2 & 0xffff) < 0x800) &&
      (uVar3 = (param_2 & 0xffff) - (uint)*(ushort *)(param_1 + 0xea6e0),
      uVar3 < *(uint *)(param_1 + 0xea6c0))) &&
     (puVar6 = *(uint **)(*(long *)(param_1 + 0xea6c8) + (long)(int)uVar3 * 8),
     puVar6 != (uint *)0x0)) {
    if (*puVar6 != 0) {
      cVar7 = DAT_055576f0;
      do {
        if (cVar7 == '\0') {
          cVar7 = '\x01';
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
            if ((short *)((ulong)DAT_0555772c._4_4_ + (long)puVar6) != (short *)0x0) {
              local_18[0] = *(short *)((ulong)DAT_0555772c._4_4_ + (long)puVar6);
              goto LAB_0261d670;
            }
            break;
          }
          if (DAT_0555772c._4_4_ != 0xffffffff) break;
        }
        puVar4 = (uint *)(ulong)*puVar6;
        local_18[0] = -2;
        if ((*puVar6 == 0) || (puVar6 == puVar4)) goto LAB_0261d670;
        lVar9 = 0xc;
        if (*(char *)((long)puVar6 + (10 - (long)puVar4)) != '\0') {
          lVar9 = 0x1c;
        }
        lVar9 = (long)puVar6 + (lVar9 - (long)puVar4);
        if (lVar9 == 0) break;
        uVar8 = (ulong)*(ushort *)((long)puVar6 + (8 - (long)puVar4));
        DAT_0555772c = CONCAT44(0xfffffffe,(undefined4)DAT_0555772c);
        if (uVar8 == 0) break;
        piVar5 = (int *)(lVar9 + 4);
        while (piVar5[-1] != -0x765cb7d4) {
          piVar5 = piVar5 + 2;
          uVar8 = uVar8 - 1;
          if (uVar8 == 0) goto LAB_0261d66c;
        }
        iVar1 = 0;
        if (*piVar5 != -1) {
          iVar1 = *piVar5;
        }
        DAT_0555772c = CONCAT44(iVar1,(undefined4)DAT_0555772c);
        if (*puVar6 == 0) break;
      } while( true );
    }
LAB_0261d66c:
    local_18[0] = -2;
LAB_0261d670:
    local_18[1] = 0;
    local_18[2] = 0;
    local_18[3] = 0;
    FUN_0277d4ac(local_18);
    puVar2 = PTR_DAT_04bb43c0;
    if (local_18[0] == -2) {
      return 0;
    }
    lVar9 = *(long *)PTR_DAT_04bb43c0;
    uVar3 = FUN_0277d6c4(local_18);
    if (*(long *)puVar2 != 0) {
      lVar9 = *(long *)(lVar9 + 0x57e58);
      uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
      if ((uVar3 < *(uint *)(lVar9 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar3 * 8) != 0)) {
        return 1;
      }
    }
  }
  return 0;
}


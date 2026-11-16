
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_0261da70(uint param_1)

{
  undefined *puVar1;
  uint uVar2;
  int iVar3;
  uint *puVar4;
  int *piVar5;
  uint *puVar6;
  char cVar7;
  ushort uVar8;
  ulong uVar9;
  long lVar10;
  uint local_28;
  undefined4 local_24;
  
  uVar2 = param_1 & 0xffff;
  if ((((uVar2 < 0x800) &&
       ((*(byte *)(DAT_055588d0 + (ulong)(uVar2 >> 3) + 0xe98e0) >> (ulong)(param_1 & 7) & 1) != 0))
      && (uVar2 = uVar2 - *(ushort *)(DAT_055588d0 + 0xea6e0),
         uVar2 < *(uint *)(DAT_055588d0 + 0xea6c0))) &&
     (puVar6 = *(uint **)(*(long *)(DAT_055588d0 + 0xea6c8) + (long)(int)uVar2 * 8),
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
            if ((ushort *)((ulong)DAT_0555772c._4_4_ + (long)puVar6) != (ushort *)0x0) {
              uVar8 = *(ushort *)((ulong)DAT_0555772c._4_4_ + (long)puVar6);
              goto LAB_0261dc60;
            }
            break;
          }
          if (DAT_0555772c._4_4_ != 0xffffffff) break;
        }
        puVar4 = (uint *)(ulong)*puVar6;
        uVar8 = 0xfffe;
        if ((*puVar6 == 0) || (puVar6 == puVar4)) goto LAB_0261dc60;
        lVar10 = 0xc;
        if (*(char *)((long)puVar6 + (10 - (long)puVar4)) != '\0') {
          lVar10 = 0x1c;
        }
        lVar10 = (long)puVar6 + (lVar10 - (long)puVar4);
        if (lVar10 == 0) break;
        uVar9 = (ulong)*(ushort *)((long)puVar6 + (8 - (long)puVar4));
        DAT_0555772c = CONCAT44(0xfffffffe,(undefined4)DAT_0555772c);
        if (uVar9 == 0) break;
        piVar5 = (int *)(lVar10 + 4);
        while (piVar5[-1] != -0x765cb7d4) {
          piVar5 = piVar5 + 2;
          uVar9 = uVar9 - 1;
          if (uVar9 == 0) goto LAB_0261dc5c;
        }
        iVar3 = 0;
        if (*piVar5 != -1) {
          iVar3 = *piVar5;
        }
        DAT_0555772c = CONCAT44(iVar3,(undefined4)DAT_0555772c);
        if (*puVar6 == 0) break;
      } while( true );
    }
LAB_0261dc5c:
    uVar8 = 0xfffe;
LAB_0261dc60:
    local_28 = (uint)uVar8;
    local_24 = 0;
    FUN_0277d4ac(&local_28);
  }
  else {
    local_28 = _DAT_05586008;
    local_24 = DAT_0558600c;
  }
  puVar1 = PTR_DAT_04bb43c0;
  lVar10 = *(long *)PTR_DAT_04bb43c0;
  uVar2 = FUN_0277d6c4(&local_28);
  if (*(long *)puVar1 != 0) {
    lVar10 = *(long *)(lVar10 + 0x57e58);
    uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
    if ((uVar2 < *(uint *)(lVar10 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar2 * 8) != 0)) {
      iVar3 = FUN_0277d6c4(&local_28);
      return iVar3 != 0x1c2b && iVar3 != 0x142e;
    }
  }
  return false;
}


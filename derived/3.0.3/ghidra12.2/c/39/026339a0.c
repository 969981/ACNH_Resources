
undefined4 FUN_026339a0(long param_1,uint param_2)

{
  undefined4 *puVar1;
  int iVar2;
  long lVar3;
  uint uVar4;
  int *piVar5;
  uint *puVar6;
  char cVar7;
  uint *puVar8;
  ulong uVar9;
  
  uVar4 = (param_2 & 0xffff) - (uint)*(ushort *)(param_1 + 0xea6e0);
  if (((*(uint *)(param_1 + 0xea6c0) <= uVar4) ||
      (puVar6 = *(uint **)(*(long *)(param_1 + 0xea6c8) + (long)(int)uVar4 * 8),
      puVar6 == (uint *)0x0)) || (*puVar6 == 0)) {
    return 0;
  }
  cVar7 = DAT_055576f0;
  while( true ) {
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
      DAT_0555772c = 0xffffffffffffffff;
      DAT_05557734 = 0xffffffffffffffff;
      DAT_0555773c = 0xffffffffffffffff;
      DAT_05557744 = 0xffffffffffffffff;
      DAT_0555774c = 0xffffffffffffffff;
      DAT_05557754 = 0xffffffffffffffff;
      DAT_0555775c = 0xffffffffffffffff;
    }
    else {
      if (-1 < (int)DAT_05557714) {
        puVar1 = (undefined4 *)((DAT_05557714 & 0xffffffff) + (long)puVar6);
        if (puVar1 == (undefined4 *)0x0) {
          return 0;
        }
        return *puVar1;
      }
      if ((int)DAT_05557714 != -1) {
        return 0;
      }
    }
    puVar8 = (uint *)(ulong)*puVar6;
    if (*puVar6 == 0) {
      return 0;
    }
    if (puVar6 == puVar8) break;
    lVar3 = 0xc;
    if (*(char *)((long)puVar6 + (10 - (long)puVar8)) != '\0') {
      lVar3 = 0x1c;
    }
    lVar3 = (long)puVar6 + (lVar3 - (long)puVar8);
    if (lVar3 == 0) {
      return 0;
    }
    uVar9 = (ulong)*(ushort *)((long)puVar6 + (8 - (long)puVar8));
    DAT_05557714 = CONCAT44(DAT_05557714._4_4_,0xfffffffe);
    if (uVar9 == 0) {
      return 0;
    }
    piVar5 = (int *)(lVar3 + 4);
    while (piVar5[-1] != 0x3711677b) {
      piVar5 = piVar5 + 2;
      uVar9 = uVar9 - 1;
      if (uVar9 == 0) {
        return 0;
      }
    }
    iVar2 = 0;
    if (*piVar5 != -1) {
      iVar2 = *piVar5;
    }
    DAT_05557714 = CONCAT44(DAT_05557714._4_4_,iVar2);
    if (*puVar6 == 0) {
      return 0;
    }
  }
  return 0;
}


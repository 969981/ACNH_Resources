
undefined4 FUN_02622160(long param_1,undefined8 param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  uint *puVar7;
  char cVar8;
  uint *puVar9;
  
  uVar5 = FUN_0261eff4(param_2);
  uVar2 = (uint)uVar5 & 0xffff;
  if ((((0x7ff < uVar2) ||
       ((*(byte *)(param_1 + ((uVar5 & 0xfff8) >> 3) + 0xe98e0) >> (ulong)((uint)uVar5 & 7) & 1) ==
        0)) || (uVar2 = uVar2 - *(ushort *)(param_1 + 0xea6e0),
               *(uint *)(param_1 + 0xea6c0) <= uVar2)) ||
     ((puVar7 = *(uint **)(*(long *)(param_1 + 0xea6c8) + (long)(int)uVar2 * 8),
      puVar7 == (uint *)0x0 || (*puVar7 == 0)))) {
    return 0;
  }
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
      DAT_0555775c = 0xffffffffffffffff;
    }
    else {
      if (-1 < (int)DAT_05557714) {
        puVar1 = (undefined4 *)((DAT_05557714 & 0xffffffff) + (long)puVar7);
        if (puVar1 == (undefined4 *)0x0) {
          return 0;
        }
        return *puVar1;
      }
      if ((int)DAT_05557714 != -1) {
        return 0;
      }
    }
    puVar9 = (uint *)(ulong)*puVar7;
    if (*puVar7 == 0) {
      return 0;
    }
    if (puVar7 == puVar9) break;
    lVar4 = 0xc;
    if (*(char *)((long)puVar7 + (10 - (long)puVar9)) != '\0') {
      lVar4 = 0x1c;
    }
    lVar4 = (long)puVar7 + (lVar4 - (long)puVar9);
    if (lVar4 == 0) {
      return 0;
    }
    uVar5 = (ulong)*(ushort *)((long)puVar7 + (8 - (long)puVar9));
    DAT_05557714 = CONCAT44(DAT_05557714._4_4_,0xfffffffe);
    if (uVar5 == 0) {
      return 0;
    }
    piVar6 = (int *)(lVar4 + 4);
    while (piVar6[-1] != 0x3711677b) {
      piVar6 = piVar6 + 2;
      uVar5 = uVar5 - 1;
      if (uVar5 == 0) {
        return 0;
      }
    }
    iVar3 = 0;
    if (*piVar6 != -1) {
      iVar3 = *piVar6;
    }
    DAT_05557714 = CONCAT44(DAT_05557714._4_4_,iVar3);
    if (*puVar7 == 0) {
      return 0;
    }
  }
  return 0;
}


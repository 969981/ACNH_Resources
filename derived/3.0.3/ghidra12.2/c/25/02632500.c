
undefined8 FUN_02632500(long param_1,uint param_2,long param_3,long param_4,undefined8 param_5)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  uint *puVar4;
  int *piVar5;
  uint *puVar6;
  char cVar7;
  ulong uVar8;
  undefined8 uVar9;
  short local_48 [4];
  
  if ((((param_3 == 0) || (uVar1 = param_2 & 0xffff, 0x7ff < uVar1)) ||
      ((*(byte *)(param_4 + (ulong)(uVar1 >> 3)) >> (ulong)(param_2 & 7) & 1) == 0)) ||
     ((uVar1 = uVar1 - *(ushort *)(param_1 + 0xea6e0), *(uint *)(param_1 + 0xea6c0) <= uVar1 ||
      (puVar6 = *(uint **)(*(long *)(param_1 + 0xea6c8) + (long)(int)uVar1 * 8),
      puVar6 == (uint *)0x0)))) {
    uVar9 = 0;
  }
  else {
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
              local_48[0] = *(short *)((ulong)DAT_0555772c._4_4_ + (long)puVar6);
              goto LAB_02632690;
            }
            break;
          }
          if (DAT_0555772c._4_4_ != 0xffffffff) break;
        }
        puVar4 = (uint *)(ulong)*puVar6;
        local_48[0] = -2;
        if ((*puVar6 == 0) || (puVar6 == puVar4)) goto LAB_02632690;
        lVar3 = 0xc;
        if (*(char *)((long)puVar6 + (10 - (long)puVar4)) != '\0') {
          lVar3 = 0x1c;
        }
        lVar3 = (long)puVar6 + (lVar3 - (long)puVar4);
        if (lVar3 == 0) break;
        uVar8 = (ulong)*(ushort *)((long)puVar6 + (8 - (long)puVar4));
        DAT_0555772c = CONCAT44(0xfffffffe,(undefined4)DAT_0555772c);
        if (uVar8 == 0) break;
        piVar5 = (int *)(lVar3 + 4);
        while (piVar5[-1] != -0x765cb7d4) {
          piVar5 = piVar5 + 2;
          uVar8 = uVar8 - 1;
          if (uVar8 == 0) goto LAB_0263268c;
        }
        iVar2 = 0;
        if (*piVar5 != -1) {
          iVar2 = *piVar5;
        }
        DAT_0555772c = CONCAT44(iVar2,(undefined4)DAT_0555772c);
        if (*puVar6 == 0) break;
      } while( true );
    }
LAB_0263268c:
    local_48[0] = -2;
LAB_02632690:
    local_48[1] = 0;
    local_48[2] = 0;
    local_48[3] = 0;
    FUN_0277d4ac(local_48);
    uVar9 = 0;
    if (local_48[0] != -2) {
      uVar9 = 1;
      FUN_0262ec70(param_1,param_2,param_3,1,param_4,param_5);
    }
  }
  return uVar9;
}


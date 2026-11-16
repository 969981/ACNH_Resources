
void FUN_02630570(long param_1,long *param_2,long param_3,long param_4)

{
  long lVar1;
  ushort uVar2;
  uint uVar3;
  undefined8 *puVar4;
  char cVar5;
  long lVar6;
  byte bVar7;
  ulong uVar8;
  uint *puVar9;
  int *piVar10;
  long *plVar11;
  ulong uVar12;
  int iVar13;
  uint *puVar14;
  undefined2 local_68;
  undefined2 local_66;
  undefined4 local_64;
  
  if ((param_2 == (long *)0x0) || (param_3 == 0)) {
    return;
  }
  uVar12 = 0;
  plVar11 = (long *)PTR_DAT_04bb46b0;
LAB_02630634:
  uVar3 = *(uint *)(param_1 + 0xea6a8);
  if ((int)uVar3 < 1) {
    lVar6 = *(long *)(param_1 + 0xea598);
    uVar8 = 0;
    if (lVar6 != 0) {
      puVar14 = *(uint **)(lVar6 + 8);
      uVar8 = 0;
      if (puVar14 != (uint *)0x0) {
        uVar8 = (ulong)*puVar14;
      }
    }
    if (uVar8 <= uVar12) {
      return;
    }
    if (0 < (int)uVar3) goto LAB_02630674;
    lVar6 = *(long *)(param_1 + 0xea598);
    if ((((lVar6 == 0) || (puVar14 = *(uint **)(lVar6 + 8), puVar14 == (uint *)0x0)) ||
        ((uVar12 < *(uint *)(param_1 + 0xea5b0) &&
         (*(char *)(*(long *)(param_1 + 0xea5b8) + uVar12) == '\0')))) ||
       (((*puVar14 <= uVar12 || (puVar14[1] == 0)) || ((ushort)puVar14[2] == 0))))
    goto LAB_02630700;
    iVar13 = 0xc;
    if (*(char *)((long)puVar14 + 10) != '\0') {
      iVar13 = 0x1c;
    }
    puVar14 = (uint *)((ulong)(puVar14[1] * (int)uVar12 + (uint)(ushort)puVar14[2] * 8 + iVar13) +
                      (long)puVar14);
  }
  else {
    if (uVar3 <= uVar12) {
      return;
    }
LAB_02630674:
    if (uVar12 < uVar3) {
      uVar8 = uVar12 & 0xffffffff;
      if (*(uint *)(param_1 + 0xea698) <= uVar12) {
        uVar8 = 0;
      }
      puVar14 = *(uint **)(*(long *)(param_1 + 0xea6a0) + uVar8 * 8);
    }
    else {
LAB_02630700:
      puVar14 = (uint *)0x0;
    }
  }
  if (*puVar14 != 0) {
    cVar5 = DAT_055576f0;
    do {
      if (cVar5 == '\0') {
        cVar5 = '\x01';
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
        uVar8 = DAT_0555774c >> 0x20;
        if (-1 < (long)DAT_0555774c) {
          if ((((ushort *)(uVar8 + (long)puVar14) != (ushort *)0x0) &&
              (uVar2 = *(ushort *)(uVar8 + (long)puVar14), uVar2 < 0x800)) &&
             ((*(byte *)(param_4 + (ulong)(uVar2 >> 3)) >> (ulong)(uVar2 & 7) & 1) != 0)) {
            uVar3 = *puVar14;
            goto joined_r0x026307f8;
          }
          break;
        }
        if (uVar8 != 0xffffffff) break;
      }
      lVar6 = (long)puVar14 - (ulong)*puVar14;
      if ((*puVar14 == 0) || (lVar6 == 0)) break;
      lVar1 = 0xc;
      if (*(char *)(lVar6 + 10) != '\0') {
        lVar1 = 0x1c;
      }
      if (lVar1 + lVar6 == 0) break;
      uVar8 = (ulong)*(ushort *)(lVar6 + 8);
      DAT_0555774c = CONCAT44(0xfffffffe,(undefined4)DAT_0555774c);
      if (uVar8 == 0) break;
      piVar10 = (int *)(lVar1 + lVar6 + 4);
      while (piVar10[-1] != 0x54706054) {
        piVar10 = piVar10 + 2;
        uVar8 = uVar8 - 1;
        if (uVar8 == 0) goto LAB_02630630;
      }
      iVar13 = 0;
      if (*piVar10 != -1) {
        iVar13 = *piVar10;
      }
      DAT_0555774c = CONCAT44(iVar13,(undefined4)DAT_0555774c);
      if (*puVar14 == 0) break;
    } while( true );
  }
  goto LAB_02630630;
joined_r0x026307f8:
  if (uVar3 == 0) goto LAB_02630888;
  if (-1 < (int)uVar8) {
    if ((ushort *)(uVar8 + (long)puVar14) != (ushort *)0x0) {
      uVar3 = (uint)*(ushort *)(uVar8 + (long)puVar14);
      goto LAB_0263088c;
    }
    goto LAB_02630888;
  }
  if (uVar8 != 0xffffffff) goto LAB_02630888;
  uVar3 = 0x4c7b;
  lVar6 = (long)puVar14 - (ulong)*puVar14;
  if ((*puVar14 == 0) || (lVar6 == 0)) goto LAB_0263088c;
  lVar1 = 0xc;
  if (*(char *)(lVar6 + 10) != '\0') {
    lVar1 = 0x1c;
  }
  if (lVar1 + lVar6 == 0) goto LAB_02630888;
  uVar8 = (ulong)*(ushort *)(lVar6 + 8);
  DAT_0555774c = CONCAT44(0xfffffffe,(undefined4)DAT_0555774c);
  if (uVar8 == 0) goto LAB_02630888;
  puVar9 = (uint *)(lVar1 + lVar6 + 4);
  while (puVar9[-1] != 0x54706054) {
    puVar9 = puVar9 + 2;
    uVar8 = uVar8 - 1;
    if (uVar8 == 0) goto LAB_02630888;
  }
  uVar8 = 0;
  if (*puVar9 != 0xffffffff) {
    uVar8 = (ulong)*puVar9;
  }
  DAT_0555774c = CONCAT44((int)uVar8,(undefined4)DAT_0555774c);
  uVar3 = *puVar14;
  goto joined_r0x026307f8;
LAB_02630888:
  uVar3 = 0x4c7b;
LAB_0263088c:
  lVar6 = param_3 + 0x194b0;
  if (*(long *)(param_3 + 0x194b8) == 0) {
    lVar6 = *(long *)(*plVar11 + 0x20);
  }
  if (*(long **)(lVar6 + 0x86b0) == (long *)0x0) {
    uVar8 = 0;
  }
  else {
    puVar4 = (undefined8 *)**(long **)(lVar6 + 0x86b0);
    uVar8 = 0;
    if (puVar4 != (undefined8 *)0x0) {
      uVar8 = (**(code **)*puVar4)();
      plVar11 = (long *)PTR_DAT_04bb46b0;
    }
  }
  if (uVar3 < 0x800) {
    bVar7 = *(byte *)(*(long *)(lVar6 + 0x8698) + *(long *)(lVar6 + 0x8690) + (ulong)(uVar3 >> 3))
            >> (ulong)(uVar3 & 7) & 1;
  }
  else {
    bVar7 = 0;
  }
  if ((((uVar8 & 1) != 0) && (*(long *)(lVar6 + 0x86b0) != 0)) &&
     (puVar4 = *(undefined8 **)(*(long *)(lVar6 + 0x86b0) + 8), puVar4 != (undefined8 *)0x0)) {
    (**(code **)*puVar4)();
    plVar11 = (long *)PTR_DAT_04bb46b0;
  }
  if (bVar7 != 0) {
    if (*puVar14 != 0) {
      cVar5 = DAT_055576f0;
      do {
        if (cVar5 == '\0') {
          cVar5 = '\x01';
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
            if ((undefined2 *)((ulong)DAT_0555772c._4_4_ + (long)puVar14) != (undefined2 *)0x0) {
              local_68 = *(undefined2 *)((ulong)DAT_0555772c._4_4_ + (long)puVar14);
              goto LAB_02630a6c;
            }
            break;
          }
          if (DAT_0555772c._4_4_ != 0xffffffff) break;
        }
        puVar9 = (uint *)(ulong)*puVar14;
        local_68 = 0xfffe;
        if ((*puVar14 == 0) || (puVar14 == puVar9)) goto LAB_02630a6c;
        lVar6 = 0xc;
        if (*(char *)((long)puVar14 + (10 - (long)puVar9)) != '\0') {
          lVar6 = 0x1c;
        }
        lVar6 = (long)puVar14 + (lVar6 - (long)puVar9);
        if (lVar6 == 0) break;
        uVar8 = (ulong)*(ushort *)((long)puVar14 + (8 - (long)puVar9));
        DAT_0555772c = CONCAT44(0xfffffffe,(undefined4)DAT_0555772c);
        if (uVar8 == 0) break;
        piVar10 = (int *)(lVar6 + 4);
        while (piVar10[-1] != -0x765cb7d4) {
          piVar10 = piVar10 + 2;
          uVar8 = uVar8 - 1;
          if (uVar8 == 0) goto LAB_02630a68;
        }
        iVar13 = 0;
        if (*piVar10 != -1) {
          iVar13 = *piVar10;
        }
        DAT_0555772c = CONCAT44(iVar13,(undefined4)DAT_0555772c);
        if (*puVar14 == 0) break;
      } while( true );
    }
LAB_02630a68:
    local_68 = 0xfffe;
LAB_02630a6c:
    local_66 = 0;
    local_64 = 0;
    FUN_0277d4ac(&local_68);
    FUN_0277dedc(&local_68);
    lVar6 = (**(code **)(*param_2 + 0x18))();
    uVar3 = FUN_0277d6c4(&local_68);
    if ((uVar3 >> 3 & 0x1fff) < 0x753) {
      lVar1 = (ulong)((uVar3 & 0xffff) >> 5) * 4;
      *(uint *)(lVar6 + lVar1) = *(uint *)(lVar6 + lVar1) | 1 << (ulong)(uVar3 & 0x1f);
    }
    plVar11 = (long *)PTR_DAT_04bb46b0;
  }
LAB_02630630:
  uVar12 = uVar12 + 1;
  goto LAB_02630634;
}


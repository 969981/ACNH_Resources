
void FUN_0261d2f0(long param_1,long *param_2)

{
  int iVar1;
  long lVar2;
  uint uVar3;
  void *__s;
  long lVar4;
  uint *puVar5;
  char cVar6;
  ulong uVar7;
  uint *puVar8;
  int *piVar9;
  uint uVar10;
  undefined2 local_68;
  undefined2 local_66;
  undefined4 local_64;
  
  __s = (void *)(**(code **)(*param_2 + 0x18))(param_2);
  memset(__s,0,0x754);
  uVar10 = 0;
  do {
    if ((((*(byte *)(param_1 + 0xe9be0 + (ulong)(uVar10 >> 3)) >> (ulong)(uVar10 & 7) & 1) != 0) &&
        (uVar3 = uVar10 - *(ushort *)(param_1 + 0xea6e0), uVar3 < *(uint *)(param_1 + 0xea6c0))) &&
       (puVar5 = *(uint **)(*(long *)(param_1 + 0xea6c8) + (long)(int)uVar3 * 8),
       puVar5 != (uint *)0x0)) {
      if (*puVar5 != 0) {
        cVar6 = DAT_055576f0;
        do {
          if (cVar6 == '\0') {
            cVar6 = '\x01';
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
              if ((undefined2 *)((ulong)DAT_0555772c._4_4_ + (long)puVar5) != (undefined2 *)0x0) {
                local_68 = *(undefined2 *)((ulong)DAT_0555772c._4_4_ + (long)puVar5);
                goto LAB_0261d4a0;
              }
              break;
            }
            if (DAT_0555772c._4_4_ != 0xffffffff) break;
          }
          puVar8 = (uint *)(ulong)*puVar5;
          local_68 = 0xfffe;
          if ((*puVar5 == 0) || (puVar5 == puVar8)) goto LAB_0261d4a0;
          lVar4 = 0xc;
          if (*(char *)((long)puVar5 + (10 - (long)puVar8)) != '\0') {
            lVar4 = 0x1c;
          }
          lVar4 = (long)puVar5 + (lVar4 - (long)puVar8);
          if (lVar4 == 0) break;
          uVar7 = (ulong)*(ushort *)((long)puVar5 + (8 - (long)puVar8));
          DAT_0555772c = CONCAT44(0xfffffffe,(undefined4)DAT_0555772c);
          if (uVar7 == 0) break;
          piVar9 = (int *)(lVar4 + 4);
          while (piVar9[-1] != -0x765cb7d4) {
            piVar9 = piVar9 + 2;
            uVar7 = uVar7 - 1;
            if (uVar7 == 0) goto LAB_0261d49c;
          }
          iVar1 = 0;
          if (*piVar9 != -1) {
            iVar1 = *piVar9;
          }
          DAT_0555772c = CONCAT44(iVar1,(undefined4)DAT_0555772c);
          if (*puVar5 == 0) break;
        } while( true );
      }
LAB_0261d49c:
      local_68 = 0xfffe;
LAB_0261d4a0:
      local_66 = 0;
      local_64 = 0;
      FUN_0277d4ac(&local_68);
      FUN_0277dedc(&local_68);
      lVar4 = (**(code **)(*param_2 + 0x18))(param_2);
      uVar3 = FUN_0277d6c4(&local_68);
      if ((uVar3 >> 3 & 0x1fff) < 0x753) {
        lVar2 = (ulong)((uVar3 & 0xffff) >> 5) * 4;
        *(uint *)(lVar4 + lVar2) = *(uint *)(lVar4 + lVar2) | 1 << (ulong)(uVar3 & 0x1f);
      }
    }
    uVar10 = uVar10 + 1;
    if (uVar10 == 0x800) {
      return;
    }
  } while( true );
}


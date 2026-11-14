
byte FUN_0171ef80(long param_1,uint param_2)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint uVar4;
  uint uVar5;
  ulong uVar6;
  uint *puVar7;
  long lVar8;
  int iVar9;
  char cVar10;
  uint *puVar11;
  int *piVar12;
  
  lVar8 = DAT_0524a598;
  uVar6 = (ulong)**(byte **)(param_1 + 8);
  if (**(byte **)(param_1 + 8) != 0) {
    if (DAT_0524a598 == 0) {
      return 0;
    }
    uVar4 = FUN_0171f4d0(DAT_0524a598,param_1);
    uVar5 = *(uint *)(lVar8 + 0x1c0);
    if ((int)uVar5 < 1) {
      lVar8 = *(long *)(lVar8 + 0xb0);
      uVar5 = 0;
      if (lVar8 != 0) {
        puVar7 = *(uint **)(lVar8 + 8);
        uVar5 = 0;
        if (puVar7 != (uint *)0x0) {
          uVar5 = *puVar7;
        }
      }
    }
    uVar1 = uVar4 & 0xffff;
    if (uVar5 <= uVar4) {
      uVar1 = 0;
    }
    uVar6 = (ulong)uVar1;
  }
  puVar3 = PTR_DAT_04bbde90;
  puVar2 = PTR_DAT_04bbde88;
  if (DAT_0524a598 != 0) {
    uVar5 = (uint)uVar6;
    if ((int)*(uint *)(DAT_0524a598 + 0x1c0) < 1) {
      if (*(long *)(DAT_0524a598 + 0xb0) == 0) {
        return 0;
      }
      puVar7 = *(uint **)(*(long *)(DAT_0524a598 + 0xb0) + 8);
      if (puVar7 == (uint *)0x0) {
        return 0;
      }
      if ((uVar5 < *(uint *)(DAT_0524a598 + 200)) &&
         (*(char *)(*(long *)(DAT_0524a598 + 0xd0) + uVar6) == '\0')) {
        return 0;
      }
      if (*puVar7 <= uVar5) {
        return 0;
      }
      if (puVar7[1] == 0) {
        return 0;
      }
      if ((ushort)puVar7[2] == 0) {
        return 0;
      }
      iVar9 = 0xc;
      if (*(char *)((long)puVar7 + 10) != '\0') {
        iVar9 = 0x1c;
      }
      puVar7 = (uint *)((ulong)(puVar7[1] * uVar5 + (uint)(ushort)puVar7[2] * 8 + iVar9) +
                       (long)puVar7);
    }
    else {
      if (*(uint *)(DAT_0524a598 + 0x1c0) <= uVar5) {
        return 0;
      }
      if (*(uint *)(DAT_0524a598 + 0x1b0) <= uVar5) {
        uVar5 = 0;
      }
      puVar7 = *(uint **)(*(long *)(DAT_0524a598 + 0x1b8) + (ulong)uVar5 * 8);
    }
    if ((puVar7 != (uint *)0x0) && (*puVar7 != 0)) {
      cVar10 = *PTR_DAT_04bbde88;
      while( true ) {
        if (cVar10 == '\0') {
          cVar10 = '\x01';
          *(undefined8 *)puVar3 = 0xffffffffffffffff;
          *(undefined8 *)(puVar3 + 8) = 0xffffffffffffffff;
          *puVar2 = 1;
          *(undefined8 *)(puVar3 + 0x30) = 0xffffffffffffffff;
          *(undefined8 *)(puVar3 + 0x10) = 0xffffffffffffffff;
          *(undefined8 *)(puVar3 + 0x18) = 0xffffffffffffffff;
          *(undefined8 *)(puVar3 + 0x20) = 0xffffffffffffffff;
          *(undefined8 *)(puVar3 + 0x28) = 0xffffffffffffffff;
        }
        else {
          uVar5 = *(uint *)(puVar3 + 0x2c);
          if (-1 < (int)uVar5) {
            if ((ulong)uVar5 + (long)puVar7 == 0) {
              return 0;
            }
            uVar4 = param_2 + 7;
            if (-1 < (int)param_2) {
              uVar4 = param_2;
            }
            return *(byte *)((ulong)uVar5 + (long)puVar7 + (ulong)(uint)((int)uVar4 >> 3)) >>
                   (ulong)(param_2 & 7) & 1;
          }
          if (uVar5 != 0xffffffff) {
            return 0;
          }
        }
        puVar11 = (uint *)(ulong)*puVar7;
        if (*puVar7 == 0) {
          return 0;
        }
        if (puVar7 == puVar11) break;
        lVar8 = 0xc;
        if (*(char *)((long)puVar7 + (10 - (long)puVar11)) != '\0') {
          lVar8 = 0x1c;
        }
        lVar8 = (long)puVar7 + (lVar8 - (long)puVar11);
        if (lVar8 == 0) {
          return 0;
        }
        uVar6 = (ulong)*(ushort *)((long)puVar7 + (8 - (long)puVar11));
        *(undefined4 *)(puVar3 + 0x2c) = 0xfffffffe;
        if (uVar6 == 0) {
          return 0;
        }
        piVar12 = (int *)(lVar8 + 4);
        while (piVar12[-1] != 0x42ad246a) {
          piVar12 = piVar12 + 2;
          uVar6 = uVar6 - 1;
          if (uVar6 == 0) {
            return 0;
          }
        }
        iVar9 = 0;
        if (*piVar12 != -1) {
          iVar9 = *piVar12;
        }
        *(int *)(puVar3 + 0x2c) = iVar9;
        if (*puVar7 == 0) {
          return 0;
        }
      }
      return 0;
    }
  }
  return 0;
}


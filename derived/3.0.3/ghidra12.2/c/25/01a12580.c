
undefined4 FUN_01a12580(long param_1,uint param_2)

{
  long lVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  ulong uVar6;
  uint *puVar7;
  char cVar8;
  uint *puVar9;
  int *piVar10;
  undefined8 *puVar11;
  
  if (param_2 != 0xfffe) {
    if (*(undefined8 **)(param_1 + 0x20) == (undefined8 *)0x0) {
      return 0x3f800000;
    }
    if (*(int *)(param_1 + 0x18) == 0) {
      return 0x3f800000;
    }
    puVar11 = (undefined8 *)**(undefined8 **)(param_1 + 0x20);
    if (((DAT_052d2590 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_052d2590), iVar5 != 0)) {
      DAT_052d2588 = &PTR_LAB_049fa588;
      __cxa_guard_release(&DAT_052d2590);
    }
    if (puVar11 == (undefined8 *)0x0) {
      return 0x3f800000;
    }
    uVar6 = (**(code **)*puVar11)(puVar11,&DAT_052d2588);
    puVar4 = PTR_DAT_04bbec80;
    puVar3 = PTR_DAT_04bbec78;
    if ((uVar6 & 1) == 0) {
      return 0x3f800000;
    }
    uVar2 = (param_2 & 0xffff) - (uint)*(ushort *)(puVar11 + 0x3f);
    if (*(uint *)(puVar11 + 0x3b) <= uVar2) {
      return 0x3f800000;
    }
    puVar7 = *(uint **)(puVar11[0x3c] + (long)(int)uVar2 * 8);
    if (puVar7 == (uint *)0x0) {
      return 0x3f800000;
    }
    if (*puVar7 != 0) {
      cVar8 = *PTR_DAT_04bbec78;
      while( true ) {
        if (cVar8 == '\0') {
          cVar8 = '\x01';
          *(undefined8 *)puVar4 = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 8) = 0xffffffffffffffff;
          *puVar3 = 1;
          *(undefined8 *)(puVar4 + 0x10) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x18) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x20) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x28) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x30) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x38) = 0xffffffffffffffff;
        }
        else {
          uVar2 = *(uint *)(puVar4 + 0x10);
          if (-1 < (int)uVar2) {
            if ((undefined4 *)((ulong)uVar2 + (long)puVar7) == (undefined4 *)0x0) {
              return 0;
            }
            return *(undefined4 *)((ulong)uVar2 + (long)puVar7);
          }
          if (uVar2 != 0xffffffff) {
            return 0;
          }
        }
        puVar9 = (uint *)(ulong)*puVar7;
        if (*puVar7 == 0) {
          return 0;
        }
        if (puVar7 == puVar9) break;
        lVar1 = 0xc;
        if (*(char *)((long)puVar7 + (10 - (long)puVar9)) != '\0') {
          lVar1 = 0x1c;
        }
        lVar1 = (long)puVar7 + (lVar1 - (long)puVar9);
        if (lVar1 == 0) {
          return 0;
        }
        uVar6 = (ulong)*(ushort *)((long)puVar7 + (8 - (long)puVar9));
        *(undefined4 *)(puVar4 + 0x10) = 0xfffffffe;
        if (uVar6 == 0) {
          return 0;
        }
        piVar10 = (int *)(lVar1 + 4);
        while (piVar10[-1] != -0x25f4a3d7) {
          piVar10 = piVar10 + 2;
          uVar6 = uVar6 - 1;
          if (uVar6 == 0) {
            return 0;
          }
        }
        iVar5 = 0;
        if (*piVar10 != -1) {
          iVar5 = *piVar10;
        }
        *(int *)(puVar4 + 0x10) = iVar5;
        if (*puVar7 == 0) {
          return 0;
        }
      }
      return 0;
    }
  }
  return 0;
}


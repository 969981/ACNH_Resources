
undefined8 * FUN_01a113c0(long param_1,uint param_2)

{
  long lVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  undefined8 *puVar6;
  ulong uVar7;
  uint *puVar8;
  char cVar9;
  undefined8 *puVar10;
  uint *puVar11;
  int *piVar12;
  
  if (param_2 == 0xfffe) {
    puVar6 = (undefined8 *)&DAT_0406f9b4;
LAB_01a113d4:
    return puVar6;
  }
  puVar6 = &DAT_0407ebb1;
  if ((*(undefined8 **)(param_1 + 0x20) == (undefined8 *)0x0) || (*(int *)(param_1 + 0x18) == 0))
  goto LAB_01a113d4;
  puVar6 = (undefined8 *)**(undefined8 **)(param_1 + 0x20);
  if (((DAT_052d2590 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_052d2590), iVar5 != 0)) {
    DAT_052d2588 = &PTR_LAB_049fa588;
    __cxa_guard_release(&DAT_052d2590);
  }
  if (puVar6 != (undefined8 *)0x0) {
    uVar7 = (**(code **)*puVar6)(puVar6,&DAT_052d2588);
    puVar4 = PTR_DAT_04bbec80;
    puVar3 = PTR_DAT_04bbec78;
    if ((((uVar7 & 1) != 0) &&
        (uVar2 = (param_2 & 0xffff) - (uint)*(ushort *)(puVar6 + 0x3f),
        uVar2 < *(uint *)(puVar6 + 0x3b))) &&
       (puVar8 = *(uint **)(puVar6[0x3c] + (long)(int)uVar2 * 8), puVar8 != (uint *)0x0)) {
      if (*puVar8 != 0) {
        cVar9 = *PTR_DAT_04bbec78;
        do {
          if (cVar9 == '\0') {
            cVar9 = '\x01';
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
            uVar2 = *(uint *)(puVar4 + 0x2c);
            if (-1 < (int)uVar2) {
              puVar10 = (undefined8 *)((ulong)uVar2 + (long)puVar8);
              goto LAB_01a11538;
            }
            if (uVar2 != 0xffffffff) break;
          }
          puVar11 = (uint *)(ulong)*puVar8;
          puVar10 = (undefined8 *)0x0;
          if ((*puVar8 == 0) || (puVar8 == puVar11)) goto LAB_01a11538;
          lVar1 = 0xc;
          if (*(char *)((long)puVar8 + (10 - (long)puVar11)) != '\0') {
            lVar1 = 0x1c;
          }
          lVar1 = (long)puVar8 + (lVar1 - (long)puVar11);
          if (lVar1 == 0) break;
          uVar7 = (ulong)*(ushort *)((long)puVar8 + (8 - (long)puVar11));
          *(undefined4 *)(puVar4 + 0x2c) = 0xfffffffe;
          puVar10 = (undefined8 *)0x0;
          if (uVar7 == 0) goto LAB_01a11538;
          piVar12 = (int *)(lVar1 + 4);
          while (piVar12[-1] != -0x7840ff18) {
            piVar12 = piVar12 + 2;
            uVar7 = uVar7 - 1;
            if (uVar7 == 0) {
              puVar10 = (undefined8 *)0x0;
              goto LAB_01a11538;
            }
          }
          iVar5 = 0;
          if (*piVar12 != -1) {
            iVar5 = *piVar12;
          }
          *(int *)(puVar4 + 0x2c) = iVar5;
        } while (*puVar8 != 0);
      }
      puVar10 = (undefined8 *)0x0;
LAB_01a11538:
      puVar6 = *(undefined8 **)PTR_PTR_04bbec98;
      if (puVar10 != (undefined8 *)0x0) {
        puVar6 = puVar10;
      }
      goto LAB_01a11558;
    }
  }
  puVar6 = &DAT_0407ebb1;
LAB_01a11558:
  return puVar6;
}


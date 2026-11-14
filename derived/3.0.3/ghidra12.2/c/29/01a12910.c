
void FUN_01a12910(undefined4 *param_1,long param_2,uint param_3)

{
  long lVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  ulong uVar7;
  uint *puVar8;
  char cVar9;
  undefined2 uVar10;
  uint *puVar11;
  int *piVar12;
  undefined8 *puVar13;
  
  if (((param_3 != 0xfffe) && (*(undefined8 **)(param_2 + 0x20) != (undefined8 *)0x0)) &&
     (*(int *)(param_2 + 0x18) != 0)) {
    puVar13 = (undefined8 *)**(undefined8 **)(param_2 + 0x20);
    if (((DAT_052d2590 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_052d2590), iVar6 != 0)) {
      DAT_052d2588 = &PTR_LAB_049fa588;
      __cxa_guard_release(&DAT_052d2590);
    }
    if (((puVar13 != (undefined8 *)0x0) &&
        (uVar7 = (**(code **)*puVar13)(puVar13,&DAT_052d2588), puVar5 = PTR_DAT_04bbec80,
        puVar4 = PTR_DAT_04bbec78, (uVar7 & 1) != 0)) &&
       ((uVar3 = (param_3 & 0xffff) - (uint)*(ushort *)(puVar13 + 0x3f),
        uVar3 < *(uint *)(puVar13 + 0x3b) &&
        (puVar8 = *(uint **)(puVar13[0x3c] + (long)(int)uVar3 * 8), puVar8 != (uint *)0x0)))) {
      if (*puVar8 == 0) {
LAB_01a12aa8:
        uVar10 = 0;
      }
      else {
        cVar9 = *PTR_DAT_04bbec78;
        do {
          if (cVar9 == '\0') {
            cVar9 = '\x01';
            *(undefined8 *)puVar5 = 0xffffffffffffffff;
            *(undefined8 *)(puVar5 + 8) = 0xffffffffffffffff;
            *puVar4 = 1;
            *(undefined8 *)(puVar5 + 0x10) = 0xffffffffffffffff;
            *(undefined8 *)(puVar5 + 0x18) = 0xffffffffffffffff;
            *(undefined8 *)(puVar5 + 0x20) = 0xffffffffffffffff;
            *(undefined8 *)(puVar5 + 0x28) = 0xffffffffffffffff;
            *(undefined8 *)(puVar5 + 0x30) = 0xffffffffffffffff;
            *(undefined8 *)(puVar5 + 0x38) = 0xffffffffffffffff;
          }
          else {
            uVar3 = *(uint *)(puVar5 + 0x1c);
            if (-1 < (int)uVar3) {
              if ((undefined2 *)((ulong)uVar3 + (long)puVar8) == (undefined2 *)0x0)
              goto LAB_01a12aa8;
              uVar10 = *(undefined2 *)((ulong)uVar3 + (long)puVar8);
              goto LAB_01a12aac;
            }
            if (uVar3 != 0xffffffff) goto LAB_01a12aa8;
          }
          puVar11 = (uint *)(ulong)*puVar8;
          uVar10 = 0;
          if ((*puVar8 == 0) || (puVar8 == puVar11)) goto LAB_01a12aac;
          lVar1 = 0xc;
          if (*(char *)((long)puVar8 + (10 - (long)puVar11)) != '\0') {
            lVar1 = 0x1c;
          }
          lVar1 = (long)puVar8 + (lVar1 - (long)puVar11);
          if (lVar1 == 0) goto LAB_01a12aa8;
          uVar7 = (ulong)*(ushort *)((long)puVar8 + (8 - (long)puVar11));
          *(undefined4 *)(puVar5 + 0x1c) = 0xfffffffe;
          uVar10 = 0;
          if (uVar7 == 0) goto LAB_01a12aac;
          piVar12 = (int *)(lVar1 + 4);
          while (piVar12[-1] != -0x25507460) {
            piVar12 = piVar12 + 2;
            uVar7 = uVar7 - 1;
            if (uVar7 == 0) {
              uVar10 = 0;
              goto LAB_01a12aac;
            }
          }
          iVar6 = 0;
          if (*piVar12 != -1) {
            iVar6 = *piVar12;
          }
          *(int *)(puVar5 + 0x1c) = iVar6;
        } while (*puVar8 != 0);
        uVar10 = 0;
      }
LAB_01a12aac:
      *(undefined2 *)param_1 = uVar10;
      *(undefined2 *)((long)param_1 + 2) = 0;
      param_1[1] = 0;
      FUN_0277d4ac(param_1);
      return;
    }
  }
  uVar2 = *(undefined4 *)(PTR_DAT_04bb37e0 + 4);
  *param_1 = *(undefined4 *)PTR_DAT_04bb37e0;
  param_1[1] = uVar2;
  return;
}


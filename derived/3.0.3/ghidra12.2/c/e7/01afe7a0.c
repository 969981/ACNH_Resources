
void FUN_01afe7a0(long *param_1,uint param_2)

{
  long lVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  uint *puVar5;
  int iVar6;
  char cVar7;
  ulong uVar8;
  undefined *puVar9;
  uint *puVar10;
  int *piVar11;
  undefined *local_20;
  undefined *puStack_18;
  
  puVar4 = PTR_DAT_04bbff60;
  puVar3 = PTR_DAT_04bbff58;
  if ((int)*(uint *)(DAT_0532a7d0 + 0x1c0) < 1) {
    if ((((*(long *)(DAT_0532a7d0 + 0xb0) == 0) ||
         (puVar5 = *(uint **)(*(long *)(DAT_0532a7d0 + 0xb0) + 8), puVar5 == (uint *)0x0)) ||
        ((param_2 < *(uint *)(DAT_0532a7d0 + 200) &&
         (*(char *)(*(long *)(DAT_0532a7d0 + 0xd0) + (long)(int)param_2) == '\0')))) ||
       (((*puVar5 <= param_2 || (puVar5[1] == 0)) || ((ushort)puVar5[2] == 0)))) goto LAB_01afe95c;
    iVar6 = 0xc;
    if (*(char *)((long)puVar5 + 10) != '\0') {
      iVar6 = 0x1c;
    }
    puVar5 = (uint *)((ulong)(puVar5[1] * param_2 + (uint)(ushort)puVar5[2] * 8 + iVar6) +
                     (long)puVar5);
  }
  else {
    if (*(uint *)(DAT_0532a7d0 + 0x1c0) <= param_2) goto LAB_01afe95c;
    if (*(uint *)(DAT_0532a7d0 + 0x1b0) <= param_2) {
      param_2 = 0;
    }
    puVar5 = *(uint **)(*(long *)(DAT_0532a7d0 + 0x1b8) + (ulong)param_2 * 8);
  }
  if (puVar5 != (uint *)0x0) {
    if (*puVar5 != 0) {
      cVar7 = *PTR_DAT_04bbff58;
      do {
        if (cVar7 == '\0') {
          cVar7 = '\x01';
          *(undefined8 *)puVar4 = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 8) = 0xffffffffffffffff;
          *puVar3 = 1;
          *(undefined8 *)(puVar4 + 0x10) = 0xffffffffffffffff;
          *(undefined4 *)(puVar4 + 0x18) = 0xffffffff;
        }
        else {
          uVar2 = *(uint *)(puVar4 + 0x18);
          if (-1 < (int)uVar2) {
            puVar9 = (undefined *)((ulong)uVar2 + (long)puVar5);
            goto LAB_01afe8bc;
          }
          if (uVar2 != 0xffffffff) break;
        }
        puVar10 = (uint *)(ulong)*puVar5;
        puVar9 = (undefined *)0x0;
        if ((*puVar5 == 0) || (puVar5 == puVar10)) goto LAB_01afe8bc;
        lVar1 = 0xc;
        if (*(char *)((long)puVar5 + (10 - (long)puVar10)) != '\0') {
          lVar1 = 0x1c;
        }
        lVar1 = (long)puVar5 + (lVar1 - (long)puVar10);
        if (lVar1 == 0) break;
        uVar8 = (ulong)*(ushort *)((long)puVar5 + (8 - (long)puVar10));
        *(undefined4 *)(puVar4 + 0x18) = 0xfffffffe;
        puVar9 = (undefined *)0x0;
        if (uVar8 == 0) goto LAB_01afe8bc;
        piVar11 = (int *)(lVar1 + 4);
        while (piVar11[-1] != 0x5aebbfb5) {
          piVar11 = piVar11 + 2;
          uVar8 = uVar8 - 1;
          if (uVar8 == 0) {
            puVar9 = (undefined *)0x0;
            goto LAB_01afe8bc;
          }
        }
        iVar6 = 0;
        if (*piVar11 != -1) {
          iVar6 = *piVar11;
        }
        *(int *)(puVar4 + 0x18) = iVar6;
      } while (*puVar5 != 0);
    }
    puVar9 = (undefined *)0x0;
LAB_01afe8bc:
    puStack_18 = PTR_DAT_04c48598;
    if (puVar9 != (undefined *)0x0) {
      puStack_18 = puVar9;
    }
    local_20 = PTR_DAT_04bb2020 + 0x10;
    (**(code **)(*param_1 + 0x10))(param_1,&local_20);
    return;
  }
LAB_01afe95c:
  *(undefined1 *)param_1[1] = 0;
  return;
}


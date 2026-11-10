
/* WARNING: Removing unreachable block (ram,0x0018b840) */
/* WARNING: Removing unreachable block (ram,0x0018b858) */

void FUN_0018b7a0(long param_1,long param_2)

{
  ulong uVar1;
  undefined4 *puVar2;
  char cVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  code *pcVar8;
  long lVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  ulong uVar12;
  ulong uVar13;
  
  uVar1 = param_2 + 1;
  if (*(ulong *)(param_1 + 0x20) < uVar1) {
    if (DAT_04c57ea0 == (code *)0x0) {
      puVar5 = malloc((param_2 + 0xcU & 0xfffffffffffffff8) + 0x10);
    }
    else {
      puVar5 = (undefined8 *)(*DAT_04c57ea0)();
    }
    puVar4 = PTR_DAT_04bcba28;
    puVar2 = (undefined4 *)((long)puVar5 + 0x14);
    *(int *)(puVar5 + 2) = (int)uVar1;
    *puVar5 = *(undefined8 *)puVar4;
    if (uVar1 < 2) {
      uVar7 = 0;
      uVar12 = 0;
      uVar13 = 1;
      puVar11 = puVar2;
    }
    else {
      lVar6 = *(long *)(param_1 + 0x18);
      lVar9 = 0;
      do {
        cVar3 = *(char *)(lVar6 + lVar9);
        if (cVar3 == '\0') {
          if (param_2 + 1 == lVar9) goto LAB_0018b8ac;
          uVar12 = param_2 - lVar9;
          puVar11 = (undefined4 *)((long)puVar2 + lVar9);
          uVar7 = uVar12 + 1;
          uVar13 = uVar7 & 3;
          if (uVar13 == 0) goto LAB_0018b890;
          goto LAB_0018b880;
        }
        *(char *)((long)puVar2 + lVar9) = cVar3;
        lVar9 = lVar9 + 1;
      } while (param_2 != lVar9);
      uVar7 = 0;
      uVar12 = 0;
      uVar13 = 1;
      puVar11 = (undefined4 *)((long)puVar2 + lVar9);
    }
LAB_0018b880:
    uVar7 = uVar7 & 0xfffffffffffffffc;
    puVar10 = puVar11;
    do {
      uVar13 = uVar13 - 1;
      puVar11 = (undefined4 *)((long)puVar10 + 1);
      *(undefined1 *)puVar10 = 0;
      puVar10 = puVar11;
    } while (uVar13 != 0);
LAB_0018b890:
    if (2 < uVar12) {
      do {
        uVar7 = uVar7 - 4;
        *puVar11 = 0;
        puVar11 = puVar11 + 1;
      } while (uVar7 != 0);
    }
LAB_0018b8ac:
    lVar9 = *(long *)(param_1 + 0x18);
    if ((lVar9 != 0) && (lVar9 != param_1 + 8)) {
      pcVar8 = *(code **)(lVar9 + -0x14);
      if (pcVar8 == (code *)0x0) {
        free((undefined8 *)(lVar9 + -0x14));
      }
      else {
        (*pcVar8)();
      }
    }
    *(undefined4 **)(param_1 + 0x18) = puVar2;
    *(ulong *)(param_1 + 0x20) = uVar1;
  }
  return;
}


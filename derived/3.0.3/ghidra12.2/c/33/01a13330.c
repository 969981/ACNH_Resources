
bool FUN_01a13330(long param_1,uint param_2)

{
  long lVar1;
  char *pcVar2;
  uint uVar3;
  undefined *puVar4;
  undefined *puVar5;
  bool bVar6;
  int iVar7;
  ulong uVar8;
  uint *puVar9;
  char cVar10;
  char *pcVar11;
  uint *puVar12;
  int *piVar13;
  undefined8 *puVar14;
  
  if (((param_2 == 0xfffe) || (*(undefined8 **)(param_1 + 0x20) == (undefined8 *)0x0)) ||
     (*(int *)(param_1 + 0x18) == 0)) {
    return false;
  }
  puVar14 = (undefined8 *)**(undefined8 **)(param_1 + 0x20);
  if (((DAT_052d2590 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_052d2590), iVar7 != 0)) {
    DAT_052d2588 = &PTR_LAB_049fa588;
    __cxa_guard_release(&DAT_052d2590);
  }
  if (((puVar14 == (undefined8 *)0x0) ||
      (uVar8 = (**(code **)*puVar14)(puVar14,&DAT_052d2588), puVar5 = PTR_DAT_04bbec80,
      puVar4 = PTR_DAT_04bbec78, (uVar8 & 1) == 0)) ||
     ((uVar3 = (param_2 & 0xffff) - (uint)*(ushort *)(puVar14 + 0x3f),
      *(uint *)(puVar14 + 0x3b) <= uVar3 ||
      (puVar9 = *(uint **)(puVar14[0x3c] + (long)(int)uVar3 * 8), puVar9 == (uint *)0x0)))) {
    bVar6 = false;
  }
  else {
    if (*puVar9 != 0) {
      cVar10 = *PTR_DAT_04bbec78;
      do {
        if (cVar10 == '\0') {
          cVar10 = '\x01';
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
          uVar3 = *(uint *)(puVar5 + 0x38);
          if (-1 < (int)uVar3) {
            pcVar11 = (char *)((ulong)uVar3 + (long)puVar9);
            goto LAB_01a1349c;
          }
          if (uVar3 != 0xffffffff) break;
        }
        puVar12 = (uint *)(ulong)*puVar9;
        pcVar11 = (char *)0x0;
        if ((*puVar9 == 0) || (puVar9 == puVar12)) goto LAB_01a1349c;
        lVar1 = 0xc;
        if (*(char *)((long)puVar9 + (10 - (long)puVar12)) != '\0') {
          lVar1 = 0x1c;
        }
        lVar1 = (long)puVar9 + (lVar1 - (long)puVar12);
        if (lVar1 == 0) break;
        uVar8 = (ulong)*(ushort *)((long)puVar9 + (8 - (long)puVar12));
        *(undefined4 *)(puVar5 + 0x38) = 0xfffffffe;
        pcVar11 = (char *)0x0;
        if (uVar8 == 0) goto LAB_01a1349c;
        piVar13 = (int *)(lVar1 + 4);
        while (piVar13[-1] != 0x4c777e9e) {
          piVar13 = piVar13 + 2;
          uVar8 = uVar8 - 1;
          if (uVar8 == 0) {
            pcVar11 = (char *)0x0;
            goto LAB_01a1349c;
          }
        }
        iVar7 = 0;
        if (*piVar13 != -1) {
          iVar7 = *piVar13;
        }
        *(int *)(puVar5 + 0x38) = iVar7;
      } while (*puVar9 != 0);
    }
    pcVar11 = (char *)0x0;
LAB_01a1349c:
    pcVar2 = PTR_DAT_04c484b0;
    if (pcVar11 != (char *)0x0) {
      pcVar2 = pcVar11;
    }
    bVar6 = *pcVar2 != '\0';
  }
  return bVar6;
}


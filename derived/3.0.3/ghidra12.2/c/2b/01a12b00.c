
/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffffffffffd0 : 0x01a12cdc */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

bool FUN_01a12b00(long param_1,uint param_2)

{
  ushort *puVar1;
  long lVar2;
  uint uVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  ulong uVar7;
  uint *puVar8;
  char cVar9;
  uint *puVar10;
  int *piVar11;
  undefined8 *puVar12;
  undefined2 local_30;
  
  if (((param_2 == 0xfffe) || (*(undefined8 **)(param_1 + 0x20) == (undefined8 *)0x0)) ||
     (*(int *)(param_1 + 0x18) == 0)) {
    return false;
  }
  puVar12 = (undefined8 *)**(undefined8 **)(param_1 + 0x20);
  if (((DAT_052d2590 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_052d2590), iVar6 != 0)) {
    DAT_052d2588 = &PTR_LAB_049fa588;
    __cxa_guard_release(&DAT_052d2590);
  }
  if (((puVar12 == (undefined8 *)0x0) ||
      (uVar7 = (**(code **)*puVar12)(puVar12,&DAT_052d2588), puVar5 = PTR_DAT_04bbec80,
      puVar4 = PTR_DAT_04bbec78, (uVar7 & 1) == 0)) ||
     ((uVar3 = (param_2 & 0xffff) - (uint)*(ushort *)(puVar12 + 0x3f),
      *(uint *)(puVar12 + 0x3b) <= uVar3 ||
      ((puVar8 = *(uint **)(puVar12[0x3c] + (long)(int)uVar3 * 8), puVar8 == (uint *)0x0 ||
       (*puVar8 == 0)))))) {
    return false;
  }
  cVar9 = *PTR_DAT_04bbec78;
  while( true ) {
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
      uVar3 = *(uint *)(puVar5 + 0x24);
      if (-1 < (int)uVar3) {
        puVar1 = (ushort *)((ulong)uVar3 + (long)puVar8);
        if (puVar1 == (ushort *)0x0) {
          return false;
        }
        local_30 = *puVar1 & 0xfff7;
        return ((char)local_30 != '\0' || local_30._1_1_ != '\0') || (char)puVar1[1] != '\0';
      }
      if (uVar3 != 0xffffffff) {
        return false;
      }
    }
    puVar10 = (uint *)(ulong)*puVar8;
    if (*puVar8 == 0) {
      return false;
    }
    if (puVar8 == puVar10) break;
    lVar2 = 0xc;
    if (*(char *)((long)puVar8 + (10 - (long)puVar10)) != '\0') {
      lVar2 = 0x1c;
    }
    lVar2 = (long)puVar8 + (lVar2 - (long)puVar10);
    if (lVar2 == 0) {
      return false;
    }
    uVar7 = (ulong)*(ushort *)((long)puVar8 + (8 - (long)puVar10));
    *(undefined4 *)(puVar5 + 0x24) = 0xfffffffe;
    if (uVar7 == 0) {
      return false;
    }
    piVar11 = (int *)(lVar2 + 4);
    while (piVar11[-1] != -0x45319aac) {
      piVar11 = piVar11 + 2;
      uVar7 = uVar7 - 1;
      if (uVar7 == 0) {
        return false;
      }
    }
    iVar6 = 0;
    if (*piVar11 != -1) {
      iVar6 = *piVar11;
    }
    *(int *)(puVar5 + 0x24) = iVar6;
    if (*puVar8 == 0) {
      return false;
    }
  }
  return false;
}


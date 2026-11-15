
float FUN_02201b50(undefined8 param_1)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  ulong uVar8;
  char cVar9;
  int *piVar10;
  undefined1 auStack_38 [8];
  undefined1 auStack_30 [8];
  uint *local_28;
  
  FUN_0124c030(auStack_38,param_1);
  uVar8 = FUN_0123d890(local_28,4);
  puVar6 = PTR_DAT_04bbbc78;
  puVar5 = PTR_DAT_04bbbc70;
  if ((uVar8 & 1) == 0) {
    iVar7 = FUN_0123db50(auStack_30,local_28);
    puVar6 = PTR_DAT_04bbbc78;
    puVar5 = PTR_DAT_04bbbc70;
    if ((((iVar7 - 2U & 0xfffffff9) == 0) && (local_28 != (uint *)0x0)) &&
       (uVar2 = *local_28, uVar2 != 0)) {
      cVar9 = *PTR_DAT_04bbbc70;
      while( true ) {
        if (cVar9 == '\0') {
          cVar9 = '\x01';
          *(undefined8 *)puVar6 = 0xffffffffffffffff;
          *(undefined8 *)(puVar6 + 8) = 0xffffffffffffffff;
          *puVar5 = 1;
          *(undefined4 *)(puVar6 + 0x60) = 0xffffffff;
          *(undefined8 *)(puVar6 + 0x10) = 0xffffffffffffffff;
          *(undefined8 *)(puVar6 + 0x18) = 0xffffffffffffffff;
          *(undefined8 *)(puVar6 + 0x20) = 0xffffffffffffffff;
          *(undefined8 *)(puVar6 + 0x28) = 0xffffffffffffffff;
          *(undefined8 *)(puVar6 + 0x30) = 0xffffffffffffffff;
          *(undefined8 *)(puVar6 + 0x38) = 0xffffffffffffffff;
          *(undefined8 *)(puVar6 + 0x40) = 0xffffffffffffffff;
          *(undefined8 *)(puVar6 + 0x48) = 0xffffffffffffffff;
          *(undefined8 *)(puVar6 + 0x50) = 0xffffffffffffffff;
          *(undefined8 *)(puVar6 + 0x58) = 0xffffffffffffffff;
          uVar2 = *local_28;
        }
        else {
          uVar3 = *(uint *)puVar6;
          if (-1 < (int)uVar3) {
            if ((float *)((ulong)uVar3 + (long)local_28) == (float *)0x0) {
              return 0.0;
            }
            return *(float *)((ulong)uVar3 + (long)local_28);
          }
          if (uVar3 != 0xffffffff) {
            return 0.0;
          }
        }
        puVar4 = (uint *)(ulong)uVar2;
        if (puVar4 == (uint *)0x0) {
          return 0.0;
        }
        if (local_28 == puVar4) break;
        lVar1 = 0xc;
        if (*(char *)((long)local_28 + (10 - (long)puVar4)) != '\0') {
          lVar1 = 0x1c;
        }
        lVar1 = (long)local_28 + (lVar1 - (long)puVar4);
        if (lVar1 == 0) {
          return 0.0;
        }
        uVar8 = (ulong)*(ushort *)((long)local_28 + (8 - (long)puVar4));
        *(undefined4 *)puVar6 = 0xfffffffe;
        if (uVar8 == 0) {
          return 0.0;
        }
        piVar10 = (int *)(lVar1 + 4);
        while (piVar10[-1] != 0xc315945) {
          piVar10 = piVar10 + 2;
          uVar8 = uVar8 - 1;
          if (uVar8 == 0) {
            return 0.0;
          }
        }
        iVar7 = 0;
        if (*piVar10 != -1) {
          iVar7 = *piVar10;
        }
        *(int *)puVar6 = iVar7;
        uVar2 = *local_28;
        if (uVar2 == 0) {
          return 0.0;
        }
      }
      return 0.0;
    }
  }
  else if ((local_28 != (uint *)0x0) && (uVar2 = *local_28, uVar2 != 0)) {
    cVar9 = *PTR_DAT_04bbbc70;
    while( true ) {
      if (cVar9 == '\0') {
        cVar9 = '\x01';
        *(undefined8 *)puVar6 = 0xffffffffffffffff;
        *(undefined8 *)(puVar6 + 8) = 0xffffffffffffffff;
        *puVar5 = 1;
        *(undefined4 *)(puVar6 + 0x60) = 0xffffffff;
        *(undefined8 *)(puVar6 + 0x10) = 0xffffffffffffffff;
        *(undefined8 *)(puVar6 + 0x18) = 0xffffffffffffffff;
        *(undefined8 *)(puVar6 + 0x20) = 0xffffffffffffffff;
        *(undefined8 *)(puVar6 + 0x28) = 0xffffffffffffffff;
        *(undefined8 *)(puVar6 + 0x30) = 0xffffffffffffffff;
        *(undefined8 *)(puVar6 + 0x38) = 0xffffffffffffffff;
        *(undefined8 *)(puVar6 + 0x40) = 0xffffffffffffffff;
        *(undefined8 *)(puVar6 + 0x48) = 0xffffffffffffffff;
        *(undefined8 *)(puVar6 + 0x50) = 0xffffffffffffffff;
        *(undefined8 *)(puVar6 + 0x58) = 0xffffffffffffffff;
        uVar2 = *local_28;
      }
      else {
        uVar3 = *(uint *)puVar6;
        if (-1 < (int)uVar3) {
          if ((float *)((ulong)uVar3 + (long)local_28) == (float *)0x0) {
            return 0.0;
          }
          return *(float *)((ulong)uVar3 + (long)local_28) * 0.5;
        }
        if (uVar3 != 0xffffffff) {
          return 0.0;
        }
      }
      puVar4 = (uint *)(ulong)uVar2;
      if (puVar4 == (uint *)0x0) {
        return 0.0;
      }
      if (local_28 == puVar4) break;
      lVar1 = 0xc;
      if (*(char *)((long)local_28 + (10 - (long)puVar4)) != '\0') {
        lVar1 = 0x1c;
      }
      lVar1 = (long)local_28 + (lVar1 - (long)puVar4);
      if (lVar1 == 0) {
        return 0.0;
      }
      uVar8 = (ulong)*(ushort *)((long)local_28 + (8 - (long)puVar4));
      *(undefined4 *)puVar6 = 0xfffffffe;
      if (uVar8 == 0) {
        return 0.0;
      }
      piVar10 = (int *)(lVar1 + 4);
      while (piVar10[-1] != 0xc315945) {
        piVar10 = piVar10 + 2;
        uVar8 = uVar8 - 1;
        if (uVar8 == 0) {
          return 0.0;
        }
      }
      iVar7 = 0;
      if (*piVar10 != -1) {
        iVar7 = *piVar10;
      }
      *(int *)puVar6 = iVar7;
      uVar2 = *local_28;
      if (uVar2 == 0) {
        return 0.0;
      }
    }
    return 0.0;
  }
  return 0.0;
}


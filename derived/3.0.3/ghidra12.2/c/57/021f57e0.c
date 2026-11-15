
uint FUN_021f57e0(undefined1 *param_1,long *param_2)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  uint *puVar5;
  uint uVar6;
  ulong uVar7;
  char cVar8;
  uint *puVar9;
  int *piVar10;
  long lVar11;
  undefined4 local_18;
  undefined4 local_14;
  
  *param_1 = 0;
  lVar11 = *(long *)PTR_DAT_04bb4130;
  if (lVar11 != 0) {
    (**(code **)(*param_2 + 0x18))(param_2);
    local_18 = FUN_006bd550(param_2[1],0);
    puVar5 = (uint *)FUN_0079e4d0(lVar11,&local_18);
    puVar4 = PTR_DAT_04bb40a8;
    puVar3 = PTR_DAT_04bb40a0;
    if (puVar5 != (uint *)0x0) {
      if (*puVar5 == 0) {
        return 0;
      }
      cVar8 = *PTR_DAT_04bb40a0;
      do {
        if (cVar8 == '\0') {
          cVar8 = '\x01';
          *(undefined8 *)puVar4 = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 8) = 0xffffffffffffffff;
          *puVar3 = 1;
          *(undefined8 *)(puVar4 + 0x70) = 0xffffffffffffffff;
          *(undefined4 *)(puVar4 + 0x78) = 0xffffffff;
          *(undefined8 *)(puVar4 + 0x10) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x18) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x20) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x28) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x30) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x38) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x40) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x48) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x50) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x58) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x60) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x68) = 0xffffffffffffffff;
        }
        else {
          uVar2 = *(uint *)(puVar4 + 0x40);
          if (-1 < (int)uVar2) goto LAB_021f5a8c;
          if (uVar2 != 0xffffffff) {
            return 0;
          }
        }
        puVar9 = (uint *)(ulong)*puVar5;
        if (*puVar5 == 0) {
          return 0;
        }
        if (puVar5 == puVar9) {
          return 0;
        }
        lVar11 = 0xc;
        if (*(char *)((long)puVar5 + (10 - (long)puVar9)) != '\0') {
          lVar11 = 0x1c;
        }
        lVar11 = (long)puVar5 + (lVar11 - (long)puVar9);
        if (lVar11 == 0) {
          return 0;
        }
        uVar7 = (ulong)*(ushort *)((long)puVar5 + (8 - (long)puVar9));
        *(undefined4 *)(puVar4 + 0x40) = 0xfffffffe;
        if (uVar7 == 0) {
          return 0;
        }
        piVar10 = (int *)(lVar11 + 4);
        while (piVar10[-1] != 0x54706054) {
          piVar10 = piVar10 + 2;
          uVar7 = uVar7 - 1;
          if (uVar7 == 0) {
            return 0;
          }
        }
        iVar1 = 0;
        if (*piVar10 != -1) {
          iVar1 = *piVar10;
        }
        *(int *)(puVar4 + 0x40) = iVar1;
        if (*puVar5 == 0) {
          return 0;
        }
      } while( true );
    }
  }
  lVar11 = *(long *)PTR_DAT_04bb4138;
  if (lVar11 != 0) {
    (**(code **)(*param_2 + 0x18))(param_2);
    local_14 = FUN_006bd550(param_2[1],0);
    puVar5 = (uint *)FUN_0079e770(lVar11,&local_14);
    if (puVar5 != (uint *)0x0) {
      *param_1 = 1;
      puVar4 = PTR_DAT_04bb40b8;
      puVar3 = PTR_DAT_04bb40b0;
      if (*puVar5 == 0) {
        return 0;
      }
      cVar8 = *PTR_DAT_04bb40b0;
      do {
        if (cVar8 == '\0') {
          cVar8 = '\x01';
          *(undefined8 *)puVar4 = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 8) = 0xffffffffffffffff;
          *puVar3 = 1;
          *(undefined4 *)(puVar4 + 0xa0) = 0xffffffff;
          *(undefined8 *)(puVar4 + 0x10) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x18) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x20) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x28) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x30) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x38) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x40) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x48) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x50) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x58) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x60) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x68) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x70) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x78) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x80) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x88) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x90) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x98) = 0xffffffffffffffff;
        }
        else {
          uVar2 = *(uint *)(puVar4 + 0x30);
          if (-1 < (int)uVar2) {
LAB_021f5a8c:
            uVar6 = 0;
            if ((ushort *)((ulong)uVar2 + (long)puVar5) != (ushort *)0x0) {
              uVar6 = (uint)*(ushort *)((ulong)uVar2 + (long)puVar5);
            }
            return uVar6;
          }
          if (uVar2 != 0xffffffff) {
            return 0;
          }
        }
        puVar9 = (uint *)(ulong)*puVar5;
        if (*puVar5 == 0) {
          return 0;
        }
        if (puVar5 == puVar9) {
          return 0;
        }
        lVar11 = 0xc;
        if (*(char *)((long)puVar5 + (10 - (long)puVar9)) != '\0') {
          lVar11 = 0x1c;
        }
        lVar11 = (long)puVar5 + (lVar11 - (long)puVar9);
        if (lVar11 == 0) {
          return 0;
        }
        uVar7 = (ulong)*(ushort *)((long)puVar5 + (8 - (long)puVar9));
        *(undefined4 *)(puVar4 + 0x30) = 0xfffffffe;
        if (uVar7 == 0) {
          return 0;
        }
        piVar10 = (int *)(lVar11 + 4);
        while (piVar10[-1] != 0x504428b5) {
          piVar10 = piVar10 + 2;
          uVar7 = uVar7 - 1;
          if (uVar7 == 0) {
            return 0;
          }
        }
        iVar1 = 0;
        if (*piVar10 != -1) {
          iVar1 = *piVar10;
        }
        *(int *)(puVar4 + 0x30) = iVar1;
        if (*puVar5 == 0) {
          return 0;
        }
      } while( true );
    }
  }
  return 0xffffffff;
}


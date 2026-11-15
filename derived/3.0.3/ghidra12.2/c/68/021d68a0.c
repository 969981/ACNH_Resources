
uint FUN_021d68a0(long *param_1)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  uint *puVar5;
  uint uVar6;
  ulong uVar7;
  uint *puVar8;
  char cVar9;
  int *piVar10;
  long lVar11;
  undefined8 uVar12;
  undefined4 local_34;
  undefined4 local_18;
  undefined4 local_14;
  
  puVar3 = PTR_DAT_04bb4138;
  lVar11 = *(long *)PTR_DAT_04bb4138;
  if (lVar11 != 0) {
    (**(code **)(*param_1 + 0x18))(param_1);
    local_34 = FUN_006bd550(param_1[1],0);
    lVar11 = FUN_0079e770(lVar11,&local_34);
    if (lVar11 != 0) {
      uVar12 = *(undefined8 *)puVar3;
      (**(code **)(*param_1 + 0x18))(param_1);
      local_18 = FUN_006bd550(param_1[1],0);
      puVar5 = (uint *)FUN_0079e770(uVar12,&local_18);
      if (puVar5 == (uint *)0x0) {
        return 0;
      }
      uVar6 = *puVar5;
      if (uVar6 == 0) {
        return 0;
      }
      if (puVar5 == (uint *)(ulong)uVar6) {
        return 0;
      }
      puVar8 = (uint *)((long)puVar5 - (long)(ulong)uVar6);
      if (*puVar8 == 0) {
        return 0;
      }
      uVar6 = puVar8[1];
      if (uVar6 == 0) {
        return 0;
      }
      if ((ulong)(ushort)puVar8[2] == 0) {
        return 0;
      }
      lVar11 = 0xc;
      if (*(char *)((long)puVar8 + 10) != '\0') {
        lVar11 = 0x1c;
      }
      lVar11 = (long)puVar8 + lVar11 + (ulong)(ushort)puVar8[2] * 8;
      if (lVar11 == 0) {
        return 0;
      }
      uVar2 = 0;
      if ((ulong)uVar6 != 0) {
        uVar2 = (uint)((ulong)((long)puVar5 - lVar11) / (ulong)uVar6);
      }
      if (*puVar8 <= uVar2) {
        uVar2 = 0xffffffff;
      }
      if (*(uint *)PTR_DAT_04bc28c8 <= uVar2) {
        return 0;
      }
      uVar6 = (uint)*(ushort *)(*(long *)(PTR_DAT_04bc28c8 + 8) + (long)(int)uVar2 * 2);
LAB_021d6ae4:
      if (uVar6 < 4) {
        return uVar6;
      }
      return 0;
    }
  }
  uVar12 = *(undefined8 *)PTR_DAT_04bb4130;
  (**(code **)(*param_1 + 0x18))(param_1);
  local_14 = FUN_006bd550(param_1[1],0);
  puVar5 = (uint *)FUN_0079e4d0(uVar12,&local_14);
  puVar4 = PTR_DAT_04bb40a8;
  puVar3 = PTR_DAT_04bb40a0;
  if (puVar5 == (uint *)0x0) {
    return 0;
  }
  if (*puVar5 == 0) {
    return 0;
  }
  cVar9 = *PTR_DAT_04bb40a0;
  do {
    if (cVar9 == '\0') {
      cVar9 = '\x01';
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
      uVar6 = *(uint *)(puVar4 + 0xc);
      if (-1 < (int)uVar6) {
        if ((uint *)((ulong)uVar6 + (long)puVar5) == (uint *)0x0) {
          return 0;
        }
        uVar6 = *(uint *)((ulong)uVar6 + (long)puVar5);
        goto LAB_021d6ae4;
      }
      if (uVar6 != 0xffffffff) {
        return 0;
      }
    }
    puVar8 = (uint *)(ulong)*puVar5;
    if (*puVar5 == 0) {
      return 0;
    }
    if (puVar5 == puVar8) {
      return 0;
    }
    lVar11 = 0xc;
    if (*(char *)((long)puVar5 + (10 - (long)puVar8)) != '\0') {
      lVar11 = 0x1c;
    }
    lVar11 = (long)puVar5 + (lVar11 - (long)puVar8);
    if (lVar11 == 0) {
      return 0;
    }
    uVar7 = (ulong)*(ushort *)((long)puVar5 + (8 - (long)puVar8));
    *(undefined4 *)(puVar4 + 0xc) = 0xfffffffe;
    if (uVar7 == 0) {
      return 0;
    }
    piVar10 = (int *)(lVar11 + 4);
    while (piVar10[-1] != 0x23e7c2a0) {
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
    *(int *)(puVar4 + 0xc) = iVar1;
    if (*puVar5 == 0) {
      return 0;
    }
  } while( true );
}


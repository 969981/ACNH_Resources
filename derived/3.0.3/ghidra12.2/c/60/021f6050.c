
void FUN_021f6050(undefined4 *param_1,long *param_2)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined *puVar4;
  undefined *puVar5;
  uint *puVar6;
  char cVar7;
  undefined2 uVar8;
  ulong uVar9;
  uint *puVar10;
  int *piVar11;
  long lVar12;
  undefined8 uVar13;
  undefined4 local_34;
  
  puVar4 = PTR_DAT_04bb4138;
  lVar12 = *(long *)PTR_DAT_04bb4138;
  if (lVar12 != 0) {
    (**(code **)(*param_2 + 0x18))(param_2);
    local_34 = FUN_006bd550(param_2[1],0);
    lVar12 = FUN_0079e770(lVar12,&local_34);
    if (lVar12 != 0) {
      uVar13 = *(undefined8 *)puVar4;
      (**(code **)(*param_2 + 0x18))(param_2);
      local_34 = FUN_006bd550(param_2[1],0);
      puVar6 = (uint *)FUN_0079e770(uVar13,&local_34);
      puVar5 = PTR_DAT_04bb40b8;
      puVar4 = PTR_DAT_04bb40b0;
      if (puVar6 == (uint *)0x0) goto LAB_021f6338;
      if (*puVar6 != 0) {
        cVar7 = *PTR_DAT_04bb40b0;
        do {
          if (cVar7 == '\0') {
            cVar7 = '\x01';
            *(undefined8 *)puVar5 = 0xffffffffffffffff;
            *(undefined8 *)(puVar5 + 8) = 0xffffffffffffffff;
            *puVar4 = 1;
            *(undefined4 *)(puVar5 + 0xa0) = 0xffffffff;
            *(undefined8 *)(puVar5 + 0x10) = 0xffffffffffffffff;
            *(undefined8 *)(puVar5 + 0x18) = 0xffffffffffffffff;
            *(undefined8 *)(puVar5 + 0x20) = 0xffffffffffffffff;
            *(undefined8 *)(puVar5 + 0x28) = 0xffffffffffffffff;
            *(undefined8 *)(puVar5 + 0x30) = 0xffffffffffffffff;
            *(undefined8 *)(puVar5 + 0x38) = 0xffffffffffffffff;
            *(undefined8 *)(puVar5 + 0x40) = 0xffffffffffffffff;
            *(undefined8 *)(puVar5 + 0x48) = 0xffffffffffffffff;
            *(undefined8 *)(puVar5 + 0x50) = 0xffffffffffffffff;
            *(undefined8 *)(puVar5 + 0x58) = 0xffffffffffffffff;
            *(undefined8 *)(puVar5 + 0x60) = 0xffffffffffffffff;
            *(undefined8 *)(puVar5 + 0x68) = 0xffffffffffffffff;
            *(undefined8 *)(puVar5 + 0x70) = 0xffffffffffffffff;
            *(undefined8 *)(puVar5 + 0x78) = 0xffffffffffffffff;
            *(undefined8 *)(puVar5 + 0x80) = 0xffffffffffffffff;
            *(undefined8 *)(puVar5 + 0x88) = 0xffffffffffffffff;
            *(undefined8 *)(puVar5 + 0x90) = 0xffffffffffffffff;
            *(undefined8 *)(puVar5 + 0x98) = 0xffffffffffffffff;
          }
          else {
            uVar3 = *(uint *)(puVar5 + 0x3c);
            if (-1 < (int)uVar3) goto LAB_021f634c;
            if (uVar3 != 0xffffffff) goto LAB_021f635c;
          }
          puVar10 = (uint *)(ulong)*puVar6;
          uVar8 = 0;
          if ((*puVar6 == 0) || (puVar6 == puVar10)) goto LAB_021f6360;
          lVar12 = 0xc;
          if (*(char *)((long)puVar6 + (10 - (long)puVar10)) != '\0') {
            lVar12 = 0x1c;
          }
          lVar12 = (long)puVar6 + (lVar12 - (long)puVar10);
          if (lVar12 == 0) goto LAB_021f635c;
          uVar9 = (ulong)*(ushort *)((long)puVar6 + (8 - (long)puVar10));
          *(undefined4 *)(puVar5 + 0x3c) = 0xfffffffe;
          uVar8 = 0;
          if (uVar9 == 0) goto LAB_021f6360;
          piVar11 = (int *)(lVar12 + 4);
          while (piVar11[-1] != 0xf640691) {
            piVar11 = piVar11 + 2;
            uVar9 = uVar9 - 1;
            if (uVar9 == 0) {
              uVar8 = 0;
              goto LAB_021f6360;
            }
          }
          iVar1 = 0;
          if (*piVar11 != -1) {
            iVar1 = *piVar11;
          }
          *(int *)(puVar5 + 0x3c) = iVar1;
        } while (*puVar6 != 0);
        uVar8 = 0;
        goto LAB_021f6360;
      }
      goto LAB_021f635c;
    }
  }
  puVar4 = PTR_DAT_04bb4130;
  lVar12 = *(long *)PTR_DAT_04bb4130;
  if (lVar12 == 0) {
LAB_021f6338:
    uVar2 = *(undefined4 *)(PTR_DAT_04bb37e0 + 4);
    *param_1 = *(undefined4 *)PTR_DAT_04bb37e0;
    param_1[1] = uVar2;
    return;
  }
  (**(code **)(*param_2 + 0x18))(param_2);
  local_34 = FUN_006bd550(param_2[1],0);
  lVar12 = FUN_0079e4d0(lVar12,&local_34);
  if (lVar12 == 0) goto LAB_021f6338;
  uVar13 = *(undefined8 *)puVar4;
  (**(code **)(*param_2 + 0x18))(param_2);
  local_34 = FUN_006bd550(param_2[1],0);
  puVar6 = (uint *)FUN_0079e4d0(uVar13,&local_34);
  puVar5 = PTR_DAT_04bb40a8;
  puVar4 = PTR_DAT_04bb40a0;
  if (puVar6 == (uint *)0x0) goto LAB_021f6338;
  if (*puVar6 != 0) {
    cVar7 = *PTR_DAT_04bb40a0;
    do {
      if (cVar7 == '\0') {
        cVar7 = '\x01';
        *(undefined8 *)puVar5 = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 8) = 0xffffffffffffffff;
        *puVar4 = 1;
        *(undefined8 *)(puVar5 + 0x70) = 0xffffffffffffffff;
        *(undefined4 *)(puVar5 + 0x78) = 0xffffffff;
        *(undefined8 *)(puVar5 + 0x10) = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 0x18) = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 0x20) = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 0x28) = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 0x30) = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 0x38) = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 0x40) = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 0x48) = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 0x50) = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 0x58) = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 0x60) = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 0x68) = 0xffffffffffffffff;
      }
      else {
        uVar3 = *(uint *)(puVar5 + 0x28);
        if (-1 < (int)uVar3) goto LAB_021f634c;
        if (uVar3 != 0xffffffff) goto LAB_021f635c;
      }
      puVar10 = (uint *)(ulong)*puVar6;
      uVar8 = 0;
      if ((*puVar6 == 0) || (puVar6 == puVar10)) goto LAB_021f6360;
      lVar12 = 0xc;
      if (*(char *)((long)puVar6 + (10 - (long)puVar10)) != '\0') {
        lVar12 = 0x1c;
      }
      lVar12 = (long)puVar6 + (lVar12 - (long)puVar10);
      if (lVar12 == 0) goto LAB_021f635c;
      uVar9 = (ulong)*(ushort *)((long)puVar6 + (8 - (long)puVar10));
      *(undefined4 *)(puVar5 + 0x28) = 0xfffffffe;
      uVar8 = 0;
      if (uVar9 == 0) goto LAB_021f6360;
      piVar11 = (int *)(lVar12 + 4);
      while (piVar11[-1] != 0xf640691) {
        piVar11 = piVar11 + 2;
        uVar9 = uVar9 - 1;
        if (uVar9 == 0) {
          uVar8 = 0;
          goto LAB_021f6360;
        }
      }
      iVar1 = 0;
      if (*piVar11 != -1) {
        iVar1 = *piVar11;
      }
      *(int *)(puVar5 + 0x28) = iVar1;
    } while (*puVar6 != 0);
    uVar8 = 0;
    goto LAB_021f6360;
  }
  goto LAB_021f635c;
LAB_021f634c:
  if ((undefined2 *)((ulong)uVar3 + (long)puVar6) != (undefined2 *)0x0) {
    uVar8 = *(undefined2 *)((ulong)uVar3 + (long)puVar6);
    goto LAB_021f6360;
  }
LAB_021f635c:
  uVar8 = 0;
LAB_021f6360:
  *(undefined2 *)param_1 = uVar8;
  *(undefined2 *)((long)param_1 + 2) = 0;
  param_1[1] = 0;
  FUN_0277d4ac(param_1);
  return;
}


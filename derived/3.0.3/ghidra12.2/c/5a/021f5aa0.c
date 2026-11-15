
void FUN_021f5aa0(undefined4 *param_1,long *param_2)

{
  int iVar1;
  long lVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined *puVar5;
  undefined *puVar6;
  uint *puVar7;
  char cVar8;
  undefined2 uVar9;
  ulong uVar10;
  uint *puVar11;
  int *piVar12;
  undefined8 uVar13;
  undefined4 local_14;
  
  uVar13 = *(undefined8 *)PTR_DAT_04bb4138;
  (**(code **)(*param_2 + 0x18))();
  local_14 = FUN_006bd550(param_2[1],0);
  puVar7 = (uint *)FUN_0079e770(uVar13,&local_14);
  puVar6 = PTR_DAT_04bb40b8;
  puVar5 = PTR_DAT_04bb40b0;
  if (puVar7 == (uint *)0x0) {
    uVar3 = *(undefined4 *)(PTR_DAT_04bb37e0 + 4);
    *param_1 = *(undefined4 *)PTR_DAT_04bb37e0;
    param_1[1] = uVar3;
  }
  else {
    if (*puVar7 == 0) {
LAB_021f5c10:
      uVar9 = 0;
    }
    else {
      cVar8 = *PTR_DAT_04bb40b0;
      do {
        if (cVar8 == '\0') {
          cVar8 = '\x01';
          *(undefined8 *)puVar6 = 0xffffffffffffffff;
          *(undefined8 *)(puVar6 + 8) = 0xffffffffffffffff;
          *puVar5 = 1;
          *(undefined4 *)(puVar6 + 0xa0) = 0xffffffff;
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
          *(undefined8 *)(puVar6 + 0x60) = 0xffffffffffffffff;
          *(undefined8 *)(puVar6 + 0x68) = 0xffffffffffffffff;
          *(undefined8 *)(puVar6 + 0x70) = 0xffffffffffffffff;
          *(undefined8 *)(puVar6 + 0x78) = 0xffffffffffffffff;
          *(undefined8 *)(puVar6 + 0x80) = 0xffffffffffffffff;
          *(undefined8 *)(puVar6 + 0x88) = 0xffffffffffffffff;
          *(undefined8 *)(puVar6 + 0x90) = 0xffffffffffffffff;
          *(undefined8 *)(puVar6 + 0x98) = 0xffffffffffffffff;
        }
        else {
          uVar4 = *(uint *)(puVar6 + 0x34);
          if (-1 < (int)uVar4) {
            if ((undefined2 *)((ulong)uVar4 + (long)puVar7) == (undefined2 *)0x0) goto LAB_021f5c10;
            uVar9 = *(undefined2 *)((ulong)uVar4 + (long)puVar7);
            goto LAB_021f5c14;
          }
          if (uVar4 != 0xffffffff) goto LAB_021f5c10;
        }
        puVar11 = (uint *)(ulong)*puVar7;
        uVar9 = 0;
        if ((*puVar7 == 0) || (puVar7 == puVar11)) goto LAB_021f5c14;
        lVar2 = 0xc;
        if (*(char *)((long)puVar7 + (10 - (long)puVar11)) != '\0') {
          lVar2 = 0x1c;
        }
        lVar2 = (long)puVar7 + (lVar2 - (long)puVar11);
        if (lVar2 == 0) goto LAB_021f5c10;
        uVar10 = (ulong)*(ushort *)((long)puVar7 + (8 - (long)puVar11));
        *(undefined4 *)(puVar6 + 0x34) = 0xfffffffe;
        uVar9 = 0;
        if (uVar10 == 0) goto LAB_021f5c14;
        piVar12 = (int *)(lVar2 + 4);
        while (piVar12[-1] != 0x71bf253b) {
          piVar12 = piVar12 + 2;
          uVar10 = uVar10 - 1;
          if (uVar10 == 0) {
            uVar9 = 0;
            goto LAB_021f5c14;
          }
        }
        iVar1 = 0;
        if (*piVar12 != -1) {
          iVar1 = *piVar12;
        }
        *(int *)(puVar6 + 0x34) = iVar1;
      } while (*puVar7 != 0);
      uVar9 = 0;
    }
LAB_021f5c14:
    *(undefined2 *)param_1 = uVar9;
    *(undefined2 *)((long)param_1 + 2) = 0;
    param_1[1] = 0;
    FUN_0277d4ac(param_1);
  }
  return;
}



undefined8 FUN_01b61690(undefined2 *param_1,undefined1 *param_2,long *param_3)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined1 uVar5;
  uint *puVar6;
  undefined2 uVar7;
  ulong uVar8;
  undefined2 *puVar9;
  undefined1 uVar10;
  int *piVar11;
  char cVar12;
  uint *puVar13;
  long lVar14;
  undefined4 local_38;
  undefined4 local_34;
  
  lVar14 = *(long *)PTR_DAT_04bb4138;
  if (lVar14 != 0) {
    (**(code **)(*param_3 + 0x18))(param_3);
    local_38 = FUN_006bd550(param_3[1],0);
    puVar6 = (uint *)FUN_0079e770(lVar14,&local_38);
    puVar4 = PTR_DAT_04bb40b8;
    puVar3 = PTR_DAT_04bb40b0;
    if (puVar6 != (uint *)0x0) {
      if (*puVar6 == 0) {
LAB_01b61930:
        uVar7 = 0;
        uVar10 = 1;
      }
      else {
        cVar12 = *PTR_DAT_04bb40b0;
        while (cVar12 == '\0') {
          cVar12 = '\x01';
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
LAB_01b61770:
          puVar13 = (uint *)(ulong)*puVar6;
          uVar7 = 0;
          uVar10 = 1;
          if ((*puVar6 == 0) || (puVar6 == puVar13)) goto LAB_01b61980;
          lVar14 = 0xc;
          if (*(char *)((long)puVar6 + (10 - (long)puVar13)) != '\0') {
            lVar14 = 0x1c;
          }
          lVar14 = (long)puVar6 + (lVar14 - (long)puVar13);
          if (lVar14 == 0) goto LAB_01b61940;
          uVar8 = (ulong)*(ushort *)((long)puVar6 + (8 - (long)puVar13));
          *(undefined4 *)(puVar4 + 0x58) = 0xfffffffe;
          if (uVar8 == 0) goto LAB_01b61930;
          piVar11 = (int *)(lVar14 + 4);
          while (piVar11[-1] != 0x54706054) {
            piVar11 = piVar11 + 2;
            uVar8 = uVar8 - 1;
            if (uVar8 == 0) goto LAB_01b61930;
          }
          uVar7 = 0;
          iVar1 = 0;
          if (*piVar11 != -1) {
            iVar1 = *piVar11;
          }
          *(int *)(puVar4 + 0x58) = iVar1;
          uVar10 = 1;
          if (*puVar6 == 0) goto LAB_01b61980;
        }
        uVar2 = *(uint *)(puVar4 + 0x58);
        if ((int)uVar2 < 0) {
          if (uVar2 == 0xffffffff) goto LAB_01b61770;
LAB_01b61940:
          uVar7 = 0;
          uVar10 = 1;
        }
        else {
          puVar9 = (undefined2 *)((ulong)uVar2 + (long)puVar6);
          uVar10 = 1;
          uVar5 = 1;
          if (puVar9 == (undefined2 *)0x0) {
            uVar7 = 0;
          }
          else {
LAB_01b61970:
            uVar10 = uVar5;
            uVar7 = *puVar9;
          }
        }
      }
      goto LAB_01b61980;
    }
  }
  lVar14 = *(long *)PTR_DAT_04bb4130;
  if (lVar14 == 0) {
    return 0;
  }
  (**(code **)(*param_3 + 0x18))(param_3);
  local_34 = FUN_006bd550(param_3[1],0);
  puVar6 = (uint *)FUN_0079e4d0(lVar14,&local_34);
  puVar4 = PTR_DAT_04bb40a8;
  puVar3 = PTR_DAT_04bb40a0;
  if (puVar6 == (uint *)0x0) {
    return 0;
  }
  if (*puVar6 == 0) {
LAB_01b6197c:
    uVar7 = 0;
    uVar10 = 0;
  }
  else {
    cVar12 = *PTR_DAT_04bb40a0;
    do {
      if (cVar12 == '\0') {
        cVar12 = '\x01';
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
        if (-1 < (int)uVar2) {
          uVar10 = 0;
          puVar9 = (undefined2 *)((ulong)uVar2 + (long)puVar6);
          uVar7 = 0;
          uVar5 = 0;
          if (puVar9 != (undefined2 *)0x0) goto LAB_01b61970;
          break;
        }
        if (uVar2 != 0xffffffff) goto LAB_01b6197c;
      }
      puVar13 = (uint *)(ulong)*puVar6;
      uVar7 = 0;
      if (*puVar6 == 0) {
        uVar10 = 0;
        break;
      }
      uVar10 = 0;
      if (puVar6 == puVar13) break;
      lVar14 = 0xc;
      if (*(char *)((long)puVar6 + (10 - (long)puVar13)) != '\0') {
        lVar14 = 0x1c;
      }
      lVar14 = (long)puVar6 + (lVar14 - (long)puVar13);
      if (lVar14 == 0) {
        uVar7 = 0;
        uVar10 = 0;
        break;
      }
      uVar8 = (ulong)*(ushort *)((long)puVar6 + (8 - (long)puVar13));
      *(undefined4 *)(puVar4 + 0x40) = 0xfffffffe;
      if (uVar8 == 0) goto LAB_01b6197c;
      piVar11 = (int *)(lVar14 + 4);
      while (piVar11[-1] != 0x54706054) {
        piVar11 = piVar11 + 2;
        uVar8 = uVar8 - 1;
        if (uVar8 == 0) goto LAB_01b6197c;
      }
      uVar7 = 0;
      uVar10 = 0;
      iVar1 = 0;
      if (*piVar11 != -1) {
        iVar1 = *piVar11;
      }
      *(int *)(puVar4 + 0x40) = iVar1;
    } while (*puVar6 != 0);
  }
LAB_01b61980:
  *param_1 = uVar7;
  *param_2 = uVar10;
  return 1;
}


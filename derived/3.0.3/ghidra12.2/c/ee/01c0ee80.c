
undefined8 FUN_01c0ee80(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  int iVar1;
  long lVar2;
  uint uVar3;
  undefined *puVar4;
  undefined *puVar5;
  bool bVar6;
  undefined4 uVar7;
  uint *puVar8;
  undefined4 *puVar9;
  char cVar10;
  uint *puVar11;
  ulong uVar12;
  int *piVar13;
  undefined8 uVar14;
  undefined *local_70;
  undefined8 uStack_68;
  undefined *local_60;
  char *pcStack_58;
  
  uVar14 = *(undefined8 *)PTR_DAT_04bb4130;
  uVar7 = FUN_006bd550(param_3,0);
  local_60 = (undefined *)CONCAT44(local_60._4_4_,uVar7);
  puVar8 = (uint *)FUN_0079e4d0(uVar14,&local_60);
  puVar5 = PTR_DAT_04bb40a8;
  puVar4 = PTR_DAT_04bb40a0;
  if ((puVar8 == (uint *)0x0) || (*puVar8 == 0)) {
    return 0;
  }
  cVar10 = *PTR_DAT_04bb40a0;
  do {
    if (cVar10 == '\0') {
      cVar10 = '\x01';
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
      uVar3 = *(uint *)(puVar5 + 0x54);
      if (-1 < (int)uVar3) {
        if ((char *)((ulong)uVar3 + (long)puVar8) == (char *)0x0) {
          return 0;
        }
        if (*(char *)((ulong)uVar3 + (long)puVar8) == '\0') {
          return 0;
        }
        local_70 = PTR_DAT_04bb2020 + 0x10;
        pcStack_58 = "STR_SNpcHonorificNameSan";
        uStack_68 = param_3;
        local_60 = local_70;
        uVar12 = (**(code **)*param_4)(param_4,param_1,&local_60,&local_70,1);
        if ((uVar12 & 1) == 0) {
          (**(code **)(*param_1 + 0x38))(param_1);
          return 0;
        }
        puVar9 = (undefined4 *)(**(code **)(*param_1 + 0x40))(param_1);
        uVar7 = FUN_021d6da0(param_3);
        *puVar9 = uVar7;
        if (*puVar8 == 0) goto LAB_01c0f16c;
        cVar10 = *puVar4;
        break;
      }
      if (uVar3 != 0xffffffff) {
        return 0;
      }
    }
    puVar11 = (uint *)(ulong)*puVar8;
    if (*puVar8 == 0) {
      return 0;
    }
    if (puVar8 == puVar11) {
      return 0;
    }
    lVar2 = 0xc;
    if (*(char *)((long)puVar8 + (10 - (long)puVar11)) != '\0') {
      lVar2 = 0x1c;
    }
    lVar2 = (long)puVar8 + (lVar2 - (long)puVar11);
    if (lVar2 == 0) {
      return 0;
    }
    uVar12 = (ulong)*(ushort *)((long)puVar8 + (8 - (long)puVar11));
    *(undefined4 *)(puVar5 + 0x54) = 0xfffffffe;
    if (uVar12 == 0) {
      return 0;
    }
    piVar13 = (int *)(lVar2 + 4);
    while (piVar13[-1] != 0x7d60b3d) {
      piVar13 = piVar13 + 2;
      uVar12 = uVar12 - 1;
      if (uVar12 == 0) {
        return 0;
      }
    }
    iVar1 = 0;
    if (*piVar13 != -1) {
      iVar1 = *piVar13;
    }
    *(int *)(puVar5 + 0x54) = iVar1;
    if (*puVar8 == 0) {
      return 0;
    }
  } while( true );
LAB_01c0f070:
  if (cVar10 == '\0') {
    cVar10 = '\x01';
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
    uVar3 = *(uint *)(puVar5 + 0x5c);
    if (-1 < (int)uVar3) {
      if ((char *)((ulong)uVar3 + (long)puVar8) != (char *)0x0) {
        bVar6 = *(char *)((ulong)uVar3 + (long)puVar8) == '\0';
        goto LAB_01c0f170;
      }
LAB_01c0f16c:
      bVar6 = true;
LAB_01c0f170:
      *(bool *)param_2 = bVar6;
      return 1;
    }
    if (uVar3 != 0xffffffff) goto LAB_01c0f16c;
  }
  puVar11 = (uint *)(ulong)*puVar8;
  bVar6 = true;
  if ((*puVar8 == 0) || (puVar8 == puVar11)) goto LAB_01c0f170;
  lVar2 = 0xc;
  if (*(char *)((long)puVar8 + (10 - (long)puVar11)) != '\0') {
    lVar2 = 0x1c;
  }
  lVar2 = (long)puVar8 + (lVar2 - (long)puVar11);
  if (lVar2 == 0) goto LAB_01c0f16c;
  uVar12 = (ulong)*(ushort *)((long)puVar8 + (8 - (long)puVar11));
  *(undefined4 *)(puVar5 + 0x5c) = 0xfffffffe;
  if (uVar12 == 0) goto LAB_01c0f16c;
  piVar13 = (int *)(lVar2 + 4);
  while (piVar13[-1] != -0x47d24c92) {
    piVar13 = piVar13 + 2;
    uVar12 = uVar12 - 1;
    if (uVar12 == 0) goto LAB_01c0f16c;
  }
  iVar1 = 0;
  if (*piVar13 != -1) {
    iVar1 = *piVar13;
  }
  *(int *)(puVar5 + 0x5c) = iVar1;
  if (*puVar8 == 0) goto LAB_01c0f16c;
  goto LAB_01c0f070;
}


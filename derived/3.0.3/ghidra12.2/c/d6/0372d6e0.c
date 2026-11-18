
void FUN_0372d6e0(undefined2 *param_1,long *param_2)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  uint *puVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined2 uVar8;
  char cVar9;
  uint *puVar10;
  int *piVar11;
  long lVar12;
  undefined4 local_a8;
  undefined2 local_a4;
  undefined1 local_a2;
  undefined1 local_a1;
  undefined4 local_a0;
  undefined2 local_9c;
  undefined1 local_9a;
  undefined1 local_99;
  undefined4 local_98;
  undefined2 local_94;
  undefined1 local_92;
  undefined1 local_91;
  undefined4 local_90;
  undefined2 local_8c;
  undefined1 local_8a;
  undefined1 local_89;
  undefined4 local_88;
  undefined2 local_84;
  undefined1 local_82;
  undefined1 local_81;
  undefined4 local_80;
  undefined2 local_74;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_24;
  
  lVar12 = *(long *)PTR_DAT_04bb4130;
  if (lVar12 == 0) {
    return;
  }
  local_24 = 0;
  local_74 = 0xffff;
  local_70 = 0xfffe;
  FUN_0277d4ac(&local_70);
  local_68 = 0xfffe;
  FUN_0277d4ac(&local_68);
  local_60 = 0xfffe;
  FUN_0277d4ac(&local_60);
  local_58 = 0xfffe;
  FUN_0277d4ac(&local_58);
  local_50 = 0xfffe;
  FUN_0277d4ac(&local_50);
  local_48 = 0xfffe;
  FUN_0277d4ac(&local_48);
  (**(code **)(*param_2 + 0x18))(param_2);
  local_a8 = FUN_006bd550(param_2[1],0);
  puVar5 = (uint *)FUN_0079e4d0(lVar12,&local_a8);
  uVar6 = FUN_02172fc0(lVar12,&local_24,param_2);
  puVar4 = PTR_DAT_04bb40a8;
  puVar3 = PTR_DAT_04bb40a0;
  if ((uVar6 & 1) == 0) {
    if (puVar5 == (uint *)0x0) {
      return;
    }
    if (*puVar5 == 0) {
      return;
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
        uVar2 = *puVar5;
      }
      else {
        uVar2 = *(uint *)(puVar4 + 0x24);
        uVar6 = (ulong)uVar2;
        if (-1 < (int)uVar2) {
          if ((short *)(uVar6 + (long)puVar5) == (short *)0x0) {
            return;
          }
          if (*(short *)(uVar6 + (long)puVar5) == -2) {
            return;
          }
          uVar7 = *(undefined8 *)PTR_DAT_04bb4890;
          if (*puVar5 == 0) goto LAB_0372da44;
          uVar8 = 0xfffe;
          goto LAB_0372d9b8;
        }
        if (uVar2 != 0xffffffff) {
          return;
        }
        uVar2 = *puVar5;
      }
      if (uVar2 == 0) {
        return;
      }
      puVar10 = (uint *)(ulong)uVar2;
      if (puVar5 == puVar10) {
        return;
      }
      lVar12 = 0xc;
      if (*(char *)((long)puVar5 + (10 - (long)puVar10)) != '\0') {
        lVar12 = 0x1c;
      }
      lVar12 = (long)puVar5 + (lVar12 - (long)puVar10);
      if (lVar12 == 0) {
        return;
      }
      uVar6 = (ulong)*(ushort *)((long)puVar5 + (8 - (long)puVar10));
      *(undefined4 *)(puVar4 + 0x24) = 0xfffffffe;
      if (uVar6 == 0) {
        return;
      }
      piVar11 = (int *)(lVar12 + 4);
      while (piVar11[-1] != -0x69ee36d7) {
        piVar11 = piVar11 + 2;
        uVar6 = uVar6 - 1;
        if (uVar6 == 0) {
          return;
        }
      }
      iVar1 = 0;
      if (*piVar11 != -1) {
        iVar1 = *piVar11;
      }
      *(int *)(puVar4 + 0x24) = iVar1;
      if (*puVar5 == 0) {
        return;
      }
    } while( true );
  }
  FUN_0215db20(&local_a8,*(undefined8 *)PTR_DAT_04bb4890,local_24);
  goto LAB_0372d7c8;
LAB_0372d9b8:
  if ((int)uVar6 < 0) {
    if ((int)uVar6 != -1) goto LAB_0372da44;
    puVar10 = (uint *)(ulong)*puVar5;
    if ((*puVar5 == 0) || (puVar5 == puVar10)) goto LAB_0372da48;
    lVar12 = 0xc;
    if (*(char *)((long)puVar5 + (10 - (long)puVar10)) != '\0') {
      lVar12 = 0x1c;
    }
    lVar12 = (long)puVar5 + (lVar12 - (long)puVar10);
    if (lVar12 == 0) goto LAB_0372da44;
    uVar6 = (ulong)*(ushort *)((long)puVar5 + (8 - (long)puVar10));
    *(undefined4 *)(puVar4 + 0x24) = 0xfffffffe;
    if (uVar6 == 0) goto LAB_0372da44;
    puVar10 = (uint *)(lVar12 + 4);
    while (puVar10[-1] != 0x9611c929) {
      puVar10 = puVar10 + 2;
      uVar6 = uVar6 - 1;
      if (uVar6 == 0) goto LAB_0372da44;
    }
    uVar2 = 0;
    if (*puVar10 != 0xffffffff) {
      uVar2 = *puVar10;
    }
    uVar6 = (ulong)uVar2;
    *(uint *)(puVar4 + 0x24) = uVar2;
    if (*puVar5 == 0) goto LAB_0372da44;
    goto LAB_0372d9b8;
  }
  if ((undefined2 *)((long)puVar5 + uVar6) != (undefined2 *)0x0) {
    uVar8 = *(undefined2 *)((long)puVar5 + uVar6);
    goto LAB_0372da48;
  }
LAB_0372da44:
  uVar8 = 0xfffe;
LAB_0372da48:
  FUN_0215e3b0(&local_a8,uVar7,uVar8);
LAB_0372d7c8:
  *param_1 = local_a4;
  *(undefined1 *)(param_1 + 1) = local_a2;
  *(undefined1 *)((long)param_1 + 3) = local_a1;
  *(undefined4 *)(param_1 + 2) = local_a0;
  param_1[4] = local_9c;
  *(undefined1 *)(param_1 + 5) = local_9a;
  *(undefined1 *)((long)param_1 + 0xb) = local_99;
  *(undefined4 *)(param_1 + 6) = local_98;
  param_1[0xc] = local_94;
  *(undefined1 *)(param_1 + 0xd) = local_92;
  *(undefined1 *)((long)param_1 + 0x1b) = local_91;
  *(undefined4 *)(param_1 + 0xe) = local_90;
  param_1[0x10] = local_8c;
  *(undefined1 *)(param_1 + 0x11) = local_8a;
  *(undefined1 *)((long)param_1 + 0x23) = local_89;
  *(undefined4 *)(param_1 + 0x12) = local_88;
  param_1[0x18] = local_84;
  *(undefined1 *)(param_1 + 0x19) = local_82;
  *(undefined1 *)((long)param_1 + 0x33) = local_81;
  *(undefined4 *)(param_1 + 0x1a) = local_80;
  return;
}


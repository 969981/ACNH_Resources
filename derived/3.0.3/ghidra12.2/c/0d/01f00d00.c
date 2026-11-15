
void FUN_01f00d00(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  uint *puVar6;
  int iVar7;
  char cVar8;
  byte bVar9;
  ulong uVar10;
  uint *puVar11;
  int *piVar12;
  undefined4 *puVar13;
  undefined4 local_1e8;
  undefined4 local_1e0 [4];
  long local_1d0;
  undefined4 local_17c;
  undefined2 local_104;
  undefined1 local_102;
  undefined1 local_101;
  undefined4 local_100;
  undefined4 local_f0;
  undefined4 local_34;
  
  FUN_021dd680(*(undefined8 *)(param_1 + 8));
  FUN_01e63f1c(local_1e0);
  *(long *)(param_1 + 0x12840) = param_1;
  puVar2 = PTR_DAT_04bb3968;
  local_1e0[0] = 10;
  local_f0 = 1;
  local_17c = 1;
  *(undefined1 **)(param_1 + 0x12848) = &LAB_01f02ddc;
  *(undefined8 *)(param_1 + 0x12850) = 0;
  puVar4 = PTR_DAT_04bc1568;
  puVar3 = PTR_DAT_04bc1560;
  lVar5 = *(long *)puVar2;
  local_1d0 = param_1 + 0x12838;
  if (lVar5 != 0) {
    uVar1 = *(uint *)(param_1 + 0xe8a8);
    if ((int)*(uint *)(lVar5 + 0x16ac8) < 1) {
      if ((((*(long *)(lVar5 + 0x169b8) != 0) &&
           (puVar6 = *(uint **)(*(long *)(lVar5 + 0x169b8) + 8), puVar6 != (uint *)0x0)) &&
          ((*(uint *)(lVar5 + 0x169d0) <= uVar1 ||
           (*(char *)(*(long *)(lVar5 + 0x169d8) + (long)(int)uVar1) != '\0')))) &&
         (((uVar1 < *puVar6 && (puVar6[1] != 0)) && ((ushort)puVar6[2] != 0)))) {
        iVar7 = 0xc;
        if (*(char *)((long)puVar6 + 10) != '\0') {
          iVar7 = 0x1c;
        }
        puVar6 = (uint *)((ulong)(puVar6[1] * uVar1 + (uint)(ushort)puVar6[2] * 8 + iVar7) +
                         (long)puVar6);
        goto joined_r0x01f00e24;
      }
    }
    else if (uVar1 < *(uint *)(lVar5 + 0x16ac8)) {
      if (*(uint *)(lVar5 + 0x16ab8) <= uVar1) {
        uVar1 = 0;
      }
      puVar6 = *(uint **)(*(long *)(lVar5 + 0x16ac0) + (ulong)uVar1 * 8);
joined_r0x01f00e24:
      if (puVar6 != (uint *)0x0) {
        uVar1 = *puVar6;
        goto joined_r0x01f00e34;
      }
    }
  }
  uVar1 = *(uint *)PTR_DAT_04bc2828;
  puVar6 = (uint *)PTR_DAT_04bc2828;
joined_r0x01f00e34:
  if (uVar1 == 0) {
LAB_01f00f3c:
    bVar9 = 0;
  }
  else {
    cVar8 = *PTR_DAT_04bc1560;
    do {
      if (cVar8 == '\0') {
        cVar8 = '\x01';
        *(undefined8 *)puVar4 = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 8) = 0xffffffffffffffff;
        *puVar3 = 1;
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
        uVar1 = *(uint *)(puVar4 + 0x14);
        if (-1 < (int)uVar1) {
          if ((byte *)((ulong)uVar1 + (long)puVar6) == (byte *)0x0) goto LAB_01f00f3c;
          bVar9 = *(byte *)((ulong)uVar1 + (long)puVar6);
          goto LAB_01f00f40;
        }
        if (uVar1 != 0xffffffff) goto LAB_01f00f3c;
      }
      puVar11 = (uint *)(ulong)*puVar6;
      bVar9 = 0;
      if ((*puVar6 == 0) || (puVar6 == puVar11)) goto LAB_01f00f40;
      lVar5 = 0xc;
      if (*(char *)((long)puVar6 + (10 - (long)puVar11)) != '\0') {
        lVar5 = 0x1c;
      }
      lVar5 = (long)puVar6 + (lVar5 - (long)puVar11);
      if (lVar5 == 0) goto LAB_01f00f3c;
      uVar10 = (ulong)*(ushort *)((long)puVar6 + (8 - (long)puVar11));
      *(undefined4 *)(puVar4 + 0x14) = 0xfffffffe;
      bVar9 = 0;
      if (uVar10 == 0) goto LAB_01f00f40;
      piVar12 = (int *)(lVar5 + 4);
      while (piVar12[-1] != 0x430dbf65) {
        piVar12 = piVar12 + 2;
        uVar10 = uVar10 - 1;
        if (uVar10 == 0) {
          bVar9 = 0;
          goto LAB_01f00f40;
        }
      }
      iVar7 = 0;
      if (*piVar12 != -1) {
        iVar7 = *piVar12;
      }
      *(int *)(puVar4 + 0x14) = iVar7;
    } while (*puVar6 != 0);
    bVar9 = 0;
  }
LAB_01f00f40:
  local_34 = 0;
  local_1e8 = 0;
  if ((bVar9 & 1) == 0) {
    local_1e8 = 0;
    puVar13 = &local_1e8;
    FUN_01efa990(&local_1e8,param_1,*(undefined4 *)(param_1 + 0xe8a8));
    local_102 = local_1e8._2_1_;
    local_101 = local_1e8._3_1_;
  }
  else {
    puVar13 = (undefined4 *)PTR_DAT_04bb37e0;
    local_102 = PTR_DAT_04bb37e0[2];
    local_101 = PTR_DAT_04bb37e0[3];
  }
  local_104 = *(undefined2 *)puVar13;
  local_100 = puVar13[1];
  if (*(int *)(param_1 + 0xaf50) < *(int *)(param_1 + 0xaf54)) {
    FUN_021920b0((int *)(param_1 + 0xaf50),local_1e0);
  }
  return;
}


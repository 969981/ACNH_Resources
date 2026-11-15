
void FUN_01e76e90(long param_1)

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
  undefined4 local_1f0;
  undefined4 local_1e8 [4];
  long local_1d8;
  undefined4 local_184;
  undefined2 local_10c;
  undefined1 local_10a;
  undefined1 local_109;
  undefined4 local_108;
  undefined4 local_f8;
  
  puVar13 = &local_1f0;
  FUN_021dd680(*(undefined8 *)(param_1 + 8));
  FUN_01e63f1c(local_1e8);
  *(long *)(param_1 + 0x12618) = param_1;
  local_1e8[0] = 10;
  local_f8 = 1;
  local_184 = 1;
  *(undefined1 **)(param_1 + 0x12620) = &LAB_01e7a638;
  puVar2 = PTR_DAT_04bb3968;
  *(undefined8 *)(param_1 + 0x12628) = 0;
  puVar4 = PTR_DAT_04bc1568;
  puVar3 = PTR_DAT_04bc1560;
  lVar5 = *(long *)puVar2;
  local_1d8 = param_1 + 0x12610;
  if (lVar5 != 0) {
    uVar1 = *(uint *)(param_1 + 0xb030);
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
        goto joined_r0x01e76fbc;
      }
    }
    else if (uVar1 < *(uint *)(lVar5 + 0x16ac8)) {
      if (*(uint *)(lVar5 + 0x16ab8) <= uVar1) {
        uVar1 = 0;
      }
      puVar6 = *(uint **)(*(long *)(lVar5 + 0x16ac0) + (ulong)uVar1 * 8);
joined_r0x01e76fbc:
      if (puVar6 != (uint *)0x0) {
        uVar1 = *puVar6;
        goto joined_r0x01e76fcc;
      }
    }
  }
  uVar1 = *(uint *)PTR_DAT_04bc2828;
  puVar6 = (uint *)PTR_DAT_04bc2828;
joined_r0x01e76fcc:
  if (uVar1 == 0) {
LAB_01e770cc:
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
          if ((byte *)((ulong)uVar1 + (long)puVar6) == (byte *)0x0) goto LAB_01e770cc;
          bVar9 = *(byte *)((ulong)uVar1 + (long)puVar6);
          goto LAB_01e770d0;
        }
        if (uVar1 != 0xffffffff) goto LAB_01e770cc;
      }
      puVar11 = (uint *)(ulong)*puVar6;
      bVar9 = 0;
      if ((*puVar6 == 0) || (puVar6 == puVar11)) goto LAB_01e770d0;
      lVar5 = 0xc;
      if (*(char *)((long)puVar6 + (10 - (long)puVar11)) != '\0') {
        lVar5 = 0x1c;
      }
      lVar5 = (long)puVar6 + (lVar5 - (long)puVar11);
      if (lVar5 == 0) goto LAB_01e770cc;
      uVar10 = (ulong)*(ushort *)((long)puVar6 + (8 - (long)puVar11));
      *(undefined4 *)(puVar4 + 0x14) = 0xfffffffe;
      bVar9 = 0;
      if (uVar10 == 0) goto LAB_01e770d0;
      piVar12 = (int *)(lVar5 + 4);
      while (piVar12[-1] != 0x430dbf65) {
        piVar12 = piVar12 + 2;
        uVar10 = uVar10 - 1;
        if (uVar10 == 0) {
          bVar9 = 0;
          goto LAB_01e770d0;
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
LAB_01e770d0:
  local_1f0 = 0;
  if ((bVar9 & 1) == 0) {
    local_1f0 = 0;
    FUN_01e6fdd0(&local_1f0,param_1,(uint *)(param_1 + 0xb030));
    local_10a = local_1f0._2_1_;
    local_109 = local_1f0._3_1_;
  }
  else {
    puVar13 = (undefined4 *)PTR_DAT_04bb37e0;
    local_10a = PTR_DAT_04bb37e0[2];
    local_109 = PTR_DAT_04bb37e0[3];
  }
  local_10c = *(undefined2 *)puVar13;
  local_108 = *(undefined4 *)((long)puVar13 + 4);
  if (*(int *)(param_1 + 0xef10) < *(int *)(param_1 + 0xef14)) {
    FUN_021920b0((int *)(param_1 + 0xef10),local_1e8);
  }
  return;
}


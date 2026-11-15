
void FUN_01efa990(undefined4 *param_1,long param_2,uint param_3)

{
  uint uVar1;
  undefined4 uVar2;
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
  undefined8 local_28;
  
  puVar4 = PTR_DAT_04bc1568;
  puVar3 = PTR_DAT_04bc1560;
  lVar5 = *(long *)PTR_DAT_04bb3968;
  if (lVar5 == 0) {
LAB_01efaa68:
    uVar1 = *(uint *)PTR_DAT_04bc2828;
    puVar6 = (uint *)PTR_DAT_04bc2828;
  }
  else {
    if ((int)*(uint *)(lVar5 + 0x16ac8) < 1) {
      if ((((*(long *)(lVar5 + 0x169b8) != 0) &&
           (puVar6 = *(uint **)(*(long *)(lVar5 + 0x169b8) + 8), puVar6 != (uint *)0x0)) &&
          ((*(uint *)(lVar5 + 0x169d0) <= param_3 ||
           (*(char *)(*(long *)(lVar5 + 0x169d8) + (long)(int)param_3) != '\0')))) &&
         (((param_3 < *puVar6 && (puVar6[1] != 0)) && ((ushort)puVar6[2] != 0)))) {
        iVar7 = 0xc;
        if (*(char *)((long)puVar6 + 10) != '\0') {
          iVar7 = 0x1c;
        }
        puVar6 = (uint *)((ulong)(puVar6[1] * param_3 + (uint)(ushort)puVar6[2] * 8 + iVar7) +
                         (long)puVar6);
        if (puVar6 != (uint *)0x0) goto LAB_01efa9f0;
      }
      goto LAB_01efaa68;
    }
    if (*(uint *)(lVar5 + 0x16ac8) <= param_3) goto LAB_01efaa68;
    uVar1 = param_3;
    if (*(uint *)(lVar5 + 0x16ab8) <= param_3) {
      uVar1 = 0;
    }
    puVar6 = *(uint **)(*(long *)(lVar5 + 0x16ac0) + (ulong)uVar1 * 8);
    if (puVar6 == (uint *)0x0) goto LAB_01efaa68;
LAB_01efa9f0:
    uVar1 = *puVar6;
  }
  if (uVar1 != 0) {
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
        uVar1 = *(uint *)(puVar4 + 0xc);
        if (-1 < (int)uVar1) {
          if (((byte *)((ulong)uVar1 + (long)puVar6) != (byte *)0x0) &&
             (bVar9 = *(byte *)((ulong)uVar1 + (long)puVar6), bVar9 < 0x28)) goto LAB_01efab88;
          break;
        }
        if (uVar1 != 0xffffffff) break;
      }
      puVar11 = (uint *)(ulong)*puVar6;
      bVar9 = 2;
      if ((*puVar6 == 0) || (puVar6 == puVar11)) goto LAB_01efab88;
      lVar5 = 0xc;
      if (*(char *)((long)puVar6 + (10 - (long)puVar11)) != '\0') {
        lVar5 = 0x1c;
      }
      lVar5 = (long)puVar6 + (lVar5 - (long)puVar11);
      if (lVar5 == 0) break;
      uVar10 = (ulong)*(ushort *)((long)puVar6 + (8 - (long)puVar11));
      *(undefined4 *)(puVar4 + 0xc) = 0xfffffffe;
      if (uVar10 == 0) break;
      piVar12 = (int *)(lVar5 + 4);
      while (piVar12[-1] != 0x40876b17) {
        piVar12 = piVar12 + 2;
        uVar10 = uVar10 - 1;
        if (uVar10 == 0) goto LAB_01efab84;
      }
      iVar7 = 0;
      if (*piVar12 != -1) {
        iVar7 = *piVar12;
      }
      *(int *)(puVar4 + 0xc) = iVar7;
      if (*puVar6 == 0) break;
    } while( true );
  }
LAB_01efab84:
  bVar9 = 2;
LAB_01efab88:
  uVar2 = *(undefined4 *)(PTR_DAT_04bb37e0 + 4);
  *param_1 = *(undefined4 *)PTR_DAT_04bb37e0;
  param_1[1] = uVar2;
  if (bVar9 != 0xf) {
    if (bVar9 != 0) {
      return;
    }
    FUN_021e9590(&local_28,*(undefined8 *)(param_2 + 8),param_3 == 0xf);
    goto LAB_01efac14;
  }
  if (param_3 == 3) {
    local_28 = 0x38cd;
  }
  else {
    if (param_3 == 2) {
      FUN_021e91f0(&local_28,*(undefined8 *)(param_2 + 8));
      goto LAB_01efac14;
    }
    if (param_3 == 1) {
      FUN_021e8f80(&local_28,*(undefined8 *)(param_2 + 8));
      goto LAB_01efac14;
    }
    local_28 = 0x1ce6;
  }
  FUN_0277d4ac(&local_28);
LAB_01efac14:
  *param_1 = (undefined4)local_28;
  param_1[1] = local_28._4_4_;
  return;
}


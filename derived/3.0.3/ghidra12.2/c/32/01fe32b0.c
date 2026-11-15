
void FUN_01fe32b0(long param_1,uint *param_2,uint *param_3)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  uint *puVar5;
  long lVar6;
  char cVar7;
  ushort uVar8;
  ulong uVar9;
  uint *puVar10;
  int *piVar11;
  uint local_30;
  uint uStack_2c;
  uint local_28;
  uint local_24;
  
  puVar3 = PTR_DAT_04bc23c8;
  puVar2 = PTR_DAT_04bc23c0;
  if (*(int *)(param_1 + 0x124bc) < 0) {
    return;
  }
  lVar6 = *(long *)PTR_DAT_04bb4960;
  if (lVar6 == 0) {
    return;
  }
  uVar1 = *param_3;
  if ((int)*(uint *)(lVar6 + 0x5c0) < 1) {
    if (*(long *)(lVar6 + 0x4b0) == 0) {
      return;
    }
    puVar5 = *(uint **)(*(long *)(lVar6 + 0x4b0) + 8);
    if (puVar5 == (uint *)0x0) {
      return;
    }
    if ((uVar1 < *(uint *)(lVar6 + 0x4c8)) &&
       (*(char *)(*(long *)(lVar6 + 0x4d0) + (long)(int)uVar1) == '\0')) {
      return;
    }
    if (*puVar5 <= uVar1) {
      return;
    }
    if (puVar5[1] == 0) {
      return;
    }
    if ((ushort)puVar5[2] == 0) {
      return;
    }
    iVar4 = 0xc;
    if (*(char *)((long)puVar5 + 10) != '\0') {
      iVar4 = 0x1c;
    }
    puVar5 = (uint *)((ulong)(puVar5[1] * uVar1 + (uint)(ushort)puVar5[2] * 8 + iVar4) +
                     (long)puVar5);
  }
  else {
    if (*(uint *)(lVar6 + 0x5c0) <= uVar1) {
      return;
    }
    if (*(uint *)(lVar6 + 0x5b0) <= uVar1) {
      uVar1 = 0;
    }
    puVar5 = *(uint **)(*(long *)(lVar6 + 0x5b8) + (ulong)uVar1 * 8);
  }
  if (puVar5 == (uint *)0x0) {
    return;
  }
  if (*puVar5 == 0) {
LAB_01fe3478:
    uVar8 = 0xfffe;
LAB_01fe347c:
    local_28 = (uint)uVar8;
    local_24 = 0;
    FUN_0277d4ac(&local_28);
    iVar4 = FUN_0277d6c4(&local_28);
    if (iVar4 == 0x360b) {
      FUN_021ea950(&local_30,*(undefined8 *)(param_1 + 8));
    }
    else {
      iVar4 = FUN_0277d6c4(&local_28);
      if (iVar4 == 0x217d) {
        FUN_021ea800(&local_30,*(undefined8 *)(param_1 + 8));
      }
      else {
        iVar4 = FUN_0277d6c4(&local_28);
        if (iVar4 == 0x39c6) {
          FUN_021ea080(&local_30,*(undefined8 *)(param_1 + 8));
        }
        else {
          iVar4 = FUN_0277d6c4(&local_28);
          if (iVar4 == 0x392e) {
            FUN_021ea1d0(&local_30,*(undefined8 *)(param_1 + 8));
          }
          else {
            iVar4 = FUN_0277d6c4(&local_28);
            if (iVar4 == 0x392f) {
              FUN_021e9c30(&local_30,*(undefined8 *)(param_1 + 8),1);
            }
            else {
              iVar4 = FUN_0277d6c4(&local_28);
              if (iVar4 == 0x1515) {
                FUN_01e3b790(&local_30,*(undefined8 *)(param_1 + 8));
              }
              else {
                local_30 = local_28;
                uStack_2c = local_24;
              }
            }
          }
        }
      }
    }
    *param_2 = local_30;
    param_2[1] = uStack_2c;
    return;
  }
  cVar7 = *PTR_DAT_04bc23c0;
  do {
    if (cVar7 == '\0') {
      cVar7 = '\x01';
      *(undefined8 *)puVar3 = 0xffffffffffffffff;
      *(undefined8 *)(puVar3 + 8) = 0xffffffffffffffff;
      *puVar2 = 1;
      *(undefined8 *)(puVar3 + 0x10) = 0xffffffffffffffff;
      *(undefined8 *)(puVar3 + 0x18) = 0xffffffffffffffff;
      *(undefined8 *)(puVar3 + 0x20) = 0xffffffffffffffff;
      *(undefined8 *)(puVar3 + 0x28) = 0xffffffffffffffff;
      *(undefined8 *)(puVar3 + 0x30) = 0xffffffffffffffff;
      *(undefined8 *)(puVar3 + 0x38) = 0xffffffffffffffff;
    }
    else {
      uVar1 = *(uint *)(puVar3 + 0x10);
      if (-1 < (int)uVar1) {
        if ((ushort *)((ulong)uVar1 + (long)puVar5) != (ushort *)0x0) {
          uVar8 = *(ushort *)((ulong)uVar1 + (long)puVar5);
          goto LAB_01fe347c;
        }
        goto LAB_01fe3478;
      }
      if (uVar1 != 0xffffffff) goto LAB_01fe3478;
    }
    puVar10 = (uint *)(ulong)*puVar5;
    uVar8 = 0xfffe;
    if ((*puVar5 == 0) || (puVar5 == puVar10)) goto LAB_01fe347c;
    lVar6 = 0xc;
    if (*(char *)((long)puVar5 + (10 - (long)puVar10)) != '\0') {
      lVar6 = 0x1c;
    }
    lVar6 = (long)puVar5 + (lVar6 - (long)puVar10);
    if (lVar6 == 0) goto LAB_01fe3478;
    uVar9 = (ulong)*(ushort *)((long)puVar5 + (8 - (long)puVar10));
    *(undefined4 *)(puVar3 + 0x10) = 0xfffffffe;
    if (uVar9 == 0) goto LAB_01fe3478;
    piVar11 = (int *)(lVar6 + 4);
    while (piVar11[-1] != 0x2ca34410) {
      piVar11 = piVar11 + 2;
      uVar9 = uVar9 - 1;
      if (uVar9 == 0) goto LAB_01fe3478;
    }
    iVar4 = 0;
    if (*piVar11 != -1) {
      iVar4 = *piVar11;
    }
    *(int *)(puVar3 + 0x10) = iVar4;
    if (*puVar5 == 0) goto LAB_01fe3478;
  } while( true );
}


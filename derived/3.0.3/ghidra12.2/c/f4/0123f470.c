
undefined2 FUN_0123f470(uint *param_1)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  ushort uVar5;
  uint uVar6;
  uint *puVar7;
  uint *puVar8;
  char cVar9;
  ulong uVar10;
  int *piVar11;
  long lVar12;
  long lVar13;
  uint local_60;
  uint local_5c;
  undefined *local_58;
  uint local_50;
  uint uStack_4c;
  undefined8 local_48;
  uint local_3c;
  uint uStack_38;
  uint local_34;
  
  puVar3 = PTR_DAT_04bb43c0;
  local_3c = *param_1;
  uStack_38 = param_1[1];
  lVar13 = *(long *)PTR_DAT_04bb43c0;
  uVar6 = FUN_0277d6c4();
  lVar12 = *(long *)puVar3;
  if (lVar12 == 0) goto LAB_0123f64c;
  lVar13 = *(long *)(lVar13 + 0x57e58);
  uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar13 + 0x1f8);
  if ((*(uint *)(lVar13 + 0x1d8) <= uVar6) ||
     (*(long *)(*(long *)(lVar13 + 0x1e0) + (long)(int)uVar6 * 8) == 0)) goto LAB_0123f64c;
  local_48 = 0;
  local_50 = *param_1;
  uStack_4c = param_1[1];
  local_58 = PTR_DAT_04bc0510 + 0x10;
  uVar6 = FUN_0277d6c4(&local_50);
  if (*(long *)puVar3 == 0) {
LAB_0123f608:
    local_34 = 0xbc;
  }
  else {
    lVar12 = *(long *)(lVar12 + 0x57e58);
    uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar12 + 0x1f8);
    if ((*(uint *)(lVar12 + 0x1d8) <= uVar6) ||
       (*(long *)(*(long *)(lVar12 + 0x1e0) + (long)(int)uVar6 * 8) == 0)) goto LAB_0123f608;
    lVar12 = *(long *)PTR_DAT_04bc0428;
    uVar6 = FUN_0277d6c4(param_1);
    uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar12 + 0x1f8);
    if ((*(uint *)(lVar12 + 0x1d8) <= uVar6) ||
       (puVar7 = *(uint **)(*(long *)(lVar12 + 0x1e0) + (long)(int)uVar6 * 8), puVar7 == (uint *)0x0
       )) goto LAB_0123f608;
    local_34 = 0;
    uVar6 = *puVar7;
    if ((uVar6 != 0) && (puVar7 != (uint *)(ulong)uVar6)) {
      puVar8 = (uint *)((long)puVar7 - (long)(ulong)uVar6);
      local_34 = 0;
      if (*puVar8 != 0) {
        uVar6 = puVar8[1];
        if ((uVar6 != 0) && ((ulong)(ushort)puVar8[2] != 0)) {
          lVar12 = 0xc;
          if (*(char *)((long)puVar8 + 10) != '\0') {
            lVar12 = 0x1c;
          }
          lVar12 = (long)puVar8 + lVar12 + (ulong)(ushort)puVar8[2] * 8;
          if (lVar12 != 0) {
            uVar2 = 0;
            if ((ulong)uVar6 != 0) {
              uVar2 = (uint)((ulong)((long)puVar7 - lVar12) / (ulong)uVar6);
            }
            if (*puVar8 <= uVar2) {
              uVar2 = 0xffffffff;
            }
            if ((uVar2 < *(uint *)PTR_DAT_04bc00c8) &&
               (local_34 = (uint)*(ushort *)(*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar2 * 2)
               , local_34 < 0xbd)) goto LAB_0123f614;
          }
        }
        local_34 = 0;
      }
    }
  }
LAB_0123f614:
  local_60 = 0x78;
  if (local_34 != 0x78) {
    return 0xffff;
  }
  uVar5 = FUN_0123eba0(param_1);
  local_60 = (uint)uVar5;
  local_5c = 0;
  FUN_0277d4ac(&local_60);
  local_3c = local_60;
  uStack_38 = local_5c;
LAB_0123f64c:
  lVar12 = DAT_05150358;
  uVar6 = FUN_0277d6c4(&local_3c);
  puVar4 = PTR_DAT_04bbbc78;
  puVar3 = PTR_DAT_04bbbc70;
  uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar12 + 0x1f8);
  if (((*(uint *)(lVar12 + 0x1d8) <= uVar6) ||
      (puVar7 = *(uint **)(*(long *)(lVar12 + 0x1e0) + (long)(int)uVar6 * 8), puVar7 == (uint *)0x0)
      ) || (*puVar7 == 0)) {
    return 0xffff;
  }
  cVar9 = *PTR_DAT_04bbbc70;
  while( true ) {
    if (cVar9 == '\0') {
      cVar9 = '\x01';
      *(undefined8 *)puVar4 = 0xffffffffffffffff;
      *(undefined8 *)(puVar4 + 8) = 0xffffffffffffffff;
      *puVar3 = 1;
      *(undefined4 *)(puVar4 + 0x60) = 0xffffffff;
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
    }
    else {
      uVar6 = *(uint *)(puVar4 + 0x38);
      if (-1 < (int)uVar6) {
        if ((undefined2 *)((ulong)uVar6 + (long)puVar7) == (undefined2 *)0x0) {
          return 0xffff;
        }
        return *(undefined2 *)((ulong)uVar6 + (long)puVar7);
      }
      if (uVar6 != 0xffffffff) {
        return 0xffff;
      }
    }
    puVar8 = (uint *)(ulong)*puVar7;
    if (*puVar7 == 0) {
      return 0xffff;
    }
    if (puVar7 == puVar8) break;
    lVar12 = 0xc;
    if (*(char *)((long)puVar7 + (10 - (long)puVar8)) != '\0') {
      lVar12 = 0x1c;
    }
    lVar12 = (long)puVar7 + (lVar12 - (long)puVar8);
    if (lVar12 == 0) {
      return 0xffff;
    }
    uVar10 = (ulong)*(ushort *)((long)puVar7 + (8 - (long)puVar8));
    *(undefined4 *)(puVar4 + 0x38) = 0xfffffffe;
    if (uVar10 == 0) {
      return 0xffff;
    }
    piVar11 = (int *)(lVar12 + 4);
    while (piVar11[-1] != -0x4198c854) {
      piVar11 = piVar11 + 2;
      uVar10 = uVar10 - 1;
      if (uVar10 == 0) {
        return 0xffff;
      }
    }
    iVar1 = 0;
    if (*piVar11 != -1) {
      iVar1 = *piVar11;
    }
    *(int *)(puVar4 + 0x38) = iVar1;
    if (*puVar7 == 0) {
      return 0xffff;
    }
  }
  return 0xffff;
}


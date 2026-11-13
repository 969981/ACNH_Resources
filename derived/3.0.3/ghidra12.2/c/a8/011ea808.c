
undefined8
FUN_011ea808(undefined4 param_1,long param_2,undefined8 param_3,undefined8 *param_4,
            undefined8 param_5)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  uint uVar5;
  ulong uVar6;
  undefined8 uVar7;
  char cVar8;
  uint *puVar9;
  int *piVar10;
  long lVar11;
  char cVar12;
  undefined1 auStack_a8 [8];
  undefined1 auStack_a0 [4];
  byte local_9c;
  uint *local_98;
  undefined *local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined4 local_70;
  undefined8 local_64;
  undefined4 local_5c;
  char local_58;
  undefined4 local_54;
  
  local_54 = 0;
  iVar4 = FUN_0277d6c4(param_3);
  uStack_88 = param_5;
  if (iVar4 == 0x38d2) {
    local_5c = 0x24;
    local_58 = 3;
    local_54 = 1;
    uVar7 = *(undefined8 *)(*(long *)(param_2 + 0x1e1c0) + 0x18);
    local_64 = 0;
    local_90 = PTR_DAT_04bb2020 + 0x10;
    uStack_78 = *param_4;
    if ((*(byte *)(*(long *)(param_2 + 0x1e1c0) + 8) & 10) != 2) {
      uVar7 = 0;
    }
    local_70 = *(undefined4 *)(param_4 + 1);
    local_80 = 0;
    FUN_037f09b0(uVar7,&local_90,&local_64,0,0xffffffff,0);
    return 1;
  }
  lVar11 = *(long *)PTR_DAT_04bbbc68;
  if (((((lVar11 == 0) || (*(long *)(lVar11 + 0xb0) == 0)) ||
       (*(long *)(*(long *)(lVar11 + 0xb0) + 8) == 0)) ||
      ((*(long *)(lVar11 + 0x488) == 0 || (*(long *)(*(long *)(lVar11 + 0x488) + 8) == 0)))) ||
     ((*(long *)(lVar11 + 0x2b0) == 0 || (*(long *)(*(long *)(lVar11 + 0x2b0) + 8) == 0)))) {
    return 0;
  }
  uVar5 = FUN_0277d6c4(param_3);
  uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
  if (*(uint *)(lVar11 + 0x1d8) <= uVar5) {
    return 0;
  }
  if (*(long *)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar5 * 8) == 0) {
    return 0;
  }
  FUN_0124c030(auStack_a8,param_3);
  local_5c = FUN_0123db50(auStack_a0,local_98);
  puVar3 = PTR_DAT_04bbbc78;
  puVar2 = PTR_DAT_04bbbc70;
  if ((local_98 != (uint *)0x0) && (uVar5 = *local_98, uVar5 != 0)) {
    cVar8 = *PTR_DAT_04bbbc70;
    do {
      if (cVar8 == '\0') {
        cVar8 = '\x01';
        *(undefined8 *)puVar3 = 0xffffffffffffffff;
        *(undefined8 *)(puVar3 + 8) = 0xffffffffffffffff;
        *puVar2 = 1;
        *(undefined4 *)(puVar3 + 0x60) = 0xffffffff;
        *(undefined8 *)(puVar3 + 0x10) = 0xffffffffffffffff;
        *(undefined8 *)(puVar3 + 0x18) = 0xffffffffffffffff;
        *(undefined8 *)(puVar3 + 0x20) = 0xffffffffffffffff;
        *(undefined8 *)(puVar3 + 0x28) = 0xffffffffffffffff;
        *(undefined8 *)(puVar3 + 0x30) = 0xffffffffffffffff;
        *(undefined8 *)(puVar3 + 0x38) = 0xffffffffffffffff;
        *(undefined8 *)(puVar3 + 0x40) = 0xffffffffffffffff;
        *(undefined8 *)(puVar3 + 0x48) = 0xffffffffffffffff;
        *(undefined8 *)(puVar3 + 0x50) = 0xffffffffffffffff;
        *(undefined8 *)(puVar3 + 0x58) = 0xffffffffffffffff;
        uVar5 = *local_98;
      }
      else {
        uVar1 = *(uint *)(puVar3 + 0x4c);
        if (-1 < (int)uVar1) {
          if ((char *)((ulong)uVar1 + (long)local_98) == (char *)0x0) break;
          cVar12 = *(char *)((ulong)uVar1 + (long)local_98);
          goto LAB_011eaa84;
        }
        if (uVar1 != 0xffffffff) break;
      }
      puVar9 = (uint *)(ulong)uVar5;
      cVar12 = '\0';
      if ((puVar9 == (uint *)0x0) || (local_98 == puVar9)) goto LAB_011eaa84;
      lVar11 = 0xc;
      if (*(char *)((long)local_98 + (10 - (long)puVar9)) != '\0') {
        lVar11 = 0x1c;
      }
      lVar11 = (long)local_98 + (lVar11 - (long)puVar9);
      if (lVar11 == 0) break;
      uVar6 = (ulong)*(ushort *)((long)local_98 + (8 - (long)puVar9));
      *(undefined4 *)(puVar3 + 0x4c) = 0xfffffffe;
      if (uVar6 == 0) break;
      piVar10 = (int *)(lVar11 + 4);
      while (piVar10[-1] != -0xa58ccc9) {
        piVar10 = piVar10 + 2;
        uVar6 = uVar6 - 1;
        if (uVar6 == 0) goto LAB_011eaa80;
      }
      cVar12 = '\0';
      iVar4 = 0;
      if (*piVar10 != -1) {
        iVar4 = *piVar10;
      }
      *(int *)(puVar3 + 0x4c) = iVar4;
      uVar5 = *local_98;
      if (uVar5 == 0) goto LAB_011eaa84;
    } while( true );
  }
LAB_011eaa80:
  cVar12 = '\0';
LAB_011eaa84:
  local_58 = cVar12;
  iVar4 = FUN_0123db50(auStack_a0);
  if (iVar4 - 0x12U < 6) {
    iVar4 = FUN_0123db50(auStack_a0,local_98);
    local_9c = local_9c >> 5;
    if (5 < iVar4 - 0x12U) {
      local_9c = 0;
    }
    local_58 = local_9c + cVar12;
  }
  FUN_012342a0(param_3,&local_64);
  local_64 = CONCAT44(param_1,(undefined4)local_64);
  iVar4 = FUN_0123db50(auStack_a0,local_98);
  if (iVar4 - 0x23U < 9) {
    local_54 = 1;
  }
  else {
    iVar4 = FUN_0123db50(auStack_a0,local_98);
    if (iVar4 - 0x18U < 7) {
      local_54 = 2;
    }
    else {
      iVar4 = FUN_0123db50(auStack_a0,local_98);
      if (iVar4 == 0x1f) {
        local_54 = 5;
      }
      else {
        iVar4 = FUN_0123db50(auStack_a0,local_98);
        if (iVar4 - 0xbU < 7) {
          local_54 = 3;
        }
        else {
          iVar4 = FUN_0123db50(auStack_a0,local_98);
          if (iVar4 - 0x12U < 6) {
            local_54 = 4;
          }
          else {
            iVar4 = FUN_0123db50(auStack_a0,local_98);
            if (iVar4 == 0x21) {
              local_54 = 6;
            }
            else {
              iVar4 = FUN_0123db50(auStack_a0,local_98);
              if (iVar4 == 0x2e) {
                local_54 = 7;
              }
              else {
                uVar6 = FUN_0123d890(local_98,4);
                if (((uVar6 & 1) != 0) || (uVar6 = FUN_0124dcb0(auStack_a8), (uVar6 & 1) != 0)) {
                  local_54 = 8;
                }
              }
            }
          }
        }
      }
    }
  }
  uVar7 = *(undefined8 *)(*(long *)(param_2 + 0x1e1c0) + 0x18);
  local_90 = PTR_DAT_04bb2020 + 0x10;
  uStack_78 = *param_4;
  if ((*(byte *)(*(long *)(param_2 + 0x1e1c0) + 8) & 10) != 2) {
    uVar7 = 0;
  }
  local_70 = *(undefined4 *)(param_4 + 1);
  local_80 = 0;
  FUN_037f09b0(uVar7,&local_90,&local_64,0,0xffffffff,0);
  return 1;
}


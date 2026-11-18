
void FUN_03748340(long param_1,undefined4 *param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined *puVar4;
  uint uVar5;
  ulong uVar6;
  uint *puVar7;
  uint *puVar8;
  bool bVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  undefined4 local_58 [2];
  undefined *local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  uint *local_40;
  uint local_34;
  
  puVar4 = PTR_DAT_04bb43c0;
  lVar12 = *(long *)PTR_DAT_04bb43c0;
  uVar5 = FUN_0277d6c4(param_2);
  if (*(long *)puVar4 == 0) {
    return;
  }
  lVar12 = *(long *)(lVar12 + 0x57e58);
  uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar12 + 0x1f8);
  if (*(uint *)(lVar12 + 0x1d8) <= uVar5) {
    return;
  }
  if (*(long *)(*(long *)(lVar12 + 0x1e0) + (long)(int)uVar5 * 8) == 0) {
    return;
  }
  uVar6 = FUN_0277e294(param_2);
  if ((uVar6 & 1) == 0) {
    return;
  }
  local_48 = *param_2;
  uStack_44 = param_2[1];
  lVar12 = *(long *)puVar4;
  local_40 = (uint *)0x0;
  local_50 = PTR_DAT_04bc0510 + 0x10;
  uVar5 = FUN_0277d6c4(&local_48);
  if (*(long *)puVar4 == 0) {
LAB_037484f4:
    puVar7 = (uint *)0x0;
    bVar9 = true;
    uVar5 = 0xbc;
  }
  else {
    lVar12 = *(long *)(lVar12 + 0x57e58);
    uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar12 + 0x1f8);
    if ((*(uint *)(lVar12 + 0x1d8) <= uVar5) ||
       (*(long *)(*(long *)(lVar12 + 0x1e0) + (long)(int)uVar5 * 8) == 0)) goto LAB_037484f4;
    lVar12 = *(long *)PTR_DAT_04bc0428;
    uVar5 = FUN_0277d6c4(param_2);
    uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar12 + 0x1f8);
    if ((*(uint *)(lVar12 + 0x1d8) <= uVar5) ||
       (puVar7 = *(uint **)(*(long *)(lVar12 + 0x1e0) + (long)(int)uVar5 * 8), puVar7 == (uint *)0x0
       )) goto LAB_037484f4;
    uVar5 = 0;
    uVar2 = *puVar7;
    local_40 = puVar7;
    if ((uVar2 == 0) || (puVar7 == (uint *)(ulong)uVar2)) {
LAB_03748684:
      bVar9 = false;
    }
    else {
      puVar8 = (uint *)((long)puVar7 - (long)(ulong)uVar2);
      uVar5 = 0;
      if (*puVar8 == 0) goto LAB_03748684;
      uVar5 = puVar8[1];
      if ((uVar5 == 0) || ((ulong)(ushort)puVar8[2] == 0)) {
LAB_03748680:
        uVar5 = 0;
        goto LAB_03748684;
      }
      lVar12 = 0xc;
      if (*(char *)((long)puVar8 + 10) != '\0') {
        lVar12 = 0x1c;
      }
      lVar12 = (long)puVar8 + lVar12 + (ulong)(ushort)puVar8[2] * 8;
      if (lVar12 == 0) goto LAB_03748680;
      uVar2 = 0;
      if ((ulong)uVar5 != 0) {
        uVar2 = (uint)((ulong)((long)puVar7 - lVar12) / (ulong)uVar5);
      }
      if (*puVar8 <= uVar2) {
        uVar2 = 0xffffffff;
      }
      if (DAT_05326ec0 <= uVar2) goto LAB_03748680;
      uVar5 = (uint)*(ushort *)(DAT_05326ec8 + (long)(int)uVar2 * 2);
      if (uVar5 < 0xbd) goto LAB_03748684;
      bVar9 = false;
      uVar5 = 0;
    }
  }
  local_58[0] = 0xb0;
  local_34 = uVar5;
  if ((*(ushort *)(param_1 + 8) >> 2 & 1) != 0) goto LAB_037485d4;
  local_58[0] = 0x15;
  if (bVar9) {
    local_34 = 0xbc;
  }
  else {
    uVar2 = *puVar7;
    local_34 = 0;
    if ((uVar2 != 0) && (puVar7 != (uint *)(ulong)uVar2)) {
      puVar8 = (uint *)((long)puVar7 - (long)(ulong)uVar2);
      local_34 = 0;
      if (*puVar8 != 0) {
        uVar2 = puVar8[1];
        if ((uVar2 != 0) && ((ulong)(ushort)puVar8[2] != 0)) {
          lVar12 = 0xc;
          if (*(char *)((long)puVar8 + 10) != '\0') {
            lVar12 = 0x1c;
          }
          lVar12 = (long)puVar8 + lVar12 + (ulong)(ushort)puVar8[2] * 8;
          if (lVar12 != 0) {
            uVar1 = 0;
            if ((ulong)uVar2 != 0) {
              uVar1 = (uint)((ulong)((long)puVar7 - lVar12) / (ulong)uVar2);
            }
            if (*puVar8 <= uVar1) {
              uVar1 = 0xffffffff;
            }
            if ((uVar1 < DAT_05326ec0) &&
               (local_34 = (uint)*(ushort *)(DAT_05326ec8 + (long)(int)uVar1 * 2), local_34 < 0xbd))
            goto LAB_037485b8;
          }
        }
        local_34 = 0;
      }
    }
  }
LAB_037485b8:
  if (local_34 == 0x15) {
    *(ushort *)(param_1 + 8) = *(ushort *)(param_1 + 8) | 4;
  }
LAB_037485d4:
  iVar3 = *(int *)(param_1 + 0x20);
  if (iVar3 != 0) {
    plVar10 = *(long **)(param_1 + 0x28);
    if (uVar5 == 0xb0) {
      lVar12 = (long)iVar3 << 3;
      do {
        lVar11 = *plVar10;
        FUN_01b0a9bc(local_58,&local_50);
        uVar6 = FUN_0277d7b4(local_58,lVar11 + 8);
        if ((uVar6 & 1) != 0) {
          *(byte *)(lVar11 + 0x10) = *(byte *)(lVar11 + 0x10) & 0xfd;
        }
        plVar10 = plVar10 + 1;
        lVar12 = lVar12 + -8;
      } while (lVar12 != 0);
    }
    else {
      lVar12 = (long)iVar3 << 3;
      do {
        lVar11 = *plVar10;
        if (((*(byte *)(lVar11 + 0x10) & 1) == 0) &&
           (uVar6 = FUN_0277d7b4(param_2,lVar11 + 8), (uVar6 & 1) != 0)) {
          *(byte *)(lVar11 + 0x10) = *(byte *)(lVar11 + 0x10) | 1;
        }
        plVar10 = plVar10 + 1;
        lVar12 = lVar12 + -8;
      } while (lVar12 != 0);
    }
  }
  return;
}


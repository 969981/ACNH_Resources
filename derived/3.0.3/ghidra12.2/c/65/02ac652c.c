
bool FUN_02ac652c(long param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  byte bVar5;
  long lVar6;
  undefined4 *puVar7;
  long lVar8;
  undefined4 local_18;
  int local_14;
  
  lVar8 = *(long *)(param_1 + 0x2e0);
  if (lVar8 == 0) goto LAB_02ac661c;
  local_14 = FUN_02a6cb24(param_1 + 0x298);
  if (local_14 == 0) {
    local_18 = 0;
    uVar4 = FUN_02b67620(&local_18,*(undefined4 *)(param_1 + 0x2a0));
    if ((((uVar4 & 1) == 0) ||
        ((*(int *)(param_1 + 0x2c0) != -1 && (iVar3 = FUN_021d9f50(local_18), iVar3 != 2)))) ||
       ((*(int *)(param_1 + 0x2c4) != -1 && (iVar3 = FUN_021d9f50(local_18), iVar3 != 2))))
    goto LAB_02ac65b4;
    bVar5 = 0;
  }
  else {
LAB_02ac65b4:
    lVar6 = *(long *)(param_1 + 0x2e0);
    bVar5 = 0;
    if (lVar6 != 0) {
      bVar5 = 0;
      if (*(int *)(lVar6 + 0x18) == 0) {
        bVar5 = *(byte *)(lVar6 + 8) >> 1 & 1;
      }
    }
  }
  lVar6 = *(long *)(param_1 + 0x2e0);
  iVar3 = *(int *)(lVar6 + 0xc0);
  iVar2 = *(int *)(lVar6 + 0xb8);
  if (iVar3 < iVar2) {
    iVar1 = *(int *)(lVar6 + 0xbc) + iVar3;
    *(int *)(lVar6 + 0xc0) = iVar3 + 1;
    iVar3 = 0;
    if (iVar2 <= iVar1) {
      iVar3 = iVar2;
    }
    puVar7 = (undefined4 *)(*(long *)(lVar6 + 0xb0) + (long)(iVar1 - iVar3) * 0xc);
    *puVar7 = 1;
    puVar7[1] = param_2;
    *(byte *)(puVar7 + 2) = bVar5;
    *(undefined1 *)((long)puVar7 + 9) = 0;
  }
LAB_02ac661c:
  return lVar8 != 0;
}


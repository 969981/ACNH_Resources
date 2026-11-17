
bool FUN_02ac63b0(long param_1,undefined4 param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  byte bVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  undefined4 *puVar7;
  long lVar8;
  undefined4 local_3c;
  int local_38;
  int local_34;
  
  lVar8 = *(long *)(param_1 + 0x2e0);
  if (lVar8 == 0) goto LAB_02ac6508;
  if ((param_3 & 1) == 0) {
    local_34 = FUN_02a6cb24(param_1 + 0x298);
    if (local_34 == 0) {
      local_38 = 0;
      uVar5 = FUN_02b67620(&local_38,*(undefined4 *)(param_1 + 0x2a0));
      if ((((uVar5 & 1) != 0) &&
          ((*(int *)(param_1 + 0x2c0) == -1 || (iVar4 = FUN_021d9f50(local_38), iVar4 == 2)))) &&
         ((*(int *)(param_1 + 0x2c4) == -1 || (iVar4 = FUN_021d9f50(local_38), iVar4 == 2)))) {
        if (((*(int *)(param_1 + 0x17c) == 2) ||
            (local_34 = FUN_02a6cb24(param_1 + 0x298), local_34 != 0)) ||
           (local_38 = FUN_02ac52d0(param_1), local_38 != 4)) {
          bVar3 = 0;
        }
        else {
          local_3c = 0;
          uVar5 = FUN_02b67620(&local_3c,*(undefined4 *)(param_1 + 0x2a0));
          bVar3 = 0;
          if ((uVar5 & 1) != 0) {
            bVar3 = FUN_02b5a430();
            bVar3 = bVar3 ^ 1;
          }
        }
        goto LAB_02ac64bc;
      }
    }
    lVar6 = *(long *)(param_1 + 0x2e0);
    bVar3 = 0;
    if (lVar6 != 0) {
      bVar3 = 0;
      if (*(int *)(lVar6 + 0x18) == 0) {
        bVar3 = *(byte *)(lVar6 + 8) >> 1 & 1;
      }
    }
  }
  else {
    bVar3 = 1;
  }
LAB_02ac64bc:
  lVar6 = *(long *)(param_1 + 0x2e0);
  iVar4 = *(int *)(lVar6 + 0xc0);
  iVar2 = *(int *)(lVar6 + 0xb8);
  if (iVar4 < iVar2) {
    iVar1 = *(int *)(lVar6 + 0xbc) + iVar4;
    *(int *)(lVar6 + 0xc0) = iVar4 + 1;
    iVar4 = 0;
    if (iVar2 <= iVar1) {
      iVar4 = iVar2;
    }
    puVar7 = (undefined4 *)(*(long *)(lVar6 + 0xb0) + (long)(iVar1 - iVar4) * 0xc);
    *puVar7 = 0;
    puVar7[1] = param_2;
    *(byte *)(puVar7 + 2) = bVar3 & 1;
    *(undefined1 *)((long)puVar7 + 9) = 0;
  }
LAB_02ac6508:
  return lVar8 != 0;
}


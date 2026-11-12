
void FUN_00947a00(undefined4 param_1,long param_2,undefined8 param_3,long param_4,long param_5,
                 int param_6,uint param_7)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined *local_78;
  undefined *puStack_70;
  int local_68;
  int iStack_64;
  undefined *local_60;
  int local_58;
  int iStack_54;
  
  lVar3 = FUN_00947b80();
  if (((lVar3 != 0) || (lVar3 = FUN_00947d80(0,param_3), lVar3 != 0)) ||
     (lVar3 = FUN_00947f80(0,param_3), lVar3 != 0)) {
    if (param_6 == 1) {
      lVar4 = *(long *)(param_2 + 0x68);
    }
    else if (param_6 == 3) {
      lVar4 = *(long *)(param_2 + 0x78);
    }
    else {
      if (param_6 != 2) {
        return;
      }
      lVar4 = *(long *)(param_2 + 0x70);
    }
    if ((lVar4 != 0) &&
       (uVar5 = FUN_0096a6d0(param_1,lVar4,lVar3,param_4,param_7 & 1), (uVar5 & 1) != 0)) {
      local_58 = *(int *)(param_4 + 8);
      iStack_54 = *(int *)(param_4 + 0xc);
      local_78 = PTR_DAT_04bbc1a0 + 0x10;
      puStack_70 = PTR_DAT_04bb2010 + 0x10;
      iVar1 = local_58 + *(int *)(lVar3 + 4) + -1;
      iVar2 = iStack_54 + *(int *)(lVar3 + 8) + -1;
      local_68 = local_58;
      if (iVar1 <= local_58) {
        local_68 = iVar1;
      }
      if (local_58 <= iVar1) {
        local_58 = iVar1;
      }
      iStack_64 = iStack_54;
      if (iVar2 <= iStack_54) {
        iStack_64 = iVar2;
      }
      if (iStack_54 <= iVar2) {
        iStack_54 = iVar2;
      }
      if (param_6 == 1) {
        puVar6 = (undefined8 *)(param_2 + 0x68);
      }
      else if (param_6 == 3) {
        puVar6 = (undefined8 *)(param_2 + 0x78);
      }
      else {
        puVar6 = (undefined8 *)(param_2 + 0x70);
      }
      local_60 = puStack_70;
      FUN_0096e9e0(*puVar6,&local_78);
      if (param_5 != 0) {
        *(int *)(param_5 + 0x10) = local_68;
        *(int *)(param_5 + 0x14) = iStack_64;
        *(int *)(param_5 + 0x20) = local_58;
        *(int *)(param_5 + 0x24) = iStack_54;
      }
    }
  }
  return;
}


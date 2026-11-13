
void FUN_01383030(undefined1 *param_1,uint *param_2,undefined8 *param_3)

{
  undefined *puVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined *local_78;
  int local_70;
  int iStack_6c;
  undefined1 local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  
  *param_1 = 1;
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_3 + 1);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_3 + 3);
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((long)param_3 + 0x1c);
  local_58 = *(undefined4 *)(param_3 + 4);
  *(undefined4 *)(param_1 + 0x18) = local_58;
  uStack_54 = *(undefined4 *)((long)param_3 + 0x24);
  *(undefined4 *)(param_1 + 0x1c) = uStack_54;
  local_60 = *param_3;
  FUN_013834a4(param_1 + 0x20,&local_60);
  iVar4 = *(int *)(param_1 + 0x1c);
  if (0 < iVar4) {
    iVar3 = *(int *)(param_1 + 0x18);
    if (0 < iVar3) {
      iVar5 = 0;
      puVar1 = PTR_DAT_04bb2018 + 0x10;
      do {
        if (0 < iVar3) {
          iVar4 = 0;
          do {
            local_68 = 1;
            uVar2 = iVar4 + *(int *)(param_1 + 4) + iVar5 * iVar3;
            local_70 = iVar4 + *(int *)(param_1 + 0x10);
            iStack_6c = *(int *)(param_1 + 0x14) + iVar5;
            if (*param_2 <= uVar2) {
              uVar2 = 0;
            }
            local_78 = puVar1;
            FUN_0137d9f4(*(long *)(param_2 + 2) + (long)(int)uVar2 * 0x68,&local_78);
            iVar3 = *(int *)(param_1 + 0x18);
            iVar4 = iVar4 + 1;
          } while (iVar4 < iVar3);
          iVar4 = *(int *)(param_1 + 0x1c);
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 < iVar4);
    }
  }
  return;
}


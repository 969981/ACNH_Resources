
void FUN_032de880(long *param_1,undefined4 param_2,long param_3,long param_4)

{
  undefined *puVar1;
  int iVar2;
  uint uVar3;
  undefined *puVar4;
  int *piVar5;
  uint local_44;
  undefined *local_40;
  undefined8 uStack_38;
  undefined *local_30;
  undefined8 uStack_28;
  long *local_8;
  
  local_8 = (long *)0x0;
  local_44 = 0xffffffff;
  uStack_28 = *(undefined8 *)(param_3 + 8);
  local_40 = PTR_DAT_04bc8e68 + 0x10;
  uStack_38 = *(undefined8 *)(param_4 + 8);
  local_30 = local_40;
  uVar3 = FUN_032de9d0(param_2,&local_8,&local_44,&local_30,&local_40);
  if (((uVar3 & 1) == 0) || ((int)local_44 < 0)) {
    *param_1 = (long)(PTR_DAT_04bc8e78 + 0x10);
    param_1[1] = (long)&DAT_04169358;
    return;
  }
  if (local_44 < *(uint *)(local_8 + 1)) {
    iVar2 = *(int *)(*local_8 + 0x24);
    if ((iVar2 != -1) &&
       (piVar5 = *(int **)(*(long *)(*local_8 + 0x18) + (long)iVar2 * 0x18), (int)local_44 < *piVar5
       )) {
      puVar4 = (undefined *)((long)piVar5 + (ulong)(uint)piVar5[(ulong)local_44 + 1]);
      goto LAB_032de948;
    }
  }
  puVar4 = (undefined *)0x0;
LAB_032de948:
  puVar1 = PTR_DAT_04bb2da0;
  if (puVar4 != (undefined *)0x0) {
    puVar1 = puVar4;
  }
  *param_1 = (long)(PTR_DAT_04bc8e78 + 0x10);
  param_1[1] = (long)puVar1;
  return;
}


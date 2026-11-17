
/* WARNING: Removing unreachable block (ram,0x02b42d90) */
/* WARNING: Removing unreachable block (ram,0x02b42d48) */
/* WARNING: Removing unreachable block (ram,0x02b42d24) */
/* WARNING: Removing unreachable block (ram,0x02b42d6c) */
/* WARNING: Removing unreachable block (ram,0x02b42db4) */

undefined8 FUN_02b42cd4(long param_1,long param_2)

{
  int iVar1;
  byte bVar2;
  undefined2 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  int local_38;
  undefined4 uStack_34;
  int local_14;
  
  if (param_2 == 0) {
    return 0;
  }
  iVar1 = *(int *)(param_1 + 8);
  if (iVar1 == -1) {
    uVar5 = 0;
  }
  else {
    *(int *)(param_2 + 8) = iVar1;
    if ((((iVar1 == 0x1e) || (local_14 = 0, local_38 = iVar1, DAT_05641c34 == iVar1)) ||
        (local_14 = 1, DAT_05641c38 == iVar1)) ||
       (((local_14 = 2, DAT_05641c3c == iVar1 || (local_14 = 3, DAT_05641c40 == iVar1)) ||
        (local_14 = 4, DAT_05641c44 == iVar1)))) {
      uVar3 = FUN_02b8ee60(iVar1);
      *(undefined2 *)(param_2 + 0x10) = uVar3;
      uVar3 = FUN_02b8f300(iVar1);
      *(undefined2 *)(param_2 + 0x12) = uVar3;
      uVar3 = FUN_02b8f7a0(iVar1);
      *(undefined2 *)(param_2 + 0x14) = uVar3;
      uVar3 = FUN_02b8fc40(iVar1);
      *(undefined2 *)(param_2 + 0x16) = uVar3;
      FUN_02b8e530(&local_38,iVar1);
      *(undefined2 *)(param_2 + 0x18) = (undefined2)local_38;
    }
    else {
      local_14 = 0;
      FUN_02b677c0(&local_14,iVar1);
      if (local_14 == 6) {
        *(undefined2 *)(param_2 + 0x10) = 0x1f;
      }
      else {
        if (*(char *)(param_1 + 0x20) == '\0') {
          local_38 = local_14;
          uVar3 = 1;
          bVar2 = 1;
          if (local_14 - 2U < 5) {
            uVar3 = *(undefined2 *)(&DAT_0417faec + (long)(int)(local_14 - 2U) * 2);
          }
          *(undefined2 *)(param_2 + 0x10) = uVar3;
          *(undefined8 *)(param_2 + 0x14) = 0x200000002;
          *(undefined4 *)(param_2 + 0x20) = 2;
        }
        else {
          uVar3 = FUN_02b5afe0();
          *(undefined2 *)(param_2 + 0x10) = uVar3;
          *(undefined4 *)(param_2 + 0x14) = 2;
          uVar4 = FUN_02b58b90(0);
          *(undefined4 *)(param_2 + 0x18) = uVar4;
          uVar4 = FUN_02b5aaf0(0);
          *(undefined4 *)(param_2 + 0x20) = uVar4;
          bVar2 = FUN_02b58880();
          bVar2 = bVar2 & 1;
        }
        *(byte *)(param_2 + 0x28) = bVar2;
        uVar4 = FUN_02b5a4a0();
        *(undefined4 *)(param_2 + 0x2c) = uVar4;
        bVar2 = FUN_02b5a5c0();
        *(byte *)(param_2 + 0x30) = bVar2 & 1;
        FUN_02b5ae00(&local_38);
        *(int *)(param_2 + 0x34) = local_38;
        *(undefined4 *)(param_2 + 0x38) = uStack_34;
      }
    }
    uVar5 = 1;
  }
  return uVar5;
}


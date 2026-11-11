
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00466630(undefined8 *param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  undefined8 *puVar5;
  char *local_50;
  undefined8 local_48;
  undefined8 local_40;
  int local_38;
  undefined4 uStack_34;
  
  lVar4 = param_1[1];
  puVar5 = (undefined8 *)0x0;
  if (lVar4 != 0) {
    puVar5 = (undefined8 *)*param_1;
    uVar3 = FUN_00427110(lVar4,PTR_DAT_04bd70c0);
    if ((uVar3 & 1) == 0) {
      puVar5 = (undefined8 *)0x0;
      iVar1 = _DAT_00000008;
      goto joined_r0x004666d8;
    }
    uVar3 = FUN_004274f0(lVar4);
    if ((uVar3 & 8) != 0) {
      puVar5 = (undefined8 *)0x0;
    }
  }
  iVar1 = *(int *)(puVar5 + 1);
joined_r0x004666d8:
  if (iVar1 != 0) {
    iVar2 = FUN_00426fc0(puVar5[2]);
    if (iVar2 * iVar1 != 0) {
      local_50 = "buffer_hkVariantArray";
      local_40 = puVar5[2];
      local_48 = *puVar5;
      _local_38 = CONCAT44(*(undefined4 *)(puVar5 + 1),iVar2 * iVar1);
      FUN_0043cc30(param_2,&local_50,1);
    }
  }
  return;
}


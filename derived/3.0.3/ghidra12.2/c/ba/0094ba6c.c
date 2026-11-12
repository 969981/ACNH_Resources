
/* WARNING: Removing unreachable block (ram,0x0094bb68) */

undefined4 FUN_0094ba6c(long param_1,float *param_2,int *param_3)

{
  uint *puVar1;
  short sVar2;
  ulong uVar3;
  int iVar4;
  undefined4 uVar5;
  int local_48;
  char local_44 [4];
  undefined *local_40;
  int local_38;
  int iStack_34;
  
  local_44[0] = '\0';
  sVar2 = *(short *)PTR_DAT_04bb6298;
  if (sVar2 == -1) {
    local_48 = 7;
  }
  else {
    local_40 = (undefined *)CONCAT44(local_40._4_4_,1);
    puVar1 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar2 * 8);
    if (0xff < (uint)(int)sVar2) {
      puVar1 = (uint *)PTR_DAT_04bc39f8;
    }
    local_48 = 7;
    if ((*puVar1 & 2) != 0) {
      local_48 = 5;
    }
  }
  if (param_3 == (int *)0x0) {
    uVar5 = FUN_00962700(*(undefined8 *)(param_1 + 0x68),param_2,&local_48,0,local_44);
  }
  else {
    *param_3 = local_48;
    uVar5 = FUN_00962700(*(undefined8 *)(param_1 + 0x68),param_2,&local_48,0,local_44);
    *param_3 = local_48;
    if (local_44[0] == '\0') {
      local_40 = PTR_DAT_04bb2010 + 0x10;
      local_38 = (int)((float)(int)*param_2 / 5.0) - (uint)(*param_2 < 0.0);
      iStack_34 = (int)((float)(int)param_2[2] / 5.0) - (uint)(param_2[2] < 0.0);
      uVar3 = FUN_01384ee0(&local_40);
      iVar4 = 0x34;
      if ((uVar3 & 1) == 0) {
        iVar4 = 7;
      }
      if (iVar4 != 7) {
        *param_3 = iVar4;
      }
    }
  }
  return uVar5;
}



void FUN_002e31fc(undefined8 param_1,long param_2,int *param_3)

{
  undefined *puVar1;
  ulong uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 local_70;
  undefined1 local_68 [16];
  undefined1 *local_58;
  undefined8 uStack_50;
  undefined4 local_44;
  
  if ((param_3 == (int *)0x0) || (*param_3 == 1)) {
    uVar3 = 0x10c07;
  }
  else {
    if ((*(long *)(param_2 + 0x2c0) == 0) && (*(int *)(param_2 + 0x154) != 1)) {
      *(int **)(param_2 + 0x2c0) = param_3;
      uVar4 = *(undefined8 *)(param_2 + 0x58);
      local_68[0] = 0;
      uVar3 = *(undefined4 *)(*(long *)(param_2 + 0xd8) + 0xc);
      puVar1 = PTR_DAT_04bc0ec8 + 0x10;
      local_58 = local_68;
      uStack_50 = 0x10;
      local_70 = puVar1;
      FUN_0018b070(&local_70,&DAT_0407ebb1,0xffffffffffffffff);
      uVar2 = FUN_00312310(uVar4,param_2 + 0x140,uVar3,&local_70,*(long *)(param_2 + 0xd8) + 0x68);
      local_70 = puVar1;
      FUN_0018b1a0(&local_70);
      if ((uVar2 & 1) == 0) {
        *(undefined8 *)(param_2 + 0x2c0) = 0;
        local_70 = (undefined *)CONCAT44(local_70._4_4_,0xac5a);
      }
      else {
        FUN_00220f78(*(undefined8 *)(param_2 + 0x2c0));
        local_70 = (undefined *)((ulong)local_70 & 0xffffffff00000000);
      }
      goto LAB_002e3260;
    }
    uVar3 = 0x10c08;
  }
  local_70 = (undefined *)CONCAT44(local_70._4_4_,uVar3);
LAB_002e3260:
  local_44 = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((long)&local_70 + 4),(Result *)&local_44);
  FUN_002296c4(param_1,&local_70);
  return;
}


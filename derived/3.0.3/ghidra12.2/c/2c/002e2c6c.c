
void FUN_002e2c6c(undefined8 param_1,long param_2,int *param_3)

{
  undefined *puVar1;
  ulong uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 local_78;
  undefined1 local_70 [16];
  undefined1 *local_60;
  undefined8 uStack_58;
  undefined4 local_44;
  
  puVar1 = PTR_DAT_04bc0ec8;
  if ((param_3 == (int *)0x0) || (*param_3 == 1)) {
    uVar3 = 0x10c07;
  }
  else {
    if ((*(long *)(param_2 + 0x2c0) == 0) && (*(int *)(param_2 + 0x154) != 1)) {
      uVar4 = *(undefined8 *)(param_2 + 0x58);
      *(int **)(param_2 + 0x2c0) = param_3;
      uVar5 = *(undefined8 *)(param_2 + 0xd8);
      local_70[0] = 0;
      local_60 = local_70;
      uStack_58 = 0x10;
      local_78 = puVar1 + 0x10;
      FUN_0018b070(&local_78,&DAT_0407ebb1,0xffffffffffffffff);
      uVar2 = FUN_003120f0(uVar4,param_2 + 0x140,uVar5,param_2 + 0x138,&local_78);
      local_78 = puVar1 + 0x10;
      FUN_0018b1a0(&local_78);
      if ((uVar2 & 1) == 0) {
        *(undefined8 *)(param_2 + 0x2c0) = 0;
        local_78 = (undefined *)CONCAT44(local_78._4_4_,0xac5a);
      }
      else {
        FUN_00220f78(*(undefined8 *)(param_2 + 0x2c0));
        local_78 = (undefined *)((ulong)local_78 & 0xffffffff00000000);
      }
      goto LAB_002e2cd4;
    }
    uVar3 = 0x10c08;
  }
  local_78 = (undefined *)CONCAT44(local_78._4_4_,uVar3);
LAB_002e2cd4:
  local_44 = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((long)&local_78 + 4),(Result *)&local_44);
  FUN_002296c4(param_1,&local_78);
  return;
}


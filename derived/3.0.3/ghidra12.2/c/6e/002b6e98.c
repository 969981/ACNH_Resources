
void FUN_002b6e98(undefined8 param_1,long param_2,undefined8 param_3,long param_4,int param_5,
                 char param_6)

{
  int *piVar1;
  int local_bc0;
  ErrorResultVariant aEStack_bbc [12];
  undefined8 local_bb0;
  undefined1 local_ba8;
  char local_ba7;
  int local_ba4;
  undefined4 uStack_ba0;
  undefined4 local_600 [360];
  int local_60 [4];
  undefined4 local_48;
  undefined4 local_44;
  
  piVar1 = &local_bc0;
  FUN_002b7008(local_60);
  if (local_60[0] == 0) {
    if (((param_4 == 0) || (param_5 == 0)) || (param_6 == -1)) {
      local_600[0] = 0;
      local_bb0 = (undefined *)CONCAT44(local_bb0._4_4_,0x10c07);
      nn::err::ErrorResultVariant::ErrorResultVariant
                ((ErrorResultVariant *)((long)&local_bb0 + 4),(Result *)local_600);
      piVar1 = (int *)&local_bb0;
    }
    else {
      local_ba8 = 0;
      uStack_ba0 = 0;
      local_bb0 = PTR_DAT_04bce170 + 0x10;
      local_ba7 = param_6;
      local_ba4 = param_5;
      FUN_002b72d8(&local_bc0,&local_bb0,local_600,&local_48,0x5a0);
      FUN_002a4dc0(&local_bc0,param_2,param_3,local_600,local_48);
      FUN_00229780(local_60,&local_bc0);
      *(undefined4 *)(param_2 + 0x78) = 0;
      *(undefined4 *)(param_2 + 0xb4) = 0xffffffff;
      *(undefined8 *)(param_2 + 0x80) = 0;
      *(undefined8 *)(param_2 + 0x88) = 0;
      *(undefined4 *)(param_2 + 0x90) = 0;
      *(undefined2 *)(param_2 + 0xb8) = 0xffff;
      *(undefined8 *)(param_2 + 0xbc) = 0;
      *(undefined8 *)(param_2 + 200) = 0;
      *(undefined2 *)(param_2 + 0xd0) = 0;
      *(undefined1 *)(param_2 + 0xd2) = 0;
      memset((void *)(param_2 + 0x94),0xff,0x20);
      *(long *)(param_2 + 0x88) = param_4;
      *(int *)(param_2 + 0x90) = param_5;
      *(undefined4 *)(param_2 + 0x78) = 4;
      *(char *)(param_2 + 0xb9) = param_6;
      *(undefined8 *)(param_2 + 200) = param_3;
      local_bc0 = 0;
      local_44 = 0;
      nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_bbc,(Result *)&local_44);
    }
  }
  else {
    piVar1 = local_60;
  }
  FUN_002296c4(param_1,piVar1);
  return;
}


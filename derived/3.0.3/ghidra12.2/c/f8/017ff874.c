
void FUN_017ff874(long param_1,int param_2,ulong param_3,uint param_4)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  byte bVar4;
  undefined *local_c8;
  char *local_c0;
  undefined4 local_b8;
  char local_b4 [127];
  undefined1 local_35;
  
  if (*(char *)(param_1 + 0x144) != '\0') {
    bVar4 = 0x80;
    if ((param_3 & 1) == 0) {
      bVar4 = 0;
    }
    *(byte *)(param_1 + 0x13c) = bVar4 | *(byte *)(param_1 + 0x13c) & 0x7f;
    if (param_2 == -1) {
      *(undefined4 *)(param_1 + 0x1fc) = 0xffffffff;
    }
    else {
      local_35 = 0;
      local_b8 = 0x80;
      local_c0 = local_b4;
      local_b4[0] = '\0';
      local_c8 = PTR_DAT_04bb2d88 + 0x10;
      FUN_01afe7a0(&local_c8,param_2);
      puVar3 = PTR_DAT_04bb37e0;
      puVar2 = PTR_DAT_04bb3170;
      if (*local_c0 == '\0') {
        return;
      }
      *(int *)(param_1 + 0x1fc) = param_2;
      uVar1 = *(undefined4 *)(puVar3 + 4);
      *(undefined4 *)(param_1 + 0xf4) = *(undefined4 *)puVar3;
      *(undefined4 *)(param_1 + 0xf8) = uVar1;
      *(undefined2 *)(param_1 + 0xfc) = *(undefined2 *)puVar2;
    }
    if ((param_4 & 1) != 0) {
      FUN_017ef108(param_1,0,0);
      FUN_017eff3c(param_1,0,0);
      FUN_017f0b3c(param_1);
    }
  }
  return;
}


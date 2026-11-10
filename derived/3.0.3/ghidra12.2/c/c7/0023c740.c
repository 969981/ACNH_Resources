
void FUN_0023c740(int *param_1,long param_2)

{
  undefined1 auStack_88 [16];
  undefined *local_78;
  undefined1 auStack_70 [24];
  undefined2 local_58;
  long local_50;
  undefined2 local_48;
  undefined4 local_44;
  undefined4 local_3c;
  undefined1 auStack_38 [8];
  undefined4 local_30;
  
  FUN_0024065c(auStack_38);
  local_3c = 0;
  FUN_002406a4(param_1,auStack_38,param_2 + 0xd8,&local_3c,0x5d8);
  if (*param_1 == 0) {
    local_48 = (undefined2)local_3c;
    local_44 = local_30;
    local_50 = param_2 + 0xd8;
    FUN_00227258(&local_78);
    FUN_0021f5a0(auStack_70,0x7f000001);
    local_58 = 0xc000;
    FUN_0023d6e0(auStack_88,param_2,&local_50,&local_78,1,0,1);
    FUN_00229780(param_1,auStack_88);
    local_78 = PTR_DAT_04bcba18 + 0x10;
    FUN_0021f584(auStack_70);
    return;
  }
  return;
}


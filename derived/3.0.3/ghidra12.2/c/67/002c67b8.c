
void FUN_002c67b8(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 local_50;
  ErrorResultVariant aEStack_4c [20];
  undefined2 local_38;
  undefined4 local_24;
  
  if (param_3 != 0) {
    *(long *)(param_2 + 0x1868) = param_3;
    lVar1 = FUN_002c3ab4(param_3);
    if (((long)*(int *)(lVar1 + 8) & 0x7ffffffffffffffU) != 0) {
      FUN_0021f508(&local_50,lVar1 + 0x10);
      lVar1 = param_2 + 0xd0;
      local_38 = 0x8237;
      FUN_002b44e4(lVar1,&local_50);
      local_58 = 0;
      local_60 = 0x40000;
      FUN_002b493c(lVar1,&local_60);
      FUN_002b4368(lVar1);
      uVar2 = FUN_0021fea0();
      if ((uVar2 & 1) == 0) {
        local_58 = 0;
        local_60 = 1;
        FUN_002b493c(lVar1,&local_60);
        local_60 = CONCAT44(local_60._4_4_,0x10c08);
      }
      else {
        *(undefined4 *)(param_2 + 0x17d0) = 0;
        local_60 = local_60 & 0xffffffff00000000;
        *(undefined4 *)(param_2 + 0x17c8) = 0;
        *(undefined1 *)(param_2 + 0x17cc) = 0;
        *(undefined1 *)(param_2 + 0x1858) = 0;
      }
      local_24 = 0;
      nn::err::ErrorResultVariant::ErrorResultVariant
                ((ErrorResultVariant *)((long)&local_60 + 4),(Result *)&local_24);
      FUN_002296c4(param_1,&local_60);
      FUN_0021f584(&local_50);
      return;
    }
  }
  local_60 = (ulong)local_60._4_4_ << 0x20;
  local_50 = 0x10c08;
  nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_4c,(Result *)&local_60);
  FUN_002296c4(param_1,&local_50);
  return;
}


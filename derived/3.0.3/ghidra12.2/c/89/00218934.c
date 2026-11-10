
void FUN_00218934(undefined8 param_1,long param_2)

{
  char cVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 local_38;
  undefined4 local_24;
  
  if ((*(int *)(param_2 + 0x50) != 1) && (*(int *)(param_2 + 0x50) != 4)) {
    cVar1 = FUN_002aaa44();
    if ((cVar1 != -3) && (lVar2 = FUN_002aaa4c(param_2), lVar2 != 0)) {
      lVar2 = FUN_002aaa28(param_2);
      lVar3 = FUN_002aaa4c(param_2);
      if (lVar2 != lVar3) {
        local_38 = 0;
        *(undefined4 *)(param_2 + 0x50) = 1;
        FUN_002282f0(&local_38);
        *(long *)(param_2 + 0x58) = local_38;
        uVar4 = FUN_002aaa4c(param_2);
        FUN_00218bb8(param_1,param_2,uVar4);
        local_24 = 0;
        local_38 = CONCAT44(local_38._4_4_,0x2c0a);
        nn::err::ErrorResultVariant::ErrorResultVariant
                  ((ErrorResultVariant *)((long)&local_38 + 4),(Result *)&local_24);
        return;
      }
      local_38 = (ulong)local_38._4_4_ << 0x20;
      *(undefined4 *)(param_2 + 0x50) = 3;
      *(undefined1 *)(param_2 + 0x70) = 1;
      goto LAB_002189b8;
    }
  }
  local_38 = CONCAT44(local_38._4_4_,0x10c08);
LAB_002189b8:
  local_24 = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((long)&local_38 + 4),(Result *)&local_24);
  FUN_002296c4(param_1,&local_38);
  return;
}


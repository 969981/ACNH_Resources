
bool FUN_0019c820(long param_1,ulong param_2)

{
  bool bVar1;
  ulong uVar2;
  undefined1 auStack_68 [56];
  char local_24 [4];
  
  local_24[0] = '\0';
  uVar2 = FUN_00198d80((int)param_2 != 0,param_2,0,PTR_LAB_04bcc168,param_1,local_24);
  if ((uVar2 & 1) != 0) {
    return local_24[0] != '\0';
  }
  FUN_0018af38(auStack_68,10,param_2 & 0xffffffff);
  FUN_00189428(auStack_68);
  if (*(int *)(param_1 + 0x40) == 5) {
    bVar1 = true;
  }
  else {
    do {
      uVar2 = FUN_00189434(auStack_68,"C:/home/ws/Master/Pack/7923402a/OnlineCore/src/Core/Job.cpp",
                           0xd0,"GetState()!=Complete");
      if ((uVar2 & 1) == 0) break;
    } while (*(int *)(param_1 + 0x40) != 5);
    bVar1 = *(int *)(param_1 + 0x40) == 5;
  }
  FUN_0018afc4(auStack_68);
  return bVar1;
}


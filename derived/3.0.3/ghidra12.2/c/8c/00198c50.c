
bool FUN_00198c50(long param_1,ulong param_2)

{
  ulong uVar1;
  uint uVar2;
  undefined1 auStack_68 [56];
  char local_24 [4];
  
  uVar2 = *(uint *)(param_1 + 0x14);
  if (uVar2 != 1) {
    return uVar2 == 4 || (uVar2 & 0xfffffffe) == 2;
  }
  local_24[0] = '\0';
  uVar1 = FUN_00198d80((int)param_2 != 0,param_2,0,PTR_LAB_04bcc078,param_1,local_24);
  if ((uVar1 & 1) != 0) {
    return local_24[0] != '\0';
  }
  FUN_0018af38(auStack_68,10,param_2 & 0xffffffff);
  FUN_00189428(auStack_68);
  uVar2 = *(uint *)(param_1 + 0x14);
  do {
    if (uVar2 != 1) break;
    FUN_0018aff4(auStack_68);
    FUN_00198f30();
    uVar1 = FUN_00189434(auStack_68,
                         "C:/home/ws/Master/Pack/7923402a/OnlineCore/src/Core/CallContext.cpp",0x1d5
                         ,"GetState() == CallContext::CallInProgress");
    uVar2 = *(uint *)(param_1 + 0x14);
  } while ((uVar1 & 1) != 0);
  FUN_0018afc4(auStack_68);
  return uVar2 == 4 || (uVar2 & 0xfffffffe) == 2;
}



ulong FUN_0014a68c(long *param_1,undefined8 param_2,undefined4 param_3,long *param_4)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  int local_5c;
  long local_58;
  
  lVar6 = *param_1;
  *param_4 = 0;
  if (*(long *)(lVar6 + 0xe8) != 0) {
    FUN_0014b7c4(lVar6,3,2);
  }
  lVar2 = FUN_0014a31c(param_1,param_2,param_3);
  local_58 = lVar2;
  if (lVar2 == 0) {
    uVar5 = 0xffffffff;
  }
  else {
    FUN_0014d430(lVar6,"Hostname %s was found in DNS cache\n",param_2);
    uVar5 = 0;
    *(long *)(lVar2 + 0x10) = *(long *)(lVar2 + 0x10) + 1;
  }
  if (*(long *)(lVar6 + 0xe8) != 0) {
    FUN_0014b80c(lVar6,3);
  }
  if (lVar2 == 0) {
    local_5c = 0;
    uVar3 = FUN_0015953c(param_1);
    if ((uVar3 & 1) == 0) {
      return 0xffffffff;
    }
    if (*(long *)(lVar6 + 0xf20) != 0) {
      FUN_00149fe4(lVar6,1);
      iVar1 = (**(code **)(lVar6 + 0xf20))
                        (*(undefined8 *)(lVar6 + 0x12a8),0,*(undefined8 *)(lVar6 + 0xf28));
      FUN_00149fe4(lVar6,0);
      if (iVar1 != 0) {
        return 0xffffffff;
      }
    }
    if ((*(byte *)(lVar6 + 0xf67) & 1) == 0) {
      lVar4 = thunk_FUN_00157734(param_1,param_2,param_3,&local_5c);
    }
    else {
      lVar4 = FUN_00179a74(param_1,param_2,param_3,&local_5c);
    }
    if (lVar4 == 0) {
      if (local_5c == 0) {
        lVar2 = 0;
      }
      else {
        iVar1 = FUN_0014a878(param_1,&local_58);
        if (iVar1 != 0) {
          return 0xffffffff;
        }
        uVar5 = (ulong)(local_58 == 0);
        lVar2 = local_58;
      }
    }
    else {
      if (*(long *)(lVar6 + 0xe8) != 0) {
        FUN_0014b7c4(lVar6,3,2);
      }
      lVar2 = FUN_0014a41c(lVar6,lVar4,param_2,param_3);
      if (*(long *)(lVar6 + 0xe8) != 0) {
        FUN_0014b80c(lVar6,3);
      }
      if (lVar2 == 0) {
        FUN_0014b378(lVar4);
      }
      else {
        uVar5 = 0;
      }
    }
  }
  *param_4 = lVar2;
  return uVar5;
}


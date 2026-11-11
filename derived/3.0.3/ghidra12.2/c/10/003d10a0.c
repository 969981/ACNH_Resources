
bool FUN_003d10a0(long *param_1,int param_2,undefined8 param_3,uint param_4,undefined8 param_5,
                 int param_6)

{
  undefined4 uVar1;
  bool bVar2;
  undefined4 uVar3;
  long lVar4;
  ulong uVar5;
  uint *puVar6;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined1 local_6c;
  undefined1 auStack_60 [16];
  
  uVar3 = FUN_003b8448(param_1[1]);
  if (((param_4 >> 1 & 1) != 0) &&
     (lVar4 = FUN_003d1610(param_1,uVar3,param_3,param_5,0), lVar4 == 0)) {
    return false;
  }
  if ((param_4 >> 3 & 1) != 0) {
    lVar4 = (**(code **)(*param_1 + 0x20))(param_1,uVar3);
    if (lVar4 != 0) {
      local_74 = 0;
      local_70 = (uint)local_70._2_2_ << 0x10;
      uVar5 = FUN_003b8698(param_1[1],param_2,&local_78);
      uVar3 = local_78;
      if ((uVar5 & 1) == 0) {
        return false;
      }
      FUN_003d2534(auStack_60,lVar4);
      local_6c = 0;
      local_70 = 0;
      uVar5 = FUN_003d2694(auStack_60,&local_78,uVar3,0);
      uVar1 = local_74;
      uVar3 = local_78;
      if ((uVar5 & 1) == 0) {
        return false;
      }
      local_78 = 0xffffffff;
      local_70 = local_70 & 0xffffff00;
      uVar5 = FUN_003b8858(param_1[1],uVar3,&local_78);
      if ((uVar5 & 1) != 0) {
        if ((char)local_70 == '\0') {
          uVar3 = FUN_003b8448(param_1[1],uVar3);
          uVar5 = FUN_003d1610(param_1,uVar3,param_3,param_5,1);
        }
        else {
          uVar5 = FUN_003d1728(param_1,uVar3,uVar1,param_3,param_5);
          uVar5 = uVar5 & 1;
        }
        if (uVar5 != 0) {
          return true;
        }
      }
      return false;
    }
    if (param_6 != -1) {
      param_2 = param_6;
    }
    puVar6 = (uint *)FUN_003b8a10(param_1[1],param_2);
    if (*puVar6 != 0) {
      uVar5 = 1;
      do {
        uVar3 = FUN_003b8448(param_1[1],puVar6[uVar5]);
        lVar4 = FUN_003d1610(param_1,uVar3,param_3,param_5,1);
        if (lVar4 == 0) {
          return false;
        }
        bVar2 = uVar5 < *puVar6;
        uVar5 = uVar5 + 1;
      } while (bVar2);
      return lVar4 != 0;
    }
  }
  return true;
}


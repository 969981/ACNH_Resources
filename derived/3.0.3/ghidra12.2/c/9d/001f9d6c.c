
bool FUN_001f9d6c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  bool bVar1;
  int iVar2;
  ulong uVar3;
  undefined1 auStack_3d8 [664];
  undefined1 auStack_140 [56];
  undefined1 auStack_108 [216];
  
  FUN_00193120(auStack_108);
  uVar3 = FUN_00194da8(auStack_108,param_4);
  if ((uVar3 & 1) == 0) {
    bVar1 = false;
  }
  else {
    FUN_00196bb8(auStack_140,param_2);
    uVar3 = FUN_00193770(auStack_108,auStack_140);
    if ((uVar3 & 1) == 0) {
      bVar1 = false;
    }
    else {
      FUN_00195604(auStack_3d8);
      uVar3 = FUN_001953d0(auStack_3d8,param_4);
      if ((uVar3 & 1) == 0) {
        bVar1 = false;
      }
      else {
        iVar2 = FUN_00195a0c(auStack_3d8,auStack_140,param_3);
        bVar1 = iVar2 == 0;
      }
      FUN_001956e4(auStack_3d8);
    }
    FUN_00196ce0(auStack_140);
  }
  FUN_00193178(auStack_108);
  return bVar1;
}


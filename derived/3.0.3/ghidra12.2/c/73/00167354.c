
int FUN_00167354(long param_1,byte param_2,int param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  long lVar4;
  
  if (param_3 == 0) {
    iVar3 = -0x1f5;
  }
  else {
    lVar4 = FUN_001689e8(param_1 + 0x890,0x98);
    if (lVar4 == 0) {
      iVar3 = -0x385;
    }
    else {
      FUN_0016bbec();
      uVar1 = *param_4;
      uVar2 = param_4[1];
      *(undefined1 *)(lVar4 + 0x71) = 0;
      *(byte *)(lVar4 + 0x70) = param_2 & 1;
      *(undefined8 *)(lVar4 + 0x60) = uVar1;
      *(undefined8 *)(lVar4 + 0x68) = uVar2;
      FUN_00167768(lVar4,0,param_3);
      iVar3 = FUN_0016ca1c(param_1,lVar4);
      if (iVar3 != 0) {
        FUN_00167784(lVar4);
        FUN_001689f8(param_1 + 0x890,lVar4);
      }
    }
  }
  return iVar3;
}


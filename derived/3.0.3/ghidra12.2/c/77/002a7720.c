
void FUN_002a7720(undefined8 param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined4 local_44;
  ErrorResultVariant aEStack_40 [12];
  int local_34;
  ErrorResultVariant aEStack_30 [12];
  undefined4 local_24;
  
  local_34 = 0;
  local_44 = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_30,(Result *)&local_44);
  FUN_002a87e8(&local_44,param_2);
  FUN_00229780(&local_34,&local_44);
  if (local_34 != 0) {
LAB_002a776c:
    FUN_002296c4(param_1,&local_34);
    return;
  }
  *(undefined8 *)(param_2 + 0x30) = 0;
  uVar2 = FUN_0021f454();
  lVar3 = FUN_00285d10(0x88,uVar2);
  if (lVar3 == 0) {
    *(undefined8 *)(param_2 + 0xd8) = 0;
  }
  else {
    FUN_0022c860();
    *(long *)(param_2 + 0xd8) = lVar3;
    uVar2 = FUN_0021f454();
    lVar3 = FUN_00285d10(0x9750,uVar2);
    if (lVar3 == 0) {
      *(undefined8 *)(param_2 + 0xe0) = 0;
    }
    else {
      lVar4 = 0;
      do {
        puVar1 = (undefined8 *)(lVar3 + lVar4);
        lVar4 = lVar4 + 0x18;
        puVar1[2] = 0;
        *puVar1 = 0;
        puVar1[1] = 0;
      } while (lVar4 != 0x9750);
      *(long *)(param_2 + 0xe0) = lVar3;
      FUN_0022c870(&local_44,*(undefined8 *)(param_2 + 0xd8),lVar3,0x9750);
      FUN_00229780(&local_34,&local_44);
      if (local_34 != 0) goto LAB_002a776c;
      uVar2 = FUN_0021f454();
      lVar3 = FUN_00285d10(0x5a0,uVar2);
      if (lVar3 != 0) {
        lVar4 = 0;
        do {
          puVar1 = (undefined8 *)(lVar3 + lVar4);
          lVar4 = lVar4 + 0x18;
          puVar1[2] = 0;
          *puVar1 = 0;
          puVar1[1] = 0;
        } while (lVar4 != 0x5a0);
        *(long *)(param_2 + 0xe8) = lVar3;
        local_44 = 0;
        goto LAB_002a7874;
      }
      *(undefined8 *)(param_2 + 0xe8) = 0;
    }
  }
  local_44 = 0x10c01;
LAB_002a7874:
  local_24 = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_40,(Result *)&local_24);
  FUN_002296c4(param_1,&local_44);
  return;
}



uint FUN_00263220(long *param_1,undefined8 param_2,long param_3)

{
  ushort uVar1;
  uint uVar2;
  undefined4 uVar3;
  ulong uVar4;
  long lVar5;
  undefined1 *puVar6;
  ulong uVar7;
  undefined4 local_40;
  ErrorResultVariant aEStack_3c [12];
  undefined4 local_24;
  
  if (param_3 != 0) {
    param_1[0xb] = param_3;
    FUN_00220f78(param_3);
  }
  uVar2 = (**(code **)(*param_1 + 0x30))(param_1);
  if ((uVar2 & 1) != 0) {
    FUN_002b415c(param_1[0xe],param_2);
    local_40 = 0;
    local_24 = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_3c,(Result *)&local_24);
    FUN_00229780((long)param_1 + 0xa4,&local_40);
    uVar1 = *(ushort *)((long)param_1 + 0x6e);
    *(undefined4 *)(param_1 + 0x11) = 0;
    *(undefined4 *)(param_1 + 0xd) = 0;
    *(undefined4 *)((long)param_1 + 0x94) = 0;
    if (uVar1 != 0) {
      lVar5 = param_1[0x13];
      uVar4 = (ulong)uVar1 & 3;
      if (uVar1 < 4) {
        uVar7 = 0;
      }
      else {
        uVar7 = 0;
        do {
          *(undefined4 *)(lVar5 + uVar7) = 0;
          uVar7 = uVar7 + 4;
        } while (((ulong)uVar1 & 0xfffc) != uVar7);
      }
      if ((uVar1 & 3) != 0) {
        puVar6 = (undefined1 *)(lVar5 + uVar7);
        do {
          uVar4 = uVar4 - 1;
          *puVar6 = 0;
          puVar6 = puVar6 + 1;
        } while (uVar4 != 0);
      }
    }
    uVar4 = FUN_0026c550(DAT_04c603c8);
    if ((uVar4 & 1) == 0) {
      DAT_04c5fcb0 = FUN_002b43f4(param_2);
    }
    uVar3 = FUN_002b43f4(param_2);
    *(undefined4 *)((long)param_1 + 0xb4) = uVar3;
    lVar5 = FUN_0026c868(DAT_04c603c8);
    *(undefined1 *)(lVar5 + 0x106) = 1;
    param_1[0x17] = *(long *)(DAT_04c5fbb0 + 0x30);
  }
  return uVar2 & 1;
}


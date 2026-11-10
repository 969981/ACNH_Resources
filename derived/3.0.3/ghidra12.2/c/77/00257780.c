
/* WARNING: Type propagation algorithm not settling */

void FUN_00257780(undefined8 param_1,long *param_2,long param_3)

{
  byte bVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  undefined1 *puVar6;
  ulong uVar7;
  undefined4 local_40;
  ErrorResultVariant aEStack_3c [12];
  undefined4 local_24;
  
  (**(code **)(*param_2 + 0x1c8))();
  param_2[10] = param_3;
  if (param_2[0x68] == 0) {
    uVar7 = (**(code **)(*param_2 + 0xa8))(param_2);
    uVar2 = FUN_0021f454();
    lVar3 = FUN_00285d10(uVar7 & 0xffffffff,uVar2);
    if (((uint)uVar7 != 0) && (lVar3 != 0)) {
      uVar4 = uVar7 & 3;
      if ((uint)uVar7 < 4) {
        uVar5 = 0;
      }
      else {
        uVar5 = 0;
        do {
          *(undefined4 *)(lVar3 + uVar5) = 0;
          uVar5 = uVar5 + 4;
        } while ((uVar7 & 0xfffffffc) != uVar5);
      }
      if (uVar4 != 0) {
        puVar6 = (undefined1 *)(lVar3 + uVar5);
        do {
          uVar4 = uVar4 - 1;
          *puVar6 = 0;
          puVar6 = puVar6 + 1;
        } while (uVar4 != 0);
      }
    }
    param_2[0x68] = lVar3;
    lVar3 = param_2[0x6e];
  }
  else {
    lVar3 = param_2[0x6e];
  }
  if (lVar3 == 0) {
    lVar3 = (**(code **)(*param_2 + 0x218))(param_2);
    param_2[0x6e] = lVar3;
    FUN_00257a08(param_2);
    lVar3 = param_2[0xa8];
  }
  else {
    FUN_00257a08(param_2);
    lVar3 = param_2[0xa8];
  }
  if (lVar3 == 0) {
    uVar2 = FUN_0021f454();
    lVar3 = FUN_00285d10(0x30,uVar2);
    if (lVar3 != 0) {
      FUN_00220ebc(lVar3);
    }
    param_2[0xa8] = lVar3;
    lVar3 = param_2[0x85];
  }
  else {
    lVar3 = param_2[0x85];
  }
  if (lVar3 == 0) {
    uVar2 = FUN_0021f454();
    lVar3 = FUN_00285d10(0x30,uVar2);
    if (lVar3 != 0) {
      FUN_00220ebc(lVar3);
    }
    param_2[0x85] = lVar3;
    lVar3 = param_2[0x87];
  }
  else {
    lVar3 = param_2[0x87];
  }
  if (lVar3 == 0) {
    uVar7 = (**(code **)(*param_2 + 0xa8))(param_2);
    uVar2 = FUN_0021f454();
    lVar3 = FUN_00285d10(uVar7 & 0xffffffff,uVar2);
    if (((uint)uVar7 != 0) && (lVar3 != 0)) {
      uVar4 = uVar7 & 3;
      if ((uint)uVar7 < 4) {
        uVar5 = 0;
      }
      else {
        uVar5 = 0;
        do {
          *(undefined4 *)(lVar3 + uVar5) = 0;
          uVar5 = uVar5 + 4;
        } while ((uVar7 & 0xfffffffc) != uVar5);
      }
      if (uVar4 != 0) {
        puVar6 = (undefined1 *)(lVar3 + uVar5);
        do {
          uVar4 = uVar4 - 1;
          *puVar6 = 0;
          puVar6 = puVar6 + 1;
        } while (uVar4 != 0);
      }
    }
    param_2[0x87] = lVar3;
    lVar3 = param_2[0x89];
  }
  else {
    lVar3 = param_2[0x89];
  }
  if (lVar3 == 0) {
    bVar1 = *(byte *)((long)param_2 + 0x484);
    uVar7 = (ulong)bVar1;
    uVar2 = FUN_0021f454();
    lVar3 = FUN_00285d10(uVar7,uVar2);
    if ((bVar1 != 0) && (lVar3 != 0)) {
      uVar4 = uVar7 & 3;
      if (bVar1 < 4) {
        uVar5 = 0;
      }
      else {
        uVar5 = 0;
        do {
          *(undefined4 *)(lVar3 + uVar5) = 0;
          uVar5 = uVar5 + 4;
        } while ((uVar7 & 0xfc) != uVar5);
      }
      if ((bVar1 & 3) != 0) {
        puVar6 = (undefined1 *)(lVar3 + uVar5);
        do {
          uVar4 = uVar4 - 1;
          *puVar6 = 0;
          puVar6 = puVar6 + 1;
        } while (uVar4 != 0);
      }
    }
    param_2[0x89] = lVar3;
  }
  local_40 = 0;
  local_24 = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_3c,(Result *)&local_24);
  FUN_002296c4(param_1,&local_40);
  return;
}


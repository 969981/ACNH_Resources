
uint FUN_01ae3a80(undefined8 param_1)

{
  undefined *puVar1;
  ushort uVar2;
  int iVar3;
  uint uVar4;
  ushort *puVar5;
  ushort uVar6;
  uint uVar7;
  
  iVar3 = FUN_01afcfa0();
  if ((iVar3 == 0) || (puVar5 = (ushort *)FUN_01afd600(param_1), puVar5 == (ushort *)0x0)) {
    uVar7 = 0;
  }
  else {
    uVar7 = *puVar5 >> 5 & 0xff;
  }
  iVar3 = FUN_01afcfa0(param_1);
  if ((iVar3 == 0) || (puVar5 = (ushort *)FUN_01afd600(param_1), puVar5 == (ushort *)0x0)) {
    uVar6 = 0;
  }
  else {
    uVar2 = *puVar5 >> 3 & 3;
    uVar6 = 0;
    if (uVar2 != 3) {
      uVar6 = uVar2;
    }
  }
  if (uVar6 == 2) {
    if (uVar7 < 100) {
      uVar4 = 100;
    }
    else {
      uVar4 = 100;
      if (DAT_04c487d4 != -1) {
        puVar1 = PTR_DAT_04bc39f8 + (ulong)(uint)(int)DAT_04c487d4 * 8;
        if (0xff < (uint)(int)DAT_04c487d4) {
          puVar1 = PTR_DAT_04bc39f8;
        }
        uVar4 = 100;
        if ((*(uint *)(puVar1 + 4) & 1) != 0) {
          uVar4 = 0x6c;
        }
      }
    }
  }
  else if (uVar6 == 1) {
    uVar4 = 0x100;
  }
  else if (uVar6 == 0) {
    uVar4 = FUN_01afcfa0(param_1);
    if (uVar4 < 2) {
      uVar4 = 1;
    }
  }
  else {
    uVar4 = 0;
  }
  if ((int)uVar4 <= (int)uVar7) {
    uVar7 = 0;
  }
  return uVar7;
}



bool FUN_02d6f0e0(byte *param_1,undefined8 param_2)

{
  long lVar1;
  bool bVar2;
  uint uVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined1 auStack_175c [58];
  undefined1 auStack_1722 [2];
  undefined1 auStack_1720 [5824];
  int local_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 local_50;
  int iStack_4c;
  byte local_44 [4];
  
  local_44[0] = *param_1;
  if (7 < local_44[0]) {
    local_44[0] = 0xff;
  }
  lVar4 = FUN_025830c0(DAT_055021a0,local_44,1);
  if (lVar4 == 0) {
    bVar2 = false;
  }
  else {
    if ((*(long **)(lVar4 + 0x28) == (long *)0x0) ||
       (puVar5 = (undefined8 *)**(long **)(lVar4 + 0x28), puVar5 == (undefined8 *)0x0)) {
      uVar3 = 1;
    }
    else {
      uVar3 = (**(code **)*puVar5)();
      uVar3 = uVar3 ^ 1;
    }
    lVar1 = *(long *)(lVar4 + 0x10) + *(long *)(lVar4 + 8);
    FUN_007ef010(auStack_1722,param_2);
    FUN_007e4920(auStack_1720,auStack_1722);
    FUN_007e6230(auStack_175c,auStack_1720);
    local_58 = auStack_175c._36_4_;
    uStack_54 = auStack_175c._40_4_;
    local_60 = auStack_175c._28_4_;
    uStack_5c = auStack_175c._32_4_;
    local_50 = auStack_175c._44_4_;
    iStack_4c = auStack_175c._48_4_;
    if (*(int *)(lVar1 + 0xc154) == local_60) {
      bVar2 = (CONCAT44(local_58,uStack_5c) == *(long *)(lVar1 + 0xc158) &&
              CONCAT44(local_50,uStack_54) == *(long *)(lVar1 + 0xc160)) &&
              iStack_4c == *(int *)(lVar1 + 0xc168);
    }
    else {
      bVar2 = false;
    }
    if ((((uVar3 & 1) == 0) && (*(long *)(lVar4 + 0x28) != 0)) &&
       (puVar5 = *(undefined8 **)(*(long *)(lVar4 + 0x28) + 8), puVar5 != (undefined8 *)0x0)) {
      (**(code **)*puVar5)();
    }
  }
  return bVar2;
}


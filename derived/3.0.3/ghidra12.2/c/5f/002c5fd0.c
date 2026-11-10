
long FUN_002c5fd0(long param_1,undefined8 param_2)

{
  long lVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  undefined **local_a0;
  undefined1 auStack_98 [32];
  undefined **local_78;
  undefined1 auStack_70 [32];
  
  lVar5 = *(long *)(param_1 + 0x10);
  if (lVar5 != param_1 + 8) {
    do {
      lVar1 = lVar5 + 0x10;
      iVar2 = FUN_002b43fc(lVar1);
      iVar3 = FUN_002b43fc(param_2);
      if (iVar2 == iVar3) {
        return lVar1;
      }
      iVar2 = FUN_002b43fc(lVar1);
      iVar3 = FUN_002b43fc(param_2);
      if (iVar2 != iVar3) {
        FUN_002b4378(&local_78,lVar1);
        FUN_002b4378(&local_a0,param_2);
        uVar4 = FUN_002200e4(auStack_70,auStack_98);
        local_a0 = &PTR_LAB_04840580;
        FUN_0021f584(auStack_98);
        local_78 = &PTR_LAB_04840580;
        FUN_0021f584(auStack_70);
        if ((uVar4 & 1) != 0) {
          return lVar1;
        }
      }
      lVar5 = *(long *)(lVar5 + 8);
    } while (lVar5 != param_1 + 8);
  }
  return 0;
}


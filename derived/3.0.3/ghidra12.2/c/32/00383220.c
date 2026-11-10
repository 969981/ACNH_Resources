
void FUN_00383220(long param_1,long param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5
                 )

{
  byte bVar1;
  undefined4 uVar2;
  long lVar3;
  undefined8 uVar4;
  int iVar5;
  long lVar6;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  *(undefined4 *)(param_1 + 0xe0) = *(undefined4 *)(param_2 + 0xe0);
  *(undefined4 *)(param_1 + 0xe4) = *(undefined4 *)(param_2 + 0xe4);
  *(undefined4 *)(param_1 + 0xe8) = *(undefined4 *)(param_2 + 0xe8);
  *(undefined4 *)(param_1 + 0xec) = *(undefined4 *)(param_2 + 0xec);
  if (*(byte *)(param_2 + 0xf0) < 4) {
    bVar1 = *(byte *)(param_2 + 0xf1);
    if (bVar1 != 0) {
      lVar3 = param_1 + 0xf0;
      FUN_00364770(lVar3);
      FUN_003647ac(lVar3,bVar1);
      FUN_00364800(lVar3,(ulong)bVar1);
      lVar6 = 0;
      iVar5 = 0;
      do {
        FUN_003648c4(lVar3,iVar5,*(long *)(param_2 + 0xf8) + lVar6);
        lVar6 = lVar6 + 0x20;
        iVar5 = iVar5 + 1;
      } while ((ulong)bVar1 * 0x20 != lVar6);
    }
  }
  else {
    FUN_0038339c(param_1,param_2);
  }
  uVar4 = *(undefined8 *)(param_2 + 0xd8);
  uStack_78 = 0;
  local_80 = param_3;
  local_70 = param_4;
  uStack_68 = param_5;
  lVar3 = FUN_00367b30(0x50);
  if (lVar3 != 0) {
    FUN_0037700c(lVar3,uVar4,&local_80);
  }
  *(long *)(param_1 + 0xd8) = lVar3;
  FUN_0037c748(param_1,6);
  lVar3 = FUN_0037c9ac(param_1,0x12);
  if (lVar3 != 0) {
    lVar6 = FUN_0037e530(param_1);
    uVar4 = *(undefined8 *)(lVar6 + 0x20);
    lVar6 = FUN_0037e530(param_1);
    uVar4 = FUN_00386110(uVar4,*(undefined2 *)(lVar6 + 0x4a));
    uVar2 = FUN_0034e3c0(uVar4,4,3,"uProceduralShape");
    *(undefined4 *)(lVar3 + 4) = uVar2;
  }
  return;
}



void FUN_00368c50(float param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  undefined4 uVar5;
  float fVar6;
  float local_24;
  
  lVar2 = param_2 + 0xa0;
  lVar1 = FUN_003874e0(lVar2);
  if (lVar1 != 0) {
    lVar1 = FUN_003874e0(lVar2,param_3);
    uVar5 = *(undefined4 *)(lVar1 + 0x40);
    local_24 = param_1;
    lVar1 = FUN_00387550(lVar2,param_3);
    FUN_0038d040(*(undefined4 *)(lVar1 + 0x30),*(undefined4 *)(lVar1 + 0x34),&local_24);
    fVar6 = *(float *)(lVar1 + 0x40);
    if (local_24 != fVar6) {
      *(float *)(lVar1 + 0x40) = local_24;
      FUN_003875a8(lVar2,lVar1 + 0x10,lVar1);
      for (lVar4 = *(long *)(lVar1 + 0x58); lVar4 != lVar1 + 0x50; lVar4 = *(long *)(lVar4 + 8)) {
        FUN_00387538(fVar6,local_24,lVar2,lVar4);
      }
      lVar2 = FUN_003874e0(lVar2,param_3);
      plVar3 = *(long **)(param_2 + 0xd8);
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x20))
                  (uVar5,*(undefined4 *)(lVar2 + 0x40),plVar3,*(undefined8 *)(param_2 + 8),param_3);
      }
    }
  }
  return;
}


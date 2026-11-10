
ulong FUN_001bd038(long param_1,long param_2,long param_3,uint param_4)

{
  ulong uVar1;
  undefined4 uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined1 auVar6 [16];
  undefined1 auStack_200 [144];
  undefined4 local_170;
  undefined1 auStack_168 [144];
  undefined1 auStack_d8 [144];
  undefined4 local_48;
  
  uVar3 = FUN_001e1884(param_3);
  if ((int)uVar3 != 0) {
    lVar4 = FUN_001e14d8(param_3);
    lVar5 = FUN_001e14d8(param_2);
    if ((lVar4 == lVar5) && (*(int *)(param_3 + 0x88) == *(int *)(param_2 + 0x88))) {
      uVar3 = 0;
    }
    else {
      uVar2 = *(undefined4 *)(param_1 + 0x20);
      FUN_001e1564(auStack_200,param_3);
      local_170 = uVar2;
      FUN_001e1564(auStack_168,param_2);
      FUN_001e1564(auStack_d8,auStack_200);
      local_48 = local_170;
      auVar6 = FUN_001df87c(param_1 + 8,auStack_168,auStack_168);
      FUN_001e1868(auStack_d8);
      FUN_001e1868(auStack_168);
      FUN_001e1868(auStack_200);
      uVar1 = auVar6._8_8_ & 0xff;
      uVar3 = (ulong)(uVar1 != 0);
      if ((uVar1 == 0) && ((param_4 & 1) != 0)) {
        uVar2 = *(undefined4 *)(param_1 + 0x20);
        FUN_001e15a8(auVar6._0_8_ + 0xb0,param_3);
        *(undefined4 *)(auVar6._0_8_ + 0x140) = uVar2;
        return 1;
      }
    }
  }
  return uVar3;
}


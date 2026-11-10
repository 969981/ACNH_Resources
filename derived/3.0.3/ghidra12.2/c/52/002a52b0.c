
void FUN_002a52b0(undefined8 param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  undefined8 uVar4;
  uint uVar5;
  undefined4 local_40;
  ErrorResultVariant aEStack_3c [12];
  undefined4 local_24;
  
  if (*(long *)(param_2 + 0x70) == 0) {
    local_40 = 0x10c08;
  }
  else {
    lVar1 = FUN_002aaa28();
    if ((lVar1 != 0) && (uVar2 = FUN_002aed20(*(undefined8 *)(param_2 + 0x70)), (uVar2 & 1) != 0)) {
      if (*(short *)(param_2 + 0x4e) != 0) {
        uVar5 = 0;
        do {
          lVar1 = FUN_002a5ccc(*(undefined8 *)(param_2 + 0x70),uVar5);
          if (lVar1 != 0) {
            plVar3 = (long *)FUN_002aaa64(param_2);
            uVar4 = FUN_002a5ccc(*(undefined8 *)(param_2 + 0x70),uVar5);
            uVar2 = (**(code **)(*plVar3 + 0x68))(plVar3,uVar4);
            if ((uVar2 & 1) == 0) goto LAB_002a5368;
          }
          uVar5 = uVar5 + 1;
        } while ((uVar5 & 0xffff) < (uint)*(ushort *)(param_2 + 0x4e));
      }
      uVar2 = FUN_002b2900(*(undefined8 *)(param_2 + 0x70));
      if ((uVar2 & 1) != 0) {
        local_40 = 0;
        goto LAB_002a5370;
      }
    }
LAB_002a5368:
    local_40 = 0x2c09;
  }
LAB_002a5370:
  local_24 = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_3c,(Result *)&local_24);
  FUN_002296c4(param_1,&local_40);
  return;
}


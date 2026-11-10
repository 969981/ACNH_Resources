
void FUN_002c3530(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  undefined1 auStack_c0 [16];
  undefined1 auStack_b0 [32];
  int local_90 [4];
  undefined1 auStack_80 [32];
  undefined1 auStack_60 [24];
  short local_48;
  
  FUN_0021f4e0(auStack_60);
  FUN_0021f4e0(auStack_80);
  if (((long)*(int *)(param_1 + 0x40) & 0x7ffffffffffffffU) != 0) {
    lVar2 = param_1 + 0x48;
    do {
      puVar4 = auStack_60;
      uVar1 = FUN_0021fea0(auStack_60);
      if ((uVar1 & 1) == 0) {
LAB_002c3580:
        FUN_0021f54c(puVar4,lVar2);
      }
      else {
        uVar1 = FUN_0021fea0(auStack_80);
        if ((((uVar1 & 1) == 0) && (uVar1 = FUN_0021fe7c(lVar2,auStack_60), (uVar1 & 1) != 0)) &&
           (*(short *)(lVar2 + 0x18) != local_48)) {
          puVar4 = auStack_80;
          goto LAB_002c3580;
        }
      }
      lVar2 = lVar2 + 0x20;
    } while (lVar2 != param_1 + (long)*(int *)(param_1 + 0x40) * 0x20 + 0x48);
  }
  uVar3 = *(undefined8 *)(param_1 + 0x200);
  FUN_0021f4e0(auStack_b0);
  FUN_002c5a60(local_90,uVar3,param_2,0,param_1 + 0x150,auStack_60,auStack_80,auStack_b0,param_3,
               param_4,1);
  FUN_0021f584(auStack_b0);
  if (local_90[0] != 0) {
    FUN_002296c4(auStack_c0,local_90);
    FUN_00220ff8(param_2,auStack_c0);
  }
  (**(code **)(**(long **)(param_1 + 0x200) + 0x50))();
  FUN_0021f584(auStack_80);
  FUN_0021f584(auStack_60);
  return;
}



byte FUN_00806470(short *param_1,long *param_2)

{
  char cVar1;
  long lVar2;
  bool bVar3;
  byte bVar4;
  ulong uVar5;
  undefined1 auStack_16d0 [5792];
  short local_18 [2];
  undefined1 auStack_14 [2];
  undefined1 auStack_12 [2];
  
  (**(code **)(*param_2 + 0x18))(param_2);
  (**(code **)(*param_2 + 0x18))(param_2);
  lVar2 = DAT_05abbc58;
  if ((char *)param_2[1] == "NpcPlayer") {
LAB_00806504:
    bVar4 = 0x58;
    if (DAT_05abbc58 != 0) {
      FUN_03737980(auStack_12,DAT_05abbc58);
      FUN_007ef010(auStack_14,auStack_12);
      FUN_007e4920(auStack_16d0,auStack_14);
      FUN_007e8e30(local_18,auStack_16d0);
      bVar4 = local_18[0] == *param_1;
    }
    bVar4 = lVar2 != 0 & bVar4;
  }
  else {
    uVar5 = 0;
    bVar3 = true;
    do {
      cVar1 = ((char *)param_2[1])[uVar5];
      if (cVar1 != "NpcPlayer"[uVar5]) break;
      if (cVar1 == '\0') {
        if (bVar3) goto LAB_00806504;
        break;
      }
      bVar3 = uVar5 < 0x80000;
      uVar5 = uVar5 + 1;
    } while (uVar5 != 0x80001);
    bVar4 = 0;
  }
  return bVar4;
}


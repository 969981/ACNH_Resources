
void FUN_03867620(long param_1)

{
  undefined4 uVar1;
  ulong uVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  undefined *local_50;
  undefined4 local_48;
  
  plVar3 = *(long **)(param_1 + 0x200);
  if ((plVar3 != (long *)0x0) && (plVar3[1] != 0)) {
    local_50 = PTR_DAT_04bc4e68 + 0x10;
    local_48 = 1;
    (**(code **)(*plVar3 + 0x18))(plVar3,&local_50);
    (**(code **)(plVar3[3] + 400))(0x3f800000,plVar3[1]);
  }
  FUN_03867430(param_1,1);
  plVar3 = *(long **)(param_1 + 0x218);
  if (plVar3 != (long *)0x0) {
    local_50 = (undefined *)CONCAT44(local_50._4_4_,1);
    *(undefined4 *)((long)plVar3 + 0x2c) = 1;
    uVar2 = FUN_03c83810(plVar3);
    if ((uVar2 & 1) != 0) {
      uVar1 = *(undefined4 *)((long)plVar3 + 0x24);
      *(int *)((long)plVar3 + 0x24) = (int)plVar3[5];
      *(undefined4 *)(plVar3 + 5) = uVar1;
      *(byte *)((long)plVar3 + 0x21) = *(byte *)((long)plVar3 + 0x21) ^ 1;
      (**(code **)(*plVar3 + 0x48))(plVar3);
      if ((long *)plVar3[10] != plVar3 + 9) {
        lVar5 = (long)*(int *)((long)plVar3 + 0x5c);
        plVar4 = (long *)(plVar3[10] - lVar5);
        do {
          (**(code **)(*plVar4 + 0x18))(plVar4,(int)plVar3[5],*(undefined4 *)((long)plVar3 + 0x24));
          plVar4 = (long *)(*(long *)((long)plVar4 + lVar5 + 8) - lVar5);
        } while (plVar4 != (long *)((long)(plVar3 + 9) - lVar5));
      }
    }
    FUN_03c835a0(plVar3);
  }
  return;
}


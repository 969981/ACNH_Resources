
void FUN_001afac0(long param_1,undefined8 param_2)

{
  long *plVar1;
  uint uVar2;
  undefined1 auStack_d8 [16];
  long local_c8;
  undefined1 auStack_b8 [8];
  undefined8 local_b0;
  undefined4 local_a8;
  char local_50;
  undefined1 local_4f;
  undefined1 local_48 [24];
  
  FUN_001b8014(auStack_b8);
  if (local_50 == '\0') {
    FUN_001b8590(auStack_b8);
    FUN_001e15a8(local_b0,param_2);
  }
  else {
    FUN_001e15a8(local_b0,param_2);
  }
  if (local_50 == '\0') {
    local_4f = 0;
    FUN_001b8590(auStack_b8);
  }
  local_4f = 0;
  local_a8 = 3;
  FUN_00197218(auStack_d8);
  local_48[0] = 0;
  FUN_00197478(auStack_d8,local_48,1);
  FUN_00197478(auStack_d8,param_1 + 0x28,4);
  FUN_00187810(local_48);
  FUN_00197540(auStack_d8,local_48);
  if (DAT_04be2248 != 0) {
    uVar2 = 0;
    do {
      plVar1 = *(long **)(param_1 + 0x30);
      if (plVar1 == (long *)0x0) {
        plVar1 = *(long **)(param_1 + 0x20);
        if (plVar1 != (long *)0x0) {
          if (local_50 == '\0') {
            FUN_001b8590(auStack_b8);
          }
          (**(code **)(*plVar1 + 0x30))
                    (local_48,plVar1,local_b0,(int)plVar1[1],(char)plVar1[3],local_c8,0,0);
        }
      }
      else {
        (**(code **)(*plVar1 + 0x18))
                  (plVar1,auStack_b8,*(long *)(local_c8 + 0x10) + *(long *)(local_c8 + 0x28),
                   *(undefined8 *)(local_c8 + 0x18),0);
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < DAT_04be2248);
  }
  FUN_00197350(auStack_d8);
  FUN_001b8504(auStack_b8);
  return;
}


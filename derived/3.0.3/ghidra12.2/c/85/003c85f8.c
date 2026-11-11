
void FUN_003c85f8(long *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  uint uVar2;
  long lVar3;
  undefined1 auStack_48 [24];
  
  if ((char)param_1[7] != '\0') {
    FUN_003c62e8(param_1);
  }
  lVar3 = param_1[0x28];
  if (lVar3 == 0) {
                    /* WARNING: Could not recover jumptable at 0x003c875c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x18))(param_1);
    return;
  }
  FUN_003d0094(auStack_48,*param_2);
  uVar1 = FUN_003d0134(auStack_48);
  FUN_003bdc6c(lVar3,uVar1,*(undefined4 *)((long)param_2 + 0x4c));
  FUN_003bdc78(lVar3);
  FUN_003c9240(param_1 + 0x4d,param_2[1]);
  FUN_003c8e90(param_1 + 0x3d,param_2[5],*(undefined1 *)(param_2 + 9));
  FUN_003c9240(param_1 + 0x50,param_2[2]);
  FUN_003c8e90(param_1 + 0x41,param_2[6],*(undefined1 *)((long)param_2 + 0x49));
  FUN_003c9240(param_1 + 0x53,param_2[3]);
  FUN_003c8e90(param_1 + 0x45,param_2[7],*(undefined1 *)((long)param_2 + 0x4a));
  FUN_003c9240(param_1 + 0x56,param_2[4]);
  FUN_003c8e90(param_1 + 0x49,param_2[8],*(undefined1 *)((long)param_2 + 0x4b));
  *(undefined1 *)(param_1 + 0x59) = 3;
  uVar2 = *(uint *)((long)param_2 + 0x54);
  if (uVar2 == 0) {
    uVar2 = *(uint *)(param_2 + 10) / 5;
  }
  *(uint *)(param_1 + 0x21) = uVar2;
  (**(code **)(*param_1 + 0x38))(param_1,1);
  uVar1 = FUN_003c0010();
  FUN_003c0080(uVar1,param_1 + 0x18);
  uVar1 = FUN_003ca198();
  FUN_003ca570(uVar1,param_1 + 0x1b);
  *(undefined1 *)((long)param_1 + 0x2ca) = 1;
  *(undefined4 *)(param_1 + 0x6c) = *(undefined4 *)(param_2 + 0xb);
  return;
}


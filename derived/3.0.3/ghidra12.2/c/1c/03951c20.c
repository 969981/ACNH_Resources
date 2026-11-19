
void FUN_03951c20(long *param_1)

{
  undefined4 uVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined1 auStack_448 [1048];
  
  uVar3 = *(undefined8 *)(PTR_PTR_04bb2238 + 8);
  uVar1 = (**(code **)(*param_1 + 0x38))();
  switch(uVar1) {
  case 0:
  case 1:
  case 2:
  case 3:
  case 4:
  case 5:
  case 6:
  case 7:
  case 8:
  case 0xf:
  case 0x10:
  case 0x11:
                    /* WARNING: Could not recover jumptable at 0x03951c90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x58))(param_1);
    return;
  case 0x14:
    plVar2 = (long *)(**(code **)(*param_1 + 0x58))(param_1);
    (**(code **)(*plVar2 + 0x18))();
    FUN_006e9454(auStack_448,&DAT_040d196a,uVar3,plVar2[1]);
  }
  return;
}


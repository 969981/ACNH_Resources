
undefined8 FUN_00427570(ulong *param_1,undefined8 *param_2,code *param_3,code *param_4)

{
  undefined8 uVar1;
  ulong *puVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  long local_f0 [18];
  
  if (param_3 == (code *)0x0) {
    puVar2 = param_1;
    while( true ) {
      uVar3 = (uint)*puVar2;
      if ((uVar3 >> 3 & 1) != 0) break;
      if (((*puVar2 & 1) != 0) || (puVar2 = (ulong *)puVar2[1], puVar2 == (ulong *)0x0))
      goto LAB_00427610;
    }
    if (puVar2 != (ulong *)0x0) {
      uVar3 = (uVar3 & 7) - (uVar3 >> 1 & 1);
      uVar3 = (uVar3 >> 2 & 0x33333333) + (uVar3 & 0x33333333);
      uVar6 = puVar2[(ulong)((uVar3 + (uVar3 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18) + 2];
      goto LAB_00427614;
    }
LAB_00427610:
    uVar6 = 0;
LAB_00427614:
    FUN_004225f0(param_2,uVar6,0xffffffff);
    if (*(int *)(param_2 + 1) == 1) {
      FUN_004225f0(param_2,"unnamed",0xffffffff);
    }
  }
  else {
    (*param_3)(param_1,param_2);
  }
  while( true ) {
    uVar3 = (uint)*param_1;
    if ((uVar3 >> 0xf & 1) != 0) break;
    if (((*param_1 & 9) != 0) || (param_1 = (ulong *)param_1[1], param_1 == (ulong *)0x0))
    goto LAB_00427830;
  }
  uVar3 = (uVar3 & 0x7fff) - (uVar3 >> 1 & 0x1555);
  uVar3 = (uVar3 >> 2 & 0x33333333) + (uVar3 & 0x33333333);
  uVar6 = param_1[(ulong)((uVar3 + (uVar3 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18) + 2];
  if ((uVar6 != 0) && (*(short *)(uVar6 + 8) != 0)) {
    FUN_00423880(param_2,&DAT_040b920d,0xffffffff);
    if (*(short *)(uVar6 + 8) != 0) {
      plVar7 = (long *)(uVar6 + 0x10);
      if (param_4 == (code *)0x0) {
        uVar4 = 0;
        do {
          if (uVar4 != 0) {
            FUN_00423880(param_2,&DAT_0407494a,0xffffffff);
          }
          if (*(char *)plVar7[1] == 't') {
            lVar5 = *plVar7;
            if (lVar5 == 0) {
              FUN_00423880(param_2,"(null)",0xffffffff);
            }
            else {
              FUN_004225b0(local_f0);
              uVar1 = FUN_00427570(lVar5,local_f0,param_3,0);
              FUN_00423880(param_2,uVar1,0xffffffff);
              FUN_00422550(local_f0);
            }
          }
          else {
            local_f0[0] = *plVar7;
            FUN_00424e60(param_2,&DAT_04070007,&DAT_04853818,local_f0);
          }
          uVar4 = uVar4 + 1;
          plVar7 = plVar7 + 2;
        } while (uVar4 < *(ushort *)(uVar6 + 8));
      }
      else {
        uVar4 = 0;
        do {
          if (uVar4 != 0) {
            FUN_00423880(param_2,&DAT_0407494a,0xffffffff);
          }
          if (*(char *)plVar7[1] == 't') {
            (*param_4)(*plVar7,param_2);
          }
          else {
            local_f0[0] = *plVar7;
            FUN_00424e60(param_2,&DAT_04070007,&DAT_04853818,local_f0);
          }
          uVar4 = uVar4 + 1;
          plVar7 = plVar7 + 2;
        } while (uVar4 < *(ushort *)(uVar6 + 8));
      }
    }
    FUN_00423880(param_2,&DAT_040f7c84,0xffffffff);
  }
LAB_00427830:
  return *param_2;
}


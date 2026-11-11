
uint FUN_003d0c2c(long param_1,uint param_2,long param_3,uint param_4,undefined8 param_5)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  undefined1 auStack_64 [32];
  char local_44;
  
  if (*(long *)(param_1 + 8) == 0) {
    uVar3 = 0;
    goto LAB_003d0e2c;
  }
  uVar4 = FUN_003b82fc();
  uVar3 = 0;
  if (((param_3 == 0) || (param_2 == 0xffffffff)) || ((uVar4 & 1) == 0)) goto LAB_003d0e2c;
  (**(code **)(**(long **)(param_1 + 8) + 0x20))();
  uVar4 = FUN_003b8780(*(undefined8 *)(param_1 + 8),auStack_64);
  uVar3 = 0;
  if ((uVar4 & 1) == 0) goto LAB_003d0e2c;
  uVar3 = 0;
  switch(param_2 >> 0x18) {
  case 1:
    iVar1 = FUN_003b8458(*(undefined8 *)(param_1 + 8),param_2);
    if (iVar1 == 3) {
      if (local_44 == '\0') {
        uVar3 = FUN_003d10a0(param_1,param_2,param_3,param_4,param_5,0xffffffff);
      }
      else {
        uVar3 = FUN_003d0fb4(param_1,param_2,param_3,param_4,param_5);
      }
    }
    else if (iVar1 == 2) {
      uVar3 = FUN_003d1284(param_1,param_2,param_3,param_5);
    }
    else {
      if (iVar1 != 1) goto LAB_003d0db8;
      uVar3 = FUN_003d0e48(param_1,param_2,param_3,param_4,param_5);
    }
    break;
  case 2:
    uVar3 = FUN_003d14b0(param_1,param_2,param_3,param_4,param_5);
    break;
  case 3:
    uVar3 = FUN_003d12e0(param_1,param_2,param_3,param_4,param_5);
    break;
  case 5:
    if ((param_4 >> 3 & 1) != 0) {
      uVar2 = FUN_003b8448(*(undefined8 *)(param_1 + 8),param_2);
      lVar5 = FUN_003d1610(param_1,uVar2,param_3,param_5,1);
      if (lVar5 == 0) goto LAB_003d0db8;
    }
    uVar3 = 1;
    break;
  case 6:
    uVar2 = FUN_003b8448(*(undefined8 *)(param_1 + 8),param_2);
    lVar5 = FUN_003d1610(param_1,uVar2,param_3,param_5,1);
    if (lVar5 == 0) {
LAB_003d0db8:
      uVar3 = 0;
    }
    else {
      uVar3 = FUN_003d1b20(param_1,lVar5,param_3,param_5);
    }
  }
  (**(code **)(**(long **)(param_1 + 8) + 0x28))();
LAB_003d0e2c:
  return uVar3 & 1;
}


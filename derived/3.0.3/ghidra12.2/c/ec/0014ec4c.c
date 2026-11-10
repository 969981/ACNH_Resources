
void FUN_0014ec4c(long param_1,undefined8 *param_2,ulong param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  lVar3 = param_2[0xd0];
  if (lVar3 != 0) {
    lVar2 = *(long *)(param_1 + 0x1120);
    if (((param_3 & 1) != 0) && (*(long *)(param_1 + 0xe8) != 0)) {
      FUN_0014b7c4(param_1,5,2);
    }
    FUN_0014ed38(lVar3,param_2);
    if ((*(long *)(lVar3 + 8) == 0) && (lVar2 != 0)) {
      local_58 = 0;
      local_50 = 0;
      uStack_48 = 0;
      FUN_0014b2f8(lVar2,&local_58);
      do {
        lVar1 = FUN_0014b308(&local_58);
        if (lVar1 == 0) goto LAB_0014ecac;
      } while (*(long *)(lVar1 + 0x18) != lVar3);
      FUN_0014b02c(lVar2,lVar1 + 0x28,*(undefined8 *)(lVar1 + 0x20));
    }
LAB_0014ecac:
    param_2[0xd0] = 0;
    if (lVar2 != 0) {
      *(long *)(lVar2 + 0x30) = *(long *)(lVar2 + 0x30) + -1;
    }
    *param_2 = 0;
    if (((param_3 & 1) != 0) && (*(long *)(param_1 + 0xe8) != 0)) {
      FUN_0014b80c(param_1,5);
    }
  }
  return;
}


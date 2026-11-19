
void FUN_038dc1f0(undefined8 param_1,long *param_2,long *param_3,uint param_4)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  undefined1 local_24 [4];
  
  (**(code **)(*param_3 + 0x18))(param_3);
  lVar5 = 0;
  do {
    if (*(char *)(param_3[1] + lVar5) == '\0') goto LAB_038dc26c;
    lVar1 = param_3[1] + lVar5;
    if (*(char *)(lVar1 + 1) == '\0') {
      lVar5 = lVar5 + 1;
      goto LAB_038dc26c;
    }
    if (*(char *)(lVar1 + 2) == '\0') {
      lVar5 = lVar5 + 2;
      goto LAB_038dc26c;
    }
    lVar5 = lVar5 + 3;
  } while (lVar5 != 0x80001);
  lVar5 = 0;
LAB_038dc26c:
  uVar4 = (uint)lVar5;
  uVar2 = uVar4;
  if (param_4 <= uVar4) {
    uVar2 = param_4;
  }
  (**(code **)(*param_3 + 0x18))(param_3);
  (**(code **)(*param_2 + 8))(param_2,param_3[1],uVar2);
  local_24[0] = 0;
  if (uVar4 < param_4) {
    iVar3 = param_4 - uVar2;
    do {
      (**(code **)(*param_2 + 8))(param_2,local_24,1);
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return;
}


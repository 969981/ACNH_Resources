
void FUN_0364ec8c(long *param_1,long param_2,int param_3)

{
  uint uVar1;
  undefined4 uVar2;
  long lVar3;
  
  *param_1 = param_2;
  *(undefined4 *)(param_1 + 1) = 1;
  *(undefined8 *)((long)param_1 + 0xc) = 0;
  *(undefined8 *)((long)param_1 + 0x11) = 0;
  *(undefined4 *)((long)param_1 + 0x1c) = 1;
  param_1[4] = 0;
  *(undefined8 *)((long)param_1 + 0x25) = 0;
  *(int *)(param_1 + 6) = param_3;
  if (param_3 == 9) {
    uVar2 = 0x2000;
  }
  else {
    if (param_3 != 10) goto LAB_0364ece0;
    uVar2 = 0x4000;
  }
  *(undefined4 *)((long)param_1 + 0x34) = uVar2;
LAB_0364ece0:
  FUN_03653cb0(param_2 + 0x2a8,0,*(undefined8 *)(param_2 + 0x2c0),0x1000,0,
               *(char *)(param_2 + 0x2b8) == '\0');
  lVar3 = *param_1;
  FUN_03653cb0(lVar3 + 0x2a8,0x1000,*(undefined8 *)(lVar3 + 0x300),0x1000,0,
               *(char *)(lVar3 + 0x2f8) == '\0');
  lVar3 = *param_1;
  uVar1 = *(uint *)(lVar3 + 0x758) & 0xffffe000;
  FUN_03653cb0(lVar3 + 0x2a8,0xa000,*(undefined8 *)(lVar3 + 0x540),0x2000,
               uVar1 - 0x6000 & *(uint *)(lVar3 + 0x758) - 1,*(char *)(lVar3 + 0x538) == '\0');
  lVar3 = *param_1;
  FUN_03653cb0(lVar3 + 0x2a8,0xc000,*(undefined8 *)(lVar3 + 0x5c0),0x2000,
               *(int *)(lVar3 + 0x778) - 1U & uVar1 - 0x4000,*(char *)(lVar3 + 0x5b8) == '\0');
  lVar3 = *param_1;
  FUN_03653cb0(lVar3 + 0x2a8,0xe000,*(undefined8 *)(lVar3 + 0x640),0x2000,
               *(int *)(lVar3 + 0x798) - 1U & uVar1 - 0x2000,*(char *)(lVar3 + 0x638) == '\0');
  return;
}


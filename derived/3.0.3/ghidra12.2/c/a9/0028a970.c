
int FUN_0028a970(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  int iVar2;
  long lVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined1 *local_50;
  long lStack_48;
  undefined8 *local_40;
  undefined8 uStack_38;
  
  lVar3 = param_1[1];
  local_c0 = param_3;
  uStack_b8 = param_4;
  local_b0 = param_5;
  uStack_a8 = param_6;
  local_a0 = param_7;
  uStack_98 = param_8;
  (**(code **)(*param_1 + 0x18))();
  lVar6 = 0;
  do {
    if (*(char *)(param_1[1] + lVar6) == '\0') goto LAB_0028aa2c;
    lVar1 = param_1[1] + lVar6;
    if (*(char *)(lVar1 + 1) == '\0') {
      lVar6 = lVar6 + 1;
      goto LAB_0028aa2c;
    }
    if (*(char *)(lVar1 + 2) == '\0') {
      lVar6 = lVar6 + 2;
      goto LAB_0028aa2c;
    }
    lVar6 = lVar6 + 3;
  } while (lVar6 != 0x80001);
  lVar6 = 0;
LAB_0028aa2c:
  iVar4 = (int)lVar6;
  lVar6 = (long)(int)param_1[2] - (long)iVar4;
  uStack_38 = 0xffffff80ffffffd0;
  local_50 = (undefined1 *)register0x00000008;
  lStack_48 = (long)register0x00000008 + -0x90;
  local_40 = &local_c0;
  iVar5 = FUN_0028d450(lVar3 + iVar4,lVar6,param_2,&local_50);
  iVar2 = (int)lVar6 + -1;
  if (-1 < iVar5) {
    iVar2 = iVar5;
  }
  return iVar2 + iVar4;
}


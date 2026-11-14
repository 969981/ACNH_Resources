
uint FUN_01c77c98(long *param_1,undefined8 param_2,uint param_3)

{
  long *plVar1;
  uint uVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined *local_60;
  long *plStack_58;
  undefined *local_50;
  undefined8 *local_48;
  undefined4 local_40;
  undefined8 local_3c;
  undefined6 local_34;
  undefined2 uStack_2e;
  undefined6 uStack_2c;
  
  param_1 = (long *)*param_1;
  if (param_1 == (long *)0x0) {
    return 0;
  }
  if (*param_1 != 0) {
    plVar1 = param_1 + 1 + (ulong)param_3 * 0x2d;
    if (3 < param_3) {
      plVar1 = param_1 + 1;
    }
    if (((*(char *)((long)plVar1 + 0x161) == '\0') || ((char)plVar1[0x2c] != '\0')) &&
       ((char)plVar1[0xb] != '\0')) {
      local_3c = 0;
      local_34 = 0;
      local_40 = 0xb;
      local_48 = &local_3c;
      plStack_58 = plVar1 + 6;
      uStack_2e = 0;
      uStack_2c = 0;
      local_50 = PTR_DAT_04bc0d30 + 0x10;
      local_60 = PTR_DAT_04bb2020 + 0x10;
      uVar3 = FUN_00a7f6d4();
      uVar4 = FUN_01df33d0(&local_50,&local_60,uVar3);
      if ((uVar4 & 1) != 0) {
        (**(code **)(local_50 + 0x18))(&local_50);
        uVar2 = FUN_01c13f00(param_2,local_48,local_40,*(undefined1 *)((long)plVar1 + 0x4f));
        goto LAB_01c77d6c;
      }
    }
  }
  uVar2 = 0;
LAB_01c77d6c:
  return uVar2 & 1;
}


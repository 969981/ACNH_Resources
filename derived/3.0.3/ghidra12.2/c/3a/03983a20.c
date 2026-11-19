
void FUN_03983a20(undefined8 param_1,long *param_2)

{
  int iVar1;
  ulong uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined1 auStack_48 [8];
  
  if (((*PTR_DAT_04bd0ef0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_04bd0ef0), iVar1 != 0))
  {
    *(undefined **)PTR_DAT_04bd0ee8 = PTR_DAT_04bb6238 + 0x10;
    __cxa_guard_release(PTR_DAT_04bd0ef0);
  }
  uVar2 = (**(code **)*param_2)(param_2,PTR_DAT_04bd0ee8);
  if ((uVar2 & 1) != 0) {
    (**(code **)(*param_2 + 0x48))(param_2);
  }
  (**(code **)(*param_2 + 0x40))(param_2,auStack_48);
  if ((char)param_2[1] == '\0') {
    if (*(char *)((long)param_2 + 9) == '\0') goto LAB_03983ae4;
  }
  else {
    (**(code **)(*param_2 + 0x58))(param_2,(long)param_2 + 0xc);
    *(undefined2 *)(param_2 + 1) = 0x100;
  }
  (**(code **)(*param_2 + 0x60))
            (param_2,(long)param_2 + 0x4c,(long)param_2 + 0xc,*(undefined4 *)((long)param_2 + 0x8c))
  ;
  *(undefined1 *)((long)param_2 + 9) = 0;
LAB_03983ae4:
  uVar3 = (**(code **)(*param_2 + 0x20))(param_2);
  uVar4 = (**(code **)(*param_2 + 0x28))(param_2);
  uVar5 = (**(code **)(*param_2 + 0x30))(param_2);
  uVar6 = (**(code **)(*param_2 + 0x38))(param_2);
  FUN_03982fb0(uVar3,uVar4,uVar5,uVar6,param_1,(long)param_2 + 0xc,auStack_48);
  return;
}


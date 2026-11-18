
void FUN_034717c0(long param_1,int param_2,int param_3,ulong param_4)

{
  int iVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  void *__dest;
  void *__src;
  long local_a8;
  void *local_a0;
  long local_70;
  void *local_68;
  undefined1 uStack_35;
  int local_34;
  
  local_34 = param_2;
  FUN_006d8678(&local_70,&DAT_040e92c2,param_3 + (3 - param_2) * 1000);
  (**(code **)(local_70 + 0x18))(&local_70);
  puVar2 = &DAT_040d5f36;
  if ((param_4 & 1) == 0) {
    puVar2 = &DAT_040a24bc;
  }
  FUN_006d8678(&local_a8,"%s_%s",local_68,puVar2);
  uVar3 = FUN_03d52ee0(&uStack_35,&DAT_0575c870,&local_a8);
  __dest = *(void **)(param_1 + 8);
  if ((uVar3 & 1) == 0) {
    (**(code **)(local_70 + 0x18))(&local_70);
    __src = local_68;
    if (__dest == local_68) {
      return;
    }
    (**(code **)(local_70 + 0x18))(&local_70);
    lVar4 = 0;
    do {
      if (*(char *)((long)local_68 + lVar4) == '\0') goto LAB_0347194c;
      if (*(char *)((long)local_68 + lVar4 + 1) == '\0') goto LAB_03471940;
      if (*(char *)((long)local_68 + lVar4 + 2) == '\0') goto LAB_03471948;
      lVar4 = lVar4 + 3;
    } while (lVar4 != 0x80001);
  }
  else {
    (**(code **)(local_a8 + 0x18))(&local_a8);
    __src = local_a0;
    if (__dest == local_a0) {
      return;
    }
    (**(code **)(local_a8 + 0x18))(&local_a8);
    lVar4 = 0;
    do {
      if (*(char *)((long)local_a0 + lVar4) == '\0') goto LAB_0347194c;
      if (*(char *)((long)local_a0 + lVar4 + 1) == '\0') goto LAB_03471940;
      if (*(char *)((long)local_a0 + lVar4 + 2) == '\0') goto LAB_03471948;
      lVar4 = lVar4 + 3;
    } while (lVar4 != 0x80001);
  }
  lVar4 = 0;
LAB_0347194c:
  iVar1 = (int)lVar4;
  if (*(int *)(param_1 + 0x10) <= (int)lVar4) {
    iVar1 = *(int *)(param_1 + 0x10) + -1;
  }
  memcpy(__dest,__src,(long)iVar1);
  *(undefined1 *)((long)__dest + (long)iVar1) = 0;
  return;
LAB_03471940:
  lVar4 = lVar4 + 1;
  goto LAB_0347194c;
LAB_03471948:
  lVar4 = lVar4 + 2;
  goto LAB_0347194c;
}


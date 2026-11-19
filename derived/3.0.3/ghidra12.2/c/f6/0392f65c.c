
void FUN_0392f65c(long *param_1,long *param_2)

{
  int iVar1;
  int iVar2;
  void *__dest;
  void *__src;
  ulong uVar3;
  
  iVar1 = (**(code **)(*param_1 + 0x38))();
  iVar2 = (**(code **)(*param_2 + 0x38))(param_2);
  if (iVar1 == iVar2) {
    __dest = (void *)(**(code **)(*param_1 + 0x48))(param_1);
    __src = (void *)(**(code **)(*param_2 + 0x40))(param_2);
    uVar3 = (**(code **)(*param_1 + 0x60))(param_1);
    memcpy(__dest,__src,uVar3 & 0xffffffff);
    *(char *)(param_1 + 5) = (char)param_2[5];
    *(undefined1 *)((long)param_1 + 0x2b) = *(undefined1 *)((long)param_2 + 0x2b);
    *(char *)(param_1 + 8) = (char)param_2[8];
    *(undefined1 *)((long)param_1 + 0x43) = *(undefined1 *)((long)param_2 + 0x43);
    *(char *)(param_1 + 0xb) = (char)param_2[0xb];
    *(undefined1 *)((long)param_1 + 0x5b) = *(undefined1 *)((long)param_2 + 0x5b);
    *(char *)(param_1 + 0xe) = (char)param_2[0xe];
    *(undefined1 *)((long)param_1 + 0x73) = *(undefined1 *)((long)param_2 + 0x73);
  }
  return;
}



void FUN_002af7d8(long *param_1,long param_2,uint param_3)

{
  char cVar1;
  uint uVar2;
  long lVar3;
  undefined8 uVar4;
  
  lVar3 = (**(code **)(*param_1 + 0x40))(param_1,param_3);
  if (*(char *)(lVar3 + 0x1f) != '\0') {
    uVar2 = param_3 >> 5 & 7;
    cVar1 = *(char *)(param_2 + 9);
    *(uint *)((long)param_1 + (ulong)uVar2 * 4 + 0x6a8) =
         *(uint *)((long)param_1 + (ulong)uVar2 * 4 + 0x6a8) | 1 << (ulong)(param_3 & 0x1f);
    lVar3 = (**(code **)(*param_1 + 0x40))(param_1,param_3);
    if ((cVar1 != *(char *)(lVar3 + 0x1e)) &&
       (cVar1 = *(char *)(param_2 + 9), lVar3 = (**(code **)(*param_1 + 0x40))(param_1,param_3),
       cVar1 == (char)(*(char *)(lVar3 + 0x1e) + '\x01'))) {
      uVar4 = (**(code **)(*param_1 + 0x40))(param_1,param_3);
      FUN_002af630(uVar4,0xffff);
      (**(code **)(*param_1 + 0x40))(param_1,param_3);
      FUN_002b2b90();
      return;
    }
  }
  return;
}



void FUN_016841d4(long param_1,long param_2,uint param_3,uint param_4,uint param_5,
                 undefined8 param_6)

{
  uint uVar1;
  char cVar2;
  bool bVar3;
  bool bVar4;
  
  cVar2 = *(char *)(param_2 + 2);
  if (cVar2 == '\x01') {
    bVar4 = *(char *)(param_2 + 3) < '\a';
  }
  else if (cVar2 == '\f') {
    bVar4 = '\x0e' < *(char *)(param_2 + 3);
  }
  else {
    bVar4 = false;
  }
  uVar1 = *(uint *)(*(long *)PTR_DAT_04bb30a0 + 0x65204);
  if (1 < uVar1) {
    uVar1 = 0;
  }
  if (uVar1 == 1) {
    bVar3 = cVar2 == '\x05';
  }
  else {
    bVar3 = false;
    if (uVar1 == 0) {
      bVar3 = cVar2 == '\v';
    }
  }
  FUN_016786e0(param_1,param_2,bVar4,param_3 & 1,param_4 & 1,param_5 & 1,bVar3,param_6);
  if (DAT_055588d0 == 0) {
    return;
  }
  FUN_0261c330(DAT_055588d0,*(undefined4 *)(param_1 + 0x32188),*(undefined4 *)(param_1 + 0x3218c),
               *(undefined4 *)(param_1 + 0x32190),*(undefined4 *)(param_1 + 0x32194),
               *(undefined4 *)(param_1 + 0x32198),*(undefined4 *)(param_1 + 0x3219c));
  return;
}


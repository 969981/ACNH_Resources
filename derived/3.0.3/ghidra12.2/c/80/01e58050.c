
void FUN_01e58050(long param_1)

{
  char cVar1;
  bool bVar2;
  ulong uVar3;
  long lVar4;
  
  lVar4 = *(long *)(param_1 + 0x358);
  (**(code **)(*(long *)(lVar4 + 0x3e0) + 0x18))(lVar4 + 0x3e0);
  (**(code **)(*(long *)(lVar4 + 0x3e0) + 0x18))(lVar4 + 0x3e0);
  if (*(undefined1 **)(lVar4 + 1000) == &DAT_040ee942) {
code_r0x01e580e4:
    *(long *)(param_1 + 0x580) = param_1;
    *(undefined1 **)(param_1 + 0x588) = &LAB_01e581a0;
    *(undefined8 *)(param_1 + 0x590) = 0;
    *(undefined ***)(param_1 + 0x578) = &PTR_LAB_04a5dce8;
  }
  else {
    uVar3 = 0;
    bVar2 = true;
    do {
      cVar1 = (*(undefined1 **)(lVar4 + 1000))[uVar3];
      if (cVar1 != (&DAT_040ee942)[uVar3]) break;
      if (cVar1 == '\0') {
        if (bVar2) goto code_r0x01e580e4;
        break;
      }
      bVar2 = uVar3 < 0x80000;
      uVar3 = uVar3 + 1;
    } while (uVar3 != 0x80001);
  }
  lVar4 = *(long *)(param_1 + 0x358);
  (**(code **)(*(long *)(lVar4 + 0x3e0) + 0x18))(lVar4 + 0x3e0);
  (**(code **)(*(long *)(lVar4 + 0x3e0) + 0x18))(lVar4 + 0x3e0);
  if (*(undefined1 **)(lVar4 + 1000) != &DAT_0409b647) {
    uVar3 = 0;
    bVar2 = true;
    while( true ) {
      cVar1 = (*(undefined1 **)(lVar4 + 1000))[uVar3];
      if (cVar1 != (&DAT_0409b647)[uVar3]) {
        return;
      }
      if (cVar1 == '\0') break;
      bVar2 = uVar3 < 0x80000;
      uVar3 = uVar3 + 1;
      if (uVar3 == 0x80001) {
        return;
      }
    }
    if (!bVar2) {
      return;
    }
  }
  FUN_01e58500(param_1);
  return;
}


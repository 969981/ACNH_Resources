
bool FUN_02ca7e78(long param_1)

{
  char cVar1;
  byte bVar2;
  long lVar3;
  
  if (*(long *)PTR_DAT_04bb2230 == 0) {
    lVar3 = 0;
    cVar1 = cRam0000000000000918;
  }
  else {
    lVar3 = *(long *)(*(long *)PTR_DAT_04bb2230 + 0x28);
    cVar1 = *(char *)(lVar3 + 0x918);
  }
  if (cVar1 == '\0') {
    bVar2 = 1;
  }
  else {
    bVar2 = (**(code **)(*(long *)(lVar3 + 0x910) + 0x18))(lVar3 + 0x910);
    *(undefined1 *)(lVar3 + 0x918) = 0;
  }
  *(byte *)(lVar3 + 0x919) = bVar2 & 1;
  if ((((*(char *)(lVar3 + 0x928) == *(char *)(param_1 + 0x31c)) &&
       (*(char *)(lVar3 + 0x922) == *(char *)(param_1 + 0x316))) &&
      (*(char *)(lVar3 + 0x923) == *(char *)(param_1 + 0x317))) &&
     (((*(char *)(lVar3 + 0x924) == *(char *)(param_1 + 0x318) &&
       (*(char *)(lVar3 + 0x925) == *(char *)(param_1 + 0x319))) &&
      ((*(char *)(lVar3 + 0x926) == *(char *)(param_1 + 0x31a) &&
       (*(char *)(lVar3 + 0x927) == *(char *)(param_1 + 0x31b))))))) {
    return *(short *)(lVar3 + 0x92a) != *(short *)(param_1 + 0x31e);
  }
  return true;
}


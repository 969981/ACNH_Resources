
undefined8 FUN_02640eb0(void)

{
  uint *puVar1;
  long lVar2;
  long lVar3;
  bool bVar4;
  
  lVar2 = DAT_05ae7790;
  if ((DAT_05ae7790 == 0) ||
     (lVar3 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68)),
     *(long *)(lVar2 + 0x60) != lVar3)) {
    bVar4 = true;
  }
  else {
    bVar4 = false;
    if (DAT_05aed670 != 0) {
      if (*(long *)(DAT_05aed670 + 0x330) == 0) {
        bVar4 = false;
      }
      else {
        bVar4 = false;
        if (*(int *)(*(long *)(DAT_05aed670 + 0x330) + 8) < 2) {
          return 0;
        }
      }
    }
  }
  if (DAT_04c487d4 != -1) {
    puVar1 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)DAT_04c487d4 * 8);
    if (0xff < (uint)(int)DAT_04c487d4) {
      puVar1 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((*puVar1 >> 0xc & 1) != 0) {
      if ((*puVar1 >> 0xf & 1) == 0) {
        return 0;
      }
      if (DAT_0556aa70 == 0) {
        return 0;
      }
      if ((*(byte *)(DAT_0556aa70 + 0x43d) & 4) == 0) {
        bVar4 = true;
      }
      if (bVar4) {
        return 0;
      }
    }
  }
  if ((DAT_0537d558 == 0) || (*(char *)(*(long *)(DAT_0537d558 + 0x10) + 0xab6) == '\0')) {
    return 1;
  }
  return 0;
}


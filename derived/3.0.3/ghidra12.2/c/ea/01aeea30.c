
bool FUN_01aeea30(long param_1)

{
  long lVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *__s;
  ulong uVar4;
  uint *puVar5;
  ulong uVar6;
  uint *puVar7;
  char cVar8;
  
  __s = PTR_DAT_04bbfe90;
  puVar3 = PTR_DAT_04bbfe88;
  puVar7 = *(uint **)(param_1 + 0x10);
  if ((puVar7 != (uint *)0x0) && (*puVar7 != 0)) {
    cVar8 = *PTR_DAT_04bbfe88;
    do {
      if (cVar8 != '\0') {
        uVar2 = *(uint *)(__s + 0x128);
        uVar4 = (ulong)uVar2;
        if ((int)uVar2 < 0) {
          if (uVar2 == 0xffffffff) {
            uVar2 = *puVar7;
            if (uVar2 != 0) goto LAB_01aeead0;
LAB_01aeebf0:
            uVar4 = 0xffffffff;
          }
        }
        else if (((short *)(uVar4 + (long)puVar7) != (short *)0x0) &&
                (*(short *)(uVar4 + (long)puVar7) == 0x35fd)) {
          return true;
        }
        break;
      }
      cVar8 = '\x01';
      *puVar3 = 1;
      memset(__s,0xff,0x1ac);
      uVar2 = *puVar7;
      if (uVar2 == 0) goto LAB_01aeebf0;
LAB_01aeead0:
      puVar5 = (uint *)(ulong)uVar2;
      uVar4 = 0xffffffff;
      if (puVar7 == puVar5) break;
      lVar1 = 0xc;
      if (*(char *)((long)puVar7 + (10 - (long)puVar5)) != '\0') {
        lVar1 = 0x1c;
      }
      lVar1 = (long)puVar7 + (lVar1 - (long)puVar5);
      if (lVar1 == 0) goto LAB_01aeebf0;
      uVar6 = (ulong)*(ushort *)((long)puVar7 + (8 - (long)puVar5));
      uVar4 = 0xfffffffe;
      *(undefined4 *)(__s + 0x128) = 0xfffffffe;
      if (uVar6 == 0) break;
      puVar5 = (uint *)(lVar1 + 4);
      while (puVar5[-1] != 0x54706054) {
        puVar5 = puVar5 + 2;
        uVar6 = uVar6 - 1;
        if (uVar6 == 0) {
          uVar4 = 0xfffffffe;
          goto LAB_01aeeb50;
        }
      }
      uVar2 = 0;
      if (*puVar5 != 0xffffffff) {
        uVar2 = *puVar5;
      }
      uVar4 = (ulong)uVar2;
      *(uint *)(__s + 0x128) = uVar2;
    } while (*puVar7 != 0);
LAB_01aeeb50:
    puVar7 = *(uint **)(param_1 + 0x10);
    if ((puVar7 != (uint *)0x0) && (*puVar7 != 0)) {
      while ((int)uVar4 < 0) {
        if ((int)uVar4 != -1) {
          return false;
        }
        puVar5 = (uint *)(ulong)*puVar7;
        if (*puVar7 == 0) {
          return false;
        }
        if (puVar7 == puVar5) {
          return false;
        }
        lVar1 = 0xc;
        if (*(char *)((long)puVar7 + (10 - (long)puVar5)) != '\0') {
          lVar1 = 0x1c;
        }
        lVar1 = (long)puVar7 + (lVar1 - (long)puVar5);
        if (lVar1 == 0) {
          return false;
        }
        uVar4 = (ulong)*(ushort *)((long)puVar7 + (8 - (long)puVar5));
        *(undefined4 *)(__s + 0x128) = 0xfffffffe;
        if (uVar4 == 0) {
          return false;
        }
        puVar5 = (uint *)(lVar1 + 4);
        while (puVar5[-1] != 0x54706054) {
          puVar5 = puVar5 + 2;
          uVar4 = uVar4 - 1;
          if (uVar4 == 0) {
            return false;
          }
        }
        uVar2 = 0;
        if (*puVar5 != 0xffffffff) {
          uVar2 = *puVar5;
        }
        uVar4 = (ulong)uVar2;
        *(uint *)(__s + 0x128) = uVar2;
        if (*puVar7 == 0) {
          return false;
        }
      }
      if ((short *)((long)puVar7 + uVar4) != (short *)0x0) {
        return *(short *)((long)puVar7 + uVar4) == 0x37ba;
      }
    }
  }
  return false;
}


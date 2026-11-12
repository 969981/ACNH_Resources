
undefined8 FUN_008e5650(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *__src;
  long lVar3;
  undefined4 *puVar4;
  undefined8 *__dest;
  
  if (*(uint *)(param_1 + 0x410) != 0x21 || (*(uint *)(param_1 + 0x410) & 0xfffffffe) == 0x1a) {
    return 0;
  }
  if (*(int *)(param_1 + 0x31080) < 1) {
    uVar2 = 0;
  }
  else {
    *(undefined2 *)(param_1 + 0x37fac) = 0x101;
    *(int *)(param_1 + 0x307f4) = *(int *)(param_1 + 0x307f0);
    if (*(int *)(param_1 + 0x307f0) == 0x2a) {
      (**(code **)(*(long *)(param_1 + 0x30740) + 0x18))((long *)(param_1 + 0x30740));
      __src = *(undefined8 **)(param_1 + 0x30748);
    }
    else {
      __src = &DAT_0407ebb1;
    }
    __dest = *(undefined8 **)(param_1 + 0x30780);
    if (__dest != __src) {
      lVar3 = 0;
      do {
        if (*(char *)((long)__src + lVar3) == '\0') goto LAB_008e573c;
        if (*(char *)((long)__src + lVar3 + 1) == '\0') {
          lVar3 = lVar3 + 1;
          goto LAB_008e573c;
        }
        if (*(char *)((long)__src + lVar3 + 2) == '\0') {
          lVar3 = lVar3 + 2;
          goto LAB_008e573c;
        }
        lVar3 = lVar3 + 3;
      } while (lVar3 != 0x80001);
      lVar3 = 0;
LAB_008e573c:
      iVar1 = (int)lVar3;
      if (*(int *)(param_1 + 0x30788) <= (int)lVar3) {
        iVar1 = *(int *)(param_1 + 0x30788) + -1;
      }
      memcpy(__dest,__src,(long)iVar1);
      *(undefined1 *)((long)__dest + (long)iVar1) = 0;
    }
    iVar1 = *(int *)(param_1 + 0x31080);
    if (iVar1 < 1) {
      puVar4 = (undefined4 *)(param_1 + 0x410);
    }
    else {
      puVar4 = *(undefined4 **)(*(long *)(param_1 + 0x31088) + (ulong)(iVar1 - 1) * 8);
    }
    FUN_03ebb160(param_1 + 0x408,*puVar4);
    uVar2 = 1;
    *(undefined1 *)(param_1 + 0x37fac) = 0;
  }
  return uVar2;
}


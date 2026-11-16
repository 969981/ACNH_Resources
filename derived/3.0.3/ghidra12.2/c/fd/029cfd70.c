
bool FUN_029cfd70(long param_1,char *param_2)

{
  long lVar1;
  int iVar2;
  long lVar3;
  void *__dest;
  void *__src;
  byte *pbVar4;
  byte *pbVar5;
  
  if (*(undefined8 **)(param_1 + 0x18) == (undefined8 *)0x0) {
    return false;
  }
  pbVar5 = (byte *)**(undefined8 **)(param_1 + 0x18);
  if ((*pbVar5 >> 2 & 1) != 0) {
    __dest = *(void **)(param_2 + 0x20);
    *param_2 = '\x01';
    param_2[1] = pbVar5[5];
    param_2[2] = pbVar5[0x14];
    *(undefined4 *)(param_2 + 4) = *(undefined4 *)(pbVar5 + 0x1c);
    *(undefined4 *)(param_2 + 8) = *(undefined4 *)(pbVar5 + 0x20);
    *(undefined4 *)(param_2 + 0xc) = *(undefined4 *)(pbVar5 + 0x24);
    *(undefined4 *)(param_2 + 0x10) = *(undefined4 *)(pbVar5 + 0x28);
    pbVar4 = pbVar5 + 0x30;
    (**(code **)(*(long *)pbVar4 + 0x18))(pbVar4);
    __src = *(void **)(pbVar5 + 0x38);
    if (__dest != __src) {
      (**(code **)(*(long *)(pbVar5 + 0x30) + 0x18))(pbVar4);
      lVar3 = 0;
      do {
        if (*(char *)(*(long *)(pbVar5 + 0x38) + lVar3) == '\0') goto LAB_029cfe64;
        lVar1 = *(long *)(pbVar5 + 0x38) + lVar3;
        if (*(char *)(lVar1 + 1) == '\0') {
          lVar3 = lVar3 + 1;
          goto LAB_029cfe64;
        }
        if (*(char *)(lVar1 + 2) == '\0') {
          lVar3 = lVar3 + 2;
          goto LAB_029cfe64;
        }
        lVar3 = lVar3 + 3;
      } while (lVar3 != 0x80001);
      lVar3 = 0;
LAB_029cfe64:
      iVar2 = (int)lVar3;
      if (*(int *)(param_2 + 0x28) <= (int)lVar3) {
        iVar2 = *(int *)(param_2 + 0x28) + -1;
      }
      memcpy(__dest,__src,(long)iVar2);
      *(undefined1 *)((long)__dest + (long)iVar2) = 0;
    }
  }
  return *param_2 != '\0';
}


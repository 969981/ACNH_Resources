
void FUN_03bec100(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  undefined1 auStack_d8 [148];
  char local_44;
  
  lVar1 = *(long *)(param_1 + 8);
  if (*(int *)(lVar1 + 0x10) != 0) {
    puVar2 = *(undefined8 **)(lVar1 + 0x18);
    lVar4 = (long)*(int *)(lVar1 + 0x10) << 3;
    do {
      memcpy(auStack_d8,(void *)*puVar2,0x98);
      if (local_44 != '\0') {
        FUN_03beede0(auStack_d8,lVar1 + 0x530,param_1);
      }
      puVar2 = puVar2 + 1;
      lVar4 = lVar4 + -8;
    } while (lVar4 != 0);
  }
  lVar1 = *(long *)(param_1 + 200);
  if (lVar1 != 0) {
    if (*(long *)(lVar1 + 0x20) != lVar1 + 0x18) {
      lVar3 = (long)*(int *)(lVar1 + 0x2c);
      lVar4 = *(long *)(lVar1 + 0x20) - lVar3;
      do {
        if (*(char *)(lVar4 + 0x128) != '\0') {
          FUN_03beef60(lVar4,*(undefined8 *)(lVar1 + 0xd8),*(undefined8 *)(lVar1 + 8));
        }
        lVar4 = *(long *)(lVar4 + lVar3 + 8) - lVar3;
      } while (lVar4 != (lVar1 + 0x18) - lVar3);
    }
  }
  *(undefined1 *)(param_1 + 0x60) = 1;
  return;
}



void FUN_0079fcc8(long param_1,undefined8 param_2)

{
  uint uVar1;
  long lVar2;
  undefined1 *__s;
  long lVar3;
  uint uVar4;
  
  if ((((*(byte *)(param_1 + 0x2a8) & 1) != 0) && (lVar2 = *(long *)(param_1 + 0x2b0), lVar2 != 0))
     && (lVar3 = *(long *)(lVar2 + 0x18), (*(byte *)(lVar2 + 8) & 10) == 2 && lVar3 != 0)) {
    __s = *(undefined1 **)(lVar3 + 0x228);
    if (__s != PTR_DAT_04bb2120) {
      uVar4 = *(int *)(lVar3 + 0x234) - 1;
      uVar1 = 0;
      if (*(int *)(lVar3 + 0x234) < 1) {
        uVar1 = uVar4;
      }
      if ((int)uVar1 < 1) {
        uVar4 = 0;
      }
      else {
        memset(__s,0,(ulong)uVar1);
        __s = __s + uVar1;
      }
      *__s = 0;
      *(uint *)(lVar3 + 0x230) = uVar4;
    }
    *(undefined1 *)(lVar3 + 0x218) = 0;
    *(undefined8 *)(lVar3 + 0x220) = param_2;
    *(undefined1 *)(lVar3 + 0x2b8) = 1;
  }
  return;
}



void FUN_01d6a5c8(long param_1,byte *param_2,undefined1 *param_3)

{
  byte bVar1;
  undefined2 uVar2;
  long lVar3;
  undefined1 local_24 [4];
  
  if ((ulong)*param_2 < 8) {
    lVar3 = param_1 + (ulong)*param_2 * 0xc;
    uVar2 = *(undefined2 *)(lVar3 + 0x108);
    *(undefined8 *)(lVar3 + 0x108) = 0x1010000ffff;
    bVar1 = *(byte *)(lVar3 + 0x112);
    *(undefined1 *)(lVar3 + 0x110) = 0;
    *(undefined1 *)(lVar3 + 0x112) = 0;
    if ((bVar1 & 1) != 0) {
      local_24[0] = *param_3;
      FUN_01d6a6f0(param_1,uVar2,local_24);
    }
    FUN_01d6aa30(param_1);
    if (((*param_2 == *(byte *)(param_1 + 0x1e2)) && (*param_2 != *(byte *)(*DAT_0537d558 + 0x473)))
       && (lVar3 = *(long *)(*DAT_0537d558 + 0x480), *(int *)(lVar3 + 0x9c) == 1)) {
      *(undefined1 *)(lVar3 + 0x98) = 1;
    }
  }
  return;
}


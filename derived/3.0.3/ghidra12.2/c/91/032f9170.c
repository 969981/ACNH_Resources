
void FUN_032f9170(undefined8 param_1,long param_2)

{
  uint uVar1;
  long *plVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  
  uVar1 = *(byte *)(param_2 + 2) + 2;
  if (((uVar1 & 0xff) < 0x33) && ((0x66db6db008b69U >> ((ulong)uVar1 & 0x3f) & 1) != 0)) {
    uVar4 = -((ulong)(uVar1 >> 7) & 1) & 0xfffffffffffff800 | ((ulong)uVar1 & 0xff) << 3;
    lVar5 = *(long *)((long)&PTR_DAT_04b1c5c8 + uVar4);
    uVar4 = *(ulong *)(&DAT_0418cf10 + uVar4) & 0xfffffffffffffffe;
    *(undefined2 *)(param_2 + 0x85b50) = *(undefined2 *)(&DAT_0418cea8 + (long)(char)uVar1 * 2);
    plVar2 = (long *)(param_2 + 0x85b58);
    do {
      lVar6 = lVar5;
      plVar3 = plVar2;
      plVar3[0xff] = lVar6 + 4;
      uVar4 = uVar4 - 2;
      plVar3[0x100] = lVar6 + 0x10;
      *plVar3 = lVar6;
      plVar3[1] = lVar6 + 0xc;
      plVar2 = plVar3 + 2;
      lVar5 = lVar6 + 0x18;
    } while (uVar4 != 0);
    if ((uVar1 & 0xff) == 0x2b) {
      plVar3[2] = lVar6 + 0x18;
      plVar3[0x101] = lVar6 + 0x1c;
      return;
    }
  }
  else {
    *(undefined2 *)(param_2 + 0x85b50) = 0;
  }
  return;
}


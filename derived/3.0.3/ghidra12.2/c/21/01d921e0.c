
undefined8 FUN_01d921e0(long param_1,long *param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  undefined8 *puVar6;
  long *__src;
  undefined8 *__dest;
  undefined8 *puVar7;
  
  *(undefined2 *)(param_1 + 0x260) = 0;
  *(undefined8 *)(*(long *)(param_1 + 0x98) + 0x18) = 0;
  if (*(long *)(param_1 + 0x50) == 0 || *(int *)(param_1 + 0x10) != 0) {
    return 0;
  }
  if (((*(int *)(DAT_05358908 + 0x78) == 0) ||
      (*(int *)(DAT_05358908 + 0xc4) - 1U < 2 || *param_2 == 0)) ||
     (*(long *)(param_1 + 0x1f8) == 0)) {
    return 0;
  }
  if (0 < *(int *)(param_1 + 0x200)) {
    lVar4 = 0;
    puVar7 = *(undefined8 **)(param_1 + 0x210);
    do {
      puVar6 = *(undefined8 **)(*(long *)(param_1 + 0x208) + lVar4 * 8);
      lVar4 = lVar4 + 1;
      *puVar6 = puVar7;
      *(undefined8 **)(param_1 + 0x210) = puVar6;
      puVar7 = puVar6;
    } while (lVar4 < *(int *)(param_1 + 0x200));
  }
  *(undefined4 *)(param_1 + 0x200) = 0;
  iVar2 = *(int *)*param_2;
  if ((iVar2 != 0) && (uVar1 = *(uint *)(param_1 + 0x1f0), 0 < (int)uVar1)) {
    puVar7 = *(undefined8 **)((int *)*param_2 + 2);
    iVar3 = 0;
    puVar6 = puVar7 + iVar2;
    do {
      if (0 < (int)uVar1) {
        uVar5 = (ulong)uVar1;
        __src = *(long **)(param_1 + 0x1f8);
        do {
          if (*__src == *(long *)*puVar7) {
            if (iVar3 < *(int *)(param_1 + 0x204)) {
              __dest = *(undefined8 **)(param_1 + 0x210);
              if (__dest != (undefined8 *)0x0) {
                *(undefined8 *)(param_1 + 0x210) = *__dest;
              }
              *(undefined1 *)(__dest + 0x398) = 0;
              memset(__dest + 0x399,0,0x5b8);
              memcpy(__dest,__src,0x1cb8);
              *(undefined1 *)(__dest + 0x397) = 0;
              *(undefined1 *)(__dest + 0x398) = 0;
              iVar3 = *(int *)(param_1 + 0x200);
              if (iVar3 < *(int *)(param_1 + 0x204)) {
                *(undefined8 **)(*(long *)(param_1 + 0x208) + (long)iVar3 * 8) = __dest;
                iVar3 = *(int *)(param_1 + 0x200) + 1;
                *(int *)(param_1 + 0x200) = iVar3;
              }
            }
            break;
          }
          __src = __src + 0x397;
          uVar5 = uVar5 - 1;
        } while (uVar5 != 0);
      }
      puVar7 = puVar7 + 1;
      if (puVar7 == puVar6) goto code_r0x01d92390;
      uVar1 = *(uint *)(param_1 + 0x1f0);
    } while( true );
  }
LAB_01d923c8:
  *(undefined1 *)(param_1 + 0x260) = 1;
  return 1;
code_r0x01d92390:
  if (iVar3 != 0) {
    FUN_03ebb160(param_1 + 8,6);
    return 1;
  }
  goto LAB_01d923c8;
}


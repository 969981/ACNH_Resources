
undefined8 FUN_0015fad0(long param_1,long param_2,size_t param_3)

{
  undefined8 uVar1;
  void *__dest;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  
  uVar4 = *(long *)(param_2 + 0x60) + param_3;
  if (uVar4 < 0x19001) {
    uVar3 = *(ulong *)(param_1 + 0x1148);
    if (uVar4 < uVar3) {
      __dest = *(void **)(param_2 + 0x58);
    }
    else {
      lVar5 = *(long *)(param_1 + 0x1140);
      lVar6 = *(long *)(param_2 + 0x58);
      uVar4 = uVar4 * 3 >> 1;
      if (uVar4 <= uVar3 * 2) {
        uVar4 = uVar3 << 1;
      }
      lVar2 = FUN_00143310(lVar5,uVar4);
      if (lVar2 == 0) {
        FUN_0014d5f8(param_1,"Failed to alloc memory for big header!");
        goto LAB_0015fb14;
      }
      *(long *)(param_1 + 0x1140) = lVar2;
      __dest = (void *)(lVar2 + (lVar6 - lVar5));
      *(ulong *)(param_1 + 0x1148) = uVar4;
      *(void **)(param_2 + 0x58) = __dest;
    }
    memcpy(__dest,*(void **)(param_2 + 0x70),param_3);
    lVar5 = *(long *)(param_2 + 0x58);
    uVar1 = 0;
    *(size_t *)(param_2 + 0x58) = lVar5 + param_3;
    *(size_t *)(param_2 + 0x60) = *(long *)(param_2 + 0x60) + param_3;
    *(undefined1 *)(lVar5 + param_3) = 0;
  }
  else {
    FUN_0014d5f8(param_1,"Rejected %zu bytes header (max is %d)!",uVar4,0x19000);
LAB_0015fb14:
    uVar1 = 0x1b;
  }
  return uVar1;
}



undefined8 FUN_001d534c(undefined8 param_1,long param_2)

{
  void *__dest;
  long lVar1;
  ulong uVar2;
  size_t __n;
  ushort uVar3;
  ulong uVar4;
  uint local_28 [2];
  
  uVar3 = *(ushort *)(param_2 + 0x60);
  *(undefined8 *)(param_2 + 0xf0) = 0;
  *(undefined8 *)(param_2 + 0xe0) = 0;
  *(undefined1 *)(param_2 + 0x130) = 0;
  if ((uVar3 & 0xe) == 0) {
    __dest = (void *)(param_2 + 0xf8);
    local_28[0] = local_28[0] & 0xffffff00;
    *(undefined8 *)(param_2 + 0xf0) = 1;
    memcpy(__dest,local_28,1);
    local_28[0] = CONCAT31(local_28[0]._1_3_,4);
    uVar4 = *(ulong *)(param_2 + 0xf0);
    uVar2 = uVar4;
    if (uVar4 < uVar4 + 1) {
      uVar2 = uVar4 + 1;
    }
    if (0x34 < uVar2) goto LAB_001d55f0;
    *(ulong *)(param_2 + 0xf0) = uVar2;
    memcpy((void *)((long)__dest + uVar4),local_28,1);
    local_28[0] = *(uint *)(param_2 + 0xd0);
    uVar4 = *(ulong *)(param_2 + 0xf0);
    uVar2 = uVar4 + 4;
    if (uVar4 + 4 <= uVar4) {
      uVar2 = uVar4;
    }
    if (0x34 < uVar2) goto LAB_001d55f0;
    *(ulong *)(param_2 + 0xf0) = uVar2;
    memcpy((void *)((long)__dest + uVar4),local_28,4);
    uVar3 = *(ushort *)(param_2 + 0x60);
  }
  if (((uVar3 & 0x1f) == 0x10) && (*(long *)(param_2 + 0x98) == 0x10)) {
    local_28[0]._1_3_ = (undefined3)(local_28[0] >> 8);
    local_28[0] = CONCAT31(local_28[0]._1_3_,1);
    uVar4 = *(ulong *)(param_2 + 0xf0);
    uVar2 = uVar4;
    if (uVar4 < uVar4 + 1) {
      uVar2 = uVar4 + 1;
    }
    if (0x34 < uVar2) goto LAB_001d55f0;
    *(ulong *)(param_2 + 0xf0) = uVar2;
    memcpy((void *)(param_2 + uVar4 + 0xf8),local_28,1);
    local_28[0] = CONCAT31(local_28[0]._1_3_,0x10);
    uVar2 = FUN_001d4690(param_2 + 0xd8,local_28);
    if ((uVar2 & 1) == 0) {
      return 0;
    }
    uVar2 = FUN_001d3c1c(param_2 + 0xd8,param_2 + 0x88,*(undefined8 *)(param_2 + 0x98));
    if ((uVar2 & 1) == 0) {
      return 0;
    }
    uVar3 = *(ushort *)(param_2 + 0x60);
  }
  if ((uVar3 & 0x1f) == 1) {
    local_28[0] = CONCAT31(local_28[0]._1_3_,0x80);
    uVar4 = *(ulong *)(param_2 + 0xf0);
    uVar2 = uVar4;
    if (uVar4 < uVar4 + 1) {
      uVar2 = uVar4 + 1;
    }
    if (0x34 < uVar2) goto LAB_001d55f0;
    lVar1 = param_2 + 0xf8;
    *(ulong *)(param_2 + 0xf0) = uVar2;
    memcpy((void *)(lVar1 + uVar4),local_28,1);
    local_28[0] = CONCAT31(local_28[0]._1_3_,0x10);
    uVar4 = *(ulong *)(param_2 + 0xf0);
    uVar2 = uVar4;
    if (uVar4 < uVar4 + 1) {
      uVar2 = uVar4 + 1;
    }
    if (0x34 < uVar2) goto LAB_001d55f0;
    *(ulong *)(param_2 + 0xf0) = uVar2;
    memcpy((void *)(lVar1 + uVar4),local_28,1);
    __n = *(size_t *)(param_2 + 0x58);
    if (__n != 0) {
      uVar4 = *(ulong *)(param_2 + 0xf0);
      uVar2 = uVar4 + __n;
      if (uVar4 + __n <= uVar4) {
        uVar2 = uVar4;
      }
      if (0x34 < uVar2) goto LAB_001d55f0;
      *(ulong *)(param_2 + 0xf0) = uVar2;
      memcpy((void *)(lVar1 + uVar4),(void *)(param_2 + 0x48),__n);
    }
  }
  if (((*(ushort *)(param_2 + 0x60) & 0x1f) != 3) || (*(int *)(param_2 + 0xa8) == 0)) {
    return 1;
  }
  local_28[0] = CONCAT31(local_28[0]._1_3_,5);
  uVar4 = *(ulong *)(param_2 + 0xf0);
  uVar2 = uVar4;
  if (uVar4 < uVar4 + 1) {
    uVar2 = uVar4 + 1;
  }
  if (uVar2 < 0x35) {
    *(ulong *)(param_2 + 0xf0) = uVar2;
    memcpy((void *)(param_2 + 0xf8 + uVar4),local_28,1);
    uVar4 = *(ulong *)(param_2 + 0xf0);
    local_28[0] = CONCAT31(local_28[0]._1_3_,1);
    uVar2 = uVar4;
    if (uVar4 < uVar4 + 1) {
      uVar2 = uVar4 + 1;
    }
    if (uVar2 < 0x35) {
      *(ulong *)(param_2 + 0xf0) = uVar2;
      memcpy((void *)(param_2 + 0xf8 + uVar4),local_28,1);
      local_28[0] = CONCAT31(local_28[0]._1_3_,(char)*(undefined4 *)(param_2 + 0xa8));
      uVar2 = FUN_001d4690(param_2 + 0xd8,local_28);
      if ((uVar2 & 1) == 0) {
        return 0;
      }
      return 1;
    }
  }
LAB_001d55f0:
                    /* WARNING: Subroutine does not return */
  FUN_0018786c("C:\\home\\ws\\Master\\Pack\\7923402a\\.\\OnlineCore/src/Core/LiteBuffer.h",0x4e,
               0xe0000019,0);
}


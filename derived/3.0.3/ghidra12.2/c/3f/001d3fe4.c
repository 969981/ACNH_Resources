
undefined8 FUN_001d3fe4(undefined8 param_1,long param_2)

{
  long lVar1;
  void *__dest;
  ulong uVar2;
  ushort uVar3;
  ulong uVar4;
  uint local_28 [2];
  
  uVar3 = *(ushort *)(param_2 + 0x60);
  lVar1 = param_2 + 0xd8;
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
    if (0x34 < uVar2) goto LAB_001d465c;
    *(ulong *)(param_2 + 0xf0) = uVar2;
    memcpy((void *)((long)__dest + uVar4),local_28,1);
    local_28[0] = *(uint *)(param_2 + 0xd0);
    uVar4 = *(ulong *)(param_2 + 0xf0);
    uVar2 = uVar4 + 4;
    if (uVar4 + 4 <= uVar4) {
      uVar2 = uVar4;
    }
    if (0x34 < uVar2) goto LAB_001d465c;
    *(ulong *)(param_2 + 0xf0) = uVar2;
    memcpy((void *)((long)__dest + uVar4),local_28,4);
    uVar4 = *(ulong *)(param_2 + 0xf0);
    local_28[0] = CONCAT31(local_28[0]._1_3_,1);
    uVar2 = uVar4;
    if (uVar4 < uVar4 + 1) {
      uVar2 = uVar4 + 1;
    }
    if (0x34 < uVar2) goto LAB_001d465c;
    *(ulong *)(param_2 + 0xf0) = uVar2;
    memcpy((void *)((long)__dest + uVar4),local_28,1);
    local_28[0] = CONCAT31(local_28[0]._1_3_,0x10);
    uVar4 = *(ulong *)(param_2 + 0xf0);
    uVar2 = uVar4;
    if (uVar4 < uVar4 + 1) {
      uVar2 = uVar4 + 1;
    }
    if (0x34 < uVar2) goto LAB_001d465c;
    *(ulong *)(param_2 + 0xf0) = uVar2;
    memcpy((void *)((long)__dest + uVar4),local_28,1);
    if (*(long *)(param_2 + 0x98) == 0) {
      uVar4 = *(ulong *)(param_2 + 0xf0);
      local_28[0] = local_28[0] & 0xffffff00;
      uVar2 = uVar4;
      if (uVar4 < uVar4 + 1) {
        uVar2 = uVar4 + 1;
      }
      if (0x34 < uVar2) goto LAB_001d465c;
      *(ulong *)(param_2 + 0xf0) = uVar2;
      memcpy((void *)((long)__dest + uVar4),local_28,1);
      uVar4 = *(ulong *)(param_2 + 0xf0);
      local_28[0] = local_28[0] & 0xffffff00;
      uVar2 = uVar4;
      if (uVar4 < uVar4 + 1) {
        uVar2 = uVar4 + 1;
      }
      if (0x34 < uVar2) goto LAB_001d465c;
      *(ulong *)(param_2 + 0xf0) = uVar2;
      memcpy((void *)((long)__dest + uVar4),local_28,1);
      uVar4 = *(ulong *)(param_2 + 0xf0);
      local_28[0] = local_28[0] & 0xffffff00;
      uVar2 = uVar4;
      if (uVar4 < uVar4 + 1) {
        uVar2 = uVar4 + 1;
      }
      if (0x34 < uVar2) goto LAB_001d465c;
      *(ulong *)(param_2 + 0xf0) = uVar2;
      memcpy((void *)((long)__dest + uVar4),local_28,1);
      uVar4 = *(ulong *)(param_2 + 0xf0);
      local_28[0] = local_28[0] & 0xffffff00;
      uVar2 = uVar4;
      if (uVar4 < uVar4 + 1) {
        uVar2 = uVar4 + 1;
      }
      if (0x34 < uVar2) goto LAB_001d465c;
      *(ulong *)(param_2 + 0xf0) = uVar2;
      memcpy((void *)((long)__dest + uVar4),local_28,1);
      uVar4 = *(ulong *)(param_2 + 0xf0);
      local_28[0] = local_28[0] & 0xffffff00;
      uVar2 = uVar4;
      if (uVar4 < uVar4 + 1) {
        uVar2 = uVar4 + 1;
      }
      if (0x34 < uVar2) goto LAB_001d465c;
      *(ulong *)(param_2 + 0xf0) = uVar2;
      memcpy((void *)((long)__dest + uVar4),local_28,1);
      uVar4 = *(ulong *)(param_2 + 0xf0);
      local_28[0] = local_28[0] & 0xffffff00;
      uVar2 = uVar4;
      if (uVar4 < uVar4 + 1) {
        uVar2 = uVar4 + 1;
      }
      if (0x34 < uVar2) goto LAB_001d465c;
      *(ulong *)(param_2 + 0xf0) = uVar2;
      memcpy((void *)((long)__dest + uVar4),local_28,1);
      uVar4 = *(ulong *)(param_2 + 0xf0);
      local_28[0] = local_28[0] & 0xffffff00;
      uVar2 = uVar4;
      if (uVar4 < uVar4 + 1) {
        uVar2 = uVar4 + 1;
      }
      if (0x34 < uVar2) goto LAB_001d465c;
      *(ulong *)(param_2 + 0xf0) = uVar2;
      memcpy((void *)((long)__dest + uVar4),local_28,1);
      uVar4 = *(ulong *)(param_2 + 0xf0);
      local_28[0] = local_28[0] & 0xffffff00;
      uVar2 = uVar4;
      if (uVar4 < uVar4 + 1) {
        uVar2 = uVar4 + 1;
      }
      if (0x34 < uVar2) goto LAB_001d465c;
      *(ulong *)(param_2 + 0xf0) = uVar2;
      memcpy((void *)((long)__dest + uVar4),local_28,1);
      uVar4 = *(ulong *)(param_2 + 0xf0);
      local_28[0] = local_28[0] & 0xffffff00;
      uVar2 = uVar4;
      if (uVar4 < uVar4 + 1) {
        uVar2 = uVar4 + 1;
      }
      if (0x34 < uVar2) goto LAB_001d465c;
      *(ulong *)(param_2 + 0xf0) = uVar2;
      memcpy((void *)((long)__dest + uVar4),local_28,1);
      uVar4 = *(ulong *)(param_2 + 0xf0);
      local_28[0] = local_28[0] & 0xffffff00;
      uVar2 = uVar4;
      if (uVar4 < uVar4 + 1) {
        uVar2 = uVar4 + 1;
      }
      if (0x34 < uVar2) goto LAB_001d465c;
      *(ulong *)(param_2 + 0xf0) = uVar2;
      memcpy((void *)((long)__dest + uVar4),local_28,1);
      uVar4 = *(ulong *)(param_2 + 0xf0);
      local_28[0] = local_28[0] & 0xffffff00;
      uVar2 = uVar4;
      if (uVar4 < uVar4 + 1) {
        uVar2 = uVar4 + 1;
      }
      if (0x34 < uVar2) goto LAB_001d465c;
      *(ulong *)(param_2 + 0xf0) = uVar2;
      memcpy((void *)((long)__dest + uVar4),local_28,1);
      uVar4 = *(ulong *)(param_2 + 0xf0);
      local_28[0] = local_28[0] & 0xffffff00;
      uVar2 = uVar4;
      if (uVar4 < uVar4 + 1) {
        uVar2 = uVar4 + 1;
      }
      if (0x34 < uVar2) goto LAB_001d465c;
      *(ulong *)(param_2 + 0xf0) = uVar2;
      memcpy((void *)((long)__dest + uVar4),local_28,1);
      uVar4 = *(ulong *)(param_2 + 0xf0);
      local_28[0] = local_28[0] & 0xffffff00;
      uVar2 = uVar4;
      if (uVar4 < uVar4 + 1) {
        uVar2 = uVar4 + 1;
      }
      if (0x34 < uVar2) goto LAB_001d465c;
      *(ulong *)(param_2 + 0xf0) = uVar2;
      memcpy((void *)((long)__dest + uVar4),local_28,1);
      uVar4 = *(ulong *)(param_2 + 0xf0);
      local_28[0] = local_28[0] & 0xffffff00;
      uVar2 = uVar4;
      if (uVar4 < uVar4 + 1) {
        uVar2 = uVar4 + 1;
      }
      if (0x34 < uVar2) goto LAB_001d465c;
      *(ulong *)(param_2 + 0xf0) = uVar2;
      memcpy((void *)((long)__dest + uVar4),local_28,1);
      uVar4 = *(ulong *)(param_2 + 0xf0);
      local_28[0] = local_28[0] & 0xffffff00;
      uVar2 = uVar4;
      if (uVar4 < uVar4 + 1) {
        uVar2 = uVar4 + 1;
      }
      if (0x34 < uVar2) goto LAB_001d465c;
      *(ulong *)(param_2 + 0xf0) = uVar2;
      memcpy((void *)((long)__dest + uVar4),local_28,1);
      uVar4 = *(ulong *)(param_2 + 0xf0);
      local_28[0] = local_28[0] & 0xffffff00;
      uVar2 = uVar4;
      if (uVar4 < uVar4 + 1) {
        uVar2 = uVar4 + 1;
      }
      if (0x34 < uVar2) goto LAB_001d465c;
      *(ulong *)(param_2 + 0xf0) = uVar2;
      memcpy((void *)((long)__dest + uVar4),local_28,1);
      uVar3 = *(ushort *)(param_2 + 0x60);
    }
    else {
      uVar2 = FUN_001d3c1c(lVar1,param_2 + 0x88);
      if ((uVar2 & 1) == 0) {
        return 0;
      }
      uVar3 = *(ushort *)(param_2 + 0x60);
    }
    if (((uVar3 & 0xf) == 1) && (*(short *)(param_2 + 0x80) != 0)) {
      local_28[0]._1_3_ = (undefined3)(local_28[0] >> 8);
      local_28[0]._0_1_ = 3;
      uVar2 = FUN_001d4690(lVar1,local_28);
      if ((uVar2 & 1) == 0) {
        return 0;
      }
      local_28[0] = CONCAT31(local_28[0]._1_3_,2);
      uVar2 = FUN_001d4690(lVar1,local_28);
      if ((uVar2 & 1) == 0) {
        return 0;
      }
      local_28[0] = CONCAT22(local_28[0]._2_2_,*(undefined2 *)(param_2 + 0x80));
      uVar2 = FUN_001d4714(lVar1,local_28);
      if ((uVar2 & 1) == 0) {
        return 0;
      }
    }
    local_28[0]._0_1_ = 4;
    uVar2 = FUN_001d4690(lVar1,local_28);
    if ((uVar2 & 1) == 0) {
      return 0;
    }
    local_28[0]._0_1_ = 1;
    uVar2 = FUN_001d4690(lVar1,local_28);
    if ((uVar2 & 1) == 0) {
      return 0;
    }
    local_28[0] = CONCAT31(local_28[0]._1_3_,*(undefined1 *)(param_2 + 0xa3));
    uVar2 = FUN_001d4690(lVar1,local_28);
    if ((uVar2 & 1) == 0) {
      return 0;
    }
    uVar3 = *(ushort *)(param_2 + 0x60);
  }
  if (((uVar3 & 0x1f) == 3) && (*(int *)(param_2 + 0xa8) != 0)) {
    local_28[0]._1_3_ = (undefined3)(local_28[0] >> 8);
    local_28[0] = CONCAT31(local_28[0]._1_3_,5);
    uVar4 = *(ulong *)(param_2 + 0xf0);
    uVar2 = uVar4;
    if (uVar4 < uVar4 + 1) {
      uVar2 = uVar4 + 1;
    }
    if (0x34 < uVar2) goto LAB_001d465c;
    *(ulong *)(param_2 + 0xf0) = uVar2;
    memcpy((void *)(param_2 + 0xf8 + uVar4),local_28,1);
    uVar4 = *(ulong *)(param_2 + 0xf0);
    local_28[0] = CONCAT31(local_28[0]._1_3_,1);
    uVar2 = uVar4;
    if (uVar4 < uVar4 + 1) {
      uVar2 = uVar4 + 1;
    }
    if (0x34 < uVar2) goto LAB_001d465c;
    *(ulong *)(param_2 + 0xf0) = uVar2;
    memcpy((void *)(param_2 + 0xf8 + uVar4),local_28,1);
    local_28[0] = CONCAT31(local_28[0]._1_3_,(char)*(undefined4 *)(param_2 + 0xa8));
    uVar2 = FUN_001d4690(lVar1,local_28);
    if ((uVar2 & 1) == 0) {
      return 0;
    }
    uVar3 = *(ushort *)(param_2 + 0x60);
  }
  if ((uVar3 & 0xf) != 2) {
    return 1;
  }
  local_28[0] = CONCAT31(local_28[0]._1_3_,2);
  uVar4 = *(ulong *)(param_2 + 0xf0);
  uVar2 = uVar4;
  if (uVar4 < uVar4 + 1) {
    uVar2 = uVar4 + 1;
  }
  if (uVar2 < 0x35) {
    lVar1 = param_2 + 0xf8;
    *(ulong *)(param_2 + 0xf0) = uVar2;
    memcpy((void *)(lVar1 + uVar4),local_28,1);
    uVar4 = *(ulong *)(param_2 + 0xf0);
    local_28[0] = CONCAT31(local_28[0]._1_3_,1);
    uVar2 = uVar4;
    if (uVar4 < uVar4 + 1) {
      uVar2 = uVar4 + 1;
    }
    if (uVar2 < 0x35) {
      *(ulong *)(param_2 + 0xf0) = uVar2;
      memcpy((void *)(lVar1 + uVar4),local_28,1);
      local_28[0] = CONCAT31(local_28[0]._1_3_,*(undefined1 *)(param_2 + 0xa0));
      uVar4 = *(ulong *)(param_2 + 0xf0);
      uVar2 = uVar4;
      if (uVar4 < uVar4 + 1) {
        uVar2 = uVar4 + 1;
      }
      if (uVar2 < 0x35) {
        *(ulong *)(param_2 + 0xf0) = uVar2;
        memcpy((void *)(lVar1 + uVar4),local_28,1);
        return 1;
      }
    }
  }
LAB_001d465c:
                    /* WARNING: Subroutine does not return */
  FUN_0018786c("C:\\home\\ws\\Master\\Pack\\7923402a\\.\\OnlineCore/src/Core/LiteBuffer.h",0x4e,
               0xe0000019,0);
}


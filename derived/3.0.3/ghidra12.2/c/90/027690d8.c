
/* WARNING: Switch with 1 destination removed at 0x027691f4 : 5 cases all go to same destination */

void FUN_027690d8(long *param_1,long *param_2)

{
  void *__dest;
  long lVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  short *psVar5;
  ulong uVar6;
  void *__src;
  uint local_38;
  char local_34;
  
  lVar1 = (**(code **)(*param_1 + 0x18))();
  __src = (void *)0x0;
  if (lVar1 != 0) {
    lVar2 = (**(code **)(*param_1 + 0x20))(param_1);
    __src = (void *)0x0;
    if (lVar2 != 0) {
      __src = (void *)(*(long *)(lVar1 + 0x20) + lVar2);
    }
  }
  lVar1 = param_2[5];
  lVar2 = param_2[6];
  lVar3 = (**(code **)(*param_1 + 0x18))(param_1);
  if (lVar3 != 0) {
    (**(code **)(DAT_0558d470 + 0x18))(&DAT_0558d470);
    local_38 = 0;
    local_34 = '\0';
    uVar4 = FUN_03ea9450((undefined8 *)(lVar3 + 8),&local_38,DAT_0558d478);
    if (((uVar4 & 1) != 0) && (local_34 != -1)) {
      uVar4 = (ulong)local_38;
      if (local_34 == -0x2f) {
        if (-1 < (int)local_38) {
          uVar4 = (ulong)(local_38 & ((int)local_38 >> 0x1f ^ 0xffffffffU));
          goto LAB_0276918c;
        }
      }
      else {
        if (local_34 == -0x2d) goto LAB_0276918c;
        psVar5 = *(short **)(lVar3 + 8);
        uVar6 = *(ulong *)((long)psVar5 + uVar4);
        uVar4 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
        uVar4 = (uVar4 & 0xffff0000ffff0000) >> 0x10 | (uVar4 & 0xffff0000ffff) << 0x10;
        uVar4 = uVar4 >> 0x20 | uVar4 << 0x20;
        if (*psVar5 != 0x5942) {
          uVar4 = uVar6;
        }
        if ((local_34 == -0x2b) || ((local_34 == -0x2c && (-1 < (long)uVar4)))) goto LAB_0276918c;
      }
    }
  }
  uVar4 = 0;
LAB_0276918c:
  lVar3 = (**(code **)(*param_2 + 0x18))(param_2);
  if (lVar3 != 0) {
    (**(code **)(DAT_0558d470 + 0x18))(&DAT_0558d470);
    local_38 = 0;
    local_34 = '\0';
    FUN_03ea9450(lVar3 + 8,&local_38,DAT_0558d478);
  }
  __dest = (void *)0x0;
  if (lVar2 != 0) {
    __dest = (void *)(lVar1 + lVar2);
  }
  memcpy(__dest,__src,uVar4);
  return;
}


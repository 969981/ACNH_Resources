
ulong FUN_0016defc(long param_1)

{
  ulong uVar1;
  long lVar2;
  undefined8 local_28;
  
  local_28 = 0;
  do {
    uVar1 = FUN_0016d090(param_1,&local_28,0);
    if ((long)uVar1 < 1) {
LAB_0016df90:
      return uVar1 & 0xffffffff;
    }
    lVar2 = (**(code **)(param_1 + 0x7d8))
                      (param_1,local_28,uVar1,0,*(undefined8 *)(param_1 + 0x8b8));
    if (lVar2 < 0) {
      if (lVar2 == -0x1f8) {
        lVar2 = *(long *)(*(long *)(param_1 + 0x160) + 0x18) - uVar1;
        uVar1 = 0;
        *(long *)(*(long *)(param_1 + 0x160) + 0x18) = lVar2;
      }
      else {
        uVar1 = 0xfffffc7a;
      }
      goto LAB_0016df90;
    }
    *(ulong *)(*(long *)(param_1 + 0x160) + 0x18) =
         *(long *)(*(long *)(param_1 + 0x160) + 0x18) + (lVar2 - uVar1);
  } while( true );
}


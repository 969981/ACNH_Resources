
long FUN_00641980(long param_1)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  undefined1 auVar4 [16];
  long local_48 [2];
  undefined8 local_38;
  
  plVar1 = (long *)(*(long *)(param_1 + 0x28) + 8);
  *(long **)(param_1 + 0x28) = plVar1;
  if (*(long *)(param_1 + 0x20) != 0) {
    auVar4._8_8_ = *(long **)(param_1 + 0x30);
    auVar4._0_8_ = plVar1;
    if (plVar1 < *(long **)(param_1 + 0x30)) goto LAB_006419d0;
LAB_00641a38:
    if (auVar4._8_8_ <= auVar4._0_8_) {
      lVar3 = *(long *)(param_1 + 0x20);
      if (auVar4._8_8_ != 0) {
        lVar3 = FUN_00427d30();
      }
      *(long *)(param_1 + 0x20) = lVar3;
      if (lVar3 == 0) {
        *(undefined8 *)(param_1 + 0x28) = 0;
        *(undefined8 *)(param_1 + 0x30) = 0;
        return param_1;
      }
      auVar4 = FUN_00428460();
      *(undefined1 (*) [16])(param_1 + 0x28) = auVar4;
      if (*(long *)(param_1 + 0x20) == 0) {
        return param_1;
      }
      while (plVar1 = auVar4._0_8_, plVar1 < auVar4._8_8_) {
LAB_006419d0:
        lVar3 = *plVar1;
        if (lVar3 != 0) {
          local_48[1] = 1;
          local_38 = 0;
          local_48[0] = lVar3;
          FUN_00428440(lVar3);
          lVar3 = FUN_00642490(local_48,lVar3,0,0,0);
          if ((lVar3 == 0) || ((int)local_38 != 0)) goto LAB_00641a0c;
LAB_00641a34:
          auVar4 = *(undefined1 (*) [16])(param_1 + 0x28);
          break;
        }
LAB_00641a0c:
        if ((*(int *)(param_1 + 0x18) != 0) &&
           ((lVar3 = **(long **)(param_1 + 0x28), uVar2 = FUN_00428440(lVar3), lVar3 != 0 &&
            ((uVar2 & 0x1f) == 6)))) goto LAB_00641a34;
        lVar3 = *(long *)(param_1 + 0x28) + 8;
        auVar4._8_8_ = *(undefined8 *)(param_1 + 0x30);
        auVar4._0_8_ = lVar3;
        *(long *)(param_1 + 0x28) = lVar3;
      }
      goto LAB_00641a38;
    }
  }
  return param_1;
}


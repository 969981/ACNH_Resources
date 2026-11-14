
undefined8 FUN_01c744c4(long param_1,uint *param_2)

{
  ulong uVar1;
  long lVar2;
  uint **local_60;
  undefined1 *local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  uint *local_8;
  
  local_58 = (undefined1 *)&local_60;
  lVar2 = *(long *)(param_1 + 0x50);
  local_8 = param_2;
  if (lVar2 == 0) {
    local_60 = &local_8;
    if (*(uint *)(param_1 + 0xb0) == 0xffffffff) {
                    /* WARNING: Subroutine does not return */
      FUN_00d72dc0();
    }
    uVar1 = (*(code *)(&PTR_LAB_04a431a0)[*(uint *)(param_1 + 0xb0)])(&local_58,param_1 + 0x58);
    if ((uVar1 & 1) != 0) {
      return 1;
    }
  }
  else if (*(int *)(lVar2 + 0x564) == 2) {
    if (*(char *)(lVar2 + 0x370) != '\0') {
      if (*(char *)(lVar2 + 0x348) == '\0') {
        memset((void *)(lVar2 + 0x218),0,0x130);
      }
      else if (0xfffffffd < *(byte *)(lVar2 + 0x228) - 4) {
        if (*(byte *)(lVar2 + 0x228) == 3) {
          if (*(long *)(lVar2 + 0x220) != 0x39) {
            return 0;
          }
          local_38 = *(undefined8 *)(lVar2 + 0x249);
          uStack_30 = *(undefined8 *)(lVar2 + 0x251);
          local_28 = *(ulong *)(lVar2 + 0x259);
          local_58 = *(undefined1 **)(lVar2 + 0x229);
          uStack_50 = *(undefined8 *)(lVar2 + 0x231);
          local_48 = *(undefined8 *)(lVar2 + 0x239);
          uStack_40 = *(undefined8 *)(lVar2 + 0x241);
        }
        else {
          if (*(long *)(lVar2 + 0x220) != 0x35) {
            return 0;
          }
          local_38 = *(undefined8 *)(lVar2 + 0x249);
          uStack_30 = *(undefined8 *)(lVar2 + 0x251);
          local_28 = (ulong)CONCAT22((short)((uint)(undefined4)local_28 >> 0x10),
                                     *(undefined2 *)(lVar2 + 0x259));
          local_58 = *(undefined1 **)(lVar2 + 0x229);
          uStack_50 = *(undefined8 *)(lVar2 + 0x231);
          local_48 = *(undefined8 *)(lVar2 + 0x239);
          uStack_40 = *(undefined8 *)(lVar2 + 0x241);
        }
        lVar2 = FUN_00a7f6d4(&local_48);
        if (lVar2 == 0) {
          return 0;
        }
        if (3 < uStack_30._7_1_) {
          return 0;
        }
        if (2 < (byte)local_28) {
          return 0;
        }
        if (local_28._1_1_ < 4) {
          *param_2 = (uint)(byte)local_28;
          return 1;
        }
        return 0;
      }
    }
  }
  else if (*(int *)(lVar2 + 0x564) == 1) {
    *param_2 = *(uint *)(lVar2 + 0x530);
    return 1;
  }
  return 0;
}


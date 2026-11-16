
undefined8 FUN_025504e4(byte *param_1,ulong param_2,ulong param_3)

{
  uint *puVar1;
  int iVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  
  if ((param_3 & 1) == 0) {
    iVar2 = FUN_0274bce0(param_1,&DAT_054f0638);
    if (iVar2 == 0) {
      if (*param_1 < 8) {
        if (DAT_04c487d4 != 0xffff) {
          puVar1 = (uint *)(PTR_DAT_04bc39f8 + ((long)(short)DAT_04c487d4 & 0xffffffffU) * 8);
          if (0xff < DAT_04c487d4) {
            puVar1 = (uint *)PTR_DAT_04bc39f8;
          }
          if (((*puVar1 >> 6 & 1) != 0) && (uVar3 = FUN_02915598(param_1), (uVar3 & 1) != 0))
          goto LAB_02550504;
        }
      }
      else if (DAT_04c487d4 != 0xffff) {
        puVar1 = (uint *)(PTR_DAT_04bc39f8 + ((long)(short)DAT_04c487d4 & 0xffffffffU) * 8);
        if (0xff < DAT_04c487d4) {
          puVar1 = (uint *)PTR_DAT_04bc39f8;
        }
        if ((*puVar1 >> 6 & 1) != 0) goto LAB_02550504;
      }
    }
    uVar5 = 0;
  }
  else {
LAB_02550504:
    uVar5 = 1;
    FUN_0274bfe8(param_1,&DAT_054f0638,1);
    if ((param_2 & 1) != 0) {
      if (DAT_054f5738 == 0) {
        if ((DAT_054f0960 & 1) == 0) {
          iVar2 = __cxa_guard_acquire(&DAT_054f0960);
          puVar4 = &DAT_054f0958;
          if (iVar2 != 0) {
            DAT_054f0958 = 0;
            __cxa_guard_release(&DAT_054f0960);
          }
        }
        else {
          puVar4 = &DAT_054f0958;
        }
      }
      else {
        puVar4 = (undefined8 *)(DAT_054f5738 + 0x204);
        if ((ulong)*param_1 < 8) {
          puVar4 = (undefined8 *)(DAT_054f5738 + 0x204) + *param_1;
        }
      }
      *(uint *)((long)puVar4 + 4) = *(uint *)((long)puVar4 + 4) | 2;
    }
  }
  return uVar5;
}


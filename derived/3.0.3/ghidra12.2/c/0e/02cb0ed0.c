
byte FUN_02cb0ed0(undefined8 param_1,long *param_2,byte *param_3,long *param_4,long *param_5)

{
  long lVar1;
  long lVar2;
  bool bVar3;
  byte bVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  uint uVar8;
  long lVar9;
  byte local_70 [8];
  long local_68;
  long lStack_60;
  long *local_58;
  
  if (*param_4 == 0 || *param_5 == 0) {
    return 0;
  }
  uVar5 = FUN_02640eb0();
  if ((uVar5 & 1) == 0) {
    bVar4 = 0;
  }
  else {
    lVar6 = FUN_026585a0(param_3);
    lVar2 = DAT_053565a0;
    bVar4 = 0;
    if (lVar6 != 0) {
      local_70[0] = *param_3;
      lStack_60 = *param_5;
      if (7 < local_70[0]) {
        local_70[0] = 0xff;
      }
      local_68 = lVar6;
      local_58 = param_2;
      lVar7 = FUN_01d84c14(DAT_05373f28,local_70);
      uVar8 = 0;
      if (*(uint *)(lVar2 + 0x18) != 0xffffffff) {
        uVar8 = *(uint *)(lVar2 + 0x18);
      }
      if (*(uint *)(lVar2 + 8) <= uVar8) {
        uVar8 = 0;
      }
      bVar4 = *(byte *)(*(long *)(lVar2 + 0x10) + (long)(int)uVar8 * 0x58 + 0x10);
      if ((bVar4 & 1) == 0) {
        bVar3 = true;
      }
      else {
        bVar3 = (bVar4 & 0x40) == 0;
        if ((lVar7 != 0) && ((bVar4 & 0x40) != 0)) {
          *(undefined8 *)(lVar2 + 0xb8) = 0;
          *(undefined8 *)(lVar2 + 0xc0) = 0;
          *(undefined1 *)(lVar2 + 0xb2) = 0xff;
          *(undefined8 *)(lVar2 + 200) = 0;
          (**(code **)(*param_2 + 0x18))(param_2);
          lVar9 = 0;
          do {
            if (*(short *)(param_2[1] + lVar9 * 2) == 0) goto LAB_02cb1030;
            lVar1 = param_2[1] + lVar9 * 2;
            if (*(short *)(lVar1 + 2) == 0) {
              lVar9 = lVar9 + 1;
              goto LAB_02cb1030;
            }
            if (*(short *)(lVar1 + 4) == 0) {
              lVar9 = lVar9 + 2;
              goto LAB_02cb1030;
            }
            lVar9 = lVar9 + 3;
          } while (lVar9 != 0x80001);
          lVar9 = 0;
LAB_02cb1030:
          uVar8 = (uint)lVar9;
          *(undefined2 *)(lVar2 + 0xb0) = 0;
          *(undefined8 *)(lVar2 + 0xa0) = 0;
          *(undefined8 *)(lVar2 + 0xa8) = 0;
          if (0x3f < (int)uVar8) {
            uVar8 = 0x40;
          }
          *(undefined8 *)(lVar2 + 0x90) = 0;
          *(undefined8 *)(lVar2 + 0x98) = 0;
          *(undefined8 *)(lVar2 + 0x80) = 0;
          *(undefined8 *)(lVar2 + 0x88) = 0;
          *(undefined8 *)(lVar2 + 0x70) = 0;
          *(undefined8 *)(lVar2 + 0x78) = 0;
          *(undefined8 *)(lVar2 + 0x60) = 0;
          *(undefined8 *)(lVar2 + 0x68) = 0;
          *(undefined8 *)(lVar2 + 0x50) = 0;
          *(undefined8 *)(lVar2 + 0x58) = 0;
          *(undefined8 *)(lVar2 + 0x40) = 0;
          *(undefined8 *)(lVar2 + 0x48) = 0;
          *(undefined8 *)(lVar2 + 0x30) = 0;
          *(undefined8 *)(lVar2 + 0x38) = 0;
          (**(code **)(*param_2 + 0x18))(param_2);
          memcpy((undefined8 *)(lVar2 + 0x30),(void *)param_2[1],(ulong)uVar8 << 1);
          *(long *)(lVar2 + 0xb8) = lVar6;
          bVar3 = false;
          *(long *)(lVar2 + 0xc0) = *param_4;
          *(long *)(lVar2 + 200) = *param_5;
          *(long *)(lVar2 + 0xd0) = lVar7;
        }
      }
      bVar4 = bVar3 ^ 1;
    }
  }
  return bVar4;
}



uint FUN_00a8acc0(long param_1,short param_2,ushort param_3)

{
  uint uVar1;
  long lVar2;
  byte *pbVar3;
  char *pcVar4;
  uint uVar5;
  ushort uVar6;
  
  uVar5 = 0;
  do {
    uVar1 = *(uint *)(param_1 + 0x65204);
    if (1 < uVar1) {
      uVar1 = 0;
    }
    if (uVar1 == 1) {
      if (uVar5 < *(uint *)(param_1 + 0x45fb0)) {
        lVar2 = *(long *)(*(long *)(param_1 + 0x45fb8) + (long)(int)uVar5 * 8);
      }
      else {
        lVar2 = 0;
      }
      pbVar3 = (byte *)(**(code **)(*(long *)(lVar2 + 0x30) + 0xf0))();
      uVar6 = (ushort)*pbVar3;
      if (uVar5 < *(uint *)(param_1 + 0x45fb0)) {
        lVar2 = *(long *)(param_1 + 0x45fb8);
        goto LAB_00a8adc0;
      }
LAB_00a8add0:
      lVar2 = 0;
LAB_00a8add4:
      pcVar4 = (char *)(**(code **)(*(long *)(lVar2 + 0x60) + 0xf0))();
      uVar6 = (short)*pcVar4 | uVar6 << 8;
    }
    else {
      uVar6 = 0xc1f;
      if (uVar1 == 0) {
        if (uVar5 < *(uint *)(param_1 + 0x27218)) {
          lVar2 = *(long *)(*(long *)(param_1 + 0x27220) + (long)(int)uVar5 * 8);
        }
        else {
          lVar2 = 0;
        }
        pbVar3 = (byte *)(**(code **)(*(long *)(lVar2 + 0x30) + 0xf0))();
        uVar6 = (ushort)*pbVar3;
        if (*(uint *)(param_1 + 0x27218) <= uVar5) goto LAB_00a8add0;
        lVar2 = *(long *)(param_1 + 0x27220);
LAB_00a8adc0:
        lVar2 = *(long *)(lVar2 + (long)(int)uVar5 * 8);
        goto LAB_00a8add4;
      }
    }
    if ((short)(param_3 & 0xff | param_2 << 8) <= (short)uVar6) {
      return uVar5;
    }
    uVar5 = uVar5 + 1;
    if (uVar5 == 0x28) {
      return 0;
    }
  } while( true );
}


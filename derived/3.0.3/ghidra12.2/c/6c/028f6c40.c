
void FUN_028f6c40(long param_1,int *param_2,ushort *param_3)

{
  ushort uVar1;
  ulong uVar2;
  uint uVar3;
  ushort *puVar4;
  
  uVar2 = 0;
  do {
    uVar1 = *(ushort *)(param_1 + (-(uVar2 >> 0x1f) & 0xfffffffe00000000 | uVar2 << 1));
    if (uVar1 == 0) {
LAB_028f6cb4:
      if ((uVar1 != 0xffff) && ((*param_3 != uVar1 && (param_3[1] != uVar1)))) {
LAB_028f6cd4:
        if (*param_2 < param_2[1]) {
          puVar4 = *(ushort **)(param_2 + 4);
          if (puVar4 != (ushort *)0x0) {
            *(undefined8 *)(param_2 + 4) = *(undefined8 *)puVar4;
            uVar1 = *(ushort *)(param_1 + (long)(int)uVar2 * 2);
          }
          *puVar4 = uVar1;
          if (*param_2 < param_2[1]) {
            *(ushort **)(*(long *)(param_2 + 2) + (long)*param_2 * 8) = puVar4;
            *param_2 = *param_2 + 1;
          }
        }
      }
    }
    else {
      uVar3 = (uVar1 >> 10) - 1;
      if (6 < uVar3) {
        uVar3 = 5;
      }
      if ((uVar3 == 5) || (uVar3 == 6)) goto LAB_028f6cb4;
      if (param_3[2] != uVar1) {
        if (uVar1 == 0) {
          uVar3 = 5;
        }
        else {
          uVar3 = (uVar1 >> 10) - 1;
          if (6 < uVar3) {
            uVar3 = 5;
          }
        }
        if ((uVar3 == 5) || (uVar3 == 6)) goto LAB_028f6c54;
        goto LAB_028f6cd4;
      }
    }
LAB_028f6c54:
    uVar3 = (int)uVar2 + 1;
    uVar2 = (ulong)uVar3;
    if (uVar3 == 0x1fb) {
      return;
    }
  } while( true );
}


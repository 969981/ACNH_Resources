
undefined8 FUN_01dbecb8(long param_1,byte *param_2,long *param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  byte local_34 [4];
  long local_30;
  long lStack_28;
  
  local_34[0] = *param_2;
  if ((((local_34[0] < 8) && (uVar1 = FUN_007b36c8(&local_30,local_34), (uVar1 & 1) != 0)) &&
      (**(long **)(DAT_053719b8 + 8) == local_30 && (*(long **)(DAT_053719b8 + 8))[1] == lStack_28))
     && (lVar3 = *(long *)(param_1 + 0x10), lVar3 != 0)) {
    switch(*(undefined4 *)(lVar3 + 0x380)) {
    case 10:
    case 0xc:
      *(undefined4 *)(lVar3 + 0x3e0) = 0x10;
      if (param_3 == (long *)0x0) {
        uVar2 = 1;
      }
      else {
        *(long **)(lVar3 + 0x3f0) = param_3;
        uVar2 = 1;
        *param_3 = lVar3 + 0x3f0;
        lVar3 = *(long *)(lVar3 + 0x3f0);
        *(undefined8 *)(lVar3 + 8) = 0;
        *(undefined8 *)(lVar3 + 0x10) = 0;
      }
      break;
    default:
      goto switchD_01dbed40_caseD_b;
    case 0xd:
    case 0xf:
      if (param_3 != (long *)0x0) {
        *(long **)(lVar3 + 0x3f0) = param_3;
        *param_3 = lVar3 + 0x3f0;
        lVar4 = *(long *)(lVar3 + 0x3f0);
        *(undefined8 *)(lVar4 + 8) = 0;
        *(undefined8 *)(lVar4 + 0x10) = 0;
      }
      uVar2 = 1;
      *(undefined4 *)(lVar3 + 0x3e0) = 0x10;
    }
  }
  else {
switchD_01dbed40_caseD_b:
    uVar2 = 0;
    if (param_3 != (long *)0x0) {
      param_3[1] = 0x32ffffffff;
      param_3[2] = 0;
    }
  }
  return uVar2;
}


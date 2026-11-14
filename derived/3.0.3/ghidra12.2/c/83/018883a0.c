
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_018883a0(long param_1,long param_2)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  float fVar4;
  
  FUN_01813f50();
  iVar1 = *(int *)(param_2 + 0x28);
  *(uint *)(param_1 + 0x3fc) = *(uint *)(param_1 + 0x3fc) | 3;
  if (*(char *)(param_1 + 0x432) != '\0') goto LAB_01888470;
  if (DAT_052bf87c == iVar1) {
    lVar3 = 0;
LAB_018883fc:
    *(undefined4 *)((long)&DAT_052bf884 + lVar3 * 0xc) = 2;
    *(undefined4 *)(param_1 + 0x4f4) = (&DAT_052bf880)[lVar3 * 3];
  }
  else if (DAT_052bf884._4_4_ == iVar1) {
    lVar3 = 1;
    goto LAB_018883fc;
  }
  FUN_01888920(param_1);
  FUN_01888aac(param_1);
  fVar4 = *(float *)(param_1 + 0x4e4) * 0.0 + 0.0;
  *(float *)(param_1 + 0x334) = fVar4 + *(float *)(param_1 + 0x334);
  *(float *)(param_1 + 0x338) = fVar4 + *(float *)(param_1 + 0x338);
  *(float *)(param_1 + 0x33c) = (0.0 - *(float *)(param_1 + 0x4e4)) + *(float *)(param_1 + 0x33c);
  (**(code **)(**(long **)(param_1 + 0x300) + 0x100))(*(long **)(param_1 + 0x300),param_1 + 0x334);
LAB_01888470:
  fVar4 = _DAT_052ab628;
  *(undefined4 *)(param_1 + 0x540) = 2;
  *(undefined4 *)(param_1 + 0x558) = 5;
  *(undefined8 *)(param_1 + 0x550) = 5;
  *(undefined1 **)(param_1 + 0x2d0) = &LAB_018884f0;
  *(undefined4 *)(param_1 + 0x520) = 0;
  *(undefined1 *)(param_1 + 0x544) = 0;
  *(undefined8 *)(param_1 + 0x538) = 0;
  uVar2 = (uint)(fVar4 * 30.0);
  *(undefined1 *)(param_1 + 0x55c) = 0;
  *(long *)(param_1 + 0x2c8) = param_1;
  *(undefined8 *)(param_1 + 0x2d8) = 0;
  *(byte *)(param_1 + 0x52c) = (byte)(uVar2 >> 0x1f);
  *(uint *)(param_1 + 0x524) = uVar2 & (int)uVar2 >> 0x1f;
  *(uint *)(param_1 + 0x528) = uVar2 & ((int)uVar2 >> 0x1f ^ 0xffffffffU);
  *(undefined ***)(param_1 + 0x2c0) = &PTR_LAB_049cdb28;
  return;
}


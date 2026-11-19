
void FUN_03b566e4(undefined4 *param_1,ushort *param_2,ushort *param_3)

{
  ushort uVar1;
  ulong uVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  
  uVar1 = *param_2;
  if ((uVar1 & 0xc000) == 0x8000) {
    lVar5 = *(long *)(DAT_05aebb88 + 0x178);
    if (lVar5 == 0) {
      return;
    }
    uVar3 = uVar1 & 0x3fff;
    if (*(ushort *)(lVar5 + 0x1f0) == uVar3) {
      plVar6 = (long *)(lVar5 + 0x60);
    }
    else if ((*(char *)(lVar5 + 0x28) == '\0') ||
            (*(long *)(lVar5 + 0x30) == 0 || *(int *)(lVar5 + 0x48) <= (int)uVar3)) {
      plVar6 = (long *)0x0;
    }
    else {
      plVar6 = (long *)(*(long *)(lVar5 + 0x30) + (ulong)uVar3 * 0xe8);
      if (*(ushort *)(plVar6 + 0x1c) != uVar3) {
        plVar6 = (long *)0x0;
      }
    }
    uVar1 = *param_3;
    if ((uint)*(ushort *)(lVar5 + 0x1f0) == (uint)uVar1) {
      plVar7 = (long *)(lVar5 + 0x60);
    }
    else if (*(char *)(lVar5 + 0x28) == '\0') {
      plVar7 = (long *)0x0;
    }
    else {
      plVar7 = (long *)0x0;
      if ((((uVar1 != 0xffff) && (*(long *)(lVar5 + 0x30) != 0)) &&
          (uVar3 = (uint)uVar1, (int)uVar3 < *(int *)(lVar5 + 0x48))) &&
         (plVar7 = (long *)(*(long *)(lVar5 + 0x30) + (ulong)uVar3 * 0xe8),
         *(ushort *)(plVar7 + 0x1c) != uVar3)) {
        plVar7 = (long *)0x0;
      }
    }
    if (plVar6 == (long *)0x0) {
      return;
    }
    uVar2 = (**(code **)(*plVar6 + 0x58))(plVar6);
    if (plVar7 == (long *)0x0) {
      return;
    }
    if ((uVar2 & 1) == 0) {
      return;
    }
    uVar2 = (**(code **)(*plVar7 + 0x58))(plVar7);
    if ((uVar2 & 1) == 0) {
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x03b56960. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar6 + 0x88))(*param_1,plVar6,plVar7);
    return;
  }
  if ((uVar1 & 0xc000) != 0x4000) {
    return;
  }
  if (*(char *)(DAT_05aebb88 + 1) == '\0') {
LAB_03b56758:
    lVar5 = 0;
  }
  else {
    lVar5 = *(long *)(DAT_05aebb88 + 0x1a0);
    uVar3 = uVar1 & 0x3fff;
    if (((*(int *)(lVar5 + 0x24) <= (int)uVar3) || (*(char *)(lVar5 + 0x10) == '\0')) ||
       (*(long *)(lVar5 + 0x18) == 0 || *(int *)(lVar5 + 0x30) <= (int)uVar3)) goto LAB_03b56758;
    lVar5 = *(long *)(lVar5 + 0x18) + (ulong)uVar3 * 0x120;
    if (*(ushort *)(lVar5 + 0x118) != uVar3) {
      lVar5 = 0;
    }
  }
  lVar4 = *(long *)(DAT_05aebb88 + 0x178);
  if (lVar4 != 0) {
    uVar1 = *param_3;
    if (*(ushort *)(lVar4 + 0x1f0) == uVar1) {
      plVar6 = (long *)(lVar4 + 0x60);
      goto joined_r0x03b567f0;
    }
    if (*(char *)(lVar4 + 0x28) != '\0') {
      plVar6 = (long *)0x0;
      if (((uVar1 != 0xffff) && (*(long *)(lVar4 + 0x30) != 0)) &&
         ((uVar3 = (uint)uVar1, (int)uVar3 < *(int *)(lVar4 + 0x48) &&
          (plVar6 = (long *)(*(long *)(lVar4 + 0x30) + (ulong)uVar3 * 0xe8),
          *(ushort *)(plVar6 + 0x1c) != uVar3)))) {
        plVar6 = (long *)0x0;
      }
      goto joined_r0x03b567f0;
    }
  }
  plVar6 = (long *)0x0;
joined_r0x03b567f0:
  if (((lVar5 != 0) && (*(char *)(lVar5 + 0x7a) != '\0')) && (0 < *(int *)(lVar5 + 0xf8))) {
    lVar4 = 0;
    if (*(long *)(lVar5 + 0xf0) != 0) {
      lVar4 = *(long *)(lVar5 + 0xf0) - (long)*(int *)(lVar5 + 0xfc);
    }
    uVar2 = nn::audio::IsVoiceValid((VoiceType *)(lVar4 + 0x80));
    if (((plVar6 != (long *)0x0) && ((uVar2 & 1) != 0)) &&
       (uVar2 = (**(code **)(*plVar6 + 0x58))(plVar6), (uVar2 & 1) != 0)) {
      FUN_03b65cf0(*param_1,lVar5,plVar6);
      return;
    }
  }
  return;
}


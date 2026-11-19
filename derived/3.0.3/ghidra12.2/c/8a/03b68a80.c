
void FUN_03b68a80(long param_1,long *param_2)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  undefined *puVar4;
  uint uVar5;
  long lVar6;
  long *plVar7;
  uint uVar8;
  ulong uVar9;
  ulong uVar10;
  uint uVar11;
  
  puVar4 = PTR_DAT_04bd1e70;
  uVar9 = 0;
  while (uVar5 = (uint)uVar9,
        (*(ulong *)(param_1 + 0xd0 + (uVar9 >> 6) * 8) >> (uVar9 & 0x3f) & 1) == 0) {
    uVar5 = (uint)uVar9 + 1;
    uVar9 = (ulong)uVar5;
    if (uVar5 == 0x60) {
      return;
    }
  }
  do {
    uVar10 = uVar9;
    if (uVar5 == 0x60) {
      return;
    }
    uVar11 = (uint)uVar10;
    cVar3 = cRam000000000000007a;
    if (*(char *)(*(long *)puVar4 + 1) == '\0') {
LAB_03b68b90:
      plVar7 = (long *)0x0;
    }
    else {
      lVar6 = *(long *)(*(long *)puVar4 + 0x1a0);
      uVar5 = uVar11 & 0xffff;
      if ((int)uVar5 < *(int *)(lVar6 + 0x24)) {
        if (*(char *)(lVar6 + 0x10) == '\0') goto LAB_03b68b90;
        if ((uVar5 == 0xffff) ||
           (*(long *)(lVar6 + 0x18) == 0 || *(int *)(lVar6 + 0x30) <= (int)uVar5))
        goto LAB_03b68ba4;
        plVar7 = (long *)(*(long *)(lVar6 + 0x18) + (ulong)uVar5 * 0x120);
        if (*(ushort *)(plVar7 + 0x23) != uVar5) {
          plVar7 = (long *)0x0;
        }
        cVar3 = *(char *)((long)plVar7 + 0x7a);
      }
      else {
LAB_03b68ba4:
        plVar7 = (long *)0x0;
      }
    }
    if ((cVar3 != '\0') && (0 < (int)plVar7[0x1f])) {
      lVar6 = 0;
      if (plVar7[0x1e] != 0) {
        lVar6 = plVar7[0x1e] - (long)*(int *)((long)plVar7 + 0xfc);
      }
      uVar9 = nn::audio::IsVoiceValid((VoiceType *)(lVar6 + 0x80));
      if (((param_2 != (long *)0x0) && ((uVar9 & 1) != 0)) &&
         (uVar5 = (**(code **)(*param_2 + 0x48))(param_2),
         (*(uint *)((long)plVar7 + (ulong)(uVar5 >> 5 & 0x7ff) * 4 + 0x10) >> (ulong)(uVar5 & 0x1f)
         & 1) != 0)) {
        uVar5 = (**(code **)(*param_2 + 0x48))(param_2);
        lVar6 = (ulong)(uVar5 >> 5 & 0x7ff) * 4;
        *(uint *)((long)plVar7 + lVar6 + 0x10) =
             *(uint *)((long)plVar7 + lVar6 + 0x10) & (1 << (ulong)(uVar5 & 0x1f) ^ 0xffffffffU);
        (**(code **)(*plVar7 + 0x30))(plVar7,plVar7 + 1);
      }
    }
    if ((int)uVar11 < 0x60) {
      uVar11 = 0x5f;
    }
    do {
      uVar8 = (uint)uVar10;
      uVar1 = uVar8 + 1;
      uVar9 = (ulong)uVar1;
      uVar5 = uVar11 + 1;
      if (uVar11 == uVar8) break;
      uVar2 = uVar8 + 0x40;
      if (-1 < (int)uVar1) {
        uVar2 = uVar1;
      }
      uVar10 = (ulong)uVar1;
      uVar5 = uVar1;
    } while ((*(ulong *)(param_1 + 0xd0 + (long)((int)uVar2 >> 6) * 8) >>
              ((ulong)(uVar8 + 1) & 0x3f) & 1) == 0);
  } while( true );
}


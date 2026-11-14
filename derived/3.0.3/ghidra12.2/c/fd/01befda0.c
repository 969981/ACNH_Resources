
ulong FUN_01befda0(long *param_1,long param_2)

{
  long lVar1;
  void *__src;
  long *plVar2;
  uint uVar3;
  short sVar4;
  short sVar5;
  bool bVar6;
  long lVar7;
  int iVar8;
  long lVar9;
  void *__dest;
  ulong uVar10;
  ulong uVar11;
  int iVar12;
  short *psVar13;
  undefined *local_60;
  long local_58;
  
  plVar2 = (long *)*param_1;
  iVar12 = (int)param_1[1];
  uVar11 = param_1[1] & 0xffffffff;
  local_58 = param_1[3];
  local_60 = PTR_DAT_04bb8610 + 0x10;
  (**(code **)(*plVar2 + 0x18))(plVar2);
  lVar7 = plVar2[1];
  lVar9 = 0;
  do {
    if (*(short *)(lVar7 + lVar9 * 2) == 0) {
LAB_01befe48:
      iVar8 = (int)lVar9;
      goto joined_r0x01befe48;
    }
    lVar1 = lVar7 + lVar9 * 2;
    if (*(short *)(lVar1 + 2) == 0) {
      lVar9 = lVar9 + 1;
      goto LAB_01befe48;
    }
    if (*(short *)(lVar1 + 4) == 0) {
      iVar8 = (int)lVar9 + 2;
      if (iVar12 < 0) goto LAB_01beff18;
      goto LAB_01befe4c;
    }
    lVar9 = lVar9 + 3;
  } while (lVar9 != 0x80001);
  iVar8 = 0;
joined_r0x01befe48:
  if (-1 < iVar12) {
LAB_01befe4c:
    if (iVar12 <= iVar8) {
      psVar13 = (short *)(lVar7 + uVar11 * 2);
      if (*psVar13 != 0) {
        do {
          (**(code **)(local_60 + 0x18))(&local_60);
          uVar10 = 0;
          bVar6 = true;
          sVar4 = *psVar13;
          do {
            sVar5 = *(short *)(local_58 + uVar10 * 2);
            if (sVar5 == 0) break;
            if (sVar5 == sVar4) {
              if (bVar6) goto LAB_01beff0c;
              break;
            }
            lVar9 = local_58 + uVar10 * 2;
            sVar5 = *(short *)(lVar9 + 2);
            if (sVar5 == 0) break;
            if (sVar5 == sVar4) goto LAB_01beff0c;
            sVar5 = *(short *)(lVar9 + 4);
            if (sVar5 == 0) break;
            if (sVar5 == sVar4) goto LAB_01beff0c;
            bVar6 = uVar10 < 0x7fffe;
            uVar10 = uVar10 + 3;
          } while (uVar10 != 0x80001);
          uVar11 = uVar11 + 1;
          psVar13 = (short *)(plVar2[1] + uVar11 * 2);
        } while (*psVar13 != 0);
LAB_01beff0c:
        iVar12 = (int)uVar11;
      }
      iVar12 = iVar12 + 1;
    }
  }
LAB_01beff18:
  uVar3 = *(uint *)(param_1 + 1);
  param_1 = (long *)*param_1;
  uVar11 = (ulong)(iVar12 + ~uVar3);
  (**(code **)(*param_1 + 0x18))(param_1);
  lVar7 = param_1[1];
  lVar9 = 0;
  do {
    if (*(short *)(lVar7 + lVar9 * 2) == 0) goto LAB_01beff7c;
    lVar1 = lVar7 + lVar9 * 2;
    if (*(short *)(lVar1 + 2) == 0) {
      lVar9 = lVar9 + 1;
      goto LAB_01beff7c;
    }
    if (*(short *)(lVar1 + 4) == 0) {
      lVar9 = lVar9 + 2;
      goto LAB_01beff7c;
    }
    lVar9 = lVar9 + 3;
  } while (lVar9 != 0x80001);
  lVar9 = 0;
LAB_01beff7c:
  __dest = *(void **)(param_2 + 8);
  __src = *(void **)(PTR_PTR_04bb8620 + 8);
  if ((int)uVar3 <= (int)lVar9 && -1 < (int)uVar3) {
    __src = (void *)(lVar7 + (ulong)uVar3 * 2);
  }
  if (__dest == __src) {
    uVar11 = 0;
  }
  else {
    if ((int)(iVar12 + ~uVar3) < 0) {
      uVar11 = 0;
      do {
        if (*(short *)((long)__src + uVar11 * 2) == 0) goto LAB_01beffa8;
        if (*(short *)((long)__src + uVar11 * 2 + 2) == 0) {
          uVar11 = uVar11 + 1;
          goto LAB_01beffa8;
        }
        if (*(short *)((long)__src + uVar11 * 2 + 4) == 0) {
          uVar11 = uVar11 + 2;
          goto LAB_01beffa8;
        }
        uVar11 = uVar11 + 3;
      } while (uVar11 != 0x80001);
      uVar11 = 0;
    }
LAB_01beffa8:
    uVar3 = (uint)uVar11;
    if (*(int *)(param_2 + 0x10) <= (int)(uint)uVar11) {
      uVar3 = *(int *)(param_2 + 0x10) - 1;
    }
    uVar11 = (ulong)uVar3;
    uVar10 = -(ulong)(uVar3 >> 0x1f) & 0xfffffffe00000000 | uVar11 << 1;
    memcpy(__dest,__src,uVar10);
    *(undefined2 *)((long)__dest + uVar10) = 0;
  }
  return uVar11;
}


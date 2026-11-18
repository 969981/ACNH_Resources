
void FUN_035bdac8(short *param_1,undefined1 *param_2,long *param_3)

{
  ulong uVar1;
  char cVar2;
  uint uVar3;
  short sVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  short sVar12;
  int iVar13;
  undefined1 auStack_40 [2];
  ushort local_3e;
  ulong local_38;
  ulong local_18;
  
  uVar9 = *(ulong *)(param_2 + 8);
  uVar1 = *(ulong *)(param_2 + 0x10);
  cVar2 = param_2[1];
  *(undefined1 *)(param_1 + 8) = *param_2;
  *(undefined1 *)((long)param_1 + 0x11) = param_2[1];
  *(undefined1 *)(param_1 + 9) = param_2[2];
  *(undefined1 *)((long)param_1 + 0x13) = param_2[3];
  uVar10 = *param_3 + 0x11110;
  if (uVar9 != 0xffffffffffffffff) {
    uVar10 = uVar9;
  }
  uVar11 = (uVar10 - *param_3) * 0x1000000;
  uVar8 = ((uVar11 / 0x11110 & 0xffffffff) * (uVar1 & 0xffffffff) >> 0x20) +
          (uVar11 / 0x11110 & 0xffffffff) * (uVar1 >> 0x20);
  uVar9 = (uVar11 / 0x1111000000000) * (uVar1 & 0xffffffff) + (uVar8 & 0xffffffff);
  uVar9 = (uVar9 & 0xffffffff) << 8 |
          (ulong)(uint)((int)(uVar8 >> 0x20) +
                        (int)(uVar11 / 0x1111000000000) * (int)(uVar1 >> 0x20) +
                       (int)(uVar9 >> 0x20)) << 0x28;
  if (0xffffff < uVar9) {
    uVar9 = 0x1000000;
  }
  iVar13 = (int)(uVar9 >> 0x10);
  sVar12 = (short)(uVar9 >> 0x10);
  *param_1 = sVar12;
  param_1[1] = 0x100 - sVar12;
  if (cVar2 == '\0') {
    uVar6 = *(uint *)(param_3 + 4);
    uVar7 = 0;
    if (uVar6 < 6) {
      if ((1 << (ulong)(uVar6 & 0x1f) & 0x2bU) == 0) {
        if (uVar6 == 2) {
          if (((DAT_05aa8c90 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_05aa8c90), iVar5 != 0))
          {
            DAT_05aa8c88 = 0x336f0000000;
            __cxa_guard_release(&DAT_05aa8c90);
          }
          uVar9 = 0;
          if (DAT_05aa8c88 >> 0x18 != 0) {
            uVar9 = ((uVar10 - param_3[2]) * 0x1000000) / (DAT_05aa8c88 >> 0x18);
          }
          uVar10 = (ulong)*(ushort *)((long)param_3 + 0x24) * 0x10000;
          local_18 = 0;
          if (uVar9 <= uVar10) {
            local_18 = uVar10 - uVar9;
          }
          FUN_035bddfc(&local_38,&local_18,5);
          if (0xffffff < local_38) {
            local_38 = 0x1000000;
          }
          uVar7 = (uint)(local_38 >> 0x10);
        }
      }
      else {
        if (((DAT_05aa8ca0 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_05aa8ca0), iVar5 != 0)) {
          DAT_05aa8c98 = 0x55b90000000;
          __cxa_guard_release(&DAT_05aa8ca0);
        }
        uVar9 = 0;
        if (DAT_05aa8c98 >> 0x18 != 0) {
          uVar9 = ((uVar10 - param_3[1]) * 0x1000000) / (DAT_05aa8c98 >> 0x18);
        }
        uVar10 = (ulong)*(ushort *)((long)param_3 + 0x24) * 0x10000;
        local_18 = uVar9 + uVar10;
        if (CARRY8(uVar9,uVar10)) {
          local_18 = 0xffffffffffffffff;
        }
        if (0xffffff < local_18) {
          local_18 = 0x1000000;
        }
        FUN_035bddfc(auStack_40,&local_18,5);
        uVar7 = (uint)local_3e;
      }
    }
    uVar6 = *(uint *)(param_2 + 4);
    param_1[5] = (short)uVar7;
    sVar12 = *param_1;
    uVar3 = (0x100 - uVar7 & 0xffff) * iVar13 >> 8;
    param_1[2] = (short)(uVar3 * (uVar6 & 0xff) * 0x100 >> 8);
    param_1[3] = (short)(uVar3 * (uVar6 & 0xff00) >> 8);
    sVar4 = (short)((uVar7 & 0xffff) * iVar13 >> 8);
    param_1[6] = sVar4;
    param_1[4] = (short)(uVar3 * (uVar6 >> 8 & 0xff00) >> 8);
  }
  else {
    uVar7 = *(uint *)(param_2 + 4);
    uVar6 = 0x100;
    if (uVar10 <= param_3[1] + 0x22220U && (ulong)param_3[3] < (ulong)param_3[1]) {
      uVar6 = 0;
    }
    param_1[5] = (short)uVar6;
    uVar3 = (uVar6 ^ 0x100) * iVar13 >> 8;
    param_1[2] = (short)(uVar3 * (uVar7 & 0xff) * 0x100 >> 8);
    param_1[3] = (short)(uVar3 * (uVar7 & 0xff00) >> 8);
    param_1[4] = (short)(uVar3 * (uVar7 >> 8 & 0xff00) >> 8);
    sVar4 = (short)(uVar6 * iVar13 >> 8);
    param_1[6] = sVar4;
  }
  param_1[7] = sVar12 - sVar4;
  return;
}


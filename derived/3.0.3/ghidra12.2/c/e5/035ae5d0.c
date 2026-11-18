
void FUN_035ae5d0(long param_1,uint *param_2)

{
  uint uVar1;
  ushort uVar2;
  ushort uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  
  lVar7 = DAT_05a60898;
  uVar1 = *param_2;
  if (((((uint)DAT_05779f28 <= (uVar1 & 0xffff)) &&
       ((uVar1 & 0xffff) <= (((uint)DAT_05779f28 + DAT_05779f34) - 1 & 0xffff))) &&
      ((uint)DAT_05779f2a <= uVar1 >> 0x10)) &&
     (uVar1 >> 0x10 <= (((uint)DAT_05779f2a + (uint)DAT_05779f38) - 1 & 0xffff))) {
    uVar2 = (ushort)*param_2;
    uVar3 = *(ushort *)((long)param_2 + 2);
    iVar4 = (uint)uVar2 - (uint)DAT_05779f28;
    iVar5 = (uint)uVar3 - (uint)DAT_05779f2a;
    if ((DAT_05779f48 == 0) ||
       (*(char *)(DAT_05779f48 + (long)(iVar4 + iVar5 * DAT_05779f34) * 0x28 + 6) != '\x03')) {
      uVar1 = iVar4 + DAT_05a5e3dc * iVar5;
      if ((*(uint *)(DAT_05a5e3d0 + (long)((int)uVar1 >> 5) * 4) >> (ulong)(uVar1 & 0x1f) & 1) == 0)
      {
        uVar1 = iVar4 + iVar5 * 0x120;
        uVar8 = (ulong)uVar1;
        if (0x11fff < uVar1) {
          uVar8 = 0;
        }
        if ((&DAT_05a4c3c0)[uVar8] == '\0') {
          return;
        }
        if ((&DAT_05a4c3c0)[uVar8] == '\x01') {
          uVar6 = 7;
        }
        else if (DAT_05a60890 == 0) {
          uVar6 = 6;
        }
        else {
          lVar9 = 0;
          lVar10 = (long)DAT_05a60890 << 3;
          do {
            uVar8 = (*(code *)**(undefined8 **)(lVar7 + lVar9 * 8))
                              ((uint)uVar2,(uint)uVar3,*(undefined8 *)(param_1 + 8),
                               *(undefined8 *)(param_1 + 0x10));
            if ((uVar8 & 1) != 0) {
              uVar6 = (undefined4)lVar9;
              break;
            }
            lVar9 = lVar9 + 1;
            lVar10 = lVar10 + -8;
            uVar6 = 6;
          } while (lVar10 != 0);
        }
      }
      else {
        uVar6 = 5;
      }
    }
    else {
      uVar6 = 4;
    }
    lVar7 = (ulong)uVar2 + (ulong)uVar3 * 0x120;
    if (0x11fff < (uint)lVar7) {
      lVar7 = 0;
    }
    (&DAT_05a60900)[lVar7] = uVar6;
  }
  return;
}


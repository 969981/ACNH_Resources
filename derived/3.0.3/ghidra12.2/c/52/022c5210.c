
void FUN_022c5210(long param_1,int *param_2)

{
  byte *pbVar1;
  int *piVar2;
  byte bVar3;
  byte bVar4;
  ulong uVar5;
  int iVar6;
  undefined4 *puVar7;
  uint uVar8;
  int *piVar9;
  uint local_34;
  
  pbVar1 = PTR_DAT_04bb5038 + (uint)(int)*(char *)((long)param_2 + 0x17);
  if (7 < (uint)(int)*(char *)((long)param_2 + 0x17)) {
    pbVar1 = PTR_DAT_04bb32e0;
  }
  if (*(byte *)((long)param_2 + 0x16) - 0x19 < 2) {
    iVar6 = *param_2;
    if (iVar6 != 0) {
LAB_022c5284:
      local_34 = DAT_0547b48c;
      if ((int)DAT_0547b48c <= (int)DAT_0547b490) {
        bVar4 = *pbVar1;
        bVar3 = bVar4;
        if (7 < bVar4) {
          bVar3 = 0xff;
        }
        do {
          if (local_34 == 0) {
            uVar8 = 0;
LAB_022c5354:
            piVar9 = &DAT_0547b494 + (ulong)uVar8 * 10;
          }
          else {
            if (local_34 == 0xd) {
              uVar8 = 1;
              goto LAB_022c5354;
            }
            if (((int)local_34 < (int)DAT_0547b48c) || ((int)DAT_0547b490 < (int)local_34)) {
              uVar8 = 0;
              goto LAB_022c5354;
            }
            piVar9 = &DAT_0547b494;
            uVar8 = (local_34 - DAT_0547b48c) + 2;
            if (uVar8 < 0xe) goto LAB_022c5354;
          }
          piVar2 = piVar9 + ((long)(char)bVar3 & 0xffffffff);
          if (7 < bVar4) {
            piVar2 = piVar9;
          }
          if (*piVar2 == iVar6) goto LAB_022c52a8;
        } while ((local_34 != DAT_0547b490) &&
                (local_34 = local_34 + 1, (int)local_34 <= (int)DAT_0547b490));
      }
      local_34 = 0;
      goto LAB_022c52a8;
    }
    local_34 = 0xd;
  }
  else {
    if (*(byte *)((long)param_2 + 0x16) != 0x1b) {
      iVar6 = *param_2;
      if (iVar6 == 0) {
        return;
      }
      goto LAB_022c5284;
    }
    local_34 = (uint)*(byte *)((long)param_2 + 0x1e);
LAB_022c52a8:
    if (local_34 == 0) {
      return;
    }
  }
  uVar5 = FUN_01254a00(param_2,local_34,0,0);
  if ((uVar5 & 1) == 0) {
    return;
  }
  if (local_34 == 0xd) {
    uVar5 = 1;
  }
  else if (((int)local_34 < (int)DAT_0547b48c) || ((int)DAT_0547b490 < (int)local_34)) {
    uVar5 = 0;
  }
  else {
    uVar8 = (local_34 - DAT_0547b48c) + 2;
    uVar5 = (ulong)uVar8;
    if (0xd < uVar8) {
      puVar7 = &DAT_0547b494;
      goto LAB_022c53f0;
    }
  }
  puVar7 = &DAT_0547b494 + uVar5 * 10;
LAB_022c53f0:
  uVar8 = 1 << (ulong)(*(byte *)((long)param_2 + 0x17) & 0x1f);
  puVar7[8] = puVar7[8] & (uVar8 ^ 0xffffffff);
  puVar7[9] = puVar7[9] | uVar8;
  *(undefined1 *)(param_1 + 8) = 1;
  return;
}


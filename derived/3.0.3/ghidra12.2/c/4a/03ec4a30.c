
void FUN_03ec4a30(long param_1,long param_2,long param_3,byte param_4,long param_5)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long *plVar6;
  long lVar7;
  uint uVar8;
  long lVar9;
  undefined *local_180;
  undefined1 *puStack_178;
  undefined4 local_170;
  undefined1 local_16c [255];
  undefined1 local_6d;
  
  uVar1 = *(uint *)(param_1 + 0xa0);
  uVar2 = *(uint *)(param_1 + 0x20);
  if ((int)uVar1 < (int)uVar2) {
    uVar8 = *(uint *)(param_2 + 4);
    lVar7 = param_1 + 0x40;
    uVar3 = 1 << (ulong)(uVar8 & 0x1f);
    if ((((uVar3 & *(uint *)(lVar7 + (long)((int)uVar8 >> 5) * 4)) != 0) && (0 < (int)uVar1)) &&
       ((*(uint *)(*(long *)PTR_DAT_04bb4a70 + ((long)((ulong)uVar8 << 0x20) >> 0x25) * 4 + 0xe4) &
        uVar3) == 0)) {
      lVar9 = *(long *)(param_1 + 0x28);
      uVar8 = 0;
      do {
        uVar3 = uVar8;
        if (uVar2 <= uVar8) {
          uVar3 = 0;
        }
        puVar5 = (undefined8 *)(lVar9 + (ulong)uVar3 * 0x28);
        uVar4 = FUN_03ec48dc(param_1,puVar5[2],*puVar5,param_5,param_2);
        if ((uVar4 & 1) != 0) {
          lVar7 = lVar9 + (ulong)uVar3 * 0x28;
          *(float *)(lVar7 + 0x1c) = *(float *)(param_3 + 0x10) + *(float *)(lVar7 + 0x1c);
          if (*(float *)(param_3 + 0x10) <= *(float *)(lVar7 + 0x20)) {
            return;
          }
          *(long *)(lVar9 + (ulong)uVar3 * 0x28 + 8) = param_3;
          *(float *)(lVar7 + 0x20) = *(float *)(param_3 + 0x10);
          return;
        }
        uVar8 = uVar8 + 1;
      } while (uVar1 != uVar8);
    }
    *(uint *)(param_1 + 0xa0) = uVar1 + 1;
    if (uVar2 <= uVar1) {
      uVar1 = 0;
    }
    plVar6 = (long *)(*(long *)(param_1 + 0x28) + (long)(int)uVar1 * 0x28);
    plVar6[2] = param_5;
    *plVar6 = param_2;
    plVar6[1] = param_3;
    *(byte *)(plVar6 + 3) = (param_4 ^ 0xff) & 1;
    *(undefined4 *)((long)plVar6 + 0x1c) = *(undefined4 *)(param_3 + 0x10);
    *(undefined4 *)(plVar6 + 4) = *(undefined4 *)(param_3 + 0x10);
    uVar1 = *(uint *)(param_2 + 4);
    if (uVar1 < 0x80) {
      uVar4 = (ulong)(uVar1 >> 3) & 0x1ffffffc;
      *(uint *)(lVar7 + uVar4) = *(uint *)(lVar7 + uVar4) | 1 << (ulong)(uVar1 & 0x1f);
    }
  }
  else {
    local_6d = 0;
    local_170 = 0x100;
    puStack_178 = local_16c;
    local_16c[0] = 0;
    local_180 = PTR_DAT_04bb21f8 + 0x10;
    lVar7 = *(long *)(*(long *)(*(long *)(param_1 + 0x90) + 0x10) + 8);
    FUN_038d1270(&local_180,"%s.as",lVar7 + *(int *)(lVar7 + 0x24) + (long)*(int *)(lVar7 + 8));
  }
  return;
}


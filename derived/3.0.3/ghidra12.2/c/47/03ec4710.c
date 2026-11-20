
void FUN_03ec4710(long param_1,long param_2,long param_3,long param_4)

{
  undefined8 *puVar1;
  long *plVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  ulong uVar6;
  long lVar7;
  uint uVar8;
  long lVar9;
  undefined *local_180;
  undefined1 *puStack_178;
  undefined4 local_170;
  undefined1 local_16c [255];
  undefined1 local_6d;
  
  uVar3 = *(uint *)(param_1 + 0x9c);
  uVar4 = *(uint *)(param_1 + 0x10);
  if ((int)uVar3 < (int)uVar4) {
    uVar8 = *(uint *)(param_2 + 4);
    lVar7 = param_1 + 0x30;
    uVar5 = 1 << (ulong)(uVar8 & 0x1f);
    if ((((uVar5 & *(uint *)(lVar7 + (long)((int)uVar8 >> 5) * 4)) != 0) && (0 < (int)uVar3)) &&
       ((*(uint *)(*(long *)PTR_DAT_04bb4a70 + ((long)((ulong)uVar8 << 0x20) >> 0x25) * 4 + 0xd4) &
        uVar5) == 0)) {
      lVar9 = *(long *)(param_1 + 0x18);
      uVar8 = 0;
      do {
        uVar5 = uVar8;
        if (uVar4 <= uVar8) {
          uVar5 = 0;
        }
        puVar1 = (undefined8 *)(lVar9 + (ulong)uVar5 * 0x20);
        uVar6 = FUN_03ec48dc(param_1,puVar1[2],*puVar1,param_4,param_2);
        if ((uVar6 & 1) != 0) {
          *(float *)(puVar1 + 3) = *(float *)(param_3 + 0x10) + *(float *)(puVar1 + 3);
          if (*(float *)(param_3 + 0x10) <= *(float *)((long)puVar1 + 0x1c)) {
            return;
          }
          puVar1[1] = param_3;
          *(float *)((long)puVar1 + 0x1c) = *(float *)(param_3 + 0x10);
          return;
        }
        uVar8 = uVar8 + 1;
      } while (uVar3 != uVar8);
    }
    *(uint *)(param_1 + 0x9c) = uVar3 + 1;
    if (uVar4 <= uVar3) {
      uVar3 = 0;
    }
    plVar2 = (long *)(*(long *)(param_1 + 0x18) + (long)(int)uVar3 * 0x20);
    *plVar2 = param_2;
    plVar2[1] = param_3;
    plVar2[2] = param_4;
    *(undefined4 *)(plVar2 + 3) = *(undefined4 *)(param_3 + 0x10);
    *(undefined4 *)((long)plVar2 + 0x1c) = *(undefined4 *)(param_3 + 0x10);
    uVar3 = *(uint *)(param_2 + 4);
    if (uVar3 < 0x80) {
      uVar6 = (ulong)(uVar3 >> 3) & 0x1ffffffc;
      *(uint *)(lVar7 + uVar6) = *(uint *)(lVar7 + uVar6) | 1 << (ulong)(uVar3 & 0x1f);
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


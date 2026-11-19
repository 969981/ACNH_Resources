
uint FUN_039e8670(long param_1,undefined8 param_2,undefined8 param_3,uint param_4)

{
  long *plVar1;
  uint uVar2;
  undefined8 uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  long lVar7;
  long local_458;
  byte *local_450;
  
  uVar2 = *(uint *)(param_1 + 0x1f8);
  *(uint *)(param_1 + 0x1f8) = uVar2 + 1;
  uVar4 = uVar2;
  if (*(uint *)(param_1 + 0x1d8) <= uVar2) {
    uVar4 = 0;
  }
  FUN_039e8810(*(long *)(param_1 + 0x1e0) + (long)(int)uVar4 * 0x2e8);
  uVar4 = uVar2;
  if (*(uint *)(param_1 + 0x1d8) <= uVar2) {
    uVar4 = 0;
  }
  lVar7 = *(long *)(param_1 + 0x1e0) + (long)(int)uVar4 * 0x2e8;
  FUN_006e9454(&local_458,&DAT_040c7be9,uVar2);
  uVar3 = 0;
  if (DAT_05ae90f0 != 0) {
    uVar3 = FUN_03954f70(DAT_05ae90f0,&local_458);
  }
  *(undefined8 *)(lVar7 + 0x40) = uVar3;
  (**(code **)(local_458 + 0x18))(&local_458);
  uVar4 = (uint)*local_450;
  if (*local_450 != 0) {
    uVar6 = 0xffffffff;
    do {
      local_450 = local_450 + 1;
      uVar6 = crc32b(uVar6,uVar4,0x4c11db7);
      uVar4 = (uint)*local_450;
    } while (uVar4 != 0);
    uVar4 = ~uVar6;
  }
  *(uint *)(lVar7 + 0x28) = uVar4;
  plVar1 = (long *)(param_1 + 0x18);
  if (*(long *)(param_1 + 0x20) != 0) {
    plVar1 = (long *)(*(long *)(param_1 + 0x20) + 0x30);
  }
  *plVar1 = lVar7;
  *(long *)(param_1 + 0x20) = lVar7;
  *(long *)(lVar7 + 0x38) = param_1;
  if (0 < (int)param_4) {
    iVar5 = *(int *)(param_1 + 0x1e8);
    if (iVar5 < *(int *)(param_1 + 0x1ec)) {
      uVar4 = 0;
      do {
        if (iVar5 < *(int *)(param_1 + 0x1ec)) {
          uVar6 = uVar2;
          if (*(uint *)(param_1 + 0x1d8) <= uVar2) {
            uVar6 = 0;
          }
          lVar7 = *(long *)(param_1 + 0x1e0) + (long)(int)uVar6 * 0x2e8;
          uVar6 = uVar4;
          if (*(uint *)(lVar7 + 0x2d8) <= uVar4) {
            uVar6 = 0;
          }
          *(ulong *)(*(long *)(param_1 + 0x1f0) + (long)iVar5 * 8) =
               *(long *)(lVar7 + 0x2e0) + (ulong)uVar6 * 0x168;
          iVar5 = *(int *)(param_1 + 0x1e8) + 1;
          *(int *)(param_1 + 0x1e8) = iVar5;
        }
        uVar4 = uVar4 + 1;
      } while (param_4 != uVar4);
    }
  }
  return uVar2;
}


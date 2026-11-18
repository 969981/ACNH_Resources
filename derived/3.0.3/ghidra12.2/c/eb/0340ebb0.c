
void FUN_0340ebb0(long param_1,long param_2)

{
  undefined *puVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  uint uVar5;
  uint uVar6;
  long *plVar7;
  long *plVar8;
  undefined4 uVar9;
  undefined *local_60;
  undefined4 local_58;
  
  if ((*(long *)(param_1 + 0x50) != 0) &&
     (plVar7 = *(long **)(param_2 + 0x50), plVar7 != (long *)0x0)) {
    local_58 = 3;
    puVar1 = PTR_DAT_04bc4f00 + 0x10;
    local_60 = puVar1;
    (**(code **)(*plVar7 + 0x20))(plVar7,&local_60);
    uVar4 = (**(code **)(plVar7[3] + 0x50))(plVar7[1]);
    plVar7 = *(long **)(param_1 + 0x50);
    plVar8 = *(long **)(param_2 + 0x50);
    if ((uVar4 & 1) == 0) {
      local_58 = 7;
      local_60 = puVar1;
      (**(code **)(*plVar8 + 0x20))(plVar8,&local_60);
      uVar9 = (**(code **)(plVar8[3] + 0x90))(plVar8[1]);
      local_58 = 0x14;
      local_60 = puVar1;
      (**(code **)(*plVar7 + 0x18))(plVar7,&local_60);
      (**(code **)(plVar7[3] + 0x158))(uVar9,plVar7[1]);
    }
    else {
      local_58 = 7;
      local_60 = puVar1;
      (**(code **)(*plVar8 + 0x20))(plVar8,&local_60);
      uVar9 = (**(code **)(plVar8[3] + 0x90))(plVar8[1]);
      local_58 = 3;
      local_60 = PTR_DAT_04bc4e68 + 0x10;
      (**(code **)(*plVar7 + 0x18))(plVar7,&local_60);
      (**(code **)(plVar7[3] + 0x1a0))(uVar9,0x3f800000,plVar7[1],0);
    }
  }
  uVar5 = *(uint *)(param_1 + 0x58);
  if (0 < (int)uVar5) {
    uVar6 = 0;
    do {
      uVar3 = 1 << (ulong)(uVar6 & 0x1f);
      uVar2 = uVar3 & 0xffff;
      if ((uVar2 & *(ushort *)(param_2 + 0x5c)) == 0) {
        *(ushort *)(param_1 + 0x5c) = *(ushort *)(param_1 + 0x5c) & ((ushort)uVar3 ^ 0xffff);
      }
      else {
        uVar2 = *(ushort *)(param_1 + 0x5c) | uVar2;
        *(short *)(param_1 + 0x5c) = (short)uVar2;
        if ((*(int *)(param_1 + 8) != 1) &&
           (uVar2 = 0xffffffffU >> (ulong)(~uVar5 & 0x1f) & uVar2,
           uVar2 = uVar2 - (uVar2 >> 1 & 0x55555555),
           uVar2 = (uVar2 >> 2 & 0x33333333) + (uVar2 & 0x33333333),
           uVar2 = uVar2 + (uVar2 >> 4) & 0xf0f0f0f, uVar2 = uVar2 + (uVar2 >> 8),
           (uVar2 + (uVar2 >> 0x10) & 0x3f) != 0)) {
          FUN_03ebb160(param_1,1);
          uVar5 = *(uint *)(param_1 + 0x58);
        }
      }
      uVar6 = uVar6 + 1;
    } while ((int)uVar6 < (int)uVar5);
  }
  return;
}



void FUN_03410160(long param_1,long *param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  undefined4 uVar3;
  long *plVar4;
  uint uVar5;
  int *piVar6;
  ulong uVar7;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  long *plStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined1 local_50;
  uint local_4c;
  undefined4 uStack_48;
  
  uVar3 = (**(code **)(*param_2 + 0x30))(param_2);
  local_e0 = 0;
  uStack_d8 = 0x3f80000000000000;
  local_d0 = 0;
  uStack_c8 = 0x3f80000000000000;
  local_c0 = 0;
  uStack_b8 = 0x3f80000000000000;
  local_b0 = 0;
  uStack_a8 = 0x3f80000000000000;
  FUN_0344aea0(&local_e0,uVar3);
  plVar4 = *(long **)(param_1 + 0x28);
  uVar2 = *(uint *)(plVar4 + 1);
  if ((int)uVar2 < 1) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar7 = 0;
    uVar5 = 0xffffffff;
    piVar6 = (int *)(plVar4[2] + 0xc);
    do {
      if (*piVar6 == 0) {
        uVar5 = (uint)uVar7;
        if (*plVar4 != 0) {
          local_50 = (undefined1)plVar4[3];
          local_70 = local_c0;
          uStack_68 = uStack_b8;
          local_60 = local_b0;
          uStack_58 = uStack_a8;
          local_90 = local_e0;
          uStack_88 = uStack_d8;
          if (uVar2 <= uVar5) {
            uVar7 = 0;
          }
          puVar1 = (undefined8 *)(plVar4[2] + uVar7 * 0x10);
          local_a0 = *puVar1;
          uStack_48 = 1;
          local_80 = local_d0;
          uStack_78 = uStack_c8;
          plStack_98 = param_2;
          local_4c = uVar5;
          FUN_030af4a0(*plVar4,&local_a0);
          *(uint *)(puVar1 + 1) = uVar5;
          *(undefined4 *)((long)puVar1 + 0xc) = 1;
        }
        break;
      }
      uVar7 = uVar7 + 1;
      piVar6 = piVar6 + 4;
    } while (uVar2 != uVar7);
  }
  *(uint *)(param_1 + 0x20) = uVar5;
  *(undefined1 *)(param_1 + 0x24) = 0;
  uVar2 = *(ushort *)(param_1 + 0x8c) | 2;
  *(short *)(param_1 + 0x8c) = (short)uVar2;
  if ((*(int *)(param_1 + 0x38) != 1) &&
     (uVar2 = 0xffffffffU >> (ulong)(~*(uint *)(param_1 + 0x88) & 0x1f) & uVar2,
     uVar2 = uVar2 - (uVar2 >> 1 & 0x55555555),
     uVar2 = (uVar2 >> 2 & 0x33333333) + (uVar2 & 0x33333333),
     uVar2 = uVar2 + (uVar2 >> 4) & 0xf0f0f0f, uVar2 = uVar2 + (uVar2 >> 8),
     (uVar2 + (uVar2 >> 0x10) & 0x3f) != 0)) {
    FUN_03ebb160(param_1 + 0x30,1);
  }
  return;
}


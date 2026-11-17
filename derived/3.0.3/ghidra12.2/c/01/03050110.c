
bool FUN_03050110(long param_1)

{
  undefined *puVar1;
  long lVar2;
  uint uVar3;
  short sVar4;
  bool bVar5;
  long lVar6;
  short *psVar7;
  ulong uVar8;
  undefined *local_b8;
  short *local_b0;
  int local_a8;
  short local_a4 [31];
  undefined2 local_66;
  undefined *local_60;
  undefined2 *local_58;
  
  if (**(short **)(param_1 + 0x250) == 0) {
    return true;
  }
  local_a8 = 0x20;
  local_66 = 0;
  local_b8 = PTR_DAT_04bc7e78 + 0x10;
  local_b0 = local_a4;
  (**(code **)(*(long *)(param_1 + 0x248) + 0x18))(param_1 + 0x248);
  psVar7 = *(short **)(param_1 + 0x250);
  if (local_a4 != psVar7) {
    (**(code **)(*(long *)(param_1 + 0x248) + 0x18))(param_1 + 0x248);
    lVar6 = 0;
    do {
      if (*(short *)(*(long *)(param_1 + 0x250) + lVar6 * 2) == 0) goto LAB_030501e4;
      lVar2 = *(long *)(param_1 + 0x250) + lVar6 * 2;
      if (*(short *)(lVar2 + 2) == 0) {
        lVar6 = lVar6 + 1;
        goto LAB_030501e4;
      }
      if (*(short *)(lVar2 + 4) == 0) {
        lVar6 = lVar6 + 2;
        goto LAB_030501e4;
      }
      lVar6 = lVar6 + 3;
    } while (lVar6 != 0x80001);
    lVar6 = 0;
LAB_030501e4:
    uVar3 = (uint)lVar6;
    if (local_a8 <= (int)(uint)lVar6) {
      uVar3 = local_a8 - 1;
    }
    uVar8 = -(ulong)(uVar3 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar3 << 1;
    memcpy(local_a4,psVar7,uVar8);
    *(undefined2 *)((long)local_a4 + uVar8) = 0;
  }
  local_b8 = PTR_DAT_04bc0840 + 0x10;
  puVar1 = PTR_DAT_04bb8610 + 0x10;
  do {
    local_58 = &DAT_04183816;
    local_60 = puVar1;
    (**(code **)(local_b8 + 0x18))(&local_b8);
    psVar7 = local_b0;
    lVar6 = 0;
    while (local_b0[lVar6] != 0) {
      if (local_b0[lVar6 + 1] == 0) {
        lVar6 = lVar6 + 1;
        break;
      }
      if (local_b0[lVar6 + 2] == 0) {
        lVar6 = lVar6 + 2;
        break;
      }
      lVar6 = lVar6 + 3;
      if (lVar6 == 0x80001) goto LAB_03050320;
    }
    if ((int)lVar6 == 0) {
LAB_03050320:
      return *local_b0 == 0;
    }
    lVar6 = (lVar6 << 0x20) + -0x100000000;
    (**(code **)(local_60 + 0x18))(&local_60);
    sVar4 = *(short *)((long)psVar7 + (lVar6 >> 0x1f));
    uVar8 = 0;
    bVar5 = true;
    while( true ) {
      if (local_58[uVar8] == 0) goto LAB_03050320;
      if (local_58[uVar8] == sVar4) break;
      if (local_58[uVar8 + 1] == 0) goto LAB_03050320;
      if (local_58[uVar8 + 1] == sVar4) goto LAB_03050314;
      if (local_58[uVar8 + 2] == 0) goto LAB_03050320;
      if (local_58[uVar8 + 2] == sVar4) goto LAB_03050314;
      bVar5 = uVar8 < 0x7fffe;
      uVar8 = uVar8 + 3;
      if (uVar8 == 0x80001) goto LAB_03050320;
    }
    if (!bVar5) goto LAB_03050320;
LAB_03050314:
    psVar7[lVar6 >> 0x20] = 0;
  } while( true );
}



undefined8 FUN_03516b10(long param_1,long param_2,ushort param_3)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  
  if (param_3 < 0x30) {
    uVar1 = *(uint *)(param_1 + 0xdae8 + (ulong)param_3 * 0x18 + 0x10);
    if (uVar1 != 0) {
      *(uint *)(param_2 + 0x120) = uVar1;
      if (0 < (int)uVar1) {
        lVar7 = param_1 + 0xdae8 + (ulong)param_3 * 0x18;
        uVar6 = 0;
        if (3 < (int)uVar1) {
          uVar1 = 4;
        }
        do {
          uVar5 = (uint)uVar6;
          if (uVar5 < *(uint *)(lVar7 + 0x10)) {
            lVar2 = *(long *)(lVar7 + 8);
            if (0 < (int)uVar5) {
              lVar2 = *(long *)(lVar2 + 8);
              uVar5 = uVar5 & ((int)uVar5 >> 0x1f ^ 0xffffffffU);
              if ((uVar5 != 1) && (lVar2 = *(long *)(lVar2 + 8), uVar5 != 2)) {
                lVar2 = *(long *)(lVar2 + 8);
              }
            }
          }
          else {
            lVar2 = 0;
          }
          if ((lVar2 != 0) && (lVar2 = lVar2 - *(int *)(lVar7 + 0x14), lVar2 != 0)) {
            lVar3 = param_2 + uVar6 * 0x48;
            *(undefined4 *)(lVar3 + 0x40) = *(undefined4 *)(lVar2 + 0x10);
            if (0 < *(int *)(lVar2 + 0x10)) {
              plVar8 = (long *)(lVar2 + 0x18);
              (**(code **)(*plVar8 + 0x18))(plVar8);
              FUN_038d1270(lVar3,&DAT_0409e973,*(undefined8 *)(lVar2 + 0x20));
              if (1 < *(int *)(lVar2 + 0x10)) {
                (**(code **)(*(long *)(lVar2 + 0x38) + 0x18))((long *)(lVar2 + 0x38));
                FUN_038d1270(lVar3 + 0x20,&DAT_0409e973,*(undefined8 *)(lVar2 + 0x40));
                if (2 < *(int *)(lVar2 + 0x10)) {
                  lVar4 = 2;
                  do {
                    (**(code **)(*(long *)(lVar2 + 0x18) + 0x18))(plVar8);
                    FUN_038d1270(lVar3,&DAT_0409e973,*(undefined8 *)(lVar2 + 0x20));
                    lVar4 = lVar4 + 1;
                  } while (lVar4 < *(int *)(lVar2 + 0x10));
                }
              }
            }
          }
          uVar6 = uVar6 + 1;
        } while (uVar6 != uVar1);
      }
      return 1;
    }
  }
  FUN_03140ab0(param_2);
  FUN_03140ab0(param_2 + 0x48);
  FUN_03140ab0(param_2 + 0x90);
  FUN_03140ab0(param_2 + 0xd8);
  *(undefined4 *)(param_2 + 0x120) = 0;
  return 0;
}



int FUN_00142f54(long param_1,uint param_2)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  undefined8 local_a8 [2];
  undefined8 local_98 [7];
  
  uVar2 = (param_2 & 4) << 3 | (param_2 & 1) << 4;
  if (uVar2 != (*(uint *)(param_1 + 0x1c0) & 0x30)) {
    *(uint *)(param_1 + 0x1c0) = *(uint *)(param_1 + 0x1c0) & 0xffffffcf | uVar2;
    if ((param_2 & 1) == 0) {
      uVar3 = *(uint *)(param_1 + 0x1188);
      if (uVar3 != 0) {
        memset(local_a8,0,0x48);
        plVar7 = *(long **)(param_1 + 0x10);
        lVar8 = 0;
        do {
          lVar1 = param_1 + lVar8;
          uVar5 = *(undefined8 *)(lVar1 + 0x1190);
          uVar6 = *(undefined8 *)(lVar1 + 0x1198);
          lVar9 = lVar8 + 0x18;
          *(undefined8 *)(lVar1 + 0x1190) = 0;
          *(undefined8 *)((long)local_98 + lVar8) = *(undefined8 *)(lVar1 + 0x11a0);
          *(undefined8 *)((long)local_a8 + lVar8) = uVar5;
          *(undefined8 *)((long)local_a8 + lVar8 + 8) = uVar6;
          lVar8 = lVar9;
        } while ((ulong)uVar3 * 0x18 != lVar9);
        *(undefined4 *)(param_1 + 0x1188) = 0;
        lVar8 = *plVar7;
        if (lVar8 == param_1) {
          lVar8 = 0;
        }
        else {
          *plVar7 = param_1;
        }
        lVar9 = 0;
        if (uVar3 < 2) {
          uVar3 = 1;
        }
        iVar4 = 0;
        do {
          if (iVar4 == 0) {
            uVar5 = *(undefined8 *)((long)local_a8 + lVar9);
            iVar4 = FUN_0014d948(plVar7,*(undefined4 *)((long)local_98 + lVar9),uVar5,
                                 *(undefined8 *)((long)local_a8 + lVar9 + 8));
          }
          else {
            uVar5 = *(undefined8 *)((long)local_a8 + lVar9);
          }
          FUN_00143300(uVar5);
          lVar9 = lVar9 + 0x18;
        } while ((ulong)uVar3 * 0x18 != lVar9);
        if (lVar8 != 0) {
          *plVar7 = lVar8;
        }
        if (iVar4 != 0) {
          return iVar4;
        }
      }
    }
    if (uVar2 != 0x30) {
      FUN_00147570(param_1,0,6);
    }
    FUN_00149960(param_1);
  }
  return 0;
}


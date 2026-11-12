
uint FUN_0073caf0(long param_1,uint param_2,uint param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  uint uVar6;
  uint *puVar7;
  long lVar8;
  long *plVar9;
  ulong uVar10;
  
  uVar3 = 0x200;
  if ((param_2 & 1) == 0) {
    uVar3 = 0;
  }
  uVar6 = 0x400;
  if ((param_3 & 1) == 0) {
    uVar6 = 0;
  }
  uVar2 = 0x800;
  if ((param_4 & 1) == 0) {
    uVar2 = 0;
  }
  *(uint *)(param_1 + 0x11a0) = uVar6 | uVar3 | uVar2 | *(uint *)(param_1 + 0x11a0) & 0xfffff1ff;
  uVar3 = 0;
  if (*(long *)(param_1 + 0x1150) != 0) {
    uVar6 = *(uint *)(*(long *)(param_1 + 0x1150) + 0x30);
    if ((int)uVar6 < 1) {
      uVar3 = 0;
    }
    else {
      uVar5 = 0;
      uVar3 = 0;
      do {
        plVar9 = (long *)**(undefined8 **)
                           (*(long *)(*(long *)(param_1 + 0x1150) + 0x38) + uVar5 * 8);
        if ((plVar9 != (long *)0x0) && (puVar7 = (uint *)plVar9[0xe], puVar7 != (uint *)0x0)) {
          *puVar7 = *puVar7 & 0xfffffffe | param_4 & 1;
          uVar2 = (**(code **)(*plVar9 + 0xb8))(plVar9);
          if (0 < (int)uVar2) {
            lVar8 = 0;
            uVar10 = 0;
            do {
              uVar1 = *(uint *)(*(long *)(puVar7 + 4) + uVar10 * 4);
              FUN_03ad50f0(plVar9,uVar10 & 0xffffffff,4,param_2 & (uVar1 & 0x40) >> 6,0);
              uVar4 = 0x80;
              if ((((uVar1 ^ 0xffffffff) & 0x8040) == 0 & param_2) == 0) {
                uVar4 = 0;
              }
              *(uint *)(plVar9[10] + lVar8) = *(uint *)(plVar9[10] + lVar8) & 0xffffff7f | uVar4;
              *(byte *)((long)plVar9 + 0xae) = *(byte *)((long)plVar9 + 0xae) | 1;
              *(ushort *)(plVar9[10] + lVar8 + 6) = *(ushort *)(plVar9[10] + lVar8 + 6) | 2;
              FUN_03ad50f0(plVar9,uVar10 & 0xffffffff,0,param_3 & (uVar1 & 0x80) >> 7,0);
              FUN_03ad50f0(plVar9,uVar10 & 0xffffffff,1,param_3 & (uVar1 & 0x100) >> 8,0);
              uVar10 = uVar10 + 1;
              if ((uVar1 & 0x80000) != 0) {
                uVar3 = 1;
              }
              lVar8 = lVar8 + 0xc;
            } while (uVar2 != uVar10);
          }
        }
        uVar5 = uVar5 + 1;
      } while (uVar5 != uVar6);
    }
  }
  uVar6 = 1;
  if ((param_2 & 1) == 0) {
    uVar6 = param_3 | uVar3;
  }
  return uVar6 & 1;
}


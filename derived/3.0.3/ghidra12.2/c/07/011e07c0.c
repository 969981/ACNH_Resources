
void FUN_011e07c0(long param_1)

{
  uint *puVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  long lVar8;
  undefined8 local_68;
  
  puVar1 = (uint *)(param_1 + 0x24f78);
  uVar4 = *puVar1;
  if (0 < (int)uVar4) {
    lVar8 = 0;
    iVar5 = 0;
    lVar2 = param_1 + 0x278;
    do {
      lVar3 = param_1 + lVar8;
      if (((*(ushort *)(lVar3 + 0x2e0) ^ 0xffff) & 0x1008) == 0) {
        FUN_011de210(param_1,iVar5,0);
        *(undefined2 *)(lVar3 + 0x2e0) = 0;
        local_68 = 0xfffe;
        FUN_0277d4ac(&local_68);
        *(undefined8 *)(lVar3 + 0x280) = 0;
        *(undefined8 *)(lVar3 + 0x290) = 0xffffffffffffffff;
        *(undefined8 *)(lVar3 + 0x298) = 0;
        *(undefined8 *)(lVar3 + 0x2a0) = 0;
        *(undefined4 *)(lVar3 + 0x2a8) = 0;
        *(undefined8 *)(lVar3 + 0x2d0) = 0xffffffffffffffff;
        *(undefined1 *)(lVar3 + 0x2e6) = 0xff;
        *(undefined8 *)(lVar3 + 0x2b0) = 0;
        *(undefined4 *)(lVar3 + 0x2b8) = 0;
        *(undefined8 *)(lVar3 + 0x2c0) = 0;
        *(undefined4 *)(lVar3 + 0x2c8) = 0;
        *(undefined2 *)(lVar3 + 0x278) = (undefined2)local_68;
        *(undefined2 *)(lVar3 + 0x27a) = local_68._2_2_;
        *(undefined4 *)(lVar3 + 0x27c) = local_68._4_4_;
        *(undefined8 *)(lVar3 + 0x2d8) = 0x1e00000003;
        *(undefined2 *)(lVar3 + 0x2e7) = 0xffff;
        *(undefined4 *)(lVar3 + 0x2e2) = 0;
        uVar4 = *puVar1;
      }
      iVar5 = iVar5 + 1;
      lVar8 = lVar8 + 0x78;
    } while (iVar5 < (int)uVar4);
    if (0 < (int)uVar4) {
      uVar7 = 0;
      uVar6 = 0;
      do {
        if ((*(ushort *)(param_1 + 0x2e0) >> 3 & 1) != 0) {
          if (uVar7 != uVar6) {
            lVar8 = lVar2;
            if (uVar6 < 1000) {
              lVar8 = lVar2 + (ulong)uVar6 * 0x78;
            }
            FUN_01256c74(lVar8,param_1 + 0x278);
            *(undefined2 *)(param_1 + 0x2e0) = 0;
            local_68 = 0xfffe;
            FUN_0277d4ac(&local_68);
            *(undefined8 *)(param_1 + 0x280) = 0;
            *(undefined8 *)(param_1 + 0x290) = 0xffffffffffffffff;
            *(undefined8 *)(param_1 + 0x298) = 0;
            *(undefined8 *)(param_1 + 0x2a0) = 0;
            *(undefined4 *)(param_1 + 0x2a8) = 0;
            *(undefined8 *)(param_1 + 0x2d0) = 0xffffffffffffffff;
            *(undefined1 *)(param_1 + 0x2e6) = 0xff;
            *(undefined8 *)(param_1 + 0x2b0) = 0;
            *(undefined4 *)(param_1 + 0x2b8) = 0;
            *(undefined8 *)(param_1 + 0x2c0) = 0;
            *(undefined4 *)(param_1 + 0x278) = (undefined4)local_68;
            *(undefined4 *)(param_1 + 0x27c) = local_68._4_4_;
            *(undefined4 *)(param_1 + 0x2c8) = 0;
            *(undefined8 *)(param_1 + 0x2d8) = 0x1e00000003;
            *(undefined2 *)(param_1 + 0x2e7) = 0xffff;
            *(undefined4 *)(param_1 + 0x2e2) = 0;
            uVar4 = *puVar1;
          }
          uVar6 = uVar6 + 1;
        }
        uVar7 = uVar7 + 1;
        param_1 = param_1 + 0x78;
      } while ((int)uVar7 < (int)uVar4);
      goto LAB_011e0998;
    }
  }
  uVar6 = 0;
LAB_011e0998:
  *puVar1 = uVar6;
  return;
}


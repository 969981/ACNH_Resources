
void FUN_03a073c0(long param_1,undefined8 param_2,uint param_3)

{
  byte *pbVar1;
  uint *puVar2;
  long *plVar3;
  long lVar4;
  uint uVar5;
  int iVar6;
  long lVar7;
  uint uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  uint uVar12;
  long lVar13;
  long lVar14;
  long local_88;
  undefined8 uStack_80;
  long local_78;
  long lStack_70;
  undefined1 local_68;
  
  lVar13 = *(long *)(param_1 + 0x110);
  uVar8 = param_3;
  if (*(uint *)(param_1 + 0x108) <= param_3) {
    uVar8 = 0;
  }
  lVar11 = lVar13 + (long)(int)uVar8 * 0x430;
  if ((*(byte *)(lVar11 + 0x3c8) & 1) != 0) {
    plVar3 = *(long **)(param_1 + 0x5590);
    if (plVar3 != (long *)0x0) {
      uVar5 = (uint)*(byte *)(lVar11 + 8);
      if (*(uint *)(param_1 + 0x108) <= (uint)*(byte *)(lVar11 + 8)) {
        uVar5 = 0;
      }
      (**(code **)(*plVar3 + 0x58))(plVar3,param_2,0,param_1,lVar13 + (ulong)uVar5 * 0x430);
    }
    if (*(long *)(param_1 + 0x4ee8) != 0) {
      local_88 = *(long *)(lVar11 + 0x318);
      local_68 = 0;
      lVar4 = *(long *)(*(long *)(param_1 + 0x4ee8) + 0xb8);
      uStack_80 = *(undefined8 *)(lVar11 + 800);
      lVar9 = *(long *)(local_88 + 0x20);
      lVar10 = *(long *)(local_88 + 0x60);
      local_78 = lVar9 + 8;
      lStack_70 = lVar10 + 8;
      uVar5 = *(uint *)(lVar4 + 0x40) & 1;
      if ((((*(uint *)(lVar4 + 0x40) & 1) != 0) && (*(int *)(lVar4 + 0x48) != 0)) &&
         (*(int *)(lVar4 + 0x4c) == 0)) {
        FUN_03a51490(lVar4,param_2,*(undefined1 *)(lVar11 + 8),&local_88);
        local_88 = *(long *)(lVar11 + 0x318);
        uStack_80 = *(undefined8 *)(lVar11 + 800);
        lVar4 = *(long *)(*(long *)(param_1 + 0x4ee8) + 0xb8);
        lVar9 = *(long *)(local_88 + 0x20);
        lVar10 = *(long *)(local_88 + 0x60);
        uVar5 = *(uint *)(lVar4 + 0x40) & 1;
      }
      local_78 = lVar9 + 8;
      lStack_70 = lVar10 + 8;
      local_68 = 0;
      if (((uVar5 != 0) && (*(int *)(lVar4 + 0x98) != 0)) && (*(int *)(lVar4 + 0x9c) == 0)) {
        FUN_03a52000(lVar4,param_2);
      }
    }
    uVar5 = (uint)*(byte *)(lVar11 + 8);
    if (*(uint *)(param_1 + 0x108) <= (uint)*(byte *)(lVar11 + 8)) {
      uVar5 = 0;
    }
    lVar4 = *(long *)(param_1 + 0x110) + (ulong)uVar5 * 0x430;
    if ((*(byte *)(lVar4 + 0x3c8) >> 3 & 1) != 0) {
      lVar9 = *(long *)(param_1 + 0x110) + (ulong)uVar5 * 0x430;
      FUN_03ab3890(param_1 + 0x15f8,param_2,lVar9,1);
      lVar10 = *(long *)(param_1 + 0x4af0);
      if ((lVar10 != 0) && (*(char *)(*(long *)(param_1 + 0x46b8) + 0x5d0) != '\0')) {
        lVar14 = *(long *)(lVar10 + 0x20);
        uVar5 = (uint)*(byte *)(lVar9 + 8);
        if (*(uint *)(lVar10 + 0x18) <= (uint)*(byte *)(lVar9 + 8)) {
          uVar5 = 0;
        }
        lVar7 = lVar14 + (ulong)uVar5 * 0x970;
        if (*(long *)(lVar7 + 0x550) != 0) {
          FUN_039499cc(DAT_05ae90c0);
          *(undefined8 *)(lVar7 + 0x550) = 0;
          if ((*(uint *)(lVar10 + 0xc) & 1) != 0) {
            *(uint *)(lVar10 + 0xc) = *(uint *)(lVar10 + 0xc) | 2;
          }
        }
        lVar14 = lVar14 + (ulong)uVar5 * 0x970;
        uVar12 = *(uint *)(lVar14 + 0x8d8);
        uVar5 = uVar12 | 2;
        if ((uVar12 & 4) != 0) {
          uVar5 = uVar12 & 0xfffffff8;
        }
        *(uint *)(lVar14 + 0x8d8) = uVar5;
      }
      if (((*(long *)(param_1 + 0x4b00) != 0) &&
          (*(char *)(*(long *)(param_1 + 0x46b8) + 0x690) != '\0')) &&
         ((*(byte *)(lVar9 + 0x402) & 1) != 0)) {
        FUN_03a8c7e8(*(long *)(param_1 + 0x4b00),*(undefined1 *)(lVar9 + 8));
      }
      lVar10 = *(long *)(param_1 + 0x4ad0);
      if ((lVar10 != 0) && (*(char *)(*(long *)(param_1 + 0x46b8) + 0x550) != '\0')) {
        uVar5 = (uint)*(byte *)(lVar9 + 8);
        if (*(uint *)(lVar10 + 0x1d0) <= (uint)*(byte *)(lVar9 + 8)) {
          uVar5 = 0;
        }
        plVar3 = (long *)(*(long *)(lVar10 + 0x1d8) + (ulong)uVar5 * 0x3b0);
        if (*plVar3 != 0) {
          FUN_039499cc(DAT_05ae90c0);
          *plVar3 = 0;
        }
      }
      lVar10 = *(long *)(param_1 + 0x31a8);
      pbVar1 = (byte *)(lVar4 + 0x3c8);
      if (((lVar10 != 0) && (*(char *)(*(long *)(param_1 + 0x2ef0) + 0x790) != '\0')) &&
         (*(char *)(lVar10 + 0x4d0) != '\0')) {
        uVar5 = (uint)*(byte *)(lVar9 + 8);
        if (*(uint *)(lVar10 + 0x230) <= (uint)*(byte *)(lVar9 + 8)) {
          uVar5 = 0;
        }
        if (*(char *)(*(long *)(lVar10 + 0x238) + (ulong)uVar5 * 0x6d0) != '\0') {
          iVar6 = *(int *)(lVar10 + 0x220);
          if (0 < iVar6) {
            uVar12 = 0;
            lVar4 = *(long *)(lVar10 + 0x238) + (ulong)uVar5 * 0x6d0;
            puVar2 = (uint *)(lVar4 + 0x18);
            plVar3 = (long *)(lVar4 + 0x20);
            do {
              uVar5 = uVar12;
              if (*puVar2 <= uVar12) {
                uVar5 = 0;
              }
              if (*(long *)(*plVar3 + (ulong)uVar5 * 8) != 0) {
                FUN_039499cc(DAT_05ae90c0);
                uVar5 = uVar12;
                if (*puVar2 <= uVar12) {
                  uVar5 = 0;
                }
                *(undefined8 *)(*plVar3 + (ulong)uVar5 * 8) = 0;
                iVar6 = *(int *)(lVar10 + 0x220);
              }
              uVar12 = uVar12 + 1;
            } while ((int)uVar12 < iVar6);
          }
        }
      }
      *pbVar1 = *pbVar1 & 0xf7;
    }
    FUN_03a39550(param_1 + 0x31d8,param_2,lVar11,param_1 + 0x2c00,
                 *(uint *)(param_1 + 0x559c) >> 3 & 1);
    FUN_03af8c88(*(undefined8 *)(param_1 + 0x3420),param_3,0xffffffff);
    lVar13 = lVar13 + (long)(int)uVar8 * 0x430;
    lVar4 = *(long *)(lVar13 + 0x3d8);
    *(undefined8 *)(lVar4 + 300) = *(undefined8 *)(lVar4 + 0x120);
    *(undefined4 *)(lVar4 + 0x134) = *(undefined4 *)(lVar4 + 0x128);
    lVar13 = *(long *)(lVar13 + 0x3d8);
    *(undefined8 *)(lVar13 + 0xb8) = *(undefined8 *)(lVar13 + 0x88);
    *(undefined8 *)(lVar13 + 0xb0) = *(undefined8 *)(lVar13 + 0x80);
    *(undefined8 *)(lVar13 + 200) = *(undefined8 *)(lVar13 + 0x98);
    *(undefined8 *)(lVar13 + 0xc0) = *(undefined8 *)(lVar13 + 0x90);
    *(undefined8 *)(lVar13 + 0xd8) = *(undefined8 *)(lVar13 + 0xa8);
    *(undefined8 *)(lVar13 + 0xd0) = *(undefined8 *)(lVar13 + 0xa0);
    plVar3 = *(long **)(param_1 + 0x5590);
    if (plVar3 != (long *)0x0) {
      uVar8 = (uint)*(byte *)(lVar11 + 8);
      if (*(uint *)(param_1 + 0x108) <= (uint)*(byte *)(lVar11 + 8)) {
        uVar8 = 0;
      }
                    /* WARNING: Could not recover jumptable at 0x03a077b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 0x58))
                (plVar3,param_2,1,param_1,*(long *)(param_1 + 0x110) + (ulong)uVar8 * 0x430);
      return;
    }
  }
  return;
}


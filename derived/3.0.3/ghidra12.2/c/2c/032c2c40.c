
void FUN_032c2c40(long param_1,uint param_2,long param_3)

{
  long lVar1;
  long *plVar2;
  int iVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  ushort uVar9;
  uint uVar10;
  long lVar11;
  uint *puVar12;
  undefined4 *puVar13;
  ulong uVar14;
  long *plVar15;
  long lVar16;
  long local_48;
  undefined8 local_3c;
  undefined4 local_34;
  
  if (param_3 != 0) {
    local_3c._0_4_ = 4;
    uVar10 = (uint)*(ushort *)(param_1 + 0x50);
    if ((*(ushort *)(param_1 + 0x50) >> 4 & 1) != 0) {
      if (*(long *)(param_1 + 0x20) != 0) {
        local_3c = 0;
        local_34 = 0;
        local_48 = *(long *)(param_1 + 0x20);
        FUN_032d3460(&local_48,&local_3c);
        puVar5 = PTR_DAT_04bc9358;
        uVar6 = (int)local_3c;
        local_3c._0_4_ = 3;
        uVar7 = (int)local_3c;
        puVar12 = *(uint **)PTR_DAT_04bc9358;
        local_3c._0_4_ = 3;
        if (*puVar12 < 4) {
          local_3c._0_4_ = 0;
        }
        puVar13 = (undefined4 *)(*(long *)(puVar12 + 2) + (long)(int)local_3c * 0xc);
        *puVar13 = uVar6;
        puVar13[1] = local_3c._4_4_;
        puVar4 = PTR_DAT_04bb4fb0;
        iVar3 = 3;
        if (*puVar12 < 4) {
          iVar3 = 0;
        }
        *(undefined1 *)(*(long *)(puVar12 + 2) + (long)iVar3 * 0xc + 8) = 1;
        lVar16 = *(long *)puVar4;
        local_3c._0_4_ = uVar7;
        uVar8 = FUN_03368ef0(*(undefined8 *)puVar5,3);
        lVar11 = *(long *)(lVar16 + 8);
        if (lVar11 != 0) {
          lVar1 = 0;
          if (*(char *)(lVar11 + 0x38) != '\0') {
            lVar1 = lVar11 + 8;
          }
          FUN_03366350(lVar16,lVar1,s_TouchUnselect_04b20a24,1,uVar8,0);
        }
      }
      if (*(long **)(param_1 + 0x120) != (long *)0x0) {
        (**(code **)(**(long **)(param_1 + 0x120) + 0x20))();
      }
      uVar10 = *(ushort *)(param_1 + 0x50) & 0xffffffef;
      *(short *)(param_1 + 0x50) = (short)uVar10;
    }
    local_3c._0_4_ = 3;
    if ((uVar10 >> 3 & 1) == 0) {
      lVar11 = DAT_0572b7f0;
    }
    else {
      if (*(long **)(param_1 + 0x90) != (long *)0x0) {
        (**(code **)(**(long **)(param_1 + 0x90) + 0x20))();
        uVar10 = (uint)*(ushort *)(param_1 + 0x50);
      }
      uVar9 = (ushort)uVar10;
      if ((((uVar10 >> 4 & 1) != 0) &&
          (local_3c = CONCAT44(local_3c._4_4_,1), (uVar10 >> 1 & 1) == 0)) &&
         (*(long **)(param_1 + 0xf0) != (long *)0x0)) {
        (**(code **)(**(long **)(param_1 + 0xf0) + 0x20))();
        uVar9 = *(ushort *)(param_1 + 0x50);
      }
      *(undefined2 *)(param_1 + 0x21c) = 0;
      *(undefined1 *)(param_1 + 0x21e) = 0;
      *(ushort *)(param_1 + 0x50) = uVar9 & 0xffe7;
      lVar11 = DAT_0572b7f0;
      plVar15 = (long *)(DAT_0572b7f0 + 8) + param_2;
      if (0xf < param_2) {
        plVar15 = (long *)(DAT_0572b7f0 + 8);
      }
      *(undefined8 *)(*plVar15 + 0x30) = 0;
    }
    if (0 < (int)*(uint *)(lVar11 + 4)) {
      uVar14 = 0;
      plVar15 = (long *)(lVar11 + 8);
      do {
        plVar2 = plVar15;
        if (0xf < uVar14) {
          plVar2 = (long *)(lVar11 + 8);
        }
        if (*(long *)(*plVar2 + 0x30) == param_3) goto LAB_032c2ea4;
        uVar14 = uVar14 + 1;
        plVar15 = plVar15 + 1;
      } while (*(uint *)(lVar11 + 4) != uVar14);
    }
    plVar15 = (long *)(lVar11 + 8) + param_2;
    if (0xf < param_2) {
      plVar15 = (long *)(lVar11 + 8);
    }
    *(long *)(*plVar15 + 0x30) = param_3;
LAB_032c2ea4:
    *(undefined1 *)(param_3 + 0x21e) = 1;
  }
  return;
}


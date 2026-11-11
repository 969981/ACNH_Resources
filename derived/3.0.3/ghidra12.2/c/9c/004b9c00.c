
byte * FUN_004b9c00(long param_1,byte *param_2)

{
  int iVar1;
  ulong uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  long lVar5;
  ulong *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  ulong uVar11;
  uint uVar12;
  undefined8 local_128;
  undefined8 local_120 [2];
  ulong local_110;
  undefined8 local_108;
  ulong local_100;
  ulong local_f8;
  int local_f0;
  
  FUN_004225b0(&local_f8);
  FUN_00429460(&local_110,param_2);
  local_100 = local_110;
  if (1 < local_110) {
    uVar4 = FUN_00427480();
    FUN_00427570(uVar4,&local_f8,0,0);
    local_108 = local_f8 + (long)local_f0 + -1;
    local_110 = local_f8;
    uVar3 = FUN_00427340(uVar4);
    local_120[0] = FUN_0047a0b0(*(undefined8 *)(param_1 + 0x10),&local_110,uVar3);
    lVar5 = FUN_0047cc50((long *)(param_1 + 0x110),local_120);
    if (lVar5 != 0) {
      lVar5 = (long)*(int *)(lVar5 + 4);
      lVar8 = *(long *)(param_1 + 0x110);
      if (((lVar8 + lVar5 * 0x18 != 0) && (0 < *(int *)(lVar8 + lVar5 * 0x18 + 0x10))) &&
         (iVar1 = **(int **)(lVar8 + lVar5 * 0x18 + 8), -1 < iVar1)) {
        uVar9 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x130) + (long)iVar1 * 8) + 0x50);
        uVar4 = FUN_00427b40(&local_100);
        param_2 = (byte *)FUN_00427d40(uVar9,uVar4,0);
        if (param_2 < (byte *)0x2) {
          param_2 = (byte *)0x0;
        }
        goto LAB_004ba12c;
      }
    }
    param_2 = (byte *)0x0;
    goto LAB_004ba12c;
  }
  if ((*param_2 & 1) == 0) {
    uVar4 = FUN_004b9c00(param_1,*(undefined8 *)(param_2 + 8));
    lVar5 = FUN_004270a0(param_2);
    puVar7 = PTR_DAT_048607b8;
    if (lVar5 == 0) {
      uVar9 = FUN_00427270(param_2);
      FUN_004297c0(&local_110,uVar9);
      param_2 = (byte *)FUN_004c02f0(param_1 + 0x478,&local_110,uVar4,0,0);
      goto LAB_004ba12c;
    }
    local_110 = 0;
    local_108 = -0x8000000000000000;
    if (*(short *)(lVar5 + 8) != 0) {
      puVar10 = (undefined8 *)(lVar5 + 0x18);
      uVar11 = 1;
      do {
        FUN_00426990(puVar7,&local_110,0x10);
        uVar12 = (uint)local_108;
        do {
          uVar2 = local_110;
          local_108 = CONCAT44(local_108._4_4_,uVar12 + 1);
          uVar9 = FUN_004adce0(*puVar10,0xffffffff);
          *(undefined8 *)(uVar2 + (long)(int)uVar12 * 0x10 + 8) = uVar9;
          if (*(char *)*puVar10 == 'v') {
            uVar9 = puVar10[-1];
          }
          else {
            uVar9 = FUN_004b9c00(param_1,puVar10[-1]);
          }
          *(undefined8 *)(uVar2 + (long)(int)uVar12 * 0x10) = uVar9;
          if (*(ushort *)(lVar5 + 8) <= uVar11) goto LAB_004b9e08;
          puVar10 = puVar10 + 2;
          uVar11 = uVar11 + 1;
          uVar12 = (uint)local_108;
        } while ((uint)local_108 != (local_108._4_4_ & 0x3fffffff));
      } while( true );
    }
LAB_004b9e08:
    uVar9 = FUN_00427270(param_2);
    FUN_004297c0(local_120,uVar9);
    param_2 = (byte *)FUN_004c02f0(param_1 + 0x478,local_120,uVar4,local_110,
                                   local_110 + (long)(int)(uint)local_108 * 0x10);
    lVar5 = local_108;
    uVar12 = local_108._4_4_;
    local_108 = (ulong)local_108._4_4_ << 0x20;
    if ((lVar5 < 0) || (local_110 == 0)) goto LAB_004ba12c;
  }
  else {
    uVar11 = FUN_00428440(param_2);
    if ((uVar11 & 0x1f) == 6) {
      lVar5 = FUN_00426d90();
      if (lVar5 == 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = FUN_004b9c00(param_1,lVar5);
      }
      param_2 = (byte *)FUN_004c0140(param_1 + 0x478,param_2,uVar4);
      goto LAB_004ba12c;
    }
    uVar11 = FUN_00428440(param_2);
    if ((uVar11 & 0x1f) != 8) {
      lVar5 = FUN_00427570(param_2,&local_f8,0,0);
      if (lVar5 != 0) {
        uVar3 = FUN_00427340(param_2);
        local_108 = local_f8 + (long)local_f0 + -1;
        local_110 = local_f8;
        local_110 = FUN_0047a0b0(*(undefined8 *)(param_1 + 0x10),&local_110,uVar3);
        lVar5 = FUN_0047cc50((long *)(param_1 + 0x110),&local_110);
        if (lVar5 != 0) {
          lVar5 = (long)*(int *)(lVar5 + 4);
          lVar8 = *(long *)(param_1 + 0x110);
          if (((lVar8 + lVar5 * 0x18 != 0) && (0 < *(int *)(lVar8 + lVar5 * 0x18 + 0x10))) &&
             (iVar1 = **(int **)(lVar8 + lVar5 * 0x18 + 8), -1 < iVar1)) {
            param_2 = *(byte **)(*(long *)(*(long *)(param_1 + 0x130) + (long)iVar1 * 8) + 0x50);
          }
        }
      }
      goto LAB_004ba12c;
    }
    lVar5 = FUN_00426d90(param_2);
    if (lVar5 == 0) {
      local_128 = 0;
    }
    else {
      local_128 = FUN_004b9c00(param_1,lVar5);
    }
    local_110 = 0;
    local_108 = -0x8000000000000000;
    lVar5 = FUN_004270a0(param_2);
    puVar7 = PTR_DAT_048607b8;
    if ((lVar5 != 0) && (*(short *)(lVar5 + 8) != 0)) {
      puVar10 = (undefined8 *)(lVar5 + 0x18);
      uVar11 = 1;
      do {
        FUN_00426990(puVar7,&local_110,0x10);
        uVar12 = (uint)local_108;
        do {
          uVar2 = local_110;
          local_108 = CONCAT44(local_108._4_4_,uVar12 + 1);
          uVar4 = FUN_004adce0(*puVar10,0xffffffff);
          *(undefined8 *)(uVar2 + (long)(int)uVar12 * 0x10 + 8) = uVar4;
          if (*(char *)*puVar10 == 'v') {
            uVar4 = puVar10[-1];
          }
          else {
            uVar4 = FUN_004b9c00(param_1,puVar10[-1]);
          }
          *(undefined8 *)(uVar2 + (long)(int)uVar12 * 0x10) = uVar4;
          if (*(ushort *)(lVar5 + 8) <= uVar11) goto LAB_004ba0a0;
          puVar10 = puVar10 + 2;
          uVar11 = uVar11 + 1;
          uVar12 = (uint)local_108;
        } while ((uint)local_108 != (local_108._4_4_ & 0x3fffffff));
      } while( true );
    }
LAB_004ba0a0:
    puVar6 = (ulong *)FUN_00426e90(param_2,1);
    if (puVar6 == (ulong *)0x0) {
      uVar11 = 0;
    }
    else {
      uVar11 = *puVar6 >> 8;
    }
    uVar4 = FUN_00427270(param_2);
    FUN_004297c0(local_120,uVar4);
    param_2 = (byte *)FUN_004c04c0(param_1 + 0x478,local_120,local_128,0,uVar11 & 0xffffffff,
                                   local_110,local_110 + (long)(int)(uint)local_108 * 0x10);
    lVar5 = local_108;
    uVar12 = local_108._4_4_;
    local_108 = (ulong)local_108._4_4_ << 0x20;
    if ((lVar5 < 0) || (local_110 == 0)) goto LAB_004ba12c;
    puVar7 = PTR_DAT_048607b8;
  }
  FUN_00421f90(puVar7,local_110,0x10,uVar12 & 0x3fffffff);
LAB_004ba12c:
  FUN_00422550(&local_f8);
  return param_2;
}


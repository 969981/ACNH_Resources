
void FUN_0085ab20(long param_1,uint param_2,int param_3)

{
  uint uVar1;
  short sVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined4 *puVar6;
  long lVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  undefined8 local_120;
  undefined8 local_118;
  undefined4 local_110;
  undefined8 local_10c;
  undefined8 local_104;
  undefined8 local_fc;
  undefined1 *local_f0;
  undefined1 *puStack_e8;
  undefined4 local_e0;
  undefined1 local_dc [127];
  undefined1 local_5d;
  undefined4 local_58;
  undefined2 local_54;
  undefined8 local_50;
  int local_44;
  
  puVar3 = PTR_DAT_04bc3a80;
  if (*(int *)(PTR_DAT_04bc3a80 + 0x38) != -0x17df00c3) {
    return;
  }
  local_44 = param_3;
  if (param_3 == 0) {
    local_10c = 0x3f800000;
    iVar9 = 0;
    local_e0 = 0x80;
    local_58 = 7;
    local_110 = 0;
    puStack_e8 = local_dc;
    local_5d = 0;
    local_dc[0] = 0;
    local_50 = 0;
    local_54 = 0;
    local_104 = 0;
    local_fc = 0;
    local_f0 = &DAT_048fc708;
    local_120 = 0xb600000000;
    local_118 = 0;
    if ((int)param_2 < (int)*(uint *)(param_1 + 0x518)) {
      uVar1 = param_2;
      if (*(uint *)(param_1 + 0x518) <= param_2) {
        uVar1 = 0;
      }
      sVar2 = *(short *)(param_1 + 0x508);
      iVar9 = *(int *)(*(long *)(param_1 + 0x520) + (long)(int)uVar1 * 4);
      iVar8 = 7;
      if ((sVar2 != 1) && (sVar2 != 0xb)) {
        if (sVar2 == 0xd) {
          iVar8 = 8;
        }
        else {
          iVar8 = -1;
        }
      }
      if (iVar8 <= iVar9) {
        iVar9 = iVar8;
      }
    }
    lVar4 = FUN_0084d0f8(0xb6);
    sVar2 = *(short *)(param_1 + 0x508);
    if (sVar2 == 0xd) {
      lVar7 = 0x4ec0;
LAB_0085ad34:
      puVar5 = (undefined8 *)
               (**(code **)(**(long **)(*(long *)(lVar4 + lVar7) + (long)iVar9 * 8) + 0xf0))();
    }
    else {
      if (sVar2 == 0xb) {
        lVar7 = 0x4bd8;
        goto LAB_0085ad34;
      }
      if (sVar2 == 1) {
        lVar7 = 0x48f0;
        goto LAB_0085ad34;
      }
      puVar5 = (undefined8 *)&DAT_0419b56c;
    }
    local_110 = *(undefined4 *)(puVar5 + 1);
    local_118 = *puVar5;
    local_104 = CONCAT44(local_104._4_4_,local_44);
    if (*(int *)(puVar3 + 0x38) == -0x17df00c3) {
      if (local_44 == 0) {
        if ((int)param_2 < (int)*(uint *)(param_1 + 0x518)) {
          if (*(uint *)(param_1 + 0x518) <= param_2) {
            param_2 = 0;
          }
          sVar2 = *(short *)(param_1 + 0x508);
          iVar9 = *(int *)(*(long *)(param_1 + 0x520) + (long)(int)param_2 * 4);
          iVar8 = 7;
          if ((sVar2 != 1) && (sVar2 != 0xb)) {
            if (sVar2 == 0xd) {
              iVar8 = 8;
            }
            else {
              iVar8 = -1;
            }
          }
          goto LAB_0085ada8;
        }
        goto LAB_0085adf4;
      }
      if ((int)*(uint *)(param_1 + 0x528) <= (int)param_2) goto LAB_0085adf4;
      if (*(uint *)(param_1 + 0x528) <= param_2) {
        param_2 = 0;
      }
      iVar9 = *(int *)(*(long *)(param_1 + 0x530) + (long)(int)param_2 * 4);
      iVar8 = 4;
      if (*(short *)(param_1 + 0x508) != 0x2e) {
        iVar8 = -1;
      }
LAB_0085ada8:
      if (iVar8 <= iVar9) {
        iVar9 = iVar8;
      }
    }
    else {
LAB_0085adf4:
      iVar9 = 0;
    }
    local_fc = CONCAT44(local_fc._4_4_,iVar9);
    goto LAB_0085af8c;
  }
  local_110 = 0;
  local_10c = 0x3f800000;
  local_120 = 0xb600000000;
  local_118 = 0;
  puStack_e8 = local_dc;
  local_e0 = 0x80;
  local_5d = 0;
  local_dc[0] = 0;
  local_f0 = PTR_DAT_04bb2d88 + 0x10;
  local_50 = 0;
  local_54 = 0;
  local_104 = 0;
  local_fc = 0;
  local_58 = 7;
  if (param_3 == 0) {
    if ((int)param_2 < (int)*(uint *)(param_1 + 0x518)) {
      uVar1 = param_2;
      if (*(uint *)(param_1 + 0x518) <= param_2) {
        uVar1 = 0;
      }
      sVar2 = *(short *)(param_1 + 0x508);
      iVar9 = *(int *)(*(long *)(param_1 + 0x520) + (long)(int)uVar1 * 4);
      iVar8 = 7;
      if ((sVar2 != 1) && (sVar2 != 0xb)) {
        if (sVar2 == 0xd) {
          iVar8 = 8;
        }
        else {
          iVar8 = -1;
        }
      }
      if (iVar8 <= iVar9) {
        iVar9 = iVar8;
      }
    }
    else {
      iVar9 = 0;
    }
    lVar4 = FUN_0084d0f8(0xb6);
    sVar2 = *(short *)(param_1 + 0x508);
    if (sVar2 == 0xd) {
      lVar7 = 0x4ec0;
    }
    else if (sVar2 == 0xb) {
      lVar7 = 0x4bd8;
    }
    else {
      if (sVar2 != 1) goto LAB_0085ae44;
      lVar7 = 0x48f0;
    }
LAB_0085ae5c:
    puVar5 = (undefined8 *)
             (**(code **)(**(long **)(*(long *)(lVar4 + lVar7) + (long)iVar9 * 8) + 0xf0))();
  }
  else {
    if ((int)param_2 < (int)*(uint *)(param_1 + 0x528)) {
      uVar1 = param_2;
      if (*(uint *)(param_1 + 0x528) <= param_2) {
        uVar1 = 0;
      }
      iVar9 = *(int *)(*(long *)(param_1 + 0x530) + (long)(int)uVar1 * 4);
      iVar8 = 4;
      if (*(short *)(param_1 + 0x508) != 0x2e) {
        iVar8 = -1;
      }
      if (iVar8 <= iVar9) {
        iVar9 = iVar8;
      }
    }
    else {
      iVar9 = 0;
    }
    lVar4 = FUN_0084d0f8(0xb6);
    if (*(short *)(param_1 + 0x508) == 0x2e) {
      lVar7 = 0x51e8;
      goto LAB_0085ae5c;
    }
LAB_0085ae44:
    puVar5 = (undefined8 *)&DAT_0419b56c;
  }
  local_110 = *(undefined4 *)(puVar5 + 1);
  local_118 = *puVar5;
  iVar9 = *(int *)(puVar3 + 0x38);
  local_104 = CONCAT44(local_104._4_4_,local_44);
  if (iVar9 == -0x17df00c3) {
    if (local_44 == 0) {
      if ((int)*(uint *)(param_1 + 0x518) <= (int)param_2) goto LAB_0085af2c;
      uVar1 = param_2;
      if (*(uint *)(param_1 + 0x518) <= param_2) {
        uVar1 = 0;
      }
      sVar2 = *(short *)(param_1 + 0x508);
      iVar9 = *(int *)(*(long *)(param_1 + 0x520) + (long)(int)uVar1 * 4);
      iVar8 = 7;
      if ((sVar2 != 1) && (sVar2 != 0xb)) {
        if (sVar2 == 0xd) {
          iVar8 = 8;
        }
        else {
          iVar8 = -1;
        }
      }
LAB_0085aec4:
      if (iVar8 <= iVar9) {
        iVar9 = iVar8;
      }
    }
    else {
      if ((int)param_2 < (int)*(uint *)(param_1 + 0x528)) {
        uVar1 = param_2;
        if (*(uint *)(param_1 + 0x528) <= param_2) {
          uVar1 = 0;
        }
        iVar9 = *(int *)(*(long *)(param_1 + 0x530) + (long)(int)uVar1 * 4);
        iVar8 = 4;
        if (*(short *)(param_1 + 0x508) != 0x2e) {
          iVar8 = -1;
        }
        goto LAB_0085aec4;
      }
LAB_0085af2c:
      iVar9 = 0;
    }
    local_fc = CONCAT44(local_fc._4_4_,iVar9);
LAB_0085af34:
    if (param_2 < 3) {
      iVar9 = *(int *)(param_1 + (ulong)param_2 * 4 + 0x274);
      lVar4 = FUN_0084d0f8(0xb6);
      puVar5 = (undefined8 *)(*(long *)(lVar4 + 0x2e8) + (long)iVar9 * 8);
    }
    else {
      lVar4 = FUN_0084d0f8(0xb6);
      puVar5 = (undefined8 *)(*(long *)(lVar4 + 0x2e8) + 8);
    }
    puVar6 = (undefined4 *)(**(code **)(*(long *)*puVar5 + 0xf0))();
    uVar10 = *puVar6;
  }
  else {
    local_fc = (ulong)local_fc._4_4_ << 0x20;
    if (iVar9 == -0x6efba09b) goto LAB_0085af34;
    uVar10 = 0x3f800000;
  }
  local_10c = CONCAT44(local_10c._4_4_,uVar10);
LAB_0085af8c:
  FUN_007402e0(DAT_04c93e08,&local_120,*(undefined4 *)(param_1 + 0x230),0);
  return;
}


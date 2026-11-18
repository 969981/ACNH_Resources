
void FUN_0340cd70(undefined8 *param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  byte bVar5;
  int *piVar6;
  long lVar7;
  undefined4 *puVar8;
  int local_e0;
  byte local_dc;
  undefined *local_d8 [4];
  int local_b8;
  byte local_b4;
  int local_b0;
  undefined1 local_ac;
  undefined2 local_ab;
  undefined *local_a8 [4];
  undefined *local_88 [4];
  undefined *local_68 [4];
  undefined4 local_44;
  
  local_b8 = *param_2;
  if (local_b8 == -1) {
    return;
  }
  local_a8[0] = PTR_DAT_04bc9988 + 0x10;
  local_b4 = *(byte *)(param_2 + 1);
  local_88[0] = PTR_DAT_04bc9990 + 0x10;
  local_68[0] = PTR_DAT_04bc9998 + 0x10;
  if (7 < local_b4) {
    local_b4 = 0xff;
  }
  local_b0 = param_2[2];
  local_ac = (undefined1)param_2[3];
  local_ab = *(undefined2 *)((long)param_2 + 0xd);
  (**(code **)(*(long *)(param_2 + 4) + 0x10))(param_2 + 4,local_a8);
  (**(code **)(*(long *)(param_2 + 0xc) + 0x10))(param_2 + 0xc,local_88);
  (**(code **)(*(long *)(param_2 + 0x14) + 0x10))(param_2 + 0x14,local_68);
  (**(code **)*param_1)(&local_e0,param_1);
  uVar2 = *(uint *)(param_1 + 6);
  local_b4 = (byte)local_e0;
  if (7 < (byte)local_e0) {
    local_b4 = 0xff;
  }
  *(int *)((long)param_1 + 0x1a4) = *param_2;
  if ((int)uVar2 < 1) {
    piVar6 = (int *)0x0;
  }
  else {
    iVar4 = uVar2 + *(int *)((long)param_1 + 0x2c) + -1;
    iVar3 = 0;
    if (*(int *)(param_1 + 5) <= iVar4) {
      iVar3 = *(int *)(param_1 + 5);
    }
    piVar6 = (int *)(param_1[4] + (long)(iVar4 - iVar3) * 0x78);
  }
  if (3 < uVar2) {
    return;
  }
  switch(uVar2) {
  case 0:
    if (*(int *)(param_1 + 0x34) == -1) {
      iVar3 = *(int *)(param_1 + 5);
      if (0 < iVar3) {
        *(undefined4 *)(param_1 + 6) = 1;
        iVar4 = 0;
        if (iVar3 <= *(int *)((long)param_1 + 0x2c)) {
          iVar4 = iVar3;
        }
        puVar8 = (undefined4 *)(param_1[4] + (long)(*(int *)((long)param_1 + 0x2c) - iVar4) * 0x78);
        *puVar8 = 0;
        puVar8[2] = local_b8;
        bVar5 = local_b4;
        if (7 < local_b4) {
          bVar5 = 0xff;
        }
        *(byte *)(puVar8 + 3) = bVar5;
        puVar8[4] = local_b0;
        *(undefined1 *)(puVar8 + 5) = local_ac;
        *(undefined1 *)((long)puVar8 + 0x15) = (undefined1)local_ab;
        *(undefined1 *)((long)puVar8 + 0x16) = local_ab._1_1_;
        (**(code **)(local_a8[0] + 0x10))(local_a8,puVar8 + 6);
        (**(code **)(local_88[0] + 0x10))(local_88,puVar8 + 0xe);
        (**(code **)(local_68[0] + 0x10))(local_68,puVar8 + 0x16);
      }
      if (*(int *)(param_1 + 0x36) == 0) {
        local_e0 = 3;
        FUN_03ebb160(param_1 + 0x35,3);
        return;
      }
      return;
    }
    local_e0 = *(int *)(param_1 + 0x34);
    if (local_e0 == local_b8) {
      return;
    }
    local_d8[0] = PTR_DAT_04bbba70 + 0x10;
    (**(code **)*param_1)(&local_44,param_1);
    iVar3 = *(int *)(param_1 + 6);
    if (7 < (byte)local_44) {
      local_44._0_1_ = 0xff;
    }
    iVar4 = *(int *)(param_1 + 5);
    local_dc = (byte)local_44;
    if (iVar3 < iVar4) {
      *(int *)(param_1 + 6) = iVar3 + 1;
      iVar3 = *(int *)((long)param_1 + 0x2c) + iVar3;
      iVar1 = 0;
      if (iVar4 <= iVar3) {
        iVar1 = iVar4;
      }
      puVar8 = (undefined4 *)(param_1[4] + (long)(iVar3 - iVar1) * 0x78);
      *puVar8 = 1;
      puVar8[2] = local_e0;
      if (7 < (byte)local_44) {
        local_44._0_1_ = 0xff;
      }
      *(byte *)(puVar8 + 3) = (byte)local_44;
      (**(code **)(local_d8[0] + 0x10))(local_d8,puVar8 + 4);
      iVar3 = *(int *)(param_1 + 6);
      iVar4 = *(int *)(param_1 + 5);
      if (iVar3 < iVar4) goto LAB_0340d2b8;
    }
    else if (iVar3 < iVar4) {
LAB_0340d2b8:
      *(int *)(param_1 + 6) = iVar3 + 1;
      iVar3 = *(int *)((long)param_1 + 0x2c) + iVar3;
      iVar1 = 0;
      if (iVar4 <= iVar3) {
        iVar1 = iVar4;
      }
      puVar8 = (undefined4 *)(param_1[4] + (long)(iVar3 - iVar1) * 0x78);
      *puVar8 = 0;
      puVar8[2] = local_b8;
      bVar5 = local_b4;
      if (7 < local_b4) {
        bVar5 = 0xff;
      }
      *(byte *)(puVar8 + 3) = bVar5;
      puVar8[4] = local_b0;
      *(undefined1 *)(puVar8 + 5) = local_ac;
      *(undefined1 *)((long)puVar8 + 0x15) = (undefined1)local_ab;
      *(undefined1 *)((long)puVar8 + 0x16) = local_ab._1_1_;
      (**(code **)(local_a8[0] + 0x10))(local_a8,puVar8 + 6);
      (**(code **)(local_88[0] + 0x10))(local_88,puVar8 + 0xe);
      (**(code **)(local_68[0] + 0x10))(local_68,puVar8 + 0x16);
      iVar3 = *(int *)(param_1 + 0x36);
      goto joined_r0x0340cf48;
    }
    iVar3 = *(int *)(param_1 + 0x36);
joined_r0x0340cf48:
    if (iVar3 == 0) {
      local_44 = 1;
      FUN_03ebb160(param_1 + 0x35,1);
      return;
    }
    return;
  case 1:
    if (*piVar6 != 0) {
      iVar3 = *(int *)(param_1 + 5);
      if (iVar3 < 2) {
        return;
      }
      *(undefined4 *)(param_1 + 6) = 2;
      lVar7 = (long)*(int *)((long)param_1 + 0x2c) + 1;
      iVar4 = 0;
      if (iVar3 <= (int)lVar7) {
        iVar4 = iVar3;
      }
      puVar8 = (undefined4 *)(param_1[4] + (lVar7 - iVar4) * 0x78);
      goto LAB_0340d020;
    }
    if (piVar6[2] == local_b8) {
      return;
    }
    local_d8[0] = PTR_DAT_04bbba70 + 0x10;
    local_e0 = piVar6[2];
    (**(code **)*param_1)(&local_44,param_1);
    iVar3 = *(int *)(param_1 + 6);
    if (7 < (byte)local_44) {
      local_44._0_1_ = 0xff;
    }
    iVar4 = *(int *)(param_1 + 5);
    local_dc = (byte)local_44;
    if (iVar3 < iVar4) {
      *(int *)(param_1 + 6) = iVar3 + 1;
      iVar3 = *(int *)((long)param_1 + 0x2c) + iVar3;
      iVar1 = 0;
      if (iVar4 <= iVar3) {
        iVar1 = iVar4;
      }
      puVar8 = (undefined4 *)(param_1[4] + (long)(iVar3 - iVar1) * 0x78);
      *puVar8 = 1;
      puVar8[2] = local_e0;
      if (7 < (byte)local_44) {
        local_44._0_1_ = 0xff;
      }
      *(byte *)(puVar8 + 3) = (byte)local_44;
      (**(code **)(local_d8[0] + 0x10))(local_d8,puVar8 + 4);
      iVar3 = *(int *)(param_1 + 6);
      goto LAB_0340cfb4;
    }
    break;
  case 2:
    if (*piVar6 == 0) {
      iVar3 = 1;
      *(undefined4 *)(param_1 + 6) = 1;
    }
    else {
      iVar3 = 2;
    }
    iVar4 = *(int *)(param_1 + 5);
    if (iVar4 <= iVar3) {
      return;
    }
    *(int *)(param_1 + 6) = iVar3 + 1;
    lVar7 = param_1[4];
    iVar3 = *(int *)((long)param_1 + 0x2c) + iVar3;
    iVar1 = 0;
    if (iVar4 <= iVar3) {
      iVar1 = iVar4;
    }
    iVar3 = iVar3 - iVar1;
    goto LAB_0340d018;
  case 3:
    iVar3 = 1;
    if (*piVar6 == 0) {
      iVar3 = 2;
    }
    *(int *)(param_1 + 6) = iVar3;
LAB_0340cfb4:
    iVar4 = *(int *)(param_1 + 5);
  }
  if (iVar4 <= iVar3) {
    return;
  }
  *(int *)(param_1 + 6) = iVar3 + 1;
  lVar7 = param_1[4];
  iVar3 = *(int *)((long)param_1 + 0x2c) + iVar3;
  iVar1 = 0;
  if (iVar4 <= iVar3) {
    iVar1 = iVar4;
  }
  iVar3 = iVar3 - iVar1;
LAB_0340d018:
  puVar8 = (undefined4 *)(lVar7 + (long)iVar3 * 0x78);
LAB_0340d020:
  *puVar8 = 0;
  puVar8[2] = local_b8;
  bVar5 = local_b4;
  if (7 < local_b4) {
    bVar5 = 0xff;
  }
  *(byte *)(puVar8 + 3) = bVar5;
  puVar8[4] = local_b0;
  *(undefined1 *)(puVar8 + 5) = local_ac;
  *(undefined1 *)((long)puVar8 + 0x15) = (undefined1)local_ab;
  *(undefined1 *)((long)puVar8 + 0x16) = local_ab._1_1_;
  (**(code **)(local_a8[0] + 0x10))(local_a8,puVar8 + 6);
  (**(code **)(local_88[0] + 0x10))(local_88,puVar8 + 0xe);
  (**(code **)(local_68[0] + 0x10))(local_68,puVar8 + 0x16);
  return;
}


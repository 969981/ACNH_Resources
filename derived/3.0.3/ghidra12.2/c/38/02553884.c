
ulong FUN_02553884(int param_1,byte *param_2,undefined4 param_3,byte param_4)

{
  byte *pbVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  byte bVar6;
  uint *puVar7;
  byte bVar8;
  undefined4 uVar9;
  undefined8 unaff_x29;
  undefined8 unaff_x30;
  uint local_48;
  uint local_44;
  undefined4 local_40;
  undefined2 local_3c;
  byte local_3a;
  undefined1 local_39;
  byte abStack_38 [8];
  undefined4 local_30;
  undefined2 uStack_2c;
  byte bStack_2a;
  undefined4 uStack_29;
  undefined1 local_25;
  undefined4 local_24;
  
  bStack_2a = (byte)((ulong)unaff_x29 >> 0x30);
  uStack_29._0_1_ = (undefined1)((ulong)unaff_x29 >> 0x38);
  uStack_2c = (undefined2)((ulong)unaff_x29 >> 0x20);
  local_30 = (undefined4)unaff_x29;
  local_25 = (undefined1)((ulong)unaff_x30 >> 0x18);
  uStack_29._1_3_ = (undefined3)unaff_x30;
  local_24 = (undefined4)((ulong)unaff_x30 >> 0x20);
  local_3a = (byte)((uint)param_3 >> 0x10);
  local_39 = (undefined1)((uint)param_3 >> 0x18);
  local_3c = (undefined2)param_3;
  switch(param_1) {
  case 0:
  case 1:
  case 2:
  case 3:
    bStack_2a = param_4 & 1;
    abStack_38[0] = *param_2;
    local_25 = 0;
    uStack_29 = 0;
    if (7 < abStack_38[0]) {
      abStack_38[0] = 0xff;
    }
    if (param_1 - 1U < 3) {
      uVar9 = *(undefined4 *)(&DAT_0417abb0 + (long)(int)(param_1 - 1U) * 4);
    }
    else {
      uVar9 = 1;
    }
    abStack_38[4] = (byte)uVar9;
    abStack_38[5] = (byte)((uint)uVar9 >> 8);
    abStack_38[6] = (byte)((uint)uVar9 >> 0x10);
    abStack_38[7] = (byte)((uint)uVar9 >> 0x18);
    uStack_2c = 0;
    local_30 = param_3;
    if ((DAT_04cd19d8 == 0) || (*(int *)(DAT_04cd19d8 + 0x15c) == 0)) {
LAB_02553a9c:
      if (DAT_054f5738 == 0) {
        if ((DAT_054f08d8 & 1) == 0) {
          iVar3 = __cxa_guard_acquire(&DAT_054f08d8);
          if (iVar3 != 0) {
            DAT_054f08d0 = 0;
            __cxa_guard_release(&DAT_054f08d8);
          }
          puVar7 = &DAT_054f08d0;
        }
        else {
          puVar7 = &DAT_054f08d0;
        }
      }
      else {
        puVar7 = (uint *)(DAT_054f5738 + 0x200);
      }
      local_24 = 7;
      if (((*puVar7 >> 7 & 1) == 0) &&
         (((DAT_054f5738 == 0 || (7 < (ulong)*param_2)) ||
          (*(int *)(DAT_054f5738 + (ulong)*param_2 * 8 + 0xf04) == 0)))) {
        uVar2 = FUN_02530cec(abStack_38);
        goto LAB_02553b20;
      }
    }
    else {
      pbVar1 = PTR_DAT_04bb32e0;
      if (*(int *)(DAT_04cd19d8 + 0x15c) != 0) {
        pbVar1 = (byte *)(DAT_04cd19d8 + 0x158);
      }
      bVar8 = *pbVar1;
      if (7 < bVar8) {
        bVar8 = 0xff;
      }
      if ((bVar8 == abStack_38[0]) || (uVar4 = FUN_0252bbf0(param_2), (uVar4 & 1) == 0))
      goto LAB_02553a9c;
    }
    uVar2 = 0;
LAB_02553b20:
    return (ulong)(uVar2 & 1);
  case 4:
    abStack_38[4] = 3;
    break;
  default:
    uVar4 = FUN_02535e8c(param_2,param_3,param_4 & 1,0);
    return uVar4;
  case 6:
    if ((*(ushort **)PTR_DAT_04bc3a48 == (ushort *)0x0) ||
       ((**(ushort **)PTR_DAT_04bc3a48 & 1) == 0)) {
      if ((DAT_04cd19d8 != 0) && (*(int *)(DAT_04cd19d8 + 0x15c) != 0)) {
        pbVar1 = PTR_DAT_04bb32e0;
        if (*(int *)(DAT_04cd19d8 + 0x15c) != 0) {
          pbVar1 = (byte *)(DAT_04cd19d8 + 0x158);
        }
        bVar6 = *param_2;
        bVar8 = *pbVar1;
        if (7 < bVar8) {
          bVar8 = 0xff;
        }
        if (7 < bVar6) {
          bVar6 = 0xff;
        }
        if ((bVar8 != bVar6) && (uVar4 = FUN_0252bbf0(param_2), (uVar4 & 1) != 0))
        goto LAB_02553fa8;
      }
      if (DAT_054f5738 == 0) {
        if ((DAT_054f08d8 & 1) == 0) {
          iVar3 = __cxa_guard_acquire(&DAT_054f08d8);
          if (iVar3 != 0) {
            DAT_054f08d0 = 0;
            __cxa_guard_release(&DAT_054f08d8);
          }
          puVar7 = &DAT_054f08d0;
        }
        else {
          puVar7 = &DAT_054f08d0;
        }
      }
      else {
        puVar7 = (uint *)(DAT_054f5738 + 0x200);
      }
      if ((*puVar7 >> 7 & 1) == 0) {
        bVar8 = *param_2;
        if (((DAT_054f5738 == 0) || (7 < bVar8)) ||
           (*(int *)(DAT_054f5738 + (ulong)bVar8 * 8 + 0xf04) == 0)) {
          abStack_38[3] = 0;
          abStack_38[4] = 0;
          abStack_38[6] = 0;
          if (7 < bVar8) {
            bVar8 = 0xff;
          }
          abStack_38[7] = 0;
          local_44 = (uint)bVar8;
          local_40 = 0x2f;
          abStack_38[0] = 0;
          abStack_38[1] = 0;
          abStack_38[5] = 1;
          abStack_38[2] = param_4 & 1;
          uVar2 = FUN_02530cec(&local_44);
          goto LAB_02553fec;
        }
      }
    }
LAB_02553fa8:
    uVar2 = 0;
LAB_02553fec:
    return (ulong)(uVar2 & 1);
  case 7:
    abStack_38[4] = 2;
    break;
  case 8:
    abStack_38[4] = 0;
    break;
  case 9:
    abStack_38[4] = 1;
    break;
  case 10:
    FUN_025273b8();
    if ((DAT_04cd19d8 == 0) || (*(int *)(DAT_04cd19d8 + 0x15c) == 0)) {
LAB_02553d94:
      if (DAT_054f5738 == 0) {
        if ((DAT_054f08d8 & 1) == 0) {
          iVar3 = __cxa_guard_acquire(&DAT_054f08d8);
          if (iVar3 != 0) {
            DAT_054f08d0 = 0;
            __cxa_guard_release(&DAT_054f08d8);
          }
          puVar7 = &DAT_054f08d0;
        }
        else {
          puVar7 = &DAT_054f08d0;
        }
      }
      else {
        puVar7 = (uint *)(DAT_054f5738 + 0x200);
      }
      if ((*puVar7 >> 7 & 1) == 0) {
        bVar8 = *param_2;
        if (((DAT_054f5738 == 0) || (7 < bVar8)) ||
           (*(int *)(DAT_054f5738 + (ulong)bVar8 * 8 + 0xf04) == 0)) {
          abStack_38[3] = 0;
          abStack_38[4] = 0;
          abStack_38[6] = 0;
          if (7 < bVar8) {
            bVar8 = 0xff;
          }
          abStack_38[0] = 0;
          abStack_38[1] = 0;
          local_44 = (uint)bVar8;
          local_40 = 0x2f;
          abStack_38[5] = 1;
          abStack_38[7] = 1;
          abStack_38[2] = param_4 & 1;
          uVar2 = FUN_02530cec(&local_44);
          goto LAB_02553e4c;
        }
      }
    }
    else {
      pbVar1 = PTR_DAT_04bb32e0;
      if (*(int *)(DAT_04cd19d8 + 0x15c) != 0) {
        pbVar1 = (byte *)(DAT_04cd19d8 + 0x158);
      }
      bVar6 = *param_2;
      bVar8 = *pbVar1;
      if (7 < bVar8) {
        bVar8 = 0xff;
      }
      if (7 < bVar6) {
        bVar6 = 0xff;
      }
      if ((bVar8 == bVar6) || (uVar4 = FUN_0252bbf0(param_2), (uVar4 & 1) == 0)) goto LAB_02553d94;
    }
    uVar2 = 0;
LAB_02553e4c:
    return (ulong)(uVar2 & 1);
  case 0xb:
    abStack_38[4] = 4;
    break;
  case 0xc:
    abStack_38[4] = 5;
    break;
  case 0xd:
    abStack_38[4] = 6;
    break;
  case 0xe:
    abStack_38[4] = 7;
    break;
  case 0xf:
    abStack_38[4] = 8;
  }
  abStack_38[5] = 0;
  abStack_38[6] = 0;
  abStack_38[7] = 0;
  lVar5 = *(long *)PTR_DAT_04bb39b0;
  if ((lVar5 == 0) || (*(int *)(lVar5 + 0x15c) == 0)) {
LAB_02553bf0:
    if (DAT_054f5738 == 0) {
      if ((DAT_054f08d8 & 1) == 0) {
        iVar3 = __cxa_guard_acquire(&DAT_054f08d8);
        if (iVar3 != 0) {
          DAT_054f08d0 = 0;
          __cxa_guard_release(&DAT_054f08d8);
        }
        puVar7 = &DAT_054f08d0;
      }
      else {
        puVar7 = &DAT_054f08d0;
      }
    }
    else {
      puVar7 = (uint *)(DAT_054f5738 + 0x200);
    }
    if ((*puVar7 >> 7 & 1) == 0) {
      bVar8 = *param_2;
      if (((DAT_054f5738 == 0) || (7 < bVar8)) ||
         (*(int *)(DAT_054f5738 + (ulong)bVar8 * 8 + 0xf04) == 0)) {
        abStack_38[3] = 0;
        if (7 < bVar8) {
          bVar8 = 0xff;
        }
        local_39 = 0;
        abStack_38[0] = 0;
        abStack_38[1] = 0;
        abStack_38[2] = 0;
        local_48 = (uint)bVar8;
        uVar2 = CONCAT13(abStack_38[7],CONCAT12(abStack_38[6],CONCAT11(abStack_38[5],abStack_38[4]))
                        );
        if (uVar2 < 9) {
          local_44 = *(uint *)(&UNK_0417abbc + (long)(int)uVar2 * 4);
        }
        else {
          local_44 = 1;
        }
        local_3c = 0;
        local_40 = param_3;
        local_3a = param_4 & 1;
        uVar2 = FUN_02530cec(&local_48);
        goto LAB_02553cc0;
      }
    }
  }
  else {
    pbVar1 = PTR_DAT_04bb32e0;
    if (*(int *)(lVar5 + 0x15c) != 0) {
      pbVar1 = (byte *)(lVar5 + 0x158);
    }
    bVar6 = *param_2;
    bVar8 = *pbVar1;
    if (7 < bVar8) {
      bVar8 = 0xff;
    }
    if (7 < bVar6) {
      bVar6 = 0xff;
    }
    if ((bVar8 == bVar6) || (uVar4 = FUN_0252bbf0(param_2), (uVar4 & 1) == 0)) goto LAB_02553bf0;
  }
  uVar2 = 0;
LAB_02553cc0:
  return (ulong)(uVar2 & 1);
}


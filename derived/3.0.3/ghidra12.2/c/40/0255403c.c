
/* WARNING: Type propagation algorithm not settling */

uint FUN_0255403c(int param_1,byte *param_2,uint param_3)

{
  byte bVar1;
  long lVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  undefined3 uVar6;
  byte bVar7;
  undefined4 uVar8;
  uint *puVar9;
  undefined8 unaff_x29;
  undefined8 unaff_x30;
  byte local_44 [4];
  undefined8 local_40;
  byte local_38 [4];
  undefined3 uStack_34;
  undefined1 uStack_31;
  uint local_30;
  undefined2 uStack_2c;
  undefined1 uStack_2a;
  undefined1 uStack_29;
  undefined1 uStack_28;
  undefined1 uStack_27;
  undefined1 uStack_26;
  undefined1 local_25;
  undefined4 local_24;
  
  local_30 = param_3;
  switch(param_1) {
  case 0:
  case 2:
  case 3:
  case 0x10:
    if (param_1 == 2) {
      if (DAT_054f5738 == 0) {
        if ((DAT_054f0960 & 1) == 0) {
          local_40 = (ulong)param_3;
          iVar4 = __cxa_guard_acquire(&DAT_054f0960);
          if (iVar4 != 0) {
            DAT_054f0958 = 0;
            __cxa_guard_release(&DAT_054f0960);
          }
          puVar9 = (uint *)&DAT_054f0958;
          local_30 = (uint)local_40;
        }
        else {
          puVar9 = (uint *)&DAT_054f0958;
        }
      }
      else {
        puVar9 = (uint *)(DAT_054f5738 + 0x204);
        if ((ulong)*param_2 < 8) {
          puVar9 = puVar9 + (ulong)*param_2 * 2;
        }
      }
      local_38[1] = 0;
      local_38[2] = 0;
      local_38[3] = 0;
      *puVar9 = *puVar9 | 0x2000;
      local_38[0] = *param_2;
      if (7 < local_38[0]) {
        local_38[0] = 0xff;
      }
      uVar6 = 0x2b;
LAB_02554494:
      local_25 = 0;
      uStack_26 = 0;
      uStack_27 = 0;
      uStack_28 = 0;
      uStack_29 = 0;
      stack0xffffffffffffffcb = CONCAT31(uVar6,local_38[3]);
      uStack_31 = 0;
      uStack_2c = 0;
      uStack_2a = 1;
LAB_025544a4:
      uVar5 = FUN_02550b18(local_38,4);
      if ((uVar5 & 1) == 0) {
        return 0;
      }
      if (DAT_054f5738 == 0) {
        if ((DAT_054f0960 & 1) == 0) {
          iVar4 = __cxa_guard_acquire(&DAT_054f0960);
          if (iVar4 != 0) {
            DAT_054f0958 = 0;
            __cxa_guard_release(&DAT_054f0960);
          }
          puVar9 = (uint *)&DAT_054f0958;
        }
        else {
          puVar9 = (uint *)&DAT_054f0958;
        }
      }
      else {
        puVar9 = (uint *)(DAT_054f5738 + 0x204);
        if ((ulong)*param_2 < 8) {
          puVar9 = puVar9 + (ulong)*param_2 * 2;
        }
      }
      local_24 = 5;
      *puVar9 = *puVar9 | 0x20;
      if (DAT_054f5738 == 0) {
        if ((DAT_054f0960 & 1) == 0) {
          iVar4 = __cxa_guard_acquire(&DAT_054f0960);
          if (iVar4 != 0) {
            DAT_054f0958 = 0;
            __cxa_guard_release(&DAT_054f0960);
          }
          puVar9 = (uint *)&DAT_054f0958;
        }
        else {
          puVar9 = (uint *)&DAT_054f0958;
        }
      }
      else {
        puVar9 = (uint *)(DAT_054f5738 + 0x204);
        if ((ulong)*param_2 < 8) {
          puVar9 = puVar9 + (ulong)*param_2 * 2;
        }
      }
      *puVar9 = *puVar9 & 0xffffefff;
      if (DAT_054f5738 == 0) {
        return 1;
      }
      bVar7 = *param_2;
      if ((7 < DAT_0548e140) || (bVar1 = *(byte *)(DAT_054f5738 + 0x11a4), DAT_0548e140 == bVar1))
      goto LAB_02554740;
    }
    else {
      local_38[0] = *param_2;
      local_25 = 0;
      uStack_29 = 0;
      uStack_28 = 0;
      uStack_27 = 0;
      uStack_26 = 0;
      if (7 < local_38[0]) {
        local_38[0] = 0xff;
      }
      if (param_1 == 3) {
        uVar6 = 0x23;
        goto LAB_02554494;
      }
      if (param_1 == 1) {
        uVar6 = 9;
        goto LAB_02554494;
      }
      uStack_2c = 0;
      stack0xffffffffffffffcb = CONCAT31(1,local_38[3]);
      uStack_31 = 0;
      uStack_2a = 1;
      if ((param_1 != 0x10) || (uVar5 = FUN_02550b18(local_38,7), (uVar5 & 1) == 0))
      goto LAB_025544a4;
      if (DAT_054f5738 == 0) {
        if ((DAT_054f0960 & 1) == 0) {
          iVar4 = __cxa_guard_acquire(&DAT_054f0960);
          if (iVar4 != 0) {
            DAT_054f0958 = 0;
            __cxa_guard_release(&DAT_054f0960);
          }
          puVar9 = (uint *)&DAT_054f0958;
        }
        else {
          puVar9 = (uint *)&DAT_054f0958;
        }
      }
      else {
        puVar9 = (uint *)(DAT_054f5738 + 0x204);
        if ((ulong)*param_2 < 8) {
          puVar9 = puVar9 + (ulong)*param_2 * 2;
        }
      }
      local_24 = 5;
      *puVar9 = *puVar9 | 0x20;
      if (DAT_054f5738 == 0) {
        if ((DAT_054f0960 & 1) == 0) {
          iVar4 = __cxa_guard_acquire(&DAT_054f0960);
          if (iVar4 != 0) {
            DAT_054f0958 = 0;
            __cxa_guard_release(&DAT_054f0960);
          }
          puVar9 = (uint *)&DAT_054f0958;
        }
        else {
          puVar9 = (uint *)&DAT_054f0958;
        }
      }
      else {
        puVar9 = (uint *)(DAT_054f5738 + 0x204);
        if ((ulong)*param_2 < 8) {
          puVar9 = puVar9 + (ulong)*param_2 * 2;
        }
      }
      *puVar9 = *puVar9 & 0xffffefff;
      if (DAT_054f5738 == 0) {
        return 1;
      }
      bVar7 = *param_2;
      if ((7 < DAT_0548e140) || (bVar1 = *(byte *)(DAT_054f5738 + 0x11a4), DAT_0548e140 == bVar1))
      goto LAB_02554740;
    }
    if ((bVar1 < 8) && (7 < bVar7)) {
      return 1;
    }
LAB_02554740:
    if (7 < bVar7) {
      bVar7 = 0xff;
    }
    *(byte *)(DAT_054f5738 + 0x11a4) = bVar7;
    return 1;
  case 1:
    local_38[0] = *param_2;
    stack0xffffffffffffffcb = CONCAT31(9,local_38[3]);
    uStack_31 = 0;
    local_25 = 0;
    uStack_29 = 0;
    uStack_28 = 0;
    uStack_27 = 0;
    uStack_26 = 0;
    uStack_2c = 0;
    if (7 < local_38[0]) {
      local_38[0] = 0xff;
    }
    uStack_2a = 1;
    uVar3 = FUN_02550b18(local_38,1);
    if ((uVar3 & 1) != 0) {
      if (DAT_054f5738 == 0) {
        if ((DAT_054f0960 & 1) == 0) {
          local_40 = CONCAT44(uVar3,(undefined4)local_40);
          iVar4 = __cxa_guard_acquire(&DAT_054f0960);
          if (iVar4 != 0) {
            DAT_054f0958 = 0;
            __cxa_guard_release(&DAT_054f0960);
          }
          puVar9 = (uint *)&DAT_054f0958;
          uVar3 = local_40._4_4_;
        }
        else {
          puVar9 = (uint *)&DAT_054f0958;
        }
      }
      else {
        puVar9 = (uint *)(DAT_054f5738 + 0x204);
        if ((ulong)*param_2 < 8) {
          puVar9 = puVar9 + (ulong)*param_2 * 2;
        }
      }
      local_24 = 5;
      *puVar9 = *puVar9 | 0x20;
      if (DAT_054f5738 == 0) {
        if ((DAT_054f0960 & 1) == 0) {
          local_40 = CONCAT44(uVar3,(undefined4)local_40);
          iVar4 = __cxa_guard_acquire(&DAT_054f0960);
          if (iVar4 != 0) {
            DAT_054f0958 = 0;
            __cxa_guard_release(&DAT_054f0960);
          }
          puVar9 = (uint *)&DAT_054f0958;
          uVar3 = local_40._4_4_;
        }
        else {
          puVar9 = (uint *)&DAT_054f0958;
        }
      }
      else {
        puVar9 = (uint *)(DAT_054f5738 + 0x204);
        if ((ulong)*param_2 < 8) {
          puVar9 = puVar9 + (ulong)*param_2 * 2;
        }
      }
      *puVar9 = *puVar9 & 0xffffefff;
      if ((DAT_054f5738 != 0) &&
         (((bVar7 = *param_2, 7 < DAT_0548e140 || (DAT_0548e140 == *(byte *)(DAT_054f5738 + 0x11a4))
           ) || ((7 < *(byte *)(DAT_054f5738 + 0x11a4) || (bVar7 < 8)))))) {
        if (7 < bVar7) {
          bVar7 = 0xff;
        }
        *(byte *)(DAT_054f5738 + 0x11a4) = bVar7;
      }
    }
    return uVar3 & 1;
  case 4:
    uVar3 = 3;
    break;
  default:
    local_38[0] = *param_2;
    stack0xffffffffffffffcb = CONCAT31(0xb,local_38[3]);
    uStack_31 = 0;
    local_25 = 0;
    uStack_29 = 0;
    uStack_28 = 0;
    uStack_27 = 0;
    uStack_26 = 0;
    if (7 < local_38[0]) {
      local_38[0] = 0xff;
    }
    uStack_2c = 0x100;
    uStack_2a = 1;
    uVar5 = FUN_02535e8c(param_2,param_3,1,0);
    uVar3 = 0;
    if ((uVar5 & 1) != 0) {
      uVar5 = FUN_02550b18(local_38,3);
      lVar2 = DAT_054f5738;
      if ((uVar5 & 1) == 0) {
        uVar3 = 0;
      }
      else {
        if (DAT_054f5738 == 0) {
          if ((DAT_054f0960 & 1) == 0) {
            iVar4 = __cxa_guard_acquire(&DAT_054f0960);
            if (iVar4 != 0) {
              DAT_054f0958 = 0;
              __cxa_guard_release(&DAT_054f0960);
            }
            puVar9 = (uint *)&DAT_054f0958;
          }
          else {
            puVar9 = (uint *)&DAT_054f0958;
          }
        }
        else {
          bVar7 = *param_2;
          if (((DAT_0548e140 < 8) && (DAT_0548e140 != *(byte *)(DAT_054f5738 + 0x11a4))) &&
             ((*(byte *)(DAT_054f5738 + 0x11a4) < 8 && (7 < bVar7)))) {
            puVar9 = (uint *)(DAT_054f5738 + 0x204);
          }
          else {
            if (7 < bVar7) {
              bVar7 = 0xff;
            }
            *(byte *)(DAT_054f5738 + 0x11a4) = bVar7;
            puVar9 = (uint *)(lVar2 + 0x204);
            if ((ulong)*param_2 < 8) {
              puVar9 = puVar9 + (ulong)*param_2 * 2;
            }
          }
        }
        local_24 = 5;
        *puVar9 = *puVar9 | 0x20;
        if (DAT_054f5738 == 0) {
          if ((DAT_054f0960 & 1) == 0) {
            iVar4 = __cxa_guard_acquire(&DAT_054f0960);
            puVar9 = (uint *)&DAT_054f0958;
            if (iVar4 != 0) {
              DAT_054f0958 = 0;
              __cxa_guard_release(&DAT_054f0960);
            }
          }
          else {
            puVar9 = (uint *)&DAT_054f0958;
          }
        }
        else {
          puVar9 = (uint *)(DAT_054f5738 + 0x204);
          if ((ulong)*param_2 < 8) {
            puVar9 = puVar9 + (ulong)*param_2 * 2;
          }
        }
        *puVar9 = *puVar9 | 0x1000;
        uVar3 = 1;
      }
    }
    return uVar3;
  case 6:
    local_38[0] = *param_2;
    stack0xffffffffffffffcb = CONCAT31(0x2f,local_38[3]);
    uStack_31 = 0;
    uStack_29 = 0;
    uStack_28 = 0;
    uStack_26 = 0;
    local_25 = 0;
    uStack_2c = 0;
    if (7 < local_38[0]) {
      local_38[0] = 0xff;
    }
    uStack_2a = 1;
    uStack_27 = 1;
    uVar3 = FUN_02550b18(local_38,2);
    if ((uVar3 & 1) != 0) {
      if (DAT_054f5738 == 0) {
        if ((DAT_054f0960 & 1) == 0) {
          local_40 = CONCAT44(uVar3,(undefined4)local_40);
          iVar4 = __cxa_guard_acquire(&DAT_054f0960);
          if (iVar4 != 0) {
            DAT_054f0958 = 0;
            __cxa_guard_release(&DAT_054f0960);
          }
          puVar9 = (uint *)&DAT_054f0958;
          uVar3 = local_40._4_4_;
        }
        else {
          puVar9 = (uint *)&DAT_054f0958;
        }
      }
      else {
        puVar9 = (uint *)(DAT_054f5738 + 0x204);
        if ((ulong)*param_2 < 8) {
          puVar9 = puVar9 + (ulong)*param_2 * 2;
        }
      }
      local_24 = 5;
      *puVar9 = *puVar9 | 0x20;
      if (DAT_054f5738 == 0) {
        if ((DAT_054f0960 & 1) == 0) {
          local_40 = CONCAT44(uVar3,(undefined4)local_40);
          iVar4 = __cxa_guard_acquire(&DAT_054f0960);
          if (iVar4 != 0) {
            DAT_054f0958 = 0;
            __cxa_guard_release(&DAT_054f0960);
          }
          puVar9 = (uint *)&DAT_054f0958;
          uVar3 = local_40._4_4_;
        }
        else {
          puVar9 = (uint *)&DAT_054f0958;
        }
      }
      else {
        puVar9 = (uint *)(DAT_054f5738 + 0x204);
        if ((ulong)*param_2 < 8) {
          puVar9 = puVar9 + (ulong)*param_2 * 2;
        }
      }
      *puVar9 = *puVar9 & 0xffffefff;
      if ((DAT_054f5738 != 0) &&
         (((bVar7 = *param_2, 7 < DAT_0548e140 || (DAT_0548e140 == *(byte *)(DAT_054f5738 + 0x11a4))
           ) || ((7 < *(byte *)(DAT_054f5738 + 0x11a4) || (bVar7 < 8)))))) {
        if (7 < bVar7) {
          bVar7 = 0xff;
        }
        *(byte *)(DAT_054f5738 + 0x11a4) = bVar7;
      }
    }
    return uVar3 & 1;
  case 7:
    uVar3 = 2;
    break;
  case 8:
    uVar3 = 0;
    break;
  case 9:
    uVar3 = 1;
    break;
  case 10:
    uStack_2c = 0;
    uStack_29 = 0;
    uStack_28 = 0;
    uStack_27 = 1;
    uStack_26 = 1;
    local_38[0] = *param_2;
    stack0xffffffffffffffcb = CONCAT31(0x2f,local_38[3]);
    uStack_31 = 0;
    if (7 < local_38[0]) {
      local_38[0] = 0xff;
    }
    uStack_2a = 1;
    local_25 = 1;
    uVar3 = FUN_02550b18(local_38,2);
    if ((uVar3 & 1) != 0) {
      if (DAT_054f5738 == 0) {
        if ((DAT_054f0960 & 1) == 0) {
          local_40 = CONCAT44(uVar3,(undefined4)local_40);
          iVar4 = __cxa_guard_acquire(&DAT_054f0960);
          if (iVar4 != 0) {
            DAT_054f0958 = 0;
            __cxa_guard_release(&DAT_054f0960);
          }
          puVar9 = (uint *)&DAT_054f0958;
          uVar3 = local_40._4_4_;
        }
        else {
          puVar9 = (uint *)&DAT_054f0958;
        }
      }
      else {
        puVar9 = (uint *)(DAT_054f5738 + 0x204);
        if ((ulong)*param_2 < 8) {
          puVar9 = puVar9 + (ulong)*param_2 * 2;
        }
      }
      local_24 = 5;
      *puVar9 = *puVar9 | 0x20;
      if (DAT_054f5738 == 0) {
        if ((DAT_054f0960 & 1) == 0) {
          local_40 = CONCAT44(uVar3,(undefined4)local_40);
          iVar4 = __cxa_guard_acquire(&DAT_054f0960);
          if (iVar4 != 0) {
            DAT_054f0958 = 0;
            __cxa_guard_release(&DAT_054f0960);
          }
          puVar9 = (uint *)&DAT_054f0958;
          uVar3 = local_40._4_4_;
        }
        else {
          puVar9 = (uint *)&DAT_054f0958;
        }
      }
      else {
        puVar9 = (uint *)(DAT_054f5738 + 0x204);
        if ((ulong)*param_2 < 8) {
          puVar9 = puVar9 + (ulong)*param_2 * 2;
        }
      }
      *puVar9 = *puVar9 & 0xffffefff;
      if ((DAT_054f5738 != 0) &&
         ((((bVar7 = *param_2, 7 < DAT_0548e140 ||
            (DAT_0548e140 == *(byte *)(DAT_054f5738 + 0x11a4))) ||
           (7 < *(byte *)(DAT_054f5738 + 0x11a4))) || (bVar7 < 8)))) {
        if (7 < bVar7) {
          bVar7 = 0xff;
        }
        *(byte *)(DAT_054f5738 + 0x11a4) = bVar7;
      }
    }
    return uVar3 & 1;
  case 0xb:
    uVar3 = 4;
    break;
  case 0xc:
    uVar3 = 5;
    break;
  case 0xd:
    uVar3 = 6;
    break;
  case 0xe:
    uVar3 = 7;
    break;
  case 0xf:
    uVar3 = 8;
  }
  local_30 = (uint)unaff_x29;
  uStack_2c = (undefined2)((ulong)unaff_x29 >> 0x20);
  uStack_2a = (undefined1)((ulong)unaff_x29 >> 0x30);
  uStack_29 = (undefined1)((ulong)unaff_x29 >> 0x38);
  uStack_28 = (undefined1)unaff_x30;
  uStack_27 = (undefined1)((ulong)unaff_x30 >> 8);
  uStack_26 = (undefined1)((ulong)unaff_x30 >> 0x10);
  local_25 = (undefined1)((ulong)unaff_x30 >> 0x18);
  local_24 = (undefined4)((ulong)unaff_x30 >> 0x20);
  local_44[0] = *param_2;
  uStack_31 = 0;
  uVar8 = 1;
  stack0xffffffffffffffcb = 0;
  if (7 < local_44[0]) {
    local_44[0] = 0xff;
  }
  if (uVar3 < 9) {
    uVar8 = *(undefined4 *)(&UNK_0417abbc + (long)(int)uVar3 * 4);
  }
  local_40 = CONCAT44(param_3,uVar8);
  local_38[0] = 0;
  local_38[1] = 0;
  local_38[2] = 1;
  uVar3 = FUN_02550b18(local_44,5);
  if ((uVar3 & 1) != 0) {
    if (DAT_054f5738 == 0) {
      if ((DAT_054f0960 & 1) == 0) {
        iVar4 = __cxa_guard_acquire(&DAT_054f0960);
        if (iVar4 != 0) {
          DAT_054f0958 = 0;
          __cxa_guard_release(&DAT_054f0960);
        }
        puVar9 = (uint *)&DAT_054f0958;
      }
      else {
        puVar9 = (uint *)&DAT_054f0958;
      }
    }
    else {
      puVar9 = (uint *)(DAT_054f5738 + 0x204);
      if ((ulong)*param_2 < 8) {
        puVar9 = puVar9 + (ulong)*param_2 * 2;
      }
    }
    *puVar9 = *puVar9 & 0xffffefff;
    if (DAT_054f5738 == 0) {
      if ((DAT_054f0960 & 1) == 0) {
        iVar4 = __cxa_guard_acquire(&DAT_054f0960);
        if (iVar4 != 0) {
          DAT_054f0958 = 0;
          __cxa_guard_release(&DAT_054f0960);
        }
        puVar9 = (uint *)&DAT_054f0958;
      }
      else {
        puVar9 = (uint *)&DAT_054f0958;
      }
    }
    else {
      puVar9 = (uint *)(DAT_054f5738 + 0x204);
      if ((ulong)*param_2 < 8) {
        puVar9 = puVar9 + (ulong)*param_2 * 2;
      }
    }
    *puVar9 = *puVar9 | 0x20;
    if ((DAT_054f5738 != 0) &&
       ((((bVar7 = *param_2, 7 < DAT_0548e140 || (DAT_0548e140 == *(byte *)(DAT_054f5738 + 0x11a4)))
         || (7 < *(byte *)(DAT_054f5738 + 0x11a4))) || (bVar7 < 8)))) {
      if (7 < bVar7) {
        bVar7 = 0xff;
      }
      *(byte *)(DAT_054f5738 + 0x11a4) = bVar7;
    }
  }
  return uVar3 & 1;
}


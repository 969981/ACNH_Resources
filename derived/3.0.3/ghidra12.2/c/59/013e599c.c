
void FUN_013e599c(long param_1,byte *param_2)

{
  uint *puVar1;
  byte *pbVar2;
  uint uVar3;
  undefined *puVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  byte bVar9;
  byte bVar10;
  long lVar11;
  byte *pbVar12;
  undefined **local_40;
  undefined4 local_38;
  undefined4 local_34;
  
  bVar10 = *param_2;
  lVar6 = *(long *)PTR_DAT_04bb48a0;
  if (7 < bVar10) {
    bVar10 = 0xff;
  }
  bVar9 = *(byte *)(lVar6 + 0x44);
  if (7 < bVar9) {
    bVar9 = 0xff;
  }
  if (bVar10 == bVar9) {
    lVar7 = 0;
LAB_013e5abc:
    lVar6 = lVar6 + 0x40 + lVar7 * 0x20;
  }
  else {
    bVar9 = *(byte *)(lVar6 + 100);
    if (7 < bVar9) {
      bVar9 = 0xff;
    }
    if (bVar10 == bVar9) {
      lVar7 = 1;
      goto LAB_013e5abc;
    }
    bVar9 = *(byte *)(lVar6 + 0x84);
    if (7 < bVar9) {
      bVar9 = 0xff;
    }
    if (bVar10 == bVar9) {
      lVar7 = 2;
      goto LAB_013e5abc;
    }
    bVar9 = *(byte *)(lVar6 + 0xa4);
    if (7 < bVar9) {
      bVar9 = 0xff;
    }
    if (bVar10 == bVar9) {
      lVar7 = 3;
      goto LAB_013e5abc;
    }
    bVar9 = *(byte *)(lVar6 + 0xc4);
    if (7 < bVar9) {
      bVar9 = 0xff;
    }
    if (bVar10 == bVar9) {
      lVar7 = 4;
      goto LAB_013e5abc;
    }
    bVar9 = *(byte *)(lVar6 + 0xe4);
    if (7 < bVar9) {
      bVar9 = 0xff;
    }
    if (bVar10 == bVar9) {
      lVar7 = 5;
      goto LAB_013e5abc;
    }
    bVar9 = *(byte *)(lVar6 + 0x104);
    if (7 < bVar9) {
      bVar9 = 0xff;
    }
    if (bVar10 == bVar9) {
      lVar7 = 6;
      goto LAB_013e5abc;
    }
    bVar9 = *(byte *)(lVar6 + 0x124);
    if (7 < bVar9) {
      bVar9 = 0xff;
    }
    if (bVar10 == bVar9) {
      lVar7 = 7;
      goto LAB_013e5abc;
    }
    lVar6 = lVar6 + 0x140;
  }
  uVar5 = FUN_013ec620((undefined4 *)(lVar6 + 0xc));
  if (((uVar5 & 1) == 0) && (uVar5 = FUN_007d42c8(lVar6), (uVar5 & 1) != 0)) {
    if (*(long *)(param_1 + 0x2c0) != 0) {
      bVar10 = *param_2;
      if (7 < bVar10) {
        bVar10 = 0xff;
      }
      *(byte *)(*(long *)(param_1 + 0x2c0) + 0x468) = bVar10;
      local_38 = 8;
      *(undefined4 *)(lVar6 + 0xc) = *(undefined4 *)(param_1 + 0x230);
      *(byte *)(*(long *)(param_1 + 0x2c0) + 0x301) =
           *(byte *)(*(long *)(param_1 + 0x2c0) + 0x301) | 1;
      local_34 = 8;
      lVar6 = 0;
      if (*(long *)(param_1 + 0x70) != 0) {
        lVar6 = *(long *)(param_1 + 0x70) + 0x278;
      }
      if (*(int *)(lVar6 + 8) != 6) {
        FUN_03ebb160(lVar6,6);
      }
    }
    *(byte *)(param_1 + 0x274) = *(byte *)(param_1 + 0x274) | 8;
    return;
  }
  lVar6 = 0;
  if (*(long *)(param_1 + 0x70) != 0) {
    lVar6 = *(long *)(param_1 + 0x70) + 0x278;
  }
  if (*(int *)(lVar6 + 8) != 5) {
    FUN_03ebb160(lVar6,5);
  }
  puVar4 = PTR_DAT_04bb4798;
  if (*(byte *)(*DAT_0537d558 + 0x476) < 2) {
    return;
  }
  uVar3 = *(uint *)(param_1 + 0x2a0);
  lVar7 = (long)(int)uVar3;
  lVar8 = *(long *)PTR_DAT_04bb4798;
  lVar11 = *(long *)(lVar8 + 0x10);
  lVar6 = lVar7;
  if (*(uint *)(lVar8 + 8) <= uVar3 || lVar11 == 0) {
    lVar6 = 0;
  }
  if (*(char *)(lVar11 + lVar6 * 0x10 + 0xf) != '\0') {
    return;
  }
  local_40 = &PTR_LAB_04995bc0;
  if (DAT_04cd19d8 == 0) {
    bVar10 = DAT_0548e140;
    if (7 < DAT_0548e140) goto LAB_013e5cec;
LAB_013e5d40:
    if (7 < bVar10) {
      bVar10 = 0xff;
    }
  }
  else {
    pbVar12 = &DAT_0548e140;
    if (*(int *)(DAT_04cd19d8 + 0x15c) != 0) {
      pbVar12 = (byte *)(DAT_04cd19d8 + 0x158);
    }
    bVar10 = *pbVar12;
    if ((*pbVar12 < 8) ||
       (((*(int *)(DAT_04cd19d8 + 0x15c) != 0 && (DAT_054f5738 != 0)) &&
        (bVar10 = *(byte *)(DAT_054f5738 + 0x11a5), bVar10 < 8)))) goto LAB_013e5d40;
LAB_013e5cec:
    lVar6 = *DAT_0537d558;
    bVar10 = *(byte *)(lVar6 + 0x473);
    pbVar12 = PTR_DAT_04bb5038;
    if ((long)(char)bVar10 != 0xffffffffffffffff) {
      puVar1 = (uint *)(lVar6 + 0x48) + ((long)(char)bVar10 & 0xffffffffU) * 0x20;
      if (7 < bVar10) {
        puVar1 = (uint *)(lVar6 + 0x48);
      }
      if ((*puVar1 & 8) != 0) {
        pbVar12 = (byte *)(lVar6 + 0x471);
      }
    }
    bVar10 = *pbVar12;
    if (7 < bVar10) {
      bVar10 = *PTR_DAT_04bb5038;
      goto LAB_013e5d40;
    }
  }
  if (7 < bVar10) {
    bVar10 = 0xff;
  }
  local_38 = CONCAT13(local_38._3_1_,CONCAT12(bVar10,(short)uVar3)) & 0xffff00ff;
  bVar10 = *(byte *)(*DAT_0537d558 + 0x473);
  if ((long)(char)bVar10 != 0xffffffffffffffff) {
    pbVar12 = (byte *)(*DAT_0537d558 + 0x48);
    uVar5 = (long)(char)bVar10 & 0xffffffff;
    pbVar2 = pbVar12 + uVar5 * 0x80;
    if (7 < bVar10) {
      pbVar2 = pbVar12;
    }
    if ((*pbVar2 >> 3 & 1) != 0) {
      lVar6 = DAT_0537d558[2] + 0x108 + uVar5 * 0xc;
      if (0xb < bVar10) {
        lVar6 = DAT_0537d558[2] + 0x108;
      }
      if (*(char *)(lVar6 + 10) == '\0') {
        local_38._0_2_ = CONCAT11(3,(char)uVar3);
        if (-1 < *(int *)(lVar8 + 0x38)) {
          FUN_01db1df0(*DAT_0537d558 + 0x480,*(int *)(lVar8 + 0x38),(long)register0x00000008 + -0x18
                       ,&local_40,0x10,0);
        }
        lVar6 = *DAT_0537d558;
        bVar10 = *(byte *)(lVar6 + 0x473);
        if ((long)(char)bVar10 != 0xffffffffffffffff) {
          pbVar12 = (byte *)(lVar6 + 0x48) + ((long)(char)bVar10 & 0xffffffffU) * 0x80;
          if (7 < bVar10) {
            pbVar12 = (byte *)(lVar6 + 0x48);
          }
          if (((*pbVar12 >> 3 & 1) != 0) && (*(byte *)(lVar6 + 0x472) != bVar10)) {
            local_38._0_2_ = CONCAT11(4,(undefined1)local_38);
            if (-1 < *(int *)(*(long *)puVar4 + 0x38)) {
              FUN_01db1df0(*DAT_0537d558 + 0x480,*(int *)(*(long *)puVar4 + 0x38),
                           (long)register0x00000008 + -0x18,&local_40,0x10,0);
            }
          }
        }
        goto LAB_013e5e00;
      }
    }
  }
  if (*(uint *)(lVar8 + 8) <= uVar3 || lVar11 == 0) {
    lVar7 = 0;
  }
  bVar10 = DAT_0548e140;
  if (7 < DAT_0548e140) {
    bVar10 = 0xff;
  }
  *(byte *)(lVar11 + lVar7 * 0x10 + 0xc) = bVar10;
  if ((*(byte *)(param_1 + 0x274) & 4) == 0) {
    FUN_013d8724(*(undefined8 *)puVar4,*(undefined4 *)(param_1 + 0x2a0));
  }
LAB_013e5e00:
  lVar6 = (long)(int)*(uint *)(param_1 + 0x2a0);
  lVar7 = *(long *)(*(long *)puVar4 + 0x10);
  if (*(uint *)(*(long *)puVar4 + 8) <= *(uint *)(param_1 + 0x2a0) || lVar7 == 0) {
    lVar6 = 0;
  }
  *(undefined1 *)(lVar7 + lVar6 * 0x10 + 0xf) = 1;
  if ((*(byte *)(param_1 + 0x274) & 4) == 0) {
    FUN_013d8724(*(undefined8 *)puVar4,*(undefined4 *)(param_1 + 0x2a0));
  }
  return;
}


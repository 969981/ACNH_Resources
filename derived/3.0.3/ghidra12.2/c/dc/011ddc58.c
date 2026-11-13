
void FUN_011ddc58(long param_1,short *param_2)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  ulong uVar7;
  undefined8 *puVar8;
  uint uVar9;
  undefined1 auStack_50 [24];
  short local_38;
  short local_36;
  undefined4 local_34;
  undefined *local_30;
  undefined4 local_28;
  undefined4 uStack_24;
  
  if (DAT_05146e18 == '\0') {
    uVar6 = *(uint *)(param_1 + 0xc);
    if (DAT_050dfcbc <= (int)uVar6) {
      return;
    }
    uVar9 = *(uint *)(param_1 + 8);
    if ((int)uVar9 < DAT_05233970) {
      return;
    }
    if (DAT_05233980 < (int)uVar9) {
      return;
    }
    if ((int)uVar6 < DAT_05233974) {
      return;
    }
    if (DAT_05233984 < (int)uVar6) {
      return;
    }
    uVar6 = ((int)uVar9 >> 1) + (uVar6 >> 1) * 0x100;
    if (uVar6 >> 0xf != 0) {
      return;
    }
    puVar8 = &DAT_0513edf0;
  }
  else {
    local_38 = *param_2;
    if (local_38 == -3) {
      return;
    }
    if (local_38 == -2) {
      local_28 = *(undefined4 *)(param_1 + 8);
      uStack_24 = *(undefined4 *)(param_1 + 0xc);
      local_30 = PTR_DAT_04bb2010 + 0x10;
      uVar7 = FUN_011dec54(&local_30);
      uVar6 = *(uint *)(param_1 + 8);
      if ((uVar7 & 1) == 0) {
        if ((int)uVar6 < DAT_05233970 || DAT_05233980 < (int)uVar6) {
          return;
        }
        uVar9 = *(uint *)(param_1 + 0xc);
        if ((int)uVar9 < DAT_05233974) {
          return;
        }
        if (DAT_05233984 < (int)uVar9) {
          return;
        }
        uVar9 = (uVar9 & 0x1fffffe) * 0x80 + ((int)uVar6 >> 1);
        if (uVar9 >> 0xf == 0) {
          lVar1 = (ulong)(uVar9 >> 5) * 4;
          *(uint *)(&DAT_05140e08 + lVar1) =
               *(uint *)(&DAT_05140e08 + lVar1) & (1 << (ulong)(uVar6 >> 1 & 0x1f) ^ 0xffffffffU);
          return;
        }
        return;
      }
      if ((int)uVar6 < DAT_05233970 || DAT_05233980 < (int)uVar6) {
        return;
      }
      uVar9 = *(uint *)(param_1 + 0xc);
      if ((int)uVar9 < DAT_05233974) {
        return;
      }
      if (DAT_05233984 < (int)uVar9) {
        return;
      }
      uVar9 = (uVar9 & 0x1fffffe) * 0x80 + ((int)uVar6 >> 1);
      if (uVar9 >> 0xf == 0) {
        lVar1 = (ulong)(uVar9 >> 5) * 4;
        *(uint *)(&DAT_05140e08 + lVar1) =
             *(uint *)(&DAT_05140e08 + lVar1) | 1 << (ulong)(uVar6 >> 1 & 0x1f);
        return;
      }
      return;
    }
    local_36 = param_2[1];
    local_34 = *(undefined4 *)(param_2 + 2);
    uVar6 = FUN_01241ca0(&local_38);
    iVar5 = DAT_05233980;
    iVar4 = DAT_05233970;
    if (0x12 < uVar6) {
      return;
    }
    uVar9 = *(uint *)(param_1 + 8);
    if ((((DAT_05233970 <= (int)uVar9) && ((int)uVar9 <= DAT_05233980)) &&
        (uVar2 = *(uint *)(param_1 + 0xc), DAT_05233974 <= (int)uVar2)) &&
       (((int)uVar2 <= DAT_05233984 &&
        (uVar2 = (uVar2 & 0x1fffffe) * 0x80 + ((int)uVar9 >> 1), uVar2 >> 0xf == 0)))) {
      lVar1 = (ulong)(uVar2 >> 5) * 4 + (ulong)uVar6 * 0x1008;
      *(uint *)((long)&DAT_050dfcc0 + lVar1 + 8) =
           *(uint *)((long)&DAT_050dfcc0 + lVar1 + 8) | 1 << (ulong)(uVar9 >> 1 & 0x1f);
      uVar9 = *(uint *)(param_1 + 8);
    }
    if (((iVar4 <= (int)uVar9) && ((int)uVar9 <= iVar5)) &&
       ((iVar3 = *(int *)(param_1 + 0xc), DAT_05233974 <= iVar3 &&
        ((iVar3 <= DAT_05233984 && (uVar2 = uVar9 + iVar3 * 0x200, uVar2 >> 0x11 == 0)))))) {
      lVar1 = (ulong)(uVar2 >> 5) * 4 + (ulong)uVar6 * 0x4008;
      *(uint *)((long)&DAT_050f2d58 + lVar1 + 8) =
           *(uint *)((long)&DAT_050f2d58 + lVar1 + 8) | 1 << (ulong)(uVar9 & 0x1f);
    }
    if (3 < uVar6 - 1) {
      if (3 < uVar6 - 6) {
        return;
      }
      FUN_0124c030(auStack_50,param_2);
      uVar7 = FUN_012509c0(auStack_50,0);
      if ((uVar7 & 1) == 0) {
        return;
      }
      uVar7 = FUN_01250da8(auStack_50,2);
      if ((uVar7 & 1) == 0) {
        return;
      }
      FUN_01696154(&DAT_050f0d48,param_1);
      return;
    }
    uVar9 = *(uint *)(param_1 + 8);
    if ((int)uVar9 < iVar4) {
      return;
    }
    if (iVar5 < (int)uVar9) {
      return;
    }
    uVar6 = *(uint *)(param_1 + 0xc);
    if ((int)uVar6 < DAT_05233974) {
      return;
    }
    if (DAT_05233984 < (int)uVar6) {
      return;
    }
    uVar6 = (uVar6 & 0x1fffffe) * 0x80 + ((int)uVar9 >> 1);
    if (uVar6 >> 0xf != 0) {
      return;
    }
    puVar8 = &DAT_0513fdf8;
  }
  *(uint *)((long)puVar8 + (ulong)(uVar6 >> 5) * 4 + 8) =
       *(uint *)((long)puVar8 + (ulong)(uVar6 >> 5) * 4 + 8) | 1 << (ulong)(uVar9 >> 1 & 0x1f);
  return;
}


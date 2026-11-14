
void FUN_01b0ab1c(long param_1,undefined4 *param_2)

{
  long lVar1;
  uint uVar2;
  undefined *puVar3;
  uint uVar4;
  int iVar5;
  ulong uVar6;
  ushort uVar7;
  uint *puVar8;
  uint *puVar9;
  long lVar10;
  undefined **local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  uint *local_48;
  
  puVar8 = *(uint **)(param_1 + 0x10);
  local_58 = (undefined **)CONCAT44(local_58._4_4_,0xb8);
  if (puVar8 == (uint *)0x0) {
    uVar7 = 0xbc;
  }
  else {
    uVar4 = *puVar8;
    if (uVar4 != 0 && puVar8 != (uint *)(ulong)uVar4) {
      puVar9 = (uint *)((long)puVar8 - (long)(ulong)uVar4);
      if (((*puVar9 != 0) && (uVar4 = puVar9[1], uVar4 != 0)) && ((ulong)(ushort)puVar9[2] != 0)) {
        lVar1 = 0xc;
        if (*(char *)((long)puVar9 + 10) != '\0') {
          lVar1 = 0x1c;
        }
        lVar1 = (long)puVar9 + lVar1 + (ulong)(ushort)puVar9[2] * 8;
        if (lVar1 != 0) {
          uVar2 = 0;
          if ((ulong)uVar4 != 0) {
            uVar2 = (uint)((ulong)((long)puVar8 - lVar1) / (ulong)uVar4);
          }
          if (*puVar9 <= uVar2) {
            uVar2 = 0xffffffff;
          }
          if ((uVar2 < DAT_05326ec0) &&
             (uVar7 = *(ushort *)(DAT_05326ec8 + (long)(int)uVar2 * 2), uVar7 < 0xbd))
          goto LAB_01b0abdc;
        }
      }
    }
    uVar7 = 0;
  }
LAB_01b0abdc:
  if (uVar7 != 0xb8) {
    return;
  }
  uVar6 = FUN_0277e294(param_2);
  puVar3 = PTR_DAT_04bb43c0;
  if ((uVar6 & 1) == 0) {
    return;
  }
  local_48 = (uint *)0x0;
  local_58 = &PTR_FUN_04a36b50;
  local_50 = *param_2;
  uStack_4c = param_2[1];
  lVar10 = *(long *)PTR_DAT_04bb43c0;
  uVar4 = FUN_0277d6c4(&local_50);
  lVar1 = DAT_0532a768;
  if (*(long *)puVar3 != 0) {
    lVar10 = *(long *)(lVar10 + 0x57e58);
    uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
    if ((uVar4 < *(uint *)(lVar10 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar4 * 8) != 0)) {
      uVar4 = FUN_0277d6c4(param_2);
      uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar1 + 0x1f8);
      if ((uVar4 < *(uint *)(lVar1 + 0x1d8)) &&
         (puVar8 = *(uint **)(*(long *)(lVar1 + 0x1e0) + (long)(int)uVar4 * 8),
         puVar8 != (uint *)0x0)) {
        local_48 = puVar8;
      }
    }
  }
  uVar6 = FUN_01ae7a70(&local_58);
  if (((((uVar6 & 1) == 0) && (iVar5 = FUN_01ae7550(&local_58), iVar5 != 10)) &&
      (iVar5 = FUN_01ae7550(&local_58), iVar5 != 0xb)) &&
     (iVar5 = FUN_01ae7550(&local_58), iVar5 != 0xc)) {
    return;
  }
  lVar1 = param_1 + 8;
  iVar5 = FUN_0277d6c4(lVar1);
  if (((iVar5 != 0x33df) || (uVar6 = FUN_01aeb830(&local_58), (uVar6 & 1) == 0)) &&
     ((iVar5 = FUN_0277d6c4(lVar1), iVar5 != 0x33dd ||
      (uVar6 = FUN_01aebedc(&local_58), (uVar6 & 1) == 0)))) {
    iVar5 = FUN_0277d6c4(lVar1);
    if (iVar5 != 0x33de) {
      return;
    }
    if (local_48 == (uint *)0x0) {
      uVar4 = 0x21;
    }
    else {
      uVar2 = *local_48;
      uVar4 = 0;
      if ((uVar2 != 0) && (local_48 != (uint *)(ulong)uVar2)) {
        puVar8 = (uint *)((long)local_48 - (long)(ulong)uVar2);
        uVar4 = 0;
        if (*puVar8 != 0) {
          uVar4 = puVar8[1];
          if ((uVar4 != 0) && ((ulong)(ushort)puVar8[2] != 0)) {
            lVar1 = 0xc;
            if (*(char *)((long)puVar8 + 10) != '\0') {
              lVar1 = 0x1c;
            }
            lVar1 = (long)puVar8 + lVar1 + (ulong)(ushort)puVar8[2] * 8;
            if (lVar1 != 0) {
              uVar2 = 0;
              if ((ulong)uVar4 != 0) {
                uVar2 = (uint)((ulong)((long)local_48 - lVar1) / (ulong)uVar4);
              }
              if (*puVar8 <= uVar2) {
                uVar2 = 0xffffffff;
              }
              if ((uVar2 < DAT_05326af0) &&
                 (uVar4 = (uint)*(ushort *)(DAT_05326af8 + (long)(int)uVar2 * 2), uVar4 < 0xa2))
              goto LAB_01b0ae10;
            }
          }
          uVar4 = 0;
        }
      }
    }
LAB_01b0ae10:
    if ((int)*(uint *)(DAT_0532a7a0 + 0x1c0) < 1) {
      if ((((*(long *)(DAT_0532a7a0 + 0xb0) != 0) &&
           (puVar8 = *(uint **)(*(long *)(DAT_0532a7a0 + 0xb0) + 8), puVar8 != (uint *)0x0)) &&
          ((*(uint *)(DAT_0532a7a0 + 200) <= uVar4 ||
           (*(char *)(*(long *)(DAT_0532a7a0 + 0xd0) + (long)(int)uVar4) != '\0')))) &&
         (((uVar4 < *puVar8 && (puVar8[1] != 0)) && ((ushort)puVar8[2] != 0)))) {
        iVar5 = 0xc;
        if (*(char *)((long)puVar8 + 10) != '\0') {
          iVar5 = 0x1c;
        }
        puVar8 = (uint *)((ulong)(puVar8[1] * uVar4 + (uint)(ushort)puVar8[2] * 8 + iVar5) +
                         (long)puVar8);
        goto joined_r0x01b0af44;
      }
LAB_01b0af4c:
      uVar7 = 0;
    }
    else {
      if (*(uint *)(DAT_0532a7a0 + 0x1c0) <= uVar4) goto LAB_01b0af4c;
      if (*(uint *)(DAT_0532a7a0 + 0x1b0) <= uVar4) {
        uVar4 = 0;
      }
      puVar8 = *(uint **)(*(long *)(DAT_0532a7a0 + 0x1b8) + (ulong)uVar4 * 8);
joined_r0x01b0af44:
      uVar7 = 0;
      if (puVar8 != (uint *)0x0) {
        uVar7 = 0;
        uVar4 = *puVar8;
        if ((uVar4 != 0) && (puVar8 != (uint *)(ulong)uVar4)) {
          puVar9 = (uint *)((long)puVar8 - (long)(ulong)uVar4);
          uVar7 = 0;
          if (*puVar9 != 0) {
            uVar4 = puVar9[1];
            if ((uVar4 != 0) && ((ulong)(ushort)puVar9[2] != 0)) {
              lVar1 = 0xc;
              if (*(char *)((long)puVar9 + 10) != '\0') {
                lVar1 = 0x1c;
              }
              lVar1 = (long)puVar9 + lVar1 + (ulong)(ushort)puVar9[2] * 8;
              if (lVar1 != 0) {
                uVar2 = 0;
                if ((ulong)uVar4 != 0) {
                  uVar2 = (uint)((ulong)((long)puVar8 - lVar1) / (ulong)uVar4);
                }
                if (*puVar9 <= uVar2) {
                  uVar2 = 0xffffffff;
                }
                if ((uVar2 < DAT_05326b00) &&
                   (uVar7 = *(ushort *)(DAT_05326b08 + (long)(int)uVar2 * 2), uVar7 < 0x75))
                goto LAB_01b0af50;
              }
            }
            goto LAB_01b0af4c;
          }
        }
      }
    }
LAB_01b0af50:
    if (uVar7 != 4) {
      return;
    }
  }
  puVar8 = *(uint **)(param_1 + 0x10);
  if (puVar8 == (uint *)0x0) {
    uVar7 = 0xbc;
  }
  else {
    uVar4 = *puVar8;
    uVar7 = 0;
    if ((uVar4 != 0) && (puVar8 != (uint *)(ulong)uVar4)) {
      puVar9 = (uint *)((long)puVar8 - (long)(ulong)uVar4);
      uVar7 = 0;
      if (*puVar9 != 0) {
        uVar4 = puVar9[1];
        if ((uVar4 != 0) && ((ulong)(ushort)puVar9[2] != 0)) {
          lVar1 = 0xc;
          if (*(char *)((long)puVar9 + 10) != '\0') {
            lVar1 = 0x1c;
          }
          lVar1 = (long)puVar9 + lVar1 + (ulong)(ushort)puVar9[2] * 8;
          if (lVar1 != 0) {
            uVar2 = 0;
            if ((ulong)uVar4 != 0) {
              uVar2 = (uint)((ulong)((long)puVar8 - lVar1) / (ulong)uVar4);
            }
            if (*puVar9 <= uVar2) {
              uVar2 = 0xffffffff;
            }
            if ((uVar2 < DAT_05326ec0) &&
               (uVar7 = *(ushort *)(DAT_05326ec8 + (long)(int)uVar2 * 2), uVar7 < 0xbd))
            goto LAB_01b0b004;
          }
        }
        uVar7 = 0;
      }
    }
  }
LAB_01b0b004:
  if (uVar7 == 0xb8) {
    FUN_01b01728(param_1 + 0xc,param_2);
  }
  return;
}


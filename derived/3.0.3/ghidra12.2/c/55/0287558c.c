
void FUN_0287558c(long param_1,int *param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  uint uVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  int local_98;
  short sStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  int iStack_84;
  int local_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 local_6c;
  int iStack_68;
  
  puVar4 = PTR_DAT_04bb43c0;
  lVar9 = *(long *)PTR_DAT_04bb43c0;
  lVar1 = param_1 + 8;
  lVar2 = param_1 + 0x10;
  puVar8 = (undefined8 *)(param_1 + 0x14);
  uVar5 = FUN_0277d6c4();
  lVar10 = *(long *)puVar4;
  if (lVar10 != 0) {
    lVar9 = *(long *)(lVar9 + 0x57e58);
    uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
    if ((uVar5 < *(uint *)(lVar9 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar5 * 8) != 0)) {
      uVar5 = FUN_0277d6c4(param_1);
      lVar9 = *(long *)puVar4;
      if (lVar9 == 0) {
LAB_0287566c:
        uVar5 = FUN_0277d6c4(lVar1);
        if (*(long *)puVar4 != 0) {
          lVar9 = *(long *)(lVar9 + 0x57e58);
          uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
          if (((uVar5 < *(uint *)(lVar9 + 0x1d8)) &&
              (*(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar5 * 8) != 0)) &&
             (uVar6 = FUN_0277d7b4(lVar1,param_1), (uVar6 & 1) != 0)) {
            lVar9 = 1;
            goto LAB_028756c0;
          }
        }
      }
      else {
        lVar10 = *(long *)(lVar10 + 0x57e58);
        uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
        if ((*(uint *)(lVar10 + 0x1d8) <= uVar5) ||
           (*(long *)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar5 * 8) == 0)) goto LAB_0287566c;
        uVar6 = FUN_0277d7b4(param_1,param_1);
        if ((uVar6 & 1) == 0) {
          lVar9 = *(long *)puVar4;
          goto LAB_0287566c;
        }
        lVar9 = 0;
LAB_028756c0:
        if (*(char *)(lVar2 + lVar9) == '\0') goto LAB_028757fc;
      }
      lVar10 = *(long *)puVar4;
      uVar5 = FUN_0277d6c4(param_1);
      lVar9 = *(long *)puVar4;
      puVar7 = puVar8;
      if (lVar9 == 0) {
LAB_02875728:
        uVar5 = FUN_0277d6c4(lVar1);
        if (*(long *)puVar4 != 0) {
          lVar9 = *(long *)(lVar9 + 0x57e58);
          uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
          if (((uVar5 < *(uint *)(lVar9 + 0x1d8)) &&
              (*(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar5 * 8) != 0)) &&
             (uVar6 = FUN_0277d7b4(lVar1,param_1), (uVar6 & 1) != 0)) {
            lVar9 = 1;
            goto LAB_0287578c;
          }
        }
      }
      else {
        lVar10 = *(long *)(lVar10 + 0x57e58);
        uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
        if ((*(uint *)(lVar10 + 0x1d8) <= uVar5) ||
           (*(long *)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar5 * 8) == 0)) goto LAB_02875728;
        uVar6 = FUN_0277d7b4(param_1,param_1);
        if ((uVar6 & 1) == 0) {
          lVar9 = *(long *)puVar4;
          goto LAB_02875728;
        }
        lVar9 = 0;
LAB_0287578c:
        if (*(char *)(lVar2 + lVar9) != '\0') {
          puVar7 = puVar8 + lVar9 * 7;
        }
      }
      uVar3 = *puVar7;
      local_98 = (int)uVar3;
      sStack_94 = (short)((ulong)uVar3 >> 0x20);
      uStack_90 = (undefined4)puVar7[1];
      uStack_8c = (undefined4)((ulong)puVar7[1] >> 0x20);
      local_88 = (undefined4)puVar7[2];
      iStack_84 = (int)((ulong)puVar7[2] >> 0x20);
      local_7c = (int)*(undefined8 *)((long)puVar7 + 0x1c);
      uStack_78 = (undefined4)((ulong)*(undefined8 *)((long)puVar7 + 0x1c) >> 0x20);
      uStack_74 = (undefined4)*(undefined8 *)((long)puVar7 + 0x24);
      uStack_70 = (undefined4)((ulong)*(undefined8 *)((long)puVar7 + 0x24) >> 0x20);
      local_6c = (undefined4)*(undefined8 *)((long)puVar7 + 0x2c);
      iStack_68 = (int)((ulong)*(undefined8 *)((long)puVar7 + 0x2c) >> 0x20);
      if ((local_7c == param_2[7]) &&
         ((*(long *)(param_2 + 8) == CONCAT44(uStack_74,uStack_78) &&
          *(long *)(param_2 + 10) == CONCAT44(local_6c,uStack_70)) && param_2[0xc] == iStack_68)) {
        if ((sStack_94 == 0) || ((short)param_2[1] == 0)) {
          if (local_98 == *param_2) goto LAB_028759a8;
        }
        else if ((local_98 == *param_2) &&
                ((*(long *)(param_2 + 1) == CONCAT44(uStack_90,(int)((ulong)uVar3 >> 0x20)) &&
                 *(long *)(param_2 + 3) == CONCAT44(local_88,uStack_8c)) && param_2[5] == iStack_84)
                ) {
LAB_028759a8:
          FUN_02875b04(param_1,param_1);
        }
      }
    }
  }
LAB_028757fc:
  lVar9 = *(long *)puVar4;
  uVar5 = FUN_0277d6c4(lVar1);
  lVar10 = *(long *)puVar4;
  if (lVar10 == 0) {
    return;
  }
  lVar9 = *(long *)(lVar9 + 0x57e58);
  uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
  if (*(uint *)(lVar9 + 0x1d8) <= uVar5) {
    return;
  }
  if (*(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar5 * 8) == 0) {
    return;
  }
  uVar5 = FUN_0277d6c4(param_1);
  lVar9 = *(long *)puVar4;
  if (lVar9 == 0) {
LAB_028758e8:
    uVar5 = FUN_0277d6c4(lVar1);
    if (*(long *)puVar4 != 0) {
      lVar9 = *(long *)(lVar9 + 0x57e58);
      uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
      if (((uVar5 < *(uint *)(lVar9 + 0x1d8)) &&
          (*(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar5 * 8) != 0)) &&
         (uVar6 = FUN_0277d7b4(lVar1,lVar1), (uVar6 & 1) != 0)) {
        lVar9 = 1;
        goto LAB_0287593c;
      }
    }
  }
  else {
    lVar10 = *(long *)(lVar10 + 0x57e58);
    uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
    if ((*(uint *)(lVar10 + 0x1d8) <= uVar5) ||
       (*(long *)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar5 * 8) == 0)) goto LAB_028758e8;
    uVar6 = FUN_0277d7b4(param_1,lVar1);
    if ((uVar6 & 1) == 0) {
      lVar9 = *(long *)puVar4;
      goto LAB_028758e8;
    }
    lVar9 = 0;
LAB_0287593c:
    if (*(char *)(lVar2 + lVar9) == '\0') {
      return;
    }
  }
  lVar10 = *(long *)puVar4;
  uVar5 = FUN_0277d6c4(param_1);
  lVar9 = *(long *)puVar4;
  if (lVar9 == 0) {
LAB_028759bc:
    uVar5 = FUN_0277d6c4(lVar1);
    if (*(long *)puVar4 == 0) goto LAB_02875a24;
    lVar9 = *(long *)(lVar9 + 0x57e58);
    uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
    if (((*(uint *)(lVar9 + 0x1d8) <= uVar5) ||
        (*(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar5 * 8) == 0)) ||
       (uVar6 = FUN_0277d7b4(lVar1,lVar1), (uVar6 & 1) == 0)) goto LAB_02875a24;
    lVar9 = 1;
  }
  else {
    lVar10 = *(long *)(lVar10 + 0x57e58);
    uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
    if ((*(uint *)(lVar10 + 0x1d8) <= uVar5) ||
       (*(long *)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar5 * 8) == 0)) goto LAB_028759bc;
    uVar6 = FUN_0277d7b4(param_1,lVar1);
    if ((uVar6 & 1) == 0) {
      lVar9 = *(long *)puVar4;
      goto LAB_028759bc;
    }
    lVar9 = 0;
  }
  if (*(char *)(lVar2 + lVar9) != '\0') {
    puVar8 = puVar8 + lVar9 * 7;
  }
LAB_02875a24:
  uVar3 = *puVar8;
  local_98 = (int)uVar3;
  sStack_94 = (short)((ulong)uVar3 >> 0x20);
  uStack_90 = (undefined4)puVar8[1];
  uStack_8c = (undefined4)((ulong)puVar8[1] >> 0x20);
  local_88 = (undefined4)puVar8[2];
  iStack_84 = (int)((ulong)puVar8[2] >> 0x20);
  local_7c = (int)*(undefined8 *)((long)puVar8 + 0x1c);
  uStack_78 = (undefined4)((ulong)*(undefined8 *)((long)puVar8 + 0x1c) >> 0x20);
  uStack_74 = (undefined4)*(undefined8 *)((long)puVar8 + 0x24);
  uStack_70 = (undefined4)((ulong)*(undefined8 *)((long)puVar8 + 0x24) >> 0x20);
  local_6c = (undefined4)*(undefined8 *)((long)puVar8 + 0x2c);
  iStack_68 = (int)((ulong)*(undefined8 *)((long)puVar8 + 0x2c) >> 0x20);
  if ((local_7c == param_2[7]) &&
     ((*(long *)(param_2 + 8) == CONCAT44(uStack_74,uStack_78) &&
      *(long *)(param_2 + 10) == CONCAT44(local_6c,uStack_70)) && param_2[0xc] == iStack_68)) {
    if ((sStack_94 == 0) || ((short)param_2[1] == 0)) {
      if (local_98 != *param_2) {
        return;
      }
    }
    else {
      if (local_98 != *param_2) {
        return;
      }
      if ((*(long *)(param_2 + 1) != CONCAT44(uStack_90,(int)((ulong)uVar3 >> 0x20)) ||
          *(long *)(param_2 + 3) != CONCAT44(local_88,uStack_8c)) || param_2[5] != iStack_84) {
        return;
      }
    }
    FUN_02875b04(param_1,lVar1);
  }
  return;
}


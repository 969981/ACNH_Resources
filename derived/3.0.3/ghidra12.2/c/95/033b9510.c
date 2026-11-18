
void FUN_033b9510(long param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  long lVar5;
  uint uVar6;
  undefined8 *puVar7;
  undefined1 *puVar8;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined4 local_118;
  undefined *local_110;
  undefined1 *puStack_108;
  int local_100;
  undefined1 auStack_fc [63];
  undefined1 local_bd;
  undefined *local_b8;
  undefined1 *local_b0;
  undefined4 local_a8;
  undefined1 local_a4 [63];
  undefined1 local_65;
  
  uVar4 = *(uint *)(param_1 + 0x10);
  if (uVar4 == 0xffffffff && *(char *)(param_1 + 0x28) != '\0') {
    puVar8 = (undefined1 *)(param_1 + 0x29);
    *puVar8 = 1;
    uVar3 = *(undefined4 *)(param_1 + 0x14);
    *(undefined8 *)(param_1 + 0x14) = 0xffffffff00000000;
    *(undefined4 *)(param_1 + 0x1c) = uVar3;
    uVar4 = *(uint *)(param_1 + 0x20);
    *(uint *)(param_1 + 0x10) = uVar4;
    if (uVar4 != 0xffffffff) {
      uVar6 = *(uint *)(param_1 + 0x30);
      lVar5 = *(long *)(param_1 + 0x38);
      uVar1 = uVar4;
      if (uVar6 <= uVar4) {
        uVar1 = 0;
      }
      puVar7 = *(undefined8 **)(lVar5 + (long)(int)uVar1 * 0x40);
      if (puVar7 != (undefined8 *)0x0) {
        (*(code *)*puVar7)();
        uVar4 = *(uint *)(param_1 + 0x10);
        goto LAB_033b959c;
      }
      *puVar8 = 0;
      goto LAB_033b95c4;
    }
    *puVar8 = 0;
  }
  else {
LAB_033b959c:
    *(undefined1 *)(param_1 + 0x29) = 0;
    if (uVar4 != 0xffffffff) {
      uVar6 = *(uint *)(param_1 + 0x30);
      lVar5 = *(long *)(param_1 + 0x38);
LAB_033b95c4:
      if (uVar6 <= uVar4) {
        uVar4 = 0;
      }
      lVar5 = *(long *)(lVar5 + (long)(int)uVar4 * 0x40);
      if ((lVar5 != 0) && ((**(code **)(lVar5 + 8))(), *(char *)(param_1 + 0x29) != '\0'))
      goto LAB_033b95f8;
    }
  }
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
LAB_033b95f8:
  FUN_033cf210(param_1 + 0x330);
  if (*(char *)(param_1 + 0x338) != '\0') {
    local_120 = 0;
    local_130 = 0;
    local_128 = 0x3f800000;
    local_118 = 0x40a00000;
    local_100 = 0x40;
    local_bd = 0;
    local_110 = PTR_DAT_04bb2f70 + 0x10;
    puStack_108 = auStack_fc;
    (**(code **)(DAT_05743418 + 0x18))(&DAT_05743418);
    puVar8 = DAT_05743420;
    if (auStack_fc != DAT_05743420) {
      (**(code **)(DAT_05743418 + 0x18))(&DAT_05743418);
      lVar5 = 0;
      do {
        if (DAT_05743420[lVar5] == '\0') goto LAB_033b96cc;
        if (DAT_05743420[lVar5 + 1] == '\0') {
          lVar5 = lVar5 + 1;
          goto LAB_033b96cc;
        }
        if (DAT_05743420[lVar5 + 2] == '\0') {
          lVar5 = lVar5 + 2;
          goto LAB_033b96cc;
        }
        lVar5 = lVar5 + 3;
      } while (lVar5 != 0x80001);
      lVar5 = 0;
LAB_033b96cc:
      iVar2 = (int)lVar5;
      if (local_100 <= (int)lVar5) {
        iVar2 = local_100 + -1;
      }
      memcpy(auStack_fc,puVar8,(long)iVar2);
      auStack_fc[iVar2] = 0;
    }
    local_b0 = local_a4;
    local_a8 = 0x40;
    local_65 = 0;
    local_110 = PTR_DAT_04bb2bc0 + 0x10;
    local_a4[0] = 0;
    local_b8 = local_110;
    FUN_033b74f0(&local_130,param_1 + 0x348);
    FUN_033b97a0((undefined4)local_130,local_130._4_4_,param_1);
    if (*(int *)(param_1 + 0x70) != 4) {
      FUN_033b9984((undefined4)local_128,param_1);
    }
    FUN_033b9e08(param_1,(long)&local_128 + 4);
    if ((DAT_05231900 != 0) && (*(long *)(DAT_05231900 + 0x58) != 0)) {
      FUN_01613a48(local_118,0x44200000,*(long *)(DAT_05231900 + 0x58),2);
    }
  }
  return;
}



void FUN_03833350(long param_1,char *param_2,long param_3)

{
  uint uVar1;
  char cVar2;
  char cVar3;
  bool bVar4;
  bool bVar5;
  undefined4 uVar6;
  byte bVar7;
  float fVar8;
  long local_98 [4];
  undefined *puStack_78;
  undefined *local_70;
  undefined *puStack_68;
  undefined8 local_60;
  undefined *puStack_58;
  undefined *local_50;
  long lStack_48;
  
  bVar7 = *(byte *)(param_1 + 8);
  if ((bVar7 >> 5 & 1) == 0) {
    *(byte *)(param_1 + 8) = bVar7 | 2;
    return;
  }
  cVar2 = *param_2;
  if ((bVar7 & 1) != 0) {
    return;
  }
  if (((bVar7 & 4) != 0 && param_3 == 0) && cVar2 == '\0') {
    return;
  }
  cVar3 = param_2[1];
  switch(*(undefined4 *)(param_1 + 0x10)) {
  case 0:
    if (*(long *)(param_2 + 8) != 0) {
      local_98[0] = 0;
      local_98[1] = 0;
      local_98[2] = 0;
      FUN_02a556cc(local_98,*(long *)(param_2 + 8),0);
      local_98[0]._0_4_ = (float)local_98[0] * (float)local_98[0];
      bVar4 = true;
      bVar5 = false;
      if ((float)local_98[0] < 160000.0 && param_3 != 0) {
        bVar4 = false;
        bVar5 = true;
        if (!NAN((float)local_98[0])) {
          bVar4 = (float)local_98[0] < 0.0;
          bVar5 = false;
        }
      }
      if (bVar4 == bVar5 || *(int *)(param_1 + 0x10) == 1) {
        bVar4 = true;
        bVar5 = false;
        if (176400.0 <= (float)local_98[0]) {
          bVar4 = false;
          bVar5 = true;
          if (!NAN((float)local_98[0])) {
            bVar4 = (float)local_98[0] < 0.0;
            bVar5 = false;
          }
        }
        uVar6 = 0;
        if (bVar4 != bVar5) {
          uVar6 = 2;
        }
        *(undefined4 *)(param_1 + 0x10) = uVar6;
      }
    }
    break;
  case 1:
    if (*(long *)(param_2 + 8) == 0) {
LAB_038336f0:
      *(undefined4 *)(param_1 + 0x10) = 2;
    }
    else {
      local_98[0] = 0;
      local_98[1] = 0;
      local_98[2] = 0;
      FUN_02a556cc(local_98,*(long *)(param_2 + 8),0);
      fVar8 = (float)local_98[0] * (float)local_98[0];
      uVar6 = 2;
      if (fVar8 >= 176400.0 && 0.0 <= fVar8) {
        uVar6 = 0;
      }
      *(undefined4 *)(param_1 + 0x10) = uVar6;
      if (((fVar8 < 176400.0 || 0.0 > fVar8) && param_3 != 0) && (0.0 <= fVar8)) {
        if (115600.0 <= fVar8) {
          if (176400.0 <= fVar8) {
LAB_0383387c:
            *(undefined4 *)(param_1 + 0x10) = 0;
          }
        }
        else if ((*(long *)(param_3 + 8) != 0) && (*(long *)(param_3 + 0x10) != 0)) {
          *(undefined4 *)(param_1 + 0x10) = 3;
          local_98[0] = (ulong)CONCAT61((int6)((ulong)local_98[0] >> 0x10),
                                        *(undefined1 *)(param_3 + 1)) << 8;
          local_98[2] = *(undefined8 *)(param_3 + 0x18);
          puStack_78 = PTR_DAT_04bb2020 + 0x10;
          local_98[3] = 0;
          local_70 = PTR_DAT_04bb2120;
          local_98[1] = 0;
          local_60 = *(undefined8 *)(param_3 + 0x28);
          lStack_48 = param_1 + 0x38;
          local_50 = PTR_DAT_04bb2120;
          puStack_68 = puStack_78;
          puStack_58 = puStack_78;
          FUN_0383a710(DAT_05ae0670,local_98,0);
        }
      }
    }
    break;
  case 2:
    if (*(long *)(param_2 + 8) != 0) {
      local_98[0] = 0;
      local_98[1] = 0;
      local_98[2] = 0;
      FUN_02a556cc(local_98,*(long *)(param_2 + 8),0);
      fVar8 = (float)local_98[0] * (float)local_98[0];
      if ((param_3 != 0) && (0.0 <= fVar8)) {
        if (115600.0 <= fVar8) {
          if (176400.0 <= fVar8) goto LAB_0383387c;
        }
        else if ((*(long *)(param_3 + 8) != 0) && (*(long *)(param_3 + 0x10) != 0)) {
          *(undefined4 *)(param_1 + 0x10) = 3;
          local_98[0] = (ulong)CONCAT61((int6)((ulong)local_98[0] >> 0x10),
                                        *(undefined1 *)(param_3 + 1)) << 8;
          local_98[2] = *(undefined8 *)(param_3 + 0x18);
          puStack_78 = PTR_DAT_04bb2020 + 0x10;
          local_98[3] = 0;
          local_70 = PTR_DAT_04bb2120;
          local_98[1] = 0;
          local_60 = *(undefined8 *)(param_3 + 0x28);
          lStack_48 = param_1 + 0x38;
          local_50 = PTR_DAT_04bb2120;
          puStack_68 = puStack_78;
          puStack_58 = puStack_78;
          FUN_0383a710(DAT_05ae0670,local_98,0);
        }
      }
      if (*(int *)(param_1 + 0x10) == 3) {
        FUN_03833944(fVar8,param_1);
      }
    }
    break;
  case 3:
    if (*(long *)(param_2 + 8) == 0) {
      fVar8 = -1.0;
    }
    else {
      local_98[0] = 0;
      local_98[1] = 0;
      local_98[2] = 0;
      FUN_02a556cc(local_98,*(long *)(param_2 + 8),0);
      fVar8 = (float)local_98[0] * (float)local_98[0];
      if ((0.0 <= fVar8) && (129600.0 <= fVar8)) {
        FUN_03f45838(param_1 + 0x38);
      }
    }
    if (*(int *)(param_1 + 0x40) == 3) goto LAB_038336f0;
    if (*(int *)(param_1 + 0x40) == 2) {
      *(undefined4 *)(param_1 + 0x10) = 4;
      *(byte *)(param_1 + 8) = *(byte *)(param_1 + 8) | 2;
    }
    else if (*(int *)(param_1 + 0x10) != 4) break;
    goto LAB_03833730;
  case 4:
    if (*(long *)(param_2 + 8) == 0) {
      fVar8 = -1.0;
    }
    else {
      local_98[0] = 0;
      local_98[1] = 0;
      local_98[2] = 0;
      FUN_02a556cc(local_98,*(long *)(param_2 + 8),0);
      fVar8 = (float)local_98[0] * (float)local_98[0];
    }
LAB_03833730:
    FUN_038339b8(fVar8,param_1,param_3,cVar2 != '\0');
    if (*(int *)(param_1 + 0x10) == 5) {
LAB_038337c4:
      FUN_03833b88(fVar8,param_1,cVar2 != '\0',cVar3 != '\0');
    }
    break;
  case 5:
    fVar8 = 0.0;
    if ((bVar7 >> 2 & 1) != 0) {
      if (*(long *)(param_2 + 8) == 0) {
        fVar8 = -1.0;
      }
      else {
        local_98[0] = 0;
        local_98[1] = 0;
        local_98[2] = 0;
        FUN_02a556cc(0,local_98,*(long *)(param_2 + 8),0);
        fVar8 = (float)local_98[0] * (float)local_98[0];
      }
    }
    goto LAB_038337c4;
  case 6:
    if (*(long *)(param_2 + 8) == 0) {
      fVar8 = -1.0;
    }
    else {
      local_98[0] = 0;
      local_98[1] = 0;
      local_98[2] = 0;
      FUN_02a556cc(local_98,*(long *)(param_2 + 8),0);
      fVar8 = (float)local_98[0] * (float)local_98[0];
      if ((0.0 <= fVar8) && (fVar8 < 115600.0)) {
        FUN_03f45838(param_1 + 0x38);
      }
    }
    if (*(int *)(param_1 + 0x40) == 3) {
      *(undefined4 *)(param_1 + 0x10) = 4;
      *(byte *)(param_1 + 8) = *(byte *)(param_1 + 8) | 2;
LAB_038337a0:
      FUN_038339b8(fVar8,param_1,param_3,cVar2 != '\0');
    }
    else {
      if (*(int *)(param_1 + 0x40) == 2) {
        *(undefined4 *)(param_1 + 0x10) = 2;
      }
      else {
        if (*(int *)(param_1 + 0x10) == 4) goto LAB_038337a0;
        if (*(int *)(param_1 + 0x10) != 2) break;
      }
      FUN_03833884(fVar8,param_1,param_3);
    }
  }
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((*(uint *)(param_1 + 0xc) == uVar1) || ((uVar1 & 0xfffffffe) != 4)) {
    bVar7 = *(byte *)(param_1 + 8);
  }
  else {
    bVar7 = *(byte *)(param_1 + 8);
    if (*(int *)(param_1 + 0xc) != 5) {
      bVar7 = bVar7 | 0x40;
      goto LAB_03833814;
    }
  }
  bVar7 = bVar7 & 0xbf;
LAB_03833814:
  *(byte *)(param_1 + 8) = bVar7;
  *(uint *)(param_1 + 0xc) = uVar1;
  return;
}


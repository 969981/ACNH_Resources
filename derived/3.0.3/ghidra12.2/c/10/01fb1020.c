
void FUN_01fb1020(long *param_1,undefined4 *param_2,int param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  long lVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  long lVar9;
  undefined1 *puVar10;
  undefined4 local_210 [2];
  undefined *local_208;
  undefined *puStack_200;
  undefined4 local_1f8;
  undefined4 uStack_1f4;
  undefined *local_1f0;
  undefined4 local_1e8;
  undefined4 uStack_1e4;
  undefined8 local_1e0;
  undefined4 local_1d8;
  undefined4 uStack_1d4;
  undefined4 local_1d0;
  undefined4 uStack_1cc;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined2 local_1a8;
  undefined1 local_1a6;
  int local_1a4;
  undefined4 local_1a0;
  undefined8 local_19c;
  undefined8 local_194;
  undefined8 local_18c;
  undefined8 local_184;
  undefined8 local_17c;
  undefined4 local_174;
  undefined *local_170;
  undefined1 *puStack_168;
  int local_160;
  undefined1 auStack_15c [31];
  undefined1 local_13d;
  undefined *local_138;
  undefined1 *puStack_130;
  int local_128;
  undefined1 auStack_124 [31];
  undefined1 local_105;
  
  if ((int)param_1[0x15f1] == 0) {
    local_210[0] = param_2[0x1c];
    local_1f8 = param_2[0x22];
    uStack_1f4 = param_2[0x23];
    local_160 = 0x20;
    local_208 = PTR_DAT_04bbc1a0 + 0x10;
    puStack_200 = PTR_DAT_04bb2010 + 0x10;
    local_1e8 = param_2[0x26];
    uStack_1e4 = param_2[0x27];
    local_1e0 = *(undefined8 *)(param_2 + 0x28);
    local_1d8 = param_2[0x2a];
    uStack_1d4 = param_2[0x2b];
    local_1d0 = param_2[0x2c];
    uStack_1cc = param_2[0x2d];
    local_1b8 = *(undefined8 *)(param_2 + 0x32);
    uStack_1b0 = *(undefined8 *)(param_2 + 0x34);
    local_1a8 = CONCAT11(local_1a8._1_1_,*(undefined1 *)(param_2 + 0x36));
    local_1c8 = *(undefined8 *)(param_2 + 0x2e);
    uStack_1c0 = *(undefined8 *)(param_2 + 0x30);
    local_1a4 = param_2[0x37];
    local_1a0 = param_2[0x38];
    local_174 = param_2[0x43];
    local_17c = *(undefined8 *)(param_2 + 0x41);
    local_184 = *(undefined8 *)(param_2 + 0x3f);
    local_18c = *(undefined8 *)(param_2 + 0x3d);
    local_194 = *(undefined8 *)(param_2 + 0x3b);
    uVar7 = *param_2;
    local_19c = *(undefined8 *)(param_2 + 0x39);
    local_13d = 0;
    puVar1 = PTR_DAT_04bb2a08 + 0x10;
    local_1f0 = puStack_200;
    local_170 = puVar1;
    puStack_168 = auStack_15c;
    (**(code **)(*(long *)(param_2 + 0x44) + 0x18))(param_2 + 0x44);
    puVar10 = *(undefined1 **)(param_2 + 0x46);
    if (auStack_15c != puVar10) {
      (**(code **)(*(long *)(param_2 + 0x44) + 0x18))(param_2 + 0x44);
      lVar9 = 0;
      do {
        if (*(char *)(*(long *)(param_2 + 0x46) + lVar9) == '\0') goto LAB_01fb1268;
        lVar4 = *(long *)(param_2 + 0x46) + lVar9;
        if (*(char *)(lVar4 + 1) == '\0') {
          lVar9 = lVar9 + 1;
          goto LAB_01fb1268;
        }
        if (*(char *)(lVar4 + 2) == '\0') {
          lVar9 = lVar9 + 2;
          goto LAB_01fb1268;
        }
        lVar9 = lVar9 + 3;
      } while (lVar9 != 0x80001);
      lVar9 = 0;
LAB_01fb1268:
      iVar5 = (int)lVar9;
      if (local_160 <= (int)lVar9) {
        iVar5 = local_160 + -1;
      }
      memcpy(auStack_15c,puVar10,(long)iVar5);
      auStack_15c[iVar5] = 0;
    }
    local_128 = 0x20;
    local_105 = 0;
    puVar2 = PTR_DAT_04bb2028 + 0x10;
    local_170 = puVar2;
    local_138 = puVar1;
    puStack_130 = auStack_124;
    (**(code **)(*(long *)(param_2 + 0x52) + 0x18))(param_2 + 0x52);
    puVar10 = *(undefined1 **)(param_2 + 0x54);
    if (auStack_124 != puVar10) {
      (**(code **)(*(long *)(param_2 + 0x52) + 0x18))(param_2 + 0x52);
      lVar9 = 0;
      do {
        if (*(char *)(*(long *)(param_2 + 0x54) + lVar9) == '\0') goto LAB_01fb132c;
        lVar4 = *(long *)(param_2 + 0x54) + lVar9;
        if (*(char *)(lVar4 + 1) == '\0') {
          lVar9 = lVar9 + 1;
          goto LAB_01fb132c;
        }
        if (*(char *)(lVar4 + 2) == '\0') {
          lVar9 = lVar9 + 2;
          goto LAB_01fb132c;
        }
        lVar9 = lVar9 + 3;
      } while (lVar9 != 0x80001);
      lVar9 = 0;
LAB_01fb132c:
      iVar5 = (int)lVar9;
      if (local_128 <= (int)lVar9) {
        iVar5 = local_128 + -1;
      }
      memcpy(auStack_124,puVar10,(long)iVar5);
      auStack_124[iVar5] = 0;
    }
    if (*(char *)(param_2 + 0x1a) != '\0') {
      local_19c = CONCAT44(local_19c._4_4_,*(undefined4 *)(param_1[1] + 0x750));
    }
    local_138 = puVar2;
    if (*(char *)((long)param_2 + 0x69) != '\0') {
      puVar6 = (undefined4 *)FUN_01e57b44(param_1[2]);
      local_1a4 = *puVar6;
      local_1a0 = puVar6[1];
    }
    if ((*(byte *)(param_1 + 0x15f6) >> 1 & 1) == 0) {
      lVar9 = *param_1;
      uVar8 = 1;
    }
    else {
      *(undefined4 *)(param_1 + 0x240a) = uVar7;
      if ((int)param_1[0x240b] == 0) {
        *(undefined4 *)(param_1 + 0x240b) = param_2[0x18];
        if (param_2[0x18] == 2) {
          *(undefined4 *)(param_1 + 0x240d) = param_2[0x11];
        }
        else if (param_2[0x18] == 1) {
          *(undefined4 *)((long)param_1 + 0x1205c) = param_2[0xe];
          *(undefined4 *)(param_1 + 0x240c) = param_2[0xf];
          *(undefined4 *)((long)param_1 + 0x12064) = param_2[0x10];
        }
      }
      lVar9 = *param_1;
      uVar7 = 0x3e;
      uVar8 = 0;
    }
    (**(code **)(lVar9 + 0x38))(param_1,uVar7,local_210,uVar8);
  }
  else {
    if ((int)param_1[0x15f1] != 1) {
                    /* WARNING: Could not recover jumptable at 0x01fb1258. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x38))(param_1,1,0,0);
      return;
    }
    plVar3 = param_1 + 0x1619;
    if (0 < param_3) {
      FUN_01e63f1c(local_210);
      local_210[0] = 1;
      uStack_1b0 = CONCAT44(1,(undefined4)uStack_1b0);
      local_1a6 = 1;
      local_1a8 = 0x101;
      local_1a4 = param_3;
      if ((int)*plVar3 < *(int *)((long)param_1 + 0xb0cc)) {
        FUN_021920b0(plVar3,local_210);
      }
    }
    if ((int)*plVar3 < *(int *)((long)param_1 + 0xb0cc)) {
      FUN_021920b0(plVar3,param_2);
    }
  }
  return;
}


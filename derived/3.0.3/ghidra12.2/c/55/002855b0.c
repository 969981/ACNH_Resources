
long * FUN_002855b0(long *param_1,undefined8 param_2,uint param_3,int param_4,undefined4 param_5,
                   uint param_6,long param_7)

{
  uint uVar1;
  int iVar2;
  undefined *puVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  uint *puVar7;
  uint uVar8;
  uint uVar9;
  undefined8 local_190;
  uint local_188;
  undefined1 auStack_184 [16];
  byte local_174 [4];
  undefined4 local_170;
  uint local_16c [4];
  undefined4 local_15c;
  undefined4 local_154;
  undefined4 local_14c;
  undefined4 local_144;
  undefined4 local_13c;
  undefined4 local_134;
  undefined4 local_12c;
  undefined4 local_124;
  undefined4 local_11c;
  undefined4 local_114;
  undefined4 local_10c;
  undefined4 local_104;
  undefined4 local_fc;
  undefined4 local_f4;
  undefined4 local_ec;
  undefined4 local_e4;
  undefined4 local_dc;
  undefined4 local_d4;
  undefined4 local_cc;
  undefined4 local_c4;
  undefined4 local_bc;
  undefined4 local_b4;
  undefined4 local_ac;
  undefined4 local_a4;
  undefined4 local_9c;
  undefined4 local_94;
  undefined4 local_8c;
  undefined4 local_84;
  undefined4 local_7c;
  undefined4 local_74;
  int local_70;
  ErrorResultVariant aEStack_6c [12];
  
  if (param_1[5] == 0 || (int)param_1[0x125] != 0) {
    return (long *)0x0;
  }
  lVar5 = param_1[1];
  uVar1 = (param_4 + 0xfU & 0xfffffffc) + 4;
  if (((int)lVar5 - 0x20U < uVar1) ||
     ((**(code **)(*param_1 + 0x90))(param_1), *(char *)((long)param_1 + 0x96c) == -3)) {
    plVar4 = (long *)0x0;
  }
  else {
    local_70 = 0;
    iVar2 = (int)lVar5 - uVar1;
    local_170 = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_6c,(Result *)&local_170);
    puVar3 = PTR_DAT_04bcd350;
    local_16c[0] = 0;
    local_16c[2] = 0;
    local_15c = 0;
    local_154 = 0;
    local_14c = 0;
    local_144 = 0;
    local_13c = 0;
    local_134 = 0;
    local_12c = 0;
    local_124 = 0;
    local_11c = 0;
    local_114 = 0;
    local_10c = 0;
    local_104 = 0;
    local_fc = 0;
    local_f4 = 0;
    local_ec = 0;
    local_e4 = 0;
    local_dc = 0;
    local_d4 = 0;
    local_cc = 0;
    local_c4 = 0;
    local_bc = 0;
    local_b4 = 0;
    local_ac = 0;
    local_a4 = 0;
    local_9c = 0;
    local_94 = 0;
    local_8c = 0;
    local_84 = 0;
    local_7c = 0;
    local_74 = 0;
    lVar5 = FUN_0026c88c(*(undefined8 *)PTR_DAT_04bcd350);
    if (lVar5 == 0) {
      local_190 = (ulong)param_3 << 0x20;
    }
    else {
      uVar9 = 0;
      local_190 = 0;
      do {
        uVar8 = 1 << (ulong)(uVar9 & 0x1f);
        if ((uVar8 & param_3) != 0) {
          uVar6 = FUN_0026c88c(*(undefined8 *)puVar3);
          FUN_00282b1c(auStack_184,uVar6,*(undefined1 *)((long)param_1 + 0x96c),uVar9,local_174);
          FUN_00229780(&local_70,auStack_184);
          if (((local_70 == 0) && (local_174[0] != *(byte *)((long)param_1 + 0x96c))) &&
             (local_174[0] != 0xfd)) {
            uVar6 = FUN_0026c88c(*(undefined8 *)puVar3);
            FUN_00282c10(auStack_184,uVar6,*(undefined1 *)((long)param_1 + 0x96c),local_174[0],
                         &local_188);
            FUN_00229780(&local_70,auStack_184);
            uVar8 = local_188 & param_3;
            if (uVar8 == 1 << (ulong)(local_174[0] & 0x1f)) {
              local_190 = CONCAT44(uVar8 | local_190._4_4_,(int)local_190);
            }
            else {
              lVar5 = (long)(int)local_190;
              local_190 = CONCAT44(local_190._4_4_,(int)local_190 + 1);
              local_174[lVar5 * 8 + 4] = local_174[0];
              local_16c[lVar5 * 2] = uVar8;
            }
          }
          param_3 = param_3 & (uVar8 ^ 0xffffffff);
        }
        uVar9 = uVar9 + 1;
      } while (uVar9 != 0x20);
    }
    FUN_002ac270(param_1 + 6,param_2,param_4,param_6 & 1,*(undefined1 *)(param_7 + 1));
    FUN_0026dfe0(param_1,local_190._4_4_,uVar1,iVar2,param_5,param_7);
    if (0 < (int)local_190) {
      local_190 = local_190 & 0xffffffff;
      puVar7 = local_16c;
      do {
        FUN_00285080(param_1,(char)puVar7[-1],*puVar7,uVar1,iVar2,param_5,param_7);
        puVar7 = puVar7 + 2;
        local_190 = local_190 - 1;
      } while (local_190 != 0);
    }
    plVar4 = (long *)0x0;
    if ((int)param_1[0x125] != 0) {
      plVar4 = param_1 + 6;
    }
  }
  return plVar4;
}



void FUN_023265c0(undefined4 *param_1,long param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 *puVar3;
  short *psVar4;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined4 local_100;
  undefined8 local_fc;
  undefined8 local_f4;
  undefined8 local_ec;
  undefined *local_e0;
  undefined1 *puStack_d8;
  undefined4 local_d0;
  undefined1 local_cc [127];
  undefined1 local_4d;
  undefined4 local_48;
  undefined2 local_44;
  undefined8 local_40;
  undefined4 local_34;
  short local_18 [4];
  
  FUN_02556920(local_18,param_2 + 0x1ee8);
  if (local_18[0] == -2) {
    psVar4 = (short *)PTR_DAT_04bb37e0;
  }
  else {
    puVar3 = *(undefined8 **)(param_2 + 0x60);
    if (puVar3 == (undefined8 *)0x0) {
      if ((DAT_052461c0 & 1) == 0) {
        iVar2 = __cxa_guard_acquire(&DAT_052461c0);
        puVar3 = &DAT_05240280;
        if (iVar2 != 0) {
          FUN_016fcf10(&DAT_05240280);
          FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
          __cxa_guard_release(&DAT_052461c0);
        }
      }
      else {
        puVar3 = &DAT_05240280;
      }
    }
    local_34 = 0;
    local_110 = 0xffffffff00000000;
    uStack_108 = 0;
    local_100 = 0;
    local_fc = 0x3f800000;
    puStack_d8 = local_cc;
    local_d0 = 0x80;
    psVar4 = local_18;
    local_4d = 0;
    local_cc[0] = 0;
    local_e0 = PTR_DAT_04bb2d88 + 0x10;
    local_40 = 0;
    local_44 = 0;
    local_f4 = 0;
    local_ec = 0;
    local_48 = 7;
    FUN_017327f0(puVar3[0x290],local_18,&local_34,&local_110,0xffffffff);
  }
  uVar1 = *(undefined4 *)(psVar4 + 2);
  *param_1 = *(undefined4 *)psVar4;
  param_1[1] = uVar1;
  return;
}



undefined8 FUN_022c9ac0(byte *param_1,uint param_2,long param_3,undefined4 param_4,uint param_5)

{
  undefined4 *puVar1;
  bool bVar2;
  int iVar3;
  ulong uVar4;
  undefined8 *puVar5;
  int *piVar6;
  uint uVar7;
  undefined8 *puVar8;
  byte local_74 [4];
  undefined *local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  byte local_5c [4];
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  byte local_48;
  
  if (((param_5 & 1) == 0) && (uVar4 = FUN_0122a4e0(param_2), (uVar4 & 1) == 0)) {
    bVar2 = DAT_055c1b60 == &DAT_055c1b58;
    puVar8 = DAT_055c1b60 + -8;
    if (((param_2 & 0xffff) != 0) && (puVar5 = DAT_055c1b60, puVar8 != &DAT_055c1b18)) {
      do {
        puVar5 = (undefined8 *)puVar5[1];
        param_2 = param_2 - 1;
        bVar2 = puVar5 == &DAT_055c1b58;
      } while (!bVar2 && (param_2 & 0xffff) != 0);
      puVar8 = puVar5 + -8;
    }
    puVar5 = &DAT_055c04a0;
    if (!bVar2) {
      puVar5 = puVar8;
    }
    uVar7 = 0;
    for (piVar6 = &DAT_0516b10c; piVar6[-1] != *(int *)(puVar5 + 7); piVar6 = piVar6 + 2) {
      if (0x37 < uVar7) {
        piVar6 = &DAT_0516b108;
        goto LAB_022c9c8c;
      }
      if (*piVar6 == *(int *)(puVar5 + 7)) goto LAB_022c9c8c;
      uVar7 = uVar7 + 2;
    }
    piVar6 = piVar6 + -1;
LAB_022c9c8c:
    FUN_017baf44(*piVar6);
    local_74[0] = *param_1;
    bVar2 = 7 < local_74[0];
    if (bVar2) {
      local_74[0] = 0xff;
    }
    puVar1 = (undefined4 *)(&DAT_0547bacc + ((long)(char)local_74[0] & 0xffffffffU) * 4);
    if (bVar2) {
      puVar1 = (undefined4 *)&DAT_0547bacc;
    }
    FUN_0252d8f0(&local_58,local_74);
    *puVar1 = (undefined4)local_58;
    puVar1[1] = local_58._4_4_;
  }
  else {
    local_50 = 0;
    if (DAT_05aed670 == 0) {
      puVar8 = &DAT_055c04a0;
    }
    else {
      puVar8 = &DAT_055c04a0;
      if (*(long *)(DAT_05aed670 + 0x330) != 0) {
        puVar8 = (undefined8 *)
                 (**(code **)(*DAT_05aed668 + 0x18))
                           (DAT_05aed668,*(undefined4 *)(DAT_05aed670 + 0x338));
        iVar3 = FUN_006bd550(*puVar8,0);
        puVar8 = (undefined8 *)PTR_DAT_04bc3a80;
        if (iVar3 != 0x758f7eaf) {
          puVar8 = &DAT_055c04a0;
        }
      }
    }
    local_4c = *(undefined4 *)(puVar8 + 7);
    local_48 = FUN_017baf44();
    local_48 = local_48 & 1;
    local_68 = *(undefined4 *)(param_3 + 8);
    uStack_64 = *(undefined4 *)(param_3 + 0xc);
    local_5c[0] = *param_1;
    local_58 = PTR_DAT_04bb6268 + 0x10;
    if (7 < local_5c[0]) {
      local_5c[0] = 0xff;
    }
    local_70 = PTR_DAT_04bb2010 + 0x10;
    uVar4 = FUN_022c96d8(local_5c,param_2,&local_70,param_4,param_5 & 1,&local_58);
    if ((uVar4 & 1) != 0) {
      return 1;
    }
  }
  FUN_011c1480(param_1,PTR_DAT_04bb37e0,0);
  return 0;
}



uint FUN_020815ac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  short *psVar4;
  ulong uVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined *local_58;
  undefined4 local_50;
  undefined4 local_4c;
  byte local_48;
  
  lVar1 = DAT_0520f098;
  if (DAT_0520f098 != 0) {
    local_50 = 0;
    lVar6 = *(long *)PTR_DAT_04bb2720;
    if (lVar6 == 0) {
      puVar7 = &DAT_055c04a0;
    }
    else {
      puVar7 = &DAT_055c04a0;
      if (*(long *)(lVar6 + 0x330) != 0) {
        puVar7 = (undefined8 *)
                 (**(code **)(*DAT_05aed668 + 0x18))(DAT_05aed668,*(undefined4 *)(lVar6 + 0x338));
        iVar2 = FUN_006bd550(*puVar7,0);
        puVar7 = (undefined8 *)PTR_DAT_04bc3a80;
        if (iVar2 != 0x758f7eaf) {
          puVar7 = &DAT_055c04a0;
        }
      }
    }
    local_4c = *(undefined4 *)(puVar7 + 7);
    local_48 = FUN_017baf44();
    local_48 = local_48 & 1;
    local_58 = PTR_DAT_04bb3140 + 0x10;
    psVar4 = (short *)FUN_01a5190c(&local_58,*param_4,param_3,0);
    if ((*psVar4 != -2) && (uVar5 = FUN_0277d7b4(psVar4,param_2), (uVar5 & 1) != 0)) {
      uVar3 = FUN_01522be0(lVar1,param_3,param_4);
      goto LAB_020816b8;
    }
  }
  uVar3 = 0;
LAB_020816b8:
  return uVar3 & 1;
}


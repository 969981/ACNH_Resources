
void FUN_014935b0(long param_1,long *param_2)

{
  undefined *puVar1;
  undefined1 uVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  int *piVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined *local_48;
  undefined4 local_40;
  undefined4 local_3c;
  ulong local_38;
  
  if (param_2 == (long *)0x0) {
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  if (((*PTR_DAT_04bb5928 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_04bb5928), iVar4 != 0))
  {
    *(undefined **)PTR_DAT_04bb5920 = PTR_DAT_04bb3290 + 0x10;
    __cxa_guard_release(PTR_DAT_04bb5928);
  }
  uVar5 = (**(code **)(*param_2 + 0x20))(param_2,PTR_DAT_04bb5920);
  puVar1 = PTR_DAT_04bb43c0;
  if ((uVar5 & 1) != 0) {
    local_3c = *(undefined4 *)((long)param_2 + 0x28c);
    local_38 = 0;
    local_48 = PTR_DAT_04bc0510 + 0x10;
    local_40 = (undefined4)param_2[0x51];
    lVar8 = *(long *)PTR_DAT_04bb43c0;
    uVar3 = FUN_0277d6c4(&local_40);
    if (*(long *)puVar1 != 0) {
      lVar8 = *(long *)(lVar8 + 0x57e58);
      uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
      if ((uVar3 < *(uint *)(lVar8 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar3 * 8) != 0)) {
        FUN_0277d6c4(param_2 + 0x51);
      }
    }
    local_40 = 0;
    *(int *)(param_1 + 0x3d0) = *(int *)(param_1 + 0x3d0) + -1;
    lVar8 = *(long *)PTR_DAT_04bb2720;
    if (lVar8 == 0) {
      puVar7 = &DAT_055c04a0;
    }
    else {
      puVar7 = &DAT_055c04a0;
      if (*(long *)(lVar8 + 0x330) != 0) {
        puVar7 = (undefined8 *)
                 (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                           (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar8 + 0x338));
        iVar4 = FUN_006bd550(*puVar7,0);
        puVar7 = (undefined8 *)PTR_DAT_04bc3a80;
        if (iVar4 != 0x758f7eaf) {
          puVar7 = &DAT_055c04a0;
        }
      }
    }
    local_3c = *(undefined4 *)(puVar7 + 7);
    uVar2 = FUN_017baf44();
    local_38 = CONCAT71(local_38._1_7_,uVar2) & 0xffffffffffffff01;
    local_48 = PTR_DAT_04bb3140 + 0x10;
    piVar6 = (int *)FUN_014fbd50(&local_48,(int)param_2[0x5a],param_2 + 0x58);
    if ((int)param_2[0x46] == *piVar6) {
      FUN_014fbb00(&local_48,(int)param_2[0x5a],param_2 + 0x58);
    }
  }
  return;
}


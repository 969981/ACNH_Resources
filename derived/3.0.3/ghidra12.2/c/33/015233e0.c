
uint FUN_015233e0(undefined8 param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined *local_58;
  undefined4 local_50;
  undefined4 local_4c;
  uint local_48;
  undefined1 local_44;
  undefined8 *local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined1 auStack_18 [8];
  
  if (*(uint *)(param_2 + 5) < 2) {
    local_58 = (undefined *)*param_2;
    local_4c = *(undefined4 *)((long)param_2 + 0xc);
    local_44 = *(undefined1 *)((long)param_2 + 0x14);
    local_50 = *(undefined4 *)(param_2 + 1);
    local_48 = *(uint *)(param_2 + 2);
    local_40 = &DAT_048f9750;
    local_38 = *(undefined4 *)(param_2 + 4);
    uStack_34 = *(undefined4 *)((long)param_2 + 0x24);
    uVar2 = FUN_01521d80(param_1,&local_58);
  }
  else {
    local_50 = 0;
    if (DAT_05aed670 == 0) {
      puVar5 = &DAT_055c04a0;
    }
    else {
      puVar5 = &DAT_055c04a0;
      if (*(long *)(DAT_05aed670 + 0x330) != 0) {
        puVar5 = (undefined8 *)
                 (**(code **)(*DAT_05aed668 + 0x18))
                           (DAT_05aed668,*(undefined4 *)(DAT_05aed670 + 0x338));
        iVar3 = FUN_006bd550(*puVar5,0);
        puVar5 = (undefined8 *)PTR_DAT_04bc3a80;
        if (iVar3 != 0x758f7eaf) {
          puVar5 = &DAT_055c04a0;
        }
      }
    }
    local_4c = *(undefined4 *)(puVar5 + 7);
    uVar1 = FUN_017baf44();
    local_48 = CONCAT31(local_48._1_3_,uVar1) & 0xffffff01;
    local_58 = PTR_DAT_04bb3140 + 0x10;
    uVar4 = FUN_01a50240(auStack_18,&local_58,*(undefined4 *)(param_2 + 5),param_2 + 3);
    uVar2 = FUN_015224d0(uVar4,auStack_18,param_2 + 3,param_2 + 5,
                         *(undefined1 *)((long)param_2 + 0x14));
  }
  return uVar2 & 1;
}


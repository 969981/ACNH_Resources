
void FUN_014e728c(undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,long param_4,
                 long param_5,undefined2 *param_6,undefined4 *param_7)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  undefined8 local_50;
  undefined4 local_48;
  
  *(undefined4 *)(param_4 + 0x28) = *(undefined4 *)(param_5 + 8);
  *(undefined4 *)(param_4 + 0x2c) = *(undefined4 *)(param_5 + 0xc);
  *(undefined4 *)(param_4 + 0x30) = *(undefined4 *)(param_5 + 0x10);
  *(undefined4 *)(param_4 + 0x34) = *(undefined4 *)(param_5 + 0x14);
  local_50 = *(undefined8 *)(param_4 + 0x28);
  iVar1 = *(int *)(param_5 + 0x18);
  local_48 = *(undefined4 *)(param_4 + 0x30);
  *(int *)(param_4 + 0x38) = iVar1;
  if (iVar1 - 2U < 4) {
    if (DAT_05aed670 == 0) {
      puVar3 = &DAT_055c04a0;
    }
    else {
      puVar3 = &DAT_055c04a0;
      if (*(long *)(DAT_05aed670 + 0x330) != 0) {
        puVar3 = (undefined8 *)
                 (**(code **)(*DAT_05aed668 + 0x18))
                           (DAT_05aed668,*(undefined4 *)(DAT_05aed670 + 0x338));
        iVar2 = FUN_006bd550(*puVar3,0);
        puVar3 = (undefined8 *)PTR_DAT_04bc3a80;
        if (iVar2 != 0x758f7eaf) {
          puVar3 = &DAT_055c04a0;
        }
      }
    }
    uVar4 = FUN_0153e900(&local_50,iVar1,*(undefined4 *)(puVar3 + 7));
    *(undefined4 *)(param_4 + 0x28) = uVar4;
    *(undefined4 *)(param_4 + 0x2c) = param_2;
    *(undefined4 *)(param_4 + 0x30) = param_3;
  }
  *(undefined2 *)(param_4 + 0x60) = *param_6;
  *(undefined1 *)(param_4 + 0x62) = *(undefined1 *)(param_6 + 1);
  *(undefined1 *)(param_4 + 99) = *(undefined1 *)((long)param_6 + 3);
  *(undefined4 *)(param_4 + 100) = *(undefined4 *)(param_6 + 2);
  *(undefined4 *)(param_4 + 0x8c) = *param_7;
  *(undefined4 *)(param_4 + 0x18) = 1;
  return;
}


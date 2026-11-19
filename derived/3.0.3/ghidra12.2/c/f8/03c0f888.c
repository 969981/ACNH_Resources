
/* WARNING: Removing unreachable block (ram,0x03c0f9e0) */
/* WARNING: Removing unreachable block (ram,0x03c0f960) */
/* WARNING: Removing unreachable block (ram,0x03c0f928) */
/* WARNING: Removing unreachable block (ram,0x03c0f9a0) */
/* WARNING: Removing unreachable block (ram,0x03c0fa20) */

void FUN_03c0f888(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined *local_60;
  char *pcStack_58;
  
  *(undefined8 *)(param_1 + 0x128) = 0;
  *(undefined8 *)(param_1 + 0x130) = 0;
  puVar2 = DAT_05aec740;
  *(undefined8 *)(param_1 + 0x118) = 0;
  *(undefined8 *)(param_1 + 0x120) = 0;
  *(undefined8 *)(param_1 + 0x108) = 0;
  *(undefined8 *)(param_1 + 0x110) = 0;
  *(undefined8 *)(param_1 + 0x100) = 0;
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  pcStack_58 = &DAT_04b7cf20;
  local_60 = puVar1;
  uVar3 = FUN_038c6d48(*puVar2,&local_60,param_2,8,1,0);
  *(undefined8 *)(param_1 + 0x100) = uVar3;
  pcStack_58 = &DAT_04b7cf26;
  local_60 = puVar1;
  uVar3 = FUN_038c6d48(puVar2[1],&local_60,param_2,8,1,0);
  *(undefined8 *)(param_1 + 0x108) = uVar3;
  pcStack_58 = &DAT_04b7cf2c;
  local_60 = puVar1;
  uVar3 = FUN_038c6d48(puVar2[2],&local_60,param_2,8,1,0);
  *(undefined8 *)(param_1 + 0x110) = uVar3;
  pcStack_58 = &DAT_04b7cf32;
  local_60 = puVar1;
  uVar3 = FUN_038c6d48(puVar2[3],&local_60,param_2,8,1,0);
  *(undefined8 *)(param_1 + 0x118) = uVar3;
  pcStack_58 = s_cScene_04b7cf38;
  local_60 = puVar1;
  uVar3 = FUN_038c6d48(puVar2[4],&local_60,param_2,8,1,0);
  *(undefined8 *)(param_1 + 0x120) = uVar3;
  pcStack_58 = "cOthers";
  local_60 = puVar1;
  uVar3 = FUN_038c6d48(0,&local_60,param_2,8,1,1);
  *(undefined8 *)(param_1 + 0x130) = uVar3;
  return;
}


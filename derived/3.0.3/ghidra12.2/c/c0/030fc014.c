
/* WARNING: Removing unreachable block (ram,0x030fc8b0) */
/* WARNING: Removing unreachable block (ram,0x030fc858) */
/* WARNING: Removing unreachable block (ram,0x030fc81c) */
/* WARNING: Removing unreachable block (ram,0x030fc798) */
/* WARNING: Removing unreachable block (ram,0x030fc740) */
/* WARNING: Removing unreachable block (ram,0x030fc704) */
/* WARNING: Removing unreachable block (ram,0x030fc680) */
/* WARNING: Removing unreachable block (ram,0x030fc628) */
/* WARNING: Removing unreachable block (ram,0x030fc5ec) */
/* WARNING: Removing unreachable block (ram,0x030fc568) */
/* WARNING: Removing unreachable block (ram,0x030fc510) */
/* WARNING: Removing unreachable block (ram,0x030fc4d4) */
/* WARNING: Removing unreachable block (ram,0x030fc450) */
/* WARNING: Removing unreachable block (ram,0x030fc3f8) */
/* WARNING: Removing unreachable block (ram,0x030fc3bc) */
/* WARNING: Removing unreachable block (ram,0x030fc338) */
/* WARNING: Removing unreachable block (ram,0x030fc2e0) */
/* WARNING: Removing unreachable block (ram,0x030fc2a4) */
/* WARNING: Removing unreachable block (ram,0x030fc220) */
/* WARNING: Removing unreachable block (ram,0x030fc1c8) */
/* WARNING: Removing unreachable block (ram,0x030fc18c) */
/* WARNING: Removing unreachable block (ram,0x030fc108) */
/* WARNING: Removing unreachable block (ram,0x030fc0b0) */
/* WARNING: Removing unreachable block (ram,0x030fc060) */
/* WARNING: Removing unreachable block (ram,0x030fc068) */
/* WARNING: Removing unreachable block (ram,0x030fc100) */
/* WARNING: Removing unreachable block (ram,0x030fc13c) */
/* WARNING: Removing unreachable block (ram,0x030fc194) */
/* WARNING: Removing unreachable block (ram,0x030fc218) */
/* WARNING: Removing unreachable block (ram,0x030fc254) */
/* WARNING: Removing unreachable block (ram,0x030fc2ac) */
/* WARNING: Removing unreachable block (ram,0x030fc330) */
/* WARNING: Removing unreachable block (ram,0x030fc36c) */
/* WARNING: Removing unreachable block (ram,0x030fc3c4) */
/* WARNING: Removing unreachable block (ram,0x030fc448) */
/* WARNING: Removing unreachable block (ram,0x030fc484) */
/* WARNING: Removing unreachable block (ram,0x030fc4dc) */
/* WARNING: Removing unreachable block (ram,0x030fc560) */
/* WARNING: Removing unreachable block (ram,0x030fc59c) */
/* WARNING: Removing unreachable block (ram,0x030fc5f4) */
/* WARNING: Removing unreachable block (ram,0x030fc678) */
/* WARNING: Removing unreachable block (ram,0x030fc6b4) */
/* WARNING: Removing unreachable block (ram,0x030fc70c) */
/* WARNING: Removing unreachable block (ram,0x030fc790) */
/* WARNING: Removing unreachable block (ram,0x030fc7cc) */
/* WARNING: Removing unreachable block (ram,0x030fc824) */
/* WARNING: Removing unreachable block (ram,0x030fc8a8) */
/* WARNING: Removing unreachable block (ram,0x030fc8e4) */

void FUN_030fc014(long param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined **local_50;
  int local_48;
  
  *(undefined4 *)(param_1 + 0x1bc0) = 0;
  puVar2 = PTR_DAT_04bb27a8;
  puVar1 = &DAT_05636dd8;
  if (*(long *)(*(long *)PTR_DAT_04bb27a8 + 0x38) != 0) {
    puVar1 = (undefined8 *)(*(long *)(*(long *)PTR_DAT_04bb27a8 + 0x38) + 0x148);
  }
  if (puVar1[1] != 0) {
    local_50 = &PTR_LAB_04a9b110;
    local_48 = DAT_05636e58;
    if ((DAT_05636e58 != 0) && (uVar3 = FUN_02a59140(puVar1,&local_50), (uVar3 & 1) != 0)) {
      *(int *)(param_1 + 0x1bc0) = *(int *)(param_1 + 0x1bc0) + 1;
    }
  }
  puVar1 = &DAT_05636dd8;
  if (*(long *)(*(long *)puVar2 + 0x38) != 0) {
    puVar1 = (undefined8 *)(*(long *)(*(long *)puVar2 + 0x38) + 0x148);
  }
  if (puVar1[1] != 0) {
    local_50 = &PTR_LAB_04a9b110;
    local_48 = DAT_05636e5c;
    if ((DAT_05636e5c != 0) && (uVar3 = FUN_02a59140(puVar1,&local_50), (uVar3 & 1) != 0)) {
      *(int *)(param_1 + 0x1bc0) = *(int *)(param_1 + 0x1bc0) + 1;
    }
  }
  puVar1 = &DAT_05636dd8;
  if (*(long *)(*(long *)puVar2 + 0x38) != 0) {
    puVar1 = (undefined8 *)(*(long *)(*(long *)puVar2 + 0x38) + 0x148);
  }
  if (puVar1[1] != 0) {
    local_50 = &PTR_LAB_04a9b110;
    local_48 = DAT_05636e60;
    if ((DAT_05636e60 != 0) && (uVar3 = FUN_02a59140(puVar1,&local_50), (uVar3 & 1) != 0)) {
      *(int *)(param_1 + 0x1bc0) = *(int *)(param_1 + 0x1bc0) + 1;
    }
  }
  puVar1 = &DAT_05636dd8;
  if (*(long *)(*(long *)puVar2 + 0x38) != 0) {
    puVar1 = (undefined8 *)(*(long *)(*(long *)puVar2 + 0x38) + 0x148);
  }
  if (puVar1[1] != 0) {
    local_50 = &PTR_LAB_04a9b110;
    local_48 = DAT_05636e64;
    if ((DAT_05636e64 != 0) && (uVar3 = FUN_02a59140(puVar1,&local_50), (uVar3 & 1) != 0)) {
      *(int *)(param_1 + 0x1bc0) = *(int *)(param_1 + 0x1bc0) + 1;
    }
  }
  puVar1 = &DAT_05636dd8;
  if (*(long *)(*(long *)puVar2 + 0x38) != 0) {
    puVar1 = (undefined8 *)(*(long *)(*(long *)puVar2 + 0x38) + 0x148);
  }
  if (puVar1[1] != 0) {
    local_50 = &PTR_LAB_04a9b110;
    local_48 = DAT_05636e68;
    if ((DAT_05636e68 != 0) && (uVar3 = FUN_02a59140(puVar1,&local_50), (uVar3 & 1) != 0)) {
      *(int *)(param_1 + 0x1bc0) = *(int *)(param_1 + 0x1bc0) + 1;
    }
  }
  puVar1 = &DAT_05636dd8;
  if (*(long *)(*(long *)puVar2 + 0x38) != 0) {
    puVar1 = (undefined8 *)(*(long *)(*(long *)puVar2 + 0x38) + 0x148);
  }
  if (puVar1[1] != 0) {
    local_50 = &PTR_LAB_04a9b110;
    local_48 = DAT_05636e6c;
    if ((DAT_05636e6c != 0) && (uVar3 = FUN_02a59140(puVar1,&local_50), (uVar3 & 1) != 0)) {
      *(int *)(param_1 + 0x1bc0) = *(int *)(param_1 + 0x1bc0) + 1;
    }
  }
  puVar1 = &DAT_05636dd8;
  if (*(long *)(*(long *)puVar2 + 0x38) != 0) {
    puVar1 = (undefined8 *)(*(long *)(*(long *)puVar2 + 0x38) + 0x148);
  }
  if (puVar1[1] != 0) {
    local_50 = &PTR_LAB_04a9b110;
    local_48 = DAT_05636e70;
    if ((DAT_05636e70 != 0) && (uVar3 = FUN_02a59140(puVar1,&local_50), (uVar3 & 1) != 0)) {
      *(int *)(param_1 + 0x1bc0) = *(int *)(param_1 + 0x1bc0) + 1;
    }
  }
  puVar1 = &DAT_05636dd8;
  if (*(long *)(*(long *)puVar2 + 0x38) != 0) {
    puVar1 = (undefined8 *)(*(long *)(*(long *)puVar2 + 0x38) + 0x148);
  }
  if (puVar1[1] != 0) {
    local_50 = &PTR_LAB_04a9b110;
    local_48 = DAT_05636e74;
    if ((DAT_05636e74 != 0) && (uVar3 = FUN_02a59140(puVar1,&local_50), (uVar3 & 1) != 0)) {
      *(int *)(param_1 + 0x1bc0) = *(int *)(param_1 + 0x1bc0) + 1;
    }
  }
  puVar1 = &DAT_05636dd8;
  if (*(long *)(*(long *)puVar2 + 0x38) != 0) {
    puVar1 = (undefined8 *)(*(long *)(*(long *)puVar2 + 0x38) + 0x148);
  }
  if (puVar1[1] != 0) {
    local_50 = &PTR_LAB_04a9b110;
    local_48 = DAT_05636e78;
    if ((DAT_05636e78 != 0) && (uVar3 = FUN_02a59140(puVar1,&local_50), (uVar3 & 1) != 0)) {
      *(int *)(param_1 + 0x1bc0) = *(int *)(param_1 + 0x1bc0) + 1;
    }
  }
  puVar1 = &DAT_05636dd8;
  if (*(long *)(*(long *)puVar2 + 0x38) != 0) {
    puVar1 = (undefined8 *)(*(long *)(*(long *)puVar2 + 0x38) + 0x148);
  }
  if (puVar1[1] != 0) {
    local_50 = &PTR_LAB_04a9b110;
    local_48 = DAT_05636e7c;
    if ((DAT_05636e7c != 0) && (uVar3 = FUN_02a59140(puVar1,&local_50), (uVar3 & 1) != 0)) {
      *(int *)(param_1 + 0x1bc0) = *(int *)(param_1 + 0x1bc0) + 1;
    }
  }
  puVar1 = &DAT_05636dd8;
  if (*(long *)(*(long *)puVar2 + 0x38) != 0) {
    puVar1 = (undefined8 *)(*(long *)(*(long *)puVar2 + 0x38) + 0x148);
  }
  if (puVar1[1] != 0) {
    local_50 = &PTR_LAB_04a9b110;
    local_48 = DAT_05636e80;
    if ((DAT_05636e80 != 0) && (uVar3 = FUN_02a59140(puVar1,&local_50), (uVar3 & 1) != 0)) {
      *(int *)(param_1 + 0x1bc0) = *(int *)(param_1 + 0x1bc0) + 1;
    }
  }
  puVar1 = &DAT_05636dd8;
  if (*(long *)(*(long *)puVar2 + 0x38) != 0) {
    puVar1 = (undefined8 *)(*(long *)(*(long *)puVar2 + 0x38) + 0x148);
  }
  if (puVar1[1] != 0) {
    local_50 = &PTR_LAB_04a9b110;
    local_48 = DAT_05636e84;
    if ((DAT_05636e84 != 0) && (uVar3 = FUN_02a59140(puVar1,&local_50), (uVar3 & 1) != 0)) {
      *(int *)(param_1 + 0x1bc0) = *(int *)(param_1 + 0x1bc0) + 1;
    }
  }
  puVar1 = &DAT_05636dd8;
  if (*(long *)(*(long *)puVar2 + 0x38) != 0) {
    puVar1 = (undefined8 *)(*(long *)(*(long *)puVar2 + 0x38) + 0x148);
  }
  if (puVar1[1] != 0) {
    local_50 = &PTR_LAB_04a9b110;
    local_48 = DAT_05636e88;
    if ((DAT_05636e88 != 0) && (uVar3 = FUN_02a59140(puVar1,&local_50), (uVar3 & 1) != 0)) {
      *(int *)(param_1 + 0x1bc0) = *(int *)(param_1 + 0x1bc0) + 1;
    }
  }
  puVar1 = &DAT_05636dd8;
  if (*(long *)(*(long *)puVar2 + 0x38) != 0) {
    puVar1 = (undefined8 *)(*(long *)(*(long *)puVar2 + 0x38) + 0x148);
  }
  if (puVar1[1] != 0) {
    local_50 = &PTR_LAB_04a9b110;
    local_48 = DAT_05636e8c;
    if ((DAT_05636e8c != 0) && (uVar3 = FUN_02a59140(puVar1,&local_50), (uVar3 & 1) != 0)) {
      *(int *)(param_1 + 0x1bc0) = *(int *)(param_1 + 0x1bc0) + 1;
    }
  }
  puVar1 = &DAT_05636dd8;
  if (*(long *)(*(long *)puVar2 + 0x38) != 0) {
    puVar1 = (undefined8 *)(*(long *)(*(long *)puVar2 + 0x38) + 0x148);
  }
  if (puVar1[1] != 0) {
    local_50 = &PTR_LAB_04a9b110;
    local_48 = DAT_05636e90;
    if ((DAT_05636e90 != 0) && (uVar3 = FUN_02a59140(puVar1,&local_50), (uVar3 & 1) != 0)) {
      *(int *)(param_1 + 0x1bc0) = *(int *)(param_1 + 0x1bc0) + 1;
    }
  }
  puVar1 = &DAT_05636dd8;
  if (*(long *)(*(long *)puVar2 + 0x38) != 0) {
    puVar1 = (undefined8 *)(*(long *)(*(long *)puVar2 + 0x38) + 0x148);
  }
  if (puVar1[1] != 0) {
    local_50 = &PTR_LAB_04a9b110;
    local_48 = DAT_05636e94;
    if ((DAT_05636e94 != 0) && (uVar3 = FUN_02a59140(puVar1,&local_50), (uVar3 & 1) != 0)) {
      *(int *)(param_1 + 0x1bc0) = *(int *)(param_1 + 0x1bc0) + 1;
    }
  }
  return;
}


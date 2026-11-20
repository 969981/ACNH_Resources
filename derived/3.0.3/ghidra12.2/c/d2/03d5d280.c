
/* WARNING: Removing unreachable block (ram,0x03d5d464) */
/* WARNING: Removing unreachable block (ram,0x03d5d2b4) */
/* WARNING: Removing unreachable block (ram,0x03d5d390) */
/* WARNING: Removing unreachable block (ram,0x03d5d53c) */

void FUN_03d5d280(long param_1,uint param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  
  lVar4 = *(long *)(param_1 + 0x218);
  puVar1 = (undefined8 *)(lVar4 + 0x60);
  puVar2 = puVar1 + (ulong)param_2 * 5;
  if (0x1f < param_2) {
    puVar2 = puVar1;
  }
  puVar2[2] = FUN_03d5d654;
  puVar2[3] = 0;
  *puVar2 = &PTR_LAB_04b8fbe8;
  puVar2[1] = param_1;
  *(undefined1 *)(puVar2 + 4) = 1;
  puVar2 = puVar1 + (ulong)param_2 * 5;
  if (0x1f < param_2) {
    puVar2 = puVar1;
  }
  if (*(char *)(puVar2 + 4) == '\0') {
    lVar3 = lVar4 + 0x560 + (ulong)param_2 * 0x28;
    if (0x1f < param_2) {
      lVar3 = lVar4 + 0x560;
    }
    if (*(char *)(lVar3 + 0x20) != '\0') goto LAB_03d5d354;
    lVar3 = lVar4 + 0xa60 + (ulong)param_2 * 0x28;
    if (0x1f < param_2) {
      lVar3 = lVar4 + 0xa60;
    }
    if (*(char *)(lVar3 + 0x20) != '\0') goto LAB_03d5d354;
    lVar3 = lVar4 + 0xf60 + (ulong)param_2 * 0x28;
    if (0x1f < param_2) {
      lVar3 = lVar4 + 0xf60;
    }
    if (*(char *)(lVar3 + 0x20) != '\0') goto LAB_03d5d354;
    uVar5 = *(uint *)(lVar4 + 0x14b4) & (1 << (ulong)(param_2 & 0x1f) ^ 0xffffffffU);
  }
  else {
LAB_03d5d354:
    uVar5 = *(uint *)(lVar4 + 0x14b4) | 1 << (ulong)(param_2 & 0x1f);
  }
  *(uint *)(lVar4 + 0x14b4) = uVar5;
  lVar4 = *(long *)(param_1 + 0x218);
  puVar1 = (undefined8 *)(lVar4 + 0x560) + (ulong)param_2 * 5;
  if (0x1f < param_2) {
    puVar1 = (undefined8 *)(lVar4 + 0x560);
  }
  puVar1[2] = FUN_03d5d654;
  puVar1[3] = 0;
  *puVar1 = &PTR_LAB_04b8fbe8;
  puVar1[1] = param_1;
  *(undefined1 *)(puVar1 + 4) = 1;
  lVar3 = lVar4 + 0x60 + (ulong)param_2 * 0x28;
  if (0x1f < param_2) {
    lVar3 = lVar4 + 0x60;
  }
  if (*(char *)(lVar3 + 0x20) == '\0') {
    lVar3 = lVar4 + 0x560 + (ulong)param_2 * 0x28;
    if (0x1f < param_2) {
      lVar3 = lVar4 + 0x560;
    }
    if (*(char *)(lVar3 + 0x20) != '\0') goto LAB_03d5d428;
    lVar3 = lVar4 + 0xa60 + (ulong)param_2 * 0x28;
    if (0x1f < param_2) {
      lVar3 = lVar4 + 0xa60;
    }
    if (*(char *)(lVar3 + 0x20) != '\0') goto LAB_03d5d428;
    lVar3 = lVar4 + 0xf60 + (ulong)param_2 * 0x28;
    if (0x1f < param_2) {
      lVar3 = lVar4 + 0xf60;
    }
    if (*(char *)(lVar3 + 0x20) != '\0') goto LAB_03d5d428;
    uVar5 = *(uint *)(lVar4 + 0x14b4) & (1 << (ulong)(param_2 & 0x1f) ^ 0xffffffffU);
  }
  else {
LAB_03d5d428:
    uVar5 = *(uint *)(lVar4 + 0x14b4) | 1 << (ulong)(param_2 & 0x1f);
  }
  *(uint *)(lVar4 + 0x14b4) = uVar5;
  lVar4 = *(long *)(param_1 + 0x218);
  puVar1 = (undefined8 *)(lVar4 + 0xa60) + (ulong)param_2 * 5;
  if (0x1f < param_2) {
    puVar1 = (undefined8 *)(lVar4 + 0xa60);
  }
  *(undefined1 *)(puVar1 + 4) = 1;
  puVar1[2] = FUN_03d5d654;
  puVar1[3] = 0;
  *puVar1 = &PTR_LAB_04b8fbe8;
  puVar1[1] = param_1;
  lVar3 = lVar4 + 0x60 + (ulong)param_2 * 0x28;
  if (0x1f < param_2) {
    lVar3 = lVar4 + 0x60;
  }
  if (*(char *)(lVar3 + 0x20) == '\0') {
    lVar3 = lVar4 + 0x560 + (ulong)param_2 * 0x28;
    if (0x1f < param_2) {
      lVar3 = lVar4 + 0x560;
    }
    if (*(char *)(lVar3 + 0x20) != '\0') goto LAB_03d5d500;
    lVar3 = lVar4 + 0xa60 + (ulong)param_2 * 0x28;
    if (0x1f < param_2) {
      lVar3 = lVar4 + 0xa60;
    }
    if (*(char *)(lVar3 + 0x20) != '\0') goto LAB_03d5d500;
    lVar3 = lVar4 + 0xf60 + (ulong)param_2 * 0x28;
    if (0x1f < param_2) {
      lVar3 = lVar4 + 0xf60;
    }
    if (*(char *)(lVar3 + 0x20) != '\0') goto LAB_03d5d500;
    uVar5 = *(uint *)(lVar4 + 0x14b4) & (1 << (ulong)(param_2 & 0x1f) ^ 0xffffffffU);
  }
  else {
LAB_03d5d500:
    uVar5 = *(uint *)(lVar4 + 0x14b4) | 1 << (ulong)(param_2 & 0x1f);
  }
  *(uint *)(lVar4 + 0x14b4) = uVar5;
  lVar4 = *(long *)(param_1 + 0x218);
  puVar1 = (undefined8 *)(lVar4 + 0xf60) + (ulong)param_2 * 5;
  if (0x1f < param_2) {
    puVar1 = (undefined8 *)(lVar4 + 0xf60);
  }
  puVar1[2] = FUN_03d5d654;
  puVar1[3] = 0;
  *puVar1 = &PTR_LAB_04b8fbe8;
  puVar1[1] = param_1;
  *(undefined1 *)(puVar1 + 4) = 1;
  lVar3 = lVar4 + 0x60 + (ulong)param_2 * 0x28;
  if (0x1f < param_2) {
    lVar3 = lVar4 + 0x60;
  }
  if (*(char *)(lVar3 + 0x20) == '\0') {
    lVar3 = lVar4 + 0x560 + (ulong)param_2 * 0x28;
    if (0x1f < param_2) {
      lVar3 = lVar4 + 0x560;
    }
    if (*(char *)(lVar3 + 0x20) == '\0') {
      lVar3 = lVar4 + 0xa60 + (ulong)param_2 * 0x28;
      if (0x1f < param_2) {
        lVar3 = lVar4 + 0xa60;
      }
      if (*(char *)(lVar3 + 0x20) == '\0') {
        lVar3 = lVar4 + 0xf60 + (ulong)param_2 * 0x28;
        if (0x1f < param_2) {
          lVar3 = lVar4 + 0xf60;
        }
        if (*(char *)(lVar3 + 0x20) == '\0') {
          uVar5 = *(uint *)(lVar4 + 0x14b4) & (1 << (ulong)(param_2 & 0x1f) ^ 0xffffffffU);
          goto LAB_03d5d5e8;
        }
      }
    }
  }
  uVar5 = *(uint *)(lVar4 + 0x14b4) | 1 << (ulong)(param_2 & 0x1f);
LAB_03d5d5e8:
  *(uint *)(lVar4 + 0x14b4) = uVar5;
  return;
}

